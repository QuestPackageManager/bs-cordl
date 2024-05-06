#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__SymmetricAlgorithm_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(Rijndael)
namespace System::Security::Cryptography {
class KeySizes;
}
// Forward declare root types
namespace System::Security::Cryptography {
class Rijndael;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::Rijndael);
// Type: System.Security.Cryptography::Rijndael
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::Rijndael*
class CORDL_TYPE Rijndael : public ::System::Security::Cryptography::SymmetricAlgorithm {
public:
  // Declarations
  /// @brief Field s_legalBlockSizes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_legalBlockSizes,
                             put = setStaticF_s_legalBlockSizes))::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> s_legalBlockSizes;

  /// @brief Field s_legalKeySizes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_legalKeySizes,
                             put = setStaticF_s_legalKeySizes))::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> s_legalKeySizes;

  static inline ::System::Security::Cryptography::Rijndael* New_ctor();

  /// @brief Method .ctor, addr 0x27e12ec, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> getStaticF_s_legalBlockSizes();

  static inline ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> getStaticF_s_legalKeySizes();

  static inline void setStaticF_s_legalBlockSizes(::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> value);

  static inline void setStaticF_s_legalKeySizes(::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Rijndael();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Rijndael", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Rijndael(Rijndael&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Rijndael", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Rijndael(Rijndael const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::Rijndael, 0x48>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::Rijndael);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::Rijndael*, "System.Security.Cryptography", "Rijndael");
