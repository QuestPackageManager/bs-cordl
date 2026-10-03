#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShadingRateFragmentSize.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShadingRateFragmentSize)
// Forward declare root types
namespace UnityEngine::Rendering {
struct ShadingRateFragmentSize;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ShadingRateFragmentSize);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ShadingRateFragmentSize, "UnityEngine.Rendering", "ShadingRateFragmentSize");
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ShadingRateFragmentSize
struct CORDL_TYPE ShadingRateFragmentSize {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ShadingRateFragmentSize_Unwrapped
  enum struct __ShadingRateFragmentSize_Unwrapped : int32_t {
    __E_FragmentSize1x1 = static_cast<int32_t>(0x0),
    __E_FragmentSize1x2 = static_cast<int32_t>(0x1),
    __E_FragmentSize2x1 = static_cast<int32_t>(0x2),
    __E_FragmentSize2x2 = static_cast<int32_t>(0x3),
    __E_FragmentSize1x4 = static_cast<int32_t>(0x4),
    __E_FragmentSize4x1 = static_cast<int32_t>(0x5),
    __E_FragmentSize2x4 = static_cast<int32_t>(0x6),
    __E_FragmentSize4x2 = static_cast<int32_t>(0x7),
    __E_FragmentSize4x4 = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ShadingRateFragmentSize_Unwrapped() const noexcept {
    return static_cast<__ShadingRateFragmentSize_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ShadingRateFragmentSize();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr ShadingRateFragmentSize(int32_t value__) noexcept;

  /// @brief Field FragmentSize1x1 value: I32(0)
  static ::UnityEngine::Rendering::ShadingRateFragmentSize const FragmentSize1x1;

  /// @brief Field FragmentSize1x2 value: I32(1)
  static ::UnityEngine::Rendering::ShadingRateFragmentSize const FragmentSize1x2;

  /// @brief Field FragmentSize1x4 value: I32(4)
  static ::UnityEngine::Rendering::ShadingRateFragmentSize const FragmentSize1x4;

  /// @brief Field FragmentSize2x1 value: I32(2)
  static ::UnityEngine::Rendering::ShadingRateFragmentSize const FragmentSize2x1;

  /// @brief Field FragmentSize2x2 value: I32(3)
  static ::UnityEngine::Rendering::ShadingRateFragmentSize const FragmentSize2x2;

  /// @brief Field FragmentSize2x4 value: I32(6)
  static ::UnityEngine::Rendering::ShadingRateFragmentSize const FragmentSize2x4;

  /// @brief Field FragmentSize4x1 value: I32(5)
  static ::UnityEngine::Rendering::ShadingRateFragmentSize const FragmentSize4x1;

  /// @brief Field FragmentSize4x2 value: I32(7)
  static ::UnityEngine::Rendering::ShadingRateFragmentSize const FragmentSize4x2;

  /// @brief Field FragmentSize4x4 value: I32(8)
  static ::UnityEngine::Rendering::ShadingRateFragmentSize const FragmentSize4x4;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10353 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ShadingRateFragmentSize, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::ShadingRateFragmentSize) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering
