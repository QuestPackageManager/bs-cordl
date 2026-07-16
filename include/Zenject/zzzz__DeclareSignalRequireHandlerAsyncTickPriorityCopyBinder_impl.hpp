#pragma once
// IWYU pragma private; include "Zenject/DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder.hpp"
#include "Zenject/zzzz__DeclareSignalAsyncTickPriorityCopyBinder_impl.hpp"
#include "Zenject/zzzz__DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder_def.hpp"
#include "Zenject/zzzz__DeclareSignalAsyncTickPriorityCopyBinder_def.hpp"
#include "Zenject/zzzz__SignalDeclarationBindInfo_def.hpp"
//  Writing Method size for method: ::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder::*)(::Zenject::SignalDeclarationBindInfo*)>(
    &::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e42b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Zenject::SignalDeclarationBindInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder.RequireSubscriber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::DeclareSignalAsyncTickPriorityCopyBinder* (::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder::*)()>(
    &::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder::RequireSubscriber)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e42bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder*>(), { "RequireSubscriber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder.OptionalSubscriber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::DeclareSignalAsyncTickPriorityCopyBinder* (::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder::*)()>(
    &::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder::OptionalSubscriber)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e42bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder*>(), { "OptionalSubscriber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder.OptionalSubscriberWithWarning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::DeclareSignalAsyncTickPriorityCopyBinder* (::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder::*)()>(
    &::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder::OptionalSubscriberWithWarning)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e42be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder*>(), { "OptionalSubscriberWithWarning", {}, {} })));
    return ___internal_method;
  }
};
inline void Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder::_ctor(::Zenject::SignalDeclarationBindInfo* signalBindInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Zenject::SignalDeclarationBindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signalBindInfo);
}
inline ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder* Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder::RequireSubscriber() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder*>(), { "RequireSubscriber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DeclareSignalAsyncTickPriorityCopyBinder*>(this, ___internal_method);
}
inline ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder* Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder::OptionalSubscriber() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder*>(), { "OptionalSubscriber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DeclareSignalAsyncTickPriorityCopyBinder*>(this, ___internal_method);
}
inline ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder* Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder::OptionalSubscriberWithWarning() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder*>(), { "OptionalSubscriberWithWarning", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DeclareSignalAsyncTickPriorityCopyBinder*>(this, ___internal_method);
}
inline ::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder*
Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder::New_ctor(::Zenject::SignalDeclarationBindInfo* signalBindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder*>(signalBindInfo));
}
// Ctor Parameters []
constexpr ::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder() {}
