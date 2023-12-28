#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__GUITargetAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::GUITargetAttribute.GetGUITargetAttrValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Type*, ::StringW)>(&::UnityEngine::GUITargetAttribute::GetGUITargetAttrValue)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2d0877c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUITargetAttribute*>::get(), "GetGUITargetAttrValue", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::GUITargetAttribute::__get_displayMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayMask;
}
constexpr int32_t const& UnityEngine::GUITargetAttribute::__get_displayMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayMask;
}
constexpr void UnityEngine::GUITargetAttribute::__set_displayMask(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___displayMask = value;
}
inline int32_t UnityEngine::GUITargetAttribute::GetGUITargetAttrValue(::System::Type* klass, ::StringW methodName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUITargetAttribute*>::get(), "GetGUITargetAttrValue", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, klass, methodName);
}
// Ctor Parameters []
constexpr ::UnityEngine::GUITargetAttribute::GUITargetAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
