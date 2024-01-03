#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(InfoTypeAndValue)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class InfoTypeAndValue;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue);
// Type: Org.BouncyCastle.Asn1.Cmp::InfoTypeAndValue
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(25))
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::InfoTypeAndValue*
class CORDL_TYPE InfoTypeAndValue : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field infoType, offset 0x10, size 0x8
  __declspec(property(get = __get_infoType, put = __set_infoType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* infoType;

  /// @brief Field infoValue, offset 0x18, size 0x8
  __declspec(property(get = __get_infoValue, put = __set_infoValue))::Org::BouncyCastle::Asn1::Asn1Encodable* infoValue;

  __declspec(property(get = get_InfoType))::Org::BouncyCastle::Asn1::DerObjectIdentifier* InfoType;

  __declspec(property(get = get_InfoValue))::Org::BouncyCastle::Asn1::Asn1Encodable* InfoValue;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_infoType();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_infoType() const;

  constexpr void __set_infoType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __get_infoValue();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> const& __get_infoValue() const;

  constexpr void __set_infoValue(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  static inline ::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xe67d68, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance, addr 0xe678ac, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* infoType);

  /// @brief Method .ctor, addr 0xe67e30, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* infoType);

  static inline ::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* infoType, ::Org::BouncyCastle::Asn1::Asn1Encodable* optionalValue);

  /// @brief Method .ctor, addr 0xe67e58, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* infoType, ::Org::BouncyCastle::Asn1::Asn1Encodable* optionalValue);

  /// @brief Method get_InfoType, addr 0xe67e84, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_InfoType();

  /// @brief Method get_InfoValue, addr 0xe67e8c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_InfoValue();

  /// @brief Method ToAsn1Object, addr 0xe67e94, size 0x148, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "InfoTypeAndValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InfoTypeAndValue(InfoTypeAndValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InfoTypeAndValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InfoTypeAndValue(InfoTypeAndValue const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InfoTypeAndValue();

public:
  /// @brief Field infoType, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___infoType;

  /// @brief Field infoValue, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___infoValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue, ___infoType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue, ___infoValue) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*, "Org.BouncyCastle.Asn1.Cmp", "InfoTypeAndValue");
