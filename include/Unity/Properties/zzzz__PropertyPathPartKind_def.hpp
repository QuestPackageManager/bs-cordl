#pragma once
// IWYU pragma private; include "Unity/Properties/PropertyPathPartKind.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyPathPartKind)
// Forward declare root types
namespace Unity::Properties {
struct PropertyPathPartKind;
}
// Write type traits
MARK_VAL_T(::Unity::Properties::PropertyPathPartKind);
// Dependencies
namespace Unity::Properties {
// Is value type: true
// CS Name: Unity.Properties.PropertyPathPartKind
struct CORDL_TYPE PropertyPathPartKind {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PropertyPathPartKind_Unwrapped
  enum struct __PropertyPathPartKind_Unwrapped : int32_t {
    __E_Name = static_cast<int32_t>(0x0),
    __E_Index = static_cast<int32_t>(0x1),
    __E_Key = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PropertyPathPartKind_Unwrapped() const noexcept {
    return static_cast<__PropertyPathPartKind_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyPathPartKind();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PropertyPathPartKind(int32_t value__) noexcept;

  /// @brief Field Index value: I32(1)
  static ::Unity::Properties::PropertyPathPartKind const Index;

  /// @brief Field Key value: I32(2)
  static ::Unity::Properties::PropertyPathPartKind const Key;

  /// @brief Field Name value: I32(0)
  static ::Unity::Properties::PropertyPathPartKind const Name;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19318 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Properties::PropertyPathPartKind, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Properties::PropertyPathPartKind, 0x4>, "Size mismatch!");

} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::PropertyPathPartKind, "Unity.Properties", "PropertyPathPartKind");
