#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crmf/EncryptedValueBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EncryptedValueBuilder)
namespace Org::BouncyCastle::Asn1::Crmf {
class EncryptedValue;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class PrivateKeyInfo;
}
namespace Org::BouncyCastle::Crmf {
class IEncryptedValuePadder;
}
namespace Org::BouncyCastle::Crypto {
class ICipherBuilderWithKey;
}
namespace Org::BouncyCastle::Crypto {
class IKeyWrapper;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class EncryptedValueBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crmf::EncryptedValueBuilder);
// Dependencies System.Object
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// CS Name: Org.BouncyCastle.Crmf.EncryptedValueBuilder
class CORDL_TYPE EncryptedValueBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field encryptor, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_encryptor, put = __cordl_internal_set_encryptor)) ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* encryptor;

  /// @brief Field padder, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_padder, put = __cordl_internal_set_padder)) ::Org::BouncyCastle::Crmf::IEncryptedValuePadder* padder;

  /// @brief Field wrapper, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_wrapper, put = __cordl_internal_set_wrapper)) ::Org::BouncyCastle::Crypto::IKeyWrapper* wrapper;

  /// @brief Method Build, addr 0x268552c, size 0x13c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* Build(::Org::BouncyCastle::X509::X509Certificate* holder);

  /// @brief Method Build, addr 0x2685668, size 0x590, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* Build(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privateKeyInfo);

  /// @brief Method Build, addr 0x2684d30, size 0x30, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* Build(::ArrayW<char16_t, ::Array<char16_t>*> revocationPassphrase);

  /// @brief Method EncryptData, addr 0x2684e14, size 0x718, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* EncryptData(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::Org::BouncyCastle::Crmf::EncryptedValueBuilder* New_ctor(::Org::BouncyCastle::Crypto::IKeyWrapper* wrapper, ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* encryptor);

  static inline ::Org::BouncyCastle::Crmf::EncryptedValueBuilder* New_ctor(::Org::BouncyCastle::Crypto::IKeyWrapper* wrapper, ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* encryptor,
                                                                           ::Org::BouncyCastle::Crmf::IEncryptedValuePadder* padder);

  /// @brief Method PadData, addr 0x2684d60, size 0xb4, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> PadData(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  constexpr ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* const& __cordl_internal_get_encryptor() const;

  constexpr ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey*& __cordl_internal_get_encryptor();

  constexpr ::Org::BouncyCastle::Crmf::IEncryptedValuePadder* const& __cordl_internal_get_padder() const;

  constexpr ::Org::BouncyCastle::Crmf::IEncryptedValuePadder*& __cordl_internal_get_padder();

  constexpr ::Org::BouncyCastle::Crypto::IKeyWrapper* const& __cordl_internal_get_wrapper() const;

  constexpr ::Org::BouncyCastle::Crypto::IKeyWrapper*& __cordl_internal_get_wrapper();

  constexpr void __cordl_internal_set_encryptor(::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* value);

  constexpr void __cordl_internal_set_padder(::Org::BouncyCastle::Crmf::IEncryptedValuePadder* value);

  constexpr void __cordl_internal_set_wrapper(::Org::BouncyCastle::Crypto::IKeyWrapper* value);

  /// @brief Method .ctor, addr 0x2684cc4, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IKeyWrapper* wrapper, ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* encryptor);

  /// @brief Method .ctor, addr 0x2684cf4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IKeyWrapper* wrapper, ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* encryptor, ::Org::BouncyCastle::Crmf::IEncryptedValuePadder* padder);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncryptedValueBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EncryptedValueBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncryptedValueBuilder(EncryptedValueBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncryptedValueBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncryptedValueBuilder(EncryptedValueBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 701 };

  /// @brief Field wrapper, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IKeyWrapper* ___wrapper;

  /// @brief Field encryptor, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* ___encryptor;

  /// @brief Field padder, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crmf::IEncryptedValuePadder* ___padder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crmf::EncryptedValueBuilder, ___wrapper) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crmf::EncryptedValueBuilder, ___encryptor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crmf::EncryptedValueBuilder, ___padder) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crmf::EncryptedValueBuilder, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Crmf::EncryptedValueBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crmf::EncryptedValueBuilder*, "Org.BouncyCastle.Crmf", "EncryptedValueBuilder");
