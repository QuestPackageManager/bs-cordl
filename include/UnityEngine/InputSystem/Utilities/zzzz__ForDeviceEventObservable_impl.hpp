#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/ForDeviceEventObservable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ForDeviceEventObservable_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ForDeviceEventObservable_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice::*)(
    ::System::Type*, ::UnityEngine::InputSystem::InputDevice*, ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*)>(
    &::UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x450b608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice.OnCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice::*)()>(
    &::UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice::OnCompleted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x450b644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice*>::get(),
                                                 "OnCompleted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice.OnError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice::*)(::System::Exception*)>(
    &::UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice::OnError)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x450b648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice*>::get(), "OnError",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice.OnNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice::*)(
    ::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice::OnNext)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x450b6a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice*>::get(), "OnNext",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
constexpr UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice::operator ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*() noexcept {
  return static_cast<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
constexpr ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*
UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice::i___System__IObserver_1___UnityEngine__InputSystem__LowLevel__InputEventPtr_() noexcept {
  return static_cast<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>(static_cast<void*>(this));
}
constexpr ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*& UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice::__cordl_internal_get_m_Observer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Observer;
}
constexpr ::cordl_internals::to_const_pointer<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> const&
UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice::__cordl_internal_get_m_Observer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Observer;
}
constexpr void
UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice::__cordl_internal_set_m_Observer(::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Observer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::InputDevice*& UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice::__cordl_internal_get_m_Device() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Device;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputDevice*> const&
UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice::__cordl_internal_get_m_Device() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Device;
}
constexpr void UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice::__cordl_internal_set_m_Device(::UnityEngine::InputSystem::InputDevice* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Device)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice::__cordl_internal_get_m_DeviceType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice::__cordl_internal_get_m_DeviceType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceType;
}
constexpr void UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice::__cordl_internal_set_m_DeviceType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DeviceType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice*
UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice::New_ctor(::System::Type* deviceType, ::UnityEngine::InputSystem::InputDevice* device,
                                                                                     ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* observer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice*>(deviceType, device, observer));
}
inline void UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice::_ctor(::System::Type* deviceType, ::UnityEngine::InputSystem::InputDevice* device,
                                                                                              ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* observer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deviceType, device, observer);
}
inline void UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice::OnCompleted() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice*>::get(),
                                               "OnCompleted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice::OnError(::System::Exception* error) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice*>::get(), "OnError",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline void UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice::OnNext(::UnityEngine::InputSystem::LowLevel::InputEventPtr value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice*>::get(), "OnNext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::__ForDeviceEventObservable__ForDevice::__ForDeviceEventObservable__ForDevice() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::*)(
    ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*, ::System::Type*, ::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x450b4e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable.Subscribe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IDisposable* (::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::*)(::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*)>(
        &::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::Subscribe)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x450b51c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable*>::get(), "Subscribe", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
constexpr UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::operator ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*() noexcept {
  return static_cast<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
constexpr ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*
UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::i___System__IObservable_1___UnityEngine__InputSystem__LowLevel__InputEventPtr_() noexcept {
  return static_cast<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>(static_cast<void*>(this));
}
constexpr ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*& UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::__cordl_internal_get_m_Source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Source;
}
constexpr ::cordl_internals::to_const_pointer<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> const&
UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::__cordl_internal_get_m_Source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Source;
}
constexpr void UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::__cordl_internal_set_m_Source(::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::InputDevice*& UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::__cordl_internal_get_m_Device() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Device;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputDevice*> const& UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::__cordl_internal_get_m_Device() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Device;
}
constexpr void UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::__cordl_internal_set_m_Device(::UnityEngine::InputSystem::InputDevice* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Device)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::__cordl_internal_get_m_DeviceType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::__cordl_internal_get_m_DeviceType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceType;
}
constexpr void UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::__cordl_internal_set_m_DeviceType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DeviceType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable*
UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::New_ctor(::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* source, ::System::Type* deviceType,
                                                                        ::UnityEngine::InputSystem::InputDevice* device) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable*>(source, deviceType, device));
}
inline void UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::_ctor(::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* source, ::System::Type* deviceType,
                                                                                 ::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, deviceType, device);
}
inline ::System::IDisposable* UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::Subscribe(::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* observer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable*>::get(), "Subscribe", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IDisposable*, false>(this, ___internal_method, observer);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::ForDeviceEventObservable() {}
