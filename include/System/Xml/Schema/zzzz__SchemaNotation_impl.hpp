#pragma once
// IWYU pragma private; include "System/Xml/Schema/SchemaNotation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__SchemaNotation_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::SchemaNotation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaNotation::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::SchemaNotation::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x429d41c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaNotation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaNotation.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::Schema::SchemaNotation::*)()>(
    &::System::Xml::Schema::SchemaNotation::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x429d444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaNotation*>::get(), "get_Name",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaNotation.get_SystemLiteral
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::SchemaNotation::*)()>(&::System::Xml::Schema::SchemaNotation::get_SystemLiteral)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x429d44c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaNotation*>::get(),
                                                                               "get_SystemLiteral", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaNotation.set_SystemLiteral
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaNotation::*)(::StringW)>(
    &::System::Xml::Schema::SchemaNotation::set_SystemLiteral)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x429d454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaNotation*>::get(), "set_SystemLiteral",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaNotation.get_Pubid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::SchemaNotation::*)()>(&::System::Xml::Schema::SchemaNotation::get_Pubid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x429d45c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaNotation*>::get(), "get_Pubid",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaNotation.set_Pubid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaNotation::*)(::StringW)>(&::System::Xml::Schema::SchemaNotation::set_Pubid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x429d464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaNotation*>::get(), "set_Pubid", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNotation::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNotation::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Xml::Schema::SchemaNotation::__cordl_internal_set_name(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Schema::SchemaNotation::__cordl_internal_get_systemLiteral() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___systemLiteral;
}
constexpr ::StringW const& System::Xml::Schema::SchemaNotation::__cordl_internal_get_systemLiteral() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___systemLiteral;
}
constexpr void System::Xml::Schema::SchemaNotation::__cordl_internal_set_systemLiteral(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___systemLiteral)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Schema::SchemaNotation::__cordl_internal_get_pubid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pubid;
}
constexpr ::StringW const& System::Xml::Schema::SchemaNotation::__cordl_internal_get_pubid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pubid;
}
constexpr void System::Xml::Schema::SchemaNotation::__cordl_internal_set_pubid(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pubid)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::Schema::SchemaNotation::_ctor(::System::Xml::XmlQualifiedName* name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaNotation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::SchemaNotation::get_Name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaNotation*>::get(), "get_Name",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*, false>(this, ___internal_method);
}
inline ::StringW System::Xml::Schema::SchemaNotation::get_SystemLiteral() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaNotation*>::get(), "get_SystemLiteral",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaNotation::set_SystemLiteral(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaNotation*>::get(), "set_SystemLiteral", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::SchemaNotation::get_Pubid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaNotation*>::get(), "get_Pubid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaNotation::set_Pubid(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaNotation*>::get(), "set_Pubid", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::SchemaNotation* System::Xml::Schema::SchemaNotation::New_ctor(::System::Xml::XmlQualifiedName* name) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::SchemaNotation*>(name));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::SchemaNotation::SchemaNotation() {}
