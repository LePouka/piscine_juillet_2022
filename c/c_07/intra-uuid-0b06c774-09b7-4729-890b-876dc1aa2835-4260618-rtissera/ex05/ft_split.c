/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtissera <rtissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:28:18 by rtissera          #+#    #+#             */
/*   Updated: 2022/07/28 16:56:15 by rtissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int     check_if_sep(char c, char *charset)
{
        int     i;

        i = 0;
        while (charset[i])
        {
                if (c == charset[i])
                        return (1);
                i++;
        }
        return (0);
}

int     count_sub_str(char *str, char *charset)
{
        int     i;
        int     count;

        i = 0;
        count = 0;
        while (str[i])
        {
                while (str[i] != '\0' && check_if_sep(str[i], charset))
                        i++;
                if (str[i])
                        count++;
                while (str[i] != '\0' && !check_if_sep(str[i], charset))
                        i++;
        }
        return (count);
}

int     ft_strlen(char *str, char *charset)
{
        int     i;

        i = 0;
        while (str[i] != '\0' && !check_if_sep(str[i], charset))
                i++;
        return (i);
}

char    *ft_word(char *str, char *charset)
{
        int             len_word;
        int             i;
        char    *word;

        i = 0;
        len_word = ft_strlen(str, charset);
        word = (char *)malloc(sizeof(char) * (len_word + 1));
        while (i < len_word)
        {
                word[i] = str[i];
                i++;
        }
        word[i] = '\0';
        return (word);
}

char    **ft_split(char *str, char *charset)
{
        char    **string;
        int             i;

        i = 0;
        string = (char **)malloc(sizeof(char *)
                        * (count_sub_str(str, charset) + 1));
        while (*str)
        {
                while (*str != '\0' && check_if_sep(*str, charset))
                        str++;
                if (*str)
                {
                        string[i] = ft_word(str, charset);
                        i++;
                }
                while (*str && !check_if_sep(*str, charset))
                        str++;
        }
        string[i] = 0;
        return (string);
}
