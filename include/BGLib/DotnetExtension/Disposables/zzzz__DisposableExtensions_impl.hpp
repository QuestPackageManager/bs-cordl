#pragma once
// IWYU pragma private; include "BGLib\DotnetExtension\Disposables\DisposableExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/DotnetExtension/Disposables/zzzz__DisposableExtensions_def.hpp"
#include "BGLib/DotnetExtension/Disposables/zzzz__CompositeDisposable_def.hpp"
#include "BGLib/DotnetExtension/Disposables/zzzz__ConcurrentCompositeDisposable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::DisposableExtensions.AddTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IDisposable*, ::BGLib::DotnetExtension::Disposables::CompositeDisposable*)>(
    &::BGLib::DotnetExtension::Disposables::DisposableExtensions::AddTo)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3310c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::DisposableExtensions*>(),
                                                { "AddTo", {}, { ::i2c::type_of<::System::IDisposable*>(), ::i2c::type_of<::BGLib::DotnetExtension::Disposables::CompositeDisposable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::DisposableExtensions.AddTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IDisposable*, ::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*)>(
    &::BGLib::DotnetExtension::Disposables::DisposableExtensions::AddTo)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3310c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::DisposableExtensions*>(),
                                         { "AddTo", {}, { ::i2c::type_of<::System::IDisposable*>(), ::i2c::type_of<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>() } })));
    return ___internal_method;
  }
};
inline void BGLib::DotnetExtension::Disposables::DisposableExtensions::AddTo(::System::IDisposable* disposable, ::BGLib::DotnetExtension::Disposables::CompositeDisposable* compositeDisposable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::DisposableExtensions*>(),
                                              { "AddTo", {}, { ::i2c::type_of<::System::IDisposable*>(), ::i2c::type_of<::BGLib::DotnetExtension::Disposables::CompositeDisposable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, disposable, compositeDisposable);
}
inline void BGLib::DotnetExtension::Disposables::DisposableExtensions::AddTo(::System::IDisposable* disposable,
                                                                             ::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable* compositeDisposable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Disposables::DisposableExtensions*>(),
                                              { "AddTo", {}, { ::i2c::type_of<::System::IDisposable*>(), ::i2c::type_of<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, disposable, compositeDisposable);
}
// Ctor Parameters []
constexpr ::BGLib::DotnetExtension::Disposables::DisposableExtensions::DisposableExtensions() {}
