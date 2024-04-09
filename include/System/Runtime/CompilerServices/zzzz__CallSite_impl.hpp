#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__CallSite_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__CallSiteBinder_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::CallSite._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::CallSite::*)(::System::Runtime::CompilerServices::CallSiteBinder*)>(
    &::System::Runtime::CompilerServices::CallSite::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2b4d668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::CallSite*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::CallSiteBinder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::CallSite.get_Binder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::CompilerServices::CallSiteBinder* (::System::Runtime::CompilerServices::CallSite::*)()>(
    &::System::Runtime::CompilerServices::CallSite::get_Binder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b4d690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::CallSite*>::get(),
                                                                               "get_Binder", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::CompilerServices::CallSiteBinder*& System::Runtime::CompilerServices::CallSite::__cordl_internal_get__binder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____binder;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::CompilerServices::CallSiteBinder*> const& System::Runtime::CompilerServices::CallSite::__cordl_internal_get__binder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____binder;
}
constexpr void System::Runtime::CompilerServices::CallSite::__cordl_internal_set__binder(::System::Runtime::CompilerServices::CallSiteBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____binder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Runtime::CompilerServices::CallSite::__cordl_internal_get__match() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____match;
}
constexpr bool const& System::Runtime::CompilerServices::CallSite::__cordl_internal_get__match() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____match;
}
constexpr void System::Runtime::CompilerServices::CallSite::__cordl_internal_set__match(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____match = value;
}
inline ::System::Runtime::CompilerServices::CallSite* System::Runtime::CompilerServices::CallSite::New_ctor(::System::Runtime::CompilerServices::CallSiteBinder* binder) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::CompilerServices::CallSite*>(binder));
}
inline void System::Runtime::CompilerServices::CallSite::_ctor(::System::Runtime::CompilerServices::CallSiteBinder* binder) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::CallSite*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::CallSiteBinder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, binder);
}
inline ::System::Runtime::CompilerServices::CallSiteBinder* System::Runtime::CompilerServices::CallSite::get_Binder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::CallSite*>::get(),
                                                                             "get_Binder", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::CallSiteBinder*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::CallSite::CallSite() {}
