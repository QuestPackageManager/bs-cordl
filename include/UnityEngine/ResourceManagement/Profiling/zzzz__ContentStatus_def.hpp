#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Profiling/ContentStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContentStatus)
// Forward declare root types
namespace UnityEngine::ResourceManagement::Profiling {
struct ContentStatus;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ResourceManagement::Profiling::ContentStatus);
// Dependencies
namespace UnityEngine::ResourceManagement::Profiling {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.Profiling.ContentStatus
struct CORDL_TYPE ContentStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ContentStatus_Unwrapped
  enum struct __ContentStatus_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Queue = static_cast<int32_t>(0x2),
    __E_Downloading = static_cast<int32_t>(0x4),
    __E_Released = static_cast<int32_t>(0x10),
    __E_Loading = static_cast<int32_t>(0x40),
    __E_Active = static_cast<int32_t>(0x100),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ContentStatus_Unwrapped() const noexcept {
    return static_cast<__ContentStatus_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ContentStatus();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ContentStatus(int32_t value__) noexcept;

  /// @brief Field Active value: I32(256)
  static ::UnityEngine::ResourceManagement::Profiling::ContentStatus const Active;

  /// @brief Field Downloading value: I32(4)
  static ::UnityEngine::ResourceManagement::Profiling::ContentStatus const Downloading;

  /// @brief Field Loading value: I32(64)
  static ::UnityEngine::ResourceManagement::Profiling::ContentStatus const Loading;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::ResourceManagement::Profiling::ContentStatus const None;

  /// @brief Field Queue value: I32(2)
  static ::UnityEngine::ResourceManagement::Profiling::ContentStatus const Queue;

  /// @brief Field Released value: I32(16)
  static ::UnityEngine::ResourceManagement::Profiling::ContentStatus const Released;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18754 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::Profiling::ContentStatus, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Profiling::ContentStatus, 0x4>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Profiling
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Profiling::ContentStatus, "UnityEngine.ResourceManagement.Profiling", "ContentStatus");
