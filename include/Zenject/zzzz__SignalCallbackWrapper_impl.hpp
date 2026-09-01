#pragma once
// IWYU pragma private; include "Zenject\SignalCallbackWrapper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__SignalCallbackWrapper_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__SignalBindingBindInfo_def.hpp"
#include "Zenject/zzzz__SignalBus_def.hpp"
//  Writing Method size for method: ::Zenject::SignalCallbackWrapper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalCallbackWrapper::*)(::Zenject::SignalBindingBindInfo*, ::System::Action_1<::System::Object*>*, ::Zenject::SignalBus*)>(
    &::Zenject::SignalCallbackWrapper::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6e459dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Zenject::SignalCallbackWrapper*>(),
                         { ".ctor", {}, { ::i2c::type_of<::Zenject::SignalBindingBindInfo*>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::Zenject::SignalBus*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalCallbackWrapper.OnSignalFired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalCallbackWrapper::*)(::System::Object*)>(&::Zenject::SignalCallbackWrapper::OnSignalFired)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e45aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalCallbackWrapper*>(), { "OnSignalFired", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalCallbackWrapper.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalCallbackWrapper::*)()>(&::Zenject::SignalCallbackWrapper::Dispose)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6e45ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalCallbackWrapper*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalCallbackWrapper.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::SignalCallbackWrapper::__zenCreate)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6e45b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalCallbackWrapper*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalCallbackWrapper.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SignalCallbackWrapper::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x6e45cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalCallbackWrapper*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::SignalBus*& Zenject::SignalCallbackWrapper::__cordl_internal_get__signalBus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signalBus;
}
constexpr ::Zenject::SignalBus* const& Zenject::SignalCallbackWrapper::__cordl_internal_get__signalBus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signalBus;
}
constexpr void Zenject::SignalCallbackWrapper::__cordl_internal_set__signalBus(::Zenject::SignalBus* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____signalBus = value;
}
constexpr ::System::Action_1<::System::Object*>*& Zenject::SignalCallbackWrapper::__cordl_internal_get__action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____action;
}
constexpr ::System::Action_1<::System::Object*>* const& Zenject::SignalCallbackWrapper::__cordl_internal_get__action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____action;
}
constexpr void Zenject::SignalCallbackWrapper::__cordl_internal_set__action(::System::Action_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____action = value;
}
constexpr ::System::Type*& Zenject::SignalCallbackWrapper::__cordl_internal_get__signalType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signalType;
}
constexpr ::System::Type* const& Zenject::SignalCallbackWrapper::__cordl_internal_get__signalType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signalType;
}
constexpr void Zenject::SignalCallbackWrapper::__cordl_internal_set__signalType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____signalType = value;
}
constexpr ::System::Object*& Zenject::SignalCallbackWrapper::__cordl_internal_get__identifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____identifier;
}
constexpr ::System::Object* const& Zenject::SignalCallbackWrapper::__cordl_internal_get__identifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____identifier;
}
constexpr void Zenject::SignalCallbackWrapper::__cordl_internal_set__identifier(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____identifier = value;
}
inline void Zenject::SignalCallbackWrapper::_ctor(::Zenject::SignalBindingBindInfo* bindInfo, ::System::Action_1<::System::Object*>* action, ::Zenject::SignalBus* signalBus) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Zenject::SignalCallbackWrapper*>(),
                       { ".ctor", {}, { ::i2c::type_of<::Zenject::SignalBindingBindInfo*>(), ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::Zenject::SignalBus*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindInfo, action, signalBus);
}
inline void Zenject::SignalCallbackWrapper::OnSignalFired(::System::Object* signal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalCallbackWrapper*>(), { "OnSignalFired", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signal);
}
inline void Zenject::SignalCallbackWrapper::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalCallbackWrapper*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Zenject::SignalCallbackWrapper::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalCallbackWrapper*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SignalCallbackWrapper::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalCallbackWrapper*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::SignalCallbackWrapper* Zenject::SignalCallbackWrapper::New_ctor(::Zenject::SignalBindingBindInfo* bindInfo, ::System::Action_1<::System::Object*>* action,
                                                                                  ::Zenject::SignalBus* signalBus) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SignalCallbackWrapper*>(bindInfo, action, signalBus));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Zenject::SignalCallbackWrapper::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Zenject::SignalCallbackWrapper::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::SignalCallbackWrapper::SignalCallbackWrapper() {}
