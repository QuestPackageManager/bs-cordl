#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ApplicationInstallMode)
// Forward declare root types
namespace UnityEngine {
struct ApplicationInstallMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ApplicationInstallMode);
// Type: UnityEngine::ApplicationInstallMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::ApplicationInstallMode
struct CORDL_TYPE ApplicationInstallMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ApplicationInstallMode_Unwrapped
  enum struct __ApplicationInstallMode_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Store = static_cast<int32_t>(0x1),
    __E_DeveloperBuild = static_cast<int32_t>(0x2),
    __E_Adhoc = static_cast<int32_t>(0x3),
    __E_Enterprise = static_cast<int32_t>(0x4),
    __E_Editor = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ApplicationInstallMode_Unwrapped() const noexcept {
    return static_cast<__ApplicationInstallMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ApplicationInstallMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ApplicationInstallMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Adhoc value: static_cast<int32_t>(0x3)
  static ::UnityEngine::ApplicationInstallMode const Adhoc;

  /// @brief Field DeveloperBuild value: static_cast<int32_t>(0x2)
  static ::UnityEngine::ApplicationInstallMode const DeveloperBuild;

  /// @brief Field Editor value: static_cast<int32_t>(0x5)
  static ::UnityEngine::ApplicationInstallMode const Editor;

  /// @brief Field Enterprise value: static_cast<int32_t>(0x4)
  static ::UnityEngine::ApplicationInstallMode const Enterprise;

  /// @brief Field Store value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ApplicationInstallMode const Store;

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ApplicationInstallMode const Unknown;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ApplicationInstallMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ApplicationInstallMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ApplicationInstallMode, "UnityEngine", "ApplicationInstallMode");
