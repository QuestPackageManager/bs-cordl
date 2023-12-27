#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__CompressionAlgorithmTag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag::CompressionAlgorithmTag(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag::CompressionAlgorithmTag() {}
constexpr ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag Org::BouncyCastle::Bcpg::CompressionAlgorithmTag::Uncompressed{ static_cast<int32_t>(0x0) };
constexpr ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag Org::BouncyCastle::Bcpg::CompressionAlgorithmTag::Zip{ static_cast<int32_t>(0x1) };
constexpr ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag Org::BouncyCastle::Bcpg::CompressionAlgorithmTag::ZLib{ static_cast<int32_t>(0x2) };
constexpr ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag Org::BouncyCastle::Bcpg::CompressionAlgorithmTag::BZip2{ static_cast<int32_t>(0x3) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
