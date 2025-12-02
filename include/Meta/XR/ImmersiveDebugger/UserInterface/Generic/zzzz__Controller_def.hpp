#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/Controller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Controller)
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class LayoutStyle;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UI {
class RectMask2D;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Controller;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller);
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller
class CORDL_TYPE Controller : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_Children)) ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>>* Children;

  __declspec(property(get = get_GameObject, put = set_GameObject)) ::UnityW<::UnityEngine::GameObject> GameObject;

  __declspec(property(get = get_LayoutStyle, put = set_LayoutStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle> LayoutStyle;

  /// @brief Field OnVisibilityChangedEvent, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_OnVisibilityChangedEvent,
                      put = __cordl_internal_set_OnVisibilityChangedEvent)) ::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>>* OnVisibilityChangedEvent;

  __declspec(property(get = get_Owner, put = set_Owner)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller> Owner;

  __declspec(property(get = get_RectTransform, put = set_RectTransform)) ::UnityW<::UnityEngine::RectTransform> RectTransform;

  __declspec(property(get = get_Transform, put = set_Transform)) ::UnityW<::UnityEngine::Transform> Transform;

  __declspec(property(get = get_Transparent, put = set_Transparent)) bool Transparent;

  __declspec(property(get = get_Visibility, put = set_Visibility)) bool Visibility;

  /// @brief Field <GameObject>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__GameObject_k__BackingField, put = __cordl_internal_set__GameObject_k__BackingField)) ::UnityW<::UnityEngine::GameObject> _GameObject_k__BackingField;

  /// @brief Field <Owner>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__Owner_k__BackingField, put = __cordl_internal_set__Owner_k__BackingField)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>
      _Owner_k__BackingField;

  /// @brief Field <RectTransform>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__RectTransform_k__BackingField, put = __cordl_internal_set__RectTransform_k__BackingField)) ::UnityW<::UnityEngine::RectTransform>
      _RectTransform_k__BackingField;

  /// @brief Field <Transform>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__Transform_k__BackingField, put = __cordl_internal_set__Transform_k__BackingField)) ::UnityW<::UnityEngine::Transform> _Transform_k__BackingField;

  /// @brief Field _children, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__children,
                      put = __cordl_internal_set__children)) ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>>* _children;

  /// @brief Field _hasRectTransform, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get__hasRectTransform, put = __cordl_internal_set__hasRectTransform)) bool _hasRectTransform;

  /// @brief Field _layoutStyle, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__layoutStyle, put = __cordl_internal_set__layoutStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle> _layoutStyle;

  /// @brief Field _layoutStyleHasChanged, offset 0x23, size 0x1
  __declspec(property(get = __cordl_internal_get__layoutStyleHasChanged, put = __cordl_internal_set__layoutStyleHasChanged)) bool _layoutStyleHasChanged;

  /// @brief Field _mask, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__mask, put = __cordl_internal_set__mask)) ::UnityW<::UnityEngine::UI::RectMask2D> _mask;

  /// @brief Field _refreshLayoutRequested, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__refreshLayoutRequested, put = __cordl_internal_set__refreshLayoutRequested)) bool _refreshLayoutRequested;

  /// @brief Field _transparent, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get__transparent, put = __cordl_internal_set__transparent)) bool _transparent;

  /// @brief Field _visibility, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__visibility, put = __cordl_internal_set__visibility)) bool _visibility;

  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T Append(::StringW childName);

  /// @brief Method Append, addr 0x58423e0, size 0xf0, virtual false, abstract: false, final false
  inline void Append(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* controller);

  /// @brief Method Clear, addr 0x58424d0, size 0xa0, virtual false, abstract: false, final false
  inline void Clear(bool destroy);

  /// @brief Method GetVec2FromLayout, addr 0x58425dc, size 0x34, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 GetVec2FromLayout(::UnityEngine::TextAnchor anchor);

  /// @brief Method Hide, addr 0x5836640, size 0x14, virtual false, abstract: false, final false
  inline void Hide();

  /// @brief Method InsertAfter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T InsertAfter(::StringW childName, ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* previous);

  /// @brief Method InsertBefore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T InsertBefore(::StringW childName, ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* next);

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* New_ctor();

  /// @brief Method OnDestroy, addr 0x5842abc, size 0x8c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnTransparencyChanged, addr 0x583738c, size 0x4, virtual true, abstract: false, final false
  inline void OnTransparencyChanged();

  /// @brief Method OnVisibilityChanged, addr 0x5842594, size 0x48, virtual false, abstract: false, final false
  inline void OnVisibilityChanged();

  /// @brief Method Prepend, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T Prepend(::StringW childName);

  /// @brief Method RefreshLayout, addr 0x5836614, size 0x14, virtual false, abstract: false, final false
  inline void RefreshLayout();

  /// @brief Method RefreshLayoutPostChildren, addr 0x5842914, size 0x1a8, virtual true, abstract: false, final false
  inline void RefreshLayoutPostChildren();

  /// @brief Method RefreshLayoutPreChildren, addr 0x5842610, size 0x304, virtual true, abstract: false, final false
  inline void RefreshLayoutPreChildren();

  /// @brief Method Remove, addr 0x583d158, size 0x154, virtual false, abstract: false, final false
  inline void Remove(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* controller, bool destroy);

  /// @brief Method SetHeight, addr 0x58365d4, size 0x40, virtual false, abstract: false, final false
  inline void SetHeight(float_t height);

  /// @brief Method SetWidth, addr 0x5842b48, size 0x40, virtual false, abstract: false, final false
  inline void SetWidth(float_t width);

  /// @brief Method Setup, addr 0x5839ab8, size 0x21c, virtual true, abstract: false, final false
  inline void Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner);

  /// @brief Method SetupChildController, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T SetupChildController(::StringW childName);

  /// @brief Method Show, addr 0x5836628, size 0x18, virtual false, abstract: false, final false
  inline void Show();

  /// @brief Method ToggleVisibility, addr 0x583925c, size 0x48, virtual false, abstract: false, final false
  inline void ToggleVisibility();

  /// @brief Method UpdateRefreshLayout, addr 0x58421a0, size 0x178, virtual false, abstract: false, final false
  inline void UpdateRefreshLayout(bool force);

  constexpr ::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>>* const& __cordl_internal_get_OnVisibilityChangedEvent() const;

  constexpr ::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>>*& __cordl_internal_get_OnVisibilityChangedEvent();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__GameObject_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__GameObject_k__BackingField();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller> const& __cordl_internal_get__Owner_k__BackingField() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>& __cordl_internal_get__Owner_k__BackingField();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__RectTransform_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__RectTransform_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__Transform_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__Transform_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>>* const& __cordl_internal_get__children() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>>*& __cordl_internal_get__children();

  constexpr bool const& __cordl_internal_get__hasRectTransform() const;

  constexpr bool& __cordl_internal_get__hasRectTransform();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle> const& __cordl_internal_get__layoutStyle() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle>& __cordl_internal_get__layoutStyle();

  constexpr bool const& __cordl_internal_get__layoutStyleHasChanged() const;

  constexpr bool& __cordl_internal_get__layoutStyleHasChanged();

  constexpr ::UnityW<::UnityEngine::UI::RectMask2D> const& __cordl_internal_get__mask() const;

  constexpr ::UnityW<::UnityEngine::UI::RectMask2D>& __cordl_internal_get__mask();

  constexpr bool const& __cordl_internal_get__refreshLayoutRequested() const;

  constexpr bool& __cordl_internal_get__refreshLayoutRequested();

  constexpr bool const& __cordl_internal_get__transparent() const;

  constexpr bool& __cordl_internal_get__transparent();

  constexpr bool const& __cordl_internal_get__visibility() const;

  constexpr bool& __cordl_internal_get__visibility();

  constexpr void __cordl_internal_set_OnVisibilityChangedEvent(::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>>* value);

  constexpr void __cordl_internal_set__GameObject_k__BackingField(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__Owner_k__BackingField(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller> value);

  constexpr void __cordl_internal_set__RectTransform_k__BackingField(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__Transform_k__BackingField(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__children(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>>* value);

  constexpr void __cordl_internal_set__hasRectTransform(bool value);

  constexpr void __cordl_internal_set__layoutStyle(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle> value);

  constexpr void __cordl_internal_set__layoutStyleHasChanged(bool value);

  constexpr void __cordl_internal_set__mask(::UnityW<::UnityEngine::UI::RectMask2D> value);

  constexpr void __cordl_internal_set__refreshLayoutRequested(bool value);

  constexpr void __cordl_internal_set__transparent(bool value);

  constexpr void __cordl_internal_set__visibility(bool value);

  /// @brief Method .ctor, addr 0x583b13c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_OnVisibilityChangedEvent, addr 0x5837c28, size 0xc0, virtual false, abstract: false, final false
  inline void add_OnVisibilityChangedEvent(::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>>* value);

  /// @brief Method get_Children, addr 0x5842190, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>>* get_Children();

  /// @brief Method get_GameObject, addr 0x5842180, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_GameObject();

  /// @brief Method get_LayoutStyle, addr 0x5842198, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle> get_LayoutStyle();

  /// @brief Method get_Owner, addr 0x5842150, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller> get_Owner();

  /// @brief Method get_RectTransform, addr 0x5842170, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_RectTransform();

  /// @brief Method get_Transform, addr 0x5842160, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_Transform();

  /// @brief Method get_Transparent, addr 0x58423d8, size 0x8, virtual false, abstract: false, final false
  inline bool get_Transparent();

  /// @brief Method get_Visibility, addr 0x5842570, size 0x8, virtual false, abstract: false, final false
  inline bool get_Visibility();

  /// @brief Method remove_OnVisibilityChangedEvent, addr 0x5842318, size 0xc0, virtual false, abstract: false, final false
  inline void remove_OnVisibilityChangedEvent(::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>>* value);

  /// @brief Method set_GameObject, addr 0x5842188, size 0x8, virtual false, abstract: false, final false
  inline void set_GameObject(::UnityEngine::GameObject* value);

  /// @brief Method set_LayoutStyle, addr 0x5833434, size 0xdc, virtual false, abstract: false, final false
  inline void set_LayoutStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle* value);

  /// @brief Method set_Owner, addr 0x5842158, size 0x8, virtual false, abstract: false, final false
  inline void set_Owner(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* value);

  /// @brief Method set_RectTransform, addr 0x5842178, size 0x8, virtual false, abstract: false, final false
  inline void set_RectTransform(::UnityEngine::RectTransform* value);

  /// @brief Method set_Transform, addr 0x5842168, size 0x8, virtual false, abstract: false, final false
  inline void set_Transform(::UnityEngine::Transform* value);

  /// @brief Method set_Transparent, addr 0x5838580, size 0x24, virtual false, abstract: false, final false
  inline void set_Transparent(bool value);

  /// @brief Method set_Visibility, addr 0x5842578, size 0x1c, virtual false, abstract: false, final false
  inline void set_Visibility(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Controller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Controller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Controller(Controller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Controller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Controller(Controller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18341 };

  /// @brief Field _visibility, offset: 0x20, size: 0x1, def value: None
  bool ____visibility;

  /// @brief Field _refreshLayoutRequested, offset: 0x21, size: 0x1, def value: None
  bool ____refreshLayoutRequested;

  /// @brief Field _hasRectTransform, offset: 0x22, size: 0x1, def value: None
  bool ____hasRectTransform;

  /// @brief Field _layoutStyleHasChanged, offset: 0x23, size: 0x1, def value: None
  bool ____layoutStyleHasChanged;

  /// @brief Field _layoutStyle, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::LayoutStyle> ____layoutStyle;

  /// @brief Field _children, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>>* ____children;

  /// @brief Field <Owner>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller> ____Owner_k__BackingField;

  /// @brief Field <Transform>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____Transform_k__BackingField;

  /// @brief Field <RectTransform>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____RectTransform_k__BackingField;

  /// @brief Field <GameObject>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____GameObject_k__BackingField;

  /// @brief Field _mask, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::RectMask2D> ____mask;

  /// @brief Field OnVisibilityChangedEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller>>* ___OnVisibilityChangedEvent;

  /// @brief Field _transparent, offset: 0x68, size: 0x1, def value: None
  bool ____transparent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller, ____visibility) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller, ____refreshLayoutRequested) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller, ____hasRectTransform) == 0x22, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller, ____layoutStyleHasChanged) == 0x23, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller, ____layoutStyle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller, ____children) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller, ____Owner_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller, ____Transform_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller, ____RectTransform_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller, ____GameObject_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller, ____mask) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller, ___OnVisibilityChangedEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller, ____transparent) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller, 0x70>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "Controller");
