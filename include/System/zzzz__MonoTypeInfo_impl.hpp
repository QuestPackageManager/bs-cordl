#pragma once
// IWYU pragma private; include "System/MonoTypeInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__MonoTypeInfo_def.hpp"
#include "System/Reflection/zzzz__RuntimeConstructorInfo_def.hpp"
//  Writing Method size for method: ::System::MonoTypeInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::MonoTypeInfo::*)()>(&::System::MonoTypeInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e326a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoTypeInfo*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& System::MonoTypeInfo::__cordl_internal_get_full_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___full_name;
}
constexpr ::StringW const& System::MonoTypeInfo::__cordl_internal_get_full_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___full_name;
}
constexpr void System::MonoTypeInfo::__cordl_internal_set_full_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___full_name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Reflection::RuntimeConstructorInfo*& System::MonoTypeInfo::__cordl_internal_get_default_ctor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___default_ctor;
}
constexpr ::System::Reflection::RuntimeConstructorInfo* const& System::MonoTypeInfo::__cordl_internal_get_default_ctor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___default_ctor;
}
constexpr void System::MonoTypeInfo::__cordl_internal_set_default_ctor(::System::Reflection::RuntimeConstructorInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___default_ctor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::MonoTypeInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoTypeInfo*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::MonoTypeInfo* System::MonoTypeInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::MonoTypeInfo*>());
}
// Ctor Parameters []
constexpr ::System::MonoTypeInfo::MonoTypeInfo() {}
