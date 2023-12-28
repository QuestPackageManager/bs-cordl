#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__MonoTODOAttribute_def.hpp"
//  Writing Method size for method: ::System::MonoTODOAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::MonoTODOAttribute::*)()>(&::System::MonoTODOAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25d7abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoTODOAttribute*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoTODOAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::MonoTODOAttribute::*)(::StringW)>(&::System::MonoTODOAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25d7acc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoTODOAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::MonoTODOAttribute::__get_comment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comment;
}
constexpr ::StringW const& System::MonoTODOAttribute::__get_comment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comment;
}
constexpr void System::MonoTODOAttribute::__set_comment(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___comment)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::MonoTODOAttribute* System::MonoTODOAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::MonoTODOAttribute*>());
}
inline void System::MonoTODOAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoTODOAttribute*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::MonoTODOAttribute* System::MonoTODOAttribute::New_ctor(::StringW comment) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::MonoTODOAttribute*>(comment));
}
inline void System::MonoTODOAttribute::_ctor(::StringW comment) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoTODOAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, comment);
}
// Ctor Parameters []
constexpr ::System::MonoTODOAttribute::MonoTODOAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
