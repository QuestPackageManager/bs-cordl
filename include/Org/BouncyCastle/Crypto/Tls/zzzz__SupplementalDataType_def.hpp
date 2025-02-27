#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/SupplementalDataType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SupplementalDataType)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class SupplementalDataType;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::SupplementalDataType);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.SupplementalDataType
class CORDL_TYPE SupplementalDataType : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Tls::SupplementalDataType* New_ctor();

  /// @brief Method .ctor, addr 0x24221e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SupplementalDataType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SupplementalDataType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SupplementalDataType(SupplementalDataType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SupplementalDataType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SupplementalDataType(SupplementalDataType const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1285 };

  /// @brief Field user_mapping_data offset 0xffffffff size 0x4
  static constexpr int32_t user_mapping_data{ static_cast<int32_t>(0x0) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::SupplementalDataType, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::SupplementalDataType);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::SupplementalDataType*, "Org.BouncyCastle.Crypto.Tls", "SupplementalDataType");
