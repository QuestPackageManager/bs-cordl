#pragma once
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
// Type: JetBrains.Annotations::ImplicitUseTargetFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15701))
// CS Name: ::JetBrains.Annotations::ImplicitUseTargetFlags
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ImplicitUseTargetFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ImplicitUseTargetFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Default value: static_cast<int32_t>(0x1)
  static ::JetBrains::Annotations::ImplicitUseTargetFlags const Default;

  /// @brief Field Itself value: static_cast<int32_t>(0x1)
  static ::JetBrains::Annotations::ImplicitUseTargetFlags const Itself;

  /// @brief Field Members value: static_cast<int32_t>(0x2)
  static ::JetBrains::Annotations::ImplicitUseTargetFlags const Members;

  /// @brief Field WithMembers value: static_cast<int32_t>(0x3)
  static ::JetBrains::Annotations::ImplicitUseTargetFlags const WithMembers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::ImplicitUseTargetFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::JetBrains::Annotations::ImplicitUseTargetFlags, value__) == 0x0, "Offset mismatch!");

} // namespace JetBrains::Annotations
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::ImplicitUseTargetFlags, "JetBrains.Annotations", "ImplicitUseTargetFlags");
