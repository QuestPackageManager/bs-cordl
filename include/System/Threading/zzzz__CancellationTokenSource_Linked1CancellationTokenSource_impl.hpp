#pragma once
// IWYU pragma private; include "System/Threading/CancellationTokenSource_Linked1CancellationTokenSource.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_Linked1CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CancellationTokenSource_Linked1CancellationTokenSource._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CancellationTokenSource_Linked1CancellationTokenSource::*)(
    ::System::Threading::CancellationToken)>(&::GlobalNamespace::CancellationTokenSource_Linked1CancellationTokenSource::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5afcc40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CancellationTokenSource_Linked1CancellationTokenSource*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CancellationTokenSource_Linked1CancellationTokenSource.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CancellationTokenSource_Linked1CancellationTokenSource::*)(bool)>(
    &::GlobalNamespace::CancellationTokenSource_Linked1CancellationTokenSource::Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5afd094;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CancellationTokenSource_Linked1CancellationTokenSource*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CancellationTokenSource_Linked1CancellationTokenSource*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::System::Threading::CancellationTokenRegistration& GlobalNamespace::CancellationTokenSource_Linked1CancellationTokenSource::__cordl_internal_get__reg1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reg1;
}
constexpr ::System::Threading::CancellationTokenRegistration const& GlobalNamespace::CancellationTokenSource_Linked1CancellationTokenSource::__cordl_internal_get__reg1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reg1;
}
constexpr void GlobalNamespace::CancellationTokenSource_Linked1CancellationTokenSource::__cordl_internal_set__reg1(::System::Threading::CancellationTokenRegistration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reg1 = value;
}
inline void GlobalNamespace::CancellationTokenSource_Linked1CancellationTokenSource::_ctor(::System::Threading::CancellationToken token1) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CancellationTokenSource_Linked1CancellationTokenSource*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token1);
}
inline void GlobalNamespace::CancellationTokenSource_Linked1CancellationTokenSource::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CancellationTokenSource_Linked1CancellationTokenSource*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline ::GlobalNamespace::CancellationTokenSource_Linked1CancellationTokenSource*
GlobalNamespace::CancellationTokenSource_Linked1CancellationTokenSource::New_ctor(::System::Threading::CancellationToken token1) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CancellationTokenSource_Linked1CancellationTokenSource*>(token1));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CancellationTokenSource_Linked1CancellationTokenSource::CancellationTokenSource_Linked1CancellationTokenSource() {}
