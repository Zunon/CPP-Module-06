/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalmheir <kalmheir@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:26:49 by kalmheir          #+#    #+#             */
/*   Updated: 2023/09/16 14:34:36 by kalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t	Serializer::serialize(Data *data) {
    return (reinterpret_cast<uintptr_t>(data));
}

Data		*Serializer::deserialize(uintptr_t raw) {
    return (reinterpret_cast<Data *>(raw));
}