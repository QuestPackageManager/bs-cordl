#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__SymmetricAlgorithm_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DES)
namespace System::Security::Cryptography {
class KeySizes;
}
// Forward declare root types
namespace System::Security::Cryptography {
class DES;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::DES);
// Type: System.Security.Cryptography::DES
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::DES*
class CORDL_TYPE DES : public ::System::Security::Cryptography::SymmetricAlgorithm {
public:
  // Declarations
  __declspec(property(get = get_Key, put = set_Key))::ArrayW<uint8_t, ::Array<uint8_t>*> Key;

  /// @brief Field s_legalBlockSizes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_legalBlockSizes,
                             put = setStaticF_s_legalBlockSizes))::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> s_legalBlockSizes;

  /// @brief Field s_legalKeySizes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_legalKeySizes,
                             put = setStaticF_s_legalKeySizes))::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> s_legalKeySizes;

  /// @brief Method Create, addr 0x26da4b0, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::DES* Create();

  /// @brief Method IsLegalKeySize, addr 0x26da5d0, size 0x20, virtual false, abstract: false, final false
  static inline bool IsLegalKeySize(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey);

  /// @brief Method IsSemiWeakKey, addr 0x26da090, size 0x214, virtual false, abstract: false, final false
  static inline bool IsSemiWeakKey(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey);

  /// @brief Method IsWeakKey, addr 0x26d9f68, size 0x128, virtual false, abstract: false, final false
  static inline bool IsWeakKey(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey);

  static inline ::System::Security::Cryptography::DES* New_ctor();

  /// @brief Method QuadWordFromBigEndian, addr 0x26da5f0, size 0x98, virtual false, abstract: false, final false
  static inline uint64_t QuadWordFromBigEndian(::ArrayW<uint8_t, ::Array<uint8_t>*> block);

  /// @brief Method .ctor, addr 0x26d9e04, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> getStaticF_s_legalBlockSizes();

  static inline ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> getStaticF_s_legalKeySizes();

  /// @brief Method get_Key, addr 0x26d9e80, size 0xe8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Key();

  static inline void setStaticF_s_legalBlockSizes(::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> value);

  static inline void setStaticF_s_legalKeySizes(::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> value);

  /// @brief Method set_Key, addr 0x26da2a4, size 0x20c, virtual true, abstract: false, final false
  inline void set_Key(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DES();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DES", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DES(DES&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DES", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DES(DES const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::DES, 0x48>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::DES);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DES*, "System.Security.Cryptography", "DES");
