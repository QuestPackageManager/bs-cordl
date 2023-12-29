#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CipherType)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class CipherType;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::CipherType);
// Type: Org.BouncyCastle.Crypto.Tls::CipherType
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1198))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::CipherType*
class CORDL_TYPE CipherType : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Tls::CipherType* New_ctor();

  /// @brief Method .ctor addr 0xeebc30 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CipherType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CipherType(CipherType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CipherType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CipherType(CipherType const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CipherType();

public:
  /// @brief Field stream offset 0xffffffff size 0x4
  static constexpr int32_t stream{ static_cast<int32_t>(0x0) };

  /// @brief Field block offset 0xffffffff size 0x4
  static constexpr int32_t block{ static_cast<int32_t>(0x1) };

  /// @brief Field aead offset 0xffffffff size 0x4
  static constexpr int32_t aead{ static_cast<int32_t>(0x2) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::CipherType, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::CipherType);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::CipherType*, "Org.BouncyCastle.Crypto.Tls", "CipherType");
