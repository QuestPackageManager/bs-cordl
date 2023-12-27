#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(CertResponse)
namespace Org::BouncyCastle::Asn1::Cmp {
class CertifiedKeyPair;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class CertResponse;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::CertResponse);
// Type: Org.BouncyCastle.Asn1.Cmp::CertResponse
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16))
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::CertResponse*
class CORDL_TYPE CertResponse : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field certReqId, offset 0x10, size 0x8
  __declspec(property(get = __get_certReqId, put = __set_certReqId))::Org::BouncyCastle::Asn1::DerInteger* certReqId;

  /// @brief Field status, offset 0x18, size 0x8
  __declspec(property(get = __get_status, put = __set_status))::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* status;

  /// @brief Field certifiedKeyPair, offset 0x20, size 0x8
  __declspec(property(get = __get_certifiedKeyPair, put = __set_certifiedKeyPair))::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* certifiedKeyPair;

  /// @brief Field rspInfo, offset 0x28, size 0x8
  __declspec(property(get = __get_rspInfo, put = __set_rspInfo))::Org::BouncyCastle::Asn1::Asn1OctetString* rspInfo;

  __declspec(property(get = get_CertReqID))::Org::BouncyCastle::Asn1::DerInteger* CertReqID;

  __declspec(property(get = get_Status))::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* Status;

  __declspec(property(get = get_CertifiedKeyPair))::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* CertifiedKeyPair;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_certReqId();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_certReqId() const;

  constexpr void __set_certReqId(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*& __get_status();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*> const& __get_status() const;

  constexpr void __set_status(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* value);

  constexpr ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*& __get_certifiedKeyPair();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair*> const& __get_certifiedKeyPair() const;

  constexpr void __set_certifiedKeyPair(::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __get_rspInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __get_rspInfo() const;

  constexpr void __set_rspInfo(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  static inline ::Org::BouncyCastle::Asn1::Cmp::CertResponse* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xe657e0 size 0x148 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance addr 0xe655a0 size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::CertResponse* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cmp::CertResponse* New_ctor(::Org::BouncyCastle::Asn1::DerInteger* certReqId, ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* status);

  /// @brief Method .ctor addr 0xe65ab0 size 0xc virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerInteger* certReqId, ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* status);

  static inline ::Org::BouncyCastle::Asn1::Cmp::CertResponse* New_ctor(::Org::BouncyCastle::Asn1::DerInteger* certReqId, ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* status,
                                                                       ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* certifiedKeyPair, ::Org::BouncyCastle::Asn1::Asn1OctetString* rspInfo);

  /// @brief Method .ctor addr 0xe65abc size 0xb8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerInteger* certReqId, ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* status, ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* certifiedKeyPair,
                    ::Org::BouncyCastle::Asn1::Asn1OctetString* rspInfo);

  /// @brief Method get_CertReqID addr 0xe65b74 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_CertReqID();

  /// @brief Method get_Status addr 0xe65b7c size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* get_Status();

  /// @brief Method get_CertifiedKeyPair addr 0xe65b84 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Cmp::CertifiedKeyPair* get_CertifiedKeyPair();

  /// @brief Method ToAsn1Object addr 0xe65b8c size 0x1a0 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "CertResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertResponse(CertResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertResponse(CertResponse const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertResponse();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::CertResponse, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::CertResponse);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::CertResponse*, "Org.BouncyCastle.Asn1.Cmp", "CertResponse");
