#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRDriverManager.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVRDriverManager_def.hpp"
#include "OVR/OpenVR/zzzz__IVRDriverManager_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::IVRDriverManager__GetDriverCount._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRDriverManager__GetDriverCount::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRDriverManager__GetDriverCount::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x406e020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRDriverManager__GetDriverCount*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRDriverManager__GetDriverCount.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRDriverManager__GetDriverCount::*)()>(
    &::OVR::OpenVR::IVRDriverManager__GetDriverCount::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x406e0a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRDriverManager__GetDriverCount*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRDriverManager__GetDriverCount*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRDriverManager__GetDriverCount.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRDriverManager__GetDriverCount::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRDriverManager__GetDriverCount::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x406e0bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRDriverManager__GetDriverCount*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRDriverManager__GetDriverCount*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRDriverManager__GetDriverCount.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRDriverManager__GetDriverCount::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRDriverManager__GetDriverCount::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x406e0dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRDriverManager__GetDriverCount*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRDriverManager__GetDriverCount*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRDriverManager__GetDriverCount::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRDriverManager__GetDriverCount*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRDriverManager__GetDriverCount::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRDriverManager__GetDriverCount*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRDriverManager__GetDriverCount::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRDriverManager__GetDriverCount*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline uint32_t OVR::OpenVR::IVRDriverManager__GetDriverCount::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRDriverManager__GetDriverCount*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRDriverManager__GetDriverCount* OVR::OpenVR::IVRDriverManager__GetDriverCount::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRDriverManager__GetDriverCount*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRDriverManager__GetDriverCount::IVRDriverManager__GetDriverCount() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRDriverManager__GetDriverName._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRDriverManager__GetDriverName::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRDriverManager__GetDriverName::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x406e104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRDriverManager__GetDriverName*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRDriverManager__GetDriverName.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRDriverManager__GetDriverName::*)(uint32_t, ::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::IVRDriverManager__GetDriverName::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x406e190;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRDriverManager__GetDriverName*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRDriverManager__GetDriverName*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRDriverManager__GetDriverName.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRDriverManager__GetDriverName::*)(uint32_t, ::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRDriverManager__GetDriverName::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x406e1a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRDriverManager__GetDriverName*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRDriverManager__GetDriverName*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRDriverManager__GetDriverName.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRDriverManager__GetDriverName::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRDriverManager__GetDriverName::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x406e24c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRDriverManager__GetDriverName*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRDriverManager__GetDriverName*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRDriverManager__GetDriverName::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRDriverManager__GetDriverName*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRDriverManager__GetDriverName::Invoke(uint32_t nDriver, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRDriverManager__GetDriverName*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, nDriver, pchValue, unBufferSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRDriverManager__GetDriverName::BeginInvoke(uint32_t nDriver, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize,
                                                                                         ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRDriverManager__GetDriverName*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, nDriver, pchValue, unBufferSize, callback, object);
}
inline uint32_t OVR::OpenVR::IVRDriverManager__GetDriverName::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRDriverManager__GetDriverName*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRDriverManager__GetDriverName* OVR::OpenVR::IVRDriverManager__GetDriverName::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRDriverManager__GetDriverName*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRDriverManager__GetDriverName::IVRDriverManager__GetDriverName() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRDriverManager__GetDriverHandle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRDriverManager__GetDriverHandle::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRDriverManager__GetDriverHandle::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x406e274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRDriverManager__GetDriverHandle*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRDriverManager__GetDriverHandle.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::IVRDriverManager__GetDriverHandle::*)(::StringW)>(
    &::OVR::OpenVR::IVRDriverManager__GetDriverHandle::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x406e310;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRDriverManager__GetDriverHandle*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRDriverManager__GetDriverHandle*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRDriverManager__GetDriverHandle.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRDriverManager__GetDriverHandle::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRDriverManager__GetDriverHandle::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x406e324;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRDriverManager__GetDriverHandle*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRDriverManager__GetDriverHandle*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRDriverManager__GetDriverHandle.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::IVRDriverManager__GetDriverHandle::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRDriverManager__GetDriverHandle::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x406e344;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRDriverManager__GetDriverHandle*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRDriverManager__GetDriverHandle*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRDriverManager__GetDriverHandle::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRDriverManager__GetDriverHandle*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint64_t OVR::OpenVR::IVRDriverManager__GetDriverHandle::Invoke(::StringW pchDriverName) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRDriverManager__GetDriverHandle*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, pchDriverName);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRDriverManager__GetDriverHandle::BeginInvoke(::StringW pchDriverName, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRDriverManager__GetDriverHandle*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchDriverName, callback, object);
}
inline uint64_t OVR::OpenVR::IVRDriverManager__GetDriverHandle::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRDriverManager__GetDriverHandle*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRDriverManager__GetDriverHandle* OVR::OpenVR::IVRDriverManager__GetDriverHandle::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRDriverManager__GetDriverHandle*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRDriverManager__GetDriverHandle::IVRDriverManager__GetDriverHandle() {}
// Ctor Parameters [CppParam { name: "GetDriverCount", ty: "::OVR::OpenVR::IVRDriverManager__GetDriverCount*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetDriverName", ty:
// "::OVR::OpenVR::IVRDriverManager__GetDriverName*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetDriverHandle", ty: "::OVR::OpenVR::IVRDriverManager__GetDriverHandle*", modifiers:
// "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::IVRDriverManager::IVRDriverManager(::OVR::OpenVR::IVRDriverManager__GetDriverCount* GetDriverCount, ::OVR::OpenVR::IVRDriverManager__GetDriverName* GetDriverName,
                                                            ::OVR::OpenVR::IVRDriverManager__GetDriverHandle* GetDriverHandle) noexcept {
  this->GetDriverCount = GetDriverCount;
  this->GetDriverName = GetDriverName;
  this->GetDriverHandle = GetDriverHandle;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRDriverManager::IVRDriverManager() {}
