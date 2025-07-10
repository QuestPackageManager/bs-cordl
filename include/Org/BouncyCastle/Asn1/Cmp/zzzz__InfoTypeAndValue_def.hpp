#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cmp/InfoTypeAndValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(InfoTypeAndValue)
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
namespace Org::BouncyCastle::Asn1::Cmp {
class InfoTypeAndValue;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cmp.InfoTypeAndValue
class CORDL_TYPE InfoTypeAndValue : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_InfoType)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* InfoType;

  __declspec(property(get = get_InfoValue)) ::Org::BouncyCastle::Asn1::Asn1Encodable* InfoValue;

  /// @brief Field infoType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_infoType, put = __cordl_internal_set_infoType)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* infoType;

  /// @brief Field infoValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_infoValue, put = __cordl_internal_set_infoValue)) ::Org::BouncyCastle::Asn1::Asn1Encodable* infoValue;

  /// @brief Method GetInstance, addr 0x22f6e24, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* infoType);

  static inline ::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* infoType, ::Org::BouncyCastle::Asn1::Asn1Encodable* optionalValue);

  static inline ::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x22f73ec, size 0x144, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_infoType() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_infoType();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* const& __cordl_internal_get_infoValue() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __cordl_internal_get_infoValue();

  constexpr void __cordl_internal_set_infoType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_infoValue(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method .ctor, addr 0x22f7388, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* infoType);

  /// @brief Method .ctor, addr 0x22f73b0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* infoType, ::Org::BouncyCastle::Asn1::Asn1Encodable* optionalValue);

  /// @brief Method .ctor, addr 0x22f72c0, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_InfoType, addr 0x22f73dc, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_InfoType();

  /// @brief Method get_InfoValue, addr 0x22f73e4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_InfoValue();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InfoTypeAndValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InfoTypeAndValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InfoTypeAndValue(InfoTypeAndValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InfoTypeAndValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InfoTypeAndValue(InfoTypeAndValue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 25 };

  /// @brief Field infoType, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___infoType;

  /// @brief Field infoValue, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___infoValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue, ___infoType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue, ___infoValue) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*, "Org.BouncyCastle.Asn1.Cmp", "InfoTypeAndValue");
