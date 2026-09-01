#pragma once
// IWYU pragma private; include "Zenject\SignalCallbackWithLookupWrapper.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__SignalCallbackWithLookupWrapper_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__SignalBindingBindInfo_def.hpp"
#include "Zenject/zzzz__SignalBus_def.hpp"
//  Writing Method size for method: ::Zenject::SignalCallbackWithLookupWrapper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalCallbackWithLookupWrapper::*)(
    ::Zenject::SignalBindingBindInfo*, ::System::Type*, ::System::Guid, ::System::Func_2<::System::Object*, ::System::Action_1<::System::Object*>*>*, ::Zenject::SignalBus*, ::Zenject::DiContainer*)>(
    &::Zenject::SignalCallbackWithLookupWrapper::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6e44e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalCallbackWithLookupWrapper*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Zenject::SignalBindingBindInfo*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Guid>(),
                                                                 ::i2c::type_of<::System::Func_2<::System::Object*, ::System::Action_1<::System::Object*>*>*>(),
                                                                 ::i2c::type_of<::Zenject::SignalBus*>(), ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalCallbackWithLookupWrapper.OnSignalFired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalCallbackWithLookupWrapper::*)(::System::Object*)>(&::Zenject::SignalCallbackWithLookupWrapper::OnSignalFired)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6e44fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalCallbackWithLookupWrapper*>(), { "OnSignalFired", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalCallbackWithLookupWrapper.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::SignalCallbackWithLookupWrapper::*)()>(&::Zenject::SignalCallbackWithLookupWrapper::Dispose)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6e45190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalCallbackWithLookupWrapper*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalCallbackWithLookupWrapper.__zenCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*>)>(&::Zenject::SignalCallbackWithLookupWrapper::__zenCreate)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x6e45264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalCallbackWithLookupWrapper*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::SignalCallbackWithLookupWrapper.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::SignalCallbackWithLookupWrapper::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x6e454f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalCallbackWithLookupWrapper*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::DiContainer*& Zenject::SignalCallbackWithLookupWrapper::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::Zenject::DiContainer* const& Zenject::SignalCallbackWithLookupWrapper::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void Zenject::SignalCallbackWithLookupWrapper::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____container = value;
}
constexpr ::Zenject::SignalBus*& Zenject::SignalCallbackWithLookupWrapper::__cordl_internal_get__signalBus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signalBus;
}
constexpr ::Zenject::SignalBus* const& Zenject::SignalCallbackWithLookupWrapper::__cordl_internal_get__signalBus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signalBus;
}
constexpr void Zenject::SignalCallbackWithLookupWrapper::__cordl_internal_set__signalBus(::Zenject::SignalBus* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____signalBus = value;
}
constexpr ::System::Guid& Zenject::SignalCallbackWithLookupWrapper::__cordl_internal_get__lookupId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lookupId;
}
constexpr ::System::Guid const& Zenject::SignalCallbackWithLookupWrapper::__cordl_internal_get__lookupId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lookupId;
}
constexpr void Zenject::SignalCallbackWithLookupWrapper::__cordl_internal_set__lookupId(::System::Guid value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lookupId = value;
}
constexpr ::System::Func_2<::System::Object*, ::System::Action_1<::System::Object*>*>*& Zenject::SignalCallbackWithLookupWrapper::__cordl_internal_get__methodGetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____methodGetter;
}
constexpr ::System::Func_2<::System::Object*, ::System::Action_1<::System::Object*>*>* const& Zenject::SignalCallbackWithLookupWrapper::__cordl_internal_get__methodGetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____methodGetter;
}
constexpr void Zenject::SignalCallbackWithLookupWrapper::__cordl_internal_set__methodGetter(::System::Func_2<::System::Object*, ::System::Action_1<::System::Object*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____methodGetter = value;
}
constexpr ::System::Type*& Zenject::SignalCallbackWithLookupWrapper::__cordl_internal_get__objectType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectType;
}
constexpr ::System::Type* const& Zenject::SignalCallbackWithLookupWrapper::__cordl_internal_get__objectType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectType;
}
constexpr void Zenject::SignalCallbackWithLookupWrapper::__cordl_internal_set__objectType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectType = value;
}
constexpr ::System::Type*& Zenject::SignalCallbackWithLookupWrapper::__cordl_internal_get__signalType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signalType;
}
constexpr ::System::Type* const& Zenject::SignalCallbackWithLookupWrapper::__cordl_internal_get__signalType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____signalType;
}
constexpr void Zenject::SignalCallbackWithLookupWrapper::__cordl_internal_set__signalType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____signalType = value;
}
constexpr ::System::Object*& Zenject::SignalCallbackWithLookupWrapper::__cordl_internal_get__identifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____identifier;
}
constexpr ::System::Object* const& Zenject::SignalCallbackWithLookupWrapper::__cordl_internal_get__identifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____identifier;
}
constexpr void Zenject::SignalCallbackWithLookupWrapper::__cordl_internal_set__identifier(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____identifier = value;
}
inline void Zenject::SignalCallbackWithLookupWrapper::_ctor(::Zenject::SignalBindingBindInfo* signalBindInfo, ::System::Type* objectType, ::System::Guid lookupId,
                                                            ::System::Func_2<::System::Object*, ::System::Action_1<::System::Object*>*>* methodGetter, ::Zenject::SignalBus* signalBus,
                                                            ::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalCallbackWithLookupWrapper*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Zenject::SignalBindingBindInfo*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Guid>(),
                                                               ::i2c::type_of<::System::Func_2<::System::Object*, ::System::Action_1<::System::Object*>*>*>(), ::i2c::type_of<::Zenject::SignalBus*>(),
                                                               ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signalBindInfo, objectType, lookupId, methodGetter, signalBus, container);
}
inline void Zenject::SignalCallbackWithLookupWrapper::OnSignalFired(::System::Object* signal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalCallbackWithLookupWrapper*>(), { "OnSignalFired", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signal);
}
inline void Zenject::SignalCallbackWithLookupWrapper::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalCallbackWithLookupWrapper*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Zenject::SignalCallbackWithLookupWrapper::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalCallbackWithLookupWrapper*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::SignalCallbackWithLookupWrapper::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalCallbackWithLookupWrapper*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
inline ::Zenject::SignalCallbackWithLookupWrapper* Zenject::SignalCallbackWithLookupWrapper::New_ctor(::Zenject::SignalBindingBindInfo* signalBindInfo, ::System::Type* objectType,
                                                                                                      ::System::Guid lookupId,
                                                                                                      ::System::Func_2<::System::Object*, ::System::Action_1<::System::Object*>*>* methodGetter,
                                                                                                      ::Zenject::SignalBus* signalBus, ::Zenject::DiContainer* container) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::SignalCallbackWithLookupWrapper*>(signalBindInfo, objectType, lookupId, methodGetter, signalBus, container));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Zenject::SignalCallbackWithLookupWrapper::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Zenject::SignalCallbackWithLookupWrapper::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Zenject::SignalCallbackWithLookupWrapper::SignalCallbackWithLookupWrapper() {}
