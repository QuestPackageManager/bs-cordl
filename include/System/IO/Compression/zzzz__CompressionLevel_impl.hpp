#pragma once
// IWYU pragma private; include "System/IO/Compression/CompressionLevel.hpp"
#include "System/IO/Compression/zzzz__CompressionLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::Compression::CompressionLevel::CompressionLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::IO::Compression::CompressionLevel::CompressionLevel()   {
}
constexpr ::System::IO::Compression::CompressionLevel  System::IO::Compression::CompressionLevel::Optimal{static_cast<int32_t>(0x0)};
constexpr ::System::IO::Compression::CompressionLevel  System::IO::Compression::CompressionLevel::Fastest{static_cast<int32_t>(0x1)};
constexpr ::System::IO::Compression::CompressionLevel  System::IO::Compression::CompressionLevel::NoCompression{static_cast<int32_t>(0x2)};
