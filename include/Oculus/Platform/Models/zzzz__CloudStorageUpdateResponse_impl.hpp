#pragma once
#include "Oculus/Platform/zzzz__CloudStorageUpdateStatus_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__CloudStorageUpdateResponse_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::CloudStorageUpdateResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::CloudStorageUpdateResponse::*)(void*)>(
    &::Oculus::Platform::Models::CloudStorageUpdateResponse::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2738998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::CloudStorageUpdateResponse*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::CloudStorageUpdateResponse::__cordl_internal_get_Bucket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Bucket;
}
constexpr ::StringW const& Oculus::Platform::Models::CloudStorageUpdateResponse::__cordl_internal_get_Bucket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Bucket;
}
constexpr void Oculus::Platform::Models::CloudStorageUpdateResponse::__cordl_internal_set_Bucket(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Bucket)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::CloudStorageUpdateResponse::__cordl_internal_get_Key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Key;
}
constexpr ::StringW const& Oculus::Platform::Models::CloudStorageUpdateResponse::__cordl_internal_get_Key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Key;
}
constexpr void Oculus::Platform::Models::CloudStorageUpdateResponse::__cordl_internal_set_Key(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Key)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::CloudStorageUpdateStatus& Oculus::Platform::Models::CloudStorageUpdateResponse::__cordl_internal_get_Status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Status;
}
constexpr ::Oculus::Platform::CloudStorageUpdateStatus const& Oculus::Platform::Models::CloudStorageUpdateResponse::__cordl_internal_get_Status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Status;
}
constexpr void Oculus::Platform::Models::CloudStorageUpdateResponse::__cordl_internal_set_Status(::Oculus::Platform::CloudStorageUpdateStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Status = value;
}
constexpr ::StringW& Oculus::Platform::Models::CloudStorageUpdateResponse::__cordl_internal_get_VersionHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VersionHandle;
}
constexpr ::StringW const& Oculus::Platform::Models::CloudStorageUpdateResponse::__cordl_internal_get_VersionHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VersionHandle;
}
constexpr void Oculus::Platform::Models::CloudStorageUpdateResponse::__cordl_internal_set_VersionHandle(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___VersionHandle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::CloudStorageUpdateResponse* Oculus::Platform::Models::CloudStorageUpdateResponse::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::CloudStorageUpdateResponse*>(o));
}
inline void Oculus::Platform::Models::CloudStorageUpdateResponse::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::CloudStorageUpdateResponse*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::CloudStorageUpdateResponse::CloudStorageUpdateResponse() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
