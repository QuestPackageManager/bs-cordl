#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaParticle)
namespace System::Xml::Schema {
class __XmlSchemaParticle__EmptyParticle;
}
namespace System::Xml::Schema {
struct __XmlSchemaParticle__Occurs;
}
namespace System {
struct Decimal;
}
// Forward declare root types
namespace System::Xml::Schema {
struct __XmlSchemaParticle__Occurs;
}
namespace System::Xml::Schema {
class XmlSchemaParticle;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::__XmlSchemaParticle__Occurs);
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaParticle);
// Type: ::Occurs
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: true
// CS Name: ::XmlSchemaParticle::Occurs
struct CORDL_TYPE __XmlSchemaParticle__Occurs {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XmlSchemaParticle__Occurs_Unwrapped
  enum struct ____XmlSchemaParticle__Occurs_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Min = static_cast<int32_t>(0x1),
    __E_Max = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XmlSchemaParticle__Occurs_Unwrapped() const noexcept {
    return static_cast<____XmlSchemaParticle__Occurs_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlSchemaParticle__Occurs();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XmlSchemaParticle__Occurs(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Max value: static_cast<int32_t>(0x2)
  static ::System::Xml::Schema::__XmlSchemaParticle__Occurs const Max;

  /// @brief Field Min value: static_cast<int32_t>(0x1)
  static ::System::Xml::Schema::__XmlSchemaParticle__Occurs const Min;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Xml::Schema::__XmlSchemaParticle__Occurs const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__XmlSchemaParticle__Occurs, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XmlSchemaParticle__Occurs, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml::Schema
// Type: System.Xml.Schema::XmlSchemaParticle
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaParticle*
class CORDL_TYPE XmlSchemaParticle : public ::System::Xml::Schema::XmlSchemaAnnotated {
public:
  // Declarations
  using EmptyParticle = ::System::Xml::Schema::__XmlSchemaParticle__EmptyParticle;

  using Occurs = ::System::Xml::Schema::__XmlSchemaParticle__Occurs;

  /// @brief Field Empty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty))::System::Xml::Schema::XmlSchemaParticle* Empty;

  __declspec(property(put = set_MaxOccurs))::System::Decimal MaxOccurs;

  __declspec(property(put = set_MinOccurs))::System::Decimal MinOccurs;

  /// @brief Field flags, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_flags, put = __cordl_internal_set_flags))::System::Xml::Schema::__XmlSchemaParticle__Occurs flags;

  /// @brief Field maxOccurs, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_maxOccurs, put = __cordl_internal_set_maxOccurs))::System::Decimal maxOccurs;

  /// @brief Field minOccurs, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_minOccurs, put = __cordl_internal_set_minOccurs))::System::Decimal minOccurs;

  static inline ::System::Xml::Schema::XmlSchemaParticle* New_ctor();

  constexpr ::System::Xml::Schema::__XmlSchemaParticle__Occurs const& __cordl_internal_get_flags() const;

  constexpr ::System::Xml::Schema::__XmlSchemaParticle__Occurs& __cordl_internal_get_flags();

  constexpr ::System::Decimal const& __cordl_internal_get_maxOccurs() const;

  constexpr ::System::Decimal& __cordl_internal_get_maxOccurs();

  constexpr ::System::Decimal const& __cordl_internal_get_minOccurs() const;

  constexpr ::System::Decimal& __cordl_internal_get_minOccurs();

  constexpr void __cordl_internal_set_flags(::System::Xml::Schema::__XmlSchemaParticle__Occurs value);

  constexpr void __cordl_internal_set_maxOccurs(::System::Decimal value);

  constexpr void __cordl_internal_set_minOccurs(::System::Decimal value);

  /// @brief Method .ctor, addr 0x2a124e4, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Xml::Schema::XmlSchemaParticle* getStaticF_Empty();

  static inline void setStaticF_Empty(::System::Xml::Schema::XmlSchemaParticle* value);

  /// @brief Method set_MaxOccurs, addr 0x2a12d18, size 0x164, virtual false, abstract: false, final false
  inline void set_MaxOccurs(::System::Decimal value);

  /// @brief Method set_MinOccurs, addr 0x2a12bec, size 0x12c, virtual false, abstract: false, final false
  inline void set_MinOccurs(::System::Decimal value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaParticle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaParticle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaParticle(XmlSchemaParticle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaParticle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaParticle(XmlSchemaParticle const&) = delete;

  /// @brief Field minOccurs, offset: 0x10, size: 0x10, def value: None
  ::System::Decimal ___minOccurs;

  /// @brief Field maxOccurs, offset: 0x20, size: 0x10, def value: None
  ::System::Decimal ___maxOccurs;

  /// @brief Field flags, offset: 0x30, size: 0x4, def value: None
  ::System::Xml::Schema::__XmlSchemaParticle__Occurs ___flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaParticle, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaParticle, ___minOccurs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaParticle, ___maxOccurs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaParticle, ___flags) == 0x30, "Offset mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__XmlSchemaParticle__Occurs, "System.Xml.Schema", "XmlSchemaParticle/Occurs");
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaParticle);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaParticle*, "System.Xml.Schema", "XmlSchemaParticle");
