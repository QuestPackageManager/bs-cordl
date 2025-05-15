#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/EventHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventHandle)
// Forward declare root types
namespace UnityEngine::EventSystems {
struct EventHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::EventSystems::EventHandle);
// Dependencies
namespace UnityEngine::EventSystems {
// Is value type: true
// CS Name: UnityEngine.EventSystems.EventHandle
struct CORDL_TYPE EventHandle {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EventHandle_Unwrapped
  enum struct __EventHandle_Unwrapped : int32_t {
    __E_Unused = static_cast<int32_t>(0x0),
    __E_Used = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EventHandle_Unwrapped() const noexcept {
    return static_cast<__EventHandle_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventHandle();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EventHandle(int32_t value__) noexcept;

  /// @brief Field Unused value: I32(0)
  static ::UnityEngine::EventSystems::EventHandle const Unused;

  /// @brief Field Used value: I32(1)
  static ::UnityEngine::EventSystems::EventHandle const Used;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15184 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::EventSystems::EventHandle, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::EventHandle, 0x4>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::EventHandle, "UnityEngine.EventSystems", "EventHandle");
