#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/PanelInputModule.hpp"
#include "GlobalNamespace/zzzz__OVRInput_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__OVRInputModule_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__PanelInputModule_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Interface_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__PanelInputModule_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__PanelRaycaster_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerInputModule_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer::*)(
    ::UnityEngine::EventSystems::RaycastResult, ::UnityEngine::EventSystems::RaycastResult)>(&::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer::Compare)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5840d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer*>::get(),
                                                 "Compare", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::RaycastResult>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::RaycastResult>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5840d18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int32_t Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer::Compare(::UnityEngine::EventSystems::RaycastResult lhs, ::UnityEngine::EventSystems::RaycastResult rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer*>::get(),
                                               "Compare", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::RaycastResult>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::RaycastResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, lhs, rhs);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer* Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::EventSystems::RaycastResult>"
constexpr Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer::operator ::System::Collections::Generic::IComparer_1<::UnityEngine::EventSystems::RaycastResult>*() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::EventSystems::RaycastResult>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::EventSystems::RaycastResult>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::EventSystems::RaycastResult>*
Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer::i___System__Collections__Generic__IComparer_1___UnityEngine__EventSystems__RaycastResult_() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::EventSystems::RaycastResult>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule_RaycastComparer::PanelInputModule_RaycastComparer() {}
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule.RegisterRaycaster
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::RegisterRaycaster)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x583fb74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get(), "RegisterRaycaster", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule.UnregisterRaycaster
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::UnregisterRaycaster)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x583fc90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get(), "UnregisterRaycaster", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule.SetDebugInterface
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::SetDebugInterface)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x583fd6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get(), "SetDebugInterface", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::Awake)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x583fd74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule.ShouldActivateModule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::ShouldActivateModule)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x583fe20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule.IsModuleSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::IsModuleSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x583fe28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::Update)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x583fe30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get(), "Update",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule.Raycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::*)(
    ::UnityEngine::EventSystems::PointerEventData*, ::ByRef<::UnityEngine::EventSystems::RaycastResult>)>(&::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::Raycast)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x583fec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get(), "Raycast", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::EventSystems::RaycastResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule.GetMouseStateFromRaycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::PointerInputModule_MouseState* (
    ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::*)(::GlobalNamespace::OVRInput_Controller, ::UnityEngine::Transform*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::GetMouseStateFromRaycast)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x5840188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get(),
                                                 "GetMouseStateFromRaycast", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::Process)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x58407a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule.ComputeControllerState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::PointerEventData_FramePressState (*)(::GlobalNamespace::OVRInput_Controller)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::ComputeControllerState)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x58406d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get(), "ComputeControllerState",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule.ChooseBestController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRInput_Controller (*)(::GlobalNamespace::OVRInput_Controller)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::ChooseBestController)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5840878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get(), "ChooseBestController",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule.UpdateRayTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::*)(
    ::UnityEngine::Transform*, ::GlobalNamespace::OVRInput_Controller)>(&::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::UpdateRayTransform)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x58409a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get(), "UpdateRayTransform", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5840bd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface>& Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::__cordl_internal_get__debugInterface() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debugInterface;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface> const& Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::__cordl_internal_get__debugInterface() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debugInterface;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::__cordl_internal_set__debugInterface(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____debugInterface)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRInput_Controller& Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::__cordl_internal_get__controller() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controller;
}
constexpr ::GlobalNamespace::OVRInput_Controller const& Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::__cordl_internal_get__controller() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controller;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::__cordl_internal_set__controller(::GlobalNamespace::OVRInput_Controller value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____controller = value;
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::setStaticF_Processing(bool value) {
  ::cordl_internals::setStaticField<bool, "Processing", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get>(
      std::forward<bool>(value));
}
inline bool Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::getStaticF_Processing() {
  return ::cordl_internals::getStaticField<bool, "Processing", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get>();
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::setStaticF__handState(::GlobalNamespace::OVRPlugin_HandState value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRPlugin_HandState, "_handState",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get>(
      std::forward<::GlobalNamespace::OVRPlugin_HandState>(value));
}
inline ::GlobalNamespace::OVRPlugin_HandState Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::getStaticF__handState() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRPlugin_HandState, "_handState",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get>();
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::setStaticF__raycasters(
    ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster>>*, "_raycasters",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster>>*
Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::getStaticF__raycasters() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster>>*, "_raycasters",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get>();
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::setStaticF__comparer(::System::Collections::Generic::IComparer_1<::UnityEngine::EventSystems::RaycastResult>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IComparer_1<::UnityEngine::EventSystems::RaycastResult>*, "_comparer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get>(
      std::forward<::System::Collections::Generic::IComparer_1<::UnityEngine::EventSystems::RaycastResult>*>(value));
}
inline ::System::Collections::Generic::IComparer_1<::UnityEngine::EventSystems::RaycastResult>* Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::getStaticF__comparer() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IComparer_1<::UnityEngine::EventSystems::RaycastResult>*, "_comparer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get>();
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::RegisterRaycaster(::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster* raycaster) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get(), "RegisterRaycaster", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, raycaster);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::UnregisterRaycaster(::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster* raycaster) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get(), "UnregisterRaycaster", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, raycaster);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::SetDebugInterface(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface* debugInterface) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get(), "SetDebugInterface", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, debugInterface);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::Awake() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::ShouldActivateModule() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::IsModuleSupported() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::Update() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get(), "Update",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::Raycast(::UnityEngine::EventSystems::PointerEventData* data, ::ByRef<::UnityEngine::EventSystems::RaycastResult> raycast) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get(), "Raycast", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::EventSystems::RaycastResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, data, raycast);
}
inline ::UnityEngine::EventSystems::PointerInputModule_MouseState*
Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::GetMouseStateFromRaycast(::GlobalNamespace::OVRInput_Controller controller, ::UnityEngine::Transform* rayOrigin) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get(),
                                               "GetMouseStateFromRaycast", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerInputModule_MouseState*, false>(this, ___internal_method, controller, rayOrigin);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::Process() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::EventSystems::PointerEventData_FramePressState
Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::ComputeControllerState(::GlobalNamespace::OVRInput_Controller controller) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get(), "ComputeControllerState",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerEventData_FramePressState, false>(nullptr, ___internal_method, controller);
}
inline ::GlobalNamespace::OVRInput_Controller Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::ChooseBestController(::GlobalNamespace::OVRInput_Controller previousController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get(), "ChooseBestController", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_Controller, false>(nullptr, ___internal_method, previousController);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::UpdateRayTransform(::UnityEngine::Transform* rayTransform, ::GlobalNamespace::OVRInput_Controller controller) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get(), "UpdateRayTransform", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRInput_Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rayTransform, controller);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule* Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::PanelInputModule::PanelInputModule() {}
