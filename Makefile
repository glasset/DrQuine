# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glasset <glasset@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/12 12:25:02 by glasset           #+#    #+#              #
#    Updated: 2016/07/12 12:41:37 by glasset          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PR1 = Colleen
PR2 = Grace
PR3 = Sully

.PHONY: all
all:  $(PR1) $(PR2) $(PR3)

$(PR1):
	@clang -Wall -Wextra -Werror -o $(PR1) $(PR1).c
$(PR2):
	@clang -Wall -Wextra -Werror -o $(PR2) $(PR2).c
S(PR3):
	@clang -Wall -Wextra -Werror -o $(PR3) $(PR3).c 

.PHONY: fclean
fclean:
	@rm  $(PR1) $(PR2) $(PR3)

.PHONY: re
re: fclean all
