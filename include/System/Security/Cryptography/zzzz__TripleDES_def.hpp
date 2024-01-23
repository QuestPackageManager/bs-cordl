#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__SymmetricAlgorithm_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TripleDES)
namespace System::Security::Cryptography {
class KeySizes;
}
// Forward declare root types
namespace System::Security::Cryptography {
class TripleDES;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::TripleDES);
// Type: System.Security.Cryptography::TripleDES
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2973))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2974))
// CS Name: ::System.Security.Cryptography::TripleDES*
class CORDL_TYPE TripleDES : public ::System::Security::Cryptography::SymmetricAlgorithm {
public:
  // Declarations
  /// @brief Field s_legalBlockSizes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_legalBlockSizes,
                             put = setStaticF_s_legalBlockSizes))::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> s_legalBlockSizes;

  /// @brief Field s_legalKeySizes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_legalKeySizes,
                             put = setStaticF_s_legalKeySizes))::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> s_legalKeySizes;

  __declspec(property(get = get_Key, put = set_Key))::ArrayW<uint8_t, ::Array<uint8_t>*> Key;

  static inline void setStaticF_s_legalBlockSizes(::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> value);

  static inline ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> getStaticF_s_legalBlockSizes();

  static inline void setStaticF_s_legalKeySizes(::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> value);

  static inline ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> getStaticF_s_legalKeySizes();

  static inline ::System::Security::Cryptography::TripleDES* New_ctor();

  /// @brief Method .ctor, addr 0x246adfc, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Key, addr 0x246ae84, size 0xc8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Key();

  /// @brief Method set_Key, addr 0x246b088, size 0x1e4, virtual true, abstract: false, final false
  inline void set_Key(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method Create, addr 0x246b26c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::TripleDES* Create();

  /// @brief Method IsWeakKey, addr 0x246af4c, size 0x13c, virtual false, abstract: false, final false
  static inline bool IsWeakKey(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey);

  /// @brief Method EqualBytes, addr 0x246b410, size 0x1a0, virtual false, abstract: false, final false
  static inline bool EqualBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey, int32_t start1, int32_t start2, int32_t count);

  /// @brief Method IsLegalKeySize, addr 0x246b324, size 0x24, virtual false, abstract: false, final false
  static inline bool IsLegalKeySize(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey);

  // Ctor Parameters [CppParam { name: "", ty: "TripleDES", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TripleDES(TripleDES&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TripleDES", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TripleDES(TripleDES const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TripleDES();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::TripleDES, 0x48>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::TripleDES);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::TripleDES*, "System.Security.Cryptography", "TripleDES");
