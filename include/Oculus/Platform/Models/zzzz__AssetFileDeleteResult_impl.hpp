#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/AssetFileDeleteResult.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDeleteResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::AssetFileDeleteResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::AssetFileDeleteResult::*)(::System::IntPtr)>(
    &::Oculus::Platform::Models::AssetFileDeleteResult::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c3f5a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AssetFileDeleteResult*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
constexpr uint64_t& Oculus::Platform::Models::AssetFileDeleteResult::__cordl_internal_get_AssetFileId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AssetFileId;
}
constexpr uint64_t const& Oculus::Platform::Models::AssetFileDeleteResult::__cordl_internal_get_AssetFileId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AssetFileId;
}
constexpr void Oculus::Platform::Models::AssetFileDeleteResult::__cordl_internal_set_AssetFileId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AssetFileId = value;
}
constexpr uint64_t& Oculus::Platform::Models::AssetFileDeleteResult::__cordl_internal_get_AssetId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AssetId;
}
constexpr uint64_t const& Oculus::Platform::Models::AssetFileDeleteResult::__cordl_internal_get_AssetId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AssetId;
}
constexpr void Oculus::Platform::Models::AssetFileDeleteResult::__cordl_internal_set_AssetId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AssetId = value;
}
constexpr ::StringW& Oculus::Platform::Models::AssetFileDeleteResult::__cordl_internal_get_Filepath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Filepath;
}
constexpr ::StringW const& Oculus::Platform::Models::AssetFileDeleteResult::__cordl_internal_get_Filepath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Filepath;
}
constexpr void Oculus::Platform::Models::AssetFileDeleteResult::__cordl_internal_set_Filepath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Filepath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Oculus::Platform::Models::AssetFileDeleteResult::__cordl_internal_get_Success() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Success;
}
constexpr bool const& Oculus::Platform::Models::AssetFileDeleteResult::__cordl_internal_get_Success() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Success;
}
constexpr void Oculus::Platform::Models::AssetFileDeleteResult::__cordl_internal_set_Success(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Success = value;
}
inline void Oculus::Platform::Models::AssetFileDeleteResult::_ctor(::System::IntPtr o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AssetFileDeleteResult*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::AssetFileDeleteResult* Oculus::Platform::Models::AssetFileDeleteResult::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::AssetFileDeleteResult*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::AssetFileDeleteResult::AssetFileDeleteResult() {}
