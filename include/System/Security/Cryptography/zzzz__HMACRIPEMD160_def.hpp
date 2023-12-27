#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__HMAC_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HMACRIPEMD160)
// Forward declare root types
namespace System::Security::Cryptography {
class HMACRIPEMD160;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::HMACRIPEMD160);
// Type: System.Security.Cryptography::HMACRIPEMD160
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 97, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2934))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2936))
// CS Name: ::System.Security.Cryptography::HMACRIPEMD160*
class CORDL_TYPE HMACRIPEMD160 : public ::System::Security::Cryptography::HMAC {
public:
  // Declarations
  static inline ::System::Security::Cryptography::HMACRIPEMD160* New_ctor();

  /// @brief Method .ctor addr 0x245ea7c size 0x24 virtual false final false
  inline void _ctor();

  static inline ::System::Security::Cryptography::HMACRIPEMD160* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method .ctor addr 0x245eaa0 size 0xc0 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  // Ctor Parameters [CppParam { name: "", ty: "HMACRIPEMD160", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HMACRIPEMD160(HMACRIPEMD160&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HMACRIPEMD160", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HMACRIPEMD160(HMACRIPEMD160 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HMACRIPEMD160();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::HMACRIPEMD160, 0x68>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::HMACRIPEMD160);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::HMACRIPEMD160*, "System.Security.Cryptography", "HMACRIPEMD160");
