#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/AssetFileDownloadResult.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::AssetFileDownloadResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::AssetFileDownloadResult::*)(::System::IntPtr)>(
    &::Oculus::Platform::Models::AssetFileDownloadResult::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3f946c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AssetFileDownloadResult*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
constexpr uint64_t& Oculus::Platform::Models::AssetFileDownloadResult::__cordl_internal_get_AssetId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AssetId;
}
constexpr uint64_t const& Oculus::Platform::Models::AssetFileDownloadResult::__cordl_internal_get_AssetId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AssetId;
}
constexpr void Oculus::Platform::Models::AssetFileDownloadResult::__cordl_internal_set_AssetId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AssetId = value;
}
constexpr ::StringW& Oculus::Platform::Models::AssetFileDownloadResult::__cordl_internal_get_Filepath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Filepath;
}
constexpr ::StringW const& Oculus::Platform::Models::AssetFileDownloadResult::__cordl_internal_get_Filepath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Filepath;
}
constexpr void Oculus::Platform::Models::AssetFileDownloadResult::__cordl_internal_set_Filepath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Filepath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Oculus::Platform::Models::AssetFileDownloadResult::_ctor(::System::IntPtr o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AssetFileDownloadResult*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::AssetFileDownloadResult* Oculus::Platform::Models::AssetFileDownloadResult::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::AssetFileDownloadResult*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::AssetFileDownloadResult::AssetFileDownloadResult() {}
