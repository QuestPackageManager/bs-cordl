#pragma once
// IWYU pragma private; include "System/DelegateData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__DelegateData_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::DelegateData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::DelegateData::*)()>(&::System::DelegateData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29adb58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DelegateData*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::DelegateData::__cordl_internal_get_target_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target_type;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& System::DelegateData::__cordl_internal_get_target_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___target_type;
}
constexpr void System::DelegateData::__cordl_internal_set_target_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___target_type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::DelegateData::__cordl_internal_get_method_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method_name;
}
constexpr ::StringW const& System::DelegateData::__cordl_internal_get_method_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method_name;
}
constexpr void System::DelegateData::__cordl_internal_set_method_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___method_name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::DelegateData::__cordl_internal_get_curried_first_arg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curried_first_arg;
}
constexpr bool const& System::DelegateData::__cordl_internal_get_curried_first_arg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curried_first_arg;
}
constexpr void System::DelegateData::__cordl_internal_set_curried_first_arg(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curried_first_arg = value;
}
inline ::System::DelegateData* System::DelegateData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::DelegateData*>());
}
inline void System::DelegateData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DelegateData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::DelegateData::DelegateData() {}
