#pragma once
#include "Newtonsoft/Json/Linq/zzzz__CommentHandling_impl.hpp"
#include "Newtonsoft/Json/Linq/zzzz__LineInfoHandling_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JsonLoadSettings_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__CommentHandling_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__LineInfoHandling_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonLoadSettings.get_CommentHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::CommentHandling (::Newtonsoft::Json::Linq::JsonLoadSettings::*)()>(
    &::Newtonsoft::Json::Linq::JsonLoadSettings::get_CommentHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27e2a24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonLoadSettings*>::get(),
                                                                               "get_CommentHandling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonLoadSettings.set_CommentHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JsonLoadSettings::*)(::Newtonsoft::Json::Linq::CommentHandling)>(
    &::Newtonsoft::Json::Linq::JsonLoadSettings::set_CommentHandling)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x27e2a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonLoadSettings*>::get(), "set_CommentHandling", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::CommentHandling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonLoadSettings.get_LineInfoHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::LineInfoHandling (::Newtonsoft::Json::Linq::JsonLoadSettings::*)()>(
    &::Newtonsoft::Json::Linq::JsonLoadSettings::get_LineInfoHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27e2a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonLoadSettings*>::get(),
                                                                               "get_LineInfoHandling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonLoadSettings.set_LineInfoHandling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JsonLoadSettings::*)(::Newtonsoft::Json::Linq::LineInfoHandling)>(
    &::Newtonsoft::Json::Linq::JsonLoadSettings::set_LineInfoHandling)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x27e2a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonLoadSettings*>::get(), "set_LineInfoHandling", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::LineInfoHandling>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Linq::JsonLoadSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Linq::JsonLoadSettings::*)()>(&::Newtonsoft::Json::Linq::JsonLoadSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27e2afc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonLoadSettings*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Linq::CommentHandling& Newtonsoft::Json::Linq::JsonLoadSettings::__cordl_internal_get__commentHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commentHandling;
}
constexpr ::Newtonsoft::Json::Linq::CommentHandling const& Newtonsoft::Json::Linq::JsonLoadSettings::__cordl_internal_get__commentHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commentHandling;
}
constexpr void Newtonsoft::Json::Linq::JsonLoadSettings::__cordl_internal_set__commentHandling(::Newtonsoft::Json::Linq::CommentHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____commentHandling = value;
}
constexpr ::Newtonsoft::Json::Linq::LineInfoHandling& Newtonsoft::Json::Linq::JsonLoadSettings::__cordl_internal_get__lineInfoHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineInfoHandling;
}
constexpr ::Newtonsoft::Json::Linq::LineInfoHandling const& Newtonsoft::Json::Linq::JsonLoadSettings::__cordl_internal_get__lineInfoHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineInfoHandling;
}
constexpr void Newtonsoft::Json::Linq::JsonLoadSettings::__cordl_internal_set__lineInfoHandling(::Newtonsoft::Json::Linq::LineInfoHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lineInfoHandling = value;
}
inline ::Newtonsoft::Json::Linq::CommentHandling Newtonsoft::Json::Linq::JsonLoadSettings::get_CommentHandling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonLoadSettings*>::get(),
                                                                             "get_CommentHandling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::CommentHandling, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JsonLoadSettings::set_CommentHandling(::Newtonsoft::Json::Linq::CommentHandling value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonLoadSettings*>::get(), "set_CommentHandling", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::CommentHandling>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::LineInfoHandling Newtonsoft::Json::Linq::JsonLoadSettings::get_LineInfoHandling() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonLoadSettings*>::get(),
                                                                             "get_LineInfoHandling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::LineInfoHandling, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Linq::JsonLoadSettings::set_LineInfoHandling(::Newtonsoft::Json::Linq::LineInfoHandling value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonLoadSettings*>::get(), "set_LineInfoHandling", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::LineInfoHandling>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Linq::JsonLoadSettings* Newtonsoft::Json::Linq::JsonLoadSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Linq::JsonLoadSettings*>());
}
inline void Newtonsoft::Json::Linq::JsonLoadSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JsonLoadSettings*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Linq::JsonLoadSettings::JsonLoadSettings() {}
