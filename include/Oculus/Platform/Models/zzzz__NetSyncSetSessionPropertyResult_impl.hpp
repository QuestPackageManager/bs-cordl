#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/NetSyncSetSessionPropertyResult.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSetSessionPropertyResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSession_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::NetSyncSetSessionPropertyResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::NetSyncSetSessionPropertyResult::*)(::System::IntPtr)>(
    &::Oculus::Platform::Models::NetSyncSetSessionPropertyResult::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3f92840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::Models::NetSyncSession*& Oculus::Platform::Models::NetSyncSetSessionPropertyResult::__cordl_internal_get_Session() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Session;
}
constexpr ::Oculus::Platform::Models::NetSyncSession* const& Oculus::Platform::Models::NetSyncSetSessionPropertyResult::__cordl_internal_get_Session() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Session;
}
constexpr void Oculus::Platform::Models::NetSyncSetSessionPropertyResult::__cordl_internal_set_Session(::Oculus::Platform::Models::NetSyncSession* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Session)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Oculus::Platform::Models::NetSyncSetSessionPropertyResult::_ctor(::System::IntPtr o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::NetSyncSetSessionPropertyResult* Oculus::Platform::Models::NetSyncSetSessionPropertyResult::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::NetSyncSetSessionPropertyResult::NetSyncSetSessionPropertyResult() {}
