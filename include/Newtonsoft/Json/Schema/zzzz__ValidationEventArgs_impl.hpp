#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Schema/ValidationEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "Newtonsoft/Json/Schema/zzzz__ValidationEventArgs_def.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaException_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Schema::ValidationEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Schema::ValidationEventArgs::*)(::Newtonsoft::Json::Schema::JsonSchemaException*)>(
    &::Newtonsoft::Json::Schema::ValidationEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3f0e5fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::ValidationEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchemaException*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::ValidationEventArgs.get_Exception
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Schema::JsonSchemaException* (::Newtonsoft::Json::Schema::ValidationEventArgs::*)()>(
    &::Newtonsoft::Json::Schema::ValidationEventArgs::get_Exception)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3f0e68c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::ValidationEventArgs*>::get(),
                                                                               "get_Exception", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::ValidationEventArgs.get_Path
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Schema::ValidationEventArgs::*)()>(
    &::Newtonsoft::Json::Schema::ValidationEventArgs::get_Path)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3f0e694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::ValidationEventArgs*>::get(),
                                                                               "get_Path", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::ValidationEventArgs.get_Message
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Schema::ValidationEventArgs::*)()>(
    &::Newtonsoft::Json::Schema::ValidationEventArgs::get_Message)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3f033bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::ValidationEventArgs*>::get(),
                                                                               "get_Message", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Schema::JsonSchemaException*& Newtonsoft::Json::Schema::ValidationEventArgs::__cordl_internal_get__ex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ex;
}
constexpr ::Newtonsoft::Json::Schema::JsonSchemaException* const& Newtonsoft::Json::Schema::ValidationEventArgs::__cordl_internal_get__ex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ex;
}
constexpr void Newtonsoft::Json::Schema::ValidationEventArgs::__cordl_internal_set__ex(::Newtonsoft::Json::Schema::JsonSchemaException* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ex)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Newtonsoft::Json::Schema::ValidationEventArgs::_ctor(::Newtonsoft::Json::Schema::JsonSchemaException* ex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::ValidationEventArgs*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchemaException*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ex);
}
inline ::Newtonsoft::Json::Schema::JsonSchemaException* Newtonsoft::Json::Schema::ValidationEventArgs::get_Exception() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::ValidationEventArgs*>::get(),
                                                                             "get_Exception", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Schema::JsonSchemaException*, false>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Schema::ValidationEventArgs::get_Path() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::ValidationEventArgs*>::get(),
                                                                             "get_Path", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Schema::ValidationEventArgs::get_Message() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::ValidationEventArgs*>::get(),
                                                                             "get_Message", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Schema::ValidationEventArgs* Newtonsoft::Json::Schema::ValidationEventArgs::New_ctor(::Newtonsoft::Json::Schema::JsonSchemaException* ex) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Schema::ValidationEventArgs*>(ex));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Schema::ValidationEventArgs::ValidationEventArgs() {}
