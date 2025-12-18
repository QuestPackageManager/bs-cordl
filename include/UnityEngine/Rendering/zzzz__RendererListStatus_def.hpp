#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RendererListStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RendererListStatus)
// Forward declare root types
namespace UnityEngine::Rendering {
struct RendererListStatus;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RendererListStatus);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RendererListStatus
struct CORDL_TYPE RendererListStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RendererListStatus_Unwrapped
  enum struct __RendererListStatus_Unwrapped : int32_t {
    __E_kRendererListInvalid = static_cast<int32_t>(0xfffffffe),
    __E_kRendererListProcessing = static_cast<int32_t>(0xffffffff),
    __E_kRendererListEmpty = static_cast<int32_t>(0x0),
    __E_kRendererListPopulated = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RendererListStatus_Unwrapped() const noexcept {
    return static_cast<__RendererListStatus_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RendererListStatus();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RendererListStatus(int32_t value__) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10804 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field kRendererListEmpty value: I32(0)
  static ::UnityEngine::Rendering::RendererListStatus const kRendererListEmpty;

  /// @brief Field kRendererListInvalid value: I32(-2)
  static ::UnityEngine::Rendering::RendererListStatus const kRendererListInvalid;

  /// @brief Field kRendererListPopulated value: I32(1)
  static ::UnityEngine::Rendering::RendererListStatus const kRendererListPopulated;

  /// @brief Field kRendererListProcessing value: I32(-1)
  static ::UnityEngine::Rendering::RendererListStatus const kRendererListProcessing;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RendererListStatus, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RendererListStatus, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RendererListStatus, "UnityEngine.Rendering", "RendererListStatus");
