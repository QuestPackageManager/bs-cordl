#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SignerLocation)
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X500 {
class DirectoryString;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerUtf8String;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class SignerLocation;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::SignerLocation);
// Type: Org.BouncyCastle.Asn1.Esf::SignerLocation
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(158))
// CS Name: ::Org.BouncyCastle.Asn1.Esf::SignerLocation*
class CORDL_TYPE SignerLocation : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field countryName, offset 0x10, size 0x8
  __declspec(property(get = __get_countryName, put = __set_countryName))::Org::BouncyCastle::Asn1::X500::DirectoryString* countryName;

  /// @brief Field localityName, offset 0x18, size 0x8
  __declspec(property(get = __get_localityName, put = __set_localityName))::Org::BouncyCastle::Asn1::X500::DirectoryString* localityName;

  /// @brief Field postalAddress, offset 0x20, size 0x8
  __declspec(property(get = __get_postalAddress, put = __set_postalAddress))::Org::BouncyCastle::Asn1::Asn1Sequence* postalAddress;

  __declspec(property(get = get_Country))::Org::BouncyCastle::Asn1::X500::DirectoryString* Country;

  __declspec(property(get = get_Locality))::Org::BouncyCastle::Asn1::X500::DirectoryString* Locality;

  __declspec(property(get = get_CountryName))::Org::BouncyCastle::Asn1::DerUtf8String* CountryName;

  __declspec(property(get = get_LocalityName))::Org::BouncyCastle::Asn1::DerUtf8String* LocalityName;

  __declspec(property(get = get_PostalAddress))::Org::BouncyCastle::Asn1::Asn1Sequence* PostalAddress;

  constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString*& __get_countryName();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X500::DirectoryString*> const& __get_countryName() const;

  constexpr void __set_countryName(::Org::BouncyCastle::Asn1::X500::DirectoryString* value);

  constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString*& __get_localityName();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X500::DirectoryString*> const& __get_localityName() const;

  constexpr void __set_localityName(::Org::BouncyCastle::Asn1::X500::DirectoryString* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_postalAddress();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_postalAddress() const;

  constexpr void __set_postalAddress(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  static inline ::Org::BouncyCastle::Asn1::Esf::SignerLocation* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xe98b54, size 0x3fc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Esf::SignerLocation* New_ctor(::Org::BouncyCastle::Asn1::X500::DirectoryString* countryName, ::Org::BouncyCastle::Asn1::X500::DirectoryString* localityName,
                                                                         ::Org::BouncyCastle::Asn1::Asn1Sequence* postalAddress);

  /// @brief Method .ctor, addr 0xe98f50, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X500::DirectoryString* countryName, ::Org::BouncyCastle::Asn1::X500::DirectoryString* localityName,
                    ::Org::BouncyCastle::Asn1::Asn1Sequence* postalAddress);

  static inline ::Org::BouncyCastle::Asn1::Esf::SignerLocation*
  New_ctor(::Org::BouncyCastle::Asn1::X500::DirectoryString* countryName, ::Org::BouncyCastle::Asn1::X500::DirectoryString* localityName,
           ::ArrayW<::Org::BouncyCastle::Asn1::X500::DirectoryString*, ::Array<::Org::BouncyCastle::Asn1::X500::DirectoryString*>*> postalAddress);

  /// @brief Method .ctor, addr 0xe98ff8, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X500::DirectoryString* countryName, ::Org::BouncyCastle::Asn1::X500::DirectoryString* localityName,
                    ::ArrayW<::Org::BouncyCastle::Asn1::X500::DirectoryString*, ::Array<::Org::BouncyCastle::Asn1::X500::DirectoryString*>*> postalAddress);

  static inline ::Org::BouncyCastle::Asn1::Esf::SignerLocation* New_ctor(::Org::BouncyCastle::Asn1::DerUtf8String* countryName, ::Org::BouncyCastle::Asn1::DerUtf8String* localityName,
                                                                         ::Org::BouncyCastle::Asn1::Asn1Sequence* postalAddress);

  /// @brief Method .ctor, addr 0xe99084, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerUtf8String* countryName, ::Org::BouncyCastle::Asn1::DerUtf8String* localityName, ::Org::BouncyCastle::Asn1::Asn1Sequence* postalAddress);

  /// @brief Method GetInstance, addr 0xe990d8, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Esf::SignerLocation* GetInstance(::System::Object* obj);

  /// @brief Method get_Country, addr 0xe9917c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* get_Country();

  /// @brief Method get_Locality, addr 0xe99184, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* get_Locality();

  /// @brief Method GetPostal, addr 0xe9918c, size 0x100, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X500::DirectoryString*, ::Array<::Org::BouncyCastle::Asn1::X500::DirectoryString*>*> GetPostal();

  /// @brief Method get_CountryName, addr 0xe9928c, size 0x84, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerUtf8String* get_CountryName();

  /// @brief Method get_LocalityName, addr 0xe99310, size 0x84, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerUtf8String* get_LocalityName();

  /// @brief Method get_PostalAddress, addr 0xe99394, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Sequence* get_PostalAddress();

  /// @brief Method ToAsn1Object, addr 0xe9939c, size 0xd8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "SignerLocation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignerLocation(SignerLocation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignerLocation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignerLocation(SignerLocation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignerLocation();

public:
  /// @brief Field countryName, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X500::DirectoryString* ___countryName;

  /// @brief Field localityName, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X500::DirectoryString* ___localityName;

  /// @brief Field postalAddress, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___postalAddress;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::SignerLocation, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::SignerLocation, ___countryName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::SignerLocation, ___localityName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::SignerLocation, ___postalAddress) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::SignerLocation);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::SignerLocation*, "Org.BouncyCastle.Asn1.Esf", "SignerLocation");
