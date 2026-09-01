#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\BaseVisualElementPanel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutConfig_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PanelClearSettings_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/zzzz__AtlasBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__ContextType_def.hpp"
#include "UnityEngine/UIElements/zzzz__ContextualMenuManager_def.hpp"
#include "UnityEngine/UIElements/zzzz__DataBindingManager_def.hpp"
#include "UnityEngine/UIElements/zzzz__DispatchMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__ElementUnderPointer_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventDispatcher_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusController_def.hpp"
#include "UnityEngine/UIElements/zzzz__GetViewDataDictionary_def.hpp"
#include "UnityEngine/UIElements/zzzz__HierarchyChangeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__HierarchyEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__ICursorManager_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupBoxOption_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupBox_def.hpp"
#include "UnityEngine/UIElements/zzzz__IMGUIContainer_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanelRenderer_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__IScheduler_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStylePropertyAnimationSystem_def.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualTreeUpdater_def.hpp"
#include "UnityEngine/UIElements/zzzz__PanelClearSettings_def.hpp"
#include "UnityEngine/UIElements/zzzz__RepaintData_def.hpp"
#include "UnityEngine/UIElements/zzzz__SavePersistentViewData_def.hpp"
#include "UnityEngine/UIElements/zzzz__UIElementsBridge_def.hpp"
#include "UnityEngine/UIElements/zzzz__VersionChangeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeUpdatePhase_def.hpp"
#include "UnityEngine/zzzz__EventInterests_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.get_IMGUIEventInterests
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventInterests (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::get_IMGUIEventInterests)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.set_IMGUIEventInterests
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(::UnityEngine::EventInterests)>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::set_IMGUIEventInterests)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.get_ownerObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ScriptableObject> (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::get_ownerObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.set_ownerObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(::UnityEngine::ScriptableObject*)>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::set_ownerObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.get_saveViewData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::SavePersistentViewData* (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::get_saveViewData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.get_getViewDataDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::GetViewDataDictionary* (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::get_getViewDataDictionary)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.get_IMGUIContainersCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::get_IMGUIContainersCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.set_IMGUIContainersCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(int32_t)>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::set_IMGUIContainersCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.get_focusController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::FocusController* (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::get_focusController)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.set_focusController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(::UnityEngine::UIElements::FocusController*)>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::set_focusController)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.get_rootIMGUIContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::IMGUIContainer* (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::get_rootIMGUIContainer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.add_panelDisposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>*)>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::add_panelDisposed)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6db10a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                             { "add_panelDisposed", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.remove_panelDisposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>*)>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::remove_panelDisposed)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6db1304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                             { "remove_panelDisposed", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.get_uiElementsBridge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIElementsBridge* (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::get_uiElementsBridge)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6db77e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "get_uiElementsBridge", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(&::UnityEngine::UIElements::BaseVisualElementPanel::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6db7840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(&::UnityEngine::UIElements::BaseVisualElementPanel::Dispose)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6db7994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(bool)>(&::UnityEngine::UIElements::BaseVisualElementPanel::Dispose)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x6db7a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.Repaint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(::UnityEngine::Event*)>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::Repaint)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.ValidateFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(&::UnityEngine::UIElements::BaseVisualElementPanel::ValidateFocus)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.ValidateLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(&::UnityEngine::UIElements::BaseVisualElementPanel::ValidateLayout)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.UpdateAnimations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(&::UnityEngine::UIElements::BaseVisualElementPanel::UpdateAnimations)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.UpdateBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(&::UnityEngine::UIElements::BaseVisualElementPanel::UpdateBindings)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.ApplyStyles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(&::UnityEngine::UIElements::BaseVisualElementPanel::ApplyStyles)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.get_scale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(&::UnityEngine::UIElements::BaseVisualElementPanel::get_scale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6db7bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "get_scale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.set_scale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(float_t)>(&::UnityEngine::UIElements::BaseVisualElementPanel::set_scale)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6daceec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "set_scale", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.get_scaledPixelsPerPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::get_scaledPixelsPerPoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6db7bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "get_scaledPixelsPerPoint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.get_referenceSpritePixelsPerUnit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::get_referenceSpritePixelsPerUnit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6db7c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "get_referenceSpritePixelsPerUnit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.set_referenceSpritePixelsPerUnit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(float_t)>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::set_referenceSpritePixelsPerUnit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6db7c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "set_referenceSpritePixelsPerUnit", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.get_clearSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::PanelClearSettings (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::get_clearSettings)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6db7c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "get_clearSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.set_clearSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(::UnityEngine::UIElements::PanelClearSettings)>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::set_clearSettings)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6db7c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                                                           { "set_clearSettings", {}, { ::i2c::type_of<::UnityEngine::UIElements::PanelClearSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.get_duringLayoutPhase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(&::UnityEngine::UIElements::BaseVisualElementPanel::get_duringLayoutPhase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6db7c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "get_duringLayoutPhase", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.set_duringLayoutPhase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(bool)>(&::UnityEngine::UIElements::BaseVisualElementPanel::set_duringLayoutPhase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6db7c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "set_duringLayoutPhase", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.get_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(&::UnityEngine::UIElements::BaseVisualElementPanel::get_version)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.get_hierarchyVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(&::UnityEngine::UIElements::BaseVisualElementPanel::get_hierarchyVersion)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.OnVersionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType)>(&::UnityEngine::UIElements::BaseVisualElementPanel::OnVersionChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.SetUpdater
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(
    ::UnityEngine::UIElements::IVisualTreeUpdater*, ::UnityEngine::UIElements::VisualTreeUpdatePhase)>(&::UnityEngine::UIElements::BaseVisualElementPanel::SetUpdater)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.get_repaintData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::RepaintData* (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::get_repaintData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6db7c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.set_repaintData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(::UnityEngine::UIElements::RepaintData*)>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::set_repaintData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6db7c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.get_cursorManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ICursorManager* (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::get_cursorManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6db7c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.set_cursorManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(::UnityEngine::UIElements::ICursorManager*)>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::set_cursorManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6db7c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.get_contextualMenuManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ContextualMenuManager* (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::get_contextualMenuManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6db7c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "get_contextualMenuManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.set_contextualMenuManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(::UnityEngine::UIElements::ContextualMenuManager*)>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::set_contextualMenuManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6db7c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                             { "set_contextualMenuManager", {}, { ::i2c::type_of<::UnityEngine::UIElements::ContextualMenuManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.get_dataBindingManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::DataBindingManager* (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::get_dataBindingManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6db7c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.set_dataBindingManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(::UnityEngine::UIElements::DataBindingManager*)>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::set_dataBindingManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6db7c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.get_visualTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::get_visualTree)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.get_dispatcher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventDispatcher* (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::get_dispatcher)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.set_dispatcher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(::UnityEngine::UIElements::EventDispatcher*)>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::set_dispatcher)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.SendEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::DispatchMode)>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::SendEvent)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6db7c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                { "SendEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::DispatchMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.get_scheduler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::IScheduler* (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::get_scheduler)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.get_styleAnimationSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::IStylePropertyAnimationSystem* (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::get_styleAnimationSystem)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.set_styleAnimationSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(::UnityEngine::UIElements::IStylePropertyAnimationSystem*)>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::set_styleAnimationSystem)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.get_contextType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ContextType (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::get_contextType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.Pick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::BaseVisualElementPanel::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::Pick)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.PickAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (
    ::UnityEngine::UIElements::BaseVisualElementPanel::*)(::UnityEngine::Vector2, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*)>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::PickAll)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 49 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.get_disposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(&::UnityEngine::UIElements::BaseVisualElementPanel::get_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6db7d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "get_disposed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.set_disposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(bool)>(&::UnityEngine::UIElements::BaseVisualElementPanel::set_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6db7d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "set_disposed", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.GetUpdater
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::IVisualTreeUpdater* (
    ::UnityEngine::UIElements::BaseVisualElementPanel::*)(::UnityEngine::UIElements::VisualTreeUpdatePhase)>(&::UnityEngine::UIElements::BaseVisualElementPanel::GetUpdater)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.GetTopElementUnderPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::BaseVisualElementPanel::*)(int32_t)>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::GetTopElementUnderPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6db7d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "GetTopElementUnderPointer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.RecomputeTopElementUnderPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::BaseVisualElementPanel::*)(int32_t, ::UnityEngine::Vector2, ::UnityEngine::UIElements::EventBase*)>(
        &::UnityEngine::UIElements::BaseVisualElementPanel::RecomputeTopElementUnderPointer)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x6db7d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                         { "RecomputeTopElementUnderPointer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.ClearCachedElementUnderPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(int32_t, ::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::ClearCachedElementUnderPointer)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6db8060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                             { "ClearCachedElementUnderPointer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.CommitElementUnderPointers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(&::UnityEngine::UIElements::BaseVisualElementPanel::CommitElementUnderPointers)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6db8084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "CommitElementUnderPointers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.add_isFlatChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(::System::Action*)>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::add_isFlatChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6db80e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "add_isFlatChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.remove_isFlatChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(::System::Action*)>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::remove_isFlatChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6db818c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "remove_isFlatChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.get_isFlat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(&::UnityEngine::UIElements::BaseVisualElementPanel::get_isFlat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6db8238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "get_isFlat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.set_isFlat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(bool)>(&::UnityEngine::UIElements::BaseVisualElementPanel::set_isFlat)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6dad05c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "set_isFlat", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.SetSpecializedHierarchyFlagsUpdater
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::SetSpecializedHierarchyFlagsUpdater)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6db8240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "SetSpecializedHierarchyFlagsUpdater", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.add_atlasChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(::System::Action*)>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::add_atlasChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6db8348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "add_atlasChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.remove_atlasChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(::System::Action*)>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::remove_atlasChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6db83f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "remove_atlasChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.InvokeAtlasChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(&::UnityEngine::UIElements::BaseVisualElementPanel::InvokeAtlasChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6db84a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "InvokeAtlasChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.get_atlas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::AtlasBase* (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::get_atlas)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.set_atlas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(::UnityEngine::UIElements::AtlasBase*)>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::set_atlas)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 52 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.add_hierarchyChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(::UnityEngine::UIElements::HierarchyEvent*)>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::add_hierarchyChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6db84bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                                                           { "add_hierarchyChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::HierarchyEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.remove_hierarchyChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(::UnityEngine::UIElements::HierarchyEvent*)>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::remove_hierarchyChanged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6db8568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                                                           { "remove_hierarchyChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::HierarchyEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.InvokeHierarchyChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::HierarchyChangeType, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UIElements::VisualElement*>*)>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::InvokeHierarchyChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6db8614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                             { "InvokeHierarchyChanged",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::HierarchyChangeType>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.InvokeBeforeUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(&::UnityEngine::UIElements::BaseVisualElementPanel::InvokeBeforeUpdate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6db8630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "InvokeBeforeUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.UpdateElementUnderPointers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(&::UnityEngine::UIElements::BaseVisualElementPanel::UpdateElementUnderPointers)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x6db8650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "UpdateElementUnderPointers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.UnityEngine_UIElements_IGroupBox_OnOptionAdded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(::UnityEngine::UIElements::IGroupBoxOption*)>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::UnityEngine_UIElements_IGroupBox_OnOptionAdded)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6db8848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                             { "UnityEngine.UIElements.IGroupBox.OnOptionAdded", {}, { ::i2c::type_of<::UnityEngine::UIElements::IGroupBoxOption*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.UnityEngine_UIElements_IGroupBox_OnOptionRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)(::UnityEngine::UIElements::IGroupBoxOption*)>(
    &::UnityEngine::UIElements::BaseVisualElementPanel::UnityEngine_UIElements_IGroupBox_OnOptionRemoved)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6db884c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                             { "UnityEngine.UIElements.IGroupBox.OnOptionRemoved", {}, { ::i2c::type_of<::UnityEngine::UIElements::IGroupBoxOption*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseVisualElementPanel.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BaseVisualElementPanel::*)()>(&::UnityEngine::UIElements::BaseVisualElementPanel::Render)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6db8850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 53 }));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>*& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get_panelDisposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panelDisposed;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* const& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get_panelDisposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panelDisposed;
}
constexpr void UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_set_panelDisposed(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___panelDisposed = value;
}
constexpr ::UnityEngine::UIElements::UIElementsBridge*& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get_m_UIElementsBridge() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UIElementsBridge;
}
constexpr ::UnityEngine::UIElements::UIElementsBridge* const& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get_m_UIElementsBridge() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UIElementsBridge;
}
constexpr void UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_set_m_UIElementsBridge(::UnityEngine::UIElements::UIElementsBridge* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UIElementsBridge = value;
}
constexpr float_t& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get_m_Scale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Scale;
}
constexpr float_t const& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get_m_Scale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Scale;
}
constexpr void UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_set_m_Scale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Scale = value;
}
constexpr ::UnityEngine::UIElements::Layout::LayoutConfig& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get_layoutConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layoutConfig;
}
constexpr ::UnityEngine::UIElements::Layout::LayoutConfig const& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get_layoutConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layoutConfig;
}
constexpr void UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_set_layoutConfig(::UnityEngine::UIElements::Layout::LayoutConfig value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___layoutConfig = value;
}
constexpr float_t& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get_m_PixelsPerPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PixelsPerPoint;
}
constexpr float_t const& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get_m_PixelsPerPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PixelsPerPoint;
}
constexpr void UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_set_m_PixelsPerPoint(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PixelsPerPoint = value;
}
constexpr float_t& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get__referenceSpritePixelsPerUnit_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____referenceSpritePixelsPerUnit_k__BackingField;
}
constexpr float_t const& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get__referenceSpritePixelsPerUnit_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____referenceSpritePixelsPerUnit_k__BackingField;
}
constexpr void UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_set__referenceSpritePixelsPerUnit_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____referenceSpritePixelsPerUnit_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::PanelClearSettings& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get__clearSettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearSettings_k__BackingField;
}
constexpr ::UnityEngine::UIElements::PanelClearSettings const& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get__clearSettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearSettings_k__BackingField;
}
constexpr void UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_set__clearSettings_k__BackingField(::UnityEngine::UIElements::PanelClearSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clearSettings_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::IPanelRenderer*& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get_panelRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panelRenderer;
}
constexpr ::UnityEngine::UIElements::IPanelRenderer* const& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get_panelRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panelRenderer;
}
constexpr void UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_set_panelRenderer(::UnityEngine::UIElements::IPanelRenderer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___panelRenderer = value;
}
constexpr bool& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get__duringLayoutPhase_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duringLayoutPhase_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get__duringLayoutPhase_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duringLayoutPhase_k__BackingField;
}
constexpr void UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_set__duringLayoutPhase_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____duringLayoutPhase_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::RepaintData*& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get__repaintData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____repaintData_k__BackingField;
}
constexpr ::UnityEngine::UIElements::RepaintData* const& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get__repaintData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____repaintData_k__BackingField;
}
constexpr void UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_set__repaintData_k__BackingField(::UnityEngine::UIElements::RepaintData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____repaintData_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::ICursorManager*& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get__cursorManager_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cursorManager_k__BackingField;
}
constexpr ::UnityEngine::UIElements::ICursorManager* const& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get__cursorManager_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cursorManager_k__BackingField;
}
constexpr void UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_set__cursorManager_k__BackingField(::UnityEngine::UIElements::ICursorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cursorManager_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::ContextualMenuManager*& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get__contextualMenuManager_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contextualMenuManager_k__BackingField;
}
constexpr ::UnityEngine::UIElements::ContextualMenuManager* const& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get__contextualMenuManager_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contextualMenuManager_k__BackingField;
}
constexpr void UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_set__contextualMenuManager_k__BackingField(::UnityEngine::UIElements::ContextualMenuManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____contextualMenuManager_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::DataBindingManager*& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get__dataBindingManager_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataBindingManager_k__BackingField;
}
constexpr ::UnityEngine::UIElements::DataBindingManager* const& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get__dataBindingManager_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataBindingManager_k__BackingField;
}
constexpr void UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_set__dataBindingManager_k__BackingField(::UnityEngine::UIElements::DataBindingManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataBindingManager_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get__disposed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get__disposed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr void UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_set__disposed_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::ElementUnderPointer*& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get_m_TopElementUnderPointers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TopElementUnderPointers;
}
constexpr ::UnityEngine::UIElements::ElementUnderPointer* const& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get_m_TopElementUnderPointers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TopElementUnderPointers;
}
constexpr void UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_set_m_TopElementUnderPointers(::UnityEngine::UIElements::ElementUnderPointer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TopElementUnderPointers = value;
}
constexpr ::System::Action*& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get_isFlatChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isFlatChanged;
}
constexpr ::System::Action* const& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get_isFlatChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isFlatChanged;
}
constexpr void UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_set_isFlatChanged(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isFlatChanged = value;
}
constexpr bool& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get_m_IsFlat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsFlat;
}
constexpr bool const& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get_m_IsFlat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsFlat;
}
constexpr void UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_set_m_IsFlat(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsFlat = value;
}
constexpr ::System::Action*& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get_atlasChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atlasChanged;
}
constexpr ::System::Action* const& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get_atlasChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___atlasChanged;
}
constexpr void UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_set_atlasChanged(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___atlasChanged = value;
}
constexpr ::UnityEngine::UIElements::HierarchyEvent*& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get_hierarchyChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hierarchyChanged;
}
constexpr ::UnityEngine::UIElements::HierarchyEvent* const& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get_hierarchyChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hierarchyChanged;
}
constexpr void UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_set_hierarchyChanged(::UnityEngine::UIElements::HierarchyEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hierarchyChanged = value;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::IPanel*>*& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get_beforeUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beforeUpdate;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::IPanel*>* const& UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_get_beforeUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beforeUpdate;
}
constexpr void UnityEngine::UIElements::BaseVisualElementPanel::__cordl_internal_set_beforeUpdate(::System::Action_1<::UnityEngine::UIElements::IPanel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beforeUpdate = value;
}
inline ::UnityEngine::EventInterests UnityEngine::UIElements::BaseVisualElementPanel::get_IMGUIEventInterests() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventInterests>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::set_IMGUIEventInterests(::UnityEngine::EventInterests value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::ScriptableObject> UnityEngine::UIElements::BaseVisualElementPanel::get_ownerObject() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ScriptableObject>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::set_ownerObject(::UnityEngine::ScriptableObject* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::SavePersistentViewData* UnityEngine::UIElements::BaseVisualElementPanel::get_saveViewData() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::SavePersistentViewData*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::GetViewDataDictionary* UnityEngine::UIElements::BaseVisualElementPanel::get_getViewDataDictionary() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::GetViewDataDictionary*>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::BaseVisualElementPanel::get_IMGUIContainersCount() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::set_IMGUIContainersCount(int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::FocusController* UnityEngine::UIElements::BaseVisualElementPanel::get_focusController() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FocusController*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::set_focusController(::UnityEngine::UIElements::FocusController* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::IMGUIContainer* UnityEngine::UIElements::BaseVisualElementPanel::get_rootIMGUIContainer() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IMGUIContainer*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::add_panelDisposed(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                           { "add_panelDisposed", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::remove_panelDisposed(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                           { "remove_panelDisposed", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::UIElementsBridge* UnityEngine::UIElements::BaseVisualElementPanel::get_uiElementsBridge() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "get_uiElementsBridge", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIElementsBridge*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::Repaint(::UnityEngine::Event* e) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::ValidateFocus() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::ValidateLayout() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::UpdateAnimations() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::UpdateBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::ApplyStyles() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::BaseVisualElementPanel::get_scale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "get_scale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::set_scale(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "set_scale", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::BaseVisualElementPanel::get_scaledPixelsPerPoint() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "get_scaledPixelsPerPoint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::BaseVisualElementPanel::get_referenceSpritePixelsPerUnit() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "get_referenceSpritePixelsPerUnit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::set_referenceSpritePixelsPerUnit(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "set_referenceSpritePixelsPerUnit", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::PanelClearSettings UnityEngine::UIElements::BaseVisualElementPanel::get_clearSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "get_clearSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PanelClearSettings>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::set_clearSettings(::UnityEngine::UIElements::PanelClearSettings value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                                                         { "set_clearSettings", {}, { ::i2c::type_of<::UnityEngine::UIElements::PanelClearSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::BaseVisualElementPanel::get_duringLayoutPhase() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "get_duringLayoutPhase", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::set_duringLayoutPhase(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "set_duringLayoutPhase", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t UnityEngine::UIElements::BaseVisualElementPanel::get_version() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline uint32_t UnityEngine::UIElements::BaseVisualElementPanel::get_hierarchyVersion() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::OnVersionChanged(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::UIElements::VersionChangeType changeTypeFlag) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ele, changeTypeFlag);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::SetUpdater(::UnityEngine::UIElements::IVisualTreeUpdater* updater, ::UnityEngine::UIElements::VisualTreeUpdatePhase phase) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updater, phase);
}
inline ::UnityEngine::UIElements::RepaintData* UnityEngine::UIElements::BaseVisualElementPanel::get_repaintData() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::RepaintData*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::set_repaintData(::UnityEngine::UIElements::RepaintData* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::ICursorManager* UnityEngine::UIElements::BaseVisualElementPanel::get_cursorManager() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ICursorManager*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::set_cursorManager(::UnityEngine::UIElements::ICursorManager* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::ContextualMenuManager* UnityEngine::UIElements::BaseVisualElementPanel::get_contextualMenuManager() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "get_contextualMenuManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ContextualMenuManager*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::set_contextualMenuManager(::UnityEngine::UIElements::ContextualMenuManager* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                           { "set_contextualMenuManager", {}, { ::i2c::type_of<::UnityEngine::UIElements::ContextualMenuManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::DataBindingManager* UnityEngine::UIElements::BaseVisualElementPanel::get_dataBindingManager() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DataBindingManager*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::set_dataBindingManager(::UnityEngine::UIElements::DataBindingManager* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseVisualElementPanel::get_visualTree() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::EventDispatcher* UnityEngine::UIElements::BaseVisualElementPanel::get_dispatcher() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventDispatcher*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::set_dispatcher(::UnityEngine::UIElements::EventDispatcher* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::SendEvent(::UnityEngine::UIElements::EventBase* e, ::UnityEngine::UIElements::DispatchMode dispatchMode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                              { "SendEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<::UnityEngine::UIElements::DispatchMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, dispatchMode);
}
inline ::UnityEngine::UIElements::IScheduler* UnityEngine::UIElements::BaseVisualElementPanel::get_scheduler() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IScheduler*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::IStylePropertyAnimationSystem* UnityEngine::UIElements::BaseVisualElementPanel::get_styleAnimationSystem() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IStylePropertyAnimationSystem*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::set_styleAnimationSystem(::UnityEngine::UIElements::IStylePropertyAnimationSystem* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::ContextType UnityEngine::UIElements::BaseVisualElementPanel::get_contextType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ContextType>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseVisualElementPanel::Pick(::UnityEngine::Vector2 point) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method, point);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseVisualElementPanel::PickAll(::UnityEngine::Vector2 point,
                                                                                                          ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* picked) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method, point, picked);
}
inline bool UnityEngine::UIElements::BaseVisualElementPanel::get_disposed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "get_disposed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::set_disposed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "set_disposed", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::IVisualTreeUpdater* UnityEngine::UIElements::BaseVisualElementPanel::GetUpdater(::UnityEngine::UIElements::VisualTreeUpdatePhase phase) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IVisualTreeUpdater*>(this, ___internal_method, phase);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseVisualElementPanel::GetTopElementUnderPointer(int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "GetTopElementUnderPointer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method, pointerId);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseVisualElementPanel::RecomputeTopElementUnderPointer(int32_t pointerId, ::UnityEngine::Vector2 pointerPos,
                                                                                                                                  ::UnityEngine::UIElements::EventBase* triggerEvent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                       { "RecomputeTopElementUnderPointer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method, pointerId, pointerPos, triggerEvent);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::ClearCachedElementUnderPointer(int32_t pointerId, ::UnityEngine::UIElements::EventBase* triggerEvent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                           { "ClearCachedElementUnderPointer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerId, triggerEvent);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::CommitElementUnderPointers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "CommitElementUnderPointers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::add_isFlatChanged(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "add_isFlatChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::remove_isFlatChanged(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "remove_isFlatChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::BaseVisualElementPanel::get_isFlat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "get_isFlat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::set_isFlat(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "set_isFlat", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::SetSpecializedHierarchyFlagsUpdater() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "SetSpecializedHierarchyFlagsUpdater", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::add_atlasChanged(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "add_atlasChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::remove_atlasChanged(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "remove_atlasChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::InvokeAtlasChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "InvokeAtlasChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::AtlasBase* UnityEngine::UIElements::BaseVisualElementPanel::get_atlas() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::AtlasBase*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::set_atlas(::UnityEngine::UIElements::AtlasBase* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 52 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::add_hierarchyChanged(::UnityEngine::UIElements::HierarchyEvent* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                                                         { "add_hierarchyChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::HierarchyEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::remove_hierarchyChanged(::UnityEngine::UIElements::HierarchyEvent* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                                                         { "remove_hierarchyChanged", {}, { ::i2c::type_of<::UnityEngine::UIElements::HierarchyEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::InvokeHierarchyChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::HierarchyChangeType changeType,
                                                                                    ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UIElements::VisualElement*>* additionalContext) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                           { "InvokeHierarchyChanged",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::HierarchyChangeType>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UIElements::VisualElement*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, changeType, additionalContext);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::InvokeBeforeUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "InvokeBeforeUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::UpdateElementUnderPointers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), { "UpdateElementUnderPointers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::UnityEngine_UIElements_IGroupBox_OnOptionAdded(::UnityEngine::UIElements::IGroupBoxOption* option) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                           { "UnityEngine.UIElements.IGroupBox.OnOptionAdded", {}, { ::i2c::type_of<::UnityEngine::UIElements::IGroupBoxOption*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, option);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::UnityEngine_UIElements_IGroupBox_OnOptionRemoved(::UnityEngine::UIElements::IGroupBoxOption* option) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(),
                                                           { "UnityEngine.UIElements.IGroupBox.OnOptionRemoved", {}, { ::i2c::type_of<::UnityEngine::UIElements::IGroupBoxOption*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, option);
}
inline void UnityEngine::UIElements::BaseVisualElementPanel::Render() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BaseVisualElementPanel*>(), 53 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::BaseVisualElementPanel* UnityEngine::UIElements::BaseVisualElementPanel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BaseVisualElementPanel*>());
}
/// @brief Convert operator to "::UnityEngine::UIElements::IPanel"
constexpr UnityEngine::UIElements::BaseVisualElementPanel::operator ::UnityEngine::UIElements::IPanel*() noexcept {
  return static_cast<::UnityEngine::UIElements::IPanel*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IPanel"
constexpr ::UnityEngine::UIElements::IPanel* UnityEngine::UIElements::BaseVisualElementPanel::i___UnityEngine__UIElements__IPanel() noexcept {
  return static_cast<::UnityEngine::UIElements::IPanel*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::BaseVisualElementPanel::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::BaseVisualElementPanel::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UIElements::IGroupBox"
constexpr UnityEngine::UIElements::BaseVisualElementPanel::operator ::UnityEngine::UIElements::IGroupBox*() noexcept {
  return static_cast<::UnityEngine::UIElements::IGroupBox*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IGroupBox"
constexpr ::UnityEngine::UIElements::IGroupBox* UnityEngine::UIElements::BaseVisualElementPanel::i___UnityEngine__UIElements__IGroupBox() noexcept {
  return static_cast<::UnityEngine::UIElements::IGroupBox*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BaseVisualElementPanel::BaseVisualElementPanel() {}
