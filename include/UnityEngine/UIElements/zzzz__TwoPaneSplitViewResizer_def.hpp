#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PointerManipulator_def.hpp"
#include "UnityEngine/UIElements/zzzz__TwoPaneSplitViewOrientation_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TwoPaneSplitViewResizer)
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
namespace UnityEngine::UIElements {
struct TwoPaneSplitViewOrientation;
}
namespace UnityEngine::UIElements {
class TwoPaneSplitView;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TwoPaneSplitViewResizer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TwoPaneSplitViewResizer);
// Type: UnityEngine.UIElements::TwoPaneSplitViewResizer
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(6085)), TypeDefinitionIndex(TypeDefinitionIndex(6398)), TypeDefinitionIndex(TypeDefinitionIndex(8993))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6385))
// CS Name: ::UnityEngine.UIElements::TwoPaneSplitViewResizer*
class CORDL_TYPE TwoPaneSplitViewResizer : public ::UnityEngine::UIElements::PointerManipulator {
public:
  // Declarations
  /// @brief Field m_Start, offset 0x30, size 0xc
  __declspec(property(get = __cordl_internal_get_m_Start, put = __cordl_internal_set_m_Start))::UnityEngine::Vector3 m_Start;

  /// @brief Field m_Active, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Active, put = __cordl_internal_set_m_Active)) bool m_Active;

  /// @brief Field m_SplitView, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SplitView, put = __cordl_internal_set_m_SplitView))::UnityEngine::UIElements::TwoPaneSplitView* m_SplitView;

  /// @brief Field m_Direction, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Direction, put = __cordl_internal_set_m_Direction)) int32_t m_Direction;

  /// @brief Field m_Orientation, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Orientation, put = __cordl_internal_set_m_Orientation))::UnityEngine::UIElements::TwoPaneSplitViewOrientation m_Orientation;

  __declspec(property(get = get_fixedPane))::UnityEngine::UIElements::VisualElement* fixedPane;

  __declspec(property(get = get_flexedPane))::UnityEngine::UIElements::VisualElement* flexedPane;

  __declspec(property(get = get_fixedPaneMinDimension)) float_t fixedPaneMinDimension;

  __declspec(property(get = get_flexedPaneMinDimension)) float_t flexedPaneMinDimension;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_Start();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_Start() const;

  constexpr void __cordl_internal_set_m_Start(::UnityEngine::Vector3 value);

  constexpr bool& __cordl_internal_get_m_Active();

  constexpr bool const& __cordl_internal_get_m_Active() const;

  constexpr void __cordl_internal_set_m_Active(bool value);

  constexpr ::UnityEngine::UIElements::TwoPaneSplitView*& __cordl_internal_get_m_SplitView();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::TwoPaneSplitView*> const& __cordl_internal_get_m_SplitView() const;

  constexpr void __cordl_internal_set_m_SplitView(::UnityEngine::UIElements::TwoPaneSplitView* value);

  constexpr int32_t& __cordl_internal_get_m_Direction();

  constexpr int32_t const& __cordl_internal_get_m_Direction() const;

  constexpr void __cordl_internal_set_m_Direction(int32_t value);

  constexpr ::UnityEngine::UIElements::TwoPaneSplitViewOrientation& __cordl_internal_get_m_Orientation();

  constexpr ::UnityEngine::UIElements::TwoPaneSplitViewOrientation const& __cordl_internal_get_m_Orientation() const;

  constexpr void __cordl_internal_set_m_Orientation(::UnityEngine::UIElements::TwoPaneSplitViewOrientation value);

  /// @brief Method get_fixedPane, addr 0x2e56008, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_fixedPane();

  /// @brief Method get_flexedPane, addr 0x2e56024, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_flexedPane();

  /// @brief Method get_fixedPaneMinDimension, addr 0x2e56040, size 0x114, virtual false, abstract: false, final false
  inline float_t get_fixedPaneMinDimension();

  /// @brief Method get_flexedPaneMinDimension, addr 0x2e56154, size 0x114, virtual false, abstract: false, final false
  inline float_t get_flexedPaneMinDimension();

  static inline ::UnityEngine::UIElements::TwoPaneSplitViewResizer* New_ctor(::UnityEngine::UIElements::TwoPaneSplitView* splitView, int32_t dir,
                                                                             ::UnityEngine::UIElements::TwoPaneSplitViewOrientation orientation);

  /// @brief Method .ctor, addr 0x2e56268, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::TwoPaneSplitView* splitView, int32_t dir, ::UnityEngine::UIElements::TwoPaneSplitViewOrientation orientation);

  /// @brief Method RegisterCallbacksOnTarget, addr 0x2e56340, size 0x1cc, virtual true, abstract: false, final false
  inline void RegisterCallbacksOnTarget();

  /// @brief Method UnregisterCallbacksFromTarget, addr 0x2e5650c, size 0x1cc, virtual true, abstract: false, final false
  inline void UnregisterCallbacksFromTarget();

  /// @brief Method ApplyDelta, addr 0x2e566d8, size 0x600, virtual false, abstract: false, final false
  inline void ApplyDelta(float_t delta);

  /// @brief Method OnPointerDown, addr 0x2e56cd8, size 0xc8, virtual false, abstract: false, final false
  inline void OnPointerDown(::UnityEngine::UIElements::PointerDownEvent* e);

  /// @brief Method OnPointerMove, addr 0x2e56da0, size 0xb8, virtual false, abstract: false, final false
  inline void OnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* e);

  /// @brief Method OnPointerUp, addr 0x2e56e58, size 0xac, virtual false, abstract: false, final false
  inline void OnPointerUp(::UnityEngine::UIElements::PointerUpEvent* e);

  // Ctor Parameters [CppParam { name: "", ty: "TwoPaneSplitViewResizer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TwoPaneSplitViewResizer(TwoPaneSplitViewResizer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TwoPaneSplitViewResizer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TwoPaneSplitViewResizer(TwoPaneSplitViewResizer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TwoPaneSplitViewResizer();

public:
  /// @brief Field m_Start, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_Start;

  /// @brief Field m_Active, offset: 0x3c, size: 0x1, def value: None
  bool ___m_Active;

  /// @brief Field m_SplitView, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::TwoPaneSplitView* ___m_SplitView;

  /// @brief Field m_Direction, offset: 0x48, size: 0x4, def value: None
  int32_t ___m_Direction;

  /// @brief Field m_Orientation, offset: 0x4c, size: 0x4, def value: None
  ::UnityEngine::UIElements::TwoPaneSplitViewOrientation ___m_Orientation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TwoPaneSplitViewResizer, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitViewResizer, ___m_Start) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitViewResizer, ___m_Active) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitViewResizer, ___m_SplitView) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitViewResizer, ___m_Direction) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TwoPaneSplitViewResizer, ___m_Orientation) == 0x4c, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TwoPaneSplitViewResizer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TwoPaneSplitViewResizer*, "UnityEngine.UIElements", "TwoPaneSplitViewResizer");
