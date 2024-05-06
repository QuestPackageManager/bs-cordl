#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/AixStructs/in6_addr.hpp"
#include "System/Net/NetworkInformation/AixStructs/zzzz__in6_addr_def.hpp"
// Ctor Parameters [CppParam { name: "u6_addr8", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::System::Net::NetworkInformation::AixStructs::in6_addr::in6_addr(::ArrayW<uint8_t, ::Array<uint8_t>*> u6_addr8) noexcept {
  this->u6_addr8 = u6_addr8;
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::AixStructs::in6_addr::in6_addr() {}
