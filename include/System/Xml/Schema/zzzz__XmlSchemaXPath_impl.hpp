#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaXPath.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaXPath_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaXPath.get_XPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::XmlSchemaXPath::*)()>(&::System::Xml::Schema::XmlSchemaXPath::get_XPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x425c5e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaXPath*>::get(), "get_XPath",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaXPath.set_XPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaXPath::*)(::StringW)>(&::System::Xml::Schema::XmlSchemaXPath::set_XPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x425c5ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaXPath*>::get(), "set_XPath", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaXPath._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaXPath::*)()>(&::System::Xml::Schema::XmlSchemaXPath::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x425c5f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaXPath*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Schema::XmlSchemaXPath::__cordl_internal_get_xpath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xpath;
}
constexpr ::StringW const& System::Xml::Schema::XmlSchemaXPath::__cordl_internal_get_xpath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xpath;
}
constexpr void System::Xml::Schema::XmlSchemaXPath::__cordl_internal_set_xpath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xpath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW System::Xml::Schema::XmlSchemaXPath::get_XPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaXPath*>::get(), "get_XPath",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaXPath::set_XPath(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaXPath*>::get(), "set_XPath", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaXPath* System::Xml::Schema::XmlSchemaXPath::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XmlSchemaXPath*>());
}
inline void System::Xml::Schema::XmlSchemaXPath::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaXPath*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaXPath::XmlSchemaXPath() {}
