#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeInitializeLoadType)
// Forward declare root types
namespace UnityEngine {
struct RuntimeInitializeLoadType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RuntimeInitializeLoadType);
// Type: UnityEngine::RuntimeInitializeLoadType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::RuntimeInitializeLoadType
struct CORDL_TYPE RuntimeInitializeLoadType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RuntimeInitializeLoadType_Unwrapped
  enum struct __RuntimeInitializeLoadType_Unwrapped : int32_t {
    __E_AfterSceneLoad = static_cast<int32_t>(0x0),
    __E_BeforeSceneLoad = static_cast<int32_t>(0x1),
    __E_AfterAssembliesLoaded = static_cast<int32_t>(0x2),
    __E_BeforeSplashScreen = static_cast<int32_t>(0x3),
    __E_SubsystemRegistration = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RuntimeInitializeLoadType_Unwrapped() const noexcept {
    return static_cast<__RuntimeInitializeLoadType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<__RuntimeInitializeLoadType_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeInitializeLoadType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RuntimeInitializeLoadType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AfterAssembliesLoaded value: static_cast<int32_t>(0x2)
  static ::UnityEngine::RuntimeInitializeLoadType const AfterAssembliesLoaded;

  /// @brief Field AfterSceneLoad value: static_cast<int32_t>(0x0)
  static ::UnityEngine::RuntimeInitializeLoadType const AfterSceneLoad;

  /// @brief Field BeforeSceneLoad value: static_cast<int32_t>(0x1)
  static ::UnityEngine::RuntimeInitializeLoadType const BeforeSceneLoad;

  /// @brief Field BeforeSplashScreen value: static_cast<int32_t>(0x3)
  static ::UnityEngine::RuntimeInitializeLoadType const BeforeSplashScreen;

  /// @brief Field SubsystemRegistration value: static_cast<int32_t>(0x4)
  static ::UnityEngine::RuntimeInitializeLoadType const SubsystemRegistration;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RuntimeInitializeLoadType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::RuntimeInitializeLoadType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RuntimeInitializeLoadType, "UnityEngine", "RuntimeInitializeLoadType");
