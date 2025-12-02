#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlObjectAsset.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlAsset_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectAsset_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlNamespaceDefinition_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlObjectAsset.get_isField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UxmlObjectAsset::*)()>(&::UnityEngine::UIElements::UxmlObjectAsset::get_isField)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a8c0c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlObjectAsset*>::get(),
                                                                               "get_isField", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlObjectAsset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::UIElements::UxmlObjectAsset::*)(::StringW, bool, ::UnityEngine::UIElements::UxmlNamespaceDefinition)>(&::UnityEngine::UIElements::UxmlObjectAsset::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6a8c0d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlObjectAsset*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UxmlNamespaceDefinition>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlObjectAsset.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::UxmlObjectAsset::*)()>(&::UnityEngine::UIElements::UxmlObjectAsset::ToString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6a8c0e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlObjectAsset*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlObjectAsset*>::get(), 3));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::UIElements::UxmlObjectAsset::__cordl_internal_get_m_IsField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsField;
}
constexpr bool const& UnityEngine::UIElements::UxmlObjectAsset::__cordl_internal_get_m_IsField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsField;
}
constexpr void UnityEngine::UIElements::UxmlObjectAsset::__cordl_internal_set_m_IsField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsField = value;
}
inline bool UnityEngine::UIElements::UxmlObjectAsset::get_isField() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlObjectAsset*>::get(), "get_isField",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UxmlObjectAsset::_ctor(::StringW fullTypeNameOrFieldName, bool isField, ::UnityEngine::UIElements::UxmlNamespaceDefinition xmlNamespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlObjectAsset*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UxmlNamespaceDefinition>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fullTypeNameOrFieldName, isField, xmlNamespace);
}
inline ::StringW UnityEngine::UIElements::UxmlObjectAsset::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlObjectAsset*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UxmlObjectAsset* UnityEngine::UIElements::UxmlObjectAsset::New_ctor(::StringW fullTypeNameOrFieldName, bool isField,
                                                                                                      ::UnityEngine::UIElements::UxmlNamespaceDefinition xmlNamespace) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UxmlObjectAsset*>(fullTypeNameOrFieldName, isField, xmlNamespace));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlObjectAsset::UxmlObjectAsset() {}
