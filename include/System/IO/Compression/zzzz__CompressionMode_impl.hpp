#pragma once
// IWYU pragma private; include "System/IO/Compression/CompressionMode.hpp"
#include "System/IO/Compression/zzzz__CompressionMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::Compression::CompressionMode::CompressionMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::IO::Compression::CompressionMode::CompressionMode()   {
}
constexpr ::System::IO::Compression::CompressionMode  System::IO::Compression::CompressionMode::Decompress{static_cast<int32_t>(0x0)};
constexpr ::System::IO::Compression::CompressionMode  System::IO::Compression::CompressionMode::Compress{static_cast<int32_t>(0x1)};
