/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalmheir <kalmheir@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:26:46 by kalmheir          #+#    #+#             */
/*   Updated: 2023/09/16 14:32:08 by kalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <cstdint>

typedef struct s_data {
	unsigned char byte;
}			Data;

class Serializer {
	public:
		static uintptr_t	serialize(Data *);
		static Data			*deserialize(uintptr_t);
};

#endif