/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cw_get_instructions_params.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galemair <galemair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 14:17:12 by galemair          #+#    #+#             */
/*   Updated: 2018/10/26 17:41:45 by galemair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "corewar.h"
//#include <stdlib.h>
#include <stdio.h>
/*
**		return -1 when an error occurs
*/
int		get_params(unsigned int ocp)
{
	int m_register;
	int	m_direct;
	int m_index;
	printf("before %u\n", ocp);	
	ocp = ocp << 30;
	ocp = ocp >> 30;
	printf("after %u\n", ocp);
	m_register = 0x1;
	m_direct = 0x2;
	m_index = 0x3;
	if (ocp == 0)
	//ocp = ocp << 
	return (1);
}
//int		get_params(unsigned int *tab, t_processus *process)
//{
//	int opc_index;
//	unsigned int ocp;
//	int	i;
//
//	printf("%u", sizeof(int));
//	i = 0;
//	ocp = process->ocp;
//	opc_index = process->opc - 1;
//	if (ocp > 255 || process.opc > 16)
//		return (-1);
//	while (i < op_tab[opc_index])
//	{
//		ocp = ocp << 2;
//	}
//	return (0);
//}
//int		main(int argc, char **argv)
//{
//	t_processus processus;
//	processus.opcode = atoi(argv[1]);
//	processus.ocp = atoi(argv[2]);
//	get_params(NULL, processus);
//	return (0);
//}
int		main(int argc, char **argv)
{
	get_params(4);
	return (0);
}
