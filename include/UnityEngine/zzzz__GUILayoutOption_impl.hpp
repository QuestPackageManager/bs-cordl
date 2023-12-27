#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GUILayoutOption_impl.hpp"
#include "UnityEngine/zzzz__GUILayoutOption_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GUILayoutOption_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::__GUILayoutOption__Type::__GUILayoutOption__Type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::__GUILayoutOption__Type::__GUILayoutOption__Type() {}
constexpr ::UnityEngine::__GUILayoutOption__Type UnityEngine::__GUILayoutOption__Type::fixedWidth{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::__GUILayoutOption__Type UnityEngine::__GUILayoutOption__Type::fixedHeight{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::__GUILayoutOption__Type UnityEngine::__GUILayoutOption__Type::minWidth{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::__GUILayoutOption__Type UnityEngine::__GUILayoutOption__Type::maxWidth{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::__GUILayoutOption__Type UnityEngine::__GUILayoutOption__Type::minHeight{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::__GUILayoutOption__Type UnityEngine::__GUILayoutOption__Type::maxHeight{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::__GUILayoutOption__Type UnityEngine::__GUILayoutOption__Type::stretchWidth{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::__GUILayoutOption__Type UnityEngine::__GUILayoutOption__Type::stretchHeight{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::__GUILayoutOption__Type UnityEngine::__GUILayoutOption__Type::alignStart{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::__GUILayoutOption__Type UnityEngine::__GUILayoutOption__Type::alignMiddle{ static_cast<int32_t>(0x9) };
constexpr ::UnityEngine::__GUILayoutOption__Type UnityEngine::__GUILayoutOption__Type::alignEnd{ static_cast<int32_t>(0xa) };
constexpr ::UnityEngine::__GUILayoutOption__Type UnityEngine::__GUILayoutOption__Type::alignJustify{ static_cast<int32_t>(0xb) };
constexpr ::UnityEngine::__GUILayoutOption__Type UnityEngine::__GUILayoutOption__Type::equalSize{ static_cast<int32_t>(0xc) };
constexpr ::UnityEngine::__GUILayoutOption__Type UnityEngine::__GUILayoutOption__Type::spacing{ static_cast<int32_t>(0xd) };
//  Writing Method size for method: ::UnityEngine::GUILayoutOption._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUILayoutOption::*)(::UnityEngine::__GUILayoutOption__Type, ::System::Object*)>(
    &::UnityEngine::GUILayoutOption::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2d0e124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutOption*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__GUILayoutOption__Type>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::__GUILayoutOption__Type& UnityEngine::GUILayoutOption::__get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___type;
}
constexpr ::UnityEngine::__GUILayoutOption__Type const& UnityEngine::GUILayoutOption::__get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___type;
}
constexpr void UnityEngine::GUILayoutOption::__set_type(::UnityEngine::__GUILayoutOption__Type value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___type = value;
}
constexpr ::System::Object*& UnityEngine::GUILayoutOption::__get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___value;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& UnityEngine::GUILayoutOption::__get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___value;
}
constexpr void UnityEngine::GUILayoutOption::__set_value(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::GUILayoutOption* UnityEngine::GUILayoutOption::New_ctor(::UnityEngine::__GUILayoutOption__Type type, ::System::Object* value) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::GUILayoutOption*>(type, value));
}
inline void UnityEngine::GUILayoutOption::_ctor(::UnityEngine::__GUILayoutOption__Type type, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayoutOption*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__GUILayoutOption__Type>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::GUILayoutOption::GUILayoutOption() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
