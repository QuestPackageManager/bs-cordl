#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkcs/Pkcs8EncryptedPrivateKeyInfoBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Pkcs8EncryptedPrivateKeyInfoBuilder)
namespace Org::BouncyCastle::Asn1::Pkcs {
class PrivateKeyInfo;
}
namespace Org::BouncyCastle::Crypto {
class ICipherBuilder;
}
namespace Org::BouncyCastle::Pkcs {
class Pkcs8EncryptedPrivateKeyInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class Pkcs8EncryptedPrivateKeyInfoBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder);
// Dependencies System.Object
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// CS Name: Org.BouncyCastle.Pkcs.Pkcs8EncryptedPrivateKeyInfoBuilder
class CORDL_TYPE Pkcs8EncryptedPrivateKeyInfoBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field privateKeyInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_privateKeyInfo, put = __cordl_internal_set_privateKeyInfo)) ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privateKeyInfo;

  /// @brief Method Build, addr 0x2565610, size 0x3e8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfo* Build(::Org::BouncyCastle::Crypto::ICipherBuilder* encryptor);

  static inline ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> privateKeyInfo);

  static inline ::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder* New_ctor(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privateKeyInfo);

  constexpr ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* const& __cordl_internal_get_privateKeyInfo() const;

  constexpr ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*& __cordl_internal_get_privateKeyInfo();

  constexpr void __cordl_internal_set_privateKeyInfo(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* value);

  /// @brief Method .ctor, addr 0x25655b0, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> privateKeyInfo);

  /// @brief Method .ctor, addr 0x25655e8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privateKeyInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pkcs8EncryptedPrivateKeyInfoBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Pkcs8EncryptedPrivateKeyInfoBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pkcs8EncryptedPrivateKeyInfoBuilder(Pkcs8EncryptedPrivateKeyInfoBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pkcs8EncryptedPrivateKeyInfoBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pkcs8EncryptedPrivateKeyInfoBuilder(Pkcs8EncryptedPrivateKeyInfoBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1704 };

  /// @brief Field privateKeyInfo, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* ___privateKeyInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder, ___privateKeyInfo) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkcs::Pkcs8EncryptedPrivateKeyInfoBuilder*, "Org.BouncyCastle.Pkcs", "Pkcs8EncryptedPrivateKeyInfoBuilder");
