#pragma once
// IWYU pragma private; include "JetBrains/Annotations/ImplicitUseKindFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ImplicitUseKindFlags)
// Forward declare root types
namespace JetBrains::Annotations {
struct ImplicitUseKindFlags;
}
// Write type traits
MARK_VAL_T(::JetBrains::Annotations::ImplicitUseKindFlags);
// Dependencies
namespace JetBrains::Annotations {
// Is value type: true
// CS Name: JetBrains.Annotations.ImplicitUseKindFlags
struct CORDL_TYPE ImplicitUseKindFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ImplicitUseKindFlags_Unwrapped
  enum struct __ImplicitUseKindFlags_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x7),
    __E_Access = static_cast<int32_t>(0x1),
    __E_Assign = static_cast<int32_t>(0x2),
    __E_InstantiatedWithFixedConstructorSignature = static_cast<int32_t>(0x4),
    __E_InstantiatedNoFixedConstructorSignature = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ImplicitUseKindFlags_Unwrapped() const noexcept {
    return static_cast<__ImplicitUseKindFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ImplicitUseKindFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ImplicitUseKindFlags(int32_t value__) noexcept;

  /// @brief Field Access value: I32(1)
  static ::JetBrains::Annotations::ImplicitUseKindFlags const Access;

  /// @brief Field Assign value: I32(2)
  static ::JetBrains::Annotations::ImplicitUseKindFlags const Assign;

  /// @brief Field Default value: I32(7)
  static ::JetBrains::Annotations::ImplicitUseKindFlags const Default;

  /// @brief Field InstantiatedNoFixedConstructorSignature value: I32(8)
  static ::JetBrains::Annotations::ImplicitUseKindFlags const InstantiatedNoFixedConstructorSignature;

  /// @brief Field InstantiatedWithFixedConstructorSignature value: I32(4)
  static ::JetBrains::Annotations::ImplicitUseKindFlags const InstantiatedWithFixedConstructorSignature;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10640 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JetBrains::Annotations::ImplicitUseKindFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::ImplicitUseKindFlags, 0x4>, "Size mismatch!");

} // namespace JetBrains::Annotations
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::ImplicitUseKindFlags, "JetBrains.Annotations", "ImplicitUseKindFlags");
