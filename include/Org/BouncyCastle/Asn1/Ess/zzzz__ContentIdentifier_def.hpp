#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Ess\ContentIdentifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ContentIdentifier)
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
namespace Org::BouncyCastle::Asn1::Ess {
class ContentIdentifier;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Asn1::Ess::ContentIdentifier*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Asn1::Ess::ContentIdentifier*, "Org.BouncyCastle.Asn1.Ess", "ContentIdentifier");
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Ess {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Ess.ContentIdentifier
class CORDL_TYPE ContentIdentifier : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Value)) ::Org::BouncyCastle::Asn1::Asn1OctetString* Value;

  /// @brief Field value, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::Org::BouncyCastle::Asn1::Asn1OctetString* value;

  /// @brief Method GetInstance, addr 0x337a3f4, size 0x180, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Ess::ContentIdentifier* GetInstance(::System::Object* o);

  static inline ::Org::BouncyCastle::Asn1::Ess::ContentIdentifier* New_ctor(::ArrayW<uint8_t> value);

  static inline ::Org::BouncyCastle::Asn1::Ess::ContentIdentifier* New_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  /// @brief Method ToAsn1Object, addr 0x337a5ec, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& __cordl_internal_get_value() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_value(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  /// @brief Method .ctor, addr 0x337a57c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t> value);

  /// @brief Method .ctor, addr 0x337a574, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  /// @brief Method get_Value, addr 0x337a5e4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_Value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContentIdentifier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContentIdentifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContentIdentifier(ContentIdentifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContentIdentifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContentIdentifier(ContentIdentifier const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 161 };

  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Ess::ContentIdentifier, ___value) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Org::BouncyCastle::Asn1::Ess::ContentIdentifier) == 0x18, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ess
