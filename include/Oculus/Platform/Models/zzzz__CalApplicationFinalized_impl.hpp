#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__CalApplicationFinalized_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::CalApplicationFinalized._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::CalApplicationFinalized::*)(void*)>(
    &::Oculus::Platform::Models::CalApplicationFinalized::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x25b1cbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::CalApplicationFinalized*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Platform::Models::CalApplicationFinalized::__get_CountdownMS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CountdownMS;
}
constexpr int32_t const& Oculus::Platform::Models::CalApplicationFinalized::__get_CountdownMS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CountdownMS;
}
constexpr void Oculus::Platform::Models::CalApplicationFinalized::__set_CountdownMS(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CountdownMS = value;
}
constexpr uint64_t& Oculus::Platform::Models::CalApplicationFinalized::__get__cordl_ID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr uint64_t const& Oculus::Platform::Models::CalApplicationFinalized::__get__cordl_ID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr void Oculus::Platform::Models::CalApplicationFinalized::__set__cordl_ID(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cordl_ID = value;
}
constexpr ::StringW& Oculus::Platform::Models::CalApplicationFinalized::__get_LaunchDetails() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LaunchDetails;
}
constexpr ::StringW const& Oculus::Platform::Models::CalApplicationFinalized::__get_LaunchDetails() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LaunchDetails;
}
constexpr void Oculus::Platform::Models::CalApplicationFinalized::__set_LaunchDetails(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___LaunchDetails)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::CalApplicationFinalized* Oculus::Platform::Models::CalApplicationFinalized::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::CalApplicationFinalized*>(o));
}
inline void Oculus::Platform::Models::CalApplicationFinalized::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::CalApplicationFinalized*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::CalApplicationFinalized::CalApplicationFinalized() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
