#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProcurationSyntax)
namespace Org::BouncyCastle::Asn1::X500 {
class DirectoryString;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1::X509 {
class IssuerSerial;
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
class ProcurationSyntax;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax);
// Type: Org.BouncyCastle.Asn1.IsisMtt.X509::ProcurationSyntax
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.IsisMtt.X509::ProcurationSyntax*
class CORDL_TYPE ProcurationSyntax : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_CertRef))::Org::BouncyCastle::Asn1::X509::IssuerSerial* CertRef;

  __declspec(property(get = get_Country))::StringW Country;

  __declspec(property(get = get_ThirdPerson))::Org::BouncyCastle::Asn1::X509::GeneralName* ThirdPerson;

  __declspec(property(get = get_TypeOfSubstitution))::Org::BouncyCastle::Asn1::X500::DirectoryString* TypeOfSubstitution;

  /// @brief Field certRef, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_certRef, put = __cordl_internal_set_certRef))::Org::BouncyCastle::Asn1::X509::IssuerSerial* certRef;

  /// @brief Field country, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_country, put = __cordl_internal_set_country))::StringW country;

  /// @brief Field thirdPerson, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_thirdPerson, put = __cordl_internal_set_thirdPerson))::Org::BouncyCastle::Asn1::X509::GeneralName* thirdPerson;

  /// @brief Field typeOfSubstitution, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_typeOfSubstitution, put = __cordl_internal_set_typeOfSubstitution))::Org::BouncyCastle::Asn1::X500::DirectoryString* typeOfSubstitution;

  /// @brief Method GetInstance, addr 0x11d7dd0, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax* New_ctor(::StringW country, ::Org::BouncyCastle::Asn1::X500::DirectoryString* typeOfSubstitution,
                                                                                      ::Org::BouncyCastle::Asn1::X509::IssuerSerial* certRef);

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax* New_ctor(::StringW country, ::Org::BouncyCastle::Asn1::X500::DirectoryString* typeOfSubstitution,
                                                                                      ::Org::BouncyCastle::Asn1::X509::GeneralName* thirdPerson);

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x11d82ec, size 0x174, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::IssuerSerial*& __cordl_internal_get_certRef();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::IssuerSerial*> const& __cordl_internal_get_certRef() const;

  constexpr ::StringW const& __cordl_internal_get_country() const;

  constexpr ::StringW& __cordl_internal_get_country();

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __cordl_internal_get_thirdPerson();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> const& __cordl_internal_get_thirdPerson() const;

  constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString*& __cordl_internal_get_typeOfSubstitution();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X500::DirectoryString*> const& __cordl_internal_get_typeOfSubstitution() const;

  constexpr void __cordl_internal_set_certRef(::Org::BouncyCastle::Asn1::X509::IssuerSerial* value);

  constexpr void __cordl_internal_set_country(::StringW value);

  constexpr void __cordl_internal_set_thirdPerson(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  constexpr void __cordl_internal_set_typeOfSubstitution(::Org::BouncyCastle::Asn1::X500::DirectoryString* value);

  /// @brief Method .ctor, addr 0x11d8254, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW country, ::Org::BouncyCastle::Asn1::X500::DirectoryString* typeOfSubstitution, ::Org::BouncyCastle::Asn1::X509::IssuerSerial* certRef);

  /// @brief Method .ctor, addr 0x11d8290, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW country, ::Org::BouncyCastle::Asn1::X500::DirectoryString* typeOfSubstitution, ::Org::BouncyCastle::Asn1::X509::GeneralName* thirdPerson);

  /// @brief Method .ctor, addr 0x11d7f58, size 0x2fc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_CertRef, addr 0x11d82e4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* get_CertRef();

  /// @brief Method get_Country, addr 0x11d82cc, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Country();

  /// @brief Method get_ThirdPerson, addr 0x11d82dc, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_ThirdPerson();

  /// @brief Method get_TypeOfSubstitution, addr 0x11d82d4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* get_TypeOfSubstitution();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProcurationSyntax();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProcurationSyntax", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProcurationSyntax(ProcurationSyntax&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProcurationSyntax", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProcurationSyntax(ProcurationSyntax const&) = delete;

  /// @brief Field country, offset: 0x10, size: 0x8, def value: None
  ::StringW ___country;

  /// @brief Field typeOfSubstitution, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X500::DirectoryString* ___typeOfSubstitution;

  /// @brief Field thirdPerson, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralName* ___thirdPerson;

  /// @brief Field certRef, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::IssuerSerial* ___certRef;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax, ___country) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax, ___typeOfSubstitution) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax, ___thirdPerson) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax, ___certRef) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::IsisMtt::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax*, "Org.BouncyCastle.Asn1.IsisMtt.X509", "ProcurationSyntax");
