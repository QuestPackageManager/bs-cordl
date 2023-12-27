#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/zzzz__UnhandledExceptionEventArgs_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::UnhandledExceptionEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::UnhandledExceptionEventArgs::*)(::System::Object*, bool)>(
    &::System::UnhandledExceptionEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x25cdf38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UnhandledExceptionEventArgs*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UnhandledExceptionEventArgs.get_ExceptionObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::UnhandledExceptionEventArgs::*)()>(
    &::System::UnhandledExceptionEventArgs::get_ExceptionObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25cdfac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UnhandledExceptionEventArgs*>::get(),
                                                                               "get_ExceptionObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UnhandledExceptionEventArgs.get_IsTerminating
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::UnhandledExceptionEventArgs::*)()>(&::System::UnhandledExceptionEventArgs::get_IsTerminating)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25cdfb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UnhandledExceptionEventArgs*>::get(),
                                                                               "get_IsTerminating", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::UnhandledExceptionEventArgs::__get__exception() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____exception;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::UnhandledExceptionEventArgs::__get__exception() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____exception;
}
constexpr void System::UnhandledExceptionEventArgs::__set__exception(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____exception)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::UnhandledExceptionEventArgs::__get__isTerminating() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____isTerminating;
}
constexpr bool const& System::UnhandledExceptionEventArgs::__get__isTerminating() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____isTerminating;
}
constexpr void System::UnhandledExceptionEventArgs::__set__isTerminating(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____isTerminating = value;
}
inline ::System::UnhandledExceptionEventArgs* System::UnhandledExceptionEventArgs::New_ctor(::System::Object* exception, bool isTerminating) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::UnhandledExceptionEventArgs*>(exception, isTerminating));
}
inline void System::UnhandledExceptionEventArgs::_ctor(::System::Object* exception, bool isTerminating) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UnhandledExceptionEventArgs*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception, isTerminating);
}
inline ::System::Object* System::UnhandledExceptionEventArgs::get_ExceptionObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UnhandledExceptionEventArgs*>::get(),
                                                                             "get_ExceptionObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool System::UnhandledExceptionEventArgs::get_IsTerminating() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UnhandledExceptionEventArgs*>::get(), "get_IsTerminating",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::UnhandledExceptionEventArgs::UnhandledExceptionEventArgs() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
