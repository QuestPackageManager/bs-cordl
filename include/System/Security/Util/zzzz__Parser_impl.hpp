#pragma once
// IWYU pragma private; include "System/Security/Util/Parser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Util/zzzz__Parser_def.hpp"
#include "System/Security/Util/zzzz__TokenizerStream_def.hpp"
#include "System/Security/Util/zzzz__Tokenizer_def.hpp"
#include "System/Security/zzzz__SecurityDocument_def.hpp"
#include "System/Security/zzzz__SecurityElement_def.hpp"
//  Writing Method size for method: ::System::Security::Util::Parser.GetTopElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::SecurityElement* (::System::Security::Util::Parser::*)()>(
    &::System::Security::Util::Parser::GetTopElement)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3c92958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Parser*>::get(), "GetTopElement",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::Parser.GetRequiredSizes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Util::Parser::*)(::System::Security::Util::TokenizerStream*, ::ByRef<int32_t>)>(
    &::System::Security::Util::Parser::GetRequiredSizes)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x3c92980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Parser*>::get(), "GetRequiredSizes", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Util::TokenizerStream*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::Parser.DetermineFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::Util::Parser::*)(::System::Security::Util::TokenizerStream*)>(
    &::System::Security::Util::Parser::DetermineFormat)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x3c92eb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Parser*>::get(), "DetermineFormat", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Util::TokenizerStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::Parser.ParseContents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Util::Parser::*)()>(&::System::Security::Util::Parser::ParseContents)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x3c93a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Parser*>::get(), "ParseContents",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::Parser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Util::Parser::*)(::System::Security::Util::Tokenizer*)>(
    &::System::Security::Util::Parser::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3c93ec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Parser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Util::Tokenizer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::Parser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Util::Parser::*)(::StringW)>(&::System::Security::Util::Parser::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3c93f64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Parser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Security::SecurityDocument*& System::Security::Util::Parser::__cordl_internal_get__doc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____doc;
}
constexpr ::System::Security::SecurityDocument* const& System::Security::Util::Parser::__cordl_internal_get__doc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____doc;
}
constexpr void System::Security::Util::Parser::__cordl_internal_set__doc(::System::Security::SecurityDocument* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____doc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Util::Tokenizer*& System::Security::Util::Parser::__cordl_internal_get__t() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____t;
}
constexpr ::System::Security::Util::Tokenizer* const& System::Security::Util::Parser::__cordl_internal_get__t() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____t;
}
constexpr void System::Security::Util::Parser::__cordl_internal_set__t(::System::Security::Util::Tokenizer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____t)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Security::SecurityElement* System::Security::Util::Parser::GetTopElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Parser*>::get(), "GetTopElement",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Security::SecurityElement*, false>(this, ___internal_method);
}
inline void System::Security::Util::Parser::GetRequiredSizes(::System::Security::Util::TokenizerStream* stream, ::ByRef<int32_t> index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Parser*>::get(), "GetRequiredSizes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Util::TokenizerStream*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, index);
}
inline int32_t System::Security::Util::Parser::DetermineFormat(::System::Security::Util::TokenizerStream* stream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Parser*>::get(), "DetermineFormat", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Util::TokenizerStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, stream);
}
inline void System::Security::Util::Parser::ParseContents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Parser*>::get(), "ParseContents",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Security::Util::Parser::_ctor(::System::Security::Util::Tokenizer* t) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Parser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Util::Tokenizer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
inline void System::Security::Util::Parser::_ctor(::StringW input) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Parser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline ::System::Security::Util::Parser* System::Security::Util::Parser::New_ctor(::System::Security::Util::Tokenizer* t) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Util::Parser*>(t));
}
inline ::System::Security::Util::Parser* System::Security::Util::Parser::New_ctor(::StringW input) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Util::Parser*>(input));
}
// Ctor Parameters []
constexpr ::System::Security::Util::Parser::Parser() {}
