#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cms/RecipientIdentifier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
CORDL_MODULE_EXPORT(RecipientIdentifier)
namespace Org::BouncyCastle::Asn1::Cms {
class IssuerAndSerialNumber;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class RecipientIdentifier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable, Org.BouncyCastle.Asn1.IAsn1Choice
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cms.RecipientIdentifier
class CORDL_TYPE RecipientIdentifier : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_IsTagged)) bool IsTagged;

  __declspec(property(get = get_ID)) ::Org::BouncyCastle::Asn1::Asn1Encodable* _cordl_ID;

  /// @brief Field id, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_id, put = __cordl_internal_set_id)) ::Org::BouncyCastle::Asn1::Asn1Encodable* id;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  /// @brief Method GetInstance, addr 0x2309158, size 0x21c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier* GetInstance(::System::Object* o);

  static inline ::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier* New_ctor(::Org::BouncyCastle::Asn1::Asn1Object* id);

  static inline ::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier* New_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* id);

  static inline ::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier* New_ctor(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* id);

  /// @brief Method ToAsn1Object, addr 0x230ba30, size 0x20, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* const& __cordl_internal_get_id() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __cordl_internal_get_id();

  constexpr void __cordl_internal_set_id(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method .ctor, addr 0x230b904, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Object* id);

  /// @brief Method .ctor, addr 0x230b888, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* id);

  /// @brief Method .ctor, addr 0x230b860, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* id);

  /// @brief Method get_ID, addr 0x230b9a8, size 0x88, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_ID();

  /// @brief Method get_IsTagged, addr 0x230b92c, size 0x7c, virtual false, abstract: false, final false
  inline bool get_IsTagged();

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecipientIdentifier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecipientIdentifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecipientIdentifier(RecipientIdentifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecipientIdentifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecipientIdentifier(RecipientIdentifier const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 89 };

  /// @brief Field id, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___id;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier, ___id) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier*, "Org.BouncyCastle.Asn1.Cms", "RecipientIdentifier");
