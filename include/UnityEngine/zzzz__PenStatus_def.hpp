#pragma once
// IWYU pragma private; include "UnityEngine/PenStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PenStatus)
// Forward declare root types
namespace UnityEngine {
struct PenStatus;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PenStatus);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.PenStatus
struct CORDL_TYPE PenStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PenStatus_Unwrapped
  enum struct __PenStatus_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Contact = static_cast<int32_t>(0x1),
    __E_Barrel = static_cast<int32_t>(0x2),
    __E_Inverted = static_cast<int32_t>(0x4),
    __E_Eraser = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PenStatus_Unwrapped() const noexcept {
    return static_cast<__PenStatus_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PenStatus();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PenStatus(int32_t value__) noexcept;

  /// @brief Field Barrel value: I32(2)
  static ::UnityEngine::PenStatus const Barrel;

  /// @brief Field Contact value: I32(1)
  static ::UnityEngine::PenStatus const Contact;

  /// @brief Field Eraser value: I32(8)
  static ::UnityEngine::PenStatus const Eraser;

  /// @brief Field Inverted value: I32(4)
  static ::UnityEngine::PenStatus const Inverted;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::PenStatus const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18616 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::PenStatus, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::PenStatus, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PenStatus, "UnityEngine", "PenStatus");
