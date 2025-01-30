#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/X509Extension.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509Extension)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class DerBoolean;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extension;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::X509Extension);
// Dependencies System.Object
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.X509Extension
class CORDL_TYPE X509Extension : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsCritical)) bool IsCritical;

  __declspec(property(get = get_Value)) ::Org::BouncyCastle::Asn1::Asn1OctetString* Value;

  /// @brief Field critical, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_critical, put = __cordl_internal_set_critical)) bool critical;

  /// @brief Field value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::Org::BouncyCastle::Asn1::Asn1OctetString* value;

  /// @brief Method ConvertValueToObject, addr 0x26048b8, size 0x104, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Object* ConvertValueToObject(::Org::BouncyCastle::Asn1::X509::X509Extension* ext);

  /// @brief Method Equals, addr 0x26152b8, size 0xbc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2615288, size 0x30, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetParsedValue, addr 0x2615284, size 0x4, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* GetParsedValue();

  static inline ::Org::BouncyCastle::Asn1::X509::X509Extension* New_ctor(::Org::BouncyCastle::Asn1::DerBoolean* critical, ::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  static inline ::Org::BouncyCastle::Asn1::X509::X509Extension* New_ctor(bool critical, ::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr bool const& __cordl_internal_get_critical() const;

  constexpr bool& __cordl_internal_get_critical();

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& __cordl_internal_get_value() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_critical(bool value);

  constexpr void __cordl_internal_set_value(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  /// @brief Method .ctor, addr 0x26151e8, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerBoolean* critical, ::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  /// @brief Method .ctor, addr 0x26135f0, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(bool critical, ::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  /// @brief Method get_IsCritical, addr 0x2615274, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsCritical();

  /// @brief Method get_Value, addr 0x261527c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_Value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Extension();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509Extension", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Extension(X509Extension&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Extension", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Extension(X509Extension const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 405 };

  /// @brief Field critical, offset: 0x10, size: 0x1, def value: None
  bool ___critical;

  /// @brief Field value, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::X509Extension, ___critical) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::X509Extension, ___value) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::X509Extension, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::X509Extension);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::X509Extension*, "Org.BouncyCastle.Asn1.X509", "X509Extension");
