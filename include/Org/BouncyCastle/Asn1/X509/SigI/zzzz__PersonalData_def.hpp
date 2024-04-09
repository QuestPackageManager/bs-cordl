#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PersonalData)
namespace Org::BouncyCastle::Asn1::X500 {
class DirectoryString;
}
namespace Org::BouncyCastle::Asn1::X509::SigI {
class NameOrPseudonym;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509::SigI {
class PersonalData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::SigI::PersonalData);
// Type: Org.BouncyCastle.Asn1.X509.SigI::PersonalData
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509::SigI {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.X509.SigI::PersonalData*
class CORDL_TYPE PersonalData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_DateOfBirth))::Org::BouncyCastle::Asn1::DerGeneralizedTime* DateOfBirth;

  __declspec(property(get = get_Gender))::StringW Gender;

  __declspec(property(get = get_NameDistinguisher))::Org::BouncyCastle::Math::BigInteger* NameDistinguisher;

  __declspec(property(get = get_NameOrPseudonym))::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* NameOrPseudonym;

  __declspec(property(get = get_PlaceOfBirth))::Org::BouncyCastle::Asn1::X500::DirectoryString* PlaceOfBirth;

  __declspec(property(get = get_PostalAddress))::Org::BouncyCastle::Asn1::X500::DirectoryString* PostalAddress;

  /// @brief Field dateOfBirth, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_dateOfBirth, put = __cordl_internal_set_dateOfBirth))::Org::BouncyCastle::Asn1::DerGeneralizedTime* dateOfBirth;

  /// @brief Field gender, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_gender, put = __cordl_internal_set_gender))::StringW gender;

  /// @brief Field nameDistinguisher, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_nameDistinguisher, put = __cordl_internal_set_nameDistinguisher))::Org::BouncyCastle::Math::BigInteger* nameDistinguisher;

  /// @brief Field nameOrPseudonym, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_nameOrPseudonym, put = __cordl_internal_set_nameOrPseudonym))::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* nameOrPseudonym;

  /// @brief Field placeOfBirth, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_placeOfBirth, put = __cordl_internal_set_placeOfBirth))::Org::BouncyCastle::Asn1::X500::DirectoryString* placeOfBirth;

  /// @brief Field postalAddress, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_postalAddress, put = __cordl_internal_set_postalAddress))::Org::BouncyCastle::Asn1::X500::DirectoryString* postalAddress;

  /// @brief Method GetInstance, addr 0x11f2db8, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData* New_ctor(::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* nameOrPseudonym,
                                                                              ::Org::BouncyCastle::Math::BigInteger* nameDistinguisher, ::Org::BouncyCastle::Asn1::DerGeneralizedTime* dateOfBirth,
                                                                              ::Org::BouncyCastle::Asn1::X500::DirectoryString* placeOfBirth, ::StringW gender,
                                                                              ::Org::BouncyCastle::Asn1::X500::DirectoryString* postalAddress);

  static inline ::Org::BouncyCastle::Asn1::X509::SigI::PersonalData* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x11f3330, size 0x234, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& __cordl_internal_get_dateOfBirth();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerGeneralizedTime*> const& __cordl_internal_get_dateOfBirth() const;

  constexpr ::StringW const& __cordl_internal_get_gender() const;

  constexpr ::StringW& __cordl_internal_get_gender();

  constexpr ::Org::BouncyCastle::Math::BigInteger*& __cordl_internal_get_nameDistinguisher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& __cordl_internal_get_nameDistinguisher() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*& __cordl_internal_get_nameOrPseudonym();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym*> const& __cordl_internal_get_nameOrPseudonym() const;

  constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString*& __cordl_internal_get_placeOfBirth();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X500::DirectoryString*> const& __cordl_internal_get_placeOfBirth() const;

  constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString*& __cordl_internal_get_postalAddress();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X500::DirectoryString*> const& __cordl_internal_get_postalAddress() const;

  constexpr void __cordl_internal_set_dateOfBirth(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value);

  constexpr void __cordl_internal_set_gender(::StringW value);

  constexpr void __cordl_internal_set_nameDistinguisher(::Org::BouncyCastle::Math::BigInteger* value);

  constexpr void __cordl_internal_set_nameOrPseudonym(::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* value);

  constexpr void __cordl_internal_set_placeOfBirth(::Org::BouncyCastle::Asn1::X500::DirectoryString* value);

  constexpr void __cordl_internal_set_postalAddress(::Org::BouncyCastle::Asn1::X500::DirectoryString* value);

  /// @brief Method .ctor, addr 0x11f32ac, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* nameOrPseudonym, ::Org::BouncyCastle::Math::BigInteger* nameDistinguisher,
                    ::Org::BouncyCastle::Asn1::DerGeneralizedTime* dateOfBirth, ::Org::BouncyCastle::Asn1::X500::DirectoryString* placeOfBirth, ::StringW gender,
                    ::Org::BouncyCastle::Asn1::X500::DirectoryString* postalAddress);

  /// @brief Method .ctor, addr 0x11f2f40, size 0x36c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_DateOfBirth, addr 0x11f3310, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_DateOfBirth();

  /// @brief Method get_Gender, addr 0x11f3320, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Gender();

  /// @brief Method get_NameDistinguisher, addr 0x11f3308, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_NameDistinguisher();

  /// @brief Method get_NameOrPseudonym, addr 0x11f3300, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* get_NameOrPseudonym();

  /// @brief Method get_PlaceOfBirth, addr 0x11f3318, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* get_PlaceOfBirth();

  /// @brief Method get_PostalAddress, addr 0x11f3328, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* get_PostalAddress();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PersonalData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PersonalData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PersonalData(PersonalData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PersonalData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PersonalData(PersonalData const&) = delete;

  /// @brief Field nameOrPseudonym, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::SigI::NameOrPseudonym* ___nameOrPseudonym;

  /// @brief Field nameDistinguisher, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::BigInteger* ___nameDistinguisher;

  /// @brief Field dateOfBirth, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerGeneralizedTime* ___dateOfBirth;

  /// @brief Field placeOfBirth, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X500::DirectoryString* ___placeOfBirth;

  /// @brief Field gender, offset: 0x30, size: 0x8, def value: None
  ::StringW ___gender;

  /// @brief Field postalAddress, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X500::DirectoryString* ___postalAddress;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::SigI::PersonalData, 0x40>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::SigI::PersonalData, ___nameOrPseudonym) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::SigI::PersonalData, ___nameDistinguisher) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::SigI::PersonalData, ___dateOfBirth) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::SigI::PersonalData, ___placeOfBirth) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::SigI::PersonalData, ___gender) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::SigI::PersonalData, ___postalAddress) == 0x38, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509::SigI
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::SigI::PersonalData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::SigI::PersonalData*, "Org.BouncyCastle.Asn1.X509.SigI", "PersonalData");
