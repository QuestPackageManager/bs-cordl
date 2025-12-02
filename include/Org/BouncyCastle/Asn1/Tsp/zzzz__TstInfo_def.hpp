#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Tsp/TstInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(TstInfo)
namespace Org::BouncyCastle::Asn1::Tsp {
class Accuracy;
}
namespace Org::BouncyCastle::Asn1::Tsp {
class MessageImprint;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
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
class DerGeneralizedTime;
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
class TstInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Tsp::TstInfo);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Tsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Tsp.TstInfo
class CORDL_TYPE TstInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Accuracy)) ::Org::BouncyCastle::Asn1::Tsp::Accuracy* Accuracy;

  __declspec(property(get = get_Extensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions* Extensions;

  __declspec(property(get = get_GenTime)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime* GenTime;

  __declspec(property(get = get_MessageImprint)) ::Org::BouncyCastle::Asn1::Tsp::MessageImprint* MessageImprint;

  __declspec(property(get = get_Nonce)) ::Org::BouncyCastle::Asn1::DerInteger* Nonce;

  __declspec(property(get = get_Ordering)) ::Org::BouncyCastle::Asn1::DerBoolean* Ordering;

  __declspec(property(get = get_Policy)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Policy;

  __declspec(property(get = get_SerialNumber)) ::Org::BouncyCastle::Asn1::DerInteger* SerialNumber;

  __declspec(property(get = get_Tsa)) ::Org::BouncyCastle::Asn1::X509::GeneralName* Tsa;

  __declspec(property(get = get_Version)) ::Org::BouncyCastle::Asn1::DerInteger* Version;

  /// @brief Field accuracy, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_accuracy, put = __cordl_internal_set_accuracy)) ::Org::BouncyCastle::Asn1::Tsp::Accuracy* accuracy;

  /// @brief Field extensions, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_extensions, put = __cordl_internal_set_extensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions;

  /// @brief Field genTime, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_genTime, put = __cordl_internal_set_genTime)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime* genTime;

  /// @brief Field messageImprint, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_messageImprint, put = __cordl_internal_set_messageImprint)) ::Org::BouncyCastle::Asn1::Tsp::MessageImprint* messageImprint;

  /// @brief Field nonce, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_nonce, put = __cordl_internal_set_nonce)) ::Org::BouncyCastle::Asn1::DerInteger* nonce;

  /// @brief Field ordering, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_ordering, put = __cordl_internal_set_ordering)) ::Org::BouncyCastle::Asn1::DerBoolean* ordering;

  /// @brief Field serialNumber, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_serialNumber, put = __cordl_internal_set_serialNumber)) ::Org::BouncyCastle::Asn1::DerInteger* serialNumber;

  /// @brief Field tsa, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_tsa, put = __cordl_internal_set_tsa)) ::Org::BouncyCastle::Asn1::X509::GeneralName* tsa;

  /// @brief Field tsaPolicyId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_tsaPolicyId, put = __cordl_internal_set_tsaPolicyId)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* tsaPolicyId;

  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Method GetInstance, addr 0x342afe4, size 0xa0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Tsp::TstInfo* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Tsp::TstInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Tsp::TstInfo* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* tsaPolicyId, ::Org::BouncyCastle::Asn1::Tsp::MessageImprint* messageImprint,
                                                                  ::Org::BouncyCastle::Asn1::DerInteger* serialNumber, ::Org::BouncyCastle::Asn1::DerGeneralizedTime* genTime,
                                                                  ::Org::BouncyCastle::Asn1::Tsp::Accuracy* accuracy, ::Org::BouncyCastle::Asn1::DerBoolean* ordering,
                                                                  ::Org::BouncyCastle::Asn1::DerInteger* nonce, ::Org::BouncyCastle::Asn1::X509::GeneralName* tsa,
                                                                  ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  /// @brief Method ToAsn1Object, addr 0x342b99c, size 0x29c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Tsp::Accuracy* const& __cordl_internal_get_accuracy() const;

  constexpr ::Org::BouncyCastle::Asn1::Tsp::Accuracy*& __cordl_internal_get_accuracy();

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& __cordl_internal_get_extensions() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& __cordl_internal_get_extensions();

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& __cordl_internal_get_genTime() const;

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& __cordl_internal_get_genTime();

  constexpr ::Org::BouncyCastle::Asn1::Tsp::MessageImprint* const& __cordl_internal_get_messageImprint() const;

  constexpr ::Org::BouncyCastle::Asn1::Tsp::MessageImprint*& __cordl_internal_get_messageImprint();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_nonce() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_nonce();

  constexpr ::Org::BouncyCastle::Asn1::DerBoolean* const& __cordl_internal_get_ordering() const;

  constexpr ::Org::BouncyCastle::Asn1::DerBoolean*& __cordl_internal_get_ordering();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_serialNumber() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_serialNumber();

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* const& __cordl_internal_get_tsa() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __cordl_internal_get_tsa();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_tsaPolicyId() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_tsaPolicyId();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_version() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_version();

  constexpr void __cordl_internal_set_accuracy(::Org::BouncyCastle::Asn1::Tsp::Accuracy* value);

  constexpr void __cordl_internal_set_extensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value);

  constexpr void __cordl_internal_set_genTime(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value);

  constexpr void __cordl_internal_set_messageImprint(::Org::BouncyCastle::Asn1::Tsp::MessageImprint* value);

  constexpr void __cordl_internal_set_nonce(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_ordering(::Org::BouncyCastle::Asn1::DerBoolean* value);

  constexpr void __cordl_internal_set_serialNumber(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_tsa(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  constexpr void __cordl_internal_set_tsaPolicyId(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x342b084, size 0x818, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x342b89c, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* tsaPolicyId, ::Org::BouncyCastle::Asn1::Tsp::MessageImprint* messageImprint, ::Org::BouncyCastle::Asn1::DerInteger* serialNumber,
                    ::Org::BouncyCastle::Asn1::DerGeneralizedTime* genTime, ::Org::BouncyCastle::Asn1::Tsp::Accuracy* accuracy, ::Org::BouncyCastle::Asn1::DerBoolean* ordering,
                    ::Org::BouncyCastle::Asn1::DerInteger* nonce, ::Org::BouncyCastle::Asn1::X509::GeneralName* tsa, ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  /// @brief Method get_Accuracy, addr 0x342b96c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Tsp::Accuracy* get_Accuracy();

  /// @brief Method get_Extensions, addr 0x342b994, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_Extensions();

  /// @brief Method get_GenTime, addr 0x342b974, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_GenTime();

  /// @brief Method get_MessageImprint, addr 0x342b954, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Tsp::MessageImprint* get_MessageImprint();

  /// @brief Method get_Nonce, addr 0x342b984, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Nonce();

  /// @brief Method get_Ordering, addr 0x342b97c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBoolean* get_Ordering();

  /// @brief Method get_Policy, addr 0x342b95c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_Policy();

  /// @brief Method get_SerialNumber, addr 0x342b964, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_SerialNumber();

  /// @brief Method get_Tsa, addr 0x342b98c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_Tsa();

  /// @brief Method get_Version, addr 0x342b94c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TstInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TstInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TstInfo(TstInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TstInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TstInfo(TstInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 318 };

  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___version;

  /// @brief Field tsaPolicyId, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___tsaPolicyId;

  /// @brief Field messageImprint, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Tsp::MessageImprint* ___messageImprint;

  /// @brief Field serialNumber, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___serialNumber;

  /// @brief Field genTime, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerGeneralizedTime* ___genTime;

  /// @brief Field accuracy, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Tsp::Accuracy* ___accuracy;

  /// @brief Field ordering, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBoolean* ___ordering;

  /// @brief Field nonce, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___nonce;

  /// @brief Field tsa, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralName* ___tsa;

  /// @brief Field extensions, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Extensions* ___extensions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Tsp::TstInfo, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Tsp::TstInfo, ___tsaPolicyId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Tsp::TstInfo, ___messageImprint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Tsp::TstInfo, ___serialNumber) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Tsp::TstInfo, ___genTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Tsp::TstInfo, ___accuracy) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Tsp::TstInfo, ___ordering) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Tsp::TstInfo, ___nonce) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Tsp::TstInfo, ___tsa) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Tsp::TstInfo, ___extensions) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Tsp::TstInfo, 0x60>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Tsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Tsp::TstInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Tsp::TstInfo*, "Org.BouncyCastle.Asn1.Tsp", "TstInfo");
