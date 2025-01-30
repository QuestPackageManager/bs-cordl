#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Esf/OtherRevRefs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(OtherRevRefs)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
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
namespace Org::BouncyCastle::Asn1::Esf {
class OtherRevRefs;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::OtherRevRefs);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Esf.OtherRevRefs
class CORDL_TYPE OtherRevRefs : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_OtherRevRefType)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* OtherRevRefType;

  __declspec(property(get = get_OtherRevRefsObject)) ::Org::BouncyCastle::Asn1::Asn1Object* OtherRevRefsObject;

  /// @brief Field otherRevRefType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_otherRevRefType, put = __cordl_internal_set_otherRevRefType)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* otherRevRefType;

  /// @brief Field otherRevRefs, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_otherRevRefs, put = __cordl_internal_set_otherRevRefs)) ::Org::BouncyCastle::Asn1::Asn1Object* otherRevRefs;

  /// @brief Method GetInstance, addr 0x231f144, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Esf::OtherRevRefs* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherRevRefs* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* otherRevRefType, ::Org::BouncyCastle::Asn1::Asn1Encodable* otherRevRefs);

  static inline ::Org::BouncyCastle::Asn1::Esf::OtherRevRefs* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x2321bb4, size 0xec, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_otherRevRefType() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_otherRevRefType();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Object* const& __cordl_internal_get_otherRevRefs() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Object*& __cordl_internal_get_otherRevRefs();

  constexpr void __cordl_internal_set_otherRevRefType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_otherRevRefs(::Org::BouncyCastle::Asn1::Asn1Object* value);

  /// @brief Method .ctor, addr 0x2321af4, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* otherRevRefType, ::Org::BouncyCastle::Asn1::Asn1Encodable* otherRevRefs);

  /// @brief Method .ctor, addr 0x23218f4, size 0x200, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_OtherRevRefType, addr 0x2321ba4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_OtherRevRefType();

  /// @brief Method get_OtherRevRefsObject, addr 0x2321bac, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* get_OtherRevRefsObject();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OtherRevRefs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OtherRevRefs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OtherRevRefs(OtherRevRefs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OtherRevRefs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OtherRevRefs(OtherRevRefs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 151 };

  /// @brief Field otherRevRefType, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___otherRevRefType;

  /// @brief Field otherRevRefs, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Object* ___otherRevRefs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::OtherRevRefs, ___otherRevRefType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Esf::OtherRevRefs, ___otherRevRefs) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::OtherRevRefs, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::OtherRevRefs);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::OtherRevRefs*, "Org.BouncyCastle.Asn1.Esf", "OtherRevRefs");
