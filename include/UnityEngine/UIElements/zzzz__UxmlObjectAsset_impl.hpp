#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UxmlObjectAsset.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlAsset_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectAsset_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlNamespaceDefinition_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlObjectAsset.get_isField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UxmlObjectAsset::*)()>(&::UnityEngine::UIElements::UxmlObjectAsset::get_isField)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cc080c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlObjectAsset*>(), { "get_isField", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlObjectAsset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlObjectAsset::*)(::StringW, bool, ::UnityEngine::UIElements::UxmlNamespaceDefinition)>(
    &::UnityEngine::UIElements::UxmlObjectAsset::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6cc0814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlObjectAsset*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::UIElements::UxmlNamespaceDefinition>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlObjectAsset.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::UxmlObjectAsset::*)()>(&::UnityEngine::UIElements::UxmlObjectAsset::ToString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6cc0824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlObjectAsset*>(), { ::i2c::class_of<::UnityEngine::UIElements::UxmlObjectAsset*>(), 3 }));
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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlObjectAsset*>(), { "get_isField", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UxmlObjectAsset::_ctor(::StringW fullTypeNameOrFieldName, bool isField, ::UnityEngine::UIElements::UxmlNamespaceDefinition xmlNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlObjectAsset*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::UIElements::UxmlNamespaceDefinition>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fullTypeNameOrFieldName, isField, xmlNamespace);
}
inline ::StringW UnityEngine::UIElements::UxmlObjectAsset::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UxmlObjectAsset*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UxmlObjectAsset* UnityEngine::UIElements::UxmlObjectAsset::New_ctor(::StringW fullTypeNameOrFieldName, bool isField,
                                                                                                      ::UnityEngine::UIElements::UxmlNamespaceDefinition xmlNamespace) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UxmlObjectAsset*>(fullTypeNameOrFieldName, isField, xmlNamespace));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlObjectAsset::UxmlObjectAsset() {}
