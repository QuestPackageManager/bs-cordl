#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/CryptoPro/Gost3410PublicKeyAlgParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(Gost3410PublicKeyAlgParameters)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::CryptoPro {
class Gost3410PublicKeyAlgParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::CryptoPro {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.CryptoPro.Gost3410PublicKeyAlgParameters
class CORDL_TYPE Gost3410PublicKeyAlgParameters : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_DigestParamSet)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* DigestParamSet;

  __declspec(property(get = get_EncryptionParamSet)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* EncryptionParamSet;

  __declspec(property(get = get_PublicKeyParamSet)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* PublicKeyParamSet;

  /// @brief Field digestParamSet, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_digestParamSet, put = __cordl_internal_set_digestParamSet)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestParamSet;

  /// @brief Field encryptionParamSet, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_encryptionParamSet, put = __cordl_internal_set_encryptionParamSet)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionParamSet;

  /// @brief Field publicKeyParamSet, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_publicKeyParamSet, put = __cordl_internal_set_publicKeyParamSet)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet;

  /// @brief Method GetInstance, addr 0x231b998, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x231b9b0, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet,
                                                                                               ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestParamSet);

  static inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet,
                                                                                               ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestParamSet,
                                                                                               ::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionParamSet);

  static inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x231bce4, size 0x170, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_digestParamSet() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_digestParamSet();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_encryptionParamSet() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_encryptionParamSet();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_publicKeyParamSet() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_publicKeyParamSet();

  constexpr void __cordl_internal_set_digestParamSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_encryptionParamSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_publicKeyParamSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  /// @brief Method .ctor, addr 0x231bc18, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestParamSet);

  /// @brief Method .ctor, addr 0x231bc20, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestParamSet,
                    ::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionParamSet);

  /// @brief Method .ctor, addr 0x231ba54, size 0x1c4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_DigestParamSet, addr 0x231bcd4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_DigestParamSet();

  /// @brief Method get_EncryptionParamSet, addr 0x231bcdc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_EncryptionParamSet();

  /// @brief Method get_PublicKeyParamSet, addr 0x231bccc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_PublicKeyParamSet();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Gost3410PublicKeyAlgParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Gost3410PublicKeyAlgParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Gost3410PublicKeyAlgParameters(Gost3410PublicKeyAlgParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Gost3410PublicKeyAlgParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Gost3410PublicKeyAlgParameters(Gost3410PublicKeyAlgParameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 131 };

  /// @brief Field publicKeyParamSet, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___publicKeyParamSet;

  /// @brief Field digestParamSet, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___digestParamSet;

  /// @brief Field encryptionParamSet, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___encryptionParamSet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters, ___publicKeyParamSet) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters, ___digestParamSet) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters, ___encryptionParamSet) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::CryptoPro
NEED_NO_BOX(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*, "Org.BouncyCastle.Asn1.CryptoPro", "Gost3410PublicKeyAlgParameters");
