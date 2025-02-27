#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/ObjectDigestInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectDigestInfo)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
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
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class DerEnumerated;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class ObjectDigestInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.ObjectDigestInfo
class CORDL_TYPE ObjectDigestInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_DigestAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* DigestAlgorithm;

  __declspec(property(get = get_DigestedObjectType)) ::Org::BouncyCastle::Asn1::DerEnumerated* DigestedObjectType;

  __declspec(property(get = get_ObjectDigest)) ::Org::BouncyCastle::Asn1::DerBitString* ObjectDigest;

  __declspec(property(get = get_OtherObjectTypeID)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* OtherObjectTypeID;

  /// @brief Field digestAlgorithm, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_digestAlgorithm, put = __cordl_internal_set_digestAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithm;

  /// @brief Field digestedObjectType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_digestedObjectType, put = __cordl_internal_set_digestedObjectType)) ::Org::BouncyCastle::Asn1::DerEnumerated* digestedObjectType;

  /// @brief Field objectDigest, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_objectDigest, put = __cordl_internal_set_objectDigest)) ::Org::BouncyCastle::Asn1::DerBitString* objectDigest;

  /// @brief Field otherObjectTypeID, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_otherObjectTypeID, put = __cordl_internal_set_otherObjectTypeID)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* otherObjectTypeID;

  /// @brief Method GetInstance, addr 0x260d21c, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0x26107d4, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* New_ctor(int32_t digestedObjectType, ::StringW otherObjectTypeID,
                                                                            ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> objectDigest);

  static inline ::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x2610cac, size 0x1bc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_digestAlgorithm() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_digestAlgorithm();

  constexpr ::Org::BouncyCastle::Asn1::DerEnumerated* const& __cordl_internal_get_digestedObjectType() const;

  constexpr ::Org::BouncyCastle::Asn1::DerEnumerated*& __cordl_internal_get_digestedObjectType();

  constexpr ::Org::BouncyCastle::Asn1::DerBitString* const& __cordl_internal_get_objectDigest() const;

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __cordl_internal_get_objectDigest();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_otherObjectTypeID() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_otherObjectTypeID();

  constexpr void __cordl_internal_set_digestAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_digestedObjectType(::Org::BouncyCastle::Asn1::DerEnumerated* value);

  constexpr void __cordl_internal_set_objectDigest(::Org::BouncyCastle::Asn1::DerBitString* value);

  constexpr void __cordl_internal_set_otherObjectTypeID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  /// @brief Method .ctor, addr 0x2610b98, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(int32_t digestedObjectType, ::StringW otherObjectTypeID, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> objectDigest);

  /// @brief Method .ctor, addr 0x2610950, size 0x248, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_DigestAlgorithm, addr 0x2610c9c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_DigestAlgorithm();

  /// @brief Method get_DigestedObjectType, addr 0x2610c8c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerEnumerated* get_DigestedObjectType();

  /// @brief Method get_ObjectDigest, addr 0x2610ca4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_ObjectDigest();

  /// @brief Method get_OtherObjectTypeID, addr 0x2610c94, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_OtherObjectTypeID();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectDigestInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectDigestInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectDigestInfo(ObjectDigestInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectDigestInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectDigestInfo(ObjectDigestInfo const&) = delete;

  /// @brief Field OtherObjectDigest offset 0xffffffff size 0x4
  static constexpr int32_t OtherObjectDigest{ static_cast<int32_t>(0x2) };

  /// @brief Field PublicKey offset 0xffffffff size 0x4
  static constexpr int32_t PublicKey{ static_cast<int32_t>(0x0) };

  /// @brief Field PublicKeyCert offset 0xffffffff size 0x4
  static constexpr int32_t PublicKeyCert{ static_cast<int32_t>(0x1) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 372 };

  /// @brief Field digestedObjectType, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerEnumerated* ___digestedObjectType;

  /// @brief Field otherObjectTypeID, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___otherObjectTypeID;

  /// @brief Field digestAlgorithm, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___digestAlgorithm;

  /// @brief Field objectDigest, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___objectDigest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo, ___digestedObjectType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo, ___otherObjectTypeID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo, ___digestAlgorithm) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo, ___objectDigest) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*, "Org.BouncyCastle.Asn1.X509", "ObjectDigestInfo");
