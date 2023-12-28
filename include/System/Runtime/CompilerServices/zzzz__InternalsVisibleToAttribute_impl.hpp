#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__InternalsVisibleToAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::InternalsVisibleToAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::InternalsVisibleToAttribute::*)(::StringW)>(
    &::System::Runtime::CompilerServices::InternalsVisibleToAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x24dec34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::InternalsVisibleToAttribute*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::InternalsVisibleToAttribute.set_AllInternalsVisible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::InternalsVisibleToAttribute::*)(bool)>(
    &::System::Runtime::CompilerServices::InternalsVisibleToAttribute::set_AllInternalsVisible)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24dec64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::InternalsVisibleToAttribute*>::get(), "set_AllInternalsVisible",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::CompilerServices::InternalsVisibleToAttribute::__get__assemblyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assemblyName;
}
constexpr ::StringW const& System::Runtime::CompilerServices::InternalsVisibleToAttribute::__get__assemblyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____assemblyName;
}
constexpr void System::Runtime::CompilerServices::InternalsVisibleToAttribute::__set__assemblyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____assemblyName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Runtime::CompilerServices::InternalsVisibleToAttribute::__get__allInternalsVisible() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allInternalsVisible;
}
constexpr bool const& System::Runtime::CompilerServices::InternalsVisibleToAttribute::__get__allInternalsVisible() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allInternalsVisible;
}
constexpr void System::Runtime::CompilerServices::InternalsVisibleToAttribute::__set__allInternalsVisible(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allInternalsVisible = value;
}
inline ::System::Runtime::CompilerServices::InternalsVisibleToAttribute* System::Runtime::CompilerServices::InternalsVisibleToAttribute::New_ctor(::StringW assemblyName) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::CompilerServices::InternalsVisibleToAttribute*>(assemblyName));
}
inline void System::Runtime::CompilerServices::InternalsVisibleToAttribute::_ctor(::StringW assemblyName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::InternalsVisibleToAttribute*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assemblyName);
}
inline void System::Runtime::CompilerServices::InternalsVisibleToAttribute::set_AllInternalsVisible(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::InternalsVisibleToAttribute*>::get(), "set_AllInternalsVisible",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::InternalsVisibleToAttribute::InternalsVisibleToAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
