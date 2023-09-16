/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalmheir <kalmheir@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:26:58 by kalmheir          #+#    #+#             */
/*   Updated: 2023/09/16 14:42:07 by kalmheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main(void) {
    Data *data = new Data;
    data->byte = 'k';
    uintptr_t serialized = Serializer::serialize(data);
    Data *deserialized = Serializer::deserialize(serialized);
    std::cout << "data: " << data->byte << std::endl;
    std::cout << "data address: " << reinterpret_cast<unsigned long>(data) << std::endl;
    std::cout << "serialized: " << serialized << std::endl;
    std::cout << "deserialized: " << deserialized->byte << std::endl;
    delete data;
    return (0);
}