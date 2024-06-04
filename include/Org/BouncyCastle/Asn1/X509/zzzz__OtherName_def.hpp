#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/OtherName.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(OtherName)
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
namespace Org::BouncyCastle::Asn1::X509 {
class OtherName;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::OtherName);
// Type: Org.BouncyCastle.Asn1.X509::OtherName
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.X509::OtherName*
class CORDL_TYPE OtherName : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_TypeID))::Org::BouncyCastle::Asn1::DerObjectIdentifier* TypeID;

  __declspec(property(get = get_Value))::Org::BouncyCastle::Asn1::Asn1Encodable* Value;

  /// @brief Field typeID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_typeID, put = __cordl_internal_set_typeID))::Org::BouncyCastle::Asn1::DerObjectIdentifier* typeID;

  /// @brief Field value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value))::Org::BouncyCastle::Asn1::Asn1Encodable* value;

  /// @brief Method GetInstance, addr 0x13fdf38, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::OtherName* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::OtherName* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::X509::OtherName* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* typeID, ::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method ToAsn1Object, addr 0x13fe0d8, size 0x124, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_typeID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __cordl_internal_get_typeID() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __cordl_internal_get_value();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> const& __cordl_internal_get_value() const;

  constexpr void __cordl_internal_set_typeID(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_value(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method .ctor, addr 0x13fdfdc, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x13fe09c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* typeID, ::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method get_TypeID, addr 0x13fe0c8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_TypeID();

  /// @brief Method get_Value, addr 0x13fe0d0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OtherName();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OtherName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OtherName(OtherName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OtherName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OtherName(OtherName const&) = delete;

  /// @brief Field typeID, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___typeID;

  /// @brief Field value, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::OtherName, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::OtherName, ___typeID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::OtherName, ___value) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::OtherName);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::OtherName*, "Org.BouncyCastle.Asn1.X509", "OtherName");
