#pragma once
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_Linked2CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource::*)(
    ::System::Threading::CancellationToken, ::System::Threading::CancellationToken)>(&::System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2638860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource::*)(bool)>(
    &::System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource::Dispose)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2638bd0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::System::Threading::CancellationTokenRegistration& System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource::__cordl_internal_get__reg1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reg1;
}
constexpr ::System::Threading::CancellationTokenRegistration const& System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource::__cordl_internal_get__reg1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reg1;
}
constexpr void System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource::__cordl_internal_set__reg1(::System::Threading::CancellationTokenRegistration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reg1 = value;
}
constexpr ::System::Threading::CancellationTokenRegistration& System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource::__cordl_internal_get__reg2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reg2;
}
constexpr ::System::Threading::CancellationTokenRegistration const& System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource::__cordl_internal_get__reg2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reg2;
}
constexpr void System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource::__cordl_internal_set__reg2(::System::Threading::CancellationTokenRegistration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reg2 = value;
}
inline ::System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource*
System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource::New_ctor(::System::Threading::CancellationToken token1, ::System::Threading::CancellationToken token2) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource*>(token1, token2));
}
inline void System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource::_ctor(::System::Threading::CancellationToken token1, ::System::Threading::CancellationToken token2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token1, token2);
}
inline void System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
// Ctor Parameters []
constexpr ::System::Threading::__CancellationTokenSource__Linked2CancellationTokenSource::__CancellationTokenSource__Linked2CancellationTokenSource() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
