#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/SubjectPublicKeyInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SubjectPublicKeyInfo)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
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
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo
class CORDL_TYPE SubjectPublicKeyInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmID)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* AlgorithmID;

  __declspec(property(get = get_PublicKeyData)) ::Org::BouncyCastle::Asn1::DerBitString* PublicKeyData;

  /// @brief Field algID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_algID, put = __cordl_internal_set_algID)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID;

  /// @brief Field keyData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_keyData, put = __cordl_internal_set_keyData)) ::Org::BouncyCastle::Asn1::DerBitString* keyData;

  /// @brief Method GetInstance, addr 0x261015c, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x2610174, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* GetInstance(::System::Object* obj);

  /// @brief Method GetPublicKey, addr 0x26104a4, size 0x28, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* GetPublicKey();

  static inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID, ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey);

  static inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID, ::Org::BouncyCastle::Asn1::Asn1Encodable* publicKey);

  static inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ParsePublicKey, addr 0x261047c, size 0x28, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ParsePublicKey();

  /// @brief Method ToAsn1Object, addr 0x26104d4, size 0xec, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_algID() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_algID();

  constexpr ::Org::BouncyCastle::Asn1::DerBitString* const& __cordl_internal_get_keyData() const;

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __cordl_internal_get_keyData();

  constexpr void __cordl_internal_set_algID(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_keyData(::Org::BouncyCastle::Asn1::DerBitString* value);

  /// @brief Method .ctor, addr 0x26103fc, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID, ::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey);

  /// @brief Method .ctor, addr 0x2610384, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID, ::Org::BouncyCastle::Asn1::Asn1Encodable* publicKey);

  /// @brief Method .ctor, addr 0x2610218, size 0x16c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_AlgorithmID, addr 0x2610474, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_AlgorithmID();

  /// @brief Method get_PublicKeyData, addr 0x26104cc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_PublicKeyData();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubjectPublicKeyInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubjectPublicKeyInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubjectPublicKeyInfo(SubjectPublicKeyInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubjectPublicKeyInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubjectPublicKeyInfo(SubjectPublicKeyInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 384 };

  /// @brief Field algID, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___algID;

  /// @brief Field keyData, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___keyData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo, ___algID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo, ___keyData) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*, "Org.BouncyCastle.Asn1.X509", "SubjectPublicKeyInfo");
