#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeAttribute_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeAttribute.get_IncludeInSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Serialization::XmlTypeAttribute::*)()>(
    &::System::Xml::Serialization::XmlTypeAttribute::get_IncludeInSchema)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eec648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeAttribute*>::get(),
                                                                               "get_IncludeInSchema", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeAttribute.get_Namespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Serialization::XmlTypeAttribute::*)()>(
    &::System::Xml::Serialization::XmlTypeAttribute::get_Namespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eec650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeAttribute*>::get(),
                                                                               "get_Namespace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeAttribute.get_TypeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Serialization::XmlTypeAttribute::*)()>(
    &::System::Xml::Serialization::XmlTypeAttribute::get_TypeName)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2eec658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeAttribute*>::get(),
                                                                               "get_TypeName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeAttribute.AddKeyHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlTypeAttribute::*)(::System::Text::StringBuilder*)>(
    &::System::Xml::Serialization::XmlTypeAttribute::AddKeyHash)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2eec6ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeAttribute*>::get(), "AddKeyHash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& System::Xml::Serialization::XmlTypeAttribute::__cordl_internal_get_includeInSchema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includeInSchema;
}
constexpr bool const& System::Xml::Serialization::XmlTypeAttribute::__cordl_internal_get_includeInSchema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includeInSchema;
}
constexpr void System::Xml::Serialization::XmlTypeAttribute::__cordl_internal_set_includeInSchema(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___includeInSchema = value;
}
constexpr ::StringW& System::Xml::Serialization::XmlTypeAttribute::__cordl_internal_get_ns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr ::StringW const& System::Xml::Serialization::XmlTypeAttribute::__cordl_internal_get_ns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr void System::Xml::Serialization::XmlTypeAttribute::__cordl_internal_set_ns(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Serialization::XmlTypeAttribute::__cordl_internal_get_typeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeName;
}
constexpr ::StringW const& System::Xml::Serialization::XmlTypeAttribute::__cordl_internal_get_typeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeName;
}
constexpr void System::Xml::Serialization::XmlTypeAttribute::__cordl_internal_set_typeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___typeName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool System::Xml::Serialization::XmlTypeAttribute::get_IncludeInSchema() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeAttribute*>::get(),
                                                                             "get_IncludeInSchema", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW System::Xml::Serialization::XmlTypeAttribute::get_Namespace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeAttribute*>::get(),
                                                                             "get_Namespace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::Serialization::XmlTypeAttribute::get_TypeName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeAttribute*>::get(),
                                                                             "get_TypeName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlTypeAttribute::AddKeyHash(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeAttribute*>::get(), "AddKeyHash", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sb);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlTypeAttribute::XmlTypeAttribute() {}
