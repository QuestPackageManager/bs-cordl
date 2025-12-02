#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/Flex.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
CORDL_MODULE_EXPORT(Flex)
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Controller;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class ScrollViewport;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Flex;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex);
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller, System.Nullable`1<T>, UnityEngine.Vector2
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex
class CORDL_TYPE Flex : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller {
public:
  // Declarations
  __declspec(property(get = get_ScrollViewport, put = set_ScrollViewport)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollViewport> ScrollViewport;

  __declspec(property(get = get_SizeDelta)) ::UnityEngine::Vector2 SizeDelta;

  __declspec(property(get = get_SizeDeltaWithMargin)) ::UnityEngine::Vector2 SizeDeltaWithMargin;

  /// @brief Field <ScrollViewport>k__BackingField, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__ScrollViewport_k__BackingField,
                      put = __cordl_internal_set__ScrollViewport_k__BackingField)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollViewport>
      _ScrollViewport_k__BackingField;

  /// @brief Field _previousAnchoredPosition, offset 0x80, size 0xc
  __declspec(property(get = __cordl_internal_get__previousAnchoredPosition, put = __cordl_internal_set__previousAnchoredPosition)) ::System::Nullable_1<::UnityEngine::Vector2>
      _previousAnchoredPosition;

  /// @brief Field _sizeDelta, offset 0x6c, size 0x8
  __declspec(property(get = __cordl_internal_get__sizeDelta, put = __cordl_internal_set__sizeDelta)) ::UnityEngine::Vector2 _sizeDelta;

  /// @brief Method Forget, addr 0x5846438, size 0x3c, virtual false, abstract: false, final false
  inline void Forget(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* controller);

  /// @brief Method ForgetAll, addr 0x58464b0, size 0x128, virtual false, abstract: false, final false
  inline void ForgetAll();

  /// @brief Method IsVerticallyInViewport, addr 0x5846054, size 0x88, virtual false, abstract: false, final false
  static inline bool IsVerticallyInViewport(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* controller, ::UnityEngine::Rect viewportRect, ::UnityEngine::Vector2 scroll);

  /// @brief Method LateUpdate, addr 0x5846430, size 0x8, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex* New_ctor();

  /// @brief Method RefreshLayoutPostChildren, addr 0x58460f8, size 0x338, virtual true, abstract: false, final false
  inline void RefreshLayoutPostChildren();

  /// @brief Method RefreshLayoutPreChildren, addr 0x58460dc, size 0x1c, virtual true, abstract: false, final false
  inline void RefreshLayoutPreChildren();

  /// @brief Method RefreshVisibilities, addr 0x5845d84, size 0x2d0, virtual false, abstract: false, final false
  inline void RefreshVisibilities(bool force);

  /// @brief Method Remember, addr 0x5846474, size 0x3c, virtual false, abstract: false, final false
  inline void Remember(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* controller);

  /// @brief Method UpdateAnchoredPosition, addr 0x5845984, size 0xb0, virtual false, abstract: false, final false
  inline void UpdateAnchoredPosition(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* controller, ::ByRef<::UnityEngine::Vector2> offset, ::UnityEngine::Vector2 direction);

  /// @brief Method UpdateChildrenWidth, addr 0x5845a34, size 0x350, virtual false, abstract: false, final false
  inline void UpdateChildrenWidth();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollViewport> const& __cordl_internal_get__ScrollViewport_k__BackingField() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollViewport>& __cordl_internal_get__ScrollViewport_k__BackingField();

  constexpr ::System::Nullable_1<::UnityEngine::Vector2> const& __cordl_internal_get__previousAnchoredPosition() const;

  constexpr ::System::Nullable_1<::UnityEngine::Vector2>& __cordl_internal_get__previousAnchoredPosition();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__sizeDelta() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__sizeDelta();

  constexpr void __cordl_internal_set__ScrollViewport_k__BackingField(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollViewport> value);

  constexpr void __cordl_internal_set__previousAnchoredPosition(::System::Nullable_1<::UnityEngine::Vector2> value);

  constexpr void __cordl_internal_set__sizeDelta(::UnityEngine::Vector2 value);

  /// @brief Method .ctor, addr 0x58465d8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ScrollViewport, addr 0x5845974, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollViewport> get_ScrollViewport();

  /// @brief Method get_SizeDelta, addr 0x58458ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_SizeDelta();

  /// @brief Method get_SizeDeltaWithMargin, addr 0x58458f4, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_SizeDeltaWithMargin();

  /// @brief Method set_ScrollViewport, addr 0x584597c, size 0x8, virtual false, abstract: false, final false
  inline void set_ScrollViewport(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollViewport* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Flex();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Flex", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Flex(Flex&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Flex", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Flex(Flex const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18349 };

  /// @brief Field _sizeDelta, offset: 0x6c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____sizeDelta;

  /// @brief Field <ScrollViewport>k__BackingField, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ScrollViewport> ____ScrollViewport_k__BackingField;

  /// @brief Field _previousAnchoredPosition, offset: 0x80, size: 0xc, def value: None
  ::System::Nullable_1<::UnityEngine::Vector2> ____previousAnchoredPosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex, ____sizeDelta) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex, ____ScrollViewport_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex, ____previousAnchoredPosition) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex, 0x90>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex*, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "Flex");
