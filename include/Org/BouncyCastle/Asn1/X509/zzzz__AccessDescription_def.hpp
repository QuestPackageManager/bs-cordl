#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/AccessDescription.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AccessDescription)
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
namespace Org::BouncyCastle::Asn1::X509 {
class AccessDescription;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::AccessDescription);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.AccessDescription
class CORDL_TYPE AccessDescription : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_AccessLocation)) ::Org::BouncyCastle::Asn1::X509::GeneralName* AccessLocation;

  __declspec(property(get = get_AccessMethod)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* AccessMethod;

  /// @brief Field IdADCAIssuers, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdADCAIssuers, put = setStaticF_IdADCAIssuers)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdADCAIssuers;

  /// @brief Field IdADOcsp, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IdADOcsp, put = setStaticF_IdADOcsp)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* IdADOcsp;

  /// @brief Field accessLocation, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_accessLocation, put = __cordl_internal_set_accessLocation)) ::Org::BouncyCastle::Asn1::X509::GeneralName* accessLocation;

  /// @brief Field accessMethod, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_accessMethod, put = __cordl_internal_set_accessMethod)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* accessMethod;

  /// @brief Method GetInstance, addr 0x250534c, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::AccessDescription* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::AccessDescription* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Asn1::X509::GeneralName* location);

  static inline ::Org::BouncyCastle::Asn1::X509::AccessDescription* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x2505618, size 0xec, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method ToString, addr 0x2505704, size 0x70, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* const& __cordl_internal_get_accessLocation() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __cordl_internal_get_accessLocation();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_accessMethod() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_accessMethod();

  constexpr void __cordl_internal_set_accessLocation(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  constexpr void __cordl_internal_set_accessMethod(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  /// @brief Method .ctor, addr 0x25055dc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Asn1::X509::GeneralName* location);

  /// @brief Method .ctor, addr 0x25054c8, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdADCAIssuers();

  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdADOcsp();

  /// @brief Method get_AccessLocation, addr 0x2505610, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_AccessLocation();

  /// @brief Method get_AccessMethod, addr 0x2505608, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_AccessMethod();

  static inline void setStaticF_IdADCAIssuers(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  static inline void setStaticF_IdADOcsp(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AccessDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AccessDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AccessDescription(AccessDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AccessDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AccessDescription(AccessDescription const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 338 };

  /// @brief Field accessMethod, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___accessMethod;

  /// @brief Field accessLocation, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralName* ___accessLocation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::AccessDescription, ___accessMethod) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::AccessDescription, ___accessLocation) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::AccessDescription, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::AccessDescription);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::AccessDescription*, "Org.BouncyCastle.Asn1.X509", "AccessDescription");
