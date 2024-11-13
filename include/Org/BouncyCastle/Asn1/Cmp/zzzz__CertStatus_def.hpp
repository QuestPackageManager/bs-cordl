#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cmp/CertStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CertStatus)
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class CertStatus;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::CertStatus);
// Type: Org.BouncyCastle.Asn1.Cmp::CertStatus
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::CertStatus*
class CORDL_TYPE CertStatus : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_CertHash)) ::Org::BouncyCastle::Asn1::Asn1OctetString* CertHash;

  __declspec(property(get = get_CertReqID)) ::Org::BouncyCastle::Asn1::DerInteger* CertReqID;

  __declspec(property(get = get_StatusInfo)) ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* StatusInfo;

  /// @brief Field certHash, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_certHash, put = __cordl_internal_set_certHash)) ::Org::BouncyCastle::Asn1::Asn1OctetString* certHash;

  /// @brief Field certReqId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_certReqId, put = __cordl_internal_set_certReqId)) ::Org::BouncyCastle::Asn1::DerInteger* certReqId;

  /// @brief Field statusInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_statusInfo, put = __cordl_internal_set_statusInfo)) ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* statusInfo;

  /// @brief Method GetInstance, addr 0x22be634, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::CertStatus* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cmp::CertStatus* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> certHash, ::Org::BouncyCastle::Math::BigInteger* certReqId);

  static inline ::Org::BouncyCastle::Asn1::Cmp::CertStatus* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> certHash, ::Org::BouncyCastle::Math::BigInteger* certReqId,
                                                                     ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* statusInfo);

  static inline ::Org::BouncyCastle::Asn1::Cmp::CertStatus* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x22bfeb0, size 0x170, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_certHash();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __cordl_internal_get_certHash() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_certReqId();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __cordl_internal_get_certReqId() const;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*& __cordl_internal_get_statusInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*> const& __cordl_internal_get_statusInfo() const;

  constexpr void __cordl_internal_set_certHash(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr void __cordl_internal_set_certReqId(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_statusInfo(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* value);

  /// @brief Method .ctor, addr 0x22bfd34, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> certHash, ::Org::BouncyCastle::Math::BigInteger* certReqId);

  /// @brief Method .ctor, addr 0x22bfde4, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> certHash, ::Org::BouncyCastle::Math::BigInteger* certReqId, ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* statusInfo);

  /// @brief Method .ctor, addr 0x22bfc90, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_CertHash, addr 0x22bfe98, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_CertHash();

  /// @brief Method get_CertReqID, addr 0x22bfea0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_CertReqID();

  /// @brief Method get_StatusInfo, addr 0x22bfea8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* get_StatusInfo();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertStatus();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CertStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertStatus(CertStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertStatus(CertStatus const&) = delete;

  /// @brief Field certHash, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___certHash;

  /// @brief Field certReqId, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___certReqId;

  /// @brief Field statusInfo, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* ___statusInfo;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::CertStatus, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::CertStatus, ___certHash) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::CertStatus, ___certReqId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::CertStatus, ___statusInfo) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::CertStatus);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::CertStatus*, "Org.BouncyCastle.Asn1.Cmp", "CertStatus");
