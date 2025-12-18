#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RTHandleProperties.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RTHandleProperties)
// Forward declare root types
namespace UnityEngine::Rendering {
struct RTHandleProperties;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RTHandleProperties);
// Dependencies UnityEngine.Vector2Int, UnityEngine.Vector4
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RTHandleProperties
struct CORDL_TYPE RTHandleProperties {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RTHandleProperties();

  // Ctor Parameters [CppParam { name: "previousViewportSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None }, CppParam { name: "previousRenderTargetSize", ty:
  // "::UnityEngine::Vector2Int", modifiers: "", def_value: None }, CppParam { name: "currentViewportSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None }, CppParam { name:
  // "currentRenderTargetSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None }, CppParam { name: "rtHandleScale", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }]
  constexpr RTHandleProperties(::UnityEngine::Vector2Int previousViewportSize, ::UnityEngine::Vector2Int previousRenderTargetSize, ::UnityEngine::Vector2Int currentViewportSize,
                               ::UnityEngine::Vector2Int currentRenderTargetSize, ::UnityEngine::Vector4 rtHandleScale) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12219 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field previousViewportSize, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2Int previousViewportSize;

  /// @brief Field previousRenderTargetSize, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Vector2Int previousRenderTargetSize;

  /// @brief Field currentViewportSize, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector2Int currentViewportSize;

  /// @brief Field currentRenderTargetSize, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Vector2Int currentRenderTargetSize;

  /// @brief Field rtHandleScale, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Vector4 rtHandleScale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RTHandleProperties, previousViewportSize) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleProperties, previousRenderTargetSize) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleProperties, currentViewportSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleProperties, currentRenderTargetSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleProperties, rtHandleScale) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RTHandleProperties, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RTHandleProperties, "UnityEngine.Rendering", "RTHandleProperties");
