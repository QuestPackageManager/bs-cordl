#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__AppDownloadResult_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::AppDownloadResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::AppDownloadResult::*)(void*)>(
    &::Oculus::Platform::Models::AppDownloadResult::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2703e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AppDownloadResult*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr int64_t& Oculus::Platform::Models::AppDownloadResult::__get_Timestamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Timestamp;
}
constexpr int64_t const& Oculus::Platform::Models::AppDownloadResult::__get_Timestamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Timestamp;
}
constexpr void Oculus::Platform::Models::AppDownloadResult::__set_Timestamp(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___Timestamp = value;
}
inline ::Oculus::Platform::Models::AppDownloadResult* Oculus::Platform::Models::AppDownloadResult::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::AppDownloadResult*>(o));
}
inline void Oculus::Platform::Models::AppDownloadResult::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AppDownloadResult*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::AppDownloadResult::AppDownloadResult() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
