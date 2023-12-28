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
struct __XmlSchemaParticle__Occurs;
}
namespace System::Xml::Schema {
class __XmlSchemaParticle__EmptyParticle;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11732))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XmlSchemaParticle__Occurs(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlSchemaParticle__Occurs();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Xml::Schema::__XmlSchemaParticle__Occurs const None;

  /// @brief Field Min value: static_cast<int32_t>(0x1)
  static ::System::Xml::Schema::__XmlSchemaParticle__Occurs const Min;

  /// @brief Field Max value: static_cast<int32_t>(0x2)
  static ::System::Xml::Schema::__XmlSchemaParticle__Occurs const Max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__XmlSchemaParticle__Occurs, 0x4>, "Size mismatch!");

} // namespace System::Xml::Schema
// Type: System.Xml.Schema::XmlSchemaParticle
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11714)), TypeDefinitionIndex(TypeDefinitionIndex(11732)), TypeDefinitionIndex(TypeDefinitionIndex(2655))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11734))
// CS Name: ::System.Xml.Schema::XmlSchemaParticle*
class CORDL_TYPE XmlSchemaParticle : public ::System::Xml::Schema::XmlSchemaAnnotated {
public:
  // Declarations
  using EmptyParticle = ::System::Xml::Schema::__XmlSchemaParticle__EmptyParticle;

  using Occurs = ::System::Xml::Schema::__XmlSchemaParticle__Occurs;

  /// @brief Field minOccurs, offset 0x10, size 0x10
  __declspec(property(get = __get_minOccurs, put = __set_minOccurs))::System::Decimal minOccurs;

  /// @brief Field maxOccurs, offset 0x20, size 0x10
  __declspec(property(get = __get_maxOccurs, put = __set_maxOccurs))::System::Decimal maxOccurs;

  /// @brief Field flags, offset 0x30, size 0x4
  __declspec(property(get = __get_flags, put = __set_flags))::System::Xml::Schema::__XmlSchemaParticle__Occurs flags;

  /// @brief Field Empty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty))::System::Xml::Schema::XmlSchemaParticle* Empty;

  __declspec(property(put = set_MinOccurs))::System::Decimal MinOccurs;

  __declspec(property(put = set_MaxOccurs))::System::Decimal MaxOccurs;

  constexpr ::System::Decimal& __get_minOccurs();

  constexpr ::System::Decimal const& __get_minOccurs() const;

  constexpr void __set_minOccurs(::System::Decimal value);

  constexpr ::System::Decimal& __get_maxOccurs();

  constexpr ::System::Decimal const& __get_maxOccurs() const;

  constexpr void __set_maxOccurs(::System::Decimal value);

  constexpr ::System::Xml::Schema::__XmlSchemaParticle__Occurs& __get_flags();

  constexpr ::System::Xml::Schema::__XmlSchemaParticle__Occurs const& __get_flags() const;

  constexpr void __set_flags(::System::Xml::Schema::__XmlSchemaParticle__Occurs value);

  static inline void setStaticF_Empty(::System::Xml::Schema::XmlSchemaParticle* value);

  static inline ::System::Xml::Schema::XmlSchemaParticle* getStaticF_Empty();

  /// @brief Method set_MinOccurs addr 0x28c78d0 size 0x12c virtual false final false
  inline void set_MinOccurs(::System::Decimal value);

  /// @brief Method set_MaxOccurs addr 0x28c79fc size 0x164 virtual false final false
  inline void set_MaxOccurs(::System::Decimal value);

  static inline ::System::Xml::Schema::XmlSchemaParticle* New_ctor();

  /// @brief Method .ctor addr 0x28c71c8 size 0x74 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaParticle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaParticle(XmlSchemaParticle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaParticle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaParticle(XmlSchemaParticle const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaParticle();

public:
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

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__XmlSchemaParticle__Occurs, "System.Xml.Schema", "XmlSchemaParticle/Occurs");
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaParticle);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaParticle*, "System.Xml.Schema", "XmlSchemaParticle");
