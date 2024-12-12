#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/CompressionMethod.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CompressionMethod)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class CompressionMethod;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::CompressionMethod);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.CompressionMethod
class CORDL_TYPE CompressionMethod : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Tls::CompressionMethod* New_ctor();

  /// @brief Method .ctor, addr 0x23e6df8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompressionMethod();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompressionMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompressionMethod(CompressionMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompressionMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompressionMethod(CompressionMethod const&) = delete;

  /// @brief Field DEFLATE offset 0xffffffff size 0x1
  static constexpr uint8_t DEFLATE{ static_cast<uint8_t>(0x1u) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1203 };

  /// @brief Field cls_null offset 0xffffffff size 0x1
  static constexpr uint8_t cls_null{ static_cast<uint8_t>(0x0u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::CompressionMethod, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::CompressionMethod);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::CompressionMethod*, "Org.BouncyCastle.Crypto.Tls", "CompressionMethod");
