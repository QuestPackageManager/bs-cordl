#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FullScreenMode)
// Forward declare root types
namespace UnityEngine {
struct FullScreenMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::FullScreenMode);
// Type: UnityEngine::FullScreenMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8868))
// CS Name: ::UnityEngine::FullScreenMode
struct CORDL_TYPE FullScreenMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FullScreenMode_Unwrapped
  enum struct __FullScreenMode_Unwrapped : int32_t {
    __E_ExclusiveFullScreen = static_cast<int32_t>(0x0),
    __E_FullScreenWindow = static_cast<int32_t>(0x1),
    __E_MaximizedWindow = static_cast<int32_t>(0x2),
    __E_Windowed = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FullScreenMode_Unwrapped() const noexcept {
    return static_cast<__FullScreenMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FullScreenMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr FullScreenMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ExclusiveFullScreen value: static_cast<int32_t>(0x0)
  static ::UnityEngine::FullScreenMode const ExclusiveFullScreen;

  /// @brief Field FullScreenWindow value: static_cast<int32_t>(0x1)
  static ::UnityEngine::FullScreenMode const FullScreenWindow;

  /// @brief Field MaximizedWindow value: static_cast<int32_t>(0x2)
  static ::UnityEngine::FullScreenMode const MaximizedWindow;

  /// @brief Field Windowed value: static_cast<int32_t>(0x3)
  static ::UnityEngine::FullScreenMode const Windowed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::FullScreenMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::FullScreenMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::FullScreenMode, "UnityEngine", "FullScreenMode");
