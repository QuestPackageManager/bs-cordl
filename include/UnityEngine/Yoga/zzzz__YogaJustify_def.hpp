#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(YogaJustify)
// Forward declare root types
namespace UnityEngine::Yoga {
struct YogaJustify;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Yoga::YogaJustify);
// Type: UnityEngine.Yoga::YogaJustify
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Yoga {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15531))
// CS Name: ::UnityEngine.Yoga::YogaJustify
struct CORDL_TYPE YogaJustify {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __YogaJustify_Unwrapped
  enum struct __YogaJustify_Unwrapped : int32_t {
    __E_FlexStart = static_cast<int32_t>(0x0),
    __E_Center = static_cast<int32_t>(0x1),
    __E_FlexEnd = static_cast<int32_t>(0x2),
    __E_SpaceBetween = static_cast<int32_t>(0x3),
    __E_SpaceAround = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __YogaJustify_Unwrapped() const noexcept {
    return static_cast<__YogaJustify_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr YogaJustify(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr YogaJustify();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field FlexStart value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Yoga::YogaJustify const FlexStart;

  /// @brief Field Center value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Yoga::YogaJustify const Center;

  /// @brief Field FlexEnd value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Yoga::YogaJustify const FlexEnd;

  /// @brief Field SpaceBetween value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Yoga::YogaJustify const SpaceBetween;

  /// @brief Field SpaceAround value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Yoga::YogaJustify const SpaceAround;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::YogaJustify, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Yoga::YogaJustify, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Yoga
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaJustify, "UnityEngine.Yoga", "YogaJustify");
