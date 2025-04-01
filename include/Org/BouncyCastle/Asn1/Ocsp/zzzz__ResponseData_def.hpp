#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Ocsp/ResponseData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(ResponseData)
namespace Org::BouncyCastle::Asn1::Ocsp {
class ResponderID;
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
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class ResponseData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ocsp::ResponseData);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Ocsp.ResponseData
class CORDL_TYPE ResponseData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_ProducedAt)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime* ProducedAt;

  __declspec(property(get = get_ResponderID)) ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* ResponderID;

  __declspec(property(get = get_ResponseExtensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions* ResponseExtensions;

  __declspec(property(get = get_Responses)) ::Org::BouncyCastle::Asn1::Asn1Sequence* Responses;

  /// @brief Field V1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_V1, put = setStaticF_V1)) ::Org::BouncyCastle::Asn1::DerInteger* V1;

  __declspec(property(get = get_Version)) ::Org::BouncyCastle::Asn1::DerInteger* Version;

  /// @brief Field producedAt, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_producedAt, put = __cordl_internal_set_producedAt)) ::Org::BouncyCastle::Asn1::DerGeneralizedTime* producedAt;

  /// @brief Field responderID, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_responderID, put = __cordl_internal_set_responderID)) ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* responderID;

  /// @brief Field responseExtensions, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_responseExtensions, put = __cordl_internal_set_responseExtensions)) ::Org::BouncyCastle::Asn1::X509::X509Extensions* responseExtensions;

  /// @brief Field responses, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_responses, put = __cordl_internal_set_responses)) ::Org::BouncyCastle::Asn1::Asn1Sequence* responses;

  /// @brief Field version, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Field versionPresent, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_versionPresent, put = __cordl_internal_set_versionPresent)) bool versionPresent;

  /// @brief Method GetInstance, addr 0x2405000, size 0x78, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::ResponseData* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x24019fc, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::ResponseData* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::ResponseData* New_ctor(::Org::BouncyCastle::Asn1::Ocsp::ResponderID* responderID, ::Org::BouncyCastle::Asn1::DerGeneralizedTime* producedAt,
                                                                        ::Org::BouncyCastle::Asn1::Asn1Sequence* responses, ::Org::BouncyCastle::Asn1::X509::X509Extensions* responseExtensions);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::ResponseData* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::ResponseData* New_ctor(::Org::BouncyCastle::Asn1::DerInteger* version, ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* responderID,
                                                                        ::Org::BouncyCastle::Asn1::DerGeneralizedTime* producedAt, ::Org::BouncyCastle::Asn1::Asn1Sequence* responses,
                                                                        ::Org::BouncyCastle::Asn1::X509::X509Extensions* responseExtensions);

  /// @brief Method ToAsn1Object, addr 0x2405460, size 0x210, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime* const& __cordl_internal_get_producedAt() const;

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& __cordl_internal_get_producedAt();

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* const& __cordl_internal_get_responderID() const;

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponderID*& __cordl_internal_get_responderID();

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions* const& __cordl_internal_get_responseExtensions() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& __cordl_internal_get_responseExtensions();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& __cordl_internal_get_responses() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_responses();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_version() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_version();

  constexpr bool const& __cordl_internal_get_versionPresent() const;

  constexpr bool& __cordl_internal_get_versionPresent();

  constexpr void __cordl_internal_set_producedAt(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value);

  constexpr void __cordl_internal_set_responderID(::Org::BouncyCastle::Asn1::Ocsp::ResponderID* value);

  constexpr void __cordl_internal_set_responseExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value);

  constexpr void __cordl_internal_set_responses(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr void __cordl_internal_set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_versionPresent(bool value);

  /// @brief Method .ctor, addr 0x24053a4, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Ocsp::ResponderID* responderID, ::Org::BouncyCastle::Asn1::DerGeneralizedTime* producedAt, ::Org::BouncyCastle::Asn1::Asn1Sequence* responses,
                    ::Org::BouncyCastle::Asn1::X509::X509Extensions* responseExtensions);

  /// @brief Method .ctor, addr 0x2405078, size 0x2dc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x2405354, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerInteger* version, ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* responderID, ::Org::BouncyCastle::Asn1::DerGeneralizedTime* producedAt,
                    ::Org::BouncyCastle::Asn1::Asn1Sequence* responses, ::Org::BouncyCastle::Asn1::X509::X509Extensions* responseExtensions);

  static inline ::Org::BouncyCastle::Asn1::DerInteger* getStaticF_V1();

  /// @brief Method get_ProducedAt, addr 0x2405448, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_ProducedAt();

  /// @brief Method get_ResponderID, addr 0x2405440, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* get_ResponderID();

  /// @brief Method get_ResponseExtensions, addr 0x2405458, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_ResponseExtensions();

  /// @brief Method get_Responses, addr 0x2405450, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Sequence* get_Responses();

  /// @brief Method get_Version, addr 0x2405438, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

  static inline void setStaticF_V1(::Org::BouncyCastle::Asn1::DerInteger* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResponseData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResponseData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResponseData(ResponseData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResponseData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResponseData(ResponseData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 218 };

  /// @brief Field versionPresent, offset: 0x10, size: 0x1, def value: None
  bool ___versionPresent;

  /// @brief Field version, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___version;

  /// @brief Field responderID, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* ___responderID;

  /// @brief Field producedAt, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerGeneralizedTime* ___producedAt;

  /// @brief Field responses, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___responses;

  /// @brief Field responseExtensions, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Extensions* ___responseExtensions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::ResponseData, ___versionPresent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::ResponseData, ___version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::ResponseData, ___responderID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::ResponseData, ___producedAt) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::ResponseData, ___responses) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::ResponseData, ___responseExtensions) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ocsp::ResponseData, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::ResponseData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::ResponseData*, "Org.BouncyCastle.Asn1.Ocsp", "ResponseData");
