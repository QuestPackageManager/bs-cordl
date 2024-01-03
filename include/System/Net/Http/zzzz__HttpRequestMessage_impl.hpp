#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Http/zzzz__HttpRequestMessage_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/Net/Http/zzzz__HttpContent_def.hpp"
#include "System/Net/Http/zzzz__HttpMethod_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpRequestHeaders_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpRequestMessage::*)()>(&::System::Net::Http::HttpRequestMessage::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2833994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpRequestMessage::*)(::System::Net::Http::HttpMethod*, ::StringW)>(
    &::System::Net::Http::HttpRequestMessage::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2833a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpMethod*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpRequestMessage::*)(::System::Net::Http::HttpMethod*, ::System::Uri*)>(
    &::System::Net::Http::HttpRequestMessage::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x283103c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpMethod*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.get_Content
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::HttpContent* (::System::Net::Http::HttpRequestMessage::*)()>(
    &::System::Net::Http::HttpRequestMessage::get_Content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2833b74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(), "get_Content",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.set_Content
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpRequestMessage::*)(::System::Net::Http::HttpContent*)>(
    &::System::Net::Http::HttpRequestMessage::set_Content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2833b7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(), "set_Content", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpContent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.get_Headers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::Headers::HttpRequestHeaders* (::System::Net::Http::HttpRequestMessage::*)()>(
    &::System::Net::Http::HttpRequestMessage::get_Headers)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x282dc68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(), "get_Headers",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.get_Method
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::HttpMethod* (::System::Net::Http::HttpRequestMessage::*)()>(
    &::System::Net::Http::HttpRequestMessage::get_Method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2833be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(), "get_Method",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.set_Method
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpRequestMessage::*)(::System::Net::Http::HttpMethod*)>(
    &::System::Net::Http::HttpRequestMessage::set_Method)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2833ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(), "set_Method", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpMethod*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.get_RequestUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::System::Net::Http::HttpRequestMessage::*)()>(
    &::System::Net::Http::HttpRequestMessage::get_RequestUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2833bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(),
                                                                               "get_RequestUri", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.set_RequestUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpRequestMessage::*)(::System::Uri*)>(
    &::System::Net::Http::HttpRequestMessage::set_RequestUri)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x282e538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(), "set_RequestUri", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.IsAllowedAbsoluteUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Uri*)>(&::System::Net::Http::HttpRequestMessage::IsAllowedAbsoluteUri)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2833bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(), "IsAllowedAbsoluteUri",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.get_Version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (::System::Net::Http::HttpRequestMessage::*)()>(
    &::System::Net::Http::HttpRequestMessage::get_Version)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x282dc04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(), "get_Version",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpRequestMessage::*)()>(&::System::Net::Http::HttpRequestMessage::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2833d40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(), "Dispose",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpRequestMessage::*)(bool)>(&::System::Net::Http::HttpRequestMessage::Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2833d50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.SetIsUsed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Http::HttpRequestMessage::*)()>(&::System::Net::Http::HttpRequestMessage::SetIsUsed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2831400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(), "SetIsUsed",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpRequestMessage.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::Http::HttpRequestMessage::*)()>(&::System::Net::Http::HttpRequestMessage::ToString)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x2833d84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(), 3));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Net::Http::HttpRequestMessage::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::System::Net::Http::Headers::HttpRequestHeaders*& System::Net::Http::HttpRequestMessage::__get_headers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::Headers::HttpRequestHeaders*> const& System::Net::Http::HttpRequestMessage::__get_headers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
constexpr void System::Net::Http::HttpRequestMessage::__set_headers(::System::Net::Http::Headers::HttpRequestHeaders* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___headers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Http::HttpMethod*& System::Net::Http::HttpRequestMessage::__get_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpMethod*> const& System::Net::Http::HttpRequestMessage::__get_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
constexpr void System::Net::Http::HttpRequestMessage::__set_method(::System::Net::Http::HttpMethod* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___method)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Version*& System::Net::Http::HttpRequestMessage::__get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::cordl_internals::to_const_pointer<::System::Version*> const& System::Net::Http::HttpRequestMessage::__get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void System::Net::Http::HttpRequestMessage::__set_version(::System::Version* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Uri*& System::Net::Http::HttpRequestMessage::__get_uri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uri;
}
constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& System::Net::Http::HttpRequestMessage::__get_uri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uri;
}
constexpr void System::Net::Http::HttpRequestMessage::__set_uri(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___uri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::Http::HttpRequestMessage::__get_is_used() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_used;
}
constexpr bool const& System::Net::Http::HttpRequestMessage::__get_is_used() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_used;
}
constexpr void System::Net::Http::HttpRequestMessage::__set_is_used(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___is_used = value;
}
constexpr bool& System::Net::Http::HttpRequestMessage::__get_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr bool const& System::Net::Http::HttpRequestMessage::__get_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr void System::Net::Http::HttpRequestMessage::__set_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposed = value;
}
constexpr ::System::Net::Http::HttpContent*& System::Net::Http::HttpRequestMessage::__get__Content_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Content_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpContent*> const& System::Net::Http::HttpRequestMessage::__get__Content_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Content_k__BackingField;
}
constexpr void System::Net::Http::HttpRequestMessage::__set__Content_k__BackingField(::System::Net::Http::HttpContent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Content_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::Http::HttpRequestMessage* System::Net::Http::HttpRequestMessage::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Http::HttpRequestMessage*>());
}
inline void System::Net::Http::HttpRequestMessage::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::Http::HttpRequestMessage* System::Net::Http::HttpRequestMessage::New_ctor(::System::Net::Http::HttpMethod* method, ::StringW requestUri) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Http::HttpRequestMessage*>(method, requestUri));
}
inline void System::Net::Http::HttpRequestMessage::_ctor(::System::Net::Http::HttpMethod* method, ::StringW requestUri) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpMethod*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, method, requestUri);
}
inline ::System::Net::Http::HttpRequestMessage* System::Net::Http::HttpRequestMessage::New_ctor(::System::Net::Http::HttpMethod* method, ::System::Uri* requestUri) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Http::HttpRequestMessage*>(method, requestUri));
}
inline void System::Net::Http::HttpRequestMessage::_ctor(::System::Net::Http::HttpMethod* method, ::System::Uri* requestUri) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpMethod*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, method, requestUri);
}
inline ::System::Net::Http::HttpContent* System::Net::Http::HttpRequestMessage::get_Content() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(), "get_Content",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::HttpContent*, false>(this, ___internal_method);
}
inline void System::Net::Http::HttpRequestMessage::set_Content(::System::Net::Http::HttpContent* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(), "set_Content", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpContent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::Http::Headers::HttpRequestHeaders* System::Net::Http::HttpRequestMessage::get_Headers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(), "get_Headers",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::Headers::HttpRequestHeaders*, false>(this, ___internal_method);
}
inline ::System::Net::Http::HttpMethod* System::Net::Http::HttpRequestMessage::get_Method() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(), "get_Method",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::HttpMethod*, false>(this, ___internal_method);
}
inline void System::Net::Http::HttpRequestMessage::set_Method(::System::Net::Http::HttpMethod* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(), "set_Method", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpMethod*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Uri* System::Net::Http::HttpRequestMessage::get_RequestUri() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(), "get_RequestUri",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(this, ___internal_method);
}
inline void System::Net::Http::HttpRequestMessage::set_RequestUri(::System::Uri* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(), "set_RequestUri", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Net::Http::HttpRequestMessage::IsAllowedAbsoluteUri(::System::Uri* uri) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(), "IsAllowedAbsoluteUri",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, uri);
}
inline ::System::Version* System::Net::Http::HttpRequestMessage::get_Version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(), "get_Version",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Version*, false>(this, ___internal_method);
}
inline void System::Net::Http::HttpRequestMessage::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Http::HttpRequestMessage::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline bool System::Net::Http::HttpRequestMessage::SetIsUsed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(), "SetIsUsed",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW System::Net::Http::HttpRequestMessage::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpRequestMessage*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::Http::HttpRequestMessage::HttpRequestMessage() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
