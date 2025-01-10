#pragma once
// IWYU pragma private; include "JetBrains/Annotations/ImplicitUseTargetFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ImplicitUseTargetFlags)
// Forward declare root types
namespace JetBrains::Annotations {
struct ImplicitUseTargetFlags;
}
// Write type traits
MARK_VAL_T(::JetBrains::Annotations::ImplicitUseTargetFlags);
// Dependencies
namespace JetBrains::Annotations {
// Is value type: true
// CS Name: JetBrains.Annotations.ImplicitUseTargetFlags
struct CORDL_TYPE ImplicitUseTargetFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ImplicitUseTargetFlags_Unwrapped
  enum struct __ImplicitUseTargetFlags_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x1),
    __E_Itself = static_cast<int32_t>(0x1),
    __E_Members = static_cast<int32_t>(0x2),
    __E_WithMembers = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ImplicitUseTargetFlags_Unwrapped() const noexcept {
    return static_cast<__ImplicitUseTargetFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ImplicitUseTargetFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ImplicitUseTargetFlags(int32_t value__) noexcept;

  /// @brief Field Default value: I32(1)
  static ::JetBrains::Annotations::ImplicitUseTargetFlags const Default;

  /// @brief Field Itself value: I32(1)
  static ::JetBrains::Annotations::ImplicitUseTargetFlags const Itself;

  /// @brief Field Members value: I32(2)
  static ::JetBrains::Annotations::ImplicitUseTargetFlags const Members;

  /// @brief Field WithMembers value: I32(3)
  static ::JetBrains::Annotations::ImplicitUseTargetFlags const WithMembers;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18456 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JetBrains::Annotations::ImplicitUseTargetFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::ImplicitUseTargetFlags, 0x4>, "Size mismatch!");

} // namespace JetBrains::Annotations
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::ImplicitUseTargetFlags, "JetBrains.Annotations", "ImplicitUseTargetFlags");
