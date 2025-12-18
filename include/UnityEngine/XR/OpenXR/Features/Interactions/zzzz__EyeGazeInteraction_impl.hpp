#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Interactions/EyeGazeInteraction.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_impl.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__OpenXRDevice_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/Interactions/zzzz__EyeGazeInteraction_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/Interactions/zzzz__EyeGazeInteraction_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__PoseControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice.get_pose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::Input::PoseControl* (
    ::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice::get_pose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x682e618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice*>::get(),
                                                 "get_pose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice.set_pose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice::*)(
    ::UnityEngine::XR::OpenXR::Input::PoseControl*)>(&::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice::set_pose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x682e620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice*>::get(), "set_pose",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Input::PoseControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice.FinishSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice::FinishSetup)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x682e628;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x682e6a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl*& UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice::__cordl_internal_get__pose_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pose_k__BackingField;
}
constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl* const& UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice::__cordl_internal_get__pose_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pose_k__BackingField;
}
constexpr void UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice::__cordl_internal_set__pose_k__BackingField(::UnityEngine::XR::OpenXR::Input::PoseControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pose_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::XR::OpenXR::Input::PoseControl* UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice::get_pose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice*>::get(),
                                               "get_pose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Input::PoseControl*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice::set_pose(::UnityEngine::XR::OpenXR::Input::PoseControl* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice*>::get(), "set_pose",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::OpenXR::Input::PoseControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice::FinishSetup() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice* UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction_EyeGazeDevice::EyeGazeInteraction_EyeGazeDevice() {}
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction.OnInstanceCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction::*)(uint64_t)>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction::OnInstanceCreate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x682dd40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction.RegisterDeviceLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction::RegisterDeviceLayout)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x682ddac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction.UnregisterDeviceLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction::UnregisterDeviceLayout)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x682df0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction.GetInteractionProfileType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_InteractionProfileType (
    ::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction::*)()>(&::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction::GetInteractionProfileType)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x682df7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction.GetDeviceLayoutName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction::GetDeviceLayoutName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x682e030;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction.RegisterActionMapsWithRuntime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction::RegisterActionMapsWithRuntime)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x682e074;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction::*)()>(
    &::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x682e5bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction::OnInstanceCreate(uint64_t instance) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, instance);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction::RegisterDeviceLayout() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction::UnregisterDeviceLayout() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_InteractionProfileType UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction::GetInteractionProfileType() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_InteractionProfileType, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction::GetDeviceLayoutName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction::RegisterActionMapsWithRuntime() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction* UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Interactions::EyeGazeInteraction::EyeGazeInteraction() {}
