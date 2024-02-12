#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__CloudStorageConflictMetadata_def.hpp"
#include "Oculus/Platform/Models/zzzz__CloudStorageMetadata_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::CloudStorageConflictMetadata._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::CloudStorageConflictMetadata::*)(void*)>(
    &::Oculus::Platform::Models::CloudStorageConflictMetadata::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x27384cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::CloudStorageConflictMetadata*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::Models::CloudStorageMetadata*& Oculus::Platform::Models::CloudStorageConflictMetadata::__cordl_internal_get_Local() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Local;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::CloudStorageMetadata*> const& Oculus::Platform::Models::CloudStorageConflictMetadata::__cordl_internal_get_Local() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Local;
}
constexpr void Oculus::Platform::Models::CloudStorageConflictMetadata::__cordl_internal_set_Local(::Oculus::Platform::Models::CloudStorageMetadata* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Local)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::CloudStorageMetadata*& Oculus::Platform::Models::CloudStorageConflictMetadata::__cordl_internal_get_Remote() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Remote;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::CloudStorageMetadata*> const& Oculus::Platform::Models::CloudStorageConflictMetadata::__cordl_internal_get_Remote() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Remote;
}
constexpr void Oculus::Platform::Models::CloudStorageConflictMetadata::__cordl_internal_set_Remote(::Oculus::Platform::Models::CloudStorageMetadata* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Remote)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::CloudStorageConflictMetadata* Oculus::Platform::Models::CloudStorageConflictMetadata::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::CloudStorageConflictMetadata*>(o));
}
inline void Oculus::Platform::Models::CloudStorageConflictMetadata::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::CloudStorageConflictMetadata*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::CloudStorageConflictMetadata::CloudStorageConflictMetadata() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
