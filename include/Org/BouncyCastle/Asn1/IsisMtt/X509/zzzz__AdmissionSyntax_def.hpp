#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(AdmissionSyntax)
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class Admissions;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class AdmissionSyntax;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::IsisMtt::X509::AdmissionSyntax);
// Type: Org.BouncyCastle.Asn1.IsisMtt.X509::AdmissionSyntax
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(184))
// CS Name: ::Org.BouncyCastle.Asn1.IsisMtt.X509::AdmissionSyntax*
class CORDL_TYPE AdmissionSyntax : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field admissionAuthority, offset 0x10, size 0x8
  __declspec(property(get = __get_admissionAuthority, put = __set_admissionAuthority))::Org::BouncyCastle::Asn1::X509::GeneralName* admissionAuthority;

  /// @brief Field contentsOfAdmissions, offset 0x18, size 0x8
  __declspec(property(get = __get_contentsOfAdmissions, put = __set_contentsOfAdmissions))::Org::BouncyCastle::Asn1::Asn1Sequence* contentsOfAdmissions;

  __declspec(property(get = get_AdmissionAuthority))::Org::BouncyCastle::Asn1::X509::GeneralName* AdmissionAuthority;

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __get_admissionAuthority();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> const& __get_admissionAuthority() const;

  constexpr void __set_admissionAuthority(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_contentsOfAdmissions();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_contentsOfAdmissions() const;

  constexpr void __set_contentsOfAdmissions(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method GetInstance addr 0xf7794c size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::AdmissionSyntax* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::AdmissionSyntax* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xf77ad4 size 0x154 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::AdmissionSyntax* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* admissionAuthority,
                                                                                    ::Org::BouncyCastle::Asn1::Asn1Sequence* contentsOfAdmissions);

  /// @brief Method .ctor addr 0xf77c28 size 0x2c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* admissionAuthority, ::Org::BouncyCastle::Asn1::Asn1Sequence* contentsOfAdmissions);

  /// @brief Method ToAsn1Object addr 0xf77c54 size 0x118 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method get_AdmissionAuthority addr 0xf77d6c size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_AdmissionAuthority();

  /// @brief Method GetContentsOfAdmissions addr 0xf77d74 size 0x110 virtual true final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::IsisMtt::X509::Admissions*, ::Array<::Org::BouncyCastle::Asn1::IsisMtt::X509::Admissions*>*> GetContentsOfAdmissions();

  // Ctor Parameters [CppParam { name: "", ty: "AdmissionSyntax", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AdmissionSyntax(AdmissionSyntax&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AdmissionSyntax", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AdmissionSyntax(AdmissionSyntax const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AdmissionSyntax();

public:
  /// @brief Field admissionAuthority, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralName* ___admissionAuthority;

  /// @brief Field contentsOfAdmissions, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___contentsOfAdmissions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::IsisMtt::X509::AdmissionSyntax, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::IsisMtt::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IsisMtt::X509::AdmissionSyntax);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IsisMtt::X509::AdmissionSyntax*, "Org.BouncyCastle.Asn1.IsisMtt.X509", "AdmissionSyntax");
