#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/AppDownloadResult.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__AppDownloadResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::AppDownloadResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::AppDownloadResult::*)(::System::IntPtr)>(
    &::Oculus::Platform::Models::AppDownloadResult::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3f2dbcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AppDownloadResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
constexpr int64_t& Oculus::Platform::Models::AppDownloadResult::__cordl_internal_get_Timestamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Timestamp;
}
constexpr int64_t const& Oculus::Platform::Models::AppDownloadResult::__cordl_internal_get_Timestamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Timestamp;
}
constexpr void Oculus::Platform::Models::AppDownloadResult::__cordl_internal_set_Timestamp(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Timestamp = value;
}
inline ::Oculus::Platform::Models::AppDownloadResult* Oculus::Platform::Models::AppDownloadResult::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::AppDownloadResult*>(o));
}
inline void Oculus::Platform::Models::AppDownloadResult::_ctor(::System::IntPtr o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AppDownloadResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::AppDownloadResult::AppDownloadResult() {}
