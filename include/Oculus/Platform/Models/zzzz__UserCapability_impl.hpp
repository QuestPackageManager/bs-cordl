#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__UserCapability_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::UserCapability._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::UserCapability::*)(void*)>(&::Oculus::Platform::Models::UserCapability::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2709038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::UserCapability*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::UserCapability::__get_Description() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Description;
}
constexpr ::StringW const& Oculus::Platform::Models::UserCapability::__get_Description() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Description;
}
constexpr void Oculus::Platform::Models::UserCapability::__set_Description(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Description)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Oculus::Platform::Models::UserCapability::__get_IsEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsEnabled;
}
constexpr bool const& Oculus::Platform::Models::UserCapability::__get_IsEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsEnabled;
}
constexpr void Oculus::Platform::Models::UserCapability::__set_IsEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsEnabled = value;
}
constexpr ::StringW& Oculus::Platform::Models::UserCapability::__get_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr ::StringW const& Oculus::Platform::Models::UserCapability::__get_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr void Oculus::Platform::Models::UserCapability::__set_Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::UserCapability::__get_ReasonCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReasonCode;
}
constexpr ::StringW const& Oculus::Platform::Models::UserCapability::__get_ReasonCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReasonCode;
}
constexpr void Oculus::Platform::Models::UserCapability::__set_ReasonCode(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ReasonCode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::UserCapability* Oculus::Platform::Models::UserCapability::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::UserCapability*>(o));
}
inline void Oculus::Platform::Models::UserCapability::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::UserCapability*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::UserCapability::UserCapability() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
