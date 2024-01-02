#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(TimeStampReq)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1::Tsp {
class MessageImprint;
}
namespace Org::BouncyCastle::Asn1 {
class DerBoolean;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Tsp {
class TimeStampReq;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Tsp::TimeStampReq);
// Type: Org.BouncyCastle.Asn1.Tsp::TimeStampReq
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Tsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(316))
// CS Name: ::Org.BouncyCastle.Asn1.Tsp::TimeStampReq*
class CORDL_TYPE TimeStampReq : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __get_version, put = __set_version))::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Field messageImprint, offset 0x18, size 0x8
  __declspec(property(get = __get_messageImprint, put = __set_messageImprint))::Org::BouncyCastle::Asn1::Tsp::MessageImprint* messageImprint;

  /// @brief Field tsaPolicy, offset 0x20, size 0x8
  __declspec(property(get = __get_tsaPolicy, put = __set_tsaPolicy))::Org::BouncyCastle::Asn1::DerObjectIdentifier* tsaPolicy;

  /// @brief Field nonce, offset 0x28, size 0x8
  __declspec(property(get = __get_nonce, put = __set_nonce))::Org::BouncyCastle::Asn1::DerInteger* nonce;

  /// @brief Field certReq, offset 0x30, size 0x8
  __declspec(property(get = __get_certReq, put = __set_certReq))::Org::BouncyCastle::Asn1::DerBoolean* certReq;

  /// @brief Field extensions, offset 0x38, size 0x8
  __declspec(property(get = __get_extensions, put = __set_extensions))::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions;

  __declspec(property(get = get_Version))::Org::BouncyCastle::Asn1::DerInteger* Version;

  __declspec(property(get = get_MessageImprint))::Org::BouncyCastle::Asn1::Tsp::MessageImprint* MessageImprint;

  __declspec(property(get = get_ReqPolicy))::Org::BouncyCastle::Asn1::DerObjectIdentifier* ReqPolicy;

  __declspec(property(get = get_Nonce))::Org::BouncyCastle::Asn1::DerInteger* Nonce;

  __declspec(property(get = get_CertReq))::Org::BouncyCastle::Asn1::DerBoolean* CertReq;

  __declspec(property(get = get_Extensions))::Org::BouncyCastle::Asn1::X509::X509Extensions* Extensions;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_version();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_version() const;

  constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::Tsp::MessageImprint*& __get_messageImprint();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Tsp::MessageImprint*> const& __get_messageImprint() const;

  constexpr void __set_messageImprint(::Org::BouncyCastle::Asn1::Tsp::MessageImprint* value);

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_tsaPolicy();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_tsaPolicy() const;

  constexpr void __set_tsaPolicy(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_nonce();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_nonce() const;

  constexpr void __set_nonce(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::DerBoolean*& __get_certReq();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBoolean*> const& __get_certReq() const;

  constexpr void __set_certReq(::Org::BouncyCastle::Asn1::DerBoolean* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& __get_extensions();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Extensions*> const& __get_extensions() const;

  constexpr void __set_extensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value);

  /// @brief Method GetInstance, addr 0x10791e0, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x1079284, size 0x344, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Tsp::TimeStampReq* New_ctor(::Org::BouncyCastle::Asn1::Tsp::MessageImprint* messageImprint, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* tsaPolicy,
                                                                       ::Org::BouncyCastle::Asn1::DerInteger* nonce, ::Org::BouncyCastle::Asn1::DerBoolean* certReq,
                                                                       ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  /// @brief Method .ctor, addr 0x10795c8, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Tsp::MessageImprint* messageImprint, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* tsaPolicy, ::Org::BouncyCastle::Asn1::DerInteger* nonce,
                    ::Org::BouncyCastle::Asn1::DerBoolean* certReq, ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  /// @brief Method get_Version, addr 0x107966c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

  /// @brief Method get_MessageImprint, addr 0x1079674, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Tsp::MessageImprint* get_MessageImprint();

  /// @brief Method get_ReqPolicy, addr 0x107967c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_ReqPolicy();

  /// @brief Method get_Nonce, addr 0x1079684, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Nonce();

  /// @brief Method get_CertReq, addr 0x107968c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBoolean* get_CertReq();

  /// @brief Method get_Extensions, addr 0x1079694, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_Extensions();

  /// @brief Method ToAsn1Object, addr 0x107969c, size 0x1dc, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "TimeStampReq", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeStampReq(TimeStampReq&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeStampReq", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeStampReq(TimeStampReq const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeStampReq();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Tsp::TimeStampReq, 0x40>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Tsp::TimeStampReq, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Tsp::TimeStampReq, ___messageImprint) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Tsp::TimeStampReq, ___tsaPolicy) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Tsp::TimeStampReq, ___nonce) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Tsp::TimeStampReq, ___certReq) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Tsp::TimeStampReq, ___extensions) == 0x38, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Tsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Tsp::TimeStampReq);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Tsp::TimeStampReq*, "Org.BouncyCastle.Asn1.Tsp", "TimeStampReq");
