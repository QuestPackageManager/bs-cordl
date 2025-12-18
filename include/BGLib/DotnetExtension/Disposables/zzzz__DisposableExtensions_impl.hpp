#pragma once
// IWYU pragma private; include "BGLib/DotnetExtension/Disposables/DisposableExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/DotnetExtension/Disposables/zzzz__DisposableExtensions_def.hpp"
#include "BGLib/DotnetExtension/Disposables/zzzz__CompositeDisposable_def.hpp"
#include "BGLib/DotnetExtension/Disposables/zzzz__ConcurrentCompositeDisposable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::DisposableExtensions.AddTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IDisposable*, ::BGLib::DotnetExtension::Disposables::CompositeDisposable*)>(
    &::BGLib::DotnetExtension::Disposables::DisposableExtensions::AddTo)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32195b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Disposables::DisposableExtensions*>::get(), "AddTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IDisposable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::DotnetExtension::Disposables::CompositeDisposable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::DisposableExtensions.AddTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IDisposable*, ::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*)>(
    &::BGLib::DotnetExtension::Disposables::DisposableExtensions::AddTo)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32195d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Disposables::DisposableExtensions*>::get(), "AddTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IDisposable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>::get() })));
    return ___internal_method;
  }
};
inline void BGLib::DotnetExtension::Disposables::DisposableExtensions::AddTo(::System::IDisposable* disposable, ::BGLib::DotnetExtension::Disposables::CompositeDisposable* compositeDisposable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Disposables::DisposableExtensions*>::get(), "AddTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IDisposable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::DotnetExtension::Disposables::CompositeDisposable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, disposable, compositeDisposable);
}
inline void BGLib::DotnetExtension::Disposables::DisposableExtensions::AddTo(::System::IDisposable* disposable,
                                                                             ::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable* compositeDisposable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Disposables::DisposableExtensions*>::get(), "AddTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IDisposable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::DotnetExtension::Disposables::ConcurrentCompositeDisposable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, disposable, compositeDisposable);
}
// Ctor Parameters []
constexpr ::BGLib::DotnetExtension::Disposables::DisposableExtensions::DisposableExtensions() {}
