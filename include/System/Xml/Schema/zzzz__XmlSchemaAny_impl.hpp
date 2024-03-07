#pragma once
#include "System/Xml/Schema/zzzz__XmlSchemaContentProcessing_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAny_def.hpp"
#include "System/Xml/Schema/zzzz__NamespaceList_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentProcessing_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAny.set_ProcessContents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaAny::*)(::System::Xml::Schema::XmlSchemaContentProcessing)>(
    &::System::Xml::Schema::XmlSchemaAny::set_ProcessContents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a123f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaAny*>::get(), "set_ProcessContents", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaContentProcessing>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAny.get_NamespaceList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::NamespaceList* (::System::Xml::Schema::XmlSchemaAny::*)()>(
    &::System::Xml::Schema::XmlSchemaAny::get_NamespaceList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a123f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaAny*>::get(), "get_NamespaceList",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAny.BuildNamespaceList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaAny::*)(::StringW)>(&::System::Xml::Schema::XmlSchemaAny::BuildNamespaceList)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2a12400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaAny*>::get(), "BuildNamespaceList", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAny._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaAny::*)()>(&::System::Xml::Schema::XmlSchemaAny::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2a12490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaAny*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Schema::XmlSchemaAny::__cordl_internal_get_ns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr ::StringW const& System::Xml::Schema::XmlSchemaAny::__cordl_internal_get_ns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr void System::Xml::Schema::XmlSchemaAny::__cordl_internal_set_ns(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaContentProcessing& System::Xml::Schema::XmlSchemaAny::__cordl_internal_get_processContents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processContents;
}
constexpr ::System::Xml::Schema::XmlSchemaContentProcessing const& System::Xml::Schema::XmlSchemaAny::__cordl_internal_get_processContents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processContents;
}
constexpr void System::Xml::Schema::XmlSchemaAny::__cordl_internal_set_processContents(::System::Xml::Schema::XmlSchemaContentProcessing value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___processContents = value;
}
constexpr ::System::Xml::Schema::NamespaceList*& System::Xml::Schema::XmlSchemaAny::__cordl_internal_get_namespaceList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaceList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::NamespaceList*> const& System::Xml::Schema::XmlSchemaAny::__cordl_internal_get_namespaceList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___namespaceList;
}
constexpr void System::Xml::Schema::XmlSchemaAny::__cordl_internal_set_namespaceList(::System::Xml::Schema::NamespaceList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___namespaceList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::Schema::XmlSchemaAny::set_ProcessContents(::System::Xml::Schema::XmlSchemaContentProcessing value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaAny*>::get(), "set_ProcessContents", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaContentProcessing>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::NamespaceList* System::Xml::Schema::XmlSchemaAny::get_NamespaceList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaAny*>::get(), "get_NamespaceList",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::NamespaceList*, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaAny::BuildNamespaceList(::StringW targetNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaAny*>::get(), "BuildNamespaceList", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetNamespace);
}
inline ::System::Xml::Schema::XmlSchemaAny* System::Xml::Schema::XmlSchemaAny::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XmlSchemaAny*>());
}
inline void System::Xml::Schema::XmlSchemaAny::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaAny*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaAny::XmlSchemaAny() {}
