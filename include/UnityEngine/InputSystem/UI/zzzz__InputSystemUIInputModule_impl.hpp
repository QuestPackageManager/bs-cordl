#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/UI/InputSystemUIInputModule.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__NavigationModel_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__PointerModel_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__SubmitCancelModel_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__UIPointerBehavior_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__UIPointerType_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_impl.hpp"
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
#include "UnityEngine/InputSystem/zzzz__DefaultInputActions_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionAsset_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionReference_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "refCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "enabledByInputModule", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::UI::InputSystemUIInputModule_InputActionReferenceState::InputSystemUIInputModule_InputActionReferenceState(int32_t refCount, bool enabledByInputModule) noexcept {
  this->refCount = refCount;
  this->enabledByInputModule = enabledByInputModule;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::UI::InputSystemUIInputModule_InputActionReferenceState::InputSystemUIInputModule_InputActionReferenceState() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::UI::InputSystemUIInputModule_CursorLockBehavior::InputSystemUIInputModule_CursorLockBehavior(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::UI::InputSystemUIInputModule_CursorLockBehavior::InputSystemUIInputModule_CursorLockBehavior() {}
constexpr ::UnityEngine::InputSystem::UI::InputSystemUIInputModule_CursorLockBehavior UnityEngine::InputSystem::UI::InputSystemUIInputModule_CursorLockBehavior::OutsideScreen{ static_cast<int32_t>(
    0x0) };
constexpr ::UnityEngine::InputSystem::UI::InputSystemUIInputModule_CursorLockBehavior UnityEngine::InputSystem::UI::InputSystemUIInputModule_CursorLockBehavior::ScreenCenter{ static_cast<int32_t>(
    0x1) };
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_deselectOnBackgroundClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_deselectOnBackgroundClick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x658d6d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_deselectOnBackgroundClick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_deselectOnBackgroundClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(bool)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_deselectOnBackgroundClick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x658d6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "set_deselectOnBackgroundClick", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_pointerBehavior
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::UI::UIPointerBehavior (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_pointerBehavior)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x658d6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_pointerBehavior", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_pointerBehavior
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::UI::UIPointerBehavior)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_pointerBehavior)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x658d6f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                           { "set_pointerBehavior", {}, { ::i2c::type_of<::UnityEngine::InputSystem::UI::UIPointerBehavior>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_cursorLockBehavior
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::UI::InputSystemUIInputModule_CursorLockBehavior (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_cursorLockBehavior)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x658d6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_cursorLockBehavior", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_cursorLockBehavior
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::UI::InputSystemUIInputModule_CursorLockBehavior)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_cursorLockBehavior)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x658d700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                             { "set_cursorLockBehavior", {}, { ::i2c::type_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule_CursorLockBehavior>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_localMultiPlayerRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_localMultiPlayerRoot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x658d708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_localMultiPlayerRoot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_localMultiPlayerRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::GameObject*)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_localMultiPlayerRoot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x658d710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                           { "set_localMultiPlayerRoot", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_scrollDeltaPerTick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_scrollDeltaPerTick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x658d718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_scrollDeltaPerTick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_scrollDeltaPerTick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(float_t)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_scrollDeltaPerTick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x658d720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "set_scrollDeltaPerTick", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.ActivateModule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::ActivateModule)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x658d728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.IsPointerOverGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(int32_t)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::IsPointerOverGameObject)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x658d7d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.GetLastRaycastResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::RaycastResult (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(int32_t)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::GetLastRaycastResult)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x658da90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "GetLastRaycastResult", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.PerformRaycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::RaycastResult (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ::UnityEngine::InputSystem::UI::ExtendedPointerEventData*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::PerformRaycast)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x658db5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                           { "PerformRaycast", {}, { ::i2c::type_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.ProcessPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::by_ref<::UnityEngine::InputSystem::UI::PointerModel>)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointer)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x658e3f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                           { "ProcessPointer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::UI::PointerModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.PointerShouldIgnoreTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::Transform*)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::PointerShouldIgnoreTransform)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x658f768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                           { "PointerShouldIgnoreTransform", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.ProcessPointerMovement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::by_ref<::UnityEngine::InputSystem::UI::PointerModel>, ::UnityEngine::InputSystem::UI::ExtendedPointerEventData*)>(
        &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointerMovement)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x658e89c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                            { "ProcessPointerMovement",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::UI::PointerModel>>(), ::i2c::type_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.ProcessPointerMovement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ::UnityEngine::InputSystem::UI::ExtendedPointerEventData*, ::UnityEngine::GameObject*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointerMovement)> {
  constexpr static std::size_t size = 0x95c;
  constexpr static std::size_t addrs = 0x658f878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                            { "ProcessPointerMovement", {}, { ::i2c::type_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(), ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.ProcessPointerButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::by_ref<::UnityEngine::InputSystem::UI::PointerModel_ButtonState>, ::UnityEngine::EventSystems::PointerEventData*)>(
        &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointerButton)> {
  constexpr static std::size_t size = 0x940;
  constexpr static std::size_t addrs = 0x658e8fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                            { "ProcessPointerButton",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::UI::PointerModel_ButtonState>>(), ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.ProcessPointerButtonDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::by_ref<::UnityEngine::InputSystem::UI::PointerModel_ButtonState>,
                                                                                                                          ::UnityEngine::InputSystem::UI::ExtendedPointerEventData*)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointerButtonDrag)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x658f23c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                           { "ProcessPointerButtonDrag",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::UI::PointerModel_ButtonState>>(),
                                                                                               ::i2c::type_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.ProcessPointerScroll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::InputSystem::UI::PointerModel>, ::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointerScroll)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x658f5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
            { "ProcessPointerScroll", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::UI::PointerModel>>(), ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.ProcessNavigation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::by_ref<::UnityEngine::InputSystem::UI::NavigationModel>)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessNavigation)> {
  constexpr static std::size_t size = 0x714;
  constexpr static std::size_t addrs = 0x6590260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                             { "ProcessNavigation", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::UI::NavigationModel>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.IsMoveAllowed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::EventSystems::AxisEventData*)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::IsMoveAllowed)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x6590974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                           { "IsMoveAllowed", {}, { ::i2c::type_of<::UnityEngine::EventSystems::AxisEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_moveRepeatDelay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_moveRepeatDelay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6590b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_moveRepeatDelay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_moveRepeatDelay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(float_t)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_moveRepeatDelay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6590b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "set_moveRepeatDelay", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_moveRepeatRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_moveRepeatRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6590b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_moveRepeatRate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_moveRepeatRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(float_t)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_moveRepeatRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6590b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "set_moveRepeatRate", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_explictlyIgnoreFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_explictlyIgnoreFocus)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6590b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_explictlyIgnoreFocus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_shouldIgnoreFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_shouldIgnoreFocus)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6590c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_shouldIgnoreFocus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_repeatRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_repeatRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6590ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_repeatRate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_repeatRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(float_t)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_repeatRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6590cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "set_repeatRate", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_repeatDelay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_repeatDelay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6590cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_repeatDelay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_repeatDelay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(float_t)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_repeatDelay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6590cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "set_repeatDelay", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_xrTrackingOrigin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_xrTrackingOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6590d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_xrTrackingOrigin", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_xrTrackingOrigin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::Transform*)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_xrTrackingOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6590d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                           { "set_xrTrackingOrigin", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_trackedDeviceDragThresholdMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_trackedDeviceDragThresholdMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6590d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_trackedDeviceDragThresholdMultiplier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_trackedDeviceDragThresholdMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(float_t)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_trackedDeviceDragThresholdMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6590d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                           { "set_trackedDeviceDragThresholdMultiplier", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.SwapAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ::by_ref<::UnityEngine::InputSystem::InputActionReference*>, ::UnityEngine::InputSystem::InputActionReference*, bool,
    ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::SwapAction)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x6590d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                { "SwapAction",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionReference*>>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>(),
                                                    ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_point
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_point)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65913dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_point", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_point
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_point)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65913e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                           { "set_point", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_scrollWheel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_scrollWheel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65913f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_scrollWheel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_scrollWheel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_scrollWheel)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6591400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                           { "set_scrollWheel", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_leftClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_leftClick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6591414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_leftClick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_leftClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_leftClick)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659141c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                           { "set_leftClick", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_middleClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_middleClick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6591430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_middleClick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_middleClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_middleClick)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6591438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                           { "set_middleClick", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_rightClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_rightClick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659144c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_rightClick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_rightClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_rightClick)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6591454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                           { "set_rightClick", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_move
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_move)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6591468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_move", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_move
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_move)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6591470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                           { "set_move", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_submit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_submit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6591484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_submit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_submit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_submit)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659148c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                           { "set_submit", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_cancel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_cancel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65914a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_cancel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_cancel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_cancel)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65914a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                           { "set_cancel", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_trackedDeviceOrientation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_trackedDeviceOrientation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65914bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_trackedDeviceOrientation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_trackedDeviceOrientation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_trackedDeviceOrientation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65914c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                             { "set_trackedDeviceOrientation", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_trackedDevicePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_trackedDevicePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65914d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_trackedDevicePosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_trackedDevicePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_trackedDevicePosition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65914e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                             { "set_trackedDevicePosition", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.AssignDefaultActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::AssignDefaultActions)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x65914f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "AssignDefaultActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.UnassignActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::UnassignActions)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6591a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "UnassignActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_trackedDeviceSelect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_trackedDeviceSelect)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6591b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_trackedDeviceSelect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_trackedDeviceSelect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_trackedDeviceSelect)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6591bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                             { "set_trackedDeviceSelect", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::Awake)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6591bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnDestroy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6591ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnEnable)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6591ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnDisable)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6592480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.ResetPointers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::ResetPointers)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6591f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "ResetPointers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.HasNoActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::HasNoActions)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6591de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "HasNoActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.EnableAllActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::EnableAllActions)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6592424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "EnableAllActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.DisableAllActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::DisableAllActions)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x659253c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "DisableAllActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.EnableInputAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::EnableInputAction)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x65911f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                           { "EnableInputAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.TryDisableInputAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputActionReference*, bool)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::TryDisableInputAction)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6591038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                             { "TryDisableInputAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.GetPointerStateIndexFor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(int32_t)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::GetPointerStateIndexFor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x658d958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "GetPointerStateIndexFor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.GetPointerStateForIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::InputSystem::UI::PointerModel> (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(int32_t)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::GetPointerStateForIndex)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x65926b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "GetPointerStateForIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.GetDisplayIndexFor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::GetDisplayIndexFor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x65926f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                           { "GetDisplayIndexFor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.GetPointerStateIndexFor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::by_ref<::UnityEngine::InputSystem::InputAction_CallbackContext>)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::GetPointerStateIndexFor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x65927b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                             { "GetPointerStateIndexFor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputAction_CallbackContext>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.GetPointerStateIndexFor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputControl*, bool)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::GetPointerStateIndexFor)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0x659289c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                             { "GetPointerStateIndexFor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.AllocatePointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    int32_t, int32_t, int32_t, ::UnityEngine::InputSystem::UI::UIPointerType, ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::InputDevice*,
    ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::AllocatePointer)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x6592fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                             { "AllocatePointer",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::InputSystem::UI::UIPointerType>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(),
                                                                 ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.SendPointerExitEventsAndRemovePointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(int32_t)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::SendPointerExitEventsAndRemovePointer)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x65925e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                           { "SendPointerExitEventsAndRemovePointer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.RemovePointerAtIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(int32_t)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::RemovePointerAtIndex)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x6593278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "RemovePointerAtIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.PurgeStalePointers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::PurgeStalePointers)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6593470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "PurgeStalePointers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.HaveControlForDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputActionReference*)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::HaveControlForDevice)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6592f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                            { "HaveControlForDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnPointCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnPointCallback)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x659358c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                           { "OnPointCallback", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.IgnoreNextClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::by_ref<::UnityEngine::InputSystem::InputAction_CallbackContext>, bool)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::IgnoreNextClick)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x65936b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                { "IgnoreNextClick", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputAction_CallbackContext>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnLeftClickCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnLeftClickCallback)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x65937f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                             { "OnLeftClickCallback", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnRightClickCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnRightClickCallback)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x659392c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                             { "OnRightClickCallback", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnMiddleClickCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnMiddleClickCallback)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6593a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                             { "OnMiddleClickCallback", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.CheckForRemovedDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::by_ref<::UnityEngine::InputSystem::InputAction_CallbackContext>)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::CheckForRemovedDevice)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6592830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                             { "CheckForRemovedDevice", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputAction_CallbackContext>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnScrollCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnScrollCallback)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6593afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                           { "OnScrollCallback", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnMoveCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnMoveCallback)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6593c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                           { "OnMoveCallback", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnSubmitCancelCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnSubmitCancelCallback)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6593cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                             { "OnSubmitCancelCallback", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnTrackedDeviceOrientationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnTrackedDeviceOrientationCallback)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6593d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                             { "OnTrackedDeviceOrientationCallback", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnTrackedDevicePositionCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputAction_CallbackContext)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnTrackedDevicePositionCallback)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6593e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                             { "OnTrackedDevicePositionCallback", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.OnControlsChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::System::Object*)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnControlsChanged)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6593fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "OnControlsChanged", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.FilterPointerStatesByType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::FilterPointerStatesByType)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x6593fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "FilterPointerStatesByType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.Process
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::Process)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x65942f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.ConvertUIToolkitPointerId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::ConvertUIToolkitPointerId)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x65944c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.ConvertPointerEventScrollDeltaToTicks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::ConvertPointerEventScrollDeltaToTicks)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x65945ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.HookActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::HookActions)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0x6591f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "HookActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.UnhookActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::UnhookActions)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6591cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "UnhookActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.SetActionCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(bool)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::SetActionCallbacks)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x659461c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "SetActionCallbacks", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.SetActionCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionReference*, ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*, bool)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::SetActionCallback)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6594728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                             { "SetActionCallback",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>(),
                                                                 ::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.UpdateReferenceForNewAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionReference> (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(
    ::UnityEngine::InputSystem::InputActionReference*)>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::UpdateReferenceForNewAsset)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6594810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                             { "UpdateReferenceForNewAsset", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_actionsAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionAsset> (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_actionsAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65948a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_actionsAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_actionsAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(::UnityEngine::InputSystem::InputActionAsset*)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_actionsAsset)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x65917d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                           { "set_actionsAsset", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.get_sendPointerHoverToParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_sendPointerHoverToParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65901d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_sendPointerHoverToParent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule.set_sendPointerHoverToParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)(bool)>(
    &::UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_sendPointerHoverToParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65948a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "set_sendPointerHoverToParent", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::InputSystemUIInputModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::InputSystemUIInputModule::*)()>(&::UnityEngine::InputSystem::UI::InputSystemUIInputModule::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x65948b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { ".ctor", {}, {} })));
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
  this->___m_XRTrackingOrigin = value;
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
  this->___m_ActionsAsset = value;
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
  this->___m_PointAction = value;
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
  this->___m_MoveAction = value;
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
  this->___m_SubmitAction = value;
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
  this->___m_CancelAction = value;
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
  this->___m_LeftClickAction = value;
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
  this->___m_MiddleClickAction = value;
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
  this->___m_RightClickAction = value;
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
  this->___m_ScrollWheelAction = value;
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
  this->___m_TrackedDevicePositionAction = value;
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
  this->___m_TrackedDeviceOrientationAction = value;
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
constexpr ::UnityEngine::InputSystem::UI::InputSystemUIInputModule_CursorLockBehavior& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_CursorLockBehavior() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CursorLockBehavior;
}
constexpr ::UnityEngine::InputSystem::UI::InputSystemUIInputModule_CursorLockBehavior const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_CursorLockBehavior() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CursorLockBehavior;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_CursorLockBehavior(::UnityEngine::InputSystem::UI::InputSystemUIInputModule_CursorLockBehavior value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CursorLockBehavior = value;
}
constexpr float_t& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_ScrollDeltaPerTick() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollDeltaPerTick;
}
constexpr float_t const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_ScrollDeltaPerTick() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollDeltaPerTick;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_ScrollDeltaPerTick(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScrollDeltaPerTick = value;
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
constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnPointDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnPointDelegate;
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnPointDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnPointDelegate;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_OnPointDelegate(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnPointDelegate = value;
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnMoveDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnMoveDelegate;
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnMoveDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnMoveDelegate;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_OnMoveDelegate(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnMoveDelegate = value;
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnSubmitCancelDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnSubmitCancelDelegate;
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* const&
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnSubmitCancelDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnSubmitCancelDelegate;
}
constexpr void
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_OnSubmitCancelDelegate(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnSubmitCancelDelegate = value;
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnLeftClickDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnLeftClickDelegate;
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* const&
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnLeftClickDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnLeftClickDelegate;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_OnLeftClickDelegate(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnLeftClickDelegate = value;
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnRightClickDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnRightClickDelegate;
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* const&
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnRightClickDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnRightClickDelegate;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_OnRightClickDelegate(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnRightClickDelegate = value;
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnMiddleClickDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnMiddleClickDelegate;
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* const&
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnMiddleClickDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnMiddleClickDelegate;
}
constexpr void
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_OnMiddleClickDelegate(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnMiddleClickDelegate = value;
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnScrollWheelDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnScrollWheelDelegate;
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* const&
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnScrollWheelDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnScrollWheelDelegate;
}
constexpr void
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_OnScrollWheelDelegate(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnScrollWheelDelegate = value;
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*&
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnTrackedDevicePositionDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnTrackedDevicePositionDelegate;
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* const&
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnTrackedDevicePositionDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnTrackedDevicePositionDelegate;
}
constexpr void
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_OnTrackedDevicePositionDelegate(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnTrackedDevicePositionDelegate = value;
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*&
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnTrackedDeviceOrientationDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnTrackedDeviceOrientationDelegate;
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* const&
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnTrackedDeviceOrientationDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnTrackedDeviceOrientationDelegate;
}
constexpr void
UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_OnTrackedDeviceOrientationDelegate(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnTrackedDeviceOrientationDelegate = value;
}
constexpr ::System::Action_1<::System::Object*>*& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnControlsChangedDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnControlsChangedDelegate;
}
constexpr ::System::Action_1<::System::Object*>* const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_OnControlsChangedDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnControlsChangedDelegate;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_OnControlsChangedDelegate(::System::Action_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnControlsChangedDelegate = value;
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
constexpr ::UnityEngine::InputSystem::UI::SubmitCancelModel& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_SubmitCancelState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubmitCancelState;
}
constexpr ::UnityEngine::InputSystem::UI::SubmitCancelModel const& UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_get_m_SubmitCancelState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SubmitCancelState;
}
constexpr void UnityEngine::InputSystem::UI::InputSystemUIInputModule::__cordl_internal_set_m_SubmitCancelState(::UnityEngine::InputSystem::UI::SubmitCancelModel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SubmitCancelState = value;
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
  this->___m_LocalMultiPlayerRoot = value;
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::setStaticF_defaultActions(::UnityEngine::InputSystem::DefaultInputActions* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::DefaultInputActions*, "defaultActions", ::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(
      std::forward<::UnityEngine::InputSystem::DefaultInputActions*>(value));
}
inline ::UnityEngine::InputSystem::DefaultInputActions* UnityEngine::InputSystem::UI::InputSystemUIInputModule::getStaticF_defaultActions() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::DefaultInputActions*, "defaultActions", ::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>();
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::setStaticF_s_InputActionReferenceCounts(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::UI::InputSystemUIInputModule_InputActionReferenceState>* value) {
  ::cordl_internals::setStaticField<
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::UI::InputSystemUIInputModule_InputActionReferenceState>*,
      "s_InputActionReferenceCounts", ::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::UI::InputSystemUIInputModule_InputActionReferenceState>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::UI::InputSystemUIInputModule_InputActionReferenceState>*
UnityEngine::InputSystem::UI::InputSystemUIInputModule::getStaticF_s_InputActionReferenceCounts() {
  return ::cordl_internals::getStaticField<
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputAction*, ::UnityEngine::InputSystem::UI::InputSystemUIInputModule_InputActionReferenceState>*,
      "s_InputActionReferenceCounts", ::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>();
}
inline bool UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_deselectOnBackgroundClick() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_deselectOnBackgroundClick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_deselectOnBackgroundClick(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "set_deselectOnBackgroundClick", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::UI::UIPointerBehavior UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_pointerBehavior() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_pointerBehavior", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::UI::UIPointerBehavior>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_pointerBehavior(::UnityEngine::InputSystem::UI::UIPointerBehavior value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                         { "set_pointerBehavior", {}, { ::i2c::type_of<::UnityEngine::InputSystem::UI::UIPointerBehavior>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::UI::InputSystemUIInputModule_CursorLockBehavior UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_cursorLockBehavior() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_cursorLockBehavior", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::UI::InputSystemUIInputModule_CursorLockBehavior>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_cursorLockBehavior(::UnityEngine::InputSystem::UI::InputSystemUIInputModule_CursorLockBehavior value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                           { "set_cursorLockBehavior", {}, { ::i2c::type_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule_CursorLockBehavior>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_localMultiPlayerRoot() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_localMultiPlayerRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_localMultiPlayerRoot(::UnityEngine::GameObject* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                         { "set_localMultiPlayerRoot", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_scrollDeltaPerTick() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_scrollDeltaPerTick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_scrollDeltaPerTick(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "set_scrollDeltaPerTick", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::ActivateModule() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::UI::InputSystemUIInputModule::IsPointerOverGameObject(int32_t pointerOrTouchId) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pointerOrTouchId);
}
inline ::UnityEngine::EventSystems::RaycastResult UnityEngine::InputSystem::UI::InputSystemUIInputModule::GetLastRaycastResult(int32_t pointerOrTouchId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "GetLastRaycastResult", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::RaycastResult>(this, ___internal_method, pointerOrTouchId);
}
inline ::UnityEngine::EventSystems::RaycastResult UnityEngine::InputSystem::UI::InputSystemUIInputModule::PerformRaycast(::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                         { "PerformRaycast", {}, { ::i2c::type_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::RaycastResult>(this, ___internal_method, eventData);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointer(::by_ref<::UnityEngine::InputSystem::UI::PointerModel> state) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                         { "ProcessPointer", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::UI::PointerModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline bool UnityEngine::InputSystem::UI::InputSystemUIInputModule::PointerShouldIgnoreTransform(::UnityEngine::Transform* t) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                         { "PointerShouldIgnoreTransform", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointerMovement(::by_ref<::UnityEngine::InputSystem::UI::PointerModel> pointer,
                                                                                           ::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                       { "ProcessPointerMovement",
                                         {},
                                         { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::UI::PointerModel>>(), ::i2c::type_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointer, eventData);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointerMovement(::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData,
                                                                                           ::UnityEngine::GameObject* currentPointerTarget) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                          { "ProcessPointerMovement", {}, { ::i2c::type_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(), ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData, currentPointerTarget);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointerButton(::by_ref<::UnityEngine::InputSystem::UI::PointerModel_ButtonState> button,
                                                                                         ::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
          { "ProcessPointerButton", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::UI::PointerModel_ButtonState>>(), ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, eventData);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointerButtonDrag(::by_ref<::UnityEngine::InputSystem::UI::PointerModel_ButtonState> button,
                                                                                             ::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                          { "ProcessPointerButtonDrag",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::UI::PointerModel_ButtonState>>(), ::i2c::type_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, eventData);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessPointerScroll(::by_ref<::UnityEngine::InputSystem::UI::PointerModel> pointer,
                                                                                         ::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
          { "ProcessPointerScroll", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::UI::PointerModel>>(), ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pointer, eventData);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::ProcessNavigation(::by_ref<::UnityEngine::InputSystem::UI::NavigationModel> navigationState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                           { "ProcessNavigation", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::UI::NavigationModel>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, navigationState);
}
inline bool UnityEngine::InputSystem::UI::InputSystemUIInputModule::IsMoveAllowed(::UnityEngine::EventSystems::AxisEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                         { "IsMoveAllowed", {}, { ::i2c::type_of<::UnityEngine::EventSystems::AxisEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, eventData);
}
inline float_t UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_moveRepeatDelay() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_moveRepeatDelay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_moveRepeatDelay(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "set_moveRepeatDelay", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_moveRepeatRate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_moveRepeatRate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_moveRepeatRate(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "set_moveRepeatRate", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_explictlyIgnoreFocus() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_explictlyIgnoreFocus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_shouldIgnoreFocus() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_shouldIgnoreFocus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_repeatRate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_repeatRate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_repeatRate(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "set_repeatRate", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_repeatDelay() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_repeatDelay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_repeatDelay(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "set_repeatDelay", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_xrTrackingOrigin() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_xrTrackingOrigin", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_xrTrackingOrigin(::UnityEngine::Transform* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "set_xrTrackingOrigin", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_trackedDeviceDragThresholdMultiplier() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_trackedDeviceDragThresholdMultiplier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_trackedDeviceDragThresholdMultiplier(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                         { "set_trackedDeviceDragThresholdMultiplier", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::SwapAction(::by_ref<::UnityEngine::InputSystem::InputActionReference*> property,
                                                                               ::UnityEngine::InputSystem::InputActionReference* newValue, bool actionsHooked,
                                                                               ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* actionCallback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                              { "SwapAction",
                                                {},
                                                { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionReference*>>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>(),
                                                  ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property, newValue, actionsHooked, actionCallback);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_point() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_point", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_point(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                         { "set_point", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_scrollWheel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_scrollWheel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_scrollWheel(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                         { "set_scrollWheel", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_leftClick() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_leftClick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_leftClick(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                         { "set_leftClick", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_middleClick() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_middleClick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_middleClick(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                         { "set_middleClick", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_rightClick() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_rightClick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_rightClick(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                         { "set_rightClick", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_move() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_move", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_move(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                         { "set_move", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_submit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_submit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_submit(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                         { "set_submit", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_cancel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_cancel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_cancel(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                         { "set_cancel", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_trackedDeviceOrientation() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_trackedDeviceOrientation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_trackedDeviceOrientation(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                           { "set_trackedDeviceOrientation", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_trackedDevicePosition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_trackedDevicePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_trackedDevicePosition(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                           { "set_trackedDevicePosition", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::AssignDefaultActions() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "AssignDefaultActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::UnassignActions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "UnassignActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_trackedDeviceSelect() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_trackedDeviceSelect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_trackedDeviceSelect(::UnityEngine::InputSystem::InputActionReference* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                         { "set_trackedDeviceSelect", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::Awake() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnDestroy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnDisable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::ResetPointers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "ResetPointers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::UI::InputSystemUIInputModule::HasNoActions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "HasNoActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::EnableAllActions() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "EnableAllActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::DisableAllActions() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "DisableAllActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::EnableInputAction(::UnityEngine::InputSystem::InputActionReference* inputActionReference) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                         { "EnableInputAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputActionReference);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::TryDisableInputAction(::UnityEngine::InputSystem::InputActionReference* inputActionReference, bool isComponentDisabling) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                           { "TryDisableInputAction", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputActionReference, isComponentDisabling);
}
inline int32_t UnityEngine::InputSystem::UI::InputSystemUIInputModule::GetPointerStateIndexFor(int32_t pointerOrTouchId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "GetPointerStateIndexFor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, pointerOrTouchId);
}
inline ::by_ref<::UnityEngine::InputSystem::UI::PointerModel> UnityEngine::InputSystem::UI::InputSystemUIInputModule::GetPointerStateForIndex(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "GetPointerStateForIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::InputSystem::UI::PointerModel>>(this, ___internal_method, index);
}
inline int32_t UnityEngine::InputSystem::UI::InputSystemUIInputModule::GetDisplayIndexFor(::UnityEngine::InputSystem::InputControl* control) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                         { "GetDisplayIndexFor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control);
}
inline int32_t UnityEngine::InputSystem::UI::InputSystemUIInputModule::GetPointerStateIndexFor(::by_ref<::UnityEngine::InputSystem::InputAction_CallbackContext> context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                           { "GetPointerStateIndexFor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputAction_CallbackContext>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, context);
}
inline int32_t UnityEngine::InputSystem::UI::InputSystemUIInputModule::GetPointerStateIndexFor(::UnityEngine::InputSystem::InputControl* control, bool createIfNotExists) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                           { "GetPointerStateIndexFor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, createIfNotExists);
}
inline int32_t UnityEngine::InputSystem::UI::InputSystemUIInputModule::AllocatePointer(int32_t pointerId, int32_t displayIndex, int32_t touchId,
                                                                                       ::UnityEngine::InputSystem::UI::UIPointerType pointerType, ::UnityEngine::InputSystem::InputControl* control,
                                                                                       ::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::InputControl* touchControl) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                           { "AllocatePointer",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::InputSystem::UI::UIPointerType>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(),
                                                               ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, pointerId, displayIndex, touchId, pointerType, control, device, touchControl);
}
inline bool UnityEngine::InputSystem::UI::InputSystemUIInputModule::SendPointerExitEventsAndRemovePointer(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "SendPointerExitEventsAndRemovePointer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
inline bool UnityEngine::InputSystem::UI::InputSystemUIInputModule::RemovePointerAtIndex(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "RemovePointerAtIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::PurgeStalePointers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "PurgeStalePointers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::UI::InputSystemUIInputModule::HaveControlForDevice(::UnityEngine::InputSystem::InputDevice* device,
                                                                                         ::UnityEngine::InputSystem::InputActionReference* actionReference) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                          { "HaveControlForDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, device, actionReference);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnPointCallback(::UnityEngine::InputSystem::InputAction_CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                         { "OnPointCallback", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline bool UnityEngine::InputSystem::UI::InputSystemUIInputModule::IgnoreNextClick(::by_ref<::UnityEngine::InputSystem::InputAction_CallbackContext> context, bool wasPressed) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                              { "IgnoreNextClick", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputAction_CallbackContext>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, wasPressed);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnLeftClickCallback(::UnityEngine::InputSystem::InputAction_CallbackContext context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                           { "OnLeftClickCallback", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnRightClickCallback(::UnityEngine::InputSystem::InputAction_CallbackContext context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                           { "OnRightClickCallback", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnMiddleClickCallback(::UnityEngine::InputSystem::InputAction_CallbackContext context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                           { "OnMiddleClickCallback", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline bool UnityEngine::InputSystem::UI::InputSystemUIInputModule::CheckForRemovedDevice(::by_ref<::UnityEngine::InputSystem::InputAction_CallbackContext> context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                           { "CheckForRemovedDevice", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputAction_CallbackContext>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnScrollCallback(::UnityEngine::InputSystem::InputAction_CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                         { "OnScrollCallback", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnMoveCallback(::UnityEngine::InputSystem::InputAction_CallbackContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                         { "OnMoveCallback", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnSubmitCancelCallback(::UnityEngine::InputSystem::InputAction_CallbackContext context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                           { "OnSubmitCancelCallback", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnTrackedDeviceOrientationCallback(::UnityEngine::InputSystem::InputAction_CallbackContext context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                           { "OnTrackedDeviceOrientationCallback", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnTrackedDevicePositionCallback(::UnityEngine::InputSystem::InputAction_CallbackContext context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                           { "OnTrackedDevicePositionCallback", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputAction_CallbackContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::OnControlsChanged(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "OnControlsChanged", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::FilterPointerStatesByType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "FilterPointerStatesByType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::Process() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::UI::InputSystemUIInputModule::ConvertUIToolkitPointerId(::UnityEngine::EventSystems::PointerEventData* sourcePointerData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sourcePointerData);
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::UI::InputSystemUIInputModule::ConvertPointerEventScrollDeltaToTicks(::UnityEngine::Vector2 scrollDelta) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, scrollDelta);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::HookActions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "HookActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::UnhookActions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "UnhookActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::SetActionCallbacks(bool install) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "SetActionCallbacks", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, install);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::SetActionCallback(::UnityEngine::InputSystem::InputActionReference* actionReference,
                                                                                      ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* callback, bool install) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                           { "SetActionCallback",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>(),
                                                               ::i2c::type_of<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, actionReference, callback, install);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference>
UnityEngine::InputSystem::UI::InputSystemUIInputModule::UpdateReferenceForNewAsset(::UnityEngine::InputSystem::InputActionReference* actionReference) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                           { "UpdateReferenceForNewAsset", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionReference*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionReference>>(this, ___internal_method, actionReference);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_actionsAsset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_actionsAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_actionsAsset(::UnityEngine::InputSystem::InputActionAsset* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(),
                                                                                         { "set_actionsAsset", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::UI::InputSystemUIInputModule::get_sendPointerHoverToParent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "get_sendPointerHoverToParent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::set_sendPointerHoverToParent(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { "set_sendPointerHoverToParent", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::UI::InputSystemUIInputModule::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::UI::InputSystemUIInputModule* UnityEngine::InputSystem::UI::InputSystemUIInputModule::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::UI::InputSystemUIInputModule*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::UI::InputSystemUIInputModule::InputSystemUIInputModule() {}
