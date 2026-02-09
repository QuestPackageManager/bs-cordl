#pragma once
// IWYU pragma private; include "Oculus/Platform/MediaContentType.hpp"
#include "Oculus/Platform/zzzz__MediaContentType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::MediaContentType::MediaContentType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MediaContentType::MediaContentType()   {
}
constexpr ::Oculus::Platform::MediaContentType  Oculus::Platform::MediaContentType::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::MediaContentType  Oculus::Platform::MediaContentType::Photo{static_cast<int32_t>(0x1)};
