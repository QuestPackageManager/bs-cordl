#pragma once
// IWYU pragma private; include "UnityEngine/NetworkReachability.hpp"
#include "UnityEngine/zzzz__NetworkReachability_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::NetworkReachability::NetworkReachability(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::NetworkReachability::NetworkReachability()   {
}
constexpr ::UnityEngine::NetworkReachability  UnityEngine::NetworkReachability::NotReachable{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::NetworkReachability  UnityEngine::NetworkReachability::ReachableViaCarrierDataNetwork{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::NetworkReachability  UnityEngine::NetworkReachability::ReachableViaLocalAreaNetwork{static_cast<int32_t>(0x2)};
