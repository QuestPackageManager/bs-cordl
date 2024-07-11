#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/IsisMtt/X509/Admissions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(Admissions)
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class NamingAuthority;
}
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class ProfessionInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
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
// CS Name: ::Org.BouncyCastle.Asn1.IsisMtt.X509::Admissions*
class CORDL_TYPE Admissions : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_AdmissionAuthority))::Org::BouncyCastle::Asn1::X509::GeneralName* AdmissionAuthority;

  __declspec(property(get = get_NamingAuthority))::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* NamingAuthority;

  /// @brief Field admissionAuthority, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_admissionAuthority, put = __cordl_internal_set_admissionAuthority))::Org::BouncyCastle::Asn1::X509::GeneralName* admissionAuthority;

  /// @brief Field namingAuthority, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_namingAuthority, put = __cordl_internal_set_namingAuthority))::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* namingAuthority;

  /// @brief Field professionInfos, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_professionInfos, put = __cordl_internal_set_professionInfos))::Org::BouncyCastle::Asn1::Asn1Sequence* professionInfos;

  /// @brief Method GetInstance, addr 0x11e6d4c, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::Admissions* GetInstance(::System::Object* obj);

  /// @brief Method GetProfessionInfos, addr 0x11e76c8, size 0x3a0, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*, ::Array<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>*> GetProfessionInfos();

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::Admissions*
  New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* admissionAuthority, ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* namingAuthority,
           ::ArrayW<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*, ::Array<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>*> professionInfos);

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::Admissions* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x11e7bf0, size 0xd0, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __cordl_internal_get_admissionAuthority();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> const& __cordl_internal_get_admissionAuthority() const;

  constexpr ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*& __cordl_internal_get_namingAuthority();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*> const& __cordl_internal_get_namingAuthority() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_professionInfos();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __cordl_internal_get_professionInfos() const;

  constexpr void __cordl_internal_set_admissionAuthority(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  constexpr void __cordl_internal_set_namingAuthority(::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* value);

  constexpr void __cordl_internal_set_professionInfos(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  /// @brief Method .ctor, addr 0x11e7628, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralName* admissionAuthority, ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* namingAuthority,
                    ::ArrayW<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*, ::Array<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo*>*> professionInfos);

  /// @brief Method .ctor, addr 0x11e6ed4, size 0x6dc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_AdmissionAuthority, addr 0x11e76b8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_AdmissionAuthority();

  /// @brief Method get_NamingAuthority, addr 0x11e76c0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* get_NamingAuthority();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Admissions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Admissions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Admissions(Admissions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Admissions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Admissions(Admissions const&) = delete;

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

static_assert(offsetof(::Org::BouncyCastle::Asn1::IsisMtt::X509::Admissions, ___admissionAuthority) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::IsisMtt::X509::Admissions, ___namingAuthority) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::IsisMtt::X509::Admissions, ___professionInfos) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::IsisMtt::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IsisMtt::X509::Admissions);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IsisMtt::X509::Admissions*, "Org.BouncyCastle.Asn1.IsisMtt.X509", "Admissions");
