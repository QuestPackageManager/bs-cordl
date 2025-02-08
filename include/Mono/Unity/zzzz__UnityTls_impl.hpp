#pragma once
// IWYU pragma private; include "Mono/Unity/UnityTls.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Unity/zzzz__UnityTls_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Unity::UnityTls_unitytls_error_code::UnityTls_unitytls_error_code(uint32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTls_unitytls_error_code::UnityTls_unitytls_error_code() {}
constexpr ::Mono::Unity::UnityTls_unitytls_error_code Mono::Unity::UnityTls_unitytls_error_code::UNITYTLS_SUCCESS{ static_cast<uint32_t>(0x0u) };
constexpr ::Mono::Unity::UnityTls_unitytls_error_code Mono::Unity::UnityTls_unitytls_error_code::UNITYTLS_INVALID_ARGUMENT{ static_cast<uint32_t>(0x1u) };
constexpr ::Mono::Unity::UnityTls_unitytls_error_code Mono::Unity::UnityTls_unitytls_error_code::UNITYTLS_INVALID_FORMAT{ static_cast<uint32_t>(0x2u) };
constexpr ::Mono::Unity::UnityTls_unitytls_error_code Mono::Unity::UnityTls_unitytls_error_code::UNITYTLS_INVALID_PASSWORD{ static_cast<uint32_t>(0x3u) };
constexpr ::Mono::Unity::UnityTls_unitytls_error_code Mono::Unity::UnityTls_unitytls_error_code::UNITYTLS_INVALID_STATE{ static_cast<uint32_t>(0x4u) };
constexpr ::Mono::Unity::UnityTls_unitytls_error_code Mono::Unity::UnityTls_unitytls_error_code::UNITYTLS_BUFFER_OVERFLOW{ static_cast<uint32_t>(0x5u) };
constexpr ::Mono::Unity::UnityTls_unitytls_error_code Mono::Unity::UnityTls_unitytls_error_code::UNITYTLS_OUT_OF_MEMORY{ static_cast<uint32_t>(0x6u) };
constexpr ::Mono::Unity::UnityTls_unitytls_error_code Mono::Unity::UnityTls_unitytls_error_code::UNITYTLS_INTERNAL_ERROR{ static_cast<uint32_t>(0x7u) };
constexpr ::Mono::Unity::UnityTls_unitytls_error_code Mono::Unity::UnityTls_unitytls_error_code::UNITYTLS_NOT_SUPPORTED{ static_cast<uint32_t>(0x8u) };
constexpr ::Mono::Unity::UnityTls_unitytls_error_code Mono::Unity::UnityTls_unitytls_error_code::UNITYTLS_ENTROPY_SOURCE_FAILED{ static_cast<uint32_t>(0x9u) };
constexpr ::Mono::Unity::UnityTls_unitytls_error_code Mono::Unity::UnityTls_unitytls_error_code::UNITYTLS_STREAM_CLOSED{ static_cast<uint32_t>(0xau) };
constexpr ::Mono::Unity::UnityTls_unitytls_error_code Mono::Unity::UnityTls_unitytls_error_code::UNITYTLS_USER_CUSTOM_ERROR_START{ static_cast<uint32_t>(0x100000u) };
constexpr ::Mono::Unity::UnityTls_unitytls_error_code Mono::Unity::UnityTls_unitytls_error_code::UNITYTLS_USER_WOULD_BLOCK{ static_cast<uint32_t>(0x100001u) };
constexpr ::Mono::Unity::UnityTls_unitytls_error_code Mono::Unity::UnityTls_unitytls_error_code::UNITYTLS_USER_READ_FAILED{ static_cast<uint32_t>(0x100002u) };
constexpr ::Mono::Unity::UnityTls_unitytls_error_code Mono::Unity::UnityTls_unitytls_error_code::UNITYTLS_USER_WRITE_FAILED{ static_cast<uint32_t>(0x100003u) };
constexpr ::Mono::Unity::UnityTls_unitytls_error_code Mono::Unity::UnityTls_unitytls_error_code::UNITYTLS_USER_UNKNOWN_ERROR{ static_cast<uint32_t>(0x100004u) };
constexpr ::Mono::Unity::UnityTls_unitytls_error_code Mono::Unity::UnityTls_unitytls_error_code::UNITYTLS_USER_CUSTOM_ERROR_END{ static_cast<uint32_t>(0x200000u) };
// Ctor Parameters [CppParam { name: "magic", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "code", ty: "::Mono::Unity::UnityTls_unitytls_error_code", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "reserved", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Unity::UnityTls_unitytls_errorstate::UnityTls_unitytls_errorstate(uint32_t magic, ::Mono::Unity::UnityTls_unitytls_error_code code, uint64_t reserved) noexcept {
  this->magic = magic;
  this->code = code;
  this->reserved = reserved;
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTls_unitytls_errorstate::UnityTls_unitytls_errorstate() {}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTls_unitytls_key::UnityTls_unitytls_key() {}
// Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Unity::UnityTls_unitytls_key_ref::UnityTls_unitytls_key_ref(uint64_t handle) noexcept {
  this->handle = handle;
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTls_unitytls_key_ref::UnityTls_unitytls_key_ref() {}
// Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Unity::UnityTls_unitytls_x509_ref::UnityTls_unitytls_x509_ref(uint64_t handle) noexcept {
  this->handle = handle;
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTls_unitytls_x509_ref::UnityTls_unitytls_x509_ref() {}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTls_unitytls_x509list::UnityTls_unitytls_x509list() {}
// Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Unity::UnityTls_unitytls_x509list_ref::UnityTls_unitytls_x509list_ref(uint64_t handle) noexcept {
  this->handle = handle;
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTls_unitytls_x509list_ref::UnityTls_unitytls_x509list_ref() {}
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Unity::UnityTls_unitytls_x509verify_result::UnityTls_unitytls_x509verify_result(uint32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTls_unitytls_x509verify_result::UnityTls_unitytls_x509verify_result() {}
constexpr ::Mono::Unity::UnityTls_unitytls_x509verify_result Mono::Unity::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_SUCCESS{ static_cast<uint32_t>(0x0u) };
constexpr ::Mono::Unity::UnityTls_unitytls_x509verify_result Mono::Unity::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_NOT_DONE{ static_cast<uint32_t>(0x80000000u) };
constexpr ::Mono::Unity::UnityTls_unitytls_x509verify_result Mono::Unity::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FATAL_ERROR{ static_cast<uint32_t>(0xffffffffu) };
constexpr ::Mono::Unity::UnityTls_unitytls_x509verify_result Mono::Unity::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_EXPIRED{ static_cast<uint32_t>(0x1u) };
constexpr ::Mono::Unity::UnityTls_unitytls_x509verify_result Mono::Unity::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_REVOKED{ static_cast<uint32_t>(0x2u) };
constexpr ::Mono::Unity::UnityTls_unitytls_x509verify_result Mono::Unity::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_CN_MISMATCH{ static_cast<uint32_t>(0x4u) };
constexpr ::Mono::Unity::UnityTls_unitytls_x509verify_result Mono::Unity::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_NOT_TRUSTED{ static_cast<uint32_t>(0x8u) };
constexpr ::Mono::Unity::UnityTls_unitytls_x509verify_result Mono::Unity::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_USER_ERROR1{ static_cast<uint32_t>(0x10000u) };
constexpr ::Mono::Unity::UnityTls_unitytls_x509verify_result Mono::Unity::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_USER_ERROR2{ static_cast<uint32_t>(0x20000u) };
constexpr ::Mono::Unity::UnityTls_unitytls_x509verify_result Mono::Unity::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_USER_ERROR3{ static_cast<uint32_t>(0x40000u) };
constexpr ::Mono::Unity::UnityTls_unitytls_x509verify_result Mono::Unity::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_USER_ERROR4{ static_cast<uint32_t>(0x80000u) };
constexpr ::Mono::Unity::UnityTls_unitytls_x509verify_result Mono::Unity::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_USER_ERROR5{ static_cast<uint32_t>(0x100000u) };
constexpr ::Mono::Unity::UnityTls_unitytls_x509verify_result Mono::Unity::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_USER_ERROR6{ static_cast<uint32_t>(0x200000u) };
constexpr ::Mono::Unity::UnityTls_unitytls_x509verify_result Mono::Unity::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_USER_ERROR7{ static_cast<uint32_t>(0x400000u) };
constexpr ::Mono::Unity::UnityTls_unitytls_x509verify_result Mono::Unity::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_USER_ERROR8{ static_cast<uint32_t>(0x800000u) };
constexpr ::Mono::Unity::UnityTls_unitytls_x509verify_result Mono::Unity::UnityTls_unitytls_x509verify_result::UNITYTLS_X509VERIFY_FLAG_UNKNOWN_ERROR{ static_cast<uint32_t>(0x8000000u) };
//  Writing Method size for method: ::Mono::Unity::UnityTls_unitytls_x509verify_callback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::UnityTls_unitytls_x509verify_callback::*)(::System::Object*, ::System::IntPtr)>(
    &::Mono::Unity::UnityTls_unitytls_x509verify_callback::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x410f230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls_unitytls_x509verify_callback*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTls_unitytls_x509verify_callback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Unity::UnityTls_unitytls_x509verify_result (::Mono::Unity::UnityTls_unitytls_x509verify_callback::*)(
    ::cordl_internals::Ptr<void>, ::Mono::Unity::UnityTls_unitytls_x509_ref, ::Mono::Unity::UnityTls_unitytls_x509verify_result, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(
    &::Mono::Unity::UnityTls_unitytls_x509verify_callback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x410f2d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls_unitytls_x509verify_callback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls_unitytls_x509verify_callback*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::UnityTls_unitytls_x509verify_callback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls_unitytls_x509verify_callback*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::Mono::Unity::UnityTls_unitytls_x509verify_result Mono::Unity::UnityTls_unitytls_x509verify_callback::Invoke(::cordl_internals::Ptr<void> userData,
                                                                                                                     ::Mono::Unity::UnityTls_unitytls_x509_ref cert,
                                                                                                                     ::Mono::Unity::UnityTls_unitytls_x509verify_result result,
                                                                                                                     ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls_unitytls_x509verify_callback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::UnityTls_unitytls_x509verify_result, false>(this, ___internal_method, userData, cert, result, errorState);
}
inline ::Mono::Unity::UnityTls_unitytls_x509verify_callback* Mono::Unity::UnityTls_unitytls_x509verify_callback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::UnityTls_unitytls_x509verify_callback*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTls_unitytls_x509verify_callback::UnityTls_unitytls_x509verify_callback() {}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx::UnityTls_unitytls_tlsctx() {}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTls_unitytls_x509name::UnityTls_unitytls_x509name() {}
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Unity::UnityTls_unitytls_ciphersuite::UnityTls_unitytls_ciphersuite(uint32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTls_unitytls_ciphersuite::UnityTls_unitytls_ciphersuite() {}
constexpr ::Mono::Unity::UnityTls_unitytls_ciphersuite Mono::Unity::UnityTls_unitytls_ciphersuite::UNITYTLS_CIPHERSUITE_INVALID{ static_cast<uint32_t>(0xffffffu) };
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Unity::UnityTls_unitytls_protocol::UnityTls_unitytls_protocol(uint32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTls_unitytls_protocol::UnityTls_unitytls_protocol() {}
constexpr ::Mono::Unity::UnityTls_unitytls_protocol Mono::Unity::UnityTls_unitytls_protocol::UNITYTLS_PROTOCOL_TLS_1_0{ static_cast<uint32_t>(0x0u) };
constexpr ::Mono::Unity::UnityTls_unitytls_protocol Mono::Unity::UnityTls_unitytls_protocol::UNITYTLS_PROTOCOL_TLS_1_1{ static_cast<uint32_t>(0x1u) };
constexpr ::Mono::Unity::UnityTls_unitytls_protocol Mono::Unity::UnityTls_unitytls_protocol::UNITYTLS_PROTOCOL_TLS_1_2{ static_cast<uint32_t>(0x2u) };
constexpr ::Mono::Unity::UnityTls_unitytls_protocol Mono::Unity::UnityTls_unitytls_protocol::UNITYTLS_PROTOCOL_INVALID{ static_cast<uint32_t>(0x3u) };
// Ctor Parameters [CppParam { name: "min", ty: "::Mono::Unity::UnityTls_unitytls_protocol", modifiers: "", def_value: Some("{}") }, CppParam { name: "max", ty:
// "::Mono::Unity::UnityTls_unitytls_protocol", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange::UnityTls_unitytls_tlsctx_protocolrange(::Mono::Unity::UnityTls_unitytls_protocol min,
                                                                                                        ::Mono::Unity::UnityTls_unitytls_protocol max) noexcept {
  this->min = min;
  this->max = max;
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange::UnityTls_unitytls_tlsctx_protocolrange() {}
//  Writing Method size for method: ::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback::*)(::System::Object*, ::System::IntPtr)>(
    &::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x410f2e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback::*)(
    ::cordl_internals::Ptr<void>, ::cordl_internals::Ptr<uint8_t>, ::System::IntPtr, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(
    &::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x410f384;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::UnityTls_unitytls_tlsctx_write_callback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::System::IntPtr Mono::Unity::UnityTls_unitytls_tlsctx_write_callback::Invoke(::cordl_internals::Ptr<void> userData, ::cordl_internals::Ptr<uint8_t> data, ::System::IntPtr bufferLen,
                                                                                     ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, userData, data, bufferLen, errorState);
}
inline ::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback* Mono::Unity::UnityTls_unitytls_tlsctx_write_callback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback::UnityTls_unitytls_tlsctx_write_callback() {}
//  Writing Method size for method: ::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback::*)(::System::Object*, ::System::IntPtr)>(
    &::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x410f398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback::*)(
    ::cordl_internals::Ptr<void>, ::cordl_internals::Ptr<uint8_t>, ::System::IntPtr, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(
    &::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x410f438;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::UnityTls_unitytls_tlsctx_read_callback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::System::IntPtr Mono::Unity::UnityTls_unitytls_tlsctx_read_callback::Invoke(::cordl_internals::Ptr<void> userData, ::cordl_internals::Ptr<uint8_t> buffer, ::System::IntPtr bufferLen,
                                                                                    ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, userData, buffer, bufferLen, errorState);
}
inline ::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback* Mono::Unity::UnityTls_unitytls_tlsctx_read_callback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback::UnityTls_unitytls_tlsctx_read_callback() {}
//  Writing Method size for method: ::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback::*)(::System::Object*, ::System::IntPtr)>(
    &::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x410f44c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback::*)(
    ::cordl_internals::Ptr<void>, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx>, ::cordl_internals::Ptr<uint8_t>, ::System::IntPtr)>(
    &::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x410f4ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback::Invoke(::cordl_internals::Ptr<void> userData, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx> ctx,
                                                                         ::cordl_internals::Ptr<uint8_t> traceMessage, ::System::IntPtr traceMessageLen) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userData, ctx, traceMessage, traceMessageLen);
}
inline ::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback* Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback::UnityTls_unitytls_tlsctx_trace_callback() {}
//  Writing Method size for method: ::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback::*)(::System::Object*, ::System::IntPtr)>(
    &::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x410f500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback::*)(
    ::cordl_internals::Ptr<void>, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx>, ::cordl_internals::Ptr<uint8_t>, ::System::IntPtr,
    ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509name>, ::System::IntPtr, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list_ref>,
    ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key_ref>, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(
    &::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback::Invoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x410f5a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback::Invoke(::cordl_internals::Ptr<void> userData, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx> ctx,
                                                                               ::cordl_internals::Ptr<uint8_t> cn, ::System::IntPtr cnLen,
                                                                               ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509name> caList, ::System::IntPtr caListLen,
                                                                               ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list_ref> chain,
                                                                               ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key_ref> key,
                                                                               ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userData, ctx, cn, cnLen, caList, caListLen, chain, key, errorState);
}
inline ::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback* Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback::UnityTls_unitytls_tlsctx_certificate_callback() {}
//  Writing Method size for method: ::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback::*)(::System::Object*, ::System::IntPtr)>(
    &::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x410f5bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Unity::UnityTls_unitytls_x509verify_result (::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback::*)(
    ::cordl_internals::Ptr<void>, ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(
    &::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x410f65c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::Mono::Unity::UnityTls_unitytls_x509verify_result
Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback::Invoke(::cordl_internals::Ptr<void> userData, ::Mono::Unity::UnityTls_unitytls_x509list_ref chain,
                                                                  ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::UnityTls_unitytls_x509verify_result, false>(this, ___internal_method, userData, chain, errorState);
}
inline ::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback* Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback::UnityTls_unitytls_tlsctx_x509verify_callback() {}
// Ctor Parameters [CppParam { name: "read", ty: "::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback*", modifiers: "", def_value: Some("{}") }, CppParam { name: "write", ty:
// "::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback*", modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: Some("{}")
// }]
constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx_callbacks::UnityTls_unitytls_tlsctx_callbacks(::Mono::Unity::UnityTls_unitytls_tlsctx_read_callback* read,
                                                                                                ::Mono::Unity::UnityTls_unitytls_tlsctx_write_callback* write,
                                                                                                ::cordl_internals::Ptr<void> data) noexcept {
  this->read = read;
  this->write = write;
  this->data = data;
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx_callbacks::UnityTls_unitytls_tlsctx_callbacks() {}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t::*)(
    ::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x410f678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Unity::UnityTls_unitytls_errorstate (
    ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t::*)()>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x410f700;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::Mono::Unity::UnityTls_unitytls_errorstate Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t::Invoke() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::UnityTls_unitytls_errorstate, false>(this, ___internal_method);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t::New_ctor(::System::Object* object,
                                                                                                                                                                              ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t() {}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t::*)(
    ::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x410f714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t::*)(
    ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>, ::Mono::Unity::UnityTls_unitytls_error_code)>(
    &::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x410f7b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState,
                                                                                                      ::Mono::Unity::UnityTls_unitytls_error_code errorCode) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorState, errorCode);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t*
Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t() {}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t::*)(
    ::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x410f7c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Mono::Unity::UnityTls_unitytls_key_ref (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t::*)(
        ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key>, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(
        &::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x410f868;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::Mono::Unity::UnityTls_unitytls_key_ref
Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key> key,
                                                                               ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::UnityTls_unitytls_key_ref, false>(this, ___internal_method, key, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t::New_ctor(::System::Object* object,
                                                                                                                                                                  ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t() {}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t::*)(
    ::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x410f87c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key> (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t::*)(
        ::cordl_internals::Ptr<uint8_t>, ::System::IntPtr, ::cordl_internals::Ptr<uint8_t>, ::System::IntPtr, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(
        &::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x410f91c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key>
Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t::Invoke(::cordl_internals::Ptr<uint8_t> buffer, ::System::IntPtr bufferLen, ::cordl_internals::Ptr<uint8_t> password,
                                                                                 ::System::IntPtr passwordLen, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key>, false>(this, ___internal_method, buffer, bufferLen, password, passwordLen, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t::New_ctor(::System::Object* object,
                                                                                                                                                                      ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t() {}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t::*)(
    ::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x410f930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key> (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t::*)(
        ::cordl_internals::Ptr<uint8_t>, ::System::IntPtr, ::cordl_internals::Ptr<uint8_t>, ::System::IntPtr, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(
        &::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x410f9d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key>
Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t::Invoke(::cordl_internals::Ptr<uint8_t> buffer, ::System::IntPtr bufferLen, ::cordl_internals::Ptr<uint8_t> password,
                                                                                 ::System::IntPtr passwordLen, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key>, false>(this, ___internal_method, buffer, bufferLen, password, passwordLen, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t::New_ctor(::System::Object* object,
                                                                                                                                                                      ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t() {}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t::*)(::System::Object*, ::System::IntPtr)>(
    &::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x410f9e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t::*)(
    ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key>)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x410fa80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_key> key) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t::New_ctor(::System::Object* object,
                                                                                                                                                            ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t::unitytls_interface_struct_UnityTls_unitytls_key_free_t() {}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t::*)(
    ::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x410fa94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t::*)(
    ::Mono::Unity::UnityTls_unitytls_x509_ref, ::cordl_internals::Ptr<uint8_t>, ::System::IntPtr, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(
    &::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x410fb20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::System::IntPtr Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t::Invoke(::Mono::Unity::UnityTls_unitytls_x509_ref cert, ::cordl_internals::Ptr<uint8_t> buffer,
                                                                                                           ::System::IntPtr bufferLen,
                                                                                                           ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, cert, buffer, bufferLen, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t::New_ctor(::System::Object* object,
                                                                                                                                                                          ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t() {}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t::*)(
    ::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x410fb34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Mono::Unity::UnityTls_unitytls_x509list_ref (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t::*)(
        ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list>, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(
        &::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x410fbd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::Mono::Unity::UnityTls_unitytls_x509list_ref
Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list> list,
                                                                                    ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::UnityTls_unitytls_x509list_ref, false>(this, ___internal_method, list, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t::New_ctor(::System::Object* object,
                                                                                                                                                                            ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t() {}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t::*)(
    ::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x410fbe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Mono::Unity::UnityTls_unitytls_x509_ref (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t::*)(
        ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::System::IntPtr, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(
        &::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x410fc74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::Mono::Unity::UnityTls_unitytls_x509_ref
Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t::Invoke(::Mono::Unity::UnityTls_unitytls_x509list_ref list, ::System::IntPtr index,
                                                                                     ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::UnityTls_unitytls_x509_ref, false>(this, ___internal_method, list, index, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t::New_ctor(::System::Object* object,
                                                                                                                                                                              ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t() {}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t::*)(
    ::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x410fc88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list> (
    ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t::*)(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(
    &::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x410fd24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list>
Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list>, false>(this, ___internal_method, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t::New_ctor(::System::Object* object,
                                                                                                                                                                          ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t() {}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t::*)(
    ::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x410fd38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t::*)(
    ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list>, ::Mono::Unity::UnityTls_unitytls_x509_ref, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(
    &::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x410fdd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list> list,
                                                                                               ::Mono::Unity::UnityTls_unitytls_x509_ref cert,
                                                                                               ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list, cert, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t::New_ctor(::System::Object* object,
                                                                                                                                                                          ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t() {}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t::*)(
    ::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x410fdec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t::*)(
    ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list>, ::cordl_internals::Ptr<uint8_t>, ::System::IntPtr, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(
    &::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x410fe8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list> list,
                                                                                                   ::cordl_internals::Ptr<uint8_t> buffer, ::System::IntPtr bufferLen,
                                                                                                   ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list, buffer, bufferLen, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t*
Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t() {}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t::*)(
    ::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x410fea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t::*)(
    ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list>)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x410ff3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_x509list> list) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t::New_ctor(::System::Object* object,
                                                                                                                                                                      ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t() {}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t::*)(
    ::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x410ff50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Mono::Unity::UnityTls_unitytls_x509verify_result (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t::*)(
        ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::cordl_internals::Ptr<uint8_t>, ::System::IntPtr, ::Mono::Unity::UnityTls_unitytls_x509verify_callback*, ::cordl_internals::Ptr<void>,
        ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x410ffdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::Mono::Unity::UnityTls_unitytls_x509verify_result Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t::Invoke(
    ::Mono::Unity::UnityTls_unitytls_x509list_ref chain, ::cordl_internals::Ptr<uint8_t> cn, ::System::IntPtr cnLen, ::Mono::Unity::UnityTls_unitytls_x509verify_callback* cb,
    ::cordl_internals::Ptr<void> userData, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::UnityTls_unitytls_x509verify_result, false>(this, ___internal_method, chain, cn, cnLen, cb, userData, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t*
Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t() {}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t::*)(
    ::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x410fff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Mono::Unity::UnityTls_unitytls_x509verify_result (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t::*)(
        ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::cordl_internals::Ptr<uint8_t>, ::System::IntPtr,
        ::Mono::Unity::UnityTls_unitytls_x509verify_callback*, ::cordl_internals::Ptr<void>, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(
        &::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x411007c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::Mono::Unity::UnityTls_unitytls_x509verify_result Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t::Invoke(
    ::Mono::Unity::UnityTls_unitytls_x509list_ref chain, ::Mono::Unity::UnityTls_unitytls_x509list_ref trustCA, ::cordl_internals::Ptr<uint8_t> cn, ::System::IntPtr cnLen,
    ::Mono::Unity::UnityTls_unitytls_x509verify_callback* cb, ::cordl_internals::Ptr<void> userData, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::UnityTls_unitytls_x509verify_result, false>(this, ___internal_method, chain, trustCA, cn, cnLen, cb, userData, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t*
Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t() {}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t::*)(
    ::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4110094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx> (
    ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t::*)(::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange, ::Mono::Unity::UnityTls_unitytls_tlsctx_callbacks,
                                                                                          uint64_t, uint64_t, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(
    &::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t::Invoke)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4110120;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx>
Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t::Invoke(::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange supportedProtocols,
                                                                                        ::Mono::Unity::UnityTls_unitytls_tlsctx_callbacks callbacks, uint64_t certChain, uint64_t leafCertificateKey,
                                                                                        ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx>, false>(this, ___internal_method, supportedProtocols, callbacks, certChain,
                                                                                                                     leafCertificateKey, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t*
Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t() {}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t::*)(
    ::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x411015c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx> (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t::*)(
        ::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange, ::Mono::Unity::UnityTls_unitytls_tlsctx_callbacks, ::cordl_internals::Ptr<uint8_t>, ::System::IntPtr,
        ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t::Invoke)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x41101e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx>
Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t::Invoke(::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange supportedProtocols,
                                                                                        ::Mono::Unity::UnityTls_unitytls_tlsctx_callbacks callbacks, ::cordl_internals::Ptr<uint8_t> cn,
                                                                                        ::System::IntPtr cnLen, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx>, false>(this, ___internal_method, supportedProtocols, callbacks, cn, cnLen, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t*
Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t() {}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t::*)(
    ::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4110224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t::*)(
    ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx>, ::Mono::Unity::UnityTls_unitytls_x509list_ref, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(
    &::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x41102c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void
Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx> ctx,
                                                                                                               ::Mono::Unity::UnityTls_unitytls_x509list_ref clientAuthCAList,
                                                                                                               ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx, clientAuthCAList, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t*
Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t::
    unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t() {}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t::*)(
    ::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x41102d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t*>::get(),
                                    ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t::*)(
    ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx>, ::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback*, ::cordl_internals::Ptr<void>,
    ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4110378;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx> ctx,
                                                                                                               ::Mono::Unity::UnityTls_unitytls_tlsctx_certificate_callback* cb,
                                                                                                               ::cordl_internals::Ptr<void> userData,
                                                                                                               ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx, cb, userData, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t*
Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t() {}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t::*)(
    ::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x411038c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t::*)(
    ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx>, ::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback*, ::cordl_internals::Ptr<void>,
    ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x411042c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx> ctx,
                                                                                                         ::Mono::Unity::UnityTls_unitytls_tlsctx_trace_callback* cb,
                                                                                                         ::cordl_internals::Ptr<void> userData,
                                                                                                         ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx, cb, userData, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t*
Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t() {}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t::*)(
    ::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4110440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t*>::get(),
                                    ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t::*)(
    ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx>, ::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback*, ::cordl_internals::Ptr<void>,
    ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x41104e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx> ctx,
                                                                                                              ::Mono::Unity::UnityTls_unitytls_tlsctx_x509verify_callback* cb,
                                                                                                              ::cordl_internals::Ptr<void> userData,
                                                                                                              ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx, cb, userData, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t*
Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t() {}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t::*)(
    ::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x41104f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t*>::get(),
                                    ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t::*)(
    ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx>, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_ciphersuite>, ::System::IntPtr,
    ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4110594;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t::Invoke(
    ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx> ctx, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_ciphersuite> supportedCiphersuites,
    ::System::IntPtr supportedCiphersuitesLen, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx, supportedCiphersuites, supportedCiphersuitesLen, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t*
Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t() {}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t::*)(
    ::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x41105a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Mono::Unity::UnityTls_unitytls_ciphersuite (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t::*)(
        ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx>, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(
        &::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4110648;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::Mono::Unity::UnityTls_unitytls_ciphersuite
Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx> ctx,
                                                                                          ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::UnityTls_unitytls_ciphersuite, false>(this, ___internal_method, ctx, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t*
Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t() {}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t::*)(
    ::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x411065c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Mono::Unity::UnityTls_unitytls_protocol (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t::*)(
        ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx>, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(
        &::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x41106fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::Mono::Unity::UnityTls_unitytls_protocol
Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx> ctx,
                                                                                       ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::UnityTls_unitytls_protocol, false>(this, ___internal_method, ctx, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t*
Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t() {}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t::*)(
    ::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4110710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Mono::Unity::UnityTls_unitytls_x509verify_result (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t::*)(
        ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx>, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(
        &::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x41107b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::Mono::Unity::UnityTls_unitytls_x509verify_result
Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx> ctx,
                                                                                            ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::UnityTls_unitytls_x509verify_result, false>(this, ___internal_method, ctx, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t*
Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t() {}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t::*)(
    ::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x41107c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t::*)(
    ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx>, ::cordl_internals::Ptr<uint8_t>, ::System::IntPtr, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(
    &::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4110864;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::System::IntPtr Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx> ctx,
                                                                                                       ::cordl_internals::Ptr<uint8_t> buffer, ::System::IntPtr bufferLen,
                                                                                                       ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, ctx, buffer, bufferLen, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t::New_ctor(::System::Object* object,
                                                                                                                                                                  ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t() {}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t::*)(
    ::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4110878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t::*)(
    ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx>, ::cordl_internals::Ptr<uint8_t>, ::System::IntPtr, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(
    &::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4110918;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::System::IntPtr Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx> ctx,
                                                                                                        ::cordl_internals::Ptr<uint8_t> data, ::System::IntPtr bufferLen,
                                                                                                        ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, ctx, data, bufferLen, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t::New_ctor(::System::Object* object,
                                                                                                                                                                    ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t() {}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t::*)(
    ::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x411092c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t::*)(
    ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx>, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(
    &::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x41109cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx> ctx,
                                                                                                   ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t*
Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t() {}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t::*)(
    ::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x41109e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t::*)(
    ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx>)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4110a7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t::Invoke(::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_tlsctx> ctx) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t* Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t::New_ctor(::System::Object* object,
                                                                                                                                                                  ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t() {}
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t::*)(
    ::System::Object*, ::System::IntPtr)>(&::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4110a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t::*)(
    ::cordl_internals::Ptr<uint8_t>, ::System::IntPtr, ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate>)>(
    &::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4110b30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t*>::get(), 13));
    return ___internal_method;
  }
};
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t::Invoke(::cordl_internals::Ptr<uint8_t> buffer, ::System::IntPtr bufferLen,
                                                                                                     ::cordl_internals::Ptr<::Mono::Unity::UnityTls_unitytls_errorstate> errorState) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, bufferLen, errorState);
}
inline ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t*
Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t() {}
//  Writing Method size for method: ::Mono::Unity::UnityTls_unitytls_interface_struct._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::UnityTls_unitytls_interface_struct::*)()>(
    &::Mono::Unity::UnityTls_unitytls_interface_struct::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x410f670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls_unitytls_interface_struct*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr uint64_t& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_UNITYTLS_INVALID_HANDLE() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UNITYTLS_INVALID_HANDLE;
}
constexpr uint64_t const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_UNITYTLS_INVALID_HANDLE() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UNITYTLS_INVALID_HANDLE;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_UNITYTLS_INVALID_HANDLE(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UNITYTLS_INVALID_HANDLE = value;
}
constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT;
}
constexpr ::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT(::Mono::Unity::UnityTls_unitytls_tlsctx_protocolrange value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UNITYTLS_TLSCTX_PROTOCOLRANGE_DEFAULT = value;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_errorstate_create() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_errorstate_create;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t* const&
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_errorstate_create() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_errorstate_create;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_errorstate_create(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_create_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_errorstate_create)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t*&
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_errorstate_raise_error() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_errorstate_raise_error;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t* const&
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_errorstate_raise_error() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_errorstate_raise_error;
}
constexpr void
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_errorstate_raise_error(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_errorstate_raise_error_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_errorstate_raise_error)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_key_get_ref() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_key_get_ref;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_key_get_ref() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_key_get_ref;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_key_get_ref(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_get_ref_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_key_get_ref)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_key_parse_der() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_key_parse_der;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_key_parse_der() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_key_parse_der;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_key_parse_der(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_der_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_key_parse_der)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_key_parse_pem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_key_parse_pem;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_key_parse_pem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_key_parse_pem;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_key_parse_pem(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_parse_pem_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_key_parse_pem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_key_free() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_key_free;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_key_free() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_key_free;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_key_free(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_key_free_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_key_free)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509_export_der() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509_export_der;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509_export_der() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509_export_der;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_x509_export_der(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509_export_der_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_x509_export_der)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509list_get_ref() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509list_get_ref;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t* const&
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509list_get_ref() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509list_get_ref;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_x509list_get_ref(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_ref_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_x509list_get_ref)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509list_get_x509() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509list_get_x509;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t* const&
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509list_get_x509() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509list_get_x509;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_x509list_get_x509(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_get_x509_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_x509list_get_x509)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509list_create() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509list_create;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509list_create() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509list_create;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_x509list_create(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_create_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_x509list_create)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509list_append() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509list_append;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509list_append() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509list_append;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_x509list_append(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_x509list_append)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509list_append_der() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509list_append_der;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t* const&
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509list_append_der() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509list_append_der;
}
constexpr void
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_x509list_append_der(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_x509list_append_der)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509list_append_pem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509list_append_pem;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t* const&
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509list_append_pem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509list_append_pem;
}
constexpr void
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_x509list_append_pem(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_append_der_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_x509list_append_pem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509list_free() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509list_free;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509list_free() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509list_free;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_x509list_free(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509list_free_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_x509list_free)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509verify_default_ca() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509verify_default_ca;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t* const&
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509verify_default_ca() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509verify_default_ca;
}
constexpr void
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_x509verify_default_ca(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_default_ca_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_x509verify_default_ca)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t*&
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509verify_explicit_ca() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509verify_explicit_ca;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t* const&
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_x509verify_explicit_ca() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_x509verify_explicit_ca;
}
constexpr void
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_x509verify_explicit_ca(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_x509verify_explicit_ca_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_x509verify_explicit_ca)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_create_server() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_create_server;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t* const&
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_create_server() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_create_server;
}
constexpr void
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_tlsctx_create_server(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_server_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_tlsctx_create_server)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_create_client() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_create_client;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t* const&
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_create_client() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_create_client;
}
constexpr void
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_tlsctx_create_client(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_create_client_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_tlsctx_create_client)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t*&
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_server_require_client_authentication() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_server_require_client_authentication;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t* const&
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_server_require_client_authentication() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_server_require_client_authentication;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_tlsctx_server_require_client_authentication(
    ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_server_require_client_authentication_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_tlsctx_server_require_client_authentication)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t*&
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_set_certificate_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_set_certificate_callback;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t* const&
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_set_certificate_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_set_certificate_callback;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_tlsctx_set_certificate_callback(
    ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_certificate_callback_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_tlsctx_set_certificate_callback)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t*&
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_set_trace_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_set_trace_callback;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t* const&
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_set_trace_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_set_trace_callback;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_tlsctx_set_trace_callback(
    ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_trace_callback_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_tlsctx_set_trace_callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t*&
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_set_x509verify_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_set_x509verify_callback;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t* const&
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_set_x509verify_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_set_x509verify_callback;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_tlsctx_set_x509verify_callback(
    ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_x509verify_callback_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_tlsctx_set_x509verify_callback)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t*&
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_set_supported_ciphersuites() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_set_supported_ciphersuites;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t* const&
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_set_supported_ciphersuites() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_set_supported_ciphersuites;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_tlsctx_set_supported_ciphersuites(
    ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_set_supported_ciphersuites_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_tlsctx_set_supported_ciphersuites)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t*&
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_get_ciphersuite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_get_ciphersuite;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t* const&
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_get_ciphersuite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_get_ciphersuite;
}
constexpr void
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_tlsctx_get_ciphersuite(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_ciphersuite_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_tlsctx_get_ciphersuite)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_get_protocol() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_get_protocol;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t* const&
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_get_protocol() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_get_protocol;
}
constexpr void
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_tlsctx_get_protocol(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_get_protocol_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_tlsctx_get_protocol)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t*&
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_process_handshake() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_process_handshake;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t* const&
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_process_handshake() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_process_handshake;
}
constexpr void
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_tlsctx_process_handshake(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_process_handshake_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_tlsctx_process_handshake)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_read() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_read;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_read() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_read;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_tlsctx_read(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_read_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_tlsctx_read)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_write() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_write;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_write() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_write;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_tlsctx_write(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_write_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_tlsctx_write)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_notify_close() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_notify_close;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t* const&
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_notify_close() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_notify_close;
}
constexpr void
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_tlsctx_notify_close(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_notify_close_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_tlsctx_notify_close)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_free() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_free;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t* const& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_tlsctx_free() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_tlsctx_free;
}
constexpr void Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_tlsctx_free(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_tlsctx_free_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_tlsctx_free)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t*& Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_random_generate_bytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_random_generate_bytes;
}
constexpr ::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t* const&
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_get_unitytls_random_generate_bytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unitytls_random_generate_bytes;
}
constexpr void
Mono::Unity::UnityTls_unitytls_interface_struct::__cordl_internal_set_unitytls_random_generate_bytes(::Mono::Unity::unitytls_interface_struct_UnityTls_unitytls_random_generate_bytes_t* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unitytls_random_generate_bytes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Mono::Unity::UnityTls_unitytls_interface_struct::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls_unitytls_interface_struct*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Mono::Unity::UnityTls_unitytls_interface_struct* Mono::Unity::UnityTls_unitytls_interface_struct::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Unity::UnityTls_unitytls_interface_struct*>());
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTls_unitytls_interface_struct::UnityTls_unitytls_interface_struct() {}
//  Writing Method size for method: ::Mono::Unity::UnityTls.GetUnityTlsInterface
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&::Mono::Unity::UnityTls::GetUnityTlsInterface)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x410f214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls*>::get(), "GetUnityTlsInterface",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTls.get_IsSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Mono::Unity::UnityTls::get_IsSupported)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x410f218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls*>::get(), "get_IsSupported",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTls.get_NativeInterface
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Unity::UnityTls_unitytls_interface_struct* (*)()>(&::Mono::Unity::UnityTls::get_NativeInterface)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x410ef90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls*>::get(), "get_NativeInterface",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Mono::Unity::UnityTls::setStaticF_marshalledInterface(::Mono::Unity::UnityTls_unitytls_interface_struct* value) {
  ::cordl_internals::setStaticField<::Mono::Unity::UnityTls_unitytls_interface_struct*, "marshalledInterface", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls*>::get>(
      std::forward<::Mono::Unity::UnityTls_unitytls_interface_struct*>(value));
}
inline ::Mono::Unity::UnityTls_unitytls_interface_struct* Mono::Unity::UnityTls::getStaticF_marshalledInterface() {
  return ::cordl_internals::getStaticField<::Mono::Unity::UnityTls_unitytls_interface_struct*, "marshalledInterface",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls*>::get>();
}
inline ::System::IntPtr Mono::Unity::UnityTls::GetUnityTlsInterface() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls*>::get(), "GetUnityTlsInterface",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method);
}
inline bool Mono::Unity::UnityTls::get_IsSupported() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls*>::get(), "get_IsSupported",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::Mono::Unity::UnityTls_unitytls_interface_struct* Mono::Unity::UnityTls::get_NativeInterface() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTls*>::get(), "get_NativeInterface",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::UnityTls_unitytls_interface_struct*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTls::UnityTls() {}
