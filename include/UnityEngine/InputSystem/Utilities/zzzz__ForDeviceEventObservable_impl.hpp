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
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice::*)(
    ::System::Type*, ::UnityEngine::InputSystem::InputDevice*, ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*)>(
    &::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6501704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(),
                                                                                               ::i2c::type_of<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice.OnCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice::*)()>(
    &::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice::OnCompleted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6501710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice*>(), { "OnCompleted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice.OnError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice::*)(::System::Exception*)>(
    &::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice::OnError)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6501714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice*>(),
                                                                                           { "OnError", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice.OnNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice::OnNext)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6501770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice*>(),
                                                                                           { "OnNext", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*& UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice::__cordl_internal_get_m_Observer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Observer;
}
constexpr ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* const&
UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice::__cordl_internal_get_m_Observer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Observer;
}
constexpr void
UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice::__cordl_internal_set_m_Observer(::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Observer = value;
}
constexpr ::UnityEngine::InputSystem::InputDevice*& UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice::__cordl_internal_get_m_Device() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Device;
}
constexpr ::UnityEngine::InputSystem::InputDevice* const& UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice::__cordl_internal_get_m_Device() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Device;
}
constexpr void UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice::__cordl_internal_set_m_Device(::UnityEngine::InputSystem::InputDevice* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Device = value;
}
constexpr ::System::Type*& UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice::__cordl_internal_get_m_DeviceType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceType;
}
constexpr ::System::Type* const& UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice::__cordl_internal_get_m_DeviceType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceType;
}
constexpr void UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice::__cordl_internal_set_m_DeviceType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DeviceType = value;
}
inline void UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice::_ctor(::System::Type* deviceType, ::UnityEngine::InputSystem::InputDevice* device,
                                                                                           ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* observer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(),
                                                                                             ::i2c::type_of<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deviceType, device, observer);
}
inline void UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice::OnCompleted() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice*>(), { "OnCompleted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice::OnError(::System::Exception* error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice*>(), { "OnError", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice::OnNext(::UnityEngine::InputSystem::LowLevel::InputEventPtr value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice*>(),
                                                                                         { "OnNext", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice*
UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice::New_ctor(::System::Type* deviceType, ::UnityEngine::InputSystem::InputDevice* device,
                                                                                  ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* observer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice*>(deviceType, device, observer));
}
/// @brief Convert operator to "::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
constexpr UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice::operator ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*() noexcept {
  return static_cast<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
constexpr ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*
UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice::i___System__IObserver_1___UnityEngine__InputSystem__LowLevel__InputEventPtr_() noexcept {
  return static_cast<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable_ForDevice::ForDeviceEventObservable_ForDevice() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::*)(
    ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*, ::System::Type*, ::UnityEngine::InputSystem::InputDevice*)>(
    &::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6501604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>(),
                                                                                               ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable.Subscribe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IDisposable* (::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::*)(::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*)>(
        &::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::Subscribe)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6501610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable*>(),
                                                             { "Subscribe", {}, { ::i2c::type_of<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*& UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::__cordl_internal_get_m_Source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Source;
}
constexpr ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* const& UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::__cordl_internal_get_m_Source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Source;
}
constexpr void UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::__cordl_internal_set_m_Source(::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Source = value;
}
constexpr ::UnityEngine::InputSystem::InputDevice*& UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::__cordl_internal_get_m_Device() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Device;
}
constexpr ::UnityEngine::InputSystem::InputDevice* const& UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::__cordl_internal_get_m_Device() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Device;
}
constexpr void UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::__cordl_internal_set_m_Device(::UnityEngine::InputSystem::InputDevice* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Device = value;
}
constexpr ::System::Type*& UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::__cordl_internal_get_m_DeviceType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceType;
}
constexpr ::System::Type* const& UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::__cordl_internal_get_m_DeviceType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeviceType;
}
constexpr void UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::__cordl_internal_set_m_DeviceType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DeviceType = value;
}
inline void UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::_ctor(::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* source, ::System::Type* deviceType,
                                                                                 ::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>(),
                                                                                             ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, deviceType, device);
}
inline ::System::IDisposable* UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::Subscribe(::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* observer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable*>(),
                                                           { "Subscribe", {}, { ::i2c::type_of<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(this, ___internal_method, observer);
}
inline ::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable*
UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::New_ctor(::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* source, ::System::Type* deviceType,
                                                                        ::UnityEngine::InputSystem::InputDevice* device) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable*>(source, deviceType, device));
}
/// @brief Convert operator to "::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
constexpr UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::operator ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*() noexcept {
  return static_cast<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
constexpr ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*
UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::i___System__IObservable_1___UnityEngine__InputSystem__LowLevel__InputEventPtr_() noexcept {
  return static_cast<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::ForDeviceEventObservable::ForDeviceEventObservable() {}
