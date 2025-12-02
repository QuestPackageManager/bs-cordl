#pragma once
// IWYU pragma private; include "System/Data/MappingType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MappingType)
// Forward declare root types
namespace System::Data {
struct MappingType;
}
// Write type traits
MARK_VAL_T(::System::Data::MappingType);
// Dependencies
namespace System::Data {
// Is value type: true
// CS Name: System.Data.MappingType
struct CORDL_TYPE MappingType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MappingType_Unwrapped
  enum struct __MappingType_Unwrapped : int32_t {
    __E_Element = static_cast<int32_t>(0x1),
    __E_Attribute = static_cast<int32_t>(0x2),
    __E_SimpleContent = static_cast<int32_t>(0x3),
    __E_Hidden = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MappingType_Unwrapped() const noexcept {
    return static_cast<__MappingType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MappingType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MappingType(int32_t value__) noexcept;

  /// @brief Field Attribute value: I32(2)
  static ::System::Data::MappingType const Attribute;

  /// @brief Field Element value: I32(1)
  static ::System::Data::MappingType const Element;

  /// @brief Field Hidden value: I32(4)
  static ::System::Data::MappingType const Hidden;

  /// @brief Field SimpleContent value: I32(3)
  static ::System::Data::MappingType const SimpleContent;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13801 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Data::MappingType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::MappingType, 0x4>, "Size mismatch!");

} // namespace System::Data
DEFINE_IL2CPP_ARG_TYPE(::System::Data::MappingType, "System.Data", "MappingType");
