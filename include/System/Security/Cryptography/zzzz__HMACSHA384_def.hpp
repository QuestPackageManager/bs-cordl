#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__HMAC_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HMACSHA384)
// Forward declare root types
namespace System::Security::Cryptography {
class HMACSHA384;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::HMACSHA384);
// Type: System.Security.Cryptography::HMACSHA384
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 98, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2934))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2939))
// CS Name: ::System.Security.Cryptography::HMACSHA384*
class CORDL_TYPE HMACSHA384 : public ::System::Security::Cryptography::HMAC {
public:
  // Declarations
  /// @brief Field m_useLegacyBlockSize, offset 0x61, size 0x1
  __declspec(property(get = __get_m_useLegacyBlockSize, put = __set_m_useLegacyBlockSize)) bool m_useLegacyBlockSize;

  __declspec(property(get = get_BlockSize)) int32_t BlockSize;

  constexpr bool& __get_m_useLegacyBlockSize();

  constexpr bool const& __get_m_useLegacyBlockSize() const;

  constexpr void __set_m_useLegacyBlockSize(bool value);

  static inline ::System::Security::Cryptography::HMACSHA384* New_ctor();

  /// @brief Method .ctor, addr 0x245f078, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Security::Cryptography::HMACSHA384* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method .ctor, addr 0x245f09c, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method get_BlockSize, addr 0x245f18c, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_BlockSize();

  // Ctor Parameters [CppParam { name: "", ty: "HMACSHA384", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HMACSHA384(HMACSHA384&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HMACSHA384", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HMACSHA384(HMACSHA384 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HMACSHA384();

public:
  /// @brief Field m_useLegacyBlockSize, offset: 0x61, size: 0x1, def value: None
  bool ___m_useLegacyBlockSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::HMACSHA384, 0x68>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::HMACSHA384, ___m_useLegacyBlockSize) == 0x61, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::HMACSHA384);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::HMACSHA384*, "System.Security.Cryptography", "HMACSHA384");
