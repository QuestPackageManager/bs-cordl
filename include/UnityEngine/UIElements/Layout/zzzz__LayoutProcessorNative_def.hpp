#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutProcessorNative.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutState_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LayoutProcessorNative)
namespace UnityEngine::UIElements::Layout {
class ILayoutProcessor;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutDirection;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutNode;
}
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
class LayoutProcessorNative;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Layout::LayoutProcessorNative);
// Dependencies System.Object, UnityEngine.UIElements.Layout.LayoutState
namespace UnityEngine::UIElements::Layout {
// Is value type: false
// CS Name: UnityEngine.UIElements.Layout.LayoutProcessorNative
class CORDL_TYPE LayoutProcessorNative : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_State, offset 0x10, size 0x28
  __declspec(property(get = __cordl_internal_get_m_State, put = __cordl_internal_set_m_State)) ::UnityEngine::UIElements::Layout::LayoutState m_State;

  /// @brief Convert operator to "::UnityEngine::UIElements::Layout::ILayoutProcessor"
  constexpr operator ::UnityEngine::UIElements::Layout::ILayoutProcessor*() noexcept;

  static inline ::UnityEngine::UIElements::Layout::LayoutProcessorNative* New_ctor();

  /// @brief Method UnityEngine.UIElements.Layout.ILayoutProcessor.CalculateLayout, addr 0x6acf880, size 0x130, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_Layout_ILayoutProcessor_CalculateLayout(::UnityEngine::UIElements::Layout::LayoutNode node, float_t parentWidth, float_t parentHeight,
                                                                             ::UnityEngine::UIElements::Layout::LayoutDirection parentDirection);

  constexpr ::UnityEngine::UIElements::Layout::LayoutState const& __cordl_internal_get_m_State() const;

  constexpr ::UnityEngine::UIElements::Layout::LayoutState& __cordl_internal_get_m_State();

  constexpr void __cordl_internal_set_m_State(::UnityEngine::UIElements::Layout::LayoutState value);

  /// @brief Method .ctor, addr 0x6acde04, size 0x34, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::UIElements::Layout::ILayoutProcessor"
  constexpr ::UnityEngine::UIElements::Layout::ILayoutProcessor* i___UnityEngine__UIElements__Layout__ILayoutProcessor() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutProcessorNative();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LayoutProcessorNative", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LayoutProcessorNative(LayoutProcessorNative&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LayoutProcessorNative", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LayoutProcessorNative(LayoutProcessorNative const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5444 };

  /// @brief Field m_State, offset: 0x10, size: 0x28, def value: None
  ::UnityEngine::UIElements::Layout::LayoutState ___m_State;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutProcessorNative, ___m_State) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::LayoutProcessorNative, 0x38>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
NEED_NO_BOX(::UnityEngine::UIElements::Layout::LayoutProcessorNative);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::LayoutProcessorNative*, "UnityEngine.UIElements.Layout", "LayoutProcessorNative");
