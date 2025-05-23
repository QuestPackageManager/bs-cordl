#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidAssetPackStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidAssetPackStatus)
// Forward declare root types
namespace UnityEngine::Android {
struct AndroidAssetPackStatus;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Android::AndroidAssetPackStatus);
// Dependencies
namespace UnityEngine::Android {
// Is value type: true
// CS Name: UnityEngine.Android.AndroidAssetPackStatus
struct CORDL_TYPE AndroidAssetPackStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AndroidAssetPackStatus_Unwrapped
  enum struct __AndroidAssetPackStatus_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Pending = static_cast<int32_t>(0x1),
    __E_Downloading = static_cast<int32_t>(0x2),
    __E_Transferring = static_cast<int32_t>(0x3),
    __E_Completed = static_cast<int32_t>(0x4),
    __E_Failed = static_cast<int32_t>(0x5),
    __E_Canceled = static_cast<int32_t>(0x6),
    __E_WaitingForWifi = static_cast<int32_t>(0x7),
    __E_NotInstalled = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AndroidAssetPackStatus_Unwrapped() const noexcept {
    return static_cast<__AndroidAssetPackStatus_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidAssetPackStatus();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AndroidAssetPackStatus(int32_t value__) noexcept;

  /// @brief Field Canceled value: I32(6)
  static ::UnityEngine::Android::AndroidAssetPackStatus const Canceled;

  /// @brief Field Completed value: I32(4)
  static ::UnityEngine::Android::AndroidAssetPackStatus const Completed;

  /// @brief Field Downloading value: I32(2)
  static ::UnityEngine::Android::AndroidAssetPackStatus const Downloading;

  /// @brief Field Failed value: I32(5)
  static ::UnityEngine::Android::AndroidAssetPackStatus const Failed;

  /// @brief Field NotInstalled value: I32(8)
  static ::UnityEngine::Android::AndroidAssetPackStatus const NotInstalled;

  /// @brief Field Pending value: I32(1)
  static ::UnityEngine::Android::AndroidAssetPackStatus const Pending;

  /// @brief Field Transferring value: I32(3)
  static ::UnityEngine::Android::AndroidAssetPackStatus const Transferring;

  /// @brief Field Unknown value: I32(0)
  static ::UnityEngine::Android::AndroidAssetPackStatus const Unknown;

  /// @brief Field WaitingForWifi value: I32(7)
  static ::UnityEngine::Android::AndroidAssetPackStatus const WaitingForWifi;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16776 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Android::AndroidAssetPackStatus, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::AndroidAssetPackStatus, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Android
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidAssetPackStatus, "UnityEngine.Android", "AndroidAssetPackStatus");
