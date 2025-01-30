#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Tsp/TimeStampReq.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(TimeStampReq)
namespace Org::BouncyCastle::Asn1::Tsp {
class MessageImprint;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerBoolean;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Tsp {
class TimeStampReq;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Tsp::TimeStampReq);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Tsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Tsp.TimeStampReq
class CORDL_TYPE TimeStampReq : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_CertReq)) ::Org::BouncyCastle::Asn1::DerBoolean* CertReq;

  __declspec(property(get = get_Extensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions* Extensions;

  __declspec(property(get = get_MessageImprint)) ::Org::BouncyCastle::Asn1::Tsp::MessageImprint* MessageImprint;

  __declspec(property(get = get_Nonce)) ::Org::BouncyCastle::Asn1::DerInteger* Nonce;

  __declspec(property(get = get_ReqPolicy)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ReqPolicy;

  __declspec(property(get = get_Version)) ::Org::BouncyCastle::Asn1::DerInteger* Version;

  /// @brief Field certReq, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_certReq, put = __cordl_internal_set_certReq)) ::Org::BouncyCastle::Asn1::DerBoolean* certReq;

  /// @brief Field extensions, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_extensions, put = __cordl_internal_set_extensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions;

  /// @brief Field messageImprint, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_messageImprint, put = __cordl_internal_set_messageImprint)) ::Org::BouncyCastle::Asn1::Tsp::MessageImprint* messageImprint;

  /// @brief Field nonce, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_nonce, put = __cordl_internal_set_nonce)) ::Org::BouncyCastle::Asn1::DerInteger* nonce;

  /// @brief Field tsaPolicy, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_tsaPolicy, put = __cordl_internal_set_tsaPolicy)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* tsaPolicy;

  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Method GetInstance, addr 0x24f95ec, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq* New_ctor(::Org::BouncyCastle::Asn1::Tsp::MessageImprint* messageImprint, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* tsaPolicy,
                                                                       ::Org::BouncyCastle::Asn1::DerInteger* nonce, ::Org::BouncyCastle::Asn1::DerBoolean* certReq,
                                                                       ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  static inline ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x24f9aa0, size 0x1d8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerBoolean* const& __cordl_internal_get_certReq() const;

  constexpr ::Org::BouncyCastle::Asn1::DerBoolean*& __cordl_internal_get_certReq();

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& __cordl_internal_get_extensions() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& __cordl_internal_get_extensions();

  constexpr ::Org::BouncyCastle::Asn1::Tsp::MessageImprint* const& __cordl_internal_get_messageImprint() const;

  constexpr ::Org::BouncyCastle::Asn1::Tsp::MessageImprint*& __cordl_internal_get_messageImprint();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_nonce() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_nonce();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_tsaPolicy() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_tsaPolicy();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_version() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_certReq(::Org::BouncyCastle::Asn1::DerBoolean* value);

  constexpr void __cordl_internal_set_extensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value);

  constexpr void __cordl_internal_set_messageImprint(::Org::BouncyCastle::Asn1::Tsp::MessageImprint* value);

  constexpr void __cordl_internal_set_nonce(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_tsaPolicy(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x24f99d4, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Tsp::MessageImprint* messageImprint, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* tsaPolicy, ::Org::BouncyCastle::Asn1::DerInteger* nonce,
                    ::Org::BouncyCastle::Asn1::DerBoolean* certReq, ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  /// @brief Method .ctor, addr 0x24f9690, size 0x344, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_CertReq, addr 0x24f9a90, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBoolean* get_CertReq();

  /// @brief Method get_Extensions, addr 0x24f9a98, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_Extensions();

  /// @brief Method get_MessageImprint, addr 0x24f9a78, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Tsp::MessageImprint* get_MessageImprint();

  /// @brief Method get_Nonce, addr 0x24f9a88, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Nonce();

  /// @brief Method get_ReqPolicy, addr 0x24f9a80, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_ReqPolicy();

  /// @brief Method get_Version, addr 0x24f9a70, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeStampReq();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeStampReq", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeStampReq(TimeStampReq&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeStampReq", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeStampReq(TimeStampReq const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 316 };

  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___version;

  /// @brief Field messageImprint, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Tsp::MessageImprint* ___messageImprint;

  /// @brief Field tsaPolicy, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___tsaPolicy;

  /// @brief Field nonce, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___nonce;

  /// @brief Field certReq, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBoolean* ___certReq;

  /// @brief Field extensions, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Extensions* ___extensions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Tsp::TimeStampReq, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Tsp::TimeStampReq, ___messageImprint) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Tsp::TimeStampReq, ___tsaPolicy) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Tsp::TimeStampReq, ___nonce) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Tsp::TimeStampReq, ___certReq) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Tsp::TimeStampReq, ___extensions) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Tsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Tsp::TimeStampReq);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*, "Org.BouncyCastle.Asn1.Tsp", "TimeStampReq");
