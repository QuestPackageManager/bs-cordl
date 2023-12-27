#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Diagnostics/zzzz__DebuggerDisplayAttribute_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::DebuggerDisplayAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::DebuggerDisplayAttribute::*)(::StringW)>(
    &::System::Diagnostics::DebuggerDisplayAttribute::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2579dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::DebuggerDisplayAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Diagnostics::DebuggerDisplayAttribute::__get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___name;
}
constexpr ::StringW const& System::Diagnostics::DebuggerDisplayAttribute::__get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___name;
}
constexpr void System::Diagnostics::DebuggerDisplayAttribute::__set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Diagnostics::DebuggerDisplayAttribute::__get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___value;
}
constexpr ::StringW const& System::Diagnostics::DebuggerDisplayAttribute::__get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___value;
}
constexpr void System::Diagnostics::DebuggerDisplayAttribute::__set_value(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Diagnostics::DebuggerDisplayAttribute::__get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___type;
}
constexpr ::StringW const& System::Diagnostics::DebuggerDisplayAttribute::__get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___type;
}
constexpr void System::Diagnostics::DebuggerDisplayAttribute::__set_type(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Diagnostics::DebuggerDisplayAttribute* System::Diagnostics::DebuggerDisplayAttribute::New_ctor(::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Diagnostics::DebuggerDisplayAttribute*>(value));
}
inline void System::Diagnostics::DebuggerDisplayAttribute::_ctor(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::DebuggerDisplayAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::DebuggerDisplayAttribute::DebuggerDisplayAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
