#pragma once
#include "System/Net/Http/Headers/zzzz__HttpHeaders_impl.hpp"
#include "System/Net/Http/Headers/zzzz__HttpContentHeaders_def.hpp"
#include "System/Net/Http/Headers/zzzz__MediaTypeHeaderValue_def.hpp"
#include "System/Net/Http/zzzz__HttpContent_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::System::Net::Http::Headers::HttpContentHeaders._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::Headers::HttpContentHeaders::*)(::System::Net::Http::HttpContent*)>(
    &::System::Net::Http::Headers::HttpContentHeaders::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2d69a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::HttpContentHeaders*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpContent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpContentHeaders.get_ContentLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int64_t> (::System::Net::Http::Headers::HttpContentHeaders::*)()>(
    &::System::Net::Http::Headers::HttpContentHeaders::get_ContentLength)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2d6768c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::HttpContentHeaders*>::get(),
                                                                               "get_ContentLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpContentHeaders.get_ContentType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::Headers::MediaTypeHeaderValue* (::System::Net::Http::Headers::HttpContentHeaders::*)()>(
    &::System::Net::Http::Headers::HttpContentHeaders::get_ContentType)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2d6a5a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::HttpContentHeaders*>::get(),
                                                                               "get_ContentType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpContentHeaders.set_ContentType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::Headers::HttpContentHeaders::*)(::System::Net::Http::Headers::MediaTypeHeaderValue*)>(
    &::System::Net::Http::Headers::HttpContentHeaders::set_ContentType)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2d6bb38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::HttpContentHeaders*>::get(), "set_ContentType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::MediaTypeHeaderValue*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Net::Http::HttpContent*& System::Net::Http::Headers::HttpContentHeaders::__cordl_internal_get_content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpContent*> const& System::Net::Http::Headers::HttpContentHeaders::__cordl_internal_get_content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr void System::Net::Http::Headers::HttpContentHeaders::__cordl_internal_set_content(::System::Net::Http::HttpContent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___content)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::Http::Headers::HttpContentHeaders* System::Net::Http::Headers::HttpContentHeaders::New_ctor(::System::Net::Http::HttpContent* content) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Http::Headers::HttpContentHeaders*>(content));
}
inline void System::Net::Http::Headers::HttpContentHeaders::_ctor(::System::Net::Http::HttpContent* content) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::HttpContentHeaders*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpContent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, content);
}
inline ::System::Nullable_1<int64_t> System::Net::Http::Headers::HttpContentHeaders::get_ContentLength() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::HttpContentHeaders*>::get(),
                                                                             "get_ContentLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int64_t>, false>(this, ___internal_method);
}
inline ::System::Net::Http::Headers::MediaTypeHeaderValue* System::Net::Http::Headers::HttpContentHeaders::get_ContentType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::HttpContentHeaders*>::get(),
                                                                             "get_ContentType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::Headers::MediaTypeHeaderValue*, false>(this, ___internal_method);
}
inline void System::Net::Http::Headers::HttpContentHeaders::set_ContentType(::System::Net::Http::Headers::MediaTypeHeaderValue* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::HttpContentHeaders*>::get(), "set_ContentType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::MediaTypeHeaderValue*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::HttpContentHeaders::HttpContentHeaders() {}
