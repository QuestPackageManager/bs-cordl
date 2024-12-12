#pragma once
// IWYU pragma private; include "UnityEngine/ApplicationInstallMode.hpp"
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
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ApplicationInstallMode
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

  /// @brief Field Adhoc value: I32(3)
  static ::UnityEngine::ApplicationInstallMode const Adhoc;

  /// @brief Field DeveloperBuild value: I32(2)
  static ::UnityEngine::ApplicationInstallMode const DeveloperBuild;

  /// @brief Field Editor value: I32(5)
  static ::UnityEngine::ApplicationInstallMode const Editor;

  /// @brief Field Enterprise value: I32(4)
  static ::UnityEngine::ApplicationInstallMode const Enterprise;

  /// @brief Field Store value: I32(1)
  static ::UnityEngine::ApplicationInstallMode const Store;

  /// @brief Field Unknown value: I32(0)
  static ::UnityEngine::ApplicationInstallMode const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10651 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ApplicationInstallMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ApplicationInstallMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ApplicationInstallMode, "UnityEngine", "ApplicationInstallMode");
