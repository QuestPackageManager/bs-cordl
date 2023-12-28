#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/Threading/Tasks/zzzz__UnobservedTaskExceptionEventArgs_def.hpp"
#include "System/zzzz__AggregateException_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::UnobservedTaskExceptionEventArgs::*)(::System::AggregateException*)>(
    &::System::Threading::Tasks::UnobservedTaskExceptionEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x262c9a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AggregateException*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::AggregateException*& System::Threading::Tasks::UnobservedTaskExceptionEventArgs::__get_m_exception() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_exception;
}
constexpr ::cordl_internals::to_const_pointer<::System::AggregateException*> const& System::Threading::Tasks::UnobservedTaskExceptionEventArgs::__get_m_exception() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_exception;
}
constexpr void System::Threading::Tasks::UnobservedTaskExceptionEventArgs::__set_m_exception(::System::AggregateException* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_exception)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Threading::Tasks::UnobservedTaskExceptionEventArgs::__get_m_observed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_observed;
}
constexpr bool const& System::Threading::Tasks::UnobservedTaskExceptionEventArgs::__get_m_observed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_observed;
}
constexpr void System::Threading::Tasks::UnobservedTaskExceptionEventArgs::__set_m_observed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_observed = value;
}
inline ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs* System::Threading::Tasks::UnobservedTaskExceptionEventArgs::New_ctor(::System::AggregateException* exception) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>(exception));
}
inline void System::Threading::Tasks::UnobservedTaskExceptionEventArgs::_ctor(::System::AggregateException* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AggregateException*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception);
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs::UnobservedTaskExceptionEventArgs() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
