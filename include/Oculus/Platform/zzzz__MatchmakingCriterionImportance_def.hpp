#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MatchmakingCriterionImportance)
// Forward declare root types
namespace Oculus::Platform {
struct MatchmakingCriterionImportance;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::MatchmakingCriterionImportance);
// Type: Oculus.Platform::MatchmakingCriterionImportance
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13157))
// CS Name: ::Oculus.Platform::MatchmakingCriterionImportance
struct CORDL_TYPE MatchmakingCriterionImportance {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MatchmakingCriterionImportance_Unwrapped
  enum struct __MatchmakingCriterionImportance_Unwrapped : int32_t {
    __E_Required = static_cast<int32_t>(0x0),
    __E_High = static_cast<int32_t>(0x1),
    __E_Medium = static_cast<int32_t>(0x2),
    __E_Low = static_cast<int32_t>(0x3),
    __E_Unknown = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MatchmakingCriterionImportance_Unwrapped() const noexcept {
    return static_cast<__MatchmakingCriterionImportance_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MatchmakingCriterionImportance(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr MatchmakingCriterionImportance();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Required value: static_cast<int32_t>(0x0)
  static ::Oculus::Platform::MatchmakingCriterionImportance const Required;

  /// @brief Field High value: static_cast<int32_t>(0x1)
  static ::Oculus::Platform::MatchmakingCriterionImportance const High;

  /// @brief Field Medium value: static_cast<int32_t>(0x2)
  static ::Oculus::Platform::MatchmakingCriterionImportance const Medium;

  /// @brief Field Low value: static_cast<int32_t>(0x3)
  static ::Oculus::Platform::MatchmakingCriterionImportance const Low;

  /// @brief Field Unknown value: static_cast<int32_t>(0x4)
  static ::Oculus::Platform::MatchmakingCriterionImportance const Unknown;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MatchmakingCriterionImportance, 0x4>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::MatchmakingCriterionImportance, value__) == 0x0, "Offset mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MatchmakingCriterionImportance, "Oculus.Platform", "MatchmakingCriterionImportance");
