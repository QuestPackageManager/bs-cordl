#pragma once
// IWYU pragma private; include "GlobalNamespace\XRSubsystemHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__XRSubsystemHelper_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystemDescriptor_def.hpp"
#include "UnityEngine/XR/zzzz__XRInputSubsystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XRSubsystemHelper.GetCurrentDisplaySubsystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<Il2CppObject* (*)()>(&::GlobalNamespace::XRSubsystemHelper::GetCurrentDisplaySubsystem)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x585d26c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::XRSubsystemHelper*>(), { "GetCurrentDisplaySubsystem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XRSubsystemHelper.GetCurrentDisplaySubsystemDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::XRDisplaySubsystemDescriptor* (*)()>(&::GlobalNamespace::XRSubsystemHelper::GetCurrentDisplaySubsystemDescriptor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x585d3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::XRSubsystemHelper*>(), { "GetCurrentDisplaySubsystemDescriptor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XRSubsystemHelper.GetCurrentInputSubsystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::XRInputSubsystem* (*)()>(&::GlobalNamespace::XRSubsystemHelper::GetCurrentInputSubsystem)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x585d518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::XRSubsystemHelper*>(), { "GetCurrentInputSubsystem", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::XRSubsystemHelper::setStaticF_s_displaySubsystems(::System::Collections::Generic::List_1<Il2CppObject*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<Il2CppObject*>*, "s_displaySubsystems", ::GlobalNamespace::XRSubsystemHelper*>(
      std::forward<::System::Collections::Generic::List_1<Il2CppObject*>*>(value));
}
inline ::System::Collections::Generic::List_1<Il2CppObject*>* GlobalNamespace::XRSubsystemHelper::getStaticF_s_displaySubsystems() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<Il2CppObject*>*, "s_displaySubsystems", ::GlobalNamespace::XRSubsystemHelper*>();
}
inline void GlobalNamespace::XRSubsystemHelper::setStaticF_s_displaySubsystemDescriptors(::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>*, "s_displaySubsystemDescriptors", ::GlobalNamespace::XRSubsystemHelper*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>* GlobalNamespace::XRSubsystemHelper::getStaticF_s_displaySubsystemDescriptors() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>*, "s_displaySubsystemDescriptors",
                                           ::GlobalNamespace::XRSubsystemHelper*>();
}
inline void GlobalNamespace::XRSubsystemHelper::setStaticF_s_inputSubsystems(::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>*, "s_inputSubsystems", ::GlobalNamespace::XRSubsystemHelper*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* GlobalNamespace::XRSubsystemHelper::getStaticF_s_inputSubsystems() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>*, "s_inputSubsystems", ::GlobalNamespace::XRSubsystemHelper*>();
}
inline Il2CppObject* GlobalNamespace::XRSubsystemHelper::GetCurrentDisplaySubsystem() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::XRSubsystemHelper*>(), { "GetCurrentDisplaySubsystem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<Il2CppObject*>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::XRDisplaySubsystemDescriptor* GlobalNamespace::XRSubsystemHelper::GetCurrentDisplaySubsystemDescriptor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::XRSubsystemHelper*>(), { "GetCurrentDisplaySubsystemDescriptor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::XRDisplaySubsystemDescriptor*>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::XRInputSubsystem* GlobalNamespace::XRSubsystemHelper::GetCurrentInputSubsystem() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::XRSubsystemHelper*>(), { "GetCurrentInputSubsystem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::XRInputSubsystem*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XRSubsystemHelper::XRSubsystemHelper() {}
