#pragma once
// IWYU pragma private; include "BGLib/DotnetExtension/Disposables/SingleDisposable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/DotnetExtension/Disposables/zzzz__SingleDisposable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::SingleDisposable.get_disposable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IDisposable* (::BGLib::DotnetExtension::Disposables::SingleDisposable::*)()>(
    &::BGLib::DotnetExtension::Disposables::SingleDisposable::get_disposable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x321964c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Disposables::SingleDisposable*>::get(),
                                                                               "get_disposable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::SingleDisposable.set_disposable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::DotnetExtension::Disposables::SingleDisposable::*)(::System::IDisposable*)>(
    &::BGLib::DotnetExtension::Disposables::SingleDisposable::set_disposable)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3219654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Disposables::SingleDisposable*>::get(), "set_disposable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IDisposable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::SingleDisposable.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::DotnetExtension::Disposables::SingleDisposable::*)()>(
    &::BGLib::DotnetExtension::Disposables::SingleDisposable::Dispose)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3219708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Disposables::SingleDisposable*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::DotnetExtension::Disposables::SingleDisposable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::DotnetExtension::Disposables::SingleDisposable::*)()>(
    &::BGLib::DotnetExtension::Disposables::SingleDisposable::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32197b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Disposables::SingleDisposable*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::IDisposable*& BGLib::DotnetExtension::Disposables::SingleDisposable::__cordl_internal_get__disposable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposable;
}
constexpr ::System::IDisposable* const& BGLib::DotnetExtension::Disposables::SingleDisposable::__cordl_internal_get__disposable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposable;
}
constexpr void BGLib::DotnetExtension::Disposables::SingleDisposable::__cordl_internal_set__disposable(::System::IDisposable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____disposable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::IDisposable* BGLib::DotnetExtension::Disposables::SingleDisposable::get_disposable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Disposables::SingleDisposable*>::get(),
                                                                             "get_disposable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IDisposable*, false>(this, ___internal_method);
}
inline void BGLib::DotnetExtension::Disposables::SingleDisposable::set_disposable(::System::IDisposable* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Disposables::SingleDisposable*>::get(), "set_disposable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IDisposable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BGLib::DotnetExtension::Disposables::SingleDisposable::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Disposables::SingleDisposable*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::DotnetExtension::Disposables::SingleDisposable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Disposables::SingleDisposable*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BGLib::DotnetExtension::Disposables::SingleDisposable* BGLib::DotnetExtension::Disposables::SingleDisposable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::DotnetExtension::Disposables::SingleDisposable*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr BGLib::DotnetExtension::Disposables::SingleDisposable::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* BGLib::DotnetExtension::Disposables::SingleDisposable::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BGLib::DotnetExtension::Disposables::SingleDisposable::SingleDisposable() {}
