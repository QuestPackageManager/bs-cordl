#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkcs/Pkcs8EncryptedPrivateKeyInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Pkcs8EncryptedPrivateKeyInfo)
namespace Org::BouncyCastle::Asn1::Pkcs {
class EncryptedPrivateKeyInfo;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class PrivateKeyInfo;
}
namespace Org::BouncyCastle::Crypto {
class IDecryptorBuilderProvider;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class Pkcs8EncryptedPrivateKeyInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo);
// Type: Org.BouncyCastle.Pkcs::Pkcs8EncryptedPrivateKeyInfo
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Pkcs::Pkcs8EncryptedPrivateKeyInfo*
class CORDL_TYPE Pkcs8EncryptedPrivateKeyInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field encryptedPrivateKeyInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_encryptedPrivateKeyInfo,
                      put = __cordl_internal_set_encryptedPrivateKeyInfo))::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* encryptedPrivateKeyInfo;

  /// @brief Method DecryptPrivateKeyInfo, addr 0x13481a8, size 0x3c4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* DecryptPrivateKeyInfo(::Org::BouncyCastle::Crypto::IDecryptorBuilderProvider* inputDecryptorProvider);

  /// @brief Method GetEncoded, addr 0x134818c, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method GetEncryptedData, addr 0x1348170, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncryptedData();

  static inline ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encryptedPrivateKeyInfo);

  static inline ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo* New_ctor(::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* encryptedPrivateKeyInfo);

  /// @brief Method ToAsn1Structure, addr 0x1348168, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* ToAsn1Structure();

  constexpr ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*& __cordl_internal_get_encryptedPrivateKeyInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*> const& __cordl_internal_get_encryptedPrivateKeyInfo() const;

  constexpr void __cordl_internal_set_encryptedPrivateKeyInfo(::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* value);

  /// @brief Method .ctor, addr 0x1348134, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encryptedPrivateKeyInfo);

  /// @brief Method .ctor, addr 0x134810c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* encryptedPrivateKeyInfo);

  /// @brief Method parseBytes, addr 0x1347fe4, size 0x120, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* parseBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> pkcs8Encoding);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pkcs8EncryptedPrivateKeyInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Pkcs8EncryptedPrivateKeyInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pkcs8EncryptedPrivateKeyInfo(Pkcs8EncryptedPrivateKeyInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pkcs8EncryptedPrivateKeyInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pkcs8EncryptedPrivateKeyInfo(Pkcs8EncryptedPrivateKeyInfo const&) = delete;

  /// @brief Field encryptedPrivateKeyInfo, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* ___encryptedPrivateKeyInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo, ___encryptedPrivateKeyInfo) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo*, "Org.BouncyCastle.Pkcs", "Pkcs8EncryptedPrivateKeyInfo");
