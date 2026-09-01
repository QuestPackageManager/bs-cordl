#pragma once
// IWYU pragma private; include "Zenject\SignalExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__SignalExtensions_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__BindSignalIdToBinder_1_def.hpp"
#include "Zenject/zzzz__DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__SignalDeclarationBindInfo_def.hpp"
//  Writing Method size for method: ::Zenject::SignalExtensions.CreateDefaultSignalDeclarationBindInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::SignalDeclarationBindInfo* (*)(::Zenject::DiContainer*, ::System::Type*)>(
    &::Zenject::SignalExtensions::CreateDefaultSignalDeclarationBindInfo)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e464e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalExtensions*>(),
                                                             { "CreateDefaultSignalDeclarationBindInfo", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline ::Zenject::SignalDeclarationBindInfo* Zenject::SignalExtensions::CreateDefaultSignalDeclarationBindInfo(::Zenject::DiContainer* container, ::System::Type* signalType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalExtensions*>(),
                                                           { "CreateDefaultSignalDeclarationBindInfo", {}, { ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::SignalDeclarationBindInfo*>(nullptr, ___internal_method, container, signalType);
}
template <typename TSignal> inline ::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder* Zenject::SignalExtensions::DeclareSignal(::Zenject::DiContainer* container) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalExtensions*>(), { "DeclareSignal", { ::i2c::class_of<TSignal>() }, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSignal>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder*>(nullptr, ___internal_method, container);
}
template <typename TSignal> inline ::Zenject::BindSignalIdToBinder_1<TSignal>* Zenject::SignalExtensions::BindSignal(::Zenject::DiContainer* container) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::SignalExtensions*>(), { "BindSignal", { ::i2c::class_of<TSignal>() }, { ::i2c::type_of<::Zenject::DiContainer*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSignal>() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::BindSignalIdToBinder_1<TSignal>*>(nullptr, ___internal_method, container);
}
// Ctor Parameters []
constexpr ::Zenject::SignalExtensions::SignalExtensions() {}
