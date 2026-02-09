#pragma once
// IWYU pragma private; include "Oculus/Platform/InitConfigOptions.hpp"
#include "Oculus/Platform/zzzz__InitConfigOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::InitConfigOptions::InitConfigOptions(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::InitConfigOptions::InitConfigOptions()   {
}
constexpr ::Oculus::Platform::InitConfigOptions  Oculus::Platform::InitConfigOptions::DisableP2pNetworking{static_cast<uint32_t>(0x1cde5ddeu)};
constexpr ::Oculus::Platform::InitConfigOptions  Oculus::Platform::InitConfigOptions::EnableCowatching{static_cast<uint32_t>(0x7dd1c46eu)};
