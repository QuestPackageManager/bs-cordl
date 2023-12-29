#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ProcurationSyntax)
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::X500 {
class DirectoryString;
}
namespace Org::BouncyCastle::Asn1::X509 {
class IssuerSerial;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(189))
// CS Name: ::Org.BouncyCastle.Asn1.IsisMtt.X509::ProcurationSyntax*
class CORDL_TYPE ProcurationSyntax : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field country, offset 0x10, size 0x8
  __declspec(property(get = __get_country, put = __set_country))::StringW country;

  /// @brief Field typeOfSubstitution, offset 0x18, size 0x8
  __declspec(property(get = __get_typeOfSubstitution, put = __set_typeOfSubstitution))::Org::BouncyCastle::Asn1::X500::DirectoryString* typeOfSubstitution;

  /// @brief Field thirdPerson, offset 0x20, size 0x8
  __declspec(property(get = __get_thirdPerson, put = __set_thirdPerson))::Org::BouncyCastle::Asn1::X509::GeneralName* thirdPerson;

  /// @brief Field certRef, offset 0x28, size 0x8
  __declspec(property(get = __get_certRef, put = __set_certRef))::Org::BouncyCastle::Asn1::X509::IssuerSerial* certRef;

  __declspec(property(get = get_Country))::StringW Country;

  __declspec(property(get = get_TypeOfSubstitution))::Org::BouncyCastle::Asn1::X500::DirectoryString* TypeOfSubstitution;

  __declspec(property(get = get_ThirdPerson))::Org::BouncyCastle::Asn1::X509::GeneralName* ThirdPerson;

  __declspec(property(get = get_CertRef))::Org::BouncyCastle::Asn1::X509::IssuerSerial* CertRef;

  constexpr ::StringW& __get_country();

  constexpr ::StringW const& __get_country() const;

  constexpr void __set_country(::StringW value);

  constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString*& __get_typeOfSubstitution();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X500::DirectoryString*> const& __get_typeOfSubstitution() const;

  constexpr void __set_typeOfSubstitution(::Org::BouncyCastle::Asn1::X500::DirectoryString* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __get_thirdPerson();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> const& __get_thirdPerson() const;

  constexpr void __set_thirdPerson(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::IssuerSerial*& __get_certRef();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::IssuerSerial*> const& __get_certRef() const;

  constexpr void __set_certRef(::Org::BouncyCastle::Asn1::X509::IssuerSerial* value);

  /// @brief Method GetInstance addr 0xf033a0 size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xf03528 size 0x2fc virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax* New_ctor(::StringW country, ::Org::BouncyCastle::Asn1::X500::DirectoryString* typeOfSubstitution,
                                                                                      ::Org::BouncyCastle::Asn1::X509::IssuerSerial* certRef);

  /// @brief Method .ctor addr 0xf03824 size 0x3c virtual false final false
  inline void _ctor(::StringW country, ::Org::BouncyCastle::Asn1::X500::DirectoryString* typeOfSubstitution, ::Org::BouncyCastle::Asn1::X509::IssuerSerial* certRef);

  static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::ProcurationSyntax* New_ctor(::StringW country, ::Org::BouncyCastle::Asn1::X500::DirectoryString* typeOfSubstitution,
                                                                                      ::Org::BouncyCastle::Asn1::X509::GeneralName* thirdPerson);

  /// @brief Method .ctor addr 0xf03860 size 0x3c virtual false final false
  inline void _ctor(::StringW country, ::Org::BouncyCastle::Asn1::X500::DirectoryString* typeOfSubstitution, ::Org::BouncyCastle::Asn1::X509::GeneralName* thirdPerson);

  /// @brief Method get_Country addr 0xf0389c size 0x8 virtual true final false
  inline ::StringW get_Country();

  /// @brief Method get_TypeOfSubstitution addr 0xf038a4 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* get_TypeOfSubstitution();

  /// @brief Method get_ThirdPerson addr 0xf038ac size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_ThirdPerson();

  /// @brief Method get_CertRef addr 0xf038b4 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::IssuerSerial* get_CertRef();

  /// @brief Method ToAsn1Object addr 0xf038bc size 0x174 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "ProcurationSyntax", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProcurationSyntax(ProcurationSyntax&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProcurationSyntax", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProcurationSyntax(ProcurationSyntax const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProcurationSyntax();

public:
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
