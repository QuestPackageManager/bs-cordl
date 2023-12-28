#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(CertificationRequestInfo)
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class CertificationRequestInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo);
// Type: Org.BouncyCastle.Asn1.Pkcs::CertificationRequestInfo
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(230))
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::CertificationRequestInfo*
class CORDL_TYPE CertificationRequestInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field version, offset 0x10, size 0x8
  __declspec(property(get = __get_version, put = __set_version))::Org::BouncyCastle::Asn1::DerInteger* version;

  /// @brief Field subject, offset 0x18, size 0x8
  __declspec(property(get = __get_subject, put = __set_subject))::Org::BouncyCastle::Asn1::X509::X509Name* subject;

  /// @brief Field subjectPKInfo, offset 0x20, size 0x8
  __declspec(property(get = __get_subjectPKInfo, put = __set_subjectPKInfo))::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* subjectPKInfo;

  /// @brief Field attributes, offset 0x28, size 0x8
  __declspec(property(get = __get_attributes, put = __set_attributes))::Org::BouncyCastle::Asn1::Asn1Set* attributes;

  __declspec(property(get = get_Version))::Org::BouncyCastle::Asn1::DerInteger* Version;

  __declspec(property(get = get_Subject))::Org::BouncyCastle::Asn1::X509::X509Name* Subject;

  __declspec(property(get = get_SubjectPublicKeyInfo))::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* SubjectPublicKeyInfo;

  __declspec(property(get = get_Attributes))::Org::BouncyCastle::Asn1::Asn1Set* Attributes;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_version();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_version() const;

  constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::X509Name*& __get_subject();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509Name*> const& __get_subject() const;

  constexpr void __set_subject(::Org::BouncyCastle::Asn1::X509::X509Name* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*& __get_subjectPKInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*> const& __get_subjectPKInfo() const;

  constexpr void __set_subjectPKInfo(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& __get_attributes();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Set*> const& __get_attributes() const;

  constexpr void __set_attributes(::Org::BouncyCastle::Asn1::Asn1Set* value);

  /// @brief Method GetInstance addr 0xf86340 size 0xa4 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo* New_ctor(::Org::BouncyCastle::Asn1::X509::X509Name* subject, ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* pkInfo,
                                                                                    ::Org::BouncyCastle::Asn1::Asn1Set* attributes);

  /// @brief Method .ctor addr 0xf86790 size 0xfc virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::X509Name* subject, ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* pkInfo, ::Org::BouncyCastle::Asn1::Asn1Set* attributes);

  static inline ::Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xf86538 size 0x258 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_Version addr 0xf86c4c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

  /// @brief Method get_Subject addr 0xf86c54 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_Subject();

  /// @brief Method get_SubjectPublicKeyInfo addr 0xf86c5c size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* get_SubjectPublicKeyInfo();

  /// @brief Method get_Attributes addr 0xf86c64 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Set* get_Attributes();

  /// @brief Method ToAsn1Object addr 0xf86c6c size 0x16c virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method ValidateAttributes addr 0xf8688c size 0x3c0 virtual false final false
  static inline void ValidateAttributes(::Org::BouncyCastle::Asn1::Asn1Set* attributes);

  // Ctor Parameters [CppParam { name: "", ty: "CertificationRequestInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertificationRequestInfo(CertificationRequestInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertificationRequestInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertificationRequestInfo(CertificationRequestInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertificationRequestInfo();

public:
  /// @brief Field version, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___version;

  /// @brief Field subject, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509Name* ___subject;

  /// @brief Field subjectPKInfo, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* ___subjectPKInfo;

  /// @brief Field attributes, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Set* ___attributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo*, "Org.BouncyCastle.Asn1.Pkcs", "CertificationRequestInfo");
