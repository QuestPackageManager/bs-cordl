#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SubjectPublicKeyInfo)
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo);
// Type: Org.BouncyCastle.Asn1.X509::SubjectPublicKeyInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(384))
// CS Name: ::Org.BouncyCastle.Asn1.X509::SubjectPublicKeyInfo*
class CORDL_TYPE SubjectPublicKeyInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field algID, offset 0x10, size 0x8
  __declspec(property(get = __get_algID, put = __set_algID))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID;

  /// @brief Field keyData, offset 0x18, size 0x8
  __declspec(property(get = __get_keyData, put = __set_keyData))::Org::BouncyCastle::Asn1::DerBitString* keyData;

  __declspec(property(get = get_AlgorithmID))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* AlgorithmID;

  __declspec(property(get = get_PublicKeyData))::Org::BouncyCastle::Asn1::DerBitString* PublicKeyData;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_algID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_algID() const;

  constexpr void __set_algID(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __get_keyData();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> const& __get_keyData() const;

  constexpr void __set_keyData(::Org::BouncyCastle::Asn1::DerBitString* value);

  /// @brief Method GetInstance addr 0x1197654 size 0x18 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance addr 0x119766c size 0xa4 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID, ::Org::BouncyCastle::Asn1::Asn1Encodable* publicKey);

  /// @brief Method .ctor addr 0x1197880 size 0x80 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID, ::Org::BouncyCastle::Asn1::Asn1Encodable* publicKey);

  static inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID, ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey);

  /// @brief Method .ctor addr 0x1197900 size 0x80 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID, ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey);

  static inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0x1197710 size 0x170 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_AlgorithmID addr 0x1197980 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_AlgorithmID();

  /// @brief Method ParsePublicKey addr 0x1197988 size 0x28 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ParsePublicKey();

  /// @brief Method GetPublicKey addr 0x11979b0 size 0x28 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* GetPublicKey();

  /// @brief Method get_PublicKeyData addr 0x11979d8 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_PublicKeyData();

  /// @brief Method ToAsn1Object addr 0x11979e0 size 0xf0 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "SubjectPublicKeyInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubjectPublicKeyInfo(SubjectPublicKeyInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubjectPublicKeyInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubjectPublicKeyInfo(SubjectPublicKeyInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubjectPublicKeyInfo();

public:
  /// @brief Field algID, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___algID;

  /// @brief Field keyData, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___keyData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*, "Org.BouncyCastle.Asn1.X509", "SubjectPublicKeyInfo");
