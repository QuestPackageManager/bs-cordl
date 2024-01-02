#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectDigestInfo)
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerEnumerated;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class ObjectDigestInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo);
// Type: Org.BouncyCastle.Asn1.X509::ObjectDigestInfo
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(372))
// CS Name: ::Org.BouncyCastle.Asn1.X509::ObjectDigestInfo*
class CORDL_TYPE ObjectDigestInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field digestedObjectType, offset 0x10, size 0x8
  __declspec(property(get = __get_digestedObjectType, put = __set_digestedObjectType))::Org::BouncyCastle::Asn1::DerEnumerated* digestedObjectType;

  /// @brief Field otherObjectTypeID, offset 0x18, size 0x8
  __declspec(property(get = __get_otherObjectTypeID, put = __set_otherObjectTypeID))::Org::BouncyCastle::Asn1::DerObjectIdentifier* otherObjectTypeID;

  /// @brief Field digestAlgorithm, offset 0x20, size 0x8
  __declspec(property(get = __get_digestAlgorithm, put = __set_digestAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithm;

  /// @brief Field objectDigest, offset 0x28, size 0x8
  __declspec(property(get = __get_objectDigest, put = __set_objectDigest))::Org::BouncyCastle::Asn1::DerBitString* objectDigest;

  __declspec(property(get = get_DigestedObjectType))::Org::BouncyCastle::Asn1::DerEnumerated* DigestedObjectType;

  __declspec(property(get = get_OtherObjectTypeID))::Org::BouncyCastle::Asn1::DerObjectIdentifier* OtherObjectTypeID;

  __declspec(property(get = get_DigestAlgorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* DigestAlgorithm;

  __declspec(property(get = get_ObjectDigest))::Org::BouncyCastle::Asn1::DerBitString* ObjectDigest;

  constexpr ::Org::BouncyCastle::Asn1::DerEnumerated*& __get_digestedObjectType();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerEnumerated*> const& __get_digestedObjectType() const;

  constexpr void __set_digestedObjectType(::Org::BouncyCastle::Asn1::DerEnumerated* value);

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_otherObjectTypeID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_otherObjectTypeID() const;

  constexpr void __set_otherObjectTypeID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_digestAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_digestAlgorithm() const;

  constexpr void __set_digestAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __get_objectDigest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> const& __get_objectDigest() const;

  constexpr void __set_objectDigest(::Org::BouncyCastle::Asn1::DerBitString* value);

  /// @brief Method GetInstance, addr 0x1193800, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* GetInstance(::System::Object* obj);

  /// @brief Method GetInstance, addr 0x1190218, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  static inline ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* New_ctor(int32_t digestedObjectType, ::StringW otherObjectTypeID,
                                                                            ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> objectDigest);

  /// @brief Method .ctor, addr 0x1193bd8, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(int32_t digestedObjectType, ::StringW otherObjectTypeID, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> objectDigest);

  static inline ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x1193988, size 0x250, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_DigestedObjectType, addr 0x1193cdc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerEnumerated* get_DigestedObjectType();

  /// @brief Method get_OtherObjectTypeID, addr 0x1193ce4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_OtherObjectTypeID();

  /// @brief Method get_DigestAlgorithm, addr 0x1193cec, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_DigestAlgorithm();

  /// @brief Method get_ObjectDigest, addr 0x1193cf4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_ObjectDigest();

  /// @brief Method ToAsn1Object, addr 0x1193cfc, size 0x1c0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "ObjectDigestInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectDigestInfo(ObjectDigestInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectDigestInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectDigestInfo(ObjectDigestInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectDigestInfo();

public:
  /// @brief Field digestedObjectType, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerEnumerated* ___digestedObjectType;

  /// @brief Field otherObjectTypeID, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___otherObjectTypeID;

  /// @brief Field digestAlgorithm, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___digestAlgorithm;

  /// @brief Field objectDigest, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___objectDigest;

  /// @brief Field PublicKey offset 0xffffffff size 0x4
  static constexpr int32_t PublicKey{ static_cast<int32_t>(0x0) };

  /// @brief Field PublicKeyCert offset 0xffffffff size 0x4
  static constexpr int32_t PublicKeyCert{ static_cast<int32_t>(0x1) };

  /// @brief Field OtherObjectDigest offset 0xffffffff size 0x4
  static constexpr int32_t OtherObjectDigest{ static_cast<int32_t>(0x2) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo, ___digestedObjectType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo, ___otherObjectTypeID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo, ___digestAlgorithm) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo, ___objectDigest) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*, "Org.BouncyCastle.Asn1.X509", "ObjectDigestInfo");
