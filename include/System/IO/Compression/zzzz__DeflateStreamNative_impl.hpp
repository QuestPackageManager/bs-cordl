#pragma once
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeHandle_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/Compression/zzzz__DeflateStreamNative_def.hpp"
#include "System/IO/Compression/zzzz__CompressionMode_def.hpp"
#include "System/IO/Compression/zzzz__DeflateStreamNative_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite::*)(::System::Object*, void*)>(
    &::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x294432c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite::*)(void*, int32_t, void*)>(
    &::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2944b84;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite*>::get(), 13));
    return ___internal_method;
  }
};
inline ::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite* System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite*>(object, method));
}
inline void System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline int32_t System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite::Invoke(void* buffer, int32_t length, void* data) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, length, data);
}
// Ctor Parameters []
constexpr ::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite::__DeflateStreamNative__UnmanagedReadOrWrite() {}
//  Writing Method size for method: ::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle.get_IsInvalid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle::*)()>(
    &::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle::get_IsInvalid)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2944b98;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle::*)()>(
    &::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2944b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle.ReleaseHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle::*)()>(
    &::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2944bec;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle*>::get(), 7));
    return ___internal_method;
  }
};
inline bool System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle::get_IsInvalid() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle* System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle*>());
}
inline void System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle::ReleaseHandle() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle::__DeflateStreamNative__SafeDeflateStreamHandle() {}
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::DeflateStreamNative::*)()>(&::System::IO::Compression::DeflateStreamNative::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2944324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Compression::DeflateStreamNative* (*)(::System::IO::Stream*, ::System::IO::Compression::CompressionMode,
                                                                                                                                      bool)>(&::System::IO::Compression::DeflateStreamNative::Create)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2942afc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), "Create", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::CompressionMode>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::DeflateStreamNative::*)()>(
    &::System::IO::Compression::DeflateStreamNative::Finalize)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2944488;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::DeflateStreamNative::*)(bool)>(
    &::System::IO::Compression::DeflateStreamNative::Dispose)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2942d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), "Dispose", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative.Flush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::DeflateStreamNative::*)()>(&::System::IO::Compression::DeflateStreamNative::Flush)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x29434ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), "Flush",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative.ReadZStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::Compression::DeflateStreamNative::*)(void*, int32_t)>(
    &::System::IO::Compression::DeflateStreamNative::ReadZStream)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2942ee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), "ReadZStream", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative.WriteZStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::DeflateStreamNative::*)(void*, int32_t)>(
    &::System::IO::Compression::DeflateStreamNative::WriteZStream)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2943190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), "WriteZStream", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative.UnmanagedRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(void*, int32_t, void*)>(&::System::IO::Compression::DeflateStreamNative::UnmanagedRead)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x29441ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), "UnmanagedRead", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative.UnmanagedRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::Compression::DeflateStreamNative::*)(void*, int32_t)>(
    &::System::IO::Compression::DeflateStreamNative::UnmanagedRead)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x29447b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), "UnmanagedRead", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative.UnmanagedWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(void*, int32_t, void*)>(&::System::IO::Compression::DeflateStreamNative::UnmanagedWrite)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2944268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), "UnmanagedWrite", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative.UnmanagedWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::Compression::DeflateStreamNative::*)(void*, int32_t)>(
    &::System::IO::Compression::DeflateStreamNative::UnmanagedWrite)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2944954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), "UnmanagedWrite", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative.CheckResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::Compression::DeflateStreamNative::*)(int32_t, ::StringW)>(
    &::System::IO::Compression::DeflateStreamNative::CheckResult)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2944584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), "CheckResult", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative.CreateZStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle* (*)(::System::IO::Compression::CompressionMode, bool,
                                                                                               ::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite*, void*)>(
        &::System::IO::Compression::DeflateStreamNative::CreateZStream)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x29443f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), "CreateZStream", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::CompressionMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative.CloseZStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(void*)>(&::System::IO::Compression::DeflateStreamNative::CloseZStream)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2944b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), "CloseZStream",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative.Flush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle*)>(
    &::System::IO::Compression::DeflateStreamNative::Flush)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2944520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), "Flush", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative.ReadZStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle*, void*, int32_t)>(
    &::System::IO::Compression::DeflateStreamNative::ReadZStream)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x29446b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), "ReadZStream", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::DeflateStreamNative.WriteZStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle*, void*, int32_t)>(
    &::System::IO::Compression::DeflateStreamNative::WriteZStream)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2944734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), "WriteZStream", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite*& System::IO::Compression::DeflateStreamNative::__get_feeder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___feeder;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite*> const& System::IO::Compression::DeflateStreamNative::__get_feeder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___feeder;
}
constexpr void System::IO::Compression::DeflateStreamNative::__set_feeder(::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___feeder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::Stream*& System::IO::Compression::DeflateStreamNative::__get_base_stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___base_stream;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& System::IO::Compression::DeflateStreamNative::__get_base_stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___base_stream;
}
constexpr void System::IO::Compression::DeflateStreamNative::__set_base_stream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___base_stream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle*& System::IO::Compression::DeflateStreamNative::__get_z_stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z_stream;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle*> const& System::IO::Compression::DeflateStreamNative::__get_z_stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z_stream;
}
constexpr void System::IO::Compression::DeflateStreamNative::__set_z_stream(::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___z_stream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::InteropServices::GCHandle& System::IO::Compression::DeflateStreamNative::__get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& System::IO::Compression::DeflateStreamNative::__get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void System::IO::Compression::DeflateStreamNative::__set_data(::System::Runtime::InteropServices::GCHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
constexpr bool& System::IO::Compression::DeflateStreamNative::__get_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr bool const& System::IO::Compression::DeflateStreamNative::__get_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr void System::IO::Compression::DeflateStreamNative::__set_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposed = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::IO::Compression::DeflateStreamNative::__get_io_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___io_buffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::IO::Compression::DeflateStreamNative::__get_io_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___io_buffer;
}
constexpr void System::IO::Compression::DeflateStreamNative::__set_io_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___io_buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Exception*& System::IO::Compression::DeflateStreamNative::__get_last_error() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___last_error;
}
constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& System::IO::Compression::DeflateStreamNative::__get_last_error() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___last_error;
}
constexpr void System::IO::Compression::DeflateStreamNative::__set_last_error(::System::Exception* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___last_error)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::IO::Compression::DeflateStreamNative* System::IO::Compression::DeflateStreamNative::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::IO::Compression::DeflateStreamNative*>());
}
inline void System::IO::Compression::DeflateStreamNative::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IO::Compression::DeflateStreamNative* System::IO::Compression::DeflateStreamNative::Create(::System::IO::Stream* compressedStream, ::System::IO::Compression::CompressionMode mode,
                                                                                                            bool gzip) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), "Create", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::CompressionMode>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Compression::DeflateStreamNative*, false>(nullptr, ___internal_method, compressedStream, mode, gzip);
}
inline void System::IO::Compression::DeflateStreamNative::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::Compression::DeflateStreamNative::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), "Dispose", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void System::IO::Compression::DeflateStreamNative::Flush() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), "Flush",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::IO::Compression::DeflateStreamNative::ReadZStream(void* buffer, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), "ReadZStream", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, length);
}
inline void System::IO::Compression::DeflateStreamNative::WriteZStream(void* buffer, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), "WriteZStream", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, length);
}
inline int32_t System::IO::Compression::DeflateStreamNative::UnmanagedRead(void* buffer, int32_t length, void* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), "UnmanagedRead", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, buffer, length, data);
}
inline int32_t System::IO::Compression::DeflateStreamNative::UnmanagedRead(void* buffer, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), "UnmanagedRead", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, length);
}
inline int32_t System::IO::Compression::DeflateStreamNative::UnmanagedWrite(void* buffer, int32_t length, void* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), "UnmanagedWrite", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, buffer, length, data);
}
inline int32_t System::IO::Compression::DeflateStreamNative::UnmanagedWrite(void* buffer, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), "UnmanagedWrite", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, length);
}
inline void System::IO::Compression::DeflateStreamNative::CheckResult(int32_t result, ::StringW where) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), "CheckResult", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, where);
}
inline ::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle*
System::IO::Compression::DeflateStreamNative::CreateZStream(::System::IO::Compression::CompressionMode compress, bool gzip,
                                                            ::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite* feeder, void* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), "CreateZStream", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::CompressionMode>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle*, false>(nullptr, ___internal_method, compress, gzip, feeder, data);
}
inline int32_t System::IO::Compression::DeflateStreamNative::CloseZStream(void* stream) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), "CloseZStream",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, stream);
}
inline int32_t System::IO::Compression::DeflateStreamNative::Flush(::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle* stream) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), "Flush", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, stream);
}
inline int32_t System::IO::Compression::DeflateStreamNative::ReadZStream(::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle* stream, void* buffer, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), "ReadZStream", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, stream, buffer, length);
}
inline int32_t System::IO::Compression::DeflateStreamNative::WriteZStream(::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle* stream, void* buffer, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Compression::DeflateStreamNative*>::get(), "WriteZStream", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, stream, buffer, length);
}
// Ctor Parameters []
constexpr ::System::IO::Compression::DeflateStreamNative::DeflateStreamNative() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
