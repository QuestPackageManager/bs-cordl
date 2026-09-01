#pragma once
// IWYU pragma private; include "Zenject\DeclareSignalAsyncTickPriorityCopyBinder.hpp"
#include "Zenject/zzzz__SignalTickPriorityCopyBinder_impl.hpp"
#include "Zenject/zzzz__DeclareSignalAsyncTickPriorityCopyBinder_def.hpp"
#include "Zenject/zzzz__SignalCopyBinder_def.hpp"
#include "Zenject/zzzz__SignalDeclarationBindInfo_def.hpp"
#include "Zenject/zzzz__SignalTickPriorityCopyBinder_def.hpp"
//  Writing Method size for method: ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DeclareSignalAsyncTickPriorityCopyBinder::*)(::Zenject::SignalDeclarationBindInfo*)>(
    &::Zenject::DeclareSignalAsyncTickPriorityCopyBinder::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e4605c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Zenject::DeclareSignalAsyncTickPriorityCopyBinder*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::SignalDeclarationBindInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder.RunAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::SignalTickPriorityCopyBinder* (::Zenject::DeclareSignalAsyncTickPriorityCopyBinder::*)()>(
    &::Zenject::DeclareSignalAsyncTickPriorityCopyBinder::RunAsync)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e460a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DeclareSignalAsyncTickPriorityCopyBinder*>(), { "RunAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder.RunSync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::SignalCopyBinder* (::Zenject::DeclareSignalAsyncTickPriorityCopyBinder::*)()>(
    &::Zenject::DeclareSignalAsyncTickPriorityCopyBinder::RunSync)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e460c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DeclareSignalAsyncTickPriorityCopyBinder*>(), { "RunSync", {}, {} })));
    return ___internal_method;
  }
};
inline void Zenject::DeclareSignalAsyncTickPriorityCopyBinder::_ctor(::Zenject::SignalDeclarationBindInfo* signalBindInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DeclareSignalAsyncTickPriorityCopyBinder*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::SignalDeclarationBindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signalBindInfo);
}
inline ::Zenject::SignalTickPriorityCopyBinder* Zenject::DeclareSignalAsyncTickPriorityCopyBinder::RunAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DeclareSignalAsyncTickPriorityCopyBinder*>(), { "RunAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::SignalTickPriorityCopyBinder*>(this, ___internal_method);
}
inline ::Zenject::SignalCopyBinder* Zenject::DeclareSignalAsyncTickPriorityCopyBinder::RunSync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DeclareSignalAsyncTickPriorityCopyBinder*>(), { "RunSync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::SignalCopyBinder*>(this, ___internal_method);
}
inline ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder* Zenject::DeclareSignalAsyncTickPriorityCopyBinder::New_ctor(::Zenject::SignalDeclarationBindInfo* signalBindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::DeclareSignalAsyncTickPriorityCopyBinder*>(signalBindInfo));
}
// Ctor Parameters []
constexpr ::Zenject::DeclareSignalAsyncTickPriorityCopyBinder::DeclareSignalAsyncTickPriorityCopyBinder() {}
