#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Panel.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ContextType_impl.hpp"
#include "UnityEngine/zzzz__EventInterests_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Panel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/UIElements/zzzz__AtlasBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__ContextType_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventDispatcher_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusController_def.hpp"
#include "UnityEngine/UIElements/zzzz__GetViewDataDictionary_def.hpp"
#include "UnityEngine/UIElements/zzzz__IMGUIContainer_def.hpp"
#include "UnityEngine/UIElements/zzzz__IScheduler_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStylePropertyAnimationSystem_def.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualTreeUpdater_def.hpp"
#include "UnityEngine/UIElements/zzzz__LoadResourceFunction_def.hpp"
#include "UnityEngine/UIElements/zzzz__SavePersistentViewData_def.hpp"
#include "UnityEngine/UIElements/zzzz__TimeMsFunction_def.hpp"
#include "UnityEngine/UIElements/zzzz__TimerEventScheduler_def.hpp"
#include "UnityEngine/UIElements/zzzz__VersionChangeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeUpdatePhase_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeUpdater_def.hpp"
#include "UnityEngine/zzzz__EventInterests_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_visualTree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::Panel::*)()>(
    &::UnityEngine::UIElements::Panel::get_visualTree)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x351ea40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "get_visualTree",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_dispatcher
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventDispatcher* (::UnityEngine::UIElements::Panel::*)()>(
    &::UnityEngine::UIElements::Panel::get_dispatcher)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x351ea48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "get_dispatcher",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.set_dispatcher
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)(::UnityEngine::UIElements::EventDispatcher*)>(
    &::UnityEngine::UIElements::Panel::set_dispatcher)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x351ea50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "set_dispatcher", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventDispatcher*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_timerEventScheduler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TimerEventScheduler* (::UnityEngine::UIElements::Panel::*)()>(
    &::UnityEngine::UIElements::Panel::get_timerEventScheduler)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x351ea58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                                                               "get_timerEventScheduler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_scheduler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IScheduler* (::UnityEngine::UIElements::Panel::*)()>(
    &::UnityEngine::UIElements::Panel::get_scheduler)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x351eac4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_styleAnimationSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IStylePropertyAnimationSystem* (::UnityEngine::UIElements::Panel::*)()>(
    &::UnityEngine::UIElements::Panel::get_styleAnimationSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x351eac8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 39));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.set_styleAnimationSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)(::UnityEngine::UIElements::IStylePropertyAnimationSystem*)>(
    &::UnityEngine::UIElements::Panel::set_styleAnimationSystem)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x351ead0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_ownerObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::ScriptableObject> (::UnityEngine::UIElements::Panel::*)()>(
    &::UnityEngine::UIElements::Panel::get_ownerObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x351eb84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.set_ownerObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)(::UnityEngine::ScriptableObject*)>(
    &::UnityEngine::UIElements::Panel::set_ownerObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x351eb8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_contextType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ContextType (::UnityEngine::UIElements::Panel::*)()>(
    &::UnityEngine::UIElements::Panel::get_contextType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x351eb94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 41));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.set_contextType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)(::UnityEngine::UIElements::ContextType)>(
    &::UnityEngine::UIElements::Panel::set_contextType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x351eb9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 42));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_saveViewData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::SavePersistentViewData* (::UnityEngine::UIElements::Panel::*)()>(
    &::UnityEngine::UIElements::Panel::get_saveViewData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x351eba4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_getViewDataDictionary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::GetViewDataDictionary* (::UnityEngine::UIElements::Panel::*)()>(
    &::UnityEngine::UIElements::Panel::get_getViewDataDictionary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x351ebac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_focusController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::FocusController* (::UnityEngine::UIElements::Panel::*)()>(
    &::UnityEngine::UIElements::Panel::get_focusController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x351ebb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "get_focusController",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.set_focusController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)(::UnityEngine::UIElements::FocusController*)>(
    &::UnityEngine::UIElements::Panel::set_focusController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x351ebbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "set_focusController", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_IMGUIEventInterests
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventInterests (::UnityEngine::UIElements::Panel::*)()>(
    &::UnityEngine::UIElements::Panel::get_IMGUIEventInterests)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x351ebc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.set_IMGUIEventInterests
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)(::UnityEngine::EventInterests)>(
    &::UnityEngine::UIElements::Panel::set_IMGUIEventInterests)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x351ebd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_loadResourceFunc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::LoadResourceFunction* (*)()>(&::UnityEngine::UIElements::Panel::get_loadResourceFunc)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x351ebe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "get_loadResourceFunc",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.LoadResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Object> (*)(::StringW, ::System::Type*, float_t)>(
    &::UnityEngine::UIElements::Panel::LoadResource)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x351ec3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "LoadResource", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.Focus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::Focus)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x350a1d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "Focus",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.Blur
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::Blur)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x350a1a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "Blur",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x351ed68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "get_name",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.set_name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)(::StringW)>(&::UnityEngine::UIElements::Panel::set_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x351ed70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "set_name", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.CreateMarkers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::CreateMarkers)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x351ed78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "CreateMarkers",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_TimeSinceStartup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TimeMsFunction* (*)()>(&::UnityEngine::UIElements::Panel::get_TimeSinceStartup)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x351efc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "get_TimeSinceStartup",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_IMGUIContainersCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::get_IMGUIContainersCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x351f01c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.set_IMGUIContainersCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)(int32_t)>(&::UnityEngine::UIElements::Panel::set_IMGUIContainersCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x351f024;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_rootIMGUIContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IMGUIContainer* (::UnityEngine::UIElements::Panel::*)()>(
    &::UnityEngine::UIElements::Panel::get_rootIMGUIContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x351f02c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x351f034;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_hierarchyVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::get_hierarchyVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x351f03c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_standardShader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Shader> (::UnityEngine::UIElements::Panel::*)()>(
    &::UnityEngine::UIElements::Panel::get_standardShader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x351f044;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 46));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.get_atlas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::AtlasBase* (::UnityEngine::UIElements::Panel::*)()>(
    &::UnityEngine::UIElements::Panel::get_atlas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x351f04c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 48));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.set_atlas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)(::UnityEngine::UIElements::AtlasBase*)>(
    &::UnityEngine::UIElements::Panel::set_atlas)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x351f054;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 49));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)(
    ::UnityEngine::ScriptableObject*, ::UnityEngine::UIElements::ContextType, ::UnityEngine::UIElements::EventDispatcher*)>(&::UnityEngine::UIElements::Panel::_ctor)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x351f0c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScriptableObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ContextType>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventDispatcher*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)(bool)>(&::UnityEngine::UIElements::Panel::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x351f454;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.TimeSinceStartupMs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&::UnityEngine::UIElements::Panel::TimeSinceStartupMs)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x350c6e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "TimeSinceStartupMs",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.DefaultTimeSinceStartupMs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&::UnityEngine::UIElements::Panel::DefaultTimeSinceStartupMs)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x351f4bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                                                               "DefaultTimeSinceStartupMs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.PickAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::UIElements::VisualElement* (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Vector2,
                                                              ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*)>(&::UnityEngine::UIElements::Panel::PickAll)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x351f4f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "PickAll", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.PerformPick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::UIElements::VisualElement* (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Vector2,
                                                              ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*)>(&::UnityEngine::UIElements::Panel::PerformPick)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x351f570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "PerformPick", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.PickAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (
    ::UnityEngine::UIElements::Panel::*)(::UnityEngine::Vector2, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*)>(&::UnityEngine::UIElements::Panel::PickAll)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x351f854;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 44));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.Pick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::Panel::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::Panel::Pick)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x351f92c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 43));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.ValidateLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::ValidateLayout)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x351fb98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.UpdateAnimations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::UpdateAnimations)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x351fbfc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.UpdateBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::UpdateBindings)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x351fc1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.ApplyStyles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::ApplyStyles)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x351fc3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.UpdateForRepaint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)()>(&::UnityEngine::UIElements::Panel::UpdateForRepaint)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x351fc5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "UpdateForRepaint",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.Repaint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)(::UnityEngine::Event*)>(&::UnityEngine::UIElements::Panel::Repaint)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x351fcd0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.OnVersionChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Panel::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType)>(&::UnityEngine::UIElements::Panel::OnVersionChanged)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3520054;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel.GetUpdater
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IVisualTreeUpdater* (
    ::UnityEngine::UIElements::Panel::*)(::UnityEngine::UIElements::VisualTreeUpdatePhase)>(&::UnityEngine::UIElements::Panel::GetUpdater)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x35200a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 45));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Panel._Pick_g__PixelOf_99_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (*)(::UnityEngine::Vector2)>(&::UnityEngine::UIElements::Panel::_Pick_g__PixelOf_99_0)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x351faa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "<Pick>g__PixelOf|99_0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::Panel::__cordl_internal_get_m_RootContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RootContainer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::Panel::__cordl_internal_get_m_RootContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RootContainer;
}
constexpr void UnityEngine::UIElements::Panel::__cordl_internal_set_m_RootContainer(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RootContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::VisualTreeUpdater*& UnityEngine::UIElements::Panel::__cordl_internal_get_m_VisualTreeUpdater() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisualTreeUpdater;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualTreeUpdater*> const& UnityEngine::UIElements::Panel::__cordl_internal_get_m_VisualTreeUpdater() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisualTreeUpdater;
}
constexpr void UnityEngine::UIElements::Panel::__cordl_internal_set_m_VisualTreeUpdater(::UnityEngine::UIElements::VisualTreeUpdater* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_VisualTreeUpdater)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::IStylePropertyAnimationSystem*& UnityEngine::UIElements::Panel::__cordl_internal_get_m_StylePropertyAnimationSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StylePropertyAnimationSystem;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IStylePropertyAnimationSystem*> const&
UnityEngine::UIElements::Panel::__cordl_internal_get_m_StylePropertyAnimationSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StylePropertyAnimationSystem;
}
constexpr void UnityEngine::UIElements::Panel::__cordl_internal_set_m_StylePropertyAnimationSystem(::UnityEngine::UIElements::IStylePropertyAnimationSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StylePropertyAnimationSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::UIElements::Panel::__cordl_internal_get_m_PanelName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PanelName;
}
constexpr ::StringW const& UnityEngine::UIElements::Panel::__cordl_internal_get_m_PanelName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PanelName;
}
constexpr void UnityEngine::UIElements::Panel::__cordl_internal_set_m_PanelName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PanelName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint32_t& UnityEngine::UIElements::Panel::__cordl_internal_get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr uint32_t const& UnityEngine::UIElements::Panel::__cordl_internal_get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr void UnityEngine::UIElements::Panel::__cordl_internal_set_m_Version(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Version = value;
}
constexpr uint32_t& UnityEngine::UIElements::Panel::__cordl_internal_get_m_RepaintVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RepaintVersion;
}
constexpr uint32_t const& UnityEngine::UIElements::Panel::__cordl_internal_get_m_RepaintVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RepaintVersion;
}
constexpr void UnityEngine::UIElements::Panel::__cordl_internal_set_m_RepaintVersion(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RepaintVersion = value;
}
constexpr uint32_t& UnityEngine::UIElements::Panel::__cordl_internal_get_m_HierarchyVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HierarchyVersion;
}
constexpr uint32_t const& UnityEngine::UIElements::Panel::__cordl_internal_get_m_HierarchyVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HierarchyVersion;
}
constexpr void UnityEngine::UIElements::Panel::__cordl_internal_set_m_HierarchyVersion(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HierarchyVersion = value;
}
constexpr ::Unity::Profiling::ProfilerMarker& UnityEngine::UIElements::Panel::__cordl_internal_get_m_MarkerBeforeUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MarkerBeforeUpdate;
}
constexpr ::Unity::Profiling::ProfilerMarker const& UnityEngine::UIElements::Panel::__cordl_internal_get_m_MarkerBeforeUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MarkerBeforeUpdate;
}
constexpr void UnityEngine::UIElements::Panel::__cordl_internal_set_m_MarkerBeforeUpdate(::Unity::Profiling::ProfilerMarker value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MarkerBeforeUpdate = value;
}
constexpr ::Unity::Profiling::ProfilerMarker& UnityEngine::UIElements::Panel::__cordl_internal_get_m_MarkerUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MarkerUpdate;
}
constexpr ::Unity::Profiling::ProfilerMarker const& UnityEngine::UIElements::Panel::__cordl_internal_get_m_MarkerUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MarkerUpdate;
}
constexpr void UnityEngine::UIElements::Panel::__cordl_internal_set_m_MarkerUpdate(::Unity::Profiling::ProfilerMarker value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MarkerUpdate = value;
}
constexpr ::Unity::Profiling::ProfilerMarker& UnityEngine::UIElements::Panel::__cordl_internal_get_m_MarkerLayout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MarkerLayout;
}
constexpr ::Unity::Profiling::ProfilerMarker const& UnityEngine::UIElements::Panel::__cordl_internal_get_m_MarkerLayout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MarkerLayout;
}
constexpr void UnityEngine::UIElements::Panel::__cordl_internal_set_m_MarkerLayout(::Unity::Profiling::ProfilerMarker value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MarkerLayout = value;
}
constexpr ::Unity::Profiling::ProfilerMarker& UnityEngine::UIElements::Panel::__cordl_internal_get_m_MarkerBindings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MarkerBindings;
}
constexpr ::Unity::Profiling::ProfilerMarker const& UnityEngine::UIElements::Panel::__cordl_internal_get_m_MarkerBindings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MarkerBindings;
}
constexpr void UnityEngine::UIElements::Panel::__cordl_internal_set_m_MarkerBindings(::Unity::Profiling::ProfilerMarker value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MarkerBindings = value;
}
constexpr ::Unity::Profiling::ProfilerMarker& UnityEngine::UIElements::Panel::__cordl_internal_get_m_MarkerAnimations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MarkerAnimations;
}
constexpr ::Unity::Profiling::ProfilerMarker const& UnityEngine::UIElements::Panel::__cordl_internal_get_m_MarkerAnimations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MarkerAnimations;
}
constexpr void UnityEngine::UIElements::Panel::__cordl_internal_set_m_MarkerAnimations(::Unity::Profiling::ProfilerMarker value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MarkerAnimations = value;
}
constexpr ::UnityEngine::UIElements::EventDispatcher*& UnityEngine::UIElements::Panel::__cordl_internal_get__dispatcher_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dispatcher_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::EventDispatcher*> const& UnityEngine::UIElements::Panel::__cordl_internal_get__dispatcher_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dispatcher_k__BackingField;
}
constexpr void UnityEngine::UIElements::Panel::__cordl_internal_set__dispatcher_k__BackingField(::UnityEngine::UIElements::EventDispatcher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dispatcher_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::TimerEventScheduler*& UnityEngine::UIElements::Panel::__cordl_internal_get_m_Scheduler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Scheduler;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::TimerEventScheduler*> const& UnityEngine::UIElements::Panel::__cordl_internal_get_m_Scheduler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Scheduler;
}
constexpr void UnityEngine::UIElements::Panel::__cordl_internal_set_m_Scheduler(::UnityEngine::UIElements::TimerEventScheduler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Scheduler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::ScriptableObject>& UnityEngine::UIElements::Panel::__cordl_internal_get__ownerObject_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ownerObject_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::ScriptableObject> const& UnityEngine::UIElements::Panel::__cordl_internal_get__ownerObject_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ownerObject_k__BackingField;
}
constexpr void UnityEngine::UIElements::Panel::__cordl_internal_set__ownerObject_k__BackingField(::UnityW<::UnityEngine::ScriptableObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ownerObject_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::ContextType& UnityEngine::UIElements::Panel::__cordl_internal_get__contextType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contextType_k__BackingField;
}
constexpr ::UnityEngine::UIElements::ContextType const& UnityEngine::UIElements::Panel::__cordl_internal_get__contextType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contextType_k__BackingField;
}
constexpr void UnityEngine::UIElements::Panel::__cordl_internal_set__contextType_k__BackingField(::UnityEngine::UIElements::ContextType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____contextType_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::SavePersistentViewData*& UnityEngine::UIElements::Panel::__cordl_internal_get__saveViewData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saveViewData_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::SavePersistentViewData*> const& UnityEngine::UIElements::Panel::__cordl_internal_get__saveViewData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saveViewData_k__BackingField;
}
constexpr void UnityEngine::UIElements::Panel::__cordl_internal_set__saveViewData_k__BackingField(::UnityEngine::UIElements::SavePersistentViewData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saveViewData_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::GetViewDataDictionary*& UnityEngine::UIElements::Panel::__cordl_internal_get__getViewDataDictionary_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getViewDataDictionary_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::GetViewDataDictionary*> const&
UnityEngine::UIElements::Panel::__cordl_internal_get__getViewDataDictionary_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getViewDataDictionary_k__BackingField;
}
constexpr void UnityEngine::UIElements::Panel::__cordl_internal_set__getViewDataDictionary_k__BackingField(::UnityEngine::UIElements::GetViewDataDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____getViewDataDictionary_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::FocusController*& UnityEngine::UIElements::Panel::__cordl_internal_get__focusController_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____focusController_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::FocusController*> const& UnityEngine::UIElements::Panel::__cordl_internal_get__focusController_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____focusController_k__BackingField;
}
constexpr void UnityEngine::UIElements::Panel::__cordl_internal_set__focusController_k__BackingField(::UnityEngine::UIElements::FocusController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____focusController_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::EventInterests& UnityEngine::UIElements::Panel::__cordl_internal_get__IMGUIEventInterests_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IMGUIEventInterests_k__BackingField;
}
constexpr ::UnityEngine::EventInterests const& UnityEngine::UIElements::Panel::__cordl_internal_get__IMGUIEventInterests_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IMGUIEventInterests_k__BackingField;
}
constexpr void UnityEngine::UIElements::Panel::__cordl_internal_set__IMGUIEventInterests_k__BackingField(::UnityEngine::EventInterests value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IMGUIEventInterests_k__BackingField = value;
}
constexpr int32_t& UnityEngine::UIElements::Panel::__cordl_internal_get__IMGUIContainersCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IMGUIContainersCount_k__BackingField;
}
constexpr int32_t const& UnityEngine::UIElements::Panel::__cordl_internal_get__IMGUIContainersCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IMGUIContainersCount_k__BackingField;
}
constexpr void UnityEngine::UIElements::Panel::__cordl_internal_set__IMGUIContainersCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IMGUIContainersCount_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::IMGUIContainer*& UnityEngine::UIElements::Panel::__cordl_internal_get__rootIMGUIContainer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rootIMGUIContainer_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IMGUIContainer*> const& UnityEngine::UIElements::Panel::__cordl_internal_get__rootIMGUIContainer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rootIMGUIContainer_k__BackingField;
}
constexpr void UnityEngine::UIElements::Panel::__cordl_internal_set__rootIMGUIContainer_k__BackingField(::UnityEngine::UIElements::IMGUIContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rootIMGUIContainer_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::UIElements::Panel::__cordl_internal_get_m_StandardShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StandardShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::UIElements::Panel::__cordl_internal_get_m_StandardShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StandardShader;
}
constexpr void UnityEngine::UIElements::Panel::__cordl_internal_set_m_StandardShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StandardShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::AtlasBase*& UnityEngine::UIElements::Panel::__cordl_internal_get_m_Atlas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Atlas;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::AtlasBase*> const& UnityEngine::UIElements::Panel::__cordl_internal_get_m_Atlas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Atlas;
}
constexpr void UnityEngine::UIElements::Panel::__cordl_internal_set_m_Atlas(::UnityEngine::UIElements::AtlasBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Atlas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UIElements::Panel::__cordl_internal_get_m_ValidatingLayout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ValidatingLayout;
}
constexpr bool const& UnityEngine::UIElements::Panel::__cordl_internal_get_m_ValidatingLayout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ValidatingLayout;
}
constexpr void UnityEngine::UIElements::Panel::__cordl_internal_set_m_ValidatingLayout(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ValidatingLayout = value;
}
inline void UnityEngine::UIElements::Panel::setStaticF_s_MarkerPickAll(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerPickAll", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::Panel::getStaticF_s_MarkerPickAll() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_MarkerPickAll", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get>();
}
inline void UnityEngine::UIElements::Panel::setStaticF__loadResourceFunc_k__BackingField(::UnityEngine::UIElements::LoadResourceFunction* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::LoadResourceFunction*, "<loadResourceFunc>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get>(
      std::forward<::UnityEngine::UIElements::LoadResourceFunction*>(value));
}
inline ::UnityEngine::UIElements::LoadResourceFunction* UnityEngine::UIElements::Panel::getStaticF__loadResourceFunc_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::LoadResourceFunction*, "<loadResourceFunc>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get>();
}
inline void UnityEngine::UIElements::Panel::setStaticF__TimeSinceStartup_k__BackingField(::UnityEngine::UIElements::TimeMsFunction* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::TimeMsFunction*, "<TimeSinceStartup>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get>(std::forward<::UnityEngine::UIElements::TimeMsFunction*>(value));
}
inline ::UnityEngine::UIElements::TimeMsFunction* UnityEngine::UIElements::Panel::getStaticF__TimeSinceStartup_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::TimeMsFunction*, "<TimeSinceStartup>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get>();
}
inline void UnityEngine::UIElements::Panel::setStaticF_beforeAnyRepaint(::System::Action_1<::UnityEngine::UIElements::Panel*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::UIElements::Panel*>*, "beforeAnyRepaint",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get>(
      std::forward<::System::Action_1<::UnityEngine::UIElements::Panel*>*>(value));
}
inline ::System::Action_1<::UnityEngine::UIElements::Panel*>* UnityEngine::UIElements::Panel::getStaticF_beforeAnyRepaint() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::UIElements::Panel*>*, "beforeAnyRepaint",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get>();
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::Panel::get_visualTree() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "get_visualTree",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::EventDispatcher* UnityEngine::UIElements::Panel::get_dispatcher() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "get_dispatcher",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventDispatcher*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Panel::set_dispatcher(::UnityEngine::UIElements::EventDispatcher* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "set_dispatcher", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventDispatcher*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::TimerEventScheduler* UnityEngine::UIElements::Panel::get_timerEventScheduler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                                                             "get_timerEventScheduler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TimerEventScheduler*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::IScheduler* UnityEngine::UIElements::Panel::get_scheduler() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IScheduler*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::IStylePropertyAnimationSystem* UnityEngine::UIElements::Panel::get_styleAnimationSystem() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 39)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IStylePropertyAnimationSystem*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Panel::set_styleAnimationSystem(::UnityEngine::UIElements::IStylePropertyAnimationSystem* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::ScriptableObject> UnityEngine::UIElements::Panel::get_ownerObject() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ScriptableObject>, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Panel::set_ownerObject(::UnityEngine::ScriptableObject* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::ContextType UnityEngine::UIElements::Panel::get_contextType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 41)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ContextType, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Panel::set_contextType(::UnityEngine::UIElements::ContextType value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 42)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::SavePersistentViewData* UnityEngine::UIElements::Panel::get_saveViewData() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::SavePersistentViewData*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::GetViewDataDictionary* UnityEngine::UIElements::Panel::get_getViewDataDictionary() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::GetViewDataDictionary*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::FocusController* UnityEngine::UIElements::Panel::get_focusController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "get_focusController",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FocusController*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Panel::set_focusController(::UnityEngine::UIElements::FocusController* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "set_focusController", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::EventInterests UnityEngine::UIElements::Panel::get_IMGUIEventInterests() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventInterests, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Panel::set_IMGUIEventInterests(::UnityEngine::EventInterests value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::LoadResourceFunction* UnityEngine::UIElements::Panel::get_loadResourceFunc() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "get_loadResourceFunc",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::LoadResourceFunction*, false>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::UIElements::Panel::LoadResource(::StringW pathName, ::System::Type* type, float_t dpiScaling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "LoadResource", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>, false>(nullptr, ___internal_method, pathName, type, dpiScaling);
}
inline void UnityEngine::UIElements::Panel::Focus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "Focus",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Panel::Blur() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "Blur",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::Panel::get_name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "get_name",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Panel::set_name(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "set_name", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Panel::CreateMarkers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "CreateMarkers",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TimeMsFunction* UnityEngine::UIElements::Panel::get_TimeSinceStartup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "get_TimeSinceStartup",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TimeMsFunction*, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::UIElements::Panel::get_IMGUIContainersCount() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Panel::set_IMGUIContainersCount(int32_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::IMGUIContainer* UnityEngine::UIElements::Panel::get_rootIMGUIContainer() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IMGUIContainer*, false>(this, ___internal_method);
}
inline uint32_t UnityEngine::UIElements::Panel::get_version() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline uint32_t UnityEngine::UIElements::Panel::get_hierarchyVersion() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::UIElements::Panel::get_standardShader() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 46)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::AtlasBase* UnityEngine::UIElements::Panel::get_atlas() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 48)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::AtlasBase*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Panel::set_atlas(::UnityEngine::UIElements::AtlasBase* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 49)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::Panel* UnityEngine::UIElements::Panel::New_ctor(::UnityEngine::ScriptableObject* ownerObject, ::UnityEngine::UIElements::ContextType contextType,
                                                                                  ::UnityEngine::UIElements::EventDispatcher* dispatcher) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::Panel*>(ownerObject, contextType, dispatcher));
}
inline void UnityEngine::UIElements::Panel::_ctor(::UnityEngine::ScriptableObject* ownerObject, ::UnityEngine::UIElements::ContextType contextType,
                                                  ::UnityEngine::UIElements::EventDispatcher* dispatcher) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScriptableObject*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ContextType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventDispatcher*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ownerObject, contextType, dispatcher);
}
inline void UnityEngine::UIElements::Panel::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline int64_t UnityEngine::UIElements::Panel::TimeSinceStartupMs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "TimeSinceStartupMs",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method);
}
inline int64_t UnityEngine::UIElements::Panel::DefaultTimeSinceStartupMs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(),
                                                                             "DefaultTimeSinceStartupMs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method);
}
/// @param picked: ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* (default: nullptr)
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::Panel::PickAll(::UnityEngine::UIElements::VisualElement* root, ::UnityEngine::Vector2 point,
                                                                                         ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* picked) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "PickAll", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(nullptr, ___internal_method, root, point, picked);
}
/// @param picked: ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* (default: nullptr)
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::Panel::PerformPick(::UnityEngine::UIElements::VisualElement* root, ::UnityEngine::Vector2 point,
                                                                                             ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* picked) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "PerformPick", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(nullptr, ___internal_method, root, point, picked);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::Panel::PickAll(::UnityEngine::Vector2 point,
                                                                                         ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* picked) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 44)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method, point, picked);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::Panel::Pick(::UnityEngine::Vector2 point) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 43)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method, point);
}
inline void UnityEngine::UIElements::Panel::ValidateLayout() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Panel::UpdateAnimations() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Panel::UpdateBindings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Panel::ApplyStyles() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Panel::UpdateForRepaint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "UpdateForRepaint",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Panel::Repaint(::UnityEngine::Event* e) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline void UnityEngine::UIElements::Panel::OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, versionChangeType);
}
inline ::UnityEngine::UIElements::IVisualTreeUpdater* UnityEngine::UIElements::Panel::GetUpdater(::UnityEngine::UIElements::VisualTreeUpdatePhase phase) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), 45)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IVisualTreeUpdater*, false>(this, ___internal_method, phase);
}
inline ::UnityEngine::Vector2Int UnityEngine::UIElements::Panel::_Pick_g__PixelOf_99_0(::UnityEngine::Vector2 p) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Panel*>::get(), "<Pick>g__PixelOf|99_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int, false>(nullptr, ___internal_method, p);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Panel::Panel() {}
