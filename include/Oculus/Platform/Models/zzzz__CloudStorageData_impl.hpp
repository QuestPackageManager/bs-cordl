#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__CloudStorageData_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::CloudStorageData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::CloudStorageData::*)(void*)>(
    &::Oculus::Platform::Models::CloudStorageData::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2738694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::CloudStorageData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::CloudStorageData::__cordl_internal_get_Bucket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Bucket;
}
constexpr ::StringW const& Oculus::Platform::Models::CloudStorageData::__cordl_internal_get_Bucket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Bucket;
}
constexpr void Oculus::Platform::Models::CloudStorageData::__cordl_internal_set_Bucket(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Bucket)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Oculus::Platform::Models::CloudStorageData::__cordl_internal_get_Data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Data;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Oculus::Platform::Models::CloudStorageData::__cordl_internal_get_Data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Data;
}
constexpr void Oculus::Platform::Models::CloudStorageData::__cordl_internal_set_Data(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint32_t& Oculus::Platform::Models::CloudStorageData::__cordl_internal_get_DataSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DataSize;
}
constexpr uint32_t const& Oculus::Platform::Models::CloudStorageData::__cordl_internal_get_DataSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DataSize;
}
constexpr void Oculus::Platform::Models::CloudStorageData::__cordl_internal_set_DataSize(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DataSize = value;
}
constexpr ::StringW& Oculus::Platform::Models::CloudStorageData::__cordl_internal_get_Key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Key;
}
constexpr ::StringW const& Oculus::Platform::Models::CloudStorageData::__cordl_internal_get_Key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Key;
}
constexpr void Oculus::Platform::Models::CloudStorageData::__cordl_internal_set_Key(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Key)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::CloudStorageData* Oculus::Platform::Models::CloudStorageData::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::CloudStorageData*>(o));
}
inline void Oculus::Platform::Models::CloudStorageData::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::CloudStorageData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::CloudStorageData::CloudStorageData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
