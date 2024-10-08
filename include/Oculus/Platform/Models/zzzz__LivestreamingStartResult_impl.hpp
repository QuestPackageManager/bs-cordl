#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/LivestreamingStartResult.hpp"
#include "Oculus/Platform/zzzz__LivestreamingStartStatus_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingStartResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::LivestreamingStartResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::LivestreamingStartResult::*)(::System::IntPtr)>(
    &::Oculus::Platform::Models::LivestreamingStartResult::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3f1c48c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LivestreamingStartResult*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::LivestreamingStartStatus& Oculus::Platform::Models::LivestreamingStartResult::__cordl_internal_get_StreamingResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StreamingResult;
}
constexpr ::Oculus::Platform::LivestreamingStartStatus const& Oculus::Platform::Models::LivestreamingStartResult::__cordl_internal_get_StreamingResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StreamingResult;
}
constexpr void Oculus::Platform::Models::LivestreamingStartResult::__cordl_internal_set_StreamingResult(::Oculus::Platform::LivestreamingStartStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___StreamingResult = value;
}
inline ::Oculus::Platform::Models::LivestreamingStartResult* Oculus::Platform::Models::LivestreamingStartResult::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::LivestreamingStartResult*>(o));
}
inline void Oculus::Platform::Models::LivestreamingStartResult::_ctor(::System::IntPtr o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LivestreamingStartResult*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::LivestreamingStartResult::LivestreamingStartResult() {}
