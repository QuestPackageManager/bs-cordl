#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(TstInfo)
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::Tsp {
class Accuracy;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class DerBoolean;
}
namespace Org::BouncyCastle::Asn1::Tsp {
class MessageImprint;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Tsp {
class TstInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Tsp::TstInfo);
// Type: Org.BouncyCastle.Asn1.Tsp::TstInfo
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Tsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(318))
// CS Name: ::Org.BouncyCastle.Asn1.Tsp::TstInfo*
class CORDL_TYPE TstInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __get_version, put = __set_version))::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Field tsaPolicyId, offset 0x18, size 0x8
  __declspec(property(get = __get_tsaPolicyId, put = __set_tsaPolicyId))::Org::BouncyCastle::Asn1::DerObjectIdentifier* tsaPolicyId;

  /// @brief Field messageImprint, offset 0x20, size 0x8
  __declspec(property(get = __get_messageImprint, put = __set_messageImprint))::Org::BouncyCastle::Asn1::Tsp::MessageImprint* messageImprint;

  /// @brief Field serialNumber, offset 0x28, size 0x8
  __declspec(property(get = __get_serialNumber, put = __set_serialNumber))::Org::BouncyCastle::Asn1::DerInteger* serialNumber;

  /// @brief Field genTime, offset 0x30, size 0x8
  __declspec(property(get = __get_genTime, put = __set_genTime))::Org::BouncyCastle::Asn1::DerGeneralizedTime* genTime;

  /// @brief Field accuracy, offset 0x38, size 0x8
  __declspec(property(get = __get_accuracy, put = __set_accuracy))::Org::BouncyCastle::Asn1::Tsp::Accuracy* accuracy;

  /// @brief Field ordering, offset 0x40, size 0x8
  __declspec(property(get = __get_ordering, put = __set_ordering))::Org::BouncyCastle::Asn1::DerBoolean* ordering;

  /// @brief Field nonce, offset 0x48, size 0x8
  __declspec(property(get = __get_nonce, put = __set_nonce))::Org::BouncyCastle::Asn1::DerInteger* nonce;

  /// @brief Field tsa, offset 0x50, size 0x8
  __declspec(property(get = __get_tsa, put = __set_tsa))::Org::BouncyCastle::Asn1::X509::GeneralName* tsa;

  /// @brief Field extensions, offset 0x58, size 0x8
  __declspec(property(get = __get_extensions, put = __set_extensions))::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions;

  __declspec(property(get = get_Version))::Org::BouncyCastle::Asn1::DerInteger* Version;

  __declspec(property(get = get_MessageImprint))::Org::BouncyCastle::Asn1::Tsp::MessageImprint* MessageImprint;

  __declspec(property(get = get_Policy))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Policy;

  __declspec(property(get = get_SerialNumber))::Org::BouncyCastle::Asn1::DerInteger* SerialNumber;

  __declspec(property(get = get_Accuracy))::Org::BouncyCastle::Asn1::Tsp::Accuracy* Accuracy;

  __declspec(property(get = get_GenTime))::Org::BouncyCastle::Asn1::DerGeneralizedTime* GenTime;

  __declspec(property(get = get_Ordering))::Org::BouncyCastle::Asn1::DerBoolean* Ordering;

  __declspec(property(get = get_Nonce))::Org::BouncyCastle::Asn1::DerInteger* Nonce;

  __declspec(property(get = get_Tsa))::Org::BouncyCastle::Asn1::X509::GeneralName* Tsa;

  __declspec(property(get = get_Extensions))::Org::BouncyCastle::Asn1::X509::X509Extensions* Extensions;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_version();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_version() const;

  constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_tsaPolicyId();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_tsaPolicyId() const;

  constexpr void __set_tsaPolicyId(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::Tsp::MessageImprint*& __get_messageImprint();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Tsp::MessageImprint*> const& __get_messageImprint() const;

  constexpr void __set_messageImprint(::Org::BouncyCastle::Asn1::Tsp::MessageImprint* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_serialNumber();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_serialNumber() const;

  constexpr void __set_serialNumber(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& __get_genTime();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerGeneralizedTime*> const& __get_genTime() const;

  constexpr void __set_genTime(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value);

  constexpr ::Org::BouncyCastle::Asn1::Tsp::Accuracy*& __get_accuracy();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Tsp::Accuracy*> const& __get_accuracy() const;

  constexpr void __set_accuracy(::Org::BouncyCastle::Asn1::Tsp::Accuracy* value);

  constexpr ::Org::BouncyCastle::Asn1::DerBoolean*& __get_ordering();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBoolean*> const& __get_ordering() const;

  constexpr void __set_ordering(::Org::BouncyCastle::Asn1::DerBoolean* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_nonce();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_nonce() const;

  constexpr void __set_nonce(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __get_tsa();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> const& __get_tsa() const;

  constexpr void __set_tsa(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions*& __get_extensions();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Extensions*> const& __get_extensions() const;

  constexpr void __set_extensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* value);

  /// @brief Method GetInstance addr 0x1079b28 size 0xa4 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Tsp::TstInfo* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Tsp::TstInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0x1079bcc size 0x814 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Tsp::TstInfo* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* tsaPolicyId, ::Org::BouncyCastle::Asn1::Tsp::MessageImprint* messageImprint,
                                                                  ::Org::BouncyCastle::Asn1::DerInteger* serialNumber, ::Org::BouncyCastle::Asn1::DerGeneralizedTime* genTime,
                                                                  ::Org::BouncyCastle::Asn1::Tsp::Accuracy* accuracy, ::Org::BouncyCastle::Asn1::DerBoolean* ordering,
                                                                  ::Org::BouncyCastle::Asn1::DerInteger* nonce, ::Org::BouncyCastle::Asn1::X509::GeneralName* tsa,
                                                                  ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  /// @brief Method .ctor addr 0x107a3e0 size 0xc0 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* tsaPolicyId, ::Org::BouncyCastle::Asn1::Tsp::MessageImprint* messageImprint, ::Org::BouncyCastle::Asn1::DerInteger* serialNumber,
                    ::Org::BouncyCastle::Asn1::DerGeneralizedTime* genTime, ::Org::BouncyCastle::Asn1::Tsp::Accuracy* accuracy, ::Org::BouncyCastle::Asn1::DerBoolean* ordering,
                    ::Org::BouncyCastle::Asn1::DerInteger* nonce, ::Org::BouncyCastle::Asn1::X509::GeneralName* tsa, ::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  /// @brief Method get_Version addr 0x107a4a0 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

  /// @brief Method get_MessageImprint addr 0x107a4a8 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Tsp::MessageImprint* get_MessageImprint();

  /// @brief Method get_Policy addr 0x107a4b0 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_Policy();

  /// @brief Method get_SerialNumber addr 0x107a4b8 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_SerialNumber();

  /// @brief Method get_Accuracy addr 0x107a4c0 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Tsp::Accuracy* get_Accuracy();

  /// @brief Method get_GenTime addr 0x107a4c8 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_GenTime();

  /// @brief Method get_Ordering addr 0x107a4d0 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerBoolean* get_Ordering();

  /// @brief Method get_Nonce addr 0x107a4d8 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Nonce();

  /// @brief Method get_Tsa addr 0x107a4e0 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_Tsa();

  /// @brief Method get_Extensions addr 0x107a4e8 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Extensions* get_Extensions();

  /// @brief Method ToAsn1Object addr 0x107a4f0 size 0x298 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "TstInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TstInfo(TstInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TstInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TstInfo(TstInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TstInfo();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Tsp::TstInfo, 0x60>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Tsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Tsp::TstInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Tsp::TstInfo*, "Org.BouncyCastle.Asn1.Tsp", "TstInfo");
