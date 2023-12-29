#pragma once
#include "Oculus/Platform/zzzz__CloudStorageDataStatus_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__CloudStorageMetadata_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::CloudStorageMetadata._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::CloudStorageMetadata::*)(void*)>(
    &::Oculus::Platform::Models::CloudStorageMetadata::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x25b2d24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::CloudStorageMetadata*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::CloudStorageMetadata::__get_Bucket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Bucket;
}
constexpr ::StringW const& Oculus::Platform::Models::CloudStorageMetadata::__get_Bucket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Bucket;
}
constexpr void Oculus::Platform::Models::CloudStorageMetadata::__set_Bucket(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Bucket)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& Oculus::Platform::Models::CloudStorageMetadata::__get_Counter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Counter;
}
constexpr int64_t const& Oculus::Platform::Models::CloudStorageMetadata::__get_Counter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Counter;
}
constexpr void Oculus::Platform::Models::CloudStorageMetadata::__set_Counter(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Counter = value;
}
constexpr uint32_t& Oculus::Platform::Models::CloudStorageMetadata::__get_DataSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DataSize;
}
constexpr uint32_t const& Oculus::Platform::Models::CloudStorageMetadata::__get_DataSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DataSize;
}
constexpr void Oculus::Platform::Models::CloudStorageMetadata::__set_DataSize(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DataSize = value;
}
constexpr ::StringW& Oculus::Platform::Models::CloudStorageMetadata::__get_ExtraData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExtraData;
}
constexpr ::StringW const& Oculus::Platform::Models::CloudStorageMetadata::__get_ExtraData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExtraData;
}
constexpr void Oculus::Platform::Models::CloudStorageMetadata::__set_ExtraData(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ExtraData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::CloudStorageMetadata::__get_Key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Key;
}
constexpr ::StringW const& Oculus::Platform::Models::CloudStorageMetadata::__get_Key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Key;
}
constexpr void Oculus::Platform::Models::CloudStorageMetadata::__set_Key(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Key)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint64_t& Oculus::Platform::Models::CloudStorageMetadata::__get_SaveTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SaveTime;
}
constexpr uint64_t const& Oculus::Platform::Models::CloudStorageMetadata::__get_SaveTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SaveTime;
}
constexpr void Oculus::Platform::Models::CloudStorageMetadata::__set_SaveTime(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SaveTime = value;
}
constexpr ::Oculus::Platform::CloudStorageDataStatus& Oculus::Platform::Models::CloudStorageMetadata::__get_Status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Status;
}
constexpr ::Oculus::Platform::CloudStorageDataStatus const& Oculus::Platform::Models::CloudStorageMetadata::__get_Status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Status;
}
constexpr void Oculus::Platform::Models::CloudStorageMetadata::__set_Status(::Oculus::Platform::CloudStorageDataStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Status = value;
}
constexpr ::StringW& Oculus::Platform::Models::CloudStorageMetadata::__get_VersionHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VersionHandle;
}
constexpr ::StringW const& Oculus::Platform::Models::CloudStorageMetadata::__get_VersionHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VersionHandle;
}
constexpr void Oculus::Platform::Models::CloudStorageMetadata::__set_VersionHandle(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___VersionHandle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::CloudStorageMetadata* Oculus::Platform::Models::CloudStorageMetadata::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::CloudStorageMetadata*>(o));
}
inline void Oculus::Platform::Models::CloudStorageMetadata::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::CloudStorageMetadata*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::CloudStorageMetadata::CloudStorageMetadata() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
