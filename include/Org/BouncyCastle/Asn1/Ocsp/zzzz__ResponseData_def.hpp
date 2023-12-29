#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(ResponseData)
namespace Org::BouncyCastle::Asn1::Ocsp {
class ResponderID;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
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
// Type: Org.BouncyCastle.Asn1.Ocsp::ResponseData
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(218))
// CS Name: ::Org.BouncyCastle.Asn1.Ocsp::ResponseData*
class CORDL_TYPE ResponseData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field versionPresent, offset 0x10, size 0x1
  __declspec(property(get = __get_versionPresent, put = __set_versionPresent)) bool versionPresent;

  /// @brief Field version, offset 0x18, size 0x8
  __declspec(property(get = __get_version, put = __set_version))::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Field responderID, offset 0x20, size 0x8
  __declspec(property(get = __get_responderID, put = __set_responderID))::Org::BouncyCastle::Asn1::Ocsp::ResponderID* responderID;

  /// @brief Field producedAt, offset 0x28, size 0x8
  __declspec(property(get = __get_producedAt, put = __set_producedAt))::Org::BouncyCastle::Asn1::DerGeneralizedTime* producedAt;

  /// @brief Field responses, offset 0x30, size 0x8
  __declspec(property(get = __get_responses, put = __set_responses))::Org::BouncyCastle::Asn1::Asn1Sequence* responses;

  /// @brief Field responseExtensions, offset 0x38, size 0x8
  __declspec(property(get = __get_responseExtensions, put = __set_responseExtensions))::Org::BouncyCastle::Asn1::X509::X509Extensions* responseExtensions;

  /// @brief Field V1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_V1, put = setStaticF_V1))::Org::BouncyCastle::Asn1::DerInteger* V1;

  __declspec(property(get = get_Version))::Org::BouncyCastle::Asn1::DerInteger* Version;

  __declspec(property(get = get_ResponderID))::Org::BouncyCastle::Asn1::Ocsp::ResponderID* ResponderID;

  __declspec(property(get = get_ProducedAt))::Org::BouncyCastle::Asn1::DerGeneralizedTime* ProducedAt;

  __declspec(property(get = get_Responses))::Org::BouncyCastle::Asn1::Asn1Sequence* Responses;

  __declspec(property(get = get_ResponseExtensions))::Org::BouncyCastle::Asn1::X509::X509Extensions* ResponseExtensions;

  constexpr bool& __get_versionPresent();

  constexpr bool const& __get_versionPresent() const;

  constexpr void __set_versionPresent(bool value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_version();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_version() const;

  constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponderID*& __get_responderID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Ocsp::ResponderID*> const& __get_responderID() const;

  constexpr void __set_responderID(::Org::BouncyCastle::Asn1::Ocsp::ResponderID* value);

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& __get_producedAt();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerGeneralizedTime*> const& __get_producedAt() const;

  constexpr void __set_producedAt(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_responses();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_responses() const;

  constexpr void __set_responses(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& __get_responseExtensions();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Extensions*> const& __get_responseExtensions() const;

  constexpr void __set_responseExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value);

  static inline void setStaticF_V1(::Org::BouncyCastle::Asn1::DerInteger* value);

  static inline ::Org::BouncyCastle::Asn1::DerInteger* getStaticF_V1();

  /// @brief Method GetInstance addr 0xf0cc58 size 0x78 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::ResponseData* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance addr 0xf09520 size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::ResponseData* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::ResponseData* New_ctor(::Org::BouncyCastle::Asn1::DerInteger* version, ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* responderID,
                                                                        ::Org::BouncyCastle::Asn1::DerGeneralizedTime* producedAt, ::Org::BouncyCastle::Asn1::Asn1Sequence* responses,
                                                                        ::Org::BouncyCastle::Asn1::X509::X509Extensions* responseExtensions);

  /// @brief Method .ctor addr 0xf0cfb0 size 0x50 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerInteger* version, ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* responderID, ::Org::BouncyCastle::Asn1::DerGeneralizedTime* producedAt,
                    ::Org::BouncyCastle::Asn1::Asn1Sequence* responses, ::Org::BouncyCastle::Asn1::X509::X509Extensions* responseExtensions);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::ResponseData* New_ctor(::Org::BouncyCastle::Asn1::Ocsp::ResponderID* responderID, ::Org::BouncyCastle::Asn1::DerGeneralizedTime* producedAt,
                                                                        ::Org::BouncyCastle::Asn1::Asn1Sequence* responses, ::Org::BouncyCastle::Asn1::X509::X509Extensions* responseExtensions);

  /// @brief Method .ctor addr 0xf0d000 size 0x94 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Ocsp::ResponderID* responderID, ::Org::BouncyCastle::Asn1::DerGeneralizedTime* producedAt, ::Org::BouncyCastle::Asn1::Asn1Sequence* responses,
                    ::Org::BouncyCastle::Asn1::X509::X509Extensions* responseExtensions);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::ResponseData* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xf0ccd0 size 0x2e0 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Version addr 0xf0d094 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

  /// @brief Method get_ResponderID addr 0xf0d09c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* get_ResponderID();

  /// @brief Method get_ProducedAt addr 0xf0d0a4 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_ProducedAt();

  /// @brief Method get_Responses addr 0xf0d0ac size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Sequence* get_Responses();

  /// @brief Method get_ResponseExtensions addr 0xf0d0b4 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_ResponseExtensions();

  /// @brief Method ToAsn1Object addr 0xf0d0bc size 0x214 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "ResponseData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResponseData(ResponseData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResponseData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResponseData(ResponseData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResponseData();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ocsp::ResponseData, 0x40>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::ResponseData, ___versionPresent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::ResponseData, ___version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::ResponseData, ___responderID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::ResponseData, ___producedAt) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::ResponseData, ___responses) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::ResponseData, ___responseExtensions) == 0x38, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::ResponseData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::ResponseData*, "Org.BouncyCastle.Asn1.Ocsp", "ResponseData");
