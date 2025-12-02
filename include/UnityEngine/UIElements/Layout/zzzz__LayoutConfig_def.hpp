#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutConfig.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDataAccess_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutHandle_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(LayoutConfig)
namespace UnityEngine::UIElements::Layout {
struct LayoutDataAccess;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutHandle;
}
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
struct LayoutConfig;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Layout::LayoutConfig);
// Dependencies UnityEngine.UIElements.Layout.LayoutDataAccess, UnityEngine.UIElements.Layout.LayoutHandle
namespace UnityEngine::UIElements::Layout {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutConfig
struct CORDL_TYPE LayoutConfig {
public:
  // Declarations
  __declspec(property(get = get_Handle)) ::UnityEngine::UIElements::Layout::LayoutHandle Handle;

  __declspec(property(get = get_PointScaleFactor)) float_t PointScaleFactor;

  /// @brief Method .ctor, addr 0x6ac973c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Layout::LayoutDataAccess access, ::UnityEngine::UIElements::Layout::LayoutHandle handle);

  /// @brief Method get_Handle, addr 0x6ac9750, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Layout::LayoutHandle get_Handle();

  /// @brief Method get_PointScaleFactor, addr 0x6ac9758, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<float_t> get_PointScaleFactor();

  /// @brief Method get_Undefined, addr 0x6ac9724, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Layout::LayoutConfig get_Undefined();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutConfig();

  // Ctor Parameters [CppParam { name: "m_Access", ty: "::UnityEngine::UIElements::Layout::LayoutDataAccess", modifiers: "", def_value: None }, CppParam { name: "m_Handle", ty:
  // "::UnityEngine::UIElements::Layout::LayoutHandle", modifiers: "", def_value: None }]
  constexpr LayoutConfig(::UnityEngine::UIElements::Layout::LayoutDataAccess m_Access, ::UnityEngine::UIElements::Layout::LayoutHandle m_Handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5387 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field m_Access, offset: 0x0, size: 0x28, def value: None
  ::UnityEngine::UIElements::Layout::LayoutDataAccess m_Access;

  /// @brief Field m_Handle, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::Layout::LayoutHandle m_Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutConfig, m_Access) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutConfig, m_Handle) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::LayoutConfig, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::LayoutConfig, "UnityEngine.UIElements.Layout", "LayoutConfig");
