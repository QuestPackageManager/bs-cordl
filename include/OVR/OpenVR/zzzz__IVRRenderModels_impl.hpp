#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRRenderModels.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVRRenderModels_def.hpp"
#include "OVR/OpenVR/zzzz__EVRRenderModelError_def.hpp"
#include "OVR/OpenVR/zzzz__IVRRenderModels_def.hpp"
#include "OVR/OpenVR/zzzz__RenderModel_ComponentState_t_def.hpp"
#include "OVR/OpenVR/zzzz__RenderModel_ControllerMode_State_t_def.hpp"
#include "OVR/OpenVR/zzzz__VRControllerState_t_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4077a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRRenderModelError (::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async::*)(
    ::StringW, ::ByRef<::System::IntPtr>)>(&::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4077b00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async::*)(::StringW, ::ByRef<::System::IntPtr>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x4077b14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRRenderModelError (::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async::*)(
    ::ByRef<::System::IntPtr>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4077ba8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRRenderModelError OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async::Invoke(::StringW pchRenderModelName, ::ByRef<::System::IntPtr> ppRenderModel) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRRenderModelError, false>(this, ___internal_method, pchRenderModelName, ppRenderModel);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async::BeginInvoke(::StringW pchRenderModelName, ::ByRef<::System::IntPtr> ppRenderModel,
                                                                                                ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchRenderModelName, ppRenderModel, callback, object);
}
inline ::OVR::OpenVR::EVRRenderModelError OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async::EndInvoke(::ByRef<::System::IntPtr> ppRenderModel, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRRenderModelError, false>(this, ___internal_method, ppRenderModel, result);
}
inline ::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async* OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async::IVRRenderModels__LoadRenderModel_Async() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__FreeRenderModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRRenderModels__FreeRenderModel::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__FreeRenderModel::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4077bd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__FreeRenderModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__FreeRenderModel.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRRenderModels__FreeRenderModel::*)(::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__FreeRenderModel::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4077c60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__FreeRenderModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__FreeRenderModel*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__FreeRenderModel.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRRenderModels__FreeRenderModel::*)(::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRRenderModels__FreeRenderModel::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4077c74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__FreeRenderModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__FreeRenderModel*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__FreeRenderModel.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRRenderModels__FreeRenderModel::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRRenderModels__FreeRenderModel::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4077cf8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__FreeRenderModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__FreeRenderModel*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__FreeRenderModel::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__FreeRenderModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRRenderModels__FreeRenderModel::Invoke(::System::IntPtr pRenderModel) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__FreeRenderModel*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pRenderModel);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__FreeRenderModel::BeginInvoke(::System::IntPtr pRenderModel, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__FreeRenderModel*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pRenderModel, callback, object);
}
inline void OVR::OpenVR::IVRRenderModels__FreeRenderModel::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__FreeRenderModel*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRRenderModels__FreeRenderModel* OVR::OpenVR::IVRRenderModels__FreeRenderModel::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRRenderModels__FreeRenderModel*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__FreeRenderModel::IVRRenderModels__FreeRenderModel() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__LoadTexture_Async._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRRenderModels__LoadTexture_Async::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__LoadTexture_Async::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4077d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadTexture_Async*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__LoadTexture_Async.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRRenderModelError (::OVR::OpenVR::IVRRenderModels__LoadTexture_Async::*)(
    int32_t, ::ByRef<::System::IntPtr>)>(&::OVR::OpenVR::IVRRenderModels__LoadTexture_Async::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4077d90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadTexture_Async*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadTexture_Async*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__LoadTexture_Async.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRRenderModels__LoadTexture_Async::*)(int32_t, ::ByRef<::System::IntPtr>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRRenderModels__LoadTexture_Async::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x4077da4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadTexture_Async*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadTexture_Async*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__LoadTexture_Async.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRRenderModelError (::OVR::OpenVR::IVRRenderModels__LoadTexture_Async::*)(
    ::ByRef<::System::IntPtr>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRRenderModels__LoadTexture_Async::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4077e60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadTexture_Async*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadTexture_Async*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__LoadTexture_Async::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadTexture_Async*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRRenderModelError OVR::OpenVR::IVRRenderModels__LoadTexture_Async::Invoke(int32_t textureId, ::ByRef<::System::IntPtr> ppTexture) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadTexture_Async*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRRenderModelError, false>(this, ___internal_method, textureId, ppTexture);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__LoadTexture_Async::BeginInvoke(int32_t textureId, ::ByRef<::System::IntPtr> ppTexture, ::System::AsyncCallback* callback,
                                                                                            ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadTexture_Async*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, textureId, ppTexture, callback, object);
}
inline ::OVR::OpenVR::EVRRenderModelError OVR::OpenVR::IVRRenderModels__LoadTexture_Async::EndInvoke(::ByRef<::System::IntPtr> ppTexture, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadTexture_Async*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRRenderModelError, false>(this, ___internal_method, ppTexture, result);
}
inline ::OVR::OpenVR::IVRRenderModels__LoadTexture_Async* OVR::OpenVR::IVRRenderModels__LoadTexture_Async::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRRenderModels__LoadTexture_Async*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__LoadTexture_Async::IVRRenderModels__LoadTexture_Async() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__FreeTexture._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRRenderModels__FreeTexture::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__FreeTexture::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4077e8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__FreeTexture*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__FreeTexture.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRRenderModels__FreeTexture::*)(::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__FreeTexture::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4077f18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__FreeTexture*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__FreeTexture*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__FreeTexture.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRRenderModels__FreeTexture::*)(::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRRenderModels__FreeTexture::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4077f2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__FreeTexture*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__FreeTexture*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__FreeTexture.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRRenderModels__FreeTexture::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRRenderModels__FreeTexture::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4077fb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__FreeTexture*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__FreeTexture*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__FreeTexture::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__FreeTexture*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRRenderModels__FreeTexture::Invoke(::System::IntPtr pTexture) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__FreeTexture*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pTexture);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__FreeTexture::BeginInvoke(::System::IntPtr pTexture, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__FreeTexture*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pTexture, callback, object);
}
inline void OVR::OpenVR::IVRRenderModels__FreeTexture::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__FreeTexture*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRRenderModels__FreeTexture* OVR::OpenVR::IVRRenderModels__FreeTexture::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRRenderModels__FreeTexture*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__FreeTexture::IVRRenderModels__FreeTexture() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4077fbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRRenderModelError (::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async::*)(
    int32_t, ::System::IntPtr, ::ByRef<::System::IntPtr>)>(&::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4078048;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async::*)(int32_t, ::System::IntPtr, ::ByRef<::System::IntPtr>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async::BeginInvoke)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x407805c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRRenderModelError (::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async::*)(
    ::ByRef<::System::IntPtr>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4078130;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRRenderModelError OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async::Invoke(int32_t textureId, ::System::IntPtr pD3D11Device, ::ByRef<::System::IntPtr> ppD3D11Texture2D) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRRenderModelError, false>(this, ___internal_method, textureId, pD3D11Device, ppD3D11Texture2D);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async::BeginInvoke(int32_t textureId, ::System::IntPtr pD3D11Device, ::ByRef<::System::IntPtr> ppD3D11Texture2D,
                                                                                                 ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, textureId, pD3D11Device, ppD3D11Texture2D, callback, object);
}
inline ::OVR::OpenVR::EVRRenderModelError OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async::EndInvoke(::ByRef<::System::IntPtr> ppD3D11Texture2D, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRRenderModelError, false>(this, ___internal_method, ppD3D11Texture2D, result);
}
inline ::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async* OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async::IVRRenderModels__LoadTextureD3D11_Async() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x407815c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRRenderModelError (::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async::*)(
    int32_t, ::System::IntPtr)>(&::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40781e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async::*)(int32_t, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x40781fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRRenderModelError (::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40782b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRRenderModelError OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async::Invoke(int32_t textureId, ::System::IntPtr pDstTexture) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRRenderModelError, false>(this, ___internal_method, textureId, pDstTexture);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async::BeginInvoke(int32_t textureId, ::System::IntPtr pDstTexture, ::System::AsyncCallback* callback,
                                                                                                     ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, textureId, pDstTexture, callback, object);
}
inline ::OVR::OpenVR::EVRRenderModelError OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRRenderModelError, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async* OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async::IVRRenderModels__LoadIntoTextureD3D11_Async() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40782dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11::*)(::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4078368;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11::*)(::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x407837c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4078400;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__FreeTextureD3D11::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRRenderModels__FreeTextureD3D11::Invoke(::System::IntPtr pD3D11Texture2D) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pD3D11Texture2D);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__FreeTextureD3D11::BeginInvoke(::System::IntPtr pD3D11Texture2D, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pD3D11Texture2D, callback, object);
}
inline void OVR::OpenVR::IVRRenderModels__FreeTextureD3D11::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11* OVR::OpenVR::IVRRenderModels__FreeTextureD3D11::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11::IVRRenderModels__FreeTextureD3D11() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelName._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRRenderModels__GetRenderModelName::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__GetRenderModelName::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x407840c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelName*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelName.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRRenderModels__GetRenderModelName::*)(uint32_t, ::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::IVRRenderModels__GetRenderModelName::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4078498;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelName*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelName*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelName.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRRenderModels__GetRenderModelName::*)(uint32_t, ::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRRenderModels__GetRenderModelName::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x40784ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelName*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelName*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelName.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRRenderModels__GetRenderModelName::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRRenderModels__GetRenderModelName::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4078554;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelName*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelName*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__GetRenderModelName::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelName*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRRenderModels__GetRenderModelName::Invoke(uint32_t unRenderModelIndex, ::System::Text::StringBuilder* pchRenderModelName, uint32_t unRenderModelNameLen) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelName*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, unRenderModelIndex, pchRenderModelName, unRenderModelNameLen);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__GetRenderModelName::BeginInvoke(uint32_t unRenderModelIndex, ::System::Text::StringBuilder* pchRenderModelName,
                                                                                             uint32_t unRenderModelNameLen, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelName*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, unRenderModelIndex, pchRenderModelName, unRenderModelNameLen, callback, object);
}
inline uint32_t OVR::OpenVR::IVRRenderModels__GetRenderModelName::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelName*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRRenderModels__GetRenderModelName* OVR::OpenVR::IVRRenderModels__GetRenderModelName::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRRenderModels__GetRenderModelName*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__GetRenderModelName::IVRRenderModels__GetRenderModelName() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelCount._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRRenderModels__GetRenderModelCount::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__GetRenderModelCount::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x407857c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelCount*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelCount.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRRenderModels__GetRenderModelCount::*)()>(
    &::OVR::OpenVR::IVRRenderModels__GetRenderModelCount::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4078604;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelCount*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelCount*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelCount.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRRenderModels__GetRenderModelCount::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRRenderModels__GetRenderModelCount::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4078618;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelCount*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelCount*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelCount.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRRenderModels__GetRenderModelCount::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRRenderModels__GetRenderModelCount::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4078638;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelCount*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelCount*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__GetRenderModelCount::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelCount*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRRenderModels__GetRenderModelCount::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelCount*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__GetRenderModelCount::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelCount*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline uint32_t OVR::OpenVR::IVRRenderModels__GetRenderModelCount::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelCount*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRRenderModels__GetRenderModelCount* OVR::OpenVR::IVRRenderModels__GetRenderModelCount::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRRenderModels__GetRenderModelCount*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__GetRenderModelCount::IVRRenderModels__GetRenderModelCount() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentCount._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRRenderModels__GetComponentCount::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentCount::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4078660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentCount*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentCount.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRRenderModels__GetComponentCount::*)(::StringW)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentCount::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40786fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentCount*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentCount*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentCount.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRRenderModels__GetComponentCount::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRRenderModels__GetComponentCount::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4078710;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentCount*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentCount*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentCount.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRRenderModels__GetComponentCount::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentCount::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4078730;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentCount*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentCount*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__GetComponentCount::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentCount*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRRenderModels__GetComponentCount::Invoke(::StringW pchRenderModelName) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentCount*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pchRenderModelName);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__GetComponentCount::BeginInvoke(::StringW pchRenderModelName, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentCount*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchRenderModelName, callback, object);
}
inline uint32_t OVR::OpenVR::IVRRenderModels__GetComponentCount::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentCount*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRRenderModels__GetComponentCount* OVR::OpenVR::IVRRenderModels__GetComponentCount::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRRenderModels__GetComponentCount*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__GetComponentCount::IVRRenderModels__GetComponentCount() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentName._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRRenderModels__GetComponentName::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentName::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4078758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentName*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentName.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRRenderModels__GetComponentName::*)(
    ::StringW, uint32_t, ::System::Text::StringBuilder*, uint32_t)>(&::OVR::OpenVR::IVRRenderModels__GetComponentName::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40787f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentName*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentName*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentName.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRRenderModels__GetComponentName::*)(::StringW, uint32_t, ::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentName::BeginInvoke)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x407880c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentName*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentName*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentName.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRRenderModels__GetComponentName::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentName::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40788c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentName*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentName*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__GetComponentName::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentName*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRRenderModels__GetComponentName::Invoke(::StringW pchRenderModelName, uint32_t unComponentIndex, ::System::Text::StringBuilder* pchComponentName,
                                                                       uint32_t unComponentNameLen) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentName*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pchRenderModelName, unComponentIndex, pchComponentName, unComponentNameLen);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__GetComponentName::BeginInvoke(::StringW pchRenderModelName, uint32_t unComponentIndex, ::System::Text::StringBuilder* pchComponentName,
                                                                                           uint32_t unComponentNameLen, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentName*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchRenderModelName, unComponentIndex, pchComponentName, unComponentNameLen, callback, object);
}
inline uint32_t OVR::OpenVR::IVRRenderModels__GetComponentName::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentName*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRRenderModels__GetComponentName* OVR::OpenVR::IVRRenderModels__GetComponentName::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRRenderModels__GetComponentName*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__GetComponentName::IVRRenderModels__GetComponentName() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x40788e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask::*)(::StringW, ::StringW)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4078988;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask::*)(::StringW, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x407899c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40789c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__GetComponentButtonMask::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint64_t OVR::OpenVR::IVRRenderModels__GetComponentButtonMask::Invoke(::StringW pchRenderModelName, ::StringW pchComponentName) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, pchRenderModelName, pchComponentName);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__GetComponentButtonMask::BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName, ::System::AsyncCallback* callback,
                                                                                                 ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchRenderModelName, pchComponentName, callback, object);
}
inline uint64_t OVR::OpenVR::IVRRenderModels__GetComponentButtonMask::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask* OVR::OpenVR::IVRRenderModels__GetComponentButtonMask::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask::IVRRenderModels__GetComponentButtonMask() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x40789ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName::*)(
    ::StringW, ::StringW, ::System::Text::StringBuilder*, uint32_t)>(&::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4078a8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName::*)(::StringW, ::StringW, ::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName::BeginInvoke)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x4078aa0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4078b48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName::Invoke(::StringW pchRenderModelName, ::StringW pchComponentName, ::System::Text::StringBuilder* pchComponentRenderModelName,
                                                                                  uint32_t unComponentRenderModelNameLen) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pchRenderModelName, pchComponentName, pchComponentRenderModelName, unComponentRenderModelNameLen);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName::BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName,
                                                                                                      ::System::Text::StringBuilder* pchComponentRenderModelName,
                                                                                                      uint32_t unComponentRenderModelNameLen, ::System::AsyncCallback* callback,
                                                                                                      ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchRenderModelName, pchComponentName, pchComponentRenderModelName, unComponentRenderModelNameLen,
                                                                             callback, object);
}
inline uint32_t OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName* OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName::IVRRenderModels__GetComponentRenderModelName() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4078b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath::*)(
    ::StringW, ::StringW, uint64_t, ::ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>, ::ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4078c10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath::*)(::StringW, ::StringW, uint64_t, ::ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>,
                                                                       ::ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath::BeginInvoke)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x4078c24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath::*)(
    ::ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>, ::ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4078d2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath::Invoke(::StringW pchRenderModelName, ::StringW pchComponentName, uint64_t devicePath,
                                                                                 ::ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState,
                                                                                 ::ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pchRenderModelName, pchComponentName, devicePath, pState, pComponentState);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath::BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName, uint64_t devicePath,
                                                                                                         ::ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState,
                                                                                                         ::ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState,
                                                                                                         ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchRenderModelName, pchComponentName, devicePath, pState, pComponentState, callback, object);
}
inline bool OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath::EndInvoke(::ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState,
                                                                                    ::ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pState, pComponentState, result);
}
inline ::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath* OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath::IVRRenderModels__GetComponentStateForDevicePath() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRRenderModels__GetComponentState::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentState::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4078d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentState*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentState.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRRenderModels__GetComponentState::*)(
    ::StringW, ::StringW, ::ByRef<::OVR::OpenVR::VRControllerState_t>, ::ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>, ::ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentState::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4078e00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentState*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentState*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentState.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRRenderModels__GetComponentState::*)(::StringW, ::StringW, ::ByRef<::OVR::OpenVR::VRControllerState_t>, ::ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>,
                                                          ::ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentState::BeginInvoke)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x4078e14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentState*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentState*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentState.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRRenderModels__GetComponentState::*)(
    ::ByRef<::OVR::OpenVR::VRControllerState_t>, ::ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>, ::ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentState::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4078f14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentState*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentState*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__GetComponentState::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentState*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRRenderModels__GetComponentState::Invoke(::StringW pchRenderModelName, ::StringW pchComponentName, ::ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState,
                                                                    ::ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState,
                                                                    ::ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentState*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pchRenderModelName, pchComponentName, pControllerState, pState, pComponentState);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__GetComponentState::BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName,
                                                                                            ::ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState,
                                                                                            ::ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState,
                                                                                            ::ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState, ::System::AsyncCallback* callback,
                                                                                            ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentState*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchRenderModelName, pchComponentName, pControllerState, pState, pComponentState, callback,
                                                                             object);
}
inline bool OVR::OpenVR::IVRRenderModels__GetComponentState::EndInvoke(::ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, ::ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState,
                                                                       ::ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetComponentState*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pControllerState, pState, pComponentState, result);
}
inline ::OVR::OpenVR::IVRRenderModels__GetComponentState* OVR::OpenVR::IVRRenderModels__GetComponentState::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRRenderModels__GetComponentState*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__GetComponentState::IVRRenderModels__GetComponentState() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4078f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent::*)(::StringW, ::StringW)>(
    &::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4078fe8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent::*)(::StringW, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4078ffc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4079024;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__RenderModelHasComponent::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRRenderModels__RenderModelHasComponent::Invoke(::StringW pchRenderModelName, ::StringW pchComponentName) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pchRenderModelName, pchComponentName);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__RenderModelHasComponent::BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName, ::System::AsyncCallback* callback,
                                                                                                  ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchRenderModelName, pchComponentName, callback, object);
}
inline bool OVR::OpenVR::IVRRenderModels__RenderModelHasComponent::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent* OVR::OpenVR::IVRRenderModels__RenderModelHasComponent::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent::IVRRenderModels__RenderModelHasComponent() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x407904c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL::*)(
    ::StringW, ::System::Text::StringBuilder*, uint32_t, ::ByRef<::OVR::OpenVR::EVRRenderModelError>)>(&::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40790ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL::*)(::StringW, ::System::Text::StringBuilder*, uint32_t, ::ByRef<::OVR::OpenVR::EVRRenderModelError>, ::System::AsyncCallback*,
                                                                   ::System::Object*)>(&::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL::BeginInvoke)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x4079100;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL::*)(
    ::ByRef<::OVR::OpenVR::EVRRenderModelError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x40791d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL::Invoke(::StringW pchRenderModelName, ::System::Text::StringBuilder* pchThumbnailURL, uint32_t unThumbnailURLLen,
                                                                                 ::ByRef<::OVR::OpenVR::EVRRenderModelError> peError) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pchRenderModelName, pchThumbnailURL, unThumbnailURLLen, peError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL::BeginInvoke(::StringW pchRenderModelName, ::System::Text::StringBuilder* pchThumbnailURL,
                                                                                                     uint32_t unThumbnailURLLen, ::ByRef<::OVR::OpenVR::EVRRenderModelError> peError,
                                                                                                     ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchRenderModelName, pchThumbnailURL, unThumbnailURLLen, peError, callback, object);
}
inline uint32_t OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL::EndInvoke(::ByRef<::OVR::OpenVR::EVRRenderModelError> peError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, peError, result);
}
inline ::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL* OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL::IVRRenderModels__GetRenderModelThumbnailURL() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x40791fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath::*)(
    ::StringW, ::System::Text::StringBuilder*, uint32_t, ::ByRef<::OVR::OpenVR::EVRRenderModelError>)>(&::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x407929c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath::*)(::StringW, ::System::Text::StringBuilder*, uint32_t, ::ByRef<::OVR::OpenVR::EVRRenderModelError>, ::System::AsyncCallback*,
                                                                   ::System::Object*)>(&::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath::BeginInvoke)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x40792b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath::*)(
    ::ByRef<::OVR::OpenVR::EVRRenderModelError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4079380;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath::Invoke(::StringW pchRenderModelName, ::System::Text::StringBuilder* pchOriginalPath, uint32_t unOriginalPathLen,
                                                                                 ::ByRef<::OVR::OpenVR::EVRRenderModelError> peError) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pchRenderModelName, pchOriginalPath, unOriginalPathLen, peError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath::BeginInvoke(::StringW pchRenderModelName, ::System::Text::StringBuilder* pchOriginalPath,
                                                                                                     uint32_t unOriginalPathLen, ::ByRef<::OVR::OpenVR::EVRRenderModelError> peError,
                                                                                                     ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchRenderModelName, pchOriginalPath, unOriginalPathLen, peError, callback, object);
}
inline uint32_t OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath::EndInvoke(::ByRef<::OVR::OpenVR::EVRRenderModelError> peError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, peError, result);
}
inline ::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath* OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath::IVRRenderModels__GetRenderModelOriginalPath() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40793ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum::*)(
    ::OVR::OpenVR::EVRRenderModelError)>(&::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4079438;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum::*)(::OVR::OpenVR::EVRRenderModelError, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x407944c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40794d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::System::IntPtr OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum::Invoke(::OVR::OpenVR::EVRRenderModelError error) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, error);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum::BeginInvoke(::OVR::OpenVR::EVRRenderModelError error, ::System::AsyncCallback* callback,
                                                                                                          ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, error, callback, object);
}
inline ::System::IntPtr OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum* OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum::IVRRenderModels__GetRenderModelErrorNameFromEnum() {}
// Ctor Parameters [CppParam { name: "LoadRenderModel_Async", ty: "::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async*", modifiers: "", def_value: Some("{}") }, CppParam { name: "FreeRenderModel",
// ty: "::OVR::OpenVR::IVRRenderModels__FreeRenderModel*", modifiers: "", def_value: Some("{}") }, CppParam { name: "LoadTexture_Async", ty: "::OVR::OpenVR::IVRRenderModels__LoadTexture_Async*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "FreeTexture", ty: "::OVR::OpenVR::IVRRenderModels__FreeTexture*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "LoadTextureD3D11_Async", ty: "::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async*", modifiers: "", def_value: Some("{}") }, CppParam { name: "LoadIntoTextureD3D11_Async", ty:
// "::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async*", modifiers: "", def_value: Some("{}") }, CppParam { name: "FreeTextureD3D11", ty: "::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "GetRenderModelName", ty: "::OVR::OpenVR::IVRRenderModels__GetRenderModelName*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "GetRenderModelCount", ty: "::OVR::OpenVR::IVRRenderModels__GetRenderModelCount*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetComponentCount", ty:
// "::OVR::OpenVR::IVRRenderModels__GetComponentCount*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetComponentName", ty: "::OVR::OpenVR::IVRRenderModels__GetComponentName*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "GetComponentButtonMask", ty: "::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask*", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "GetComponentRenderModelName", ty: "::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetComponentStateForDevicePath",
// ty: "::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetComponentState", ty:
// "::OVR::OpenVR::IVRRenderModels__GetComponentState*", modifiers: "", def_value: Some("{}") }, CppParam { name: "RenderModelHasComponent", ty:
// "::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetRenderModelThumbnailURL", ty:
// "::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetRenderModelOriginalPath", ty:
// "::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetRenderModelErrorNameFromEnum", ty:
// "::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum*", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::IVRRenderModels::IVRRenderModels(
    ::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async* LoadRenderModel_Async, ::OVR::OpenVR::IVRRenderModels__FreeRenderModel* FreeRenderModel,
    ::OVR::OpenVR::IVRRenderModels__LoadTexture_Async* LoadTexture_Async, ::OVR::OpenVR::IVRRenderModels__FreeTexture* FreeTexture,
    ::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async* LoadTextureD3D11_Async, ::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async* LoadIntoTextureD3D11_Async,
    ::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11* FreeTextureD3D11, ::OVR::OpenVR::IVRRenderModels__GetRenderModelName* GetRenderModelName,
    ::OVR::OpenVR::IVRRenderModels__GetRenderModelCount* GetRenderModelCount, ::OVR::OpenVR::IVRRenderModels__GetComponentCount* GetComponentCount,
    ::OVR::OpenVR::IVRRenderModels__GetComponentName* GetComponentName, ::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask* GetComponentButtonMask,
    ::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName* GetComponentRenderModelName, ::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath* GetComponentStateForDevicePath,
    ::OVR::OpenVR::IVRRenderModels__GetComponentState* GetComponentState, ::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent* RenderModelHasComponent,
    ::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL* GetRenderModelThumbnailURL, ::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath* GetRenderModelOriginalPath,
    ::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum* GetRenderModelErrorNameFromEnum) noexcept {
  this->LoadRenderModel_Async = LoadRenderModel_Async;
  this->FreeRenderModel = FreeRenderModel;
  this->LoadTexture_Async = LoadTexture_Async;
  this->FreeTexture = FreeTexture;
  this->LoadTextureD3D11_Async = LoadTextureD3D11_Async;
  this->LoadIntoTextureD3D11_Async = LoadIntoTextureD3D11_Async;
  this->FreeTextureD3D11 = FreeTextureD3D11;
  this->GetRenderModelName = GetRenderModelName;
  this->GetRenderModelCount = GetRenderModelCount;
  this->GetComponentCount = GetComponentCount;
  this->GetComponentName = GetComponentName;
  this->GetComponentButtonMask = GetComponentButtonMask;
  this->GetComponentRenderModelName = GetComponentRenderModelName;
  this->GetComponentStateForDevicePath = GetComponentStateForDevicePath;
  this->GetComponentState = GetComponentState;
  this->RenderModelHasComponent = RenderModelHasComponent;
  this->GetRenderModelThumbnailURL = GetRenderModelThumbnailURL;
  this->GetRenderModelOriginalPath = GetRenderModelOriginalPath;
  this->GetRenderModelErrorNameFromEnum = GetRenderModelErrorNameFromEnum;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels::IVRRenderModels() {}
