#pragma once
// IWYU pragma private; include "Zenject/DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder.hpp"
#include "Zenject/zzzz__DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder_impl.hpp"
#include "Zenject/zzzz__DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder_def.hpp"
#include "Zenject/zzzz__SignalDeclarationBindInfo_def.hpp"
//  Writing Method size for method: ::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::*)(::Zenject::SignalDeclarationBindInfo*)>(
    &::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e42b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Zenject::SignalDeclarationBindInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder.WithId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder* (
    ::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::*)(::System::Object*)>(&::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::WithId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e42b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder*>(), { "WithId", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::_ctor(::Zenject::SignalDeclarationBindInfo* signalBindInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Zenject::SignalDeclarationBindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signalBindInfo);
}
inline ::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder* Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::WithId(::System::Object* identifier) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder*>(), { "WithId", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder*>(this, ___internal_method, identifier);
}
inline ::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder*
Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::New_ctor(::Zenject::SignalDeclarationBindInfo* signalBindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder*>(signalBindInfo));
}
// Ctor Parameters []
constexpr ::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder() {}
