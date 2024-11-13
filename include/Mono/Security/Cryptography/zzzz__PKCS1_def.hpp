#pragma once
// IWYU pragma private; include "Mono/Security/Cryptography/PKCS1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PKCS1)
namespace System::Security::Cryptography {
class HashAlgorithm;
}
namespace System::Security::Cryptography {
class RSA;
}
// Forward declare root types
namespace Mono::Security::Cryptography {
class PKCS1;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Cryptography::PKCS1);
// Type: Mono.Security.Cryptography::PKCS1
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security::Cryptography {
// Is value type: false
// CS Name: ::Mono.Security.Cryptography::PKCS1*
class CORDL_TYPE PKCS1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field emptySHA1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_emptySHA1, put = setStaticF_emptySHA1)) ::ArrayW<uint8_t, ::Array<uint8_t>*> emptySHA1;

  /// @brief Field emptySHA256, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_emptySHA256, put = setStaticF_emptySHA256)) ::ArrayW<uint8_t, ::Array<uint8_t>*> emptySHA256;

  /// @brief Field emptySHA384, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_emptySHA384, put = setStaticF_emptySHA384)) ::ArrayW<uint8_t, ::Array<uint8_t>*> emptySHA384;

  /// @brief Field emptySHA512, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_emptySHA512, put = setStaticF_emptySHA512)) ::ArrayW<uint8_t, ::Array<uint8_t>*> emptySHA512;

  /// @brief Method Compare, addr 0x3c0329c, size 0x8c, virtual false, abstract: false, final false
  static inline bool Compare(::ArrayW<uint8_t, ::Array<uint8_t>*> array1, ::ArrayW<uint8_t, ::Array<uint8_t>*> array2);

  /// @brief Method CreateFromName, addr 0x3c038c0, size 0x408, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::HashAlgorithm* CreateFromName(::StringW name);

  /// @brief Method Encode_v15, addr 0x3c03cc8, size 0x330, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Encode_v15(::System::Security::Cryptography::HashAlgorithm* hash, ::ArrayW<uint8_t, ::Array<uint8_t>*> hashValue, int32_t emLength);

  /// @brief Method I2OSP, addr 0x3c03328, size 0x8c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> I2OSP(::ArrayW<uint8_t, ::Array<uint8_t>*> x, int32_t size);

  /// @brief Method OS2IP, addr 0x3c033b4, size 0xc0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> OS2IP(::ArrayW<uint8_t, ::Array<uint8_t>*> x);

  /// @brief Method RSAVP1, addr 0x3c03474, size 0x1c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> RSAVP1(::System::Security::Cryptography::RSA* rsa, ::ArrayW<uint8_t, ::Array<uint8_t>*> s);

  /// @brief Method Verify_v15, addr 0x3c03490, size 0x80, virtual false, abstract: false, final false
  static inline bool Verify_v15(::System::Security::Cryptography::RSA* rsa, ::System::Security::Cryptography::HashAlgorithm* hash, ::ArrayW<uint8_t, ::Array<uint8_t>*> hashValue,
                                ::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  /// @brief Method Verify_v15, addr 0x3c03510, size 0x1d8, virtual false, abstract: false, final false
  static inline bool Verify_v15(::System::Security::Cryptography::RSA* rsa, ::System::Security::Cryptography::HashAlgorithm* hash, ::ArrayW<uint8_t, ::Array<uint8_t>*> hashValue,
                                ::ArrayW<uint8_t, ::Array<uint8_t>*> signature, bool tryNonStandardEncoding);

  /// @brief Method Verify_v15, addr 0x3c036e8, size 0x1d8, virtual false, abstract: false, final false
  static inline bool Verify_v15(::System::Security::Cryptography::RSA* rsa, ::StringW hashName, ::ArrayW<uint8_t, ::Array<uint8_t>*> hashValue, ::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_emptySHA1();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_emptySHA256();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_emptySHA384();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_emptySHA512();

  static inline void setStaticF_emptySHA1(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_emptySHA256(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_emptySHA384(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_emptySHA512(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PKCS1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PKCS1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PKCS1(PKCS1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PKCS1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PKCS1(PKCS1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2281 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Cryptography::PKCS1, 0x10>, "Size mismatch!");

} // namespace Mono::Security::Cryptography
NEED_NO_BOX(::Mono::Security::Cryptography::PKCS1);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::PKCS1*, "Mono.Security.Cryptography", "PKCS1");
