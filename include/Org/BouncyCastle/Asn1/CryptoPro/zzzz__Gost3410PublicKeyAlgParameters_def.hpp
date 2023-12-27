#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(Gost3410PublicKeyAlgParameters)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::CryptoPro {
class Gost3410PublicKeyAlgParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters);
// Type: Org.BouncyCastle.Asn1.CryptoPro::Gost3410PublicKeyAlgParameters
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::CryptoPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(131))
// CS Name: ::Org.BouncyCastle.Asn1.CryptoPro::Gost3410PublicKeyAlgParameters*
class CORDL_TYPE Gost3410PublicKeyAlgParameters : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field publicKeyParamSet, offset 0x10, size 0x8
  __declspec(property(get = __get_publicKeyParamSet, put = __set_publicKeyParamSet))::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet;

  /// @brief Field digestParamSet, offset 0x18, size 0x8
  __declspec(property(get = __get_digestParamSet, put = __set_digestParamSet))::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestParamSet;

  /// @brief Field encryptionParamSet, offset 0x20, size 0x8
  __declspec(property(get = __get_encryptionParamSet, put = __set_encryptionParamSet))::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionParamSet;

  __declspec(property(get = get_PublicKeyParamSet))::Org::BouncyCastle::Asn1::DerObjectIdentifier* PublicKeyParamSet;

  __declspec(property(get = get_DigestParamSet))::Org::BouncyCastle::Asn1::DerObjectIdentifier* DigestParamSet;

  __declspec(property(get = get_EncryptionParamSet))::Org::BouncyCastle::Asn1::DerObjectIdentifier* EncryptionParamSet;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_publicKeyParamSet();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_publicKeyParamSet() const;

  constexpr void __set_publicKeyParamSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_digestParamSet();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_digestParamSet() const;

  constexpr void __set_digestParamSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_encryptionParamSet();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_encryptionParamSet() const;

  constexpr void __set_encryptionParamSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  /// @brief Method GetInstance addr 0xe8de18 size 0x18 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance addr 0xe8de30 size 0xa4 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet,
                                                                                               ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestParamSet);

  /// @brief Method .ctor addr 0xe8e098 size 0x8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestParamSet);

  static inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet,
                                                                                               ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestParamSet,
                                                                                               ::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionParamSet);

  /// @brief Method .ctor addr 0xe8e0a0 size 0xb4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestParamSet,
                    ::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionParamSet);

  static inline ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xe8ded4 size 0x1c4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_PublicKeyParamSet addr 0xe8e154 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_PublicKeyParamSet();

  /// @brief Method get_DigestParamSet addr 0xe8e15c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_DigestParamSet();

  /// @brief Method get_EncryptionParamSet addr 0xe8e164 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_EncryptionParamSet();

  /// @brief Method ToAsn1Object addr 0xe8e16c size 0x174 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "Gost3410PublicKeyAlgParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Gost3410PublicKeyAlgParameters(Gost3410PublicKeyAlgParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Gost3410PublicKeyAlgParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Gost3410PublicKeyAlgParameters(Gost3410PublicKeyAlgParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Gost3410PublicKeyAlgParameters();

public:
  /// @brief Field publicKeyParamSet, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___publicKeyParamSet;

  /// @brief Field digestParamSet, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___digestParamSet;

  /// @brief Field encryptionParamSet, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___encryptionParamSet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::CryptoPro
NEED_NO_BOX(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*, "Org.BouncyCastle.Asn1.CryptoPro", "Gost3410PublicKeyAlgParameters");
