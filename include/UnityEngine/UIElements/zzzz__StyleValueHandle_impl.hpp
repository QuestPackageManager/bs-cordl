#pragma once
#include "UnityEngine/UIElements/zzzz__StyleValueType_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueHandle_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueType_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleValueHandle.get_valueType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleValueType (::UnityEngine::UIElements::StyleValueHandle::*)()>(
    &::UnityEngine::UIElements::StyleValueHandle::get_valueType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e6a974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleValueHandle>::get(),
                                                                               "get_valueType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StyleValueHandle.set_valueType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleValueHandle::*)(::UnityEngine::UIElements::StyleValueType)>(
    &::UnityEngine::UIElements::StyleValueHandle::set_valueType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e6b53c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleValueHandle>::get(), "set_valueType", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueType>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::StyleValueType UnityEngine::UIElements::StyleValueHandle::get_valueType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleValueHandle>::get(),
                                                                             "get_valueType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleValueType, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::StyleValueHandle::set_valueType(::UnityEngine::UIElements::StyleValueType value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleValueHandle>::get(), "set_valueType", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleValueType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_ValueType", ty: "::UnityEngine::UIElements::StyleValueType", modifiers: "", def_value: Some("{}") }, CppParam { name: "valueIndex", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleValueHandle::StyleValueHandle(::UnityEngine::UIElements::StyleValueType m_ValueType, int32_t valueIndex) noexcept {
  this->m_ValueType = m_ValueType;
  this->valueIndex = valueIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleValueHandle::StyleValueHandle() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
