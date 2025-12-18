#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/ScrollView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__InteractableController_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ScrollView)
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Controller;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Flex;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class ScrollViewport;
}
namespace UnityEngine::UI {
class Mask;
}
namespace UnityEngine::UI {
class ScrollRect;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class ScrollView;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView);
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.InteractableController
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ScrollView
class CORDL_TYPE ScrollView : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::InteractableController {
public:
  // Declarations
  __declspec(property(get = get_Flex)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> Flex;

  __declspec(property(get = get_Progress, put = set_Progress)) float_t Progress;

  __declspec(property(get = get_ScrollRect)) ::UnityW<::UnityEngine::UI::ScrollRect> ScrollRect;

  /// @brief Field _mask, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__mask, put = __cordl_internal_set__mask)) ::UnityW<::UnityEngine::UI::Mask> _mask;

  /// @brief Field _previousProgress, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__previousProgress, put = __cordl_internal_set__previousProgress)) float_t _previousProgress;

  /// @brief Field _scrollRect, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__scrollRect, put = __cordl_internal_set__scrollRect)) ::UnityW<::UnityEngine::UI::ScrollRect> _scrollRect;

  /// @brief Field _viewport, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__viewport, put = __cordl_internal_set__viewport)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollViewport> _viewport;

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView* New_ctor();

  /// @brief Method RefreshLayoutPostChildren, addr 0x58adf80, size 0x3c, virtual true, abstract: false, final false
  inline void RefreshLayoutPostChildren();

  /// @brief Method RefreshLayoutPreChildren, addr 0x58adf50, size 0x30, virtual true, abstract: false, final false
  inline void RefreshLayoutPreChildren();

  /// @brief Method Setup, addr 0x58ade10, size 0x140, virtual true, abstract: false, final false
  inline void Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner);

  constexpr ::UnityW<::UnityEngine::UI::Mask> const& __cordl_internal_get__mask() const;

  constexpr ::UnityW<::UnityEngine::UI::Mask>& __cordl_internal_get__mask();

  constexpr float_t const& __cordl_internal_get__previousProgress() const;

  constexpr float_t& __cordl_internal_get__previousProgress();

  constexpr ::UnityW<::UnityEngine::UI::ScrollRect> const& __cordl_internal_get__scrollRect() const;

  constexpr ::UnityW<::UnityEngine::UI::ScrollRect>& __cordl_internal_get__scrollRect();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollViewport> const& __cordl_internal_get__viewport() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollViewport>& __cordl_internal_get__viewport();

  constexpr void __cordl_internal_set__mask(::UnityW<::UnityEngine::UI::Mask> value);

  constexpr void __cordl_internal_set__previousProgress(float_t value);

  constexpr void __cordl_internal_set__scrollRect(::UnityW<::UnityEngine::UI::ScrollRect> value);

  constexpr void __cordl_internal_set__viewport(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollViewport> value);

  /// @brief Method .ctor, addr 0x58adfbc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Flex, addr 0x58addf8, size 0x18, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> get_Flex();

  /// @brief Method get_Progress, addr 0x58abe8c, size 0x18, virtual false, abstract: false, final false
  inline float_t get_Progress();

  /// @brief Method get_ScrollRect, addr 0x58addf0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::ScrollRect> get_ScrollRect();

  /// @brief Method set_Progress, addr 0x58abe68, size 0x24, virtual false, abstract: false, final false
  inline void set_Progress(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScrollView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScrollView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScrollView(ScrollView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScrollView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScrollView(ScrollView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18370 };

  /// @brief Field _scrollRect, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::ScrollRect> ____scrollRect;

  /// @brief Field _viewport, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollViewport> ____viewport;

  /// @brief Field _mask, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Mask> ____mask;

  /// @brief Field _previousProgress, offset: 0x98, size: 0x4, def value: None
  float_t ____previousProgress;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView, ____scrollRect) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView, ____viewport) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView, ____mask) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView, ____previousProgress) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView, 0xa0>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollView*, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "ScrollView");
