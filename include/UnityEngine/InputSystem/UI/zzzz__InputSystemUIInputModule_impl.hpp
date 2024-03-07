#pragma once
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__InputSystemUIInputModule_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__NavigationModel_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__PointerModel_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__UIPointerBehavior_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__UIPointerType_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__InputSystemUIInputModule_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__AxisEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__ExtendedPointerEventData_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__InputSystemUIInputModule_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__NavigationModel_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__PointerModel_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__UIPointerBehavior_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__UIPointerType_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionAsset_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionReference_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "refCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "enabledByInputModule", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState::__InputSystemUIInputModule__InputActionReferenceState(int32_t refCount,
                                                                                                                                                       bool enabledByInputModule) noexcept {
  this->refCount = refCount;
  this->enabledByInputModule = enabledByInputModule;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState::__InputSystemUIInputModule__InputActionReferenceState() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior::__InputSystemUIInputModule__CursorLockBehavior(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior::__InputSystemUIInputModule__CursorLockBehavior() {}
constexpr ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior::OutsideScreen{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior::ScreenCenter{
  static_cast<int32_t>(0x1)
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_deselectOnBackgroundClick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_deselectOnBackgroundClick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c16680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               "get_deselectOnBackgroundClick", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_deselectOnBackgroundClick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(bool)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_deselectOnBackgroundClick)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c16688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_deselectOnBackgroundClick",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_pointerBehavior
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::UI::UIPointerBehavior (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_pointerBehavior)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c16694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               "get_pointerBehavior", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_pointerBehavior
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ::UnityEngine::InputSystem::UI::UIPointerBehavior)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_pointerBehavior)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1669c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_pointerBehavior", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::UIPointerBehavior>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_cursorLockBehavior
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior (
    ::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_cursorLockBehavior)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c166a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               "get_cursorLockBehavior", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_cursorLockBehavior
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_cursorLockBehavior)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c166ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_cursorLockBehavior", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_localMultiPlayerRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_localMultiPlayerRoot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c166b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               "get_localMultiPlayerRoot", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_localMultiPlayerRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::GameObject*)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_localMultiPlayerRoot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c166bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_localMultiPlayerRoot", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.ActivateModule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::ActivateModule)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2c166c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.IsPointerOverGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(int32_t)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::IsPointerOverGameObject)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2c16778;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.GetLastRaycastResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::RaycastResult (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(int32_t)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::GetLastRaycastResult)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2c16a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "GetLastRaycastResult",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.PerformRaycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::RaycastResult (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ::UnityEngine::InputSystem::UI::ExtendedPointerEventData*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::PerformRaycast)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x2c16ac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "PerformRaycast", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.ProcessPointer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ByRef<::UnityEngine::InputSystem::UI::PointerModel>)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointer)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x2c17300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "ProcessPointer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::UI::PointerModel>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.PointerShouldIgnoreTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::Transform*)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::PointerShouldIgnoreTransform)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2c18458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "PointerShouldIgnoreTransform",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.ProcessPointerMovement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(ByRef<::UnityEngine::InputSystem::UI::PointerModel>, ::UnityEngine::InputSystem::UI::ExtendedPointerEventData*)>(
        &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointerMovement)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2c1775c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "ProcessPointerMovement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::UI::PointerModel>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.ProcessPointerMovement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ::UnityEngine::InputSystem::UI::ExtendedPointerEventData*, ::UnityEngine::GameObject*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointerMovement)> {
  constexpr static std::size_t size = 0x694;
  constexpr static std::size_t addrs = 0x2c18558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "ProcessPointerMovement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.ProcessPointerButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(ByRef<::UnityEngine::InputSystem::UI::__PointerModel__ButtonState>, ::UnityEngine::EventSystems::PointerEventData*)>(
        &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointerButton)> {
  constexpr static std::size_t size = 0x804;
  constexpr static std::size_t addrs = 0x2c177c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "ProcessPointerButton", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::UI::__PointerModel__ButtonState>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.ProcessPointerButtonDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ByRef<::UnityEngine::InputSystem::UI::__PointerModel__ButtonState>, ::UnityEngine::InputSystem::UI::ExtendedPointerEventData*)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointerButtonDrag)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x2c17fc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "ProcessPointerButtonDrag", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::UI::__PointerModel__ButtonState>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.ProcessPointerScroll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::InputSystem::UI::PointerModel>, ::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointerScroll)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x2c182c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "ProcessPointerScroll", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::UI::PointerModel>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.ProcessNavigation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ByRef<::UnityEngine::InputSystem::UI::NavigationModel>)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessNavigation)> {
  constexpr static std::size_t size = 0x61c;
  constexpr static std::size_t addrs = 0x2c18c64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "ProcessNavigation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::UI::NavigationModel>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.IsMoveAllowed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::EventSystems::AxisEventData*)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::IsMoveAllowed)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2c19280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "IsMoveAllowed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::AxisEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_moveRepeatDelay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_moveRepeatDelay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c19478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               "get_moveRepeatDelay", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_moveRepeatDelay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(float_t)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_moveRepeatDelay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c19480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_moveRepeatDelay",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_moveRepeatRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_moveRepeatRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c19488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               "get_moveRepeatRate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_moveRepeatRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(float_t)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_moveRepeatRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c19490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_moveRepeatRate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_explictlyIgnoreFocus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_explictlyIgnoreFocus)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2c19498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               "get_explictlyIgnoreFocus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_shouldIgnoreFocus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_shouldIgnoreFocus)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2c19500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               "get_shouldIgnoreFocus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_repeatRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_repeatRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c195c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               "get_repeatRate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_repeatRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(float_t)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_repeatRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c195d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_repeatRate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_repeatDelay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_repeatDelay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c195d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               "get_repeatDelay", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_repeatDelay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(float_t)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_repeatDelay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c195e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_repeatDelay",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_xrTrackingOrigin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_xrTrackingOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c195e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               "get_xrTrackingOrigin", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_xrTrackingOrigin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::Transform*)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_xrTrackingOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c195f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_xrTrackingOrigin", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_trackedDeviceDragThresholdMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_trackedDeviceDragThresholdMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c195f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                 "get_trackedDeviceDragThresholdMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_trackedDeviceDragThresholdMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(float_t)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_trackedDeviceDragThresholdMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c19600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               "set_trackedDeviceDragThresholdMultiplier", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.SwapAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ByRef<::UnityEngine::InputSystem::InputActionReference*>, ::UnityEngine::InputSystem::InputActionReference*, bool,
    ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::SwapAction)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x2c19608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "SwapAction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputActionReference*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_point
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_point)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c19ba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               "get_point", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_point
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_point)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c19ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_point", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_scrollWheel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_scrollWheel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c19bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               "get_scrollWheel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_scrollWheel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_scrollWheel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c19bc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_scrollWheel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_leftClick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_leftClick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c19be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               "get_leftClick", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_leftClick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_leftClick)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c19be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_leftClick", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_middleClick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_middleClick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c19c00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               "get_middleClick", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_middleClick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_middleClick)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c19c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_middleClick", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_rightClick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_rightClick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c19c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               "get_rightClick", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_rightClick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_rightClick)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c19c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_rightClick", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_move
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_move)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c19c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               "get_move", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_move
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_move)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c19c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_move", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_submit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_submit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c19c60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               "get_submit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_submit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_submit)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c19c68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_submit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_cancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_cancel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c19c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               "get_cancel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_cancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_cancel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c19c88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_cancel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_trackedDeviceOrientation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_trackedDeviceOrientation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c19ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               "get_trackedDeviceOrientation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_trackedDeviceOrientation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_trackedDeviceOrientation)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c19ca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_trackedDeviceOrientation",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_trackedDevicePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_trackedDevicePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c19cc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               "get_trackedDevicePosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_trackedDevicePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_trackedDevicePosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c19cc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_trackedDevicePosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.AssignDefaultActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::AssignDefaultActions)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x2c19ce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               "AssignDefaultActions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.UnassignActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::UnassignActions)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2c1a1dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               "UnassignActions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_trackedDeviceSelect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (
    ::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_trackedDeviceSelect)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2c1a2e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               "get_trackedDeviceSelect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_trackedDeviceSelect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_trackedDeviceSelect)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2c1a320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_trackedDeviceSelect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c1a360;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnDestroy)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2c1a408;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnEnable)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2c1a44c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnDisable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2c1a974;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.ResetPointers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::ResetPointers)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2c1a674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               "ResetPointers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.HasNoActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::HasNoActions)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2c1a544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               "HasNoActions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.EnableAllActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::EnableAllActions)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2c1a918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               "EnableAllActions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.DisableAllActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::DisableAllActions)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2c1aa14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               "DisableAllActions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.EnableInputAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::EnableInputAction)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2c19a34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "EnableInputAction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.TryDisableInputAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ::UnityEngine::InputSystem::InputActionReference*, bool)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::TryDisableInputAction)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2c198bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "TryDisableInputAction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.GetPointerStateIndexFor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(int32_t)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::GetPointerStateIndexFor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2c168e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "GetPointerStateIndexFor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.GetPointerStateForIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<ByRef<::UnityEngine::InputSystem::UI::PointerModel> (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    int32_t)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::GetPointerStateForIndex)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2c1ab88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "GetPointerStateForIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.GetPointerStateIndexFor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ByRef<::UnityEngine::InputSystem::__InputAction__CallbackContext>)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::GetPointerStateIndexFor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2c1abcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "GetPointerStateIndexFor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputAction__CallbackContext>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.GetPointerStateIndexFor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ::UnityEngine::InputSystem::InputControl*, bool)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::GetPointerStateIndexFor)> {
  constexpr static std::size_t size = 0x8a0;
  constexpr static std::size_t addrs = 0x2c1ac90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "GetPointerStateIndexFor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.AllocatePointer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    int32_t, int32_t, ::UnityEngine::InputSystem::UI::UIPointerType, ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::AllocatePointer)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x2c1b5fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "AllocatePointer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::UIPointerType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.SendPointerExitEventsAndRemovePointer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(int32_t)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::SendPointerExitEventsAndRemovePointer)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2c1aabc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "SendPointerExitEventsAndRemovePointer",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.RemovePointerAtIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(int32_t)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::RemovePointerAtIndex)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2c1b8dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "RemovePointerAtIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.PurgeStalePointers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::PurgeStalePointers)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2c1bac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               "PurgeStalePointers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.HaveControlForDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputActionReference*)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::HaveControlForDevice)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2c1b530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "HaveControlForDevice", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnPointCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnPointCallback)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2c1bbdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "OnPointCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.IgnoreNextClick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ByRef<::UnityEngine::InputSystem::__InputAction__CallbackContext>, bool)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::IgnoreNextClick)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2c1bcc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "IgnoreNextClick", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputAction__CallbackContext>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnLeftClickCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnLeftClickCallback)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2c1bde8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "OnLeftClickCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnRightClickCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnRightClickCallback)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2c1bebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "OnRightClickCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnMiddleClickCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnMiddleClickCallback)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2c1bf3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "OnMiddleClickCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.CheckForRemovedDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ByRef<::UnityEngine::InputSystem::__InputAction__CallbackContext>)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::CheckForRemovedDevice)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2c1ac2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "CheckForRemovedDevice", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputAction__CallbackContext>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnScrollCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnScrollCallback)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2c1bfbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "OnScrollCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnMoveCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnMoveCallback)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2c1c0c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "OnMoveCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnTrackedDeviceOrientationCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnTrackedDeviceOrientationCallback)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2c1c124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "OnTrackedDeviceOrientationCallback",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnTrackedDevicePositionCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ::UnityEngine::InputSystem::__InputAction__CallbackContext)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnTrackedDevicePositionCallback)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2c1c200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "OnTrackedDevicePositionCallback",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnControlsChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::System::Object*)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnControlsChanged)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c1c2d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "OnControlsChanged",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::Process)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2c1c2e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.ConvertUIToolkitPointerId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::ConvertUIToolkitPointerId)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2c1c5a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.HookActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::HookActions)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x2c1a6b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               "HookActions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.UnhookActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::UnhookActions)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2c1a438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               "UnhookActions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.SetActionCallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(bool)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::SetActionCallbacks)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2c1c670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "SetActionCallbacks",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.SetActionCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::InputSystem::InputActionReference*, ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*, bool)>(
        &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::SetActionCallback)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2c1c75c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "SetActionCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.UpdateReferenceForNewAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(
        &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::UpdateReferenceForNewAsset)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2c1c840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "UpdateReferenceForNewAsset",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_actionsAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionAsset> (
    ::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_actionsAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c1c8c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               "get_actionsAsset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_actionsAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputActionAsset*)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_actionsAsset)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x2c19fac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_actionsAsset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2c1c8d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_MoveRepeatDelay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MoveRepeatDelay;
}
constexpr float_t const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_MoveRepeatDelay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MoveRepeatDelay;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_MoveRepeatDelay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MoveRepeatDelay = value;
}
constexpr float_t& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_MoveRepeatRate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MoveRepeatRate;
}
constexpr float_t const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_MoveRepeatRate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MoveRepeatRate;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_MoveRepeatRate(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MoveRepeatRate = value;
}
constexpr float_t& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_TrackedDeviceDragThresholdMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackedDeviceDragThresholdMultiplier;
}
constexpr float_t const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_TrackedDeviceDragThresholdMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackedDeviceDragThresholdMultiplier;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_TrackedDeviceDragThresholdMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TrackedDeviceDragThresholdMultiplier = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_XRTrackingOrigin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XRTrackingOrigin;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_XRTrackingOrigin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XRTrackingOrigin;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_XRTrackingOrigin(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_XRTrackingOrigin)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_ActionsAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionsAsset;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_ActionsAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionsAsset;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_ActionsAsset(::UnityW<::UnityEngine::InputSystem::InputActionAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ActionsAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_PointAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_PointAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointAction;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_PointAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PointAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_MoveAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MoveAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_MoveAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MoveAction;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_MoveAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MoveAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_SubmitAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubmitAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_SubmitAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubmitAction;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_SubmitAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SubmitAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_CancelAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CancelAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_CancelAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CancelAction;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_CancelAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CancelAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_LeftClickAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LeftClickAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_LeftClickAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LeftClickAction;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_LeftClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LeftClickAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_MiddleClickAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MiddleClickAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_MiddleClickAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MiddleClickAction;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_MiddleClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MiddleClickAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_RightClickAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RightClickAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_RightClickAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RightClickAction;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_RightClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RightClickAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_ScrollWheelAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollWheelAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_ScrollWheelAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollWheelAction;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_ScrollWheelAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ScrollWheelAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_TrackedDevicePositionAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackedDevicePositionAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_TrackedDevicePositionAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackedDevicePositionAction;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_TrackedDevicePositionAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TrackedDevicePositionAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_TrackedDeviceOrientationAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackedDeviceOrientationAction;
}
constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_TrackedDeviceOrientationAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackedDeviceOrientationAction;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_TrackedDeviceOrientationAction(::UnityW<::UnityEngine::InputSystem::InputActionReference> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TrackedDeviceOrientationAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_DeselectOnBackgroundClick() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeselectOnBackgroundClick;
}
constexpr bool const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_DeselectOnBackgroundClick() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeselectOnBackgroundClick;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_DeselectOnBackgroundClick(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DeselectOnBackgroundClick = value;
}
constexpr ::UnityEngine::InputSystem::UI::UIPointerBehavior& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_PointerBehavior() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerBehavior;
}
constexpr ::UnityEngine::InputSystem::UI::UIPointerBehavior const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_PointerBehavior() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerBehavior;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_PointerBehavior(::UnityEngine::InputSystem::UI::UIPointerBehavior value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PointerBehavior = value;
}
constexpr ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_CursorLockBehavior() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CursorLockBehavior;
}
constexpr ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior const&
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_CursorLockBehavior() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CursorLockBehavior;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_CursorLockBehavior(::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CursorLockBehavior = value;
}
constexpr bool& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_ActionsHooked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionsHooked;
}
constexpr bool const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_ActionsHooked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionsHooked;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_ActionsHooked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActionsHooked = value;
}
constexpr bool& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_NeedToPurgeStalePointers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NeedToPurgeStalePointers;
}
constexpr bool const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_NeedToPurgeStalePointers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NeedToPurgeStalePointers;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_NeedToPurgeStalePointers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NeedToPurgeStalePointers = value;
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnPointDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnPointDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> const&
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnPointDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnPointDelegate;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_OnPointDelegate(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnPointDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnMoveDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnMoveDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> const&
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnMoveDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnMoveDelegate;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_OnMoveDelegate(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnMoveDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnLeftClickDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnLeftClickDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> const&
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnLeftClickDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnLeftClickDelegate;
}
constexpr void
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_OnLeftClickDelegate(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnLeftClickDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnRightClickDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnRightClickDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> const&
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnRightClickDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnRightClickDelegate;
}
constexpr void
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_OnRightClickDelegate(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnRightClickDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnMiddleClickDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnMiddleClickDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> const&
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnMiddleClickDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnMiddleClickDelegate;
}
constexpr void
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_OnMiddleClickDelegate(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnMiddleClickDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnScrollWheelDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnScrollWheelDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> const&
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnScrollWheelDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnScrollWheelDelegate;
}
constexpr void
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_OnScrollWheelDelegate(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnScrollWheelDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*&
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnTrackedDevicePositionDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnTrackedDevicePositionDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> const&
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnTrackedDevicePositionDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnTrackedDevicePositionDelegate;
}
constexpr void
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_OnTrackedDevicePositionDelegate(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnTrackedDevicePositionDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*&
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnTrackedDeviceOrientationDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnTrackedDeviceOrientationDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> const&
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnTrackedDeviceOrientationDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnTrackedDeviceOrientationDelegate;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_OnTrackedDeviceOrientationDelegate(
    ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnTrackedDeviceOrientationDelegate)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::System::Object*>*& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnControlsChangedDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnControlsChangedDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Object*>*> const&
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnControlsChangedDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnControlsChangedDelegate;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_OnControlsChangedDelegate(::System::Action_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnControlsChangedDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_CurrentPointerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentPointerId;
}
constexpr int32_t const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_CurrentPointerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentPointerId;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_CurrentPointerId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentPointerId = value;
}
constexpr int32_t& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_CurrentPointerIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentPointerIndex;
}
constexpr int32_t const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_CurrentPointerIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentPointerIndex;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_CurrentPointerIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentPointerIndex = value;
}
constexpr ::UnityEngine::InputSystem::UI::UIPointerType& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_CurrentPointerType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentPointerType;
}
constexpr ::UnityEngine::InputSystem::UI::UIPointerType const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_CurrentPointerType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentPointerType;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_CurrentPointerType(::UnityEngine::InputSystem::UI::UIPointerType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentPointerType = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t>& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_PointerIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerIds;
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t> const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_PointerIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerIds;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_PointerIds(::UnityEngine::InputSystem::Utilities::InlinedArray_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PointerIds = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputControl*>&
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_PointerTouchControls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerTouchControls;
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputControl*> const&
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_PointerTouchControls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerTouchControls;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_PointerTouchControls(
    ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputControl*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PointerTouchControls = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel>&
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_PointerStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerStates;
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel> const&
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_PointerStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerStates;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_PointerStates(
    ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::PointerModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PointerStates = value;
}
constexpr ::UnityEngine::InputSystem::UI::NavigationModel& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_NavigationState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NavigationState;
}
constexpr ::UnityEngine::InputSystem::UI::NavigationModel const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_NavigationState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NavigationState;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_NavigationState(::UnityEngine::InputSystem::UI::NavigationModel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NavigationState = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_LocalMultiPlayerRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalMultiPlayerRoot;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_LocalMultiPlayerRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalMultiPlayerRoot;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_LocalMultiPlayerRoot(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LocalMultiPlayerRoot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::setStaticF_s_InputActionReferenceCounts(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState>* value) {
  ::cordl_internals::setStaticField<
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState>*,
      "s_InputActionReferenceCounts", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState>*>(
          value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState>*
UnityEngine::InputSystem::UI::InputSystemUIInputModule::getStaticF_s_InputActionReferenceCounts() {
  return ::cordl_internals::getStaticField<
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__InputActionReferenceState>*,
      "s_InputActionReferenceCounts", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get>();
}
inline bool UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_deselectOnBackgroundClick() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                             "get_deselectOnBackgroundClick", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_deselectOnBackgroundClick(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_deselectOnBackgroundClick",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::UI::UIPointerBehavior UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_pointerBehavior() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                             "get_pointerBehavior", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::UI::UIPointerBehavior, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_pointerBehavior(::UnityEngine::InputSystem::UI::UIPointerBehavior value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_pointerBehavior", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::UIPointerBehavior>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_cursorLockBehavior() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                             "get_cursorLockBehavior", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_cursorLockBehavior(::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_cursorLockBehavior", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::__InputSystemUIInputModule__CursorLockBehavior>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_localMultiPlayerRoot() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                             "get_localMultiPlayerRoot", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_localMultiPlayerRoot(::UnityEngine::GameObject* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_localMultiPlayerRoot", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::ActivateModule() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::UI::InputSystemUIInputModule::IsPointerOverGameObject(int32_t pointerOrTouchId) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pointerOrTouchId);
}
inline ::UnityEngine::EventSystems::RaycastResult UnityEngine::InputSystem::UI::InputSystemUIInputModule::GetLastRaycastResult(int32_t pointerOrTouchId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "GetLastRaycastResult",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::RaycastResult, false>(this, ___internal_method, pointerOrTouchId);
}
inline ::UnityEngine::EventSystems::RaycastResult UnityEngine::InputSystem::UI::InputSystemUIInputModule::PerformRaycast(::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "PerformRaycast", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::RaycastResult, false>(this, ___internal_method, eventData);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointer(ByRef<::UnityEngine::InputSystem::UI::PointerModel> state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "ProcessPointer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::UI::PointerModel>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline bool UnityEngine::InputSystem::UI::InputSystemUIInputModule::PointerShouldIgnoreTransform(::UnityEngine::Transform* t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "PointerShouldIgnoreTransform",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, t);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointerMovement(ByRef<::UnityEngine::InputSystem::UI::PointerModel> pointer,
                                                                                           ::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "ProcessPointerMovement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::UI::PointerModel>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pointer, eventData);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointerMovement(::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData,
                                                                                           ::UnityEngine::GameObject* currentPointerTarget) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "ProcessPointerMovement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData, currentPointerTarget);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointerButton(ByRef<::UnityEngine::InputSystem::UI::__PointerModel__ButtonState> button,
                                                                                         ::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "ProcessPointerButton", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::UI::__PointerModel__ButtonState>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, button, eventData);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointerButtonDrag(ByRef<::UnityEngine::InputSystem::UI::__PointerModel__ButtonState> button,
                                                                                             ::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "ProcessPointerButtonDrag", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::UI::__PointerModel__ButtonState>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, button, eventData);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointerScroll(ByRef<::UnityEngine::InputSystem::UI::PointerModel> pointer,
                                                                                         ::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "ProcessPointerScroll", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::UI::PointerModel>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pointer, eventData);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessNavigation(ByRef<::UnityEngine::InputSystem::UI::NavigationModel> navigationState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "ProcessNavigation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::UI::NavigationModel>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, navigationState);
}
inline bool UnityEngine::InputSystem::UI::InputSystemUIInputModule::IsMoveAllowed(::UnityEngine::EventSystems::AxisEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "IsMoveAllowed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::AxisEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eventData);
}
inline float_t UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_moveRepeatDelay() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                             "get_moveRepeatDelay", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_moveRepeatDelay(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_moveRepeatDelay",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_moveRepeatRate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                             "get_moveRepeatRate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_moveRepeatRate(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_moveRepeatRate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_explictlyIgnoreFocus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                             "get_explictlyIgnoreFocus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_shouldIgnoreFocus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                             "get_shouldIgnoreFocus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_repeatRate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                             "get_repeatRate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_repeatRate(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_repeatRate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_repeatDelay() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                             "get_repeatDelay", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_repeatDelay(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_repeatDelay",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_xrTrackingOrigin() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                             "get_xrTrackingOrigin", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_xrTrackingOrigin(::UnityEngine::Transform* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_xrTrackingOrigin", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_trackedDeviceDragThresholdMultiplier() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                               "get_trackedDeviceDragThresholdMultiplier", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_trackedDeviceDragThresholdMultiplier(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_trackedDeviceDragThresholdMultiplier",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::SwapAction(ByRef<::UnityEngine::InputSystem::InputActionReference*> property,
                                                                               ::UnityEngine::InputSystem::InputActionReference* newValue, bool actionsHooked,
                                                                               ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* actionCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "SwapAction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputActionReference*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, property, newValue, actionsHooked, actionCallback);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_point() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                             "get_point", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_point(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_point", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_scrollWheel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                             "get_scrollWheel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_scrollWheel(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_scrollWheel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_leftClick() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                             "get_leftClick", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_leftClick(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_leftClick", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_middleClick() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                             "get_middleClick", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_middleClick(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_middleClick", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_rightClick() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                             "get_rightClick", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_rightClick(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_rightClick", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_move() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                             "get_move", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_move(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_move", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_submit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                             "get_submit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_submit(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_submit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_cancel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                             "get_cancel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_cancel(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_cancel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_trackedDeviceOrientation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                             "get_trackedDeviceOrientation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_trackedDeviceOrientation(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_trackedDeviceOrientation",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_trackedDevicePosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                             "get_trackedDevicePosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_trackedDevicePosition(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_trackedDevicePosition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::AssignDefaultActions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                             "AssignDefaultActions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::UnassignActions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                             "UnassignActions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_trackedDeviceSelect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                             "get_trackedDeviceSelect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_trackedDeviceSelect(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_trackedDeviceSelect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::Awake() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnDestroy() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnDisable() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::ResetPointers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                             "ResetPointers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::UI::InputSystemUIInputModule::HasNoActions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                             "HasNoActions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::EnableAllActions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                             "EnableAllActions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::DisableAllActions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                             "DisableAllActions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::EnableInputAction(::UnityEngine::InputSystem::InputActionReference* inputActionReference) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "EnableInputAction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputActionReference);
}
/// @param isComponentDisabling: bool (default: false)
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::TryDisableInputAction(::UnityEngine::InputSystem::InputActionReference* inputActionReference, bool isComponentDisabling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "TryDisableInputAction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputActionReference, isComponentDisabling);
}
inline int32_t UnityEngine::InputSystem::UI::InputSystemUIInputModule::GetPointerStateIndexFor(int32_t pointerOrTouchId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "GetPointerStateIndexFor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, pointerOrTouchId);
}
inline ByRef<::UnityEngine::InputSystem::UI::PointerModel> UnityEngine::InputSystem::UI::InputSystemUIInputModule::GetPointerStateForIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "GetPointerStateForIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<ByRef<::UnityEngine::InputSystem::UI::PointerModel>, false>(this, ___internal_method, index);
}
inline int32_t UnityEngine::InputSystem::UI::InputSystemUIInputModule::GetPointerStateIndexFor(ByRef<::UnityEngine::InputSystem::__InputAction__CallbackContext> context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "GetPointerStateIndexFor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputAction__CallbackContext>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, context);
}
/// @param createIfNotExists: bool (default: true)
inline int32_t UnityEngine::InputSystem::UI::InputSystemUIInputModule::GetPointerStateIndexFor(::UnityEngine::InputSystem::InputControl* control, bool createIfNotExists) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "GetPointerStateIndexFor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, control, createIfNotExists);
}
/// @param touchControl: ::UnityEngine::InputSystem::InputControl* (default: nullptr)
inline int32_t UnityEngine::InputSystem::UI::InputSystemUIInputModule::AllocatePointer(int32_t pointerId, int32_t touchId, ::UnityEngine::InputSystem::UI::UIPointerType pointerType,
                                                                                       ::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::InputDevice* device,
                                                                                       ::UnityEngine::InputSystem::InputControl* touchControl) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "AllocatePointer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::UI::UIPointerType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, pointerId, touchId, pointerType, control, device, touchControl);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::SendPointerExitEventsAndRemovePointer(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "SendPointerExitEventsAndRemovePointer",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::RemovePointerAtIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "RemovePointerAtIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::PurgeStalePointers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                             "PurgeStalePointers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::UI::InputSystemUIInputModule::HaveControlForDevice(::UnityEngine::InputSystem::InputDevice* device,
                                                                                         ::UnityEngine::InputSystem::InputActionReference* actionReference) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "HaveControlForDevice", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, device, actionReference);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnPointCallback(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "OnPointCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline bool UnityEngine::InputSystem::UI::InputSystemUIInputModule::IgnoreNextClick(ByRef<::UnityEngine::InputSystem::__InputAction__CallbackContext> context, bool wasPressed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "IgnoreNextClick", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputAction__CallbackContext>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, context, wasPressed);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnLeftClickCallback(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "OnLeftClickCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnRightClickCallback(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "OnRightClickCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnMiddleClickCallback(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "OnMiddleClickCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline bool UnityEngine::InputSystem::UI::InputSystemUIInputModule::CheckForRemovedDevice(ByRef<::UnityEngine::InputSystem::__InputAction__CallbackContext> context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "CheckForRemovedDevice", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputAction__CallbackContext>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnScrollCallback(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "OnScrollCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnMoveCallback(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "OnMoveCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnTrackedDeviceOrientationCallback(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "OnTrackedDeviceOrientationCallback",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnTrackedDevicePositionCallback(::UnityEngine::InputSystem::__InputAction__CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "OnTrackedDevicePositionCallback",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputAction__CallbackContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnControlsChanged(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "OnControlsChanged",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::Process() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::UI::InputSystemUIInputModule::ConvertUIToolkitPointerId(::UnityEngine::EventSystems::PointerEventData* sourcePointerData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, sourcePointerData);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::HookActions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                             "HookActions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::UnhookActions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                             "UnhookActions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::SetActionCallbacks(bool install) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "SetActionCallbacks",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, install);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::SetActionCallback(::UnityEngine::InputSystem::InputActionReference* actionReference,
                                                                                      ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* callback, bool install) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "SetActionCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actionReference, callback, install);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference>
UnityEngine::InputSystem::UI::InputSystemUIInputModule::UpdateReferenceForNewAsset(::UnityEngine::InputSystem::InputActionReference* actionReference) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "UpdateReferenceForNewAsset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionReference*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>, false>(this, ___internal_method, actionReference);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_actionsAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                             "get_actionsAsset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionAsset>, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_actionsAsset(::UnityEngine::InputSystem::InputActionAsset* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(), "set_actionsAsset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::UI::InputSystemUIInputModule* UnityEngine::InputSystem::UI::InputSystemUIInputModule::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>());
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::UI::InputSystemUIInputModule::InputSystemUIInputModule() {}
