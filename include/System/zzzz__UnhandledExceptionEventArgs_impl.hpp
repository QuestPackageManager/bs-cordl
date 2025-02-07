#pragma once
// IWYU pragma private; include "System/UnhandledExceptionEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/zzzz__UnhandledExceptionEventArgs_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::UnhandledExceptionEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::UnhandledExceptionEventArgs::*)(::System::Object*, bool)>(
    &::System::UnhandledExceptionEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3e0e7a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UnhandledExceptionEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UnhandledExceptionEventArgs.get_ExceptionObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::UnhandledExceptionEventArgs::*)()>(
    &::System::UnhandledExceptionEventArgs::get_ExceptionObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e0e820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UnhandledExceptionEventArgs*>::get(),
                                                                               "get_ExceptionObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UnhandledExceptionEventArgs.get_IsTerminating
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::UnhandledExceptionEventArgs::*)()>(&::System::UnhandledExceptionEventArgs::get_IsTerminating)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e0e828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UnhandledExceptionEventArgs*>::get(),
                                                                               "get_IsTerminating", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::UnhandledExceptionEventArgs::__cordl_internal_get__exception() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exception;
}
constexpr ::System::Object* const& System::UnhandledExceptionEventArgs::__cordl_internal_get__exception() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exception;
}
constexpr void System::UnhandledExceptionEventArgs::__cordl_internal_set__exception(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____exception)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::UnhandledExceptionEventArgs::__cordl_internal_get__isTerminating() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isTerminating;
}
constexpr bool const& System::UnhandledExceptionEventArgs::__cordl_internal_get__isTerminating() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isTerminating;
}
constexpr void System::UnhandledExceptionEventArgs::__cordl_internal_set__isTerminating(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isTerminating = value;
}
inline void System::UnhandledExceptionEventArgs::_ctor(::System::Object* exception, bool isTerminating) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UnhandledExceptionEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception, isTerminating);
}
inline ::System::Object* System::UnhandledExceptionEventArgs::get_ExceptionObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UnhandledExceptionEventArgs*>::get(),
                                                                             "get_ExceptionObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool System::UnhandledExceptionEventArgs::get_IsTerminating() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UnhandledExceptionEventArgs*>::get(), "get_IsTerminating",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::UnhandledExceptionEventArgs* System::UnhandledExceptionEventArgs::New_ctor(::System::Object* exception, bool isTerminating) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::UnhandledExceptionEventArgs*>(exception, isTerminating));
}
// Ctor Parameters []
constexpr ::System::UnhandledExceptionEventArgs::UnhandledExceptionEventArgs() {}
