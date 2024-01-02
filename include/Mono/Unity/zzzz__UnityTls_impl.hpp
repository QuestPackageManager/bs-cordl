#pragma once
#include "Mono/Unity/zzzz__UnityTls_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Unity/zzzz__UnityTls_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Unity::__UnityTls__unitytls_error_code::__UnityTls__unitytls_error_code(uint32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Unity::__UnityTls__unitytls_error_code::__UnityTls__unitytls_error_code() {}
constexpr ::Mono::Unity::__UnityTls__unitytls_error_code Mono::Unity::__UnityTls__unitytls_error_code::UNITYTLS_SUCCESS{ static_cast<uint32_t>(0x3020100u) };
constexpr ::Mono::Unity::__UnityTls__unitytls_error_code Mono::Unity::__UnityTls__unitytls_error_code::UNITYTLS_INVALID_ARGUMENT{ static_cast<uint32_t>(0x4030201u) };
constexpr ::Mono::Unity::__UnityTls__unitytls_error_code Mono::Unity::__UnityTls__unitytls_error_code::UNITYTLS_INVALID_FORMAT{ static_cast<uint32_t>(0x5040302u) };
constexpr ::Mono::Unity::__UnityTls__unitytls_error_code Mono::Unity::__UnityTls__unitytls_error_code::UNITYTLS_INVALID_PASSWORD{ static_cast<uint32_t>(0x6050403u) };
constexpr ::Mono::Unity::__UnityTls__unitytls_error_code Mono::Unity::__UnityTls__unitytls_error_code::UNITYTLS_INVALID_STATE{ static_cast<uint32_t>(0x7060504u) };
constexpr ::Mono::Unity::__UnityTls__unitytls_error_code Mono::Unity::__UnityTls__unitytls_error_code::UNITYTLS_BUFFER_OVERFLOW{ static_cast<uint32_t>(0x8070605u) };
constexpr ::Mono::Unity::__UnityTls__unitytls_error_code Mono::Unity::__UnityTls__unitytls_error_code::UNITYTLS_OUT_OF_MEMORY{ static_cast<uint32_t>(0x9080706u) };
constexpr ::Mono::Unity::__UnityTls__unitytls_error_code Mono::Unity::__UnityTls__unitytls_error_code::UNITYTLS_INTERNAL_ERROR{ static_cast<uint32_t>(0xa090807u) };
constexpr ::Mono::Unity::__UnityTls__unitytls_error_code Mono::Unity::__UnityTls__unitytls_error_code::UNITYTLS_NOT_SUPPORTED{ static_cast<uint32_t>(0xc00a0908u) };
constexpr ::Mono::Unity::__UnityTls__unitytls_error_code Mono::Unity::__UnityTls__unitytls_error_code::UNITYTLS_ENTROPY_SOURCE_FAILED{ static_cast<uint32_t>(0x10c00a09u) };
constexpr ::Mono::Unity::__UnityTls__unitytls_error_code Mono::Unity::__UnityTls__unitytls_error_code::UNITYTLS_STREAM_CLOSED{ static_cast<uint32_t>(0x10c00au) };
constexpr ::Mono::Unity::__UnityTls__unitytls_error_code Mono::Unity::__UnityTls__unitytls_error_code::UNITYTLS_USER_CUSTOM_ERROR_START{ static_cast<uint32_t>(0x10c0u) };
constexpr ::Mono::Unity::__UnityTls__unitytls_error_code Mono::Unity::__UnityTls__unitytls_error_code::UNITYTLS_USER_WOULD_BLOCK{ static_cast<uint32_t>(0x10010c0u) };
constexpr ::Mono::Unity::__UnityTls__unitytls_error_code Mono::Unity::__UnityTls__unitytls_error_code::UNITYTLS_USER_READ_FAILED{ static_cast<uint32_t>(0x20010c0u) };
constexpr ::Mono::Unity::__UnityTls__unitytls_error_code Mono::Unity::__UnityTls__unitytls_error_code::UNITYTLS_USER_WRITE_FAILED{ static_cast<uint32_t>(0x30010c0u) };
constexpr ::Mono::Unity::__UnityTls__unitytls_error_code Mono::Unity::__UnityTls__unitytls_error_code::UNITYTLS_USER_UNKNOWN_ERROR{ static_cast<uint32_t>(0x40010c0u) };
constexpr ::Mono::Unity::__UnityTls__unitytls_error_code Mono::Unity::__UnityTls__unitytls_error_code::UNITYTLS_USER_CUSTOM_ERROR_END{ static_cast<uint32_t>(0x20c0u) };
// Ctor Parameters [CppParam { name: "magic", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "code", ty: "::Mono::Unity::__UnityTls__unitytls_error_code", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "reserved", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Unity::__UnityTls__unitytls_errorstate::__UnityTls__unitytls_errorstate(uint32_t magic, ::Mono::Unity::__UnityTls__unitytls_error_code code, uint64_t reserved) noexcept {
  this->magic = magic;
  this->code = code;
  this->reserved = reserved;
}
// Ctor Parameters []
constexpr ::Mono::Unity::__UnityTls__unitytls_errorstate::__UnityTls__unitytls_errorstate() {}
// Ctor Parameters []
constexpr ::Mono::Unity::__UnityTls__unitytls_key::__UnityTls__unitytls_key() {}
// Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Unity::__UnityTls__unitytls_key_ref::__UnityTls__unitytls_key_ref(uint64_t handle) noexcept {
  this->handle = handle;
}
// Ctor Parameters []
constexpr ::Mono::Unity::__UnityTls__unitytls_key_ref::__UnityTls__unitytls_key_ref() {}
// Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Unity::__UnityTls__unitytls_x509_ref::__UnityTls__unitytls_x509_ref(uint64_t handle) noexcept {
  this->handle = handle;
}
// Ctor Parameters []
constexpr ::Mono::Unity::__UnityTls__unitytls_x509_ref::__UnityTls__unitytls_x509_ref() {}
// Ctor Parameters []
constexpr ::Mono::Unity::__UnityTls__unitytls_x509list::__UnityTls__unitytls_x509list() {}
// Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Unity::__UnityTls__unitytls_x509list_ref::__UnityTls__unitytls_x509list_ref(uint64_t handle) noexcept {
  this->handle = handle;
}
// Ctor Parameters []
constexpr ::Mono::Unity::__UnityTls__unitytls_x509list_ref::__UnityTls__unitytls_x509list_ref() {}
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Unity::__UnityTls__unitytls_x509verify_result::__UnityTls__unitytls_x509verify_result(uint32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Unity::__UnityTls__unitytls_x509verify_result::__UnityTls__unitytls_x509verify_result() {}
constexpr ::Mono::Unity::__UnityTls__unitytls_x509verify_result Mono::Unity::__UnityTls__unitytls_x509verify_result::UNITYTLS_X509VERIFY_SUCCESS{ static_cast<uint32_t>(0xf000u) };
constexpr ::Mono::Unity::__UnityTls__unitytls_x509verify_result Mono::Unity::__UnityTls__unitytls_x509verify_result::UNITYTLS_X509VERIFY_NOT_DONE{ static_cast<uint32_t>(0xf0u) };
constexpr ::Mono::Unity::__UnityTls__unitytls_x509verify_result Mono::Unity::__UnityTls__unitytls_x509verify_result::UNITYTLS_X509VERIFY_FATAL_ERROR{ static_cast<uint32_t>(0x40201ffu) };
constexpr ::Mono::Unity::__UnityTls__unitytls_x509verify_result Mono::Unity::__UnityTls__unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_EXPIRED{ static_cast<uint32_t>(0x8040201u) };
constexpr ::Mono::Unity::__UnityTls__unitytls_x509verify_result Mono::Unity::__UnityTls__unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_REVOKED{ static_cast<uint32_t>(0xc0080402u) };
constexpr ::Mono::Unity::__UnityTls__unitytls_x509verify_result Mono::Unity::__UnityTls__unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_CN_MISMATCH{ static_cast<uint32_t>(0x1c00804u) };
constexpr ::Mono::Unity::__UnityTls__unitytls_x509verify_result Mono::Unity::__UnityTls__unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_NOT_TRUSTED{ static_cast<uint32_t>(0x1c008u) };
constexpr ::Mono::Unity::__UnityTls__unitytls_x509verify_result Mono::Unity::__UnityTls__unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_USER_ERROR1{ static_cast<uint32_t>(0x1c0u) };
constexpr ::Mono::Unity::__UnityTls__unitytls_x509verify_result Mono::Unity::__UnityTls__unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_USER_ERROR2{ static_cast<uint32_t>(0x2c0u) };
constexpr ::Mono::Unity::__UnityTls__unitytls_x509verify_result Mono::Unity::__UnityTls__unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_USER_ERROR3{ static_cast<uint32_t>(0x4c0u) };
constexpr ::Mono::Unity::__UnityTls__unitytls_x509verify_result Mono::Unity::__UnityTls__unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_USER_ERROR4{ static_cast<uint32_t>(0x8c0u) };
constexpr ::Mono::Unity::__UnityTls__unitytls_x509verify_result Mono::Unity::__UnityTls__unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_USER_ERROR5{ static_cast<uint32_t>(0x10c0u) };
constexpr ::Mono::Unity::__UnityTls__unitytls_x509verify_result Mono::Unity::__UnityTls__unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_USER_ERROR6{ static_cast<uint32_t>(0x20c0u) };
constexpr ::Mono::Unity::__UnityTls__unitytls_x509verify_result Mono::Unity::__UnityTls__unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_USER_ERROR7{ static_cast<uint32_t>(0x40c0u) };
constexpr ::Mono::Unity::__UnityTls__unitytls_x509verify_result Mono::Unity::__UnityTls__unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_USER_ERROR8{ static_cast<uint32_t>(0x80c0u) };
constexpr ::Mono::Unity::__UnityTls__unitytls_x509verify_result Mono::Unity::__UnityTls__unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_UNKNOWN_ERROR{ static_cast<uint32_t>(0xc8u) };
//  Writing Method size for method: ::Mono::Unity::__UnityTls__unitytls_x509verify_callback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::__UnityTls__unitytls_x509verify_callback::*)(::System::Object*, void*)>(
    &::Mono::Unity::__UnityTls__unitytls_x509verify_callback::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2817c44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::__UnityTls__unitytls_x509verify_callback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::__UnityTls__unitytls_x509verify_callback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Unity::__UnityTls__unitytls_x509verify_result (::Mono::Unity::__UnityTls__unitytls_x509verify_callback::*)(
    ::cordl_internals::Ptr<void>, ::Mono::Unity::__UnityTls__unitytls_x509_ref, ::Mono::Unity::__UnityTls__unitytls_x509verify_result,
    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(&::Mono::Unity::__UnityTls__unitytls_x509verify_callback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2817d1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::__UnityTls__unitytls_x509verify_callback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::__UnityTls__unitytls_x509verify_callback*>::get(), 13));
    return ___internal_method;
  }
};
inline ::Mono::Unity::__UnityTls__unitytls_x509verify_callback* Mono::Unity::__UnityTls__unitytls_x509verify_callback::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Unity::__UnityTls__unitytls_x509verify_callback*>(object, method));
}
inline void Mono::Unity::__UnityTls__unitytls_x509verify_callback::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::__UnityTls__unitytls_x509verify_callback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::Mono::Unity::__UnityTls__unitytls_x509verify_result
Mono::Unity::__UnityTls__unitytls_x509verify_callback::Invoke(::cordl_internals::Ptr<void> userData, ::Mono::Unity::__UnityTls__unitytls_x509_ref cert,
                                                              ::Mono::Unity::__UnityTls__unitytls_x509verify_result result,
                                                              ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::__UnityTls__unitytls_x509verify_callback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::__UnityTls__unitytls_x509verify_result, false>(this, ___internal_method, userData, cert, result, errorState);
}
// Ctor Parameters []
constexpr ::Mono::Unity::__UnityTls__unitytls_x509verify_callback::__UnityTls__unitytls_x509verify_callback() {}
// Ctor Parameters []
constexpr ::Mono::Unity::__UnityTls__unitytls_tlsctx::__UnityTls__unitytls_tlsctx() {}
// Ctor Parameters []
constexpr ::Mono::Unity::__UnityTls__unitytls_x509name::__UnityTls__unitytls_x509name() {}
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Unity::__UnityTls__unitytls_ciphersuite::__UnityTls__unitytls_ciphersuite(uint32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Unity::__UnityTls__unitytls_ciphersuite::__UnityTls__unitytls_ciphersuite() {}
constexpr ::Mono::Unity::__UnityTls__unitytls_ciphersuite Mono::Unity::__UnityTls__unitytls_ciphersuite::UNITYTLS_CIPHERSUITE_INVALID{ static_cast<uint32_t>(0xffffffc0u) };
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Unity::__UnityTls__unitytls_protocol::__UnityTls__unitytls_protocol(uint32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Unity::__UnityTls__unitytls_protocol::__UnityTls__unitytls_protocol() {}
constexpr ::Mono::Unity::__UnityTls__unitytls_protocol Mono::Unity::__UnityTls__unitytls_protocol::UNITYTLS_PROTOCOL_TLS_1_0{ static_cast<uint32_t>(0x3020100u) };
constexpr ::Mono::Unity::__UnityTls__unitytls_protocol Mono::Unity::__UnityTls__unitytls_protocol::UNITYTLS_PROTOCOL_TLS_1_1{ static_cast<uint32_t>(0x50030201u) };
constexpr ::Mono::Unity::__UnityTls__unitytls_protocol Mono::Unity::__UnityTls__unitytls_protocol::UNITYTLS_PROTOCOL_TLS_1_2{ static_cast<uint32_t>(0x500302u) };
constexpr ::Mono::Unity::__UnityTls__unitytls_protocol Mono::Unity::__UnityTls__unitytls_protocol::UNITYTLS_PROTOCOL_INVALID{ static_cast<uint32_t>(0x5003u) };
// Ctor Parameters [CppParam { name: "min", ty: "::Mono::Unity::__UnityTls__unitytls_protocol", modifiers: "", def_value: Some("{}") }, CppParam { name: "max", ty:
// "::Mono::Unity::__UnityTls__unitytls_protocol", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Unity::__UnityTls__unitytls_tlsctx_protocolrange::__UnityTls__unitytls_tlsctx_protocolrange(::Mono::Unity::__UnityTls__unitytls_protocol min,
                                                                                                              ::Mono::Unity::__UnityTls__unitytls_protocol max) noexcept {
  this->min = min;
  this->max = max;
}
// Ctor Parameters []
constexpr ::Mono::Unity::__UnityTls__unitytls_tlsctx_protocolrange::__UnityTls__unitytls_tlsctx_protocolrange() {}
//  Writing Method size for method: ::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback::*)(::System::Object*, void*)>(
    &::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2817d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void* (::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback::*)(::cordl_internals::Ptr<void>, ::cordl_internals::Ptr<uint8_t>, void*,
                                                                                     ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(
        &::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2817e08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback*>::get(), 13));
    return ___internal_method;
  }
};
inline ::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback* Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback*>(object, method));
}
inline void Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void* Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback::Invoke(::cordl_internals::Ptr<void> userData, ::cordl_internals::Ptr<uint8_t> data, void* bufferLen,
                                                                             ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void*, false>(this, ___internal_method, userData, data, bufferLen, errorState);
}
// Ctor Parameters []
constexpr ::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback::__UnityTls__unitytls_tlsctx_write_callback() {}
//  Writing Method size for method: ::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback::*)(::System::Object*, void*)>(
    &::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2817e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void* (::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback::*)(::cordl_internals::Ptr<void>, ::cordl_internals::Ptr<uint8_t>, void*,
                                                                                    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(
        &::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2817ef4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback*>::get(), 13));
    return ___internal_method;
  }
};
inline ::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback* Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback*>(object, method));
}
inline void Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void* Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback::Invoke(::cordl_internals::Ptr<void> userData, ::cordl_internals::Ptr<uint8_t> buffer, void* bufferLen,
                                                                            ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void*, false>(this, ___internal_method, userData, buffer, bufferLen, errorState);
}
// Ctor Parameters []
constexpr ::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback::__UnityTls__unitytls_tlsctx_read_callback() {}
//  Writing Method size for method: ::Mono::Unity::__UnityTls__unitytls_tlsctx_trace_callback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::__UnityTls__unitytls_tlsctx_trace_callback::*)(::System::Object*, void*)>(
    &::Mono::Unity::__UnityTls__unitytls_tlsctx_trace_callback::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2817f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::__UnityTls__unitytls_tlsctx_trace_callback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::__UnityTls__unitytls_tlsctx_trace_callback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::__UnityTls__unitytls_tlsctx_trace_callback::*)(
    ::cordl_internals::Ptr<void>, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>, ::cordl_internals::Ptr<uint8_t>, void*)>(
    &::Mono::Unity::__UnityTls__unitytls_tlsctx_trace_callback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2817fe0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::__UnityTls__unitytls_tlsctx_trace_callback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::__UnityTls__unitytls_tlsctx_trace_callback*>::get(), 13));
    return ___internal_method;
  }
};
inline ::Mono::Unity::__UnityTls__unitytls_tlsctx_trace_callback* Mono::Unity::__UnityTls__unitytls_tlsctx_trace_callback::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Unity::__UnityTls__unitytls_tlsctx_trace_callback*>(object, method));
}
inline void Mono::Unity::__UnityTls__unitytls_tlsctx_trace_callback::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::__UnityTls__unitytls_tlsctx_trace_callback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Mono::Unity::__UnityTls__unitytls_tlsctx_trace_callback::Invoke(::cordl_internals::Ptr<void> userData, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> ctx,
                                                                            ::cordl_internals::Ptr<uint8_t> traceMessage, void* traceMessageLen) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::__UnityTls__unitytls_tlsctx_trace_callback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userData, ctx, traceMessage, traceMessageLen);
}
// Ctor Parameters []
constexpr ::Mono::Unity::__UnityTls__unitytls_tlsctx_trace_callback::__UnityTls__unitytls_tlsctx_trace_callback() {}
//  Writing Method size for method: ::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback::*)(::System::Object*, void*)>(
    &::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2817ff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback::*)(
    ::cordl_internals::Ptr<void>, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>, ::cordl_internals::Ptr<uint8_t>, void*,
    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509name>, void*, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list_ref>,
    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key_ref>, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(
    &::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback::Invoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28180cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback*>::get(), 13));
    return ___internal_method;
  }
};
inline ::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback* Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback*>(object, method));
}
inline void Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback::Invoke(::cordl_internals::Ptr<void> userData, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> ctx,
                                                                                  ::cordl_internals::Ptr<uint8_t> cn, void* cnLen,
                                                                                  ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509name> caList, void* caListLen,
                                                                                  ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list_ref> chain,
                                                                                  ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key_ref> key,
                                                                                  ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userData, ctx, cn, cnLen, caList, caListLen, chain, key, errorState);
}
// Ctor Parameters []
constexpr ::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback::__UnityTls__unitytls_tlsctx_certificate_callback() {}
//  Writing Method size for method: ::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback::*)(::System::Object*, void*)>(
    &::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x28180e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Mono::Unity::__UnityTls__unitytls_x509verify_result (::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback::*)(
        ::cordl_internals::Ptr<void>, ::Mono::Unity::__UnityTls__unitytls_x509list_ref, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(
        &::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28181c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback*>::get(), 13));
    return ___internal_method;
  }
};
inline ::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback* Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback*>(object, method));
}
inline void Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::Mono::Unity::__UnityTls__unitytls_x509verify_result
Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback::Invoke(::cordl_internals::Ptr<void> userData, ::Mono::Unity::__UnityTls__unitytls_x509list_ref chain,
                                                                     ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::__UnityTls__unitytls_x509verify_result, false>(this, ___internal_method, userData, chain, errorState);
}
// Ctor Parameters []
constexpr ::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback::__UnityTls__unitytls_tlsctx_x509verify_callback() {}
// Ctor Parameters [CppParam { name: "read", ty: "::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "write", ty:
// "::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "data", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value:
// Some("nullptr") }]
constexpr ::Mono::Unity::__UnityTls__unitytls_tlsctx_callbacks::__UnityTls__unitytls_tlsctx_callbacks(::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback* read,
                                                                                                      ::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback* write,
                                                                                                      ::cordl_internals::Ptr<void> data) noexcept {
  this->read = read;
  this->write = write;
  this->data = data;
}
// Ctor Parameters []
constexpr ::Mono::Unity::__UnityTls__unitytls_tlsctx_callbacks::__UnityTls__unitytls_tlsctx_callbacks() {}
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t::*)(
    ::System::Object*, void*)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x28181dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Unity::__UnityTls__unitytls_errorstate (
    ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t::*)()>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2818298;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t*>::get(), 13));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t*
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t*>(object, method));
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::Mono::Unity::__UnityTls__unitytls_errorstate GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t::Invoke() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::__UnityTls__unitytls_errorstate, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t::__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t() {}
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t::*)(
    ::System::Object*, void*)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x28182ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t*>::get(), ".ctor",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t::*)(
    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>, ::Mono::Unity::__UnityTls__unitytls_error_code)>(
    &::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2818384;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t*>::get(), 13));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t*
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t*>(object, method));
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState,
                                                                                                              ::Mono::Unity::__UnityTls__unitytls_error_code errorCode) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorState, errorCode);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t::__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t() {}
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2818398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Mono::Unity::__UnityTls__unitytls_key_ref (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t::*)(
        ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key>, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(
        &::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2818470;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t*>::get(), 13));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t*
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t*>(object, method));
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::Mono::Unity::__UnityTls__unitytls_key_ref
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key> key,
                                                                                       ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::__UnityTls__unitytls_key_ref, false>(this, ___internal_method, key, errorState);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t::__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t() {}
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t::*)(
    ::System::Object*, void*)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2818484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key> (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t::*)(
        ::cordl_internals::Ptr<uint8_t>, void*, ::cordl_internals::Ptr<uint8_t>, void*, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(
        &::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x281855c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t*>::get(), 13));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t*
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t*>(object, method));
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key>
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t::Invoke(::cordl_internals::Ptr<uint8_t> buffer, void* bufferLen, ::cordl_internals::Ptr<uint8_t> password,
                                                                                         void* passwordLen, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key>, false>(this, ___internal_method, buffer, bufferLen, password, passwordLen, errorState);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t::__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t() {}
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t::*)(
    ::System::Object*, void*)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2818570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key> (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t::*)(
        ::cordl_internals::Ptr<uint8_t>, void*, ::cordl_internals::Ptr<uint8_t>, void*, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(
        &::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2818648;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t*>::get(), 13));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t*
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t*>(object, method));
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key>
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t::Invoke(::cordl_internals::Ptr<uint8_t> buffer, void* bufferLen, ::cordl_internals::Ptr<uint8_t> password,
                                                                                         void* passwordLen, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key>, false>(this, ___internal_method, buffer, bufferLen, password, passwordLen, errorState);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t::__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t() {}
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_free_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_free_t::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_free_t::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x281865c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_free_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_free_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_free_t::*)(
    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key>)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_free_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2818730;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_free_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_free_t*>::get(), 13));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_free_t* GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_free_t::New_ctor(::System::Object* object,
                                                                                                                                                                            void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_free_t*>(object, method));
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_free_t::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_free_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_free_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key> key) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_free_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_free_t::__UnityTls__unitytls_interface_struct__unitytls_key_free_t() {}
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t::*)(
    ::System::Object*, void*)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2818744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void* (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t::*)(::Mono::Unity::__UnityTls__unitytls_x509_ref, ::cordl_internals::Ptr<uint8_t>, void*,
                                                                                                                ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(
        &::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2818808;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t*>::get(), 13));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t*
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t*>(object, method));
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void* GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t::Invoke(::Mono::Unity::__UnityTls__unitytls_x509_ref cert, ::cordl_internals::Ptr<uint8_t> buffer,
                                                                                                        void* bufferLen,
                                                                                                        ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void*, false>(this, ___internal_method, cert, buffer, bufferLen, errorState);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t::__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t() {}
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t::*)(
    ::System::Object*, void*)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x281881c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Mono::Unity::__UnityTls__unitytls_x509list_ref (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t::*)(
        ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(
        &::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28188f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t*>::get(), 13));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t*
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t*>(object, method));
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::Mono::Unity::__UnityTls__unitytls_x509list_ref
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list> list,
                                                                                            ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::__UnityTls__unitytls_x509list_ref, false>(this, ___internal_method, list, errorState);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t() {}
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t::*)(
    ::System::Object*, void*)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2818908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Mono::Unity::__UnityTls__unitytls_x509_ref (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t::*)(
        ::Mono::Unity::__UnityTls__unitytls_x509list_ref, void*, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(
        &::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28189cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t*>::get(), 13));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t*
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t*>(object, method));
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::Mono::Unity::__UnityTls__unitytls_x509_ref
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t::Invoke(::Mono::Unity::__UnityTls__unitytls_x509list_ref list, void* index,
                                                                                             ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::__UnityTls__unitytls_x509_ref, false>(this, ___internal_method, list, index, errorState);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t() {}
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t::*)(
    ::System::Object*, void*)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x28189e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list> (
    ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t::*)(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(
    &::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2818ab4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t*>::get(), 13));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t*
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t*>(object, method));
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>, false>(this, ___internal_method, errorState);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t::__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t() {}
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t::*)(
    ::System::Object*, void*)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2818ac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t::*)(
    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>, ::Mono::Unity::__UnityTls__unitytls_x509_ref, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(
    &::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2818ba0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t*>::get(), 13));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t*
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t*>(object, method));
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list> list,
                                                                                                       ::Mono::Unity::__UnityTls__unitytls_x509_ref cert,
                                                                                                       ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list, cert, errorState);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t() {}
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t::*)(
    ::System::Object*, void*)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2818bb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t::*)(
    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>, ::cordl_internals::Ptr<uint8_t>, void*, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(
    &::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2818c8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t*>::get(), 13));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t*
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t*>(object, method));
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list> list,
                                                                                                           ::cordl_internals::Ptr<uint8_t> buffer, void* bufferLen,
                                                                                                           ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list, buffer, bufferLen, errorState);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t() {}
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t::*)(
    ::System::Object*, void*)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2818ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t::*)(
    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2818d74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t*>::get(), 13));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t*
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t*>(object, method));
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list> list) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t::__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t() {}
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t::*)(
    ::System::Object*, void*)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2818d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t*>::get(), ".ctor",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Mono::Unity::__UnityTls__unitytls_x509verify_result (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t::*)(
        ::Mono::Unity::__UnityTls__unitytls_x509list_ref, ::cordl_internals::Ptr<uint8_t>, void*, ::Mono::Unity::__UnityTls__unitytls_x509verify_callback*, ::cordl_internals::Ptr<void>,
        ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2818e4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t*>::get(), 13));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t*
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t*>(object, method));
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::Mono::Unity::__UnityTls__unitytls_x509verify_result GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t::Invoke(
    ::Mono::Unity::__UnityTls__unitytls_x509list_ref chain, ::cordl_internals::Ptr<uint8_t> cn, void* cnLen, ::Mono::Unity::__UnityTls__unitytls_x509verify_callback* cb,
    ::cordl_internals::Ptr<void> userData, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::__UnityTls__unitytls_x509verify_result, false>(this, ___internal_method, chain, cn, cnLen, cb, userData, errorState);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t::__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t() {}
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t::*)(
    ::System::Object*, void*)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2818e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t*>::get(), ".ctor",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Mono::Unity::__UnityTls__unitytls_x509verify_result (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t::*)(
        ::Mono::Unity::__UnityTls__unitytls_x509list_ref, ::Mono::Unity::__UnityTls__unitytls_x509list_ref, ::cordl_internals::Ptr<uint8_t>, void*,
        ::Mono::Unity::__UnityTls__unitytls_x509verify_callback*, ::cordl_internals::Ptr<void>, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(
        &::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2818f24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t*>::get(), 13));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t*
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t*>(object, method));
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::Mono::Unity::__UnityTls__unitytls_x509verify_result GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t::Invoke(
    ::Mono::Unity::__UnityTls__unitytls_x509list_ref chain, ::Mono::Unity::__UnityTls__unitytls_x509list_ref trustCA, ::cordl_internals::Ptr<uint8_t> cn, void* cnLen,
    ::Mono::Unity::__UnityTls__unitytls_x509verify_callback* cb, ::cordl_internals::Ptr<void> userData, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::__UnityTls__unitytls_x509verify_result, false>(this, ___internal_method, chain, trustCA, cn, cnLen, cb, userData, errorState);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t::__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t() {}
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t::*)(
    ::System::Object*, void*)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2818f3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t::*)(
        ::Mono::Unity::__UnityTls__unitytls_tlsctx_protocolrange, ::Mono::Unity::__UnityTls__unitytls_tlsctx_callbacks, uint64_t, uint64_t,
        ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t::Invoke)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2819000;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t*>::get(), 13));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t*
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t*>(object, method));
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t::Invoke(
    ::Mono::Unity::__UnityTls__unitytls_tlsctx_protocolrange supportedProtocols, ::Mono::Unity::__UnityTls__unitytls_tlsctx_callbacks callbacks, uint64_t certChain, uint64_t leafCertificateKey,
    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>, false>(this, ___internal_method, supportedProtocols, callbacks, certChain,
                                                                                                                        leafCertificateKey, errorState);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t() {}
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t::*)(
    ::System::Object*, void*)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x281903c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t::*)(
        ::Mono::Unity::__UnityTls__unitytls_tlsctx_protocolrange, ::Mono::Unity::__UnityTls__unitytls_tlsctx_callbacks, ::cordl_internals::Ptr<uint8_t>, void*,
        ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t::Invoke)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2819100;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t*>::get(), 13));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t*
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t*>(object, method));
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t::Invoke(::Mono::Unity::__UnityTls__unitytls_tlsctx_protocolrange supportedProtocols,
                                                                                                ::Mono::Unity::__UnityTls__unitytls_tlsctx_callbacks callbacks, ::cordl_internals::Ptr<uint8_t> cn,
                                                                                                void* cnLen, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>, false>(this, ___internal_method, supportedProtocols, callbacks, cn, cnLen, errorState);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t() {}
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t::*)(::System::Object*, void*)>(
        &::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x281913c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t*>::get(), ".ctor",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t::*)(
        ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>, ::Mono::Unity::__UnityTls__unitytls_x509list_ref, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(
        &::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2819214;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t*>::get(), 13));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t*
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t*>(object, method));
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t*>::get(), ".ctor",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t::Invoke(
    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> ctx, ::Mono::Unity::__UnityTls__unitytls_x509list_ref clientAuthCAList,
    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx, clientAuthCAList, errorState);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t::
    __UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t() {}
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t::*)(
    ::System::Object*, void*)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2819228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t*>::get(), ".ctor",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t::*)(
    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>, ::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback*, ::cordl_internals::Ptr<void>,
    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2819300;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t*>::get(), 13));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t*
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t*>(object, method));
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t*>::get(), ".ctor",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t::Invoke(
    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> ctx, ::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback* cb, ::cordl_internals::Ptr<void> userData,
    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx, cb, userData, errorState);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t() {}
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t::*)(
    ::System::Object*, void*)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2819314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t*>::get(), ".ctor",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t::*)(
    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>, ::Mono::Unity::__UnityTls__unitytls_tlsctx_trace_callback*, ::cordl_internals::Ptr<void>,
    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28193ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t*>::get(), 13));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t*
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t*>(object, method));
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t*>::get(), ".ctor",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> ctx,
                                                                                                                 ::Mono::Unity::__UnityTls__unitytls_tlsctx_trace_callback* cb,
                                                                                                                 ::cordl_internals::Ptr<void> userData,
                                                                                                                 ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx, cb, userData, errorState);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t() {}
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t::*)(
    ::System::Object*, void*)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2819400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t*>::get(), ".ctor",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t::*)(
    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>, ::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback*, ::cordl_internals::Ptr<void>,
    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28194d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t*>::get(), 13));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t*
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t*>(object, method));
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t*>::get(), ".ctor",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t::Invoke(
    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> ctx, ::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback* cb, ::cordl_internals::Ptr<void> userData,
    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx, cb, userData, errorState);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t() {}
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t::*)(
    ::System::Object*, void*)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x28194ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t*>::get(), ".ctor",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t::*)(
    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_ciphersuite>, void*,
    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28195c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t*>::get(), 13));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t*
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t*>(object, method));
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t*>::get(), ".ctor",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t::Invoke(
    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> ctx, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_ciphersuite> supportedCiphersuites,
    void* supportedCiphersuitesLen, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx, supportedCiphersuites, supportedCiphersuitesLen, errorState);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t::
    __UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t() {}
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t::*)(
    ::System::Object*, void*)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x28195d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t*>::get(), ".ctor",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Mono::Unity::__UnityTls__unitytls_ciphersuite (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t::*)(
        ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(
        &::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x28196b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t*>::get(), 13));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t*
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t*>(object, method));
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::Mono::Unity::__UnityTls__unitytls_ciphersuite
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> ctx,
                                                                                                  ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::__UnityTls__unitytls_ciphersuite, false>(this, ___internal_method, ctx, errorState);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t() {}
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t::*)(
    ::System::Object*, void*)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x28196c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Mono::Unity::__UnityTls__unitytls_protocol (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t::*)(
        ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(
        &::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x281979c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t*>::get(), 13));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t*
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t*>(object, method));
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::Mono::Unity::__UnityTls__unitytls_protocol
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> ctx,
                                                                                               ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::__UnityTls__unitytls_protocol, false>(this, ___internal_method, ctx, errorState);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t() {}
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t::*)(
    ::System::Object*, void*)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x28197b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t*>::get(), ".ctor",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Mono::Unity::__UnityTls__unitytls_x509verify_result (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t::*)(
        ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(
        &::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2819888;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t*>::get(), 13));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t*
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t*>(object, method));
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t*>::get(), ".ctor",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::Mono::Unity::__UnityTls__unitytls_x509verify_result
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> ctx,
                                                                                                    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::__UnityTls__unitytls_x509verify_result, false>(this, ___internal_method, ctx, errorState);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t() {}
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x281989c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (
    ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t::*)(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>, ::cordl_internals::Ptr<uint8_t>, void*,
                                                                                         ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(
    &::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2819974;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t*>::get(), 13));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t*
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t*>(object, method));
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void* GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> ctx,
                                                                                                    ::cordl_internals::Ptr<uint8_t> buffer, void* bufferLen,
                                                                                                    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void*, false>(this, ___internal_method, ctx, buffer, bufferLen, errorState);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t() {}
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t::*)(
    ::System::Object*, void*)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2819988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (
    ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t::*)(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>, ::cordl_internals::Ptr<uint8_t>, void*,
                                                                                          ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(
    &::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2819a60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t*>::get(), 13));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t*
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t*>(object, method));
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void* GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> ctx,
                                                                                                     ::cordl_internals::Ptr<uint8_t> data, void* bufferLen,
                                                                                                     ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void*, false>(this, ___internal_method, ctx, data, bufferLen, errorState);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t() {}
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t::*)(
    ::System::Object*, void*)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2819a74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t::*)(
    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(
    &::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2819b4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t*>::get(), 13));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t*
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t*>(object, method));
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> ctx,
                                                                                                           ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx, errorState);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t() {}
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2819b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t::*)(
    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2819c34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t*>::get(), 13));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t*
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t*>(object, method));
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> ctx) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t() {}
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t::*)(
    ::System::Object*, void*)>(&::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2819c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t*>::get(), ".ctor",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t::*)(
    ::cordl_internals::Ptr<uint8_t>, void*, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(
    &::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2819d20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t*>::get(), 13));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t*
GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t*>(object, method));
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t::Invoke(::cordl_internals::Ptr<uint8_t> buffer, void* bufferLen,
                                                                                                             ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, bufferLen, errorState);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t::__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t() {}
//  Writing Method size for method: ::Mono::Unity::__UnityTls__unitytls_interface_struct._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::__UnityTls__unitytls_interface_struct::*)()>(
    &::Mono::Unity::__UnityTls__unitytls_interface_struct::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28181d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::__UnityTls__unitytls_interface_struct*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr uint64_t& Mono::Unity::__UnityTls__unitytls_interface_struct::__get_UNITYTLS_INVALID_HANDLE() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UNITYTLS_INVALID_HANDLE;
}
constexpr uint64_t const& Mono::Unity::__UnityTls__unitytls_interface_struct::__get_UNITYTLS_INVALID_HANDLE() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UNITYTLS_INVALID_HANDLE;
}
constexpr void Mono::Unity::__UnityTls__unitytls_interface_struct::__set_UNITYTLS_INVALID_HANDLE(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UNITYTLS_INVALID_HANDLE = value;
}
constexpr ::Mono::Unity::__UnityTls__unitytls_tlsctx_protocolrange& Mono::Unity::__UnityTls__unitytls_interface_struct::__get_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT;
}
constexpr ::Mono::Unity::__UnityTls__unitytls_tlsctx_protocolrange const& Mono::Unity::__UnityTls__unitytls_interface_struct::__get_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT;
}
constexpr void Mono::Unity::__UnityTls__unitytls_interface_struct::__set_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT(::Mono::Unity::__UnityTls__unitytls_tlsctx_protocolrange value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT = value;
}
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t*& Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_errorstate_create() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_errorstate_create;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t*> const&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_errorstate_create() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_errorstate_create;
}
constexpr void Mono::Unity::__UnityTls__unitytls_interface_struct::__set_unitytls_errorstate_create(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_create_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_errorstate_create)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t*& Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_errorstate_raise_error() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_errorstate_raise_error;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t*> const&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_errorstate_raise_error() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_errorstate_raise_error;
}
constexpr void
Mono::Unity::__UnityTls__unitytls_interface_struct::__set_unitytls_errorstate_raise_error(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_errorstate_raise_error_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_errorstate_raise_error)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t*& Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_key_get_ref() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_key_get_ref;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t*> const&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_key_get_ref() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_key_get_ref;
}
constexpr void Mono::Unity::__UnityTls__unitytls_interface_struct::__set_unitytls_key_get_ref(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_get_ref_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_key_get_ref)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t*& Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_key_parse_der() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_key_parse_der;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t*> const&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_key_parse_der() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_key_parse_der;
}
constexpr void Mono::Unity::__UnityTls__unitytls_interface_struct::__set_unitytls_key_parse_der(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_der_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_key_parse_der)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t*& Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_key_parse_pem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_key_parse_pem;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t*> const&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_key_parse_pem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_key_parse_pem;
}
constexpr void Mono::Unity::__UnityTls__unitytls_interface_struct::__set_unitytls_key_parse_pem(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_parse_pem_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_key_parse_pem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_free_t*& Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_key_free() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_key_free;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_free_t*> const&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_key_free() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_key_free;
}
constexpr void Mono::Unity::__UnityTls__unitytls_interface_struct::__set_unitytls_key_free(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_key_free_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_key_free)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t*& Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_x509_export_der() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509_export_der;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t*> const&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_x509_export_der() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509_export_der;
}
constexpr void Mono::Unity::__UnityTls__unitytls_interface_struct::__set_unitytls_x509_export_der(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509_export_der_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_x509_export_der)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t*& Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_x509list_get_ref() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509list_get_ref;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t*> const&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_x509list_get_ref() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509list_get_ref;
}
constexpr void Mono::Unity::__UnityTls__unitytls_interface_struct::__set_unitytls_x509list_get_ref(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_ref_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_x509list_get_ref)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t*& Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_x509list_get_x509() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509list_get_x509;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t*> const&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_x509list_get_x509() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509list_get_x509;
}
constexpr void Mono::Unity::__UnityTls__unitytls_interface_struct::__set_unitytls_x509list_get_x509(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_get_x509_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_x509list_get_x509)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t*& Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_x509list_create() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509list_create;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t*> const&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_x509list_create() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509list_create;
}
constexpr void Mono::Unity::__UnityTls__unitytls_interface_struct::__set_unitytls_x509list_create(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_create_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_x509list_create)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t*& Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_x509list_append() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509list_append;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t*> const&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_x509list_append() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509list_append;
}
constexpr void Mono::Unity::__UnityTls__unitytls_interface_struct::__set_unitytls_x509list_append(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_x509list_append)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t*& Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_x509list_append_der() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509list_append_der;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t*> const&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_x509list_append_der() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509list_append_der;
}
constexpr void Mono::Unity::__UnityTls__unitytls_interface_struct::__set_unitytls_x509list_append_der(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_x509list_append_der)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t*& Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_x509list_append_pem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509list_append_pem;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t*> const&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_x509list_append_pem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509list_append_pem;
}
constexpr void Mono::Unity::__UnityTls__unitytls_interface_struct::__set_unitytls_x509list_append_pem(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_append_der_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_x509list_append_pem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t*& Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_x509list_free() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509list_free;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t*> const&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_x509list_free() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509list_free;
}
constexpr void Mono::Unity::__UnityTls__unitytls_interface_struct::__set_unitytls_x509list_free(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509list_free_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_x509list_free)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t*& Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_x509verify_default_ca() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509verify_default_ca;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t*> const&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_x509verify_default_ca() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509verify_default_ca;
}
constexpr void
Mono::Unity::__UnityTls__unitytls_interface_struct::__set_unitytls_x509verify_default_ca(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_default_ca_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_x509verify_default_ca)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t*& Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_x509verify_explicit_ca() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509verify_explicit_ca;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t*> const&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_x509verify_explicit_ca() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509verify_explicit_ca;
}
constexpr void
Mono::Unity::__UnityTls__unitytls_interface_struct::__set_unitytls_x509verify_explicit_ca(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_x509verify_explicit_ca_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_x509verify_explicit_ca)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t*& Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_create_server() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_create_server;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t*> const&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_create_server() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_create_server;
}
constexpr void
Mono::Unity::__UnityTls__unitytls_interface_struct::__set_unitytls_tlsctx_create_server(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_server_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_tlsctx_create_server)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t*& Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_create_client() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_create_client;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t*> const&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_create_client() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_create_client;
}
constexpr void
Mono::Unity::__UnityTls__unitytls_interface_struct::__set_unitytls_tlsctx_create_client(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_create_client_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_tlsctx_create_client)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t*&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_server_require_client_authentication() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_server_require_client_authentication;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t*> const&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_server_require_client_authentication() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_server_require_client_authentication;
}
constexpr void Mono::Unity::__UnityTls__unitytls_interface_struct::__set_unitytls_tlsctx_server_require_client_authentication(
    ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_server_require_client_authentication_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_tlsctx_server_require_client_authentication)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t*&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_set_certificate_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_set_certificate_callback;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t*> const&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_set_certificate_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_set_certificate_callback;
}
constexpr void Mono::Unity::__UnityTls__unitytls_interface_struct::__set_unitytls_tlsctx_set_certificate_callback(
    ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_certificate_callback_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_tlsctx_set_certificate_callback)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t*&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_set_trace_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_set_trace_callback;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t*> const&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_set_trace_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_set_trace_callback;
}
constexpr void
Mono::Unity::__UnityTls__unitytls_interface_struct::__set_unitytls_tlsctx_set_trace_callback(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_trace_callback_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_tlsctx_set_trace_callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t*&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_set_x509verify_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_set_x509verify_callback;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t*> const&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_set_x509verify_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_set_x509verify_callback;
}
constexpr void Mono::Unity::__UnityTls__unitytls_interface_struct::__set_unitytls_tlsctx_set_x509verify_callback(
    ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_x509verify_callback_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_tlsctx_set_x509verify_callback)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t*&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_set_supported_ciphersuites() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_set_supported_ciphersuites;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t*> const&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_set_supported_ciphersuites() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_set_supported_ciphersuites;
}
constexpr void Mono::Unity::__UnityTls__unitytls_interface_struct::__set_unitytls_tlsctx_set_supported_ciphersuites(
    ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_set_supported_ciphersuites_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_tlsctx_set_supported_ciphersuites)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t*& Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_get_ciphersuite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_get_ciphersuite;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t*> const&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_get_ciphersuite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_get_ciphersuite;
}
constexpr void
Mono::Unity::__UnityTls__unitytls_interface_struct::__set_unitytls_tlsctx_get_ciphersuite(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_ciphersuite_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_tlsctx_get_ciphersuite)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t*& Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_get_protocol() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_get_protocol;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t*> const&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_get_protocol() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_get_protocol;
}
constexpr void Mono::Unity::__UnityTls__unitytls_interface_struct::__set_unitytls_tlsctx_get_protocol(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_get_protocol_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_tlsctx_get_protocol)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t*&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_process_handshake() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_process_handshake;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t*> const&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_process_handshake() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_process_handshake;
}
constexpr void
Mono::Unity::__UnityTls__unitytls_interface_struct::__set_unitytls_tlsctx_process_handshake(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_process_handshake_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_tlsctx_process_handshake)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t*& Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_read() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_read;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t*> const&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_read() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_read;
}
constexpr void Mono::Unity::__UnityTls__unitytls_interface_struct::__set_unitytls_tlsctx_read(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_read_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_tlsctx_read)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t*& Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_write() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_write;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t*> const&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_write() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_write;
}
constexpr void Mono::Unity::__UnityTls__unitytls_interface_struct::__set_unitytls_tlsctx_write(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_write_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_tlsctx_write)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t*& Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_notify_close() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_notify_close;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t*> const&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_notify_close() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_notify_close;
}
constexpr void Mono::Unity::__UnityTls__unitytls_interface_struct::__set_unitytls_tlsctx_notify_close(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_notify_close_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_tlsctx_notify_close)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t*& Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_free() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_free;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t*> const&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_tlsctx_free() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_free;
}
constexpr void Mono::Unity::__UnityTls__unitytls_interface_struct::__set_unitytls_tlsctx_free(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_tlsctx_free_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_tlsctx_free)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t*& Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_random_generate_bytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_random_generate_bytes;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t*> const&
Mono::Unity::__UnityTls__unitytls_interface_struct::__get_unitytls_random_generate_bytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_random_generate_bytes;
}
constexpr void
Mono::Unity::__UnityTls__unitytls_interface_struct::__set_unitytls_random_generate_bytes(::GlobalNamespace::__UnityTls__unitytls_interface_struct__unitytls_random_generate_bytes_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_random_generate_bytes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Mono::Unity::__UnityTls__unitytls_interface_struct* Mono::Unity::__UnityTls__unitytls_interface_struct::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Unity::__UnityTls__unitytls_interface_struct*>());
}
inline void Mono::Unity::__UnityTls__unitytls_interface_struct::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::__UnityTls__unitytls_interface_struct*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::Unity::__UnityTls__unitytls_interface_struct::__UnityTls__unitytls_interface_struct() {}
//  Writing Method size for method: ::Mono::Unity::UnityTls.GetUnityTlsInterface
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)()>(&::Mono::Unity::UnityTls::GetUnityTlsInterface)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2817c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls*>::get(), "GetUnityTlsInterface",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTls.get_IsSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Mono::Unity::UnityTls::get_IsSupported)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2817c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls*>::get(), "get_IsSupported",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTls.get_NativeInterface
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Unity::__UnityTls__unitytls_interface_struct* (*)()>(&::Mono::Unity::UnityTls::get_NativeInterface)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2817978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls*>::get(), "get_NativeInterface",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void Mono::Unity::UnityTls::setStaticF_marshalledInterface(::Mono::Unity::__UnityTls__unitytls_interface_struct* value) {
  ::cordl_internals::setStaticField<::Mono::Unity::__UnityTls__unitytls_interface_struct*, "marshalledInterface",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls*>::get>(std::forward<::Mono::Unity::__UnityTls__unitytls_interface_struct*>(value));
}
inline ::Mono::Unity::__UnityTls__unitytls_interface_struct* Mono::Unity::UnityTls::getStaticF_marshalledInterface() {
  return ::cordl_internals::getStaticField<::Mono::Unity::__UnityTls__unitytls_interface_struct*, "marshalledInterface",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls*>::get>();
}
inline void* Mono::Unity::UnityTls::GetUnityTlsInterface() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls*>::get(), "GetUnityTlsInterface",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method);
}
inline bool Mono::Unity::UnityTls::get_IsSupported() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls*>::get(), "get_IsSupported",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::Mono::Unity::__UnityTls__unitytls_interface_struct* Mono::Unity::UnityTls::get_NativeInterface() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls*>::get(), "get_NativeInterface",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::__UnityTls__unitytls_interface_struct*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTls::UnityTls() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
