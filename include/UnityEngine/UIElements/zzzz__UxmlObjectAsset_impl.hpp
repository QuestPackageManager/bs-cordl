#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlObjectAsset.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlAsset_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectAsset_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlAsset_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlNamespaceDefinition_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlObjectAsset.HasParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UxmlObjectAsset::*)()>(&::UnityEngine::UIElements::UxmlObjectAsset::HasParent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x7147ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlObjectAsset*>(), { ::i2c::class_of<::UnityEngine::UIElements::UxmlObjectAsset*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlObjectAsset.get_parentId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::UxmlObjectAsset::*)()>(&::UnityEngine::UIElements::UxmlObjectAsset::get_parentId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7147edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlObjectAsset*>(), { "get_parentId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlObjectAsset.set_parentId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlObjectAsset::*)(int32_t)>(&::UnityEngine::UIElements::UxmlObjectAsset::set_parentId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7147ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlObjectAsset*>(), { "set_parentId", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlObjectAsset.get_isField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UxmlObjectAsset::*)()>(&::UnityEngine::UIElements::UxmlObjectAsset::get_isField)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7147eec;

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
  constexpr static std::size_t addrs = 0x7147ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlObjectAsset*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::UIElements::UxmlNamespaceDefinition>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlObjectAsset.Accepts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UxmlObjectAsset::*)(::UnityEngine::UIElements::UxmlAsset*, ::by_ref<::StringW>)>(
    &::UnityEngine::UIElements::UxmlObjectAsset::Accepts)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x7147f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlObjectAsset*>(), { ::i2c::class_of<::UnityEngine::UIElements::UxmlObjectAsset*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlObjectAsset.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::UxmlObjectAsset::*)()>(&::UnityEngine::UIElements::UxmlObjectAsset::ToString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x7148074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlObjectAsset*>(), { ::i2c::class_of<::UnityEngine::UIElements::UxmlObjectAsset*>(), 3 }));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::UIElements::UxmlObjectAsset::__cordl_internal_get_m_ParentId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParentId;
}
constexpr int32_t const& UnityEngine::UIElements::UxmlObjectAsset::__cordl_internal_get_m_ParentId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParentId;
}
constexpr void UnityEngine::UIElements::UxmlObjectAsset::__cordl_internal_set_m_ParentId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ParentId = value;
}
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
inline bool UnityEngine::UIElements::UxmlObjectAsset::HasParent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UxmlObjectAsset*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::UxmlObjectAsset::get_parentId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlObjectAsset*>(), { "get_parentId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UxmlObjectAsset::set_parentId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlObjectAsset*>(), { "set_parentId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
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
inline bool UnityEngine::UIElements::UxmlObjectAsset::Accepts(::UnityEngine::UIElements::UxmlAsset* asset, ::by_ref<::StringW> errorMessage) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UxmlObjectAsset*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, asset, errorMessage);
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
