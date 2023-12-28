#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(X509Name)
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509NameEntryConverter;
}
namespace System::Collections {
class Hashtable;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::X509Name);
// Type: Org.BouncyCastle.Asn1.X509::X509Name
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(408))
// CS Name: ::Org.BouncyCastle.Asn1.X509::X509Name*
class CORDL_TYPE X509Name : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field ordering, offset 0x10, size 0x8
  __declspec(property(get = __get_ordering, put = __set_ordering))::System::Collections::IList* ordering;

  /// @brief Field converter, offset 0x18, size 0x8
  __declspec(property(get = __get_converter, put = __set_converter))::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* converter;

  /// @brief Field values, offset 0x20, size 0x8
  __declspec(property(get = __get_values, put = __set_values))::System::Collections::IList* values;

  /// @brief Field added, offset 0x28, size 0x8
  __declspec(property(get = __get_added, put = __set_added))::System::Collections::IList* added;

  /// @brief Field seq, offset 0x30, size 0x8
  __declspec(property(get = __get_seq, put = __set_seq))::Org::BouncyCastle::Asn1::Asn1Sequence* seq;

  /// @brief Field C, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_C, put = setStaticF_C))::Org::BouncyCastle::Asn1::DerObjectIdentifier* C;

  /// @brief Field O, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_O, put = setStaticF_O))::Org::BouncyCastle::Asn1::DerObjectIdentifier* O;

  /// @brief Field OU, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_OU, put = setStaticF_OU))::Org::BouncyCastle::Asn1::DerObjectIdentifier* OU;

  /// @brief Field T, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_T, put = setStaticF_T))::Org::BouncyCastle::Asn1::DerObjectIdentifier* T;

  /// @brief Field CN, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CN, put = setStaticF_CN))::Org::BouncyCastle::Asn1::DerObjectIdentifier* CN;

  /// @brief Field Street, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Street, put = setStaticF_Street))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Street;

  /// @brief Field SerialNumber, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SerialNumber, put = setStaticF_SerialNumber))::Org::BouncyCastle::Asn1::DerObjectIdentifier* SerialNumber;

  /// @brief Field L, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_L, put = setStaticF_L))::Org::BouncyCastle::Asn1::DerObjectIdentifier* L;

  /// @brief Field ST, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ST, put = setStaticF_ST))::Org::BouncyCastle::Asn1::DerObjectIdentifier* ST;

  /// @brief Field Surname, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Surname, put = setStaticF_Surname))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Surname;

  /// @brief Field GivenName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GivenName, put = setStaticF_GivenName))::Org::BouncyCastle::Asn1::DerObjectIdentifier* GivenName;

  /// @brief Field Initials, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Initials, put = setStaticF_Initials))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Initials;

  /// @brief Field Generation, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Generation, put = setStaticF_Generation))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Generation;

  /// @brief Field UniqueIdentifier, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UniqueIdentifier, put = setStaticF_UniqueIdentifier))::Org::BouncyCastle::Asn1::DerObjectIdentifier* UniqueIdentifier;

  /// @brief Field BusinessCategory, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BusinessCategory, put = setStaticF_BusinessCategory))::Org::BouncyCastle::Asn1::DerObjectIdentifier* BusinessCategory;

  /// @brief Field PostalCode, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PostalCode, put = setStaticF_PostalCode))::Org::BouncyCastle::Asn1::DerObjectIdentifier* PostalCode;

  /// @brief Field DnQualifier, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DnQualifier, put = setStaticF_DnQualifier))::Org::BouncyCastle::Asn1::DerObjectIdentifier* DnQualifier;

  /// @brief Field Pseudonym, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Pseudonym, put = setStaticF_Pseudonym))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Pseudonym;

  /// @brief Field DateOfBirth, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DateOfBirth, put = setStaticF_DateOfBirth))::Org::BouncyCastle::Asn1::DerObjectIdentifier* DateOfBirth;

  /// @brief Field PlaceOfBirth, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PlaceOfBirth, put = setStaticF_PlaceOfBirth))::Org::BouncyCastle::Asn1::DerObjectIdentifier* PlaceOfBirth;

  /// @brief Field Gender, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Gender, put = setStaticF_Gender))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Gender;

  /// @brief Field CountryOfCitizenship, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CountryOfCitizenship, put = setStaticF_CountryOfCitizenship))::Org::BouncyCastle::Asn1::DerObjectIdentifier* CountryOfCitizenship;

  /// @brief Field CountryOfResidence, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CountryOfResidence, put = setStaticF_CountryOfResidence))::Org::BouncyCastle::Asn1::DerObjectIdentifier* CountryOfResidence;

  /// @brief Field NameAtBirth, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NameAtBirth, put = setStaticF_NameAtBirth))::Org::BouncyCastle::Asn1::DerObjectIdentifier* NameAtBirth;

  /// @brief Field PostalAddress, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PostalAddress, put = setStaticF_PostalAddress))::Org::BouncyCastle::Asn1::DerObjectIdentifier* PostalAddress;

  /// @brief Field DmdName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DmdName, put = setStaticF_DmdName))::Org::BouncyCastle::Asn1::DerObjectIdentifier* DmdName;

  /// @brief Field TelephoneNumber, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TelephoneNumber, put = setStaticF_TelephoneNumber))::Org::BouncyCastle::Asn1::DerObjectIdentifier* TelephoneNumber;

  /// @brief Field OrganizationIdentifier, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_OrganizationIdentifier, put = setStaticF_OrganizationIdentifier))::Org::BouncyCastle::Asn1::DerObjectIdentifier* OrganizationIdentifier;

  /// @brief Field Name, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Name, put = setStaticF_Name))::Org::BouncyCastle::Asn1::DerObjectIdentifier* Name;

  /// @brief Field EmailAddress, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EmailAddress, put = setStaticF_EmailAddress))::Org::BouncyCastle::Asn1::DerObjectIdentifier* EmailAddress;

  /// @brief Field UnstructuredName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UnstructuredName, put = setStaticF_UnstructuredName))::Org::BouncyCastle::Asn1::DerObjectIdentifier* UnstructuredName;

  /// @brief Field UnstructuredAddress, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UnstructuredAddress, put = setStaticF_UnstructuredAddress))::Org::BouncyCastle::Asn1::DerObjectIdentifier* UnstructuredAddress;

  /// @brief Field E, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_E, put = setStaticF_E))::Org::BouncyCastle::Asn1::DerObjectIdentifier* E;

  /// @brief Field DC, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DC, put = setStaticF_DC))::Org::BouncyCastle::Asn1::DerObjectIdentifier* DC;

  /// @brief Field UID, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UID, put = setStaticF_UID))::Org::BouncyCastle::Asn1::DerObjectIdentifier* UID;

  /// @brief Field defaultReverse, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_defaultReverse, put = setStaticF_defaultReverse))::ArrayW<bool, ::Array<bool>*> defaultReverse;

  /// @brief Field DefaultSymbols, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DefaultSymbols, put = setStaticF_DefaultSymbols))::System::Collections::Hashtable* DefaultSymbols;

  /// @brief Field RFC2253Symbols, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RFC2253Symbols, put = setStaticF_RFC2253Symbols))::System::Collections::Hashtable* RFC2253Symbols;

  /// @brief Field RFC1779Symbols, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RFC1779Symbols, put = setStaticF_RFC1779Symbols))::System::Collections::Hashtable* RFC1779Symbols;

  /// @brief Field DefaultLookup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DefaultLookup, put = setStaticF_DefaultLookup))::System::Collections::Hashtable* DefaultLookup;

  constexpr ::System::Collections::IList*& __get_ordering();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_ordering() const;

  constexpr void __set_ordering(::System::Collections::IList* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter*& __get_converter();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter*> const& __get_converter() const;

  constexpr void __set_converter(::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* value);

  constexpr ::System::Collections::IList*& __get_values();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_values() const;

  constexpr void __set_values(::System::Collections::IList* value);

  constexpr ::System::Collections::IList*& __get_added();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_added() const;

  constexpr void __set_added(::System::Collections::IList* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_seq();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_seq() const;

  constexpr void __set_seq(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  static inline void setStaticF_C(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_C();

  static inline void setStaticF_O(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_O();

  static inline void setStaticF_OU(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_OU();

  static inline void setStaticF_T(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_T();

  static inline void setStaticF_CN(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CN();

  static inline void setStaticF_Street(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Street();

  static inline void setStaticF_SerialNumber(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_SerialNumber();

  static inline void setStaticF_L(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_L();

  static inline void setStaticF_ST(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_ST();

  static inline void setStaticF_Surname(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Surname();

  static inline void setStaticF_GivenName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_GivenName();

  static inline void setStaticF_Initials(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Initials();

  static inline void setStaticF_Generation(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Generation();

  static inline void setStaticF_UniqueIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_UniqueIdentifier();

  static inline void setStaticF_BusinessCategory(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_BusinessCategory();

  static inline void setStaticF_PostalCode(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PostalCode();

  static inline void setStaticF_DnQualifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DnQualifier();

  static inline void setStaticF_Pseudonym(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Pseudonym();

  static inline void setStaticF_DateOfBirth(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DateOfBirth();

  static inline void setStaticF_PlaceOfBirth(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PlaceOfBirth();

  static inline void setStaticF_Gender(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Gender();

  static inline void setStaticF_CountryOfCitizenship(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CountryOfCitizenship();

  static inline void setStaticF_CountryOfResidence(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_CountryOfResidence();

  static inline void setStaticF_NameAtBirth(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_NameAtBirth();

  static inline void setStaticF_PostalAddress(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_PostalAddress();

  static inline void setStaticF_DmdName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DmdName();

  static inline void setStaticF_TelephoneNumber(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_TelephoneNumber();

  static inline void setStaticF_OrganizationIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_OrganizationIdentifier();

  static inline void setStaticF_Name(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_Name();

  static inline void setStaticF_EmailAddress(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_EmailAddress();

  static inline void setStaticF_UnstructuredName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_UnstructuredName();

  static inline void setStaticF_UnstructuredAddress(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_UnstructuredAddress();

  static inline void setStaticF_E(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_E();

  static inline void setStaticF_DC(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_DC();

  static inline void setStaticF_UID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_UID();

  static inline void setStaticF_defaultReverse(::ArrayW<bool, ::Array<bool>*> value);

  static inline ::ArrayW<bool, ::Array<bool>*> getStaticF_defaultReverse();

  static inline void setStaticF_DefaultSymbols(::System::Collections::Hashtable* value);

  static inline ::System::Collections::Hashtable* getStaticF_DefaultSymbols();

  static inline void setStaticF_RFC2253Symbols(::System::Collections::Hashtable* value);

  static inline ::System::Collections::Hashtable* getStaticF_RFC2253Symbols();

  static inline void setStaticF_RFC1779Symbols(::System::Collections::Hashtable* value);

  static inline ::System::Collections::Hashtable* getStaticF_RFC1779Symbols();

  static inline void setStaticF_DefaultLookup(::System::Collections::Hashtable* value);

  static inline ::System::Collections::Hashtable* getStaticF_DefaultLookup();

  /// @brief Method get_DefaultReverse addr 0x11a1638 size 0x70 virtual false final false
  static inline bool get_DefaultReverse();

  /// @brief Method set_DefaultReverse addr 0x11a16a8 size 0x78 virtual false final false
  static inline void set_DefaultReverse(bool value);

  /// @brief Method GetInstance addr 0x118e730 size 0x78 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::X509Name* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance addr 0x118e8fc size 0xa4 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X509::X509Name* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::X509Name* New_ctor();

  /// @brief Method .ctor addr 0x11a39ec size 0x7c virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::X509::X509Name* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0x11a30c0 size 0x92c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::X509::X509Name* New_ctor(::System::Collections::IList* ordering, ::System::Collections::IDictionary* attributes);

  /// @brief Method .ctor addr 0x11a3a68 size 0x7c virtual false final false
  inline void _ctor(::System::Collections::IList* ordering, ::System::Collections::IDictionary* attributes);

  static inline ::Org::BouncyCastle::Asn1::X509::X509Name* New_ctor(::System::Collections::IList* ordering, ::System::Collections::IDictionary* attributes,
                                                                    ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* converter);

  /// @brief Method .ctor addr 0x11a3ae4 size 0x654 virtual false final false
  inline void _ctor(::System::Collections::IList* ordering, ::System::Collections::IDictionary* attributes, ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* converter);

  static inline ::Org::BouncyCastle::Asn1::X509::X509Name* New_ctor(::System::Collections::IList* oids, ::System::Collections::IList* values);

  /// @brief Method .ctor addr 0x11a4138 size 0x7c virtual false final false
  inline void _ctor(::System::Collections::IList* oids, ::System::Collections::IList* values);

  static inline ::Org::BouncyCastle::Asn1::X509::X509Name* New_ctor(::System::Collections::IList* oids, ::System::Collections::IList* values,
                                                                    ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* converter);

  /// @brief Method .ctor addr 0x11a41b4 size 0x484 virtual false final false
  inline void _ctor(::System::Collections::IList* oids, ::System::Collections::IList* values, ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* converter);

  static inline ::Org::BouncyCastle::Asn1::X509::X509Name* New_ctor(::StringW dirName);

  /// @brief Method .ctor addr 0x118e07c size 0x78 virtual false final false
  inline void _ctor(::StringW dirName);

  static inline ::Org::BouncyCastle::Asn1::X509::X509Name* New_ctor(::StringW dirName, ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* converter);

  /// @brief Method .ctor addr 0x11a46c4 size 0x80 virtual false final false
  inline void _ctor(::StringW dirName, ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* converter);

  static inline ::Org::BouncyCastle::Asn1::X509::X509Name* New_ctor(bool reverse, ::StringW dirName);

  /// @brief Method .ctor addr 0x11a5190 size 0x78 virtual false final false
  inline void _ctor(bool reverse, ::StringW dirName);

  static inline ::Org::BouncyCastle::Asn1::X509::X509Name* New_ctor(bool reverse, ::StringW dirName, ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* converter);

  /// @brief Method .ctor addr 0x11a5208 size 0x88 virtual false final false
  inline void _ctor(bool reverse, ::StringW dirName, ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* converter);

  static inline ::Org::BouncyCastle::Asn1::X509::X509Name* New_ctor(bool reverse, ::System::Collections::IDictionary* lookUp, ::StringW dirName);

  /// @brief Method .ctor addr 0x11a4638 size 0x8c virtual false final false
  inline void _ctor(bool reverse, ::System::Collections::IDictionary* lookUp, ::StringW dirName);

  /// @brief Method DecodeOid addr 0x11a5290 size 0x268 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* DecodeOid(::StringW name, ::System::Collections::IDictionary* lookUp);

  static inline ::Org::BouncyCastle::Asn1::X509::X509Name* New_ctor(bool reverse, ::System::Collections::IDictionary* lookUp, ::StringW dirName,
                                                                    ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* converter);

  /// @brief Method .ctor addr 0x11a4744 size 0xa4c virtual false final false
  inline void _ctor(bool reverse, ::System::Collections::IDictionary* lookUp, ::StringW dirName, ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* converter);

  /// @brief Method GetOidList addr 0x11a5780 size 0x5c virtual false final false
  inline ::System::Collections::IList* GetOidList();

  /// @brief Method GetValueList addr 0x11a57dc size 0x8 virtual false final false
  inline ::System::Collections::IList* GetValueList();

  /// @brief Method GetValueList addr 0x11a57e4 size 0x2f4 virtual false final false
  inline ::System::Collections::IList* GetValueList(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method ToAsn1Object addr 0x11a5ad8 size 0x4d8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method Equivalent addr 0x11a5fb0 size 0x460 virtual false final false
  inline bool Equivalent(::Org::BouncyCastle::Asn1::X509::X509Name* other, bool inOrder);

  /// @brief Method Equivalent addr 0x11a6410 size 0x5dc virtual false final false
  inline bool Equivalent(::Org::BouncyCastle::Asn1::X509::X509Name* other);

  /// @brief Method equivalentStrings addr 0x11a69ec size 0xd8 virtual false final false
  static inline bool equivalentStrings(::StringW s1, ::StringW s2);

  /// @brief Method canonicalize addr 0x11a6ac4 size 0x1cc virtual false final false
  static inline ::StringW canonicalize(::StringW s);

  /// @brief Method decodeObject addr 0x11a6d88 size 0x170 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Object* decodeObject(::StringW v);

  /// @brief Method stripInternalSpaces addr 0x11a6c90 size 0xf8 virtual false final false
  static inline ::StringW stripInternalSpaces(::StringW str);

  /// @brief Method AppendValue addr 0x11a6ef8 size 0x2d4 virtual false final false
  inline void AppendValue(::System::Text::StringBuilder* buf, ::System::Collections::IDictionary* oidSymbols, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::StringW val);

  /// @brief Method ToString addr 0x11a71cc size 0x5d8 virtual false final false
  inline ::StringW ToString(bool reverse, ::System::Collections::IDictionary* oidSymbols);

  /// @brief Method ToString addr 0x11a77a4 size 0x68 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "X509Name", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Name(X509Name&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Name", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Name(X509Name const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Name();

public:
  /// @brief Field ordering, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___ordering;

  /// @brief Field converter, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* ___converter;

  /// @brief Field values, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::IList* ___values;

  /// @brief Field added, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::IList* ___added;

  /// @brief Field seq, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___seq;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::X509Name, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::X509Name);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::X509Name*, "Org.BouncyCastle.Asn1.X509", "X509Name");
