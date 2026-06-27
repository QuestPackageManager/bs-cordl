#pragma once
// IWYU pragma private; include "Oculus/Platform/ServiceProvider.hpp"
#include "Oculus/Platform/zzzz__ServiceProvider_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::ServiceProvider::ServiceProvider(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::ServiceProvider::ServiceProvider()   {
}
constexpr ::Oculus::Platform::ServiceProvider  Oculus::Platform::ServiceProvider::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::ServiceProvider  Oculus::Platform::ServiceProvider::Dropbox{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::ServiceProvider  Oculus::Platform::ServiceProvider::Facebook{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::ServiceProvider  Oculus::Platform::ServiceProvider::Google{static_cast<int32_t>(0x3)};
constexpr ::Oculus::Platform::ServiceProvider  Oculus::Platform::ServiceProvider::Instagram{static_cast<int32_t>(0x4)};
constexpr ::Oculus::Platform::ServiceProvider  Oculus::Platform::ServiceProvider::RemoteMedia{static_cast<int32_t>(0x5)};
