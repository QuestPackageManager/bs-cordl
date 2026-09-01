#pragma once
// IWYU pragma private; include "GlobalNamespace\AdbCommandReceiver.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_impl.hpp"
#include "GlobalNamespace/zzzz__AdbCommandReceiver_def.hpp"
#include "GlobalNamespace/zzzz__AdbCommandReceiver_def.hpp"
#include "GlobalNamespace/zzzz__TerminalController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaObject_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AdbCommandReceiver_CallbackProxy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AdbCommandReceiver_CallbackProxy::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::AdbCommandReceiver_CallbackProxy::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x32cb4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdbCommandReceiver_CallbackProxy*>(), { ".ctor", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdbCommandReceiver_CallbackProxy.onCommandReceived
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AdbCommandReceiver_CallbackProxy::*)(::StringW)>(
    &::GlobalNamespace::AdbCommandReceiver_CallbackProxy::onCommandReceived)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x32cb730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdbCommandReceiver_CallbackProxy*>(), { "onCommandReceived", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::AdbCommandReceiver_CallbackProxy::__cordl_internal_get__onCommandReceived() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onCommandReceived;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::AdbCommandReceiver_CallbackProxy::__cordl_internal_get__onCommandReceived() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onCommandReceived;
}
constexpr void GlobalNamespace::AdbCommandReceiver_CallbackProxy::__cordl_internal_set__onCommandReceived(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onCommandReceived = value;
}
inline void GlobalNamespace::AdbCommandReceiver_CallbackProxy::_ctor(::System::Action_1<::StringW>* onCommandReceived) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdbCommandReceiver_CallbackProxy*>(), { ".ctor", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onCommandReceived);
}
inline void GlobalNamespace::AdbCommandReceiver_CallbackProxy::onCommandReceived(::StringW cmd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdbCommandReceiver_CallbackProxy*>(), { "onCommandReceived", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline ::GlobalNamespace::AdbCommandReceiver_CallbackProxy* GlobalNamespace::AdbCommandReceiver_CallbackProxy::New_ctor(::System::Action_1<::StringW>* onCommandReceived) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AdbCommandReceiver_CallbackProxy*>(onCommandReceived));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AdbCommandReceiver_CallbackProxy::AdbCommandReceiver_CallbackProxy() {}
//  Writing Method size for method: ::GlobalNamespace::AdbCommandReceiver.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AdbCommandReceiver::*)()>(&::GlobalNamespace::AdbCommandReceiver::Initialize)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0x32caf64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdbCommandReceiver*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdbCommandReceiver.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AdbCommandReceiver::*)()>(&::GlobalNamespace::AdbCommandReceiver::Dispose)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x32cb56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdbCommandReceiver*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdbCommandReceiver.OnCommandReceived
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AdbCommandReceiver::*)(::StringW)>(&::GlobalNamespace::AdbCommandReceiver::OnCommandReceived)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x32cb67c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdbCommandReceiver*>(), { "OnCommandReceived", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AdbCommandReceiver._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AdbCommandReceiver::*)()>(&::GlobalNamespace::AdbCommandReceiver::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32cb72c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdbCommandReceiver*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::TerminalController*& GlobalNamespace::AdbCommandReceiver::__cordl_internal_get__terminalController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terminalController;
}
constexpr ::GlobalNamespace::TerminalController* const& GlobalNamespace::AdbCommandReceiver::__cordl_internal_get__terminalController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terminalController;
}
constexpr void GlobalNamespace::AdbCommandReceiver::__cordl_internal_set__terminalController(::GlobalNamespace::TerminalController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____terminalController = value;
}
constexpr ::UnityEngine::AndroidJavaObject*& GlobalNamespace::AdbCommandReceiver::__cordl_internal_get__receiver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receiver;
}
constexpr ::UnityEngine::AndroidJavaObject* const& GlobalNamespace::AdbCommandReceiver::__cordl_internal_get__receiver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____receiver;
}
constexpr void GlobalNamespace::AdbCommandReceiver::__cordl_internal_set__receiver(::UnityEngine::AndroidJavaObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____receiver = value;
}
constexpr ::UnityEngine::AndroidJavaObject*& GlobalNamespace::AdbCommandReceiver::__cordl_internal_get__intentFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intentFilter;
}
constexpr ::UnityEngine::AndroidJavaObject* const& GlobalNamespace::AdbCommandReceiver::__cordl_internal_get__intentFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intentFilter;
}
constexpr void GlobalNamespace::AdbCommandReceiver::__cordl_internal_set__intentFilter(::UnityEngine::AndroidJavaObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____intentFilter = value;
}
constexpr ::UnityEngine::AndroidJavaObject*& GlobalNamespace::AdbCommandReceiver::__cordl_internal_get__context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____context;
}
constexpr ::UnityEngine::AndroidJavaObject* const& GlobalNamespace::AdbCommandReceiver::__cordl_internal_get__context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____context;
}
constexpr void GlobalNamespace::AdbCommandReceiver::__cordl_internal_set__context(::UnityEngine::AndroidJavaObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____context = value;
}
constexpr ::GlobalNamespace::AdbCommandReceiver_CallbackProxy*& GlobalNamespace::AdbCommandReceiver::__cordl_internal_get__callbackProxy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callbackProxy;
}
constexpr ::GlobalNamespace::AdbCommandReceiver_CallbackProxy* const& GlobalNamespace::AdbCommandReceiver::__cordl_internal_get__callbackProxy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callbackProxy;
}
constexpr void GlobalNamespace::AdbCommandReceiver::__cordl_internal_set__callbackProxy(::GlobalNamespace::AdbCommandReceiver_CallbackProxy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____callbackProxy = value;
}
inline void GlobalNamespace::AdbCommandReceiver::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdbCommandReceiver*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AdbCommandReceiver::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdbCommandReceiver*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AdbCommandReceiver::OnCommandReceived(::StringW cmd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdbCommandReceiver*>(), { "OnCommandReceived", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void GlobalNamespace::AdbCommandReceiver::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AdbCommandReceiver*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AdbCommandReceiver* GlobalNamespace::AdbCommandReceiver::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AdbCommandReceiver*>());
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr GlobalNamespace::AdbCommandReceiver::operator ::Zenject::IInitializable*() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* GlobalNamespace::AdbCommandReceiver::i___Zenject__IInitializable() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::AdbCommandReceiver::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::AdbCommandReceiver::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AdbCommandReceiver::AdbCommandReceiver() {}
