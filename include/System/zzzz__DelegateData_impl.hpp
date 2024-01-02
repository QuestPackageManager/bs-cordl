#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__DelegateData_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::DelegateData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::DelegateData::*)()>(&::System::DelegateData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25f7bf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DelegateData*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::DelegateData::__get_target_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target_type;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& System::DelegateData::__get_target_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target_type;
}
constexpr void System::DelegateData::__set_target_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___target_type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::DelegateData::__get_method_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method_name;
}
constexpr ::StringW const& System::DelegateData::__get_method_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method_name;
}
constexpr void System::DelegateData::__set_method_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___method_name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::DelegateData::__get_curried_first_arg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curried_first_arg;
}
constexpr bool const& System::DelegateData::__get_curried_first_arg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curried_first_arg;
}
constexpr void System::DelegateData::__set_curried_first_arg(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curried_first_arg = value;
}
inline ::System::DelegateData* System::DelegateData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::DelegateData*>());
}
inline void System::DelegateData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DelegateData*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::DelegateData::DelegateData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
