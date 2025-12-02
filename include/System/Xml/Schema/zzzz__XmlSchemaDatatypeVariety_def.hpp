#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaDatatypeVariety.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaDatatypeVariety)
// Forward declare root types
namespace System::Xml::Schema {
struct XmlSchemaDatatypeVariety;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::XmlSchemaDatatypeVariety);
// Dependencies
namespace System::Xml::Schema {
// Is value type: true
// CS Name: System.Xml.Schema.XmlSchemaDatatypeVariety
struct CORDL_TYPE XmlSchemaDatatypeVariety {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XmlSchemaDatatypeVariety_Unwrapped
  enum struct __XmlSchemaDatatypeVariety_Unwrapped : int32_t {
    __E_Atomic = static_cast<int32_t>(0x0),
    __E_List = static_cast<int32_t>(0x1),
    __E_Union = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlSchemaDatatypeVariety_Unwrapped() const noexcept {
    return static_cast<__XmlSchemaDatatypeVariety_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaDatatypeVariety();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlSchemaDatatypeVariety(int32_t value__) noexcept;

  /// @brief Field Atomic value: I32(0)
  static ::System::Xml::Schema::XmlSchemaDatatypeVariety const Atomic;

  /// @brief Field List value: I32(1)
  static ::System::Xml::Schema::XmlSchemaDatatypeVariety const List;

  /// @brief Field Union value: I32(2)
  static ::System::Xml::Schema::XmlSchemaDatatypeVariety const Union;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9581 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaDatatypeVariety, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaDatatypeVariety, 0x4>, "Size mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaDatatypeVariety, "System.Xml.Schema", "XmlSchemaDatatypeVariety");
