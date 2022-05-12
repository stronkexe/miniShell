/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:41:41 by ael-oual          #+#    #+#             */
/*   Updated: 2022/05/12 13:21:02 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
#define MINISHELL_H
#include<stdio.h>
#include "../pipex/pipex_42_1337.h"
#include "../libft/libft.h"

void std_files(char *std_out, int fd);//minishell intra video
void here_doc(char **argc);
void redirect_output(char *std_out, char c);
void redirect_input(char *std_in);
void g_redirections(char *cmd,char **eng,char **env,char *red); //we can addapt it 

#endif