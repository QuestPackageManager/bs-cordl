#pragma once
// IWYU pragma private; include "BGLib/DotnetExtension/Disposables/EmptyDisposable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/DotnetExtension/Disposables/zzzz__EmptyDisposable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::EmptyDisposable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::DotnetExtension::Disposables::EmptyDisposable::*)()>(
    &::BGLib::DotnetExtension::Disposables::EmptyDisposable::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31e8c14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Disposables::EmptyDisposable*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::EmptyDisposable.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::DotnetExtension::Disposables::EmptyDisposable::*)()>(
    &::BGLib::DotnetExtension::Disposables::EmptyDisposable::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31e8c18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Disposables::EmptyDisposable*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void BGLib::DotnetExtension::Disposables::EmptyDisposable::setStaticF_disposable(::BGLib::DotnetExtension::Disposables::EmptyDisposable* value) {
  ::cordl_internals::setStaticField<::BGLib::DotnetExtension::Disposables::EmptyDisposable*, "disposable",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Disposables::EmptyDisposable*>::get>(
      std::forward<::BGLib::DotnetExtension::Disposables::EmptyDisposable*>(value));
}
inline ::BGLib::DotnetExtension::Disposables::EmptyDisposable* BGLib::DotnetExtension::Disposables::EmptyDisposable::getStaticF_disposable() {
  return ::cordl_internals::getStaticField<::BGLib::DotnetExtension::Disposables::EmptyDisposable*, "disposable",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Disposables::EmptyDisposable*>::get>();
}
inline void BGLib::DotnetExtension::Disposables::EmptyDisposable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Disposables::EmptyDisposable*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::DotnetExtension::Disposables::EmptyDisposable::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Disposables::EmptyDisposable*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BGLib::DotnetExtension::Disposables::EmptyDisposable* BGLib::DotnetExtension::Disposables::EmptyDisposable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::DotnetExtension::Disposables::EmptyDisposable*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr BGLib::DotnetExtension::Disposables::EmptyDisposable::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* BGLib::DotnetExtension::Disposables::EmptyDisposable::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BGLib::DotnetExtension::Disposables::EmptyDisposable::EmptyDisposable() {}
