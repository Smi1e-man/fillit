/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyakoven <yyakoven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 13:45:12 by yyakoven          #+#    #+#             */
/*   Updated: 2018/11/22 18:41:57 by yyakoven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FILLIT_H
# define __FILLIT_H

# include "gnl/get_next_line.h"
# include "gnl/libft/includes/libft.h"
# include <fcntl.h>
# include <stdio.h>

typedef struct		s_ttrmn
{
	int				s[4][2];
	char			letter;
	int				dots;
	int				squares;
	struct s_ttrmn	*next;
}					t_ttrmn;

void				add_elem(t_ttrmn **last, char letter);
t_ttrmn				*find_elem(t_ttrmn **list, char letter);
int					add_to_block(t_ttrmn *elem, char *line, int linenum);
void				lst_del(t_ttrmn **list);

#endif