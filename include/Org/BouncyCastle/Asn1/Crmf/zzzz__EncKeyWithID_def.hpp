#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(EncKeyWithID)
namespace Org::BouncyCastle::Asn1::Pkcs {
class PrivateKeyInfo;
}
namespace Org::BouncyCastle::Asn1 {
class DerUtf8String;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class EncKeyWithID;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID);
// Type: Org.BouncyCastle.Asn1.Crmf::EncKeyWithID
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(111))
// CS Name: ::Org.BouncyCastle.Asn1.Crmf::EncKeyWithID*
class CORDL_TYPE EncKeyWithID : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field privKeyInfo, offset 0x10, size 0x8
  __declspec(property(get = __get_privKeyInfo, put = __set_privKeyInfo))::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privKeyInfo;

  /// @brief Field identifier, offset 0x18, size 0x8
  __declspec(property(get = __get_identifier, put = __set_identifier))::Org::BouncyCastle::Asn1::Asn1Encodable* identifier;

  __declspec(property(get = get_PrivateKey))::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* PrivateKey;

  __declspec(property(get = get_HasIdentifier)) bool HasIdentifier;

  __declspec(property(get = get_IsIdentifierUtf8String)) bool IsIdentifierUtf8String;

  __declspec(property(get = get_Identifier))::Org::BouncyCastle::Asn1::Asn1Encodable* Identifier;

  constexpr ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*& __get_privKeyInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo*> const& __get_privKeyInfo() const;

  constexpr void __set_privKeyInfo(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __get_identifier();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> const& __get_identifier() const;

  constexpr void __set_identifier(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method GetInstance addr 0xe10964 size 0xa4 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xe10a08 size 0x10c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID* New_ctor(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privKeyInfo);

  /// @brief Method .ctor addr 0xe10b14 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privKeyInfo);

  static inline ::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID* New_ctor(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privKeyInfo, ::Org::BouncyCastle::Asn1::DerUtf8String* str);

  /// @brief Method .ctor addr 0xe10b3c size 0x2c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privKeyInfo, ::Org::BouncyCastle::Asn1::DerUtf8String* str);

  static inline ::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID* New_ctor(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privKeyInfo, ::Org::BouncyCastle::Asn1::X509::GeneralName* generalName);

  /// @brief Method .ctor addr 0xe10b68 size 0x2c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* privKeyInfo, ::Org::BouncyCastle::Asn1::X509::GeneralName* generalName);

  /// @brief Method get_PrivateKey addr 0xe10b94 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* get_PrivateKey();

  /// @brief Method get_HasIdentifier addr 0xe10b9c size 0x10 virtual true final false
  inline bool get_HasIdentifier();

  /// @brief Method get_IsIdentifierUtf8String addr 0xe10bac size 0x7c virtual true final false
  inline bool get_IsIdentifierUtf8String();

  /// @brief Method get_Identifier addr 0xe10c28 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Identifier();

  /// @brief Method ToAsn1Object addr 0xe10c30 size 0x148 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "EncKeyWithID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncKeyWithID(EncKeyWithID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncKeyWithID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncKeyWithID(EncKeyWithID const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncKeyWithID();

public:
  /// @brief Field privKeyInfo, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* ___privKeyInfo;

  /// @brief Field identifier, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___identifier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID, ___privKeyInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID, ___identifier) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::EncKeyWithID*, "Org.BouncyCastle.Asn1.Crmf", "EncKeyWithID");
