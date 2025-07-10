#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRRenderModels.hpp"
#include "OVR/OpenVR/zzzz__IVRRenderModels_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OVR/OpenVR/zzzz__CVRRenderModels_def.hpp"
#include "OVR/OpenVR/zzzz__CVRRenderModels_def.hpp"
#include "OVR/OpenVR/zzzz__EVRRenderModelError_def.hpp"
#include "OVR/OpenVR/zzzz__IVRRenderModels_def.hpp"
#include "OVR/OpenVR/zzzz__RenderModel_ComponentState_t_def.hpp"
#include "OVR/OpenVR/zzzz__RenderModel_ControllerMode_State_t_def.hpp"
#include "OVR/OpenVR/zzzz__VRControllerState_t_Packed_def.hpp"
#include "OVR/OpenVR/zzzz__VRControllerState_t_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x40755c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked::*)(
    ::StringW, ::StringW, ::ByRef<::OVR::OpenVR::VRControllerState_t_Packed>, ::ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>, ::ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>)>(
    &::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4075668;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked::*)(::StringW, ::StringW, ::ByRef<::OVR::OpenVR::VRControllerState_t_Packed>, ::ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>,
                                                                ::ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked::BeginInvoke)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x407567c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked::*)(
    ::ByRef<::OVR::OpenVR::VRControllerState_t_Packed>, ::ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>, ::ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x407577c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*>::get(), 15));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::CVRRenderModels__GetComponentStatePacked::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::CVRRenderModels__GetComponentStatePacked::Invoke(::StringW pchRenderModelName, ::StringW pchComponentName, ::ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState,
                                                                          ::ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState,
                                                                          ::ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pchRenderModelName, pchComponentName, pControllerState, pState, pComponentState);
}
inline ::System::IAsyncResult* OVR::OpenVR::CVRRenderModels__GetComponentStatePacked::BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName,
                                                                                                  ::ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState,
                                                                                                  ::ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState,
                                                                                                  ::ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState,
                                                                                                  ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchRenderModelName, pchComponentName, pControllerState, pState, pComponentState, callback,
                                                                             object);
}
inline bool OVR::OpenVR::CVRRenderModels__GetComponentStatePacked::EndInvoke(::ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState,
                                                                             ::ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState,
                                                                             ::ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pControllerState, pState, pComponentState, result);
}
inline ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked* OVR::OpenVR::CVRRenderModels__GetComponentStatePacked::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked::CVRRenderModels__GetComponentStatePacked() {}
constexpr ::OVR::OpenVR::IVRRenderModels__GetComponentState*& OVR::OpenVR::CVRRenderModels_GetComponentStateUnion::__cordl_internal_get_pGetComponentState() {
  return this->___pGetComponentState;
}
constexpr ::OVR::OpenVR::IVRRenderModels__GetComponentState* const& OVR::OpenVR::CVRRenderModels_GetComponentStateUnion::__cordl_internal_get_pGetComponentState() const {
  return this->___pGetComponentState;
}
constexpr void OVR::OpenVR::CVRRenderModels_GetComponentStateUnion::__cordl_internal_set_pGetComponentState(::OVR::OpenVR::IVRRenderModels__GetComponentState* value) {
  this->___pGetComponentState = value;
}
constexpr ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*& OVR::OpenVR::CVRRenderModels_GetComponentStateUnion::__cordl_internal_get_pGetComponentStatePacked() {
  return this->___pGetComponentStatePacked;
}
constexpr ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked* const& OVR::OpenVR::CVRRenderModels_GetComponentStateUnion::__cordl_internal_get_pGetComponentStatePacked() const {
  return this->___pGetComponentStatePacked;
}
constexpr void OVR::OpenVR::CVRRenderModels_GetComponentStateUnion::__cordl_internal_set_pGetComponentStatePacked(::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked* value) {
  this->___pGetComponentStatePacked = value;
}
// Ctor Parameters [CppParam { name: "pGetComponentState", ty: "::OVR::OpenVR::IVRRenderModels__GetComponentState*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "pGetComponentStatePacked", ty: "::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::CVRRenderModels_GetComponentStateUnion::CVRRenderModels_GetComponentStateUnion(::OVR::OpenVR::IVRRenderModels__GetComponentState* pGetComponentState,
                                                                                                        ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked* pGetComponentStatePacked) noexcept {
  this->pGetComponentState = pGetComponentState;
  this->pGetComponentStatePacked = pGetComponentStatePacked;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRRenderModels_GetComponentStateUnion::CVRRenderModels_GetComponentStateUnion() {}
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRRenderModels::*)(::System::IntPtr)>(&::OVR::OpenVR::CVRRenderModels::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x4075094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.LoadRenderModel_Async
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRRenderModelError (::OVR::OpenVR::CVRRenderModels::*)(::StringW, ::ByRef<::System::IntPtr>)>(
    &::OVR::OpenVR::CVRRenderModels::LoadRenderModel_Async)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x40751a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "LoadRenderModel_Async", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IntPtr>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.FreeRenderModel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRRenderModels::*)(::System::IntPtr)>(&::OVR::OpenVR::CVRRenderModels::FreeRenderModel)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x40751cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "FreeRenderModel", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.LoadTexture_Async
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRRenderModelError (::OVR::OpenVR::CVRRenderModels::*)(int32_t, ::ByRef<::System::IntPtr>)>(
    &::OVR::OpenVR::CVRRenderModels::LoadTexture_Async)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x40751f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "LoadTexture_Async", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IntPtr>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.FreeTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRRenderModels::*)(::System::IntPtr)>(&::OVR::OpenVR::CVRRenderModels::FreeTexture)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4075214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "FreeTexture", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.LoadTextureD3D11_Async
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRRenderModelError (::OVR::OpenVR::CVRRenderModels::*)(
    int32_t, ::System::IntPtr, ::ByRef<::System::IntPtr>)>(&::OVR::OpenVR::CVRRenderModels::LoadTextureD3D11_Async)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4075238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "LoadTextureD3D11_Async", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IntPtr>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.LoadIntoTextureD3D11_Async
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRRenderModelError (::OVR::OpenVR::CVRRenderModels::*)(int32_t, ::System::IntPtr)>(
    &::OVR::OpenVR::CVRRenderModels::LoadIntoTextureD3D11_Async)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x407525c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "LoadIntoTextureD3D11_Async", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.FreeTextureD3D11
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRRenderModels::*)(::System::IntPtr)>(&::OVR::OpenVR::CVRRenderModels::FreeTextureD3D11)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4075280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "FreeTextureD3D11", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.GetRenderModelName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::CVRRenderModels::*)(uint32_t, ::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::CVRRenderModels::GetRenderModelName)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x40752a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "GetRenderModelName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.GetRenderModelCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::CVRRenderModels::*)()>(&::OVR::OpenVR::CVRRenderModels::GetRenderModelCount)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x40752c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "GetRenderModelCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.GetComponentCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::CVRRenderModels::*)(::StringW)>(&::OVR::OpenVR::CVRRenderModels::GetComponentCount)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x40752ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "GetComponentCount", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.GetComponentName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::CVRRenderModels::*)(::StringW, uint32_t, ::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::CVRRenderModels::GetComponentName)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4075310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "GetComponentName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.GetComponentButtonMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::CVRRenderModels::*)(::StringW, ::StringW)>(
    &::OVR::OpenVR::CVRRenderModels::GetComponentButtonMask)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4075334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "GetComponentButtonMask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.GetComponentRenderModelName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::CVRRenderModels::*)(::StringW, ::StringW, ::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::CVRRenderModels::GetComponentRenderModelName)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4075358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "GetComponentRenderModelName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.GetComponentStateForDevicePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRRenderModels::*)(
    ::StringW, ::StringW, uint64_t, ::ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>, ::ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>)>(
    &::OVR::OpenVR::CVRRenderModels::GetComponentStateForDevicePath)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x407537c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "GetComponentStateForDevicePath", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.GetComponentState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRRenderModels::*)(
    ::StringW, ::StringW, ::ByRef<::OVR::OpenVR::VRControllerState_t>, ::ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>, ::ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>)>(
    &::OVR::OpenVR::CVRRenderModels::GetComponentState)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x40753a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "GetComponentState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::VRControllerState_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.RenderModelHasComponent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRRenderModels::*)(::StringW, ::StringW)>(
    &::OVR::OpenVR::CVRRenderModels::RenderModelHasComponent)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x40754d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "RenderModelHasComponent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.GetRenderModelThumbnailURL
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::CVRRenderModels::*)(
    ::StringW, ::System::Text::StringBuilder*, uint32_t, ::ByRef<::OVR::OpenVR::EVRRenderModelError>)>(&::OVR::OpenVR::CVRRenderModels::GetRenderModelThumbnailURL)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x40754fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "GetRenderModelThumbnailURL", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::EVRRenderModelError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.GetRenderModelOriginalPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::CVRRenderModels::*)(
    ::StringW, ::System::Text::StringBuilder*, uint32_t, ::ByRef<::OVR::OpenVR::EVRRenderModelError>)>(&::OVR::OpenVR::CVRRenderModels::GetRenderModelOriginalPath)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4075520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "GetRenderModelOriginalPath", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::EVRRenderModelError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.GetRenderModelErrorNameFromEnum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OVR::OpenVR::CVRRenderModels::*)(::OVR::OpenVR::EVRRenderModelError)>(
    &::OVR::OpenVR::CVRRenderModels::GetRenderModelErrorNameFromEnum)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4075544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "GetRenderModelErrorNameFromEnum", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRRenderModelError>::get() })));
    return ___internal_method;
  }
};
constexpr ::OVR::OpenVR::IVRRenderModels& OVR::OpenVR::CVRRenderModels::__cordl_internal_get_FnTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr ::OVR::OpenVR::IVRRenderModels const& OVR::OpenVR::CVRRenderModels::__cordl_internal_get_FnTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr void OVR::OpenVR::CVRRenderModels::__cordl_internal_set_FnTable(::OVR::OpenVR::IVRRenderModels value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FnTable = value;
}
inline void OVR::OpenVR::CVRRenderModels::_ctor(::System::IntPtr pInterface) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pInterface);
}
inline ::OVR::OpenVR::EVRRenderModelError OVR::OpenVR::CVRRenderModels::LoadRenderModel_Async(::StringW pchRenderModelName, ::ByRef<::System::IntPtr> ppRenderModel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "LoadRenderModel_Async", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IntPtr>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRRenderModelError, false>(this, ___internal_method, pchRenderModelName, ppRenderModel);
}
inline void OVR::OpenVR::CVRRenderModels::FreeRenderModel(::System::IntPtr pRenderModel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "FreeRenderModel", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pRenderModel);
}
inline ::OVR::OpenVR::EVRRenderModelError OVR::OpenVR::CVRRenderModels::LoadTexture_Async(int32_t textureId, ::ByRef<::System::IntPtr> ppTexture) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "LoadTexture_Async", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IntPtr>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRRenderModelError, false>(this, ___internal_method, textureId, ppTexture);
}
inline void OVR::OpenVR::CVRRenderModels::FreeTexture(::System::IntPtr pTexture) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "FreeTexture", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pTexture);
}
inline ::OVR::OpenVR::EVRRenderModelError OVR::OpenVR::CVRRenderModels::LoadTextureD3D11_Async(int32_t textureId, ::System::IntPtr pD3D11Device, ::ByRef<::System::IntPtr> ppD3D11Texture2D) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "LoadTextureD3D11_Async", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::IntPtr>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRRenderModelError, false>(this, ___internal_method, textureId, pD3D11Device, ppD3D11Texture2D);
}
inline ::OVR::OpenVR::EVRRenderModelError OVR::OpenVR::CVRRenderModels::LoadIntoTextureD3D11_Async(int32_t textureId, ::System::IntPtr pDstTexture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "LoadIntoTextureD3D11_Async", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRRenderModelError, false>(this, ___internal_method, textureId, pDstTexture);
}
inline void OVR::OpenVR::CVRRenderModels::FreeTextureD3D11(::System::IntPtr pD3D11Texture2D) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "FreeTextureD3D11", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pD3D11Texture2D);
}
inline uint32_t OVR::OpenVR::CVRRenderModels::GetRenderModelName(uint32_t unRenderModelIndex, ::System::Text::StringBuilder* pchRenderModelName, uint32_t unRenderModelNameLen) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "GetRenderModelName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, unRenderModelIndex, pchRenderModelName, unRenderModelNameLen);
}
inline uint32_t OVR::OpenVR::CVRRenderModels::GetRenderModelCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "GetRenderModelCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline uint32_t OVR::OpenVR::CVRRenderModels::GetComponentCount(::StringW pchRenderModelName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "GetComponentCount", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pchRenderModelName);
}
inline uint32_t OVR::OpenVR::CVRRenderModels::GetComponentName(::StringW pchRenderModelName, uint32_t unComponentIndex, ::System::Text::StringBuilder* pchComponentName, uint32_t unComponentNameLen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "GetComponentName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pchRenderModelName, unComponentIndex, pchComponentName, unComponentNameLen);
}
inline uint64_t OVR::OpenVR::CVRRenderModels::GetComponentButtonMask(::StringW pchRenderModelName, ::StringW pchComponentName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "GetComponentButtonMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, pchRenderModelName, pchComponentName);
}
inline uint32_t OVR::OpenVR::CVRRenderModels::GetComponentRenderModelName(::StringW pchRenderModelName, ::StringW pchComponentName, ::System::Text::StringBuilder* pchComponentRenderModelName,
                                                                          uint32_t unComponentRenderModelNameLen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "GetComponentRenderModelName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pchRenderModelName, pchComponentName, pchComponentRenderModelName, unComponentRenderModelNameLen);
}
inline bool OVR::OpenVR::CVRRenderModels::GetComponentStateForDevicePath(::StringW pchRenderModelName, ::StringW pchComponentName, uint64_t devicePath,
                                                                         ::ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState,
                                                                         ::ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "GetComponentStateForDevicePath", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pchRenderModelName, pchComponentName, devicePath, pState, pComponentState);
}
inline bool OVR::OpenVR::CVRRenderModels::GetComponentState(::StringW pchRenderModelName, ::StringW pchComponentName, ::ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState,
                                                            ::ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ::ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "GetComponentState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::VRControllerState_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::RenderModel_ComponentState_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pchRenderModelName, pchComponentName, pControllerState, pState, pComponentState);
}
inline bool OVR::OpenVR::CVRRenderModels::RenderModelHasComponent(::StringW pchRenderModelName, ::StringW pchComponentName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "RenderModelHasComponent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pchRenderModelName, pchComponentName);
}
inline uint32_t OVR::OpenVR::CVRRenderModels::GetRenderModelThumbnailURL(::StringW pchRenderModelName, ::System::Text::StringBuilder* pchThumbnailURL, uint32_t unThumbnailURLLen,
                                                                         ::ByRef<::OVR::OpenVR::EVRRenderModelError> peError) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "GetRenderModelThumbnailURL", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::EVRRenderModelError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pchRenderModelName, pchThumbnailURL, unThumbnailURLLen, peError);
}
inline uint32_t OVR::OpenVR::CVRRenderModels::GetRenderModelOriginalPath(::StringW pchRenderModelName, ::System::Text::StringBuilder* pchOriginalPath, uint32_t unOriginalPathLen,
                                                                         ::ByRef<::OVR::OpenVR::EVRRenderModelError> peError) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "GetRenderModelOriginalPath", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::OVR::OpenVR::EVRRenderModelError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pchRenderModelName, pchOriginalPath, unOriginalPathLen, peError);
}
inline ::StringW OVR::OpenVR::CVRRenderModels::GetRenderModelErrorNameFromEnum(::OVR::OpenVR::EVRRenderModelError error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRRenderModels*>::get(), "GetRenderModelErrorNameFromEnum", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRRenderModelError>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, error);
}
inline ::OVR::OpenVR::CVRRenderModels* OVR::OpenVR::CVRRenderModels::New_ctor(::System::IntPtr pInterface) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::CVRRenderModels*>(pInterface));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRRenderModels::CVRRenderModels() {}
