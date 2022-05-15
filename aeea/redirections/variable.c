/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variable.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:22:02 by ael-oual          #+#    #+#             */
/*   Updated: 2022/05/13 18:34:54 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
#include <stdio.h>
#include <string.h>

char *env_var(char *cmd)
{
    if(cmd[0] == '$')
    {
        cmd = cmd + 1;
        cmd = getenv(cmd);
    }
    return cmd;
}

/*
int main(int argc, char *argv[])
{
  printf(" %s ",env_var("$var"));
}
*/