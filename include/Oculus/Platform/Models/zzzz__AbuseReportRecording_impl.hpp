#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__AbuseReportRecording_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::AbuseReportRecording._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::AbuseReportRecording::*)(void*)>(
    &::Oculus::Platform::Models::AbuseReportRecording::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x25b04f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AbuseReportRecording*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::AbuseReportRecording::__get_RecordingUuid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RecordingUuid;
}
constexpr ::StringW const& Oculus::Platform::Models::AbuseReportRecording::__get_RecordingUuid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RecordingUuid;
}
constexpr void Oculus::Platform::Models::AbuseReportRecording::__set_RecordingUuid(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RecordingUuid)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::AbuseReportRecording* Oculus::Platform::Models::AbuseReportRecording::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::AbuseReportRecording*>(o));
}
inline void Oculus::Platform::Models::AbuseReportRecording::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AbuseReportRecording*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::AbuseReportRecording::AbuseReportRecording() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
