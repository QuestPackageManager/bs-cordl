#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRIOBuffer.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVRIOBuffer_def.hpp"
#include "OVR/OpenVR/zzzz__EIOBufferError_def.hpp"
#include "OVR/OpenVR/zzzz__EIOBufferMode_def.hpp"
#include "OVR/OpenVR/zzzz__IVRIOBuffer_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__Open._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRIOBuffer__Open::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRIOBuffer__Open::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x40701f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Open*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__Open.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EIOBufferError (::OVR::OpenVR::IVRIOBuffer__Open::*)(
    ::StringW, ::OVR::OpenVR::EIOBufferMode, uint32_t, uint32_t, ::ByRef<uint64_t>)>(&::OVR::OpenVR::IVRIOBuffer__Open::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4070294;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Open*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Open*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__Open.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRIOBuffer__Open::*)(::StringW, ::OVR::OpenVR::EIOBufferMode, uint32_t, uint32_t, ::ByRef<uint64_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRIOBuffer__Open::BeginInvoke)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x40702a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Open*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Open*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__Open.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EIOBufferError (::OVR::OpenVR::IVRIOBuffer__Open::*)(::ByRef<uint64_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRIOBuffer__Open::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x40703bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Open*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Open*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRIOBuffer__Open::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Open*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EIOBufferError OVR::OpenVR::IVRIOBuffer__Open::Invoke(::StringW pchPath, ::OVR::OpenVR::EIOBufferMode mode, uint32_t unElementSize, uint32_t unElements,
                                                                            ::ByRef<uint64_t> pulBuffer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Open*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EIOBufferError, false>(this, ___internal_method, pchPath, mode, unElementSize, unElements, pulBuffer);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRIOBuffer__Open::BeginInvoke(::StringW pchPath, ::OVR::OpenVR::EIOBufferMode mode, uint32_t unElementSize, uint32_t unElements,
                                                                           ::ByRef<uint64_t> pulBuffer, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Open*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchPath, mode, unElementSize, unElements, pulBuffer, callback, object);
}
inline ::OVR::OpenVR::EIOBufferError OVR::OpenVR::IVRIOBuffer__Open::EndInvoke(::ByRef<uint64_t> pulBuffer, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Open*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EIOBufferError, false>(this, ___internal_method, pulBuffer, result);
}
inline ::OVR::OpenVR::IVRIOBuffer__Open* OVR::OpenVR::IVRIOBuffer__Open::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRIOBuffer__Open*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRIOBuffer__Open::IVRIOBuffer__Open() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__Close._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRIOBuffer__Close::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRIOBuffer__Close::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40703e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Close*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__Close.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EIOBufferError (::OVR::OpenVR::IVRIOBuffer__Close::*)(uint64_t)>(
    &::OVR::OpenVR::IVRIOBuffer__Close::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4070474;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Close*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Close*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__Close.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRIOBuffer__Close::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRIOBuffer__Close::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4070488;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Close*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Close*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__Close.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EIOBufferError (::OVR::OpenVR::IVRIOBuffer__Close::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRIOBuffer__Close::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x407050c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Close*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Close*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRIOBuffer__Close::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Close*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EIOBufferError OVR::OpenVR::IVRIOBuffer__Close::Invoke(uint64_t ulBuffer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Close*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EIOBufferError, false>(this, ___internal_method, ulBuffer);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRIOBuffer__Close::BeginInvoke(uint64_t ulBuffer, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Close*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulBuffer, callback, object);
}
inline ::OVR::OpenVR::EIOBufferError OVR::OpenVR::IVRIOBuffer__Close::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Close*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EIOBufferError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRIOBuffer__Close* OVR::OpenVR::IVRIOBuffer__Close::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRIOBuffer__Close*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRIOBuffer__Close::IVRIOBuffer__Close() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__Read._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRIOBuffer__Read::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRIOBuffer__Read::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4070534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Read*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__Read.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::OVR::OpenVR::EIOBufferError (::OVR::OpenVR::IVRIOBuffer__Read::*)(uint64_t, ::System::IntPtr, uint32_t, ::ByRef<uint32_t>)>(&::OVR::OpenVR::IVRIOBuffer__Read::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40705c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Read*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Read*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__Read.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRIOBuffer__Read::*)(uint64_t, ::System::IntPtr, uint32_t, ::ByRef<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRIOBuffer__Read::BeginInvoke)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x40705d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Read*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Read*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__Read.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EIOBufferError (::OVR::OpenVR::IVRIOBuffer__Read::*)(::ByRef<uint32_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRIOBuffer__Read::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x40706dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Read*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Read*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRIOBuffer__Read::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Read*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EIOBufferError OVR::OpenVR::IVRIOBuffer__Read::Invoke(uint64_t ulBuffer, ::System::IntPtr pDst, uint32_t unBytes, ::ByRef<uint32_t> punRead) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Read*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EIOBufferError, false>(this, ___internal_method, ulBuffer, pDst, unBytes, punRead);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRIOBuffer__Read::BeginInvoke(uint64_t ulBuffer, ::System::IntPtr pDst, uint32_t unBytes, ::ByRef<uint32_t> punRead, ::System::AsyncCallback* callback,
                                                                           ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Read*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulBuffer, pDst, unBytes, punRead, callback, object);
}
inline ::OVR::OpenVR::EIOBufferError OVR::OpenVR::IVRIOBuffer__Read::EndInvoke(::ByRef<uint32_t> punRead, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Read*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EIOBufferError, false>(this, ___internal_method, punRead, result);
}
inline ::OVR::OpenVR::IVRIOBuffer__Read* OVR::OpenVR::IVRIOBuffer__Read::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRIOBuffer__Read*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRIOBuffer__Read::IVRIOBuffer__Read() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__Write._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRIOBuffer__Write::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRIOBuffer__Write::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4070708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Write*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__Write.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EIOBufferError (::OVR::OpenVR::IVRIOBuffer__Write::*)(uint64_t, ::System::IntPtr, uint32_t)>(
    &::OVR::OpenVR::IVRIOBuffer__Write::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4070794;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Write*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Write*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__Write.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRIOBuffer__Write::*)(uint64_t, ::System::IntPtr, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRIOBuffer__Write::BeginInvoke)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x40707a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Write*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Write*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__Write.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EIOBufferError (::OVR::OpenVR::IVRIOBuffer__Write::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRIOBuffer__Write::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x407088c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Write*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Write*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRIOBuffer__Write::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Write*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EIOBufferError OVR::OpenVR::IVRIOBuffer__Write::Invoke(uint64_t ulBuffer, ::System::IntPtr pSrc, uint32_t unBytes) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Write*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EIOBufferError, false>(this, ___internal_method, ulBuffer, pSrc, unBytes);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRIOBuffer__Write::BeginInvoke(uint64_t ulBuffer, ::System::IntPtr pSrc, uint32_t unBytes, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Write*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulBuffer, pSrc, unBytes, callback, object);
}
inline ::OVR::OpenVR::EIOBufferError OVR::OpenVR::IVRIOBuffer__Write::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__Write*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EIOBufferError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRIOBuffer__Write* OVR::OpenVR::IVRIOBuffer__Write::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRIOBuffer__Write*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRIOBuffer__Write::IVRIOBuffer__Write() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__PropertyContainer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRIOBuffer__PropertyContainer::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRIOBuffer__PropertyContainer::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40708b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__PropertyContainer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__PropertyContainer.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::IVRIOBuffer__PropertyContainer::*)(uint64_t)>(
    &::OVR::OpenVR::IVRIOBuffer__PropertyContainer::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4070940;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__PropertyContainer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__PropertyContainer*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__PropertyContainer.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRIOBuffer__PropertyContainer::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRIOBuffer__PropertyContainer::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4070954;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__PropertyContainer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__PropertyContainer*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRIOBuffer__PropertyContainer.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::IVRIOBuffer__PropertyContainer::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRIOBuffer__PropertyContainer::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40709d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__PropertyContainer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__PropertyContainer*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRIOBuffer__PropertyContainer::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__PropertyContainer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint64_t OVR::OpenVR::IVRIOBuffer__PropertyContainer::Invoke(uint64_t ulBuffer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__PropertyContainer*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, ulBuffer);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRIOBuffer__PropertyContainer::BeginInvoke(uint64_t ulBuffer, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__PropertyContainer*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulBuffer, callback, object);
}
inline uint64_t OVR::OpenVR::IVRIOBuffer__PropertyContainer::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRIOBuffer__PropertyContainer*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRIOBuffer__PropertyContainer* OVR::OpenVR::IVRIOBuffer__PropertyContainer::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRIOBuffer__PropertyContainer*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRIOBuffer__PropertyContainer::IVRIOBuffer__PropertyContainer() {}
// Ctor Parameters [CppParam { name: "Open", ty: "::OVR::OpenVR::IVRIOBuffer__Open*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Close", ty: "::OVR::OpenVR::IVRIOBuffer__Close*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "Read", ty: "::OVR::OpenVR::IVRIOBuffer__Read*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Write", ty:
// "::OVR::OpenVR::IVRIOBuffer__Write*", modifiers: "", def_value: Some("{}") }, CppParam { name: "PropertyContainer", ty: "::OVR::OpenVR::IVRIOBuffer__PropertyContainer*", modifiers: "", def_value:
// Some("{}") }]
constexpr ::OVR::OpenVR::IVRIOBuffer::IVRIOBuffer(::OVR::OpenVR::IVRIOBuffer__Open* Open, ::OVR::OpenVR::IVRIOBuffer__Close* Close, ::OVR::OpenVR::IVRIOBuffer__Read* Read,
                                                  ::OVR::OpenVR::IVRIOBuffer__Write* Write, ::OVR::OpenVR::IVRIOBuffer__PropertyContainer* PropertyContainer) noexcept {
  this->Open = Open;
  this->Close = Close;
  this->Read = Read;
  this->Write = Write;
  this->PropertyContainer = PropertyContainer;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRIOBuffer::IVRIOBuffer() {}
