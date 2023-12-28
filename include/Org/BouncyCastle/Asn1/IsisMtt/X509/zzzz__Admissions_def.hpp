#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(Admissions)
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class NamingAuthority;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class ProfessionInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class Admissions;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::IsisMtt::X509::Admissions);
// Type: Org.BouncyCastle.Asn1.IsisMtt.X509::Admissions
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(183))
// CS Name: ::Org.BouncyCastle.Asn1.IsisMtt.X509::Admissions*
class CORDL_TYPE Admissions : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field admissionAuthority, offset 0x10, size 0x8
  __declspec(property(get = __get_admissionAuthority, put = __set_admissionAuthority))::Org::BouncyCastle::Asn1::X509::GeneralName* admissionAuthority;

  /// @brief Field namingAuthority, offset 0x18, size 0x8
  __declspec(property(get = __get_namingAuthority, put = __set_namingAuthority))::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* namingAuthority;

  /// @brief Field professionInfos, offset 0x20, size 0x8
  __declspec(property(get = __get_professionInfos, put = __set_professionInfos))::Org::BouncyCastle::Asn1::Asn1Sequence* professionInfos;

  __declspec(property(get = get_AdmissionAuthority))::Org::BouncyCastle::Asn1::X509::GeneralName* AdmissionAuthority;

  __declspec(property(get = get_NamingAuthority))::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* NamingAuthority;

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __get_admissionAuthority();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> const& __get_admissionAuthority() const;

  constexpr void __set_admissionAuthority(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  constexpr ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*& __get_namingAuthority();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*> const& __get_namingAuthority() const;

  constexpr void __set_namingAuthority(::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_professionInfos();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_professionInfos() const;

  constexpr void __set_professionInfos(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method GetInstance addr 0xf769d8 size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::Admissions* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::Admissions* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xf76b60 size 0x6dc virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::Admissions*
  New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* admissionAuthority, ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* namingAuthority,
           ::ArrayW<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*, ::Array<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>*> professionInfos);

  /// @brief Method .ctor addr 0xf772b4 size 0x90 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* admissionAuthority, ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* namingAuthority,
                    ::ArrayW<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*, ::Array<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>*> professionInfos);

  /// @brief Method get_AdmissionAuthority addr 0xf77344 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_AdmissionAuthority();

  /// @brief Method get_NamingAuthority addr 0xf7734c size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* get_NamingAuthority();

  /// @brief Method GetProfessionInfos addr 0xf77354 size 0x3a0 virtual false final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*, ::Array<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>*> GetProfessionInfos();

  /// @brief Method ToAsn1Object addr 0xf7787c size 0xd0 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "Admissions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Admissions(Admissions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Admissions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Admissions(Admissions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Admissions();

public:
  /// @brief Field admissionAuthority, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralName* ___admissionAuthority;

  /// @brief Field namingAuthority, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* ___namingAuthority;

  /// @brief Field professionInfos, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___professionInfos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::IsisMtt::X509::Admissions, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::IsisMtt::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IsisMtt::X509::Admissions);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IsisMtt::X509::Admissions*, "Org.BouncyCastle.Asn1.IsisMtt.X509", "Admissions");
