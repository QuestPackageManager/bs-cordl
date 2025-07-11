#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cmp/CertResponse.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(CertResponse)
namespace Org::BouncyCastle::Asn1::Cmp {
class CertifiedKeyPair;
}
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
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class CertResponse;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::CertResponse);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cmp.CertResponse
class CORDL_TYPE CertResponse : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_CertReqID)) ::Org::BouncyCastle::Asn1::DerInteger* CertReqID;

  __declspec(property(get = get_CertifiedKeyPair)) ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* CertifiedKeyPair;

  __declspec(property(get = get_Status)) ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* Status;

  /// @brief Field certReqId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_certReqId, put = __cordl_internal_set_certReqId)) ::Org::BouncyCastle::Asn1::DerInteger* certReqId;

  /// @brief Field certifiedKeyPair, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_certifiedKeyPair, put = __cordl_internal_set_certifiedKeyPair)) ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* certifiedKeyPair;

  /// @brief Field rspInfo, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_rspInfo, put = __cordl_internal_set_rspInfo)) ::Org::BouncyCastle::Asn1::Asn1OctetString* rspInfo;

  /// @brief Field status, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_status, put = __cordl_internal_set_status)) ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* status;

  /// @brief Method GetInstance, addr 0x22f4bf8, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::CertResponse* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cmp::CertResponse* New_ctor(::Org::BouncyCastle::Asn1::DerInteger* certReqId, ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* status);

  static inline ::Org::BouncyCastle::Asn1::Cmp::CertResponse* New_ctor(::Org::BouncyCastle::Asn1::DerInteger* certReqId, ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* status,
                                                                       ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* certifiedKeyPair, ::Org::BouncyCastle::Asn1::Asn1OctetString* rspInfo);

  static inline ::Org::BouncyCastle::Asn1::Cmp::CertResponse* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x22f51c0, size 0x19c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_certReqId() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_certReqId();

  constexpr ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* const& __cordl_internal_get_certifiedKeyPair() const;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*& __cordl_internal_get_certifiedKeyPair();

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& __cordl_internal_get_rspInfo() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_rspInfo();

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* const& __cordl_internal_get_status() const;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*& __cordl_internal_get_status();

  constexpr void __cordl_internal_set_certReqId(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_certifiedKeyPair(::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* value);

  constexpr void __cordl_internal_set_rspInfo(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr void __cordl_internal_set_status(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* value);

  /// @brief Method .ctor, addr 0x22f50ec, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerInteger* certReqId, ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* status);

  /// @brief Method .ctor, addr 0x22f50f8, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerInteger* certReqId, ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* status, ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* certifiedKeyPair,
                    ::Org::BouncyCastle::Asn1::Asn1OctetString* rspInfo);

  /// @brief Method .ctor, addr 0x22f4e28, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_CertReqID, addr 0x22f51a8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_CertReqID();

  /// @brief Method get_CertifiedKeyPair, addr 0x22f51b8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* get_CertifiedKeyPair();

  /// @brief Method get_Status, addr 0x22f51b0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* get_Status();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CertResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertResponse(CertResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertResponse(CertResponse const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16 };

  /// @brief Field certReqId, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___certReqId;

  /// @brief Field status, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* ___status;

  /// @brief Field certifiedKeyPair, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* ___certifiedKeyPair;

  /// @brief Field rspInfo, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___rspInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::CertResponse, ___certReqId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::CertResponse, ___status) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::CertResponse, ___certifiedKeyPair) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::CertResponse, ___rspInfo) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::CertResponse, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::CertResponse);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::CertResponse*, "Org.BouncyCastle.Asn1.Cmp", "CertResponse");
