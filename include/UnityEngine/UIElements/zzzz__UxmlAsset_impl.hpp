#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UxmlAsset.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlNamespaceDefinition_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlAsset_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlNamespaceDefinition_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAsset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlAsset::*)(::StringW, ::UnityEngine::UIElements::UxmlNamespaceDefinition)>(
    &::UnityEngine::UIElements::UxmlAsset::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6cc0440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAsset*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::UIElements::UxmlNamespaceDefinition>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAsset.get_fullTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::UxmlAsset::*)()>(&::UnityEngine::UIElements::UxmlAsset::get_fullTypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cc044c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAsset*>(), { "get_fullTypeName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAsset.get_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::UxmlAsset::*)()>(&::UnityEngine::UIElements::UxmlAsset::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cc0454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAsset*>(), { "get_id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAsset.set_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlAsset::*)(int32_t)>(&::UnityEngine::UIElements::UxmlAsset::set_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cc045c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAsset*>(), { "set_id", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAsset.get_orderInDocument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::UxmlAsset::*)()>(&::UnityEngine::UIElements::UxmlAsset::get_orderInDocument)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cc0464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAsset*>(), { "get_orderInDocument", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAsset.get_parentId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::UxmlAsset::*)()>(&::UnityEngine::UIElements::UxmlAsset::get_parentId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cc046c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAsset*>(), { "get_parentId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAsset.set_parentId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlAsset::*)(int32_t)>(&::UnityEngine::UIElements::UxmlAsset::set_parentId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cc0474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAsset*>(), { "set_parentId", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAsset.TryGetAttributeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UxmlAsset::*)(::StringW, ::by_ref<::StringW>)>(&::UnityEngine::UIElements::UxmlAsset::TryGetAttributeValue)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6cc047c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAsset*>(),
                                                                                           { "TryGetAttributeValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAsset.SetAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlAsset::*)(::StringW, ::StringW)>(&::UnityEngine::UIElements::UxmlAsset::SetAttribute)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cbe054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAsset*>(), { "SetAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAsset.RemoveAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlAsset::*)(::StringW)>(&::UnityEngine::UIElements::UxmlAsset::RemoveAttribute)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6cbdf58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAsset*>(), { "RemoveAttribute", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAsset.SetOrAddProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlAsset::*)(::StringW, ::StringW)>(&::UnityEngine::UIElements::UxmlAsset::SetOrAddProperty)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x6cc055c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAsset*>(), { "SetOrAddProperty", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAsset.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::UxmlAsset::*)()>(&::UnityEngine::UIElements::UxmlAsset::ToString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6cc076c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAsset*>(), { ::i2c::class_of<::UnityEngine::UIElements::UxmlAsset*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::UxmlAsset::__cordl_internal_get_m_FullTypeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FullTypeName;
}
constexpr ::StringW const& UnityEngine::UIElements::UxmlAsset::__cordl_internal_get_m_FullTypeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FullTypeName;
}
constexpr void UnityEngine::UIElements::UxmlAsset::__cordl_internal_set_m_FullTypeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FullTypeName = value;
}
constexpr ::UnityEngine::UIElements::UxmlNamespaceDefinition& UnityEngine::UIElements::UxmlAsset::__cordl_internal_get_m_XmlNamespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XmlNamespace;
}
constexpr ::UnityEngine::UIElements::UxmlNamespaceDefinition const& UnityEngine::UIElements::UxmlAsset::__cordl_internal_get_m_XmlNamespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XmlNamespace;
}
constexpr void UnityEngine::UIElements::UxmlAsset::__cordl_internal_set_m_XmlNamespace(::UnityEngine::UIElements::UxmlNamespaceDefinition value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_XmlNamespace = value;
}
constexpr int32_t& UnityEngine::UIElements::UxmlAsset::__cordl_internal_get_m_Id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Id;
}
constexpr int32_t const& UnityEngine::UIElements::UxmlAsset::__cordl_internal_get_m_Id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Id;
}
constexpr void UnityEngine::UIElements::UxmlAsset::__cordl_internal_set_m_Id(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Id = value;
}
constexpr int32_t& UnityEngine::UIElements::UxmlAsset::__cordl_internal_get_m_OrderInDocument() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OrderInDocument;
}
constexpr int32_t const& UnityEngine::UIElements::UxmlAsset::__cordl_internal_get_m_OrderInDocument() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OrderInDocument;
}
constexpr void UnityEngine::UIElements::UxmlAsset::__cordl_internal_set_m_OrderInDocument(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OrderInDocument = value;
}
constexpr int32_t& UnityEngine::UIElements::UxmlAsset::__cordl_internal_get_m_ParentId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParentId;
}
constexpr int32_t const& UnityEngine::UIElements::UxmlAsset::__cordl_internal_get_m_ParentId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParentId;
}
constexpr void UnityEngine::UIElements::UxmlAsset::__cordl_internal_set_m_ParentId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ParentId = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlNamespaceDefinition>*& UnityEngine::UIElements::UxmlAsset::__cordl_internal_get_m_NamespaceDefinitions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NamespaceDefinitions;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlNamespaceDefinition>* const& UnityEngine::UIElements::UxmlAsset::__cordl_internal_get_m_NamespaceDefinitions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NamespaceDefinitions;
}
constexpr void UnityEngine::UIElements::UxmlAsset::__cordl_internal_set_m_NamespaceDefinitions(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UxmlNamespaceDefinition>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NamespaceDefinitions = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::UIElements::UxmlAsset::__cordl_internal_get_m_Properties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Properties;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& UnityEngine::UIElements::UxmlAsset::__cordl_internal_get_m_Properties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Properties;
}
constexpr void UnityEngine::UIElements::UxmlAsset::__cordl_internal_set_m_Properties(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Properties = value;
}
inline void UnityEngine::UIElements::UxmlAsset::_ctor(::StringW fullTypeName, ::UnityEngine::UIElements::UxmlNamespaceDefinition xmlNamespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAsset*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::UIElements::UxmlNamespaceDefinition>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fullTypeName, xmlNamespace);
}
inline ::StringW UnityEngine::UIElements::UxmlAsset::get_fullTypeName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAsset*>(), { "get_fullTypeName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::UxmlAsset::get_id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAsset*>(), { "get_id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UxmlAsset::set_id(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAsset*>(), { "set_id", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::UxmlAsset::get_orderInDocument() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAsset*>(), { "get_orderInDocument", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::UxmlAsset::get_parentId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAsset*>(), { "get_parentId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UxmlAsset::set_parentId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAsset*>(), { "set_parentId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::UxmlAsset::TryGetAttributeValue(::StringW propertyName, ::by_ref<::StringW> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAsset*>(),
                                                                                         { "TryGetAttributeValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, propertyName, value);
}
inline void UnityEngine::UIElements::UxmlAsset::SetAttribute(::StringW name, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAsset*>(), { "SetAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void UnityEngine::UIElements::UxmlAsset::RemoveAttribute(::StringW attributeName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAsset*>(), { "RemoveAttribute", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributeName);
}
inline void UnityEngine::UIElements::UxmlAsset::SetOrAddProperty(::StringW propertyName, ::StringW propertyValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAsset*>(), { "SetOrAddProperty", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName, propertyValue);
}
inline ::StringW UnityEngine::UIElements::UxmlAsset::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UxmlAsset*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UxmlAsset* UnityEngine::UIElements::UxmlAsset::New_ctor(::StringW fullTypeName, ::UnityEngine::UIElements::UxmlNamespaceDefinition xmlNamespace) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UxmlAsset*>(fullTypeName, xmlNamespace));
}
/// @brief Convert operator to "::UnityEngine::UIElements::IUxmlAttributes"
constexpr UnityEngine::UIElements::UxmlAsset::operator ::UnityEngine::UIElements::IUxmlAttributes*() noexcept {
  return static_cast<::UnityEngine::UIElements::IUxmlAttributes*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IUxmlAttributes"
constexpr ::UnityEngine::UIElements::IUxmlAttributes* UnityEngine::UIElements::UxmlAsset::i___UnityEngine__UIElements__IUxmlAttributes() noexcept {
  return static_cast<::UnityEngine::UIElements::IUxmlAttributes*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlAsset::UxmlAsset() {}
