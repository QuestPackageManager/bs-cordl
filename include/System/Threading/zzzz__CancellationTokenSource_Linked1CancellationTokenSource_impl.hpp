#pragma once
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_Linked1CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::System::Threading::__CancellationTokenSource__Linked1CancellationTokenSource._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__CancellationTokenSource__Linked1CancellationTokenSource::*)(
    ::System::Threading::CancellationToken)>(&::System::Threading::__CancellationTokenSource__Linked1CancellationTokenSource::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x289c794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__CancellationTokenSource__Linked1CancellationTokenSource*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__CancellationTokenSource__Linked1CancellationTokenSource.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__CancellationTokenSource__Linked1CancellationTokenSource::*)(bool)>(
    &::System::Threading::__CancellationTokenSource__Linked1CancellationTokenSource::Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x289cba8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__CancellationTokenSource__Linked1CancellationTokenSource*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__CancellationTokenSource__Linked1CancellationTokenSource*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::System::Threading::CancellationTokenRegistration& System::Threading::__CancellationTokenSource__Linked1CancellationTokenSource::__cordl_internal_get__reg1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reg1;
}
constexpr ::System::Threading::CancellationTokenRegistration const& System::Threading::__CancellationTokenSource__Linked1CancellationTokenSource::__cordl_internal_get__reg1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reg1;
}
constexpr void System::Threading::__CancellationTokenSource__Linked1CancellationTokenSource::__cordl_internal_set__reg1(::System::Threading::CancellationTokenRegistration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reg1 = value;
}
inline ::System::Threading::__CancellationTokenSource__Linked1CancellationTokenSource*
System::Threading::__CancellationTokenSource__Linked1CancellationTokenSource::New_ctor(::System::Threading::CancellationToken token1) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::__CancellationTokenSource__Linked1CancellationTokenSource*>(token1));
}
inline void System::Threading::__CancellationTokenSource__Linked1CancellationTokenSource::_ctor(::System::Threading::CancellationToken token1) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__CancellationTokenSource__Linked1CancellationTokenSource*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token1);
}
inline void System::Threading::__CancellationTokenSource__Linked1CancellationTokenSource::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__CancellationTokenSource__Linked1CancellationTokenSource*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
// Ctor Parameters []
constexpr ::System::Threading::__CancellationTokenSource__Linked1CancellationTokenSource::__CancellationTokenSource__Linked1CancellationTokenSource() {}
