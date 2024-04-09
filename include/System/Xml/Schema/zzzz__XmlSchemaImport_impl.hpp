#pragma once
#include "System/Xml/Schema/zzzz__XmlSchemaExternal_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaImport_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotation_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaImport._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaImport::*)()>(&::System::Xml::Schema::XmlSchemaImport::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d14d64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaImport*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaImport.get_Namespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::XmlSchemaImport::*)()>(&::System::Xml::Schema::XmlSchemaImport::get_Namespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d14d84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaImport*>::get(), "get_Namespace",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaImport.set_Namespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaImport::*)(::StringW)>(
    &::System::Xml::Schema::XmlSchemaImport::set_Namespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d14d8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaImport*>::get(), "set_Namespace", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaImport.AddAnnotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaImport::*)(::System::Xml::Schema::XmlSchemaAnnotation*)>(
    &::System::Xml::Schema::XmlSchemaImport::AddAnnotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d14d94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaImport*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaImport*>::get(), 10));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Schema::XmlSchemaImport::__cordl_internal_get_ns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr ::StringW const& System::Xml::Schema::XmlSchemaImport::__cordl_internal_get_ns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ns;
}
constexpr void System::Xml::Schema::XmlSchemaImport::__cordl_internal_set_ns(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaAnnotation*& System::Xml::Schema::XmlSchemaImport::__cordl_internal_get_annotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___annotation;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaAnnotation*> const& System::Xml::Schema::XmlSchemaImport::__cordl_internal_get_annotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___annotation;
}
constexpr void System::Xml::Schema::XmlSchemaImport::__cordl_internal_set_annotation(::System::Xml::Schema::XmlSchemaAnnotation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___annotation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::Schema::XmlSchemaImport* System::Xml::Schema::XmlSchemaImport::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XmlSchemaImport*>());
}
inline void System::Xml::Schema::XmlSchemaImport::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaImport*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Xml::Schema::XmlSchemaImport::get_Namespace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaImport*>::get(), "get_Namespace",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaImport::set_Namespace(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaImport*>::get(), "set_Namespace", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaImport::AddAnnotation(::System::Xml::Schema::XmlSchemaAnnotation* annotation) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaImport*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, annotation);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaImport::XmlSchemaImport() {}
