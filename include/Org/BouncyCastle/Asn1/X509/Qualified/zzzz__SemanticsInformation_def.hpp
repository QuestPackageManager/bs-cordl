#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/Qualified/SemanticsInformation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(SemanticsInformation)
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509::Qualified {
class SemanticsInformation;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X509::Qualified {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.Qualified.SemanticsInformation
class CORDL_TYPE SemanticsInformation : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_SemanticsIdentifier)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* SemanticsIdentifier;

  /// @brief Field nameRegistrationAuthorities, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_nameRegistrationAuthorities,
                      put = __cordl_internal_set_nameRegistrationAuthorities)) ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*>
      nameRegistrationAuthorities;

  /// @brief Field semanticsIdentifier, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_semanticsIdentifier, put = __cordl_internal_set_semanticsIdentifier)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* semanticsIdentifier;

  /// @brief Method GetInstance, addr 0x2503174, size 0x164, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation* GetInstance(::System::Object* obj);

  /// @brief Method GetNameRegistrationAuthorities, addr 0x2503700, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> GetNameRegistrationAuthorities();

  static inline ::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation*
  New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> generalNames);

  static inline ::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* semanticsIdentifier);

  static inline ::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation*
  New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* semanticsIdentifier,
           ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> generalNames);

  static inline ::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x2503708, size 0x134, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> const& __cordl_internal_get_nameRegistrationAuthorities() const;

  constexpr ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*>& __cordl_internal_get_nameRegistrationAuthorities();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_semanticsIdentifier() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_semanticsIdentifier();

  constexpr void __cordl_internal_set_nameRegistrationAuthorities(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> value);

  constexpr void __cordl_internal_set_semanticsIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  /// @brief Method .ctor, addr 0x25036d0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> generalNames);

  /// @brief Method .ctor, addr 0x25036a8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* semanticsIdentifier);

  /// @brief Method .ctor, addr 0x250367c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* semanticsIdentifier,
                    ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> generalNames);

  /// @brief Method .ctor, addr 0x25032d8, size 0x3a4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_SemanticsIdentifier, addr 0x25036f8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_SemanticsIdentifier();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SemanticsInformation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SemanticsInformation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SemanticsInformation(SemanticsInformation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SemanticsInformation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SemanticsInformation(SemanticsInformation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 333 };

  /// @brief Field semanticsIdentifier, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___semanticsIdentifier;

  /// @brief Field nameRegistrationAuthorities, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Asn1::X509::GeneralName*, ::Array<::Org::BouncyCastle::Asn1::X509::GeneralName*>*> ___nameRegistrationAuthorities;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation, ___semanticsIdentifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation, ___nameRegistrationAuthorities) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509::Qualified
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::Qualified::SemanticsInformation*, "Org.BouncyCastle.Asn1.X509.Qualified", "SemanticsInformation");
