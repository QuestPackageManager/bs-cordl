#pragma once
// IWYU pragma private; include "VRUIControls/VRInputModule.hpp"
#include "GlobalNamespace/zzzz__IVRInputModule_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_impl.hpp"
#include "VRUIControls/zzzz__VRInputModule_def.hpp"
#include "GlobalNamespace/zzzz__HapticFeedbackManager_def.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "VRUIControls/zzzz__MouseButtonEventData_def.hpp"
#include "VRUIControls/zzzz__MouseState_def.hpp"
#include "VRUIControls/zzzz__VRPointer_def.hpp"
//  Writing Method size for method: ::VRUIControls::VRInputModule.get_useMouseForPressInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VRUIControls::VRInputModule::*)()>(&::VRUIControls::VRInputModule::get_useMouseForPressInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4aeee3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                                                                               "get_useMouseForPressInput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.set_useMouseForPressInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)(bool)>(&::VRUIControls::VRInputModule::set_useMouseForPressInput)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4aeee44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "set_useMouseForPressInput",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.get_vrPointer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VRUIControls::VRPointer> (::VRUIControls::VRInputModule::*)()>(
    &::VRUIControls::VRInputModule::get_vrPointer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4aeee50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "get_vrPointer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.add_onProcessMousePressEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)(::System::Action_1<::UnityW<::UnityEngine::GameObject>>*)>(
    &::VRUIControls::VRInputModule::add_onProcessMousePressEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x4aeee58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "add_onProcessMousePressEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::GameObject>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.remove_onProcessMousePressEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)(::System::Action_1<::UnityW<::UnityEngine::GameObject>>*)>(
    &::VRUIControls::VRInputModule::remove_onProcessMousePressEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x4aeef08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "remove_onProcessMousePressEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::GameObject>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.add_pointerDidClickEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*)>(
    &::VRUIControls::VRInputModule::add_pointerDidClickEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x4aeefb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "add_pointerDidClickEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.remove_pointerDidClickEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*)>(
    &::VRUIControls::VRInputModule::remove_pointerDidClickEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x4aef068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "remove_pointerDidClickEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)()>(&::VRUIControls::VRInputModule::OnDisable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4aef118;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.GetPointerData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VRUIControls::VRInputModule::*)(int32_t, ::ByRef<::UnityEngine::EventSystems::PointerEventData*>, bool)>(
    &::VRUIControls::VRInputModule::GetPointerData)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x4aef33c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "GetPointerData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::EventSystems::PointerEventData*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.GetMousePointerEventData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VRUIControls::MouseState* (::VRUIControls::VRInputModule::*)(int32_t)>(
    &::VRUIControls::VRInputModule::GetMousePointerEventData)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x4aef42c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.GetLastPointerEventData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::PointerEventData* (::VRUIControls::VRInputModule::*)(int32_t)>(
    &::VRUIControls::VRInputModule::GetLastPointerEventData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4aef76c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "GetLastPointerEventData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.ShouldStartDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VRUIControls::VRInputModule::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, bool)>(
    &::VRUIControls::VRInputModule::ShouldStartDrag)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x4aef78c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "ShouldStartDrag", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.ProcessMove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::VRUIControls::VRInputModule::ProcessMove)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x4aef7bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.ProcessDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::VRUIControls::VRInputModule::ProcessDrag)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x4af0200;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.IsPointerOverGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VRUIControls::VRInputModule::*)(int32_t)>(&::VRUIControls::VRInputModule::IsPointerOverGameObject)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4af04d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.ClearSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)()>(&::VRUIControls::VRInputModule::ClearSelection)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x4aef134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "ClearSelection",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VRUIControls::VRInputModule::*)()>(&::VRUIControls::VRInputModule::ToString)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x4af0574;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.DeselectIfSelectionChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)(::UnityEngine::GameObject*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::VRUIControls::VRInputModule::DeselectIfSelectionChanged)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x4af07dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "DeselectIfSelectionChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)()>(&::VRUIControls::VRInputModule::Process)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x4af08cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.SendUpdateEventToSelectedObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VRUIControls::VRInputModule::*)()>(&::VRUIControls::VRInputModule::SendUpdateEventToSelectedObject)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x4af12a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "SendUpdateEventToSelectedObject",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.ProcessMousePress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)(::VRUIControls::MouseButtonEventData*)>(
    &::VRUIControls::VRInputModule::ProcessMousePress)> {
  constexpr static std::size_t size = 0x758;
  constexpr static std::size_t addrs = 0x4af0ae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "ProcessMousePress", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VRUIControls::MouseButtonEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.HandlePointerExitAndEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)(::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::GameObject*)>(
    &::VRUIControls::VRInputModule::HandlePointerExitAndEnter)> {
  constexpr static std::size_t size = 0x90c;
  constexpr static std::size_t addrs = 0x4aef8f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "HandlePointerExitAndEnter", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.RaycastComparer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::EventSystems::RaycastResult, ::UnityEngine::EventSystems::RaycastResult)>(
    &::VRUIControls::VRInputModule::RaycastComparer)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x4af13e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "RaycastComparer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::RaycastResult>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::RaycastResult>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)()>(&::VRUIControls::VRInputModule::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x4af17cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VRUIControls::VRPointer>& VRUIControls::VRInputModule::__cordl_internal_get__vrPointer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPointer;
}
constexpr ::UnityW<::VRUIControls::VRPointer> const& VRUIControls::VRInputModule::__cordl_internal_get__vrPointer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPointer;
}
constexpr void VRUIControls::VRInputModule::__cordl_internal_set__vrPointer(::UnityW<::VRUIControls::VRPointer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vrPointer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& VRUIControls::VRInputModule::__cordl_internal_get__rumblePreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rumblePreset;
}
constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& VRUIControls::VRInputModule::__cordl_internal_get__rumblePreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rumblePreset;
}
constexpr void VRUIControls::VRInputModule::__cordl_internal_set__rumblePreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rumblePreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager>& VRUIControls::VRInputModule::__cordl_internal_get__hapticFeedbackManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackManager;
}
constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager> const& VRUIControls::VRInputModule::__cordl_internal_get__hapticFeedbackManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackManager;
}
constexpr void VRUIControls::VRInputModule::__cordl_internal_set__hapticFeedbackManager(::UnityW<::GlobalNamespace::HapticFeedbackManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hapticFeedbackManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& VRUIControls::VRInputModule::__cordl_internal_get__useMouseForPressInput_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useMouseForPressInput_k__BackingField;
}
constexpr bool const& VRUIControls::VRInputModule::__cordl_internal_get__useMouseForPressInput_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useMouseForPressInput_k__BackingField;
}
constexpr void VRUIControls::VRInputModule::__cordl_internal_set__useMouseForPressInput_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useMouseForPressInput_k__BackingField = value;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::GameObject>>*& VRUIControls::VRInputModule::__cordl_internal_get_onProcessMousePressEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onProcessMousePressEvent;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::GameObject>>* const& VRUIControls::VRInputModule::__cordl_internal_get_onProcessMousePressEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onProcessMousePressEvent;
}
constexpr void VRUIControls::VRInputModule::__cordl_internal_set_onProcessMousePressEvent(::System::Action_1<::UnityW<::UnityEngine::GameObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onProcessMousePressEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*& VRUIControls::VRInputModule::__cordl_internal_get_pointerDidClickEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pointerDidClickEvent;
}
constexpr ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* const& VRUIControls::VRInputModule::__cordl_internal_get_pointerDidClickEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pointerDidClickEvent;
}
constexpr void VRUIControls::VRInputModule::__cordl_internal_set_pointerDidClickEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pointerDidClickEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>*& VRUIControls::VRInputModule::__cordl_internal_get__pointerData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerData;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>* const& VRUIControls::VRInputModule::__cordl_internal_get__pointerData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerData;
}
constexpr void VRUIControls::VRInputModule::__cordl_internal_set__pointerData(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pointerData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*& VRUIControls::VRInputModule::__cordl_internal_get__componentList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____componentList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* const& VRUIControls::VRInputModule::__cordl_internal_get__componentList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____componentList;
}
constexpr void VRUIControls::VRInputModule::__cordl_internal_set__componentList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____componentList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VRUIControls::MouseState*& VRUIControls::VRInputModule::__cordl_internal_get__mouseState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mouseState;
}
constexpr ::VRUIControls::MouseState* const& VRUIControls::VRInputModule::__cordl_internal_get__mouseState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mouseState;
}
constexpr void VRUIControls::VRInputModule::__cordl_internal_set__mouseState(::VRUIControls::MouseState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mouseState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VRUIControls::VRInputModule::setStaticF__raycastComparer(::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>*, "_raycastComparer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get>(
      std::forward<::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>* VRUIControls::VRInputModule::getStaticF__raycastComparer() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>*, "_raycastComparer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get>();
}
inline bool VRUIControls::VRInputModule::get_useMouseForPressInput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "get_useMouseForPressInput",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VRUIControls::VRInputModule::set_useMouseForPressInput(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "set_useMouseForPressInput",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::VRUIControls::VRPointer> VRUIControls::VRInputModule::get_vrPointer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "get_vrPointer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::VRUIControls::VRPointer>, false>(this, ___internal_method);
}
inline void VRUIControls::VRInputModule::add_onProcessMousePressEvent(::System::Action_1<::UnityW<::UnityEngine::GameObject>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "add_onProcessMousePressEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::GameObject>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VRUIControls::VRInputModule::remove_onProcessMousePressEvent(::System::Action_1<::UnityW<::UnityEngine::GameObject>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "remove_onProcessMousePressEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::GameObject>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VRUIControls::VRInputModule::add_pointerDidClickEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "add_pointerDidClickEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VRUIControls::VRInputModule::remove_pointerDidClickEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "remove_pointerDidClickEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VRUIControls::VRInputModule::OnDisable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool VRUIControls::VRInputModule::GetPointerData(int32_t id, ::ByRef<::UnityEngine::EventSystems::PointerEventData*> data, bool create) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "GetPointerData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::EventSystems::PointerEventData*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, id, data, create);
}
inline ::VRUIControls::MouseState* VRUIControls::VRInputModule::GetMousePointerEventData(int32_t id) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<::VRUIControls::MouseState*, false>(this, ___internal_method, id);
}
inline ::UnityEngine::EventSystems::PointerEventData* VRUIControls::VRInputModule::GetLastPointerEventData(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "GetLastPointerEventData",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerEventData*, false>(this, ___internal_method, id);
}
inline bool VRUIControls::VRInputModule::ShouldStartDrag(::UnityEngine::Vector2 pressPos, ::UnityEngine::Vector2 currentPos, float_t threshold, bool useDragThreshold) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "ShouldStartDrag", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pressPos, currentPos, threshold, useDragThreshold);
}
inline void VRUIControls::VRInputModule::ProcessMove(::UnityEngine::EventSystems::PointerEventData* pointerEvent) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pointerEvent);
}
inline void VRUIControls::VRInputModule::ProcessDrag(::UnityEngine::EventSystems::PointerEventData* pointerEvent) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pointerEvent);
}
inline bool VRUIControls::VRInputModule::IsPointerOverGameObject(int32_t pointerId) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pointerId);
}
inline void VRUIControls::VRInputModule::ClearSelection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "ClearSelection",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW VRUIControls::VRInputModule::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void VRUIControls::VRInputModule::DeselectIfSelectionChanged(::UnityEngine::GameObject* currentOverGo, ::UnityEngine::EventSystems::BaseEventData* pointerEvent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "DeselectIfSelectionChanged", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentOverGo, pointerEvent);
}
inline void VRUIControls::VRInputModule::Process() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool VRUIControls::VRInputModule::SendUpdateEventToSelectedObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                                                                             "SendUpdateEventToSelectedObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VRUIControls::VRInputModule::ProcessMousePress(::VRUIControls::MouseButtonEventData* data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "ProcessMousePress", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VRUIControls::MouseButtonEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void VRUIControls::VRInputModule::HandlePointerExitAndEnter(::UnityEngine::EventSystems::PointerEventData* currentPointerData, ::UnityEngine::GameObject* newEnterTarget) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "HandlePointerExitAndEnter", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentPointerData, newEnterTarget);
}
inline int32_t VRUIControls::VRInputModule::RaycastComparer(::UnityEngine::EventSystems::RaycastResult lhs, ::UnityEngine::EventSystems::RaycastResult rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "RaycastComparer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::RaycastResult>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::RaycastResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, lhs, rhs);
}
inline void VRUIControls::VRInputModule::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VRUIControls::VRInputModule* VRUIControls::VRInputModule::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VRUIControls::VRInputModule*>());
}
/// @brief Convert operator to "::GlobalNamespace::IVRInputModule"
constexpr VRUIControls::VRInputModule::operator ::GlobalNamespace::IVRInputModule*() noexcept {
  return static_cast<::GlobalNamespace::IVRInputModule*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IVRInputModule"
constexpr ::GlobalNamespace::IVRInputModule* VRUIControls::VRInputModule::i___GlobalNamespace__IVRInputModule() noexcept {
  return static_cast<::GlobalNamespace::IVRInputModule*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::VRUIControls::VRInputModule::VRInputModule() {}
