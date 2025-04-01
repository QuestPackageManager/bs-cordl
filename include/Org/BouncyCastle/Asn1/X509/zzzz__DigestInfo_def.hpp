#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/DigestInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DigestInfo)
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
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class DigestInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::DigestInfo);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.DigestInfo
class CORDL_TYPE DigestInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmID)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* AlgorithmID;

  /// @brief Field algID, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_algID, put = __cordl_internal_set_algID)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID;

  /// @brief Field digest, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_digest, put = __cordl_internal_set_digest)) ::ArrayW<uint8_t, ::Array<uint8_t>*> digest;

  /// @brief Method GetDigest, addr 0x2600a98, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetDigest();

  /// @brief Method GetInstance, addr 0x26007dc, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::DigestInfo* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x26007f4, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::DigestInfo* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::DigestInfo* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID, ::ArrayW<uint8_t, ::Array<uint8_t>*> digest);

  static inline ::Org::BouncyCastle::Asn1::X509::DigestInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x2600aa0, size 0x118, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_algID() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_algID();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_digest() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_digest();

  constexpr void __cordl_internal_set_algID(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_digest(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x2600a64, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID, ::ArrayW<uint8_t, ::Array<uint8_t>*> digest);

  /// @brief Method .ctor, addr 0x2600970, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_AlgorithmID, addr 0x2600a90, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_AlgorithmID();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DigestInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DigestInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DigestInfo(DigestInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DigestInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DigestInfo(DigestInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 355 };

  /// @brief Field digest, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___digest;

  /// @brief Field algID, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___algID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::DigestInfo, ___digest) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::DigestInfo, ___algID) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::DigestInfo, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::DigestInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::DigestInfo*, "Org.BouncyCastle.Asn1.X509", "DigestInfo");
