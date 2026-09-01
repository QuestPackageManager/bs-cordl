#pragma once
// IWYU pragma private; include "OVR\OpenVR\CVRRenderModels.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e46a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked::*)(
    ::StringW, ::StringW, ::by_ref<::OVR::OpenVR::VRControllerState_t_Packed>, ::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t>, ::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t>)>(
    &::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e46ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked::*)(::StringW, ::StringW, ::by_ref<::OVR::OpenVR::VRControllerState_t_Packed>, ::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t>,
                                                                ::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked::BeginInvoke)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5e46ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked::*)(
    ::by_ref<::OVR::OpenVR::VRControllerState_t_Packed>, ::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t>, ::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e46be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::CVRRenderModels__GetComponentStatePacked::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::CVRRenderModels__GetComponentStatePacked::Invoke(::StringW pchRenderModelName, ::StringW pchComponentName,
                                                                          ::by_ref<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState,
                                                                          ::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState,
                                                                          ::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pchRenderModelName, pchComponentName, pControllerState, pState, pComponentState);
}
inline ::System::IAsyncResult* OVR::OpenVR::CVRRenderModels__GetComponentStatePacked::BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName,
                                                                                                  ::by_ref<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState,
                                                                                                  ::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState,
                                                                                                  ::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState,
                                                                                                  ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchRenderModelName, pchComponentName, pControllerState, pState, pComponentState, callback, object);
}
inline bool OVR::OpenVR::CVRRenderModels__GetComponentStatePacked::EndInvoke(::by_ref<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState,
                                                                             ::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState,
                                                                             ::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pControllerState, pState, pComponentState, result);
}
inline ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked* OVR::OpenVR::CVRRenderModels__GetComponentStatePacked::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*>(object, method));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRRenderModels::*)(::System::IntPtr)>(&::OVR::OpenVR::CVRRenderModels::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5e46560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.LoadRenderModel_Async
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRRenderModelError (::OVR::OpenVR::CVRRenderModels::*)(::StringW, ::by_ref<::System::IntPtr>)>(
    &::OVR::OpenVR::CVRRenderModels::LoadRenderModel_Async)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e46660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(), { "LoadRenderModel_Async", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.FreeRenderModel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRRenderModels::*)(::System::IntPtr)>(&::OVR::OpenVR::CVRRenderModels::FreeRenderModel)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e46680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(), { "FreeRenderModel", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.LoadTexture_Async
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRRenderModelError (::OVR::OpenVR::CVRRenderModels::*)(int32_t, ::by_ref<::System::IntPtr>)>(
    &::OVR::OpenVR::CVRRenderModels::LoadTexture_Async)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e466a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(),
                                                                                           { "LoadTexture_Async", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.FreeTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRRenderModels::*)(::System::IntPtr)>(&::OVR::OpenVR::CVRRenderModels::FreeTexture)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e466c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(), { "FreeTexture", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.LoadTextureD3D11_Async
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRRenderModelError (::OVR::OpenVR::CVRRenderModels::*)(int32_t, ::System::IntPtr, ::by_ref<::System::IntPtr>)>(
    &::OVR::OpenVR::CVRRenderModels::LoadTextureD3D11_Async)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e466e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(),
                                                { "LoadTextureD3D11_Async", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.LoadIntoTextureD3D11_Async
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRRenderModelError (::OVR::OpenVR::CVRRenderModels::*)(int32_t, ::System::IntPtr)>(
    &::OVR::OpenVR::CVRRenderModels::LoadIntoTextureD3D11_Async)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e46700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(), { "LoadIntoTextureD3D11_Async", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.FreeTextureD3D11
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::CVRRenderModels::*)(::System::IntPtr)>(&::OVR::OpenVR::CVRRenderModels::FreeTextureD3D11)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e46720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(), { "FreeTextureD3D11", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.GetRenderModelName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::CVRRenderModels::*)(uint32_t, ::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::CVRRenderModels::GetRenderModelName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e46740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(),
                                                { "GetRenderModelName", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.GetRenderModelCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::CVRRenderModels::*)()>(&::OVR::OpenVR::CVRRenderModels::GetRenderModelCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e46760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(), { "GetRenderModelCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.GetComponentCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::CVRRenderModels::*)(::StringW)>(&::OVR::OpenVR::CVRRenderModels::GetComponentCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e46780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(), { "GetComponentCount", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.GetComponentName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::CVRRenderModels::*)(::StringW, uint32_t, ::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::CVRRenderModels::GetComponentName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e467a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(),
                            { "GetComponentName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.GetComponentButtonMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::OVR::OpenVR::CVRRenderModels::*)(::StringW, ::StringW)>(&::OVR::OpenVR::CVRRenderModels::GetComponentButtonMask)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e467c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(), { "GetComponentButtonMask", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.GetComponentRenderModelName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::CVRRenderModels::*)(::StringW, ::StringW, ::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::CVRRenderModels::GetComponentRenderModelName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e467e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(),
            { "GetComponentRenderModelName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.GetComponentStateForDevicePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRRenderModels::*)(::StringW, ::StringW, uint64_t, ::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t>,
                                                                                                ::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t>)>(
    &::OVR::OpenVR::CVRRenderModels::GetComponentStateForDevicePath)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e46800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(), { "GetComponentStateForDevicePath",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint64_t>(),
                                                                                                        ::i2c::type_of<::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t>>(),
                                                                                                        ::i2c::type_of<::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.GetComponentState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRRenderModels::*)(
    ::StringW, ::StringW, ::by_ref<::OVR::OpenVR::VRControllerState_t>, ::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t>, ::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t>)>(
    &::OVR::OpenVR::CVRRenderModels::GetComponentState)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5e46820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(),
                            { "GetComponentState",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::VRControllerState_t>>(),
                                ::i2c::type_of<::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t>>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.RenderModelHasComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::CVRRenderModels::*)(::StringW, ::StringW)>(&::OVR::OpenVR::CVRRenderModels::RenderModelHasComponent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e46954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(), { "RenderModelHasComponent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.GetRenderModelThumbnailURL
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::CVRRenderModels::*)(::StringW, ::System::Text::StringBuilder*, uint32_t, ::by_ref<::OVR::OpenVR::EVRRenderModelError>)>(
    &::OVR::OpenVR::CVRRenderModels::GetRenderModelThumbnailURL)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e46974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(), { "GetRenderModelThumbnailURL",
                                                                                               {},
                                                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::StringBuilder*>(),
                                                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRRenderModelError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.GetRenderModelOriginalPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::CVRRenderModels::*)(::StringW, ::System::Text::StringBuilder*, uint32_t, ::by_ref<::OVR::OpenVR::EVRRenderModelError>)>(
    &::OVR::OpenVR::CVRRenderModels::GetRenderModelOriginalPath)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e46994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(), { "GetRenderModelOriginalPath",
                                                                                               {},
                                                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::StringBuilder*>(),
                                                                                                 ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRRenderModelError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRRenderModels.GetRenderModelErrorNameFromEnum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OVR::OpenVR::CVRRenderModels::*)(::OVR::OpenVR::EVRRenderModelError)>(
    &::OVR::OpenVR::CVRRenderModels::GetRenderModelErrorNameFromEnum)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5e469b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(), { "GetRenderModelErrorNameFromEnum", {}, { ::i2c::type_of<::OVR::OpenVR::EVRRenderModelError>() } })));
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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pInterface);
}
inline ::OVR::OpenVR::EVRRenderModelError OVR::OpenVR::CVRRenderModels::LoadRenderModel_Async(::StringW pchRenderModelName, ::by_ref<::System::IntPtr> ppRenderModel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(), { "LoadRenderModel_Async", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRRenderModelError>(this, ___internal_method, pchRenderModelName, ppRenderModel);
}
inline void OVR::OpenVR::CVRRenderModels::FreeRenderModel(::System::IntPtr pRenderModel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(), { "FreeRenderModel", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pRenderModel);
}
inline ::OVR::OpenVR::EVRRenderModelError OVR::OpenVR::CVRRenderModels::LoadTexture_Async(int32_t textureId, ::by_ref<::System::IntPtr> ppTexture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(), { "LoadTexture_Async", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRRenderModelError>(this, ___internal_method, textureId, ppTexture);
}
inline void OVR::OpenVR::CVRRenderModels::FreeTexture(::System::IntPtr pTexture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(), { "FreeTexture", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pTexture);
}
inline ::OVR::OpenVR::EVRRenderModelError OVR::OpenVR::CVRRenderModels::LoadTextureD3D11_Async(int32_t textureId, ::System::IntPtr pD3D11Device, ::by_ref<::System::IntPtr> ppD3D11Texture2D) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(),
                                              { "LoadTextureD3D11_Async", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRRenderModelError>(this, ___internal_method, textureId, pD3D11Device, ppD3D11Texture2D);
}
inline ::OVR::OpenVR::EVRRenderModelError OVR::OpenVR::CVRRenderModels::LoadIntoTextureD3D11_Async(int32_t textureId, ::System::IntPtr pDstTexture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(), { "LoadIntoTextureD3D11_Async", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRRenderModelError>(this, ___internal_method, textureId, pDstTexture);
}
inline void OVR::OpenVR::CVRRenderModels::FreeTextureD3D11(::System::IntPtr pD3D11Texture2D) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(), { "FreeTextureD3D11", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pD3D11Texture2D);
}
inline uint32_t OVR::OpenVR::CVRRenderModels::GetRenderModelName(uint32_t unRenderModelIndex, ::System::Text::StringBuilder* pchRenderModelName, uint32_t unRenderModelNameLen) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(),
                                              { "GetRenderModelName", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, unRenderModelIndex, pchRenderModelName, unRenderModelNameLen);
}
inline uint32_t OVR::OpenVR::CVRRenderModels::GetRenderModelCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(), { "GetRenderModelCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline uint32_t OVR::OpenVR::CVRRenderModels::GetComponentCount(::StringW pchRenderModelName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(), { "GetComponentCount", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, pchRenderModelName);
}
inline uint32_t OVR::OpenVR::CVRRenderModels::GetComponentName(::StringW pchRenderModelName, uint32_t unComponentIndex, ::System::Text::StringBuilder* pchComponentName, uint32_t unComponentNameLen) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(),
                          { "GetComponentName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, pchRenderModelName, unComponentIndex, pchComponentName, unComponentNameLen);
}
inline uint64_t OVR::OpenVR::CVRRenderModels::GetComponentButtonMask(::StringW pchRenderModelName, ::StringW pchComponentName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(), { "GetComponentButtonMask", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, pchRenderModelName, pchComponentName);
}
inline uint32_t OVR::OpenVR::CVRRenderModels::GetComponentRenderModelName(::StringW pchRenderModelName, ::StringW pchComponentName, ::System::Text::StringBuilder* pchComponentRenderModelName,
                                                                          uint32_t unComponentRenderModelNameLen) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(),
          { "GetComponentRenderModelName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, pchRenderModelName, pchComponentName, pchComponentRenderModelName, unComponentRenderModelNameLen);
}
inline bool OVR::OpenVR::CVRRenderModels::GetComponentStateForDevicePath(::StringW pchRenderModelName, ::StringW pchComponentName, uint64_t devicePath,
                                                                         ::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState,
                                                                         ::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(), { "GetComponentStateForDevicePath",
                                                                                                                 {},
                                                                                                                 { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint64_t>(),
                                                                                                                   ::i2c::type_of<::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t>>(),
                                                                                                                   ::i2c::type_of<::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pchRenderModelName, pchComponentName, devicePath, pState, pComponentState);
}
inline bool OVR::OpenVR::CVRRenderModels::GetComponentState(::StringW pchRenderModelName, ::StringW pchComponentName, ::by_ref<::OVR::OpenVR::VRControllerState_t> pControllerState,
                                                            ::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(),
                          { "GetComponentState",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::VRControllerState_t>>(),
                              ::i2c::type_of<::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t>>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pchRenderModelName, pchComponentName, pControllerState, pState, pComponentState);
}
inline bool OVR::OpenVR::CVRRenderModels::RenderModelHasComponent(::StringW pchRenderModelName, ::StringW pchComponentName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(), { "RenderModelHasComponent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pchRenderModelName, pchComponentName);
}
inline uint32_t OVR::OpenVR::CVRRenderModels::GetRenderModelThumbnailURL(::StringW pchRenderModelName, ::System::Text::StringBuilder* pchThumbnailURL, uint32_t unThumbnailURLLen,
                                                                         ::by_ref<::OVR::OpenVR::EVRRenderModelError> peError) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(), { "GetRenderModelThumbnailURL",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::StringBuilder*>(),
                                                                                                      ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRRenderModelError>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, pchRenderModelName, pchThumbnailURL, unThumbnailURLLen, peError);
}
inline uint32_t OVR::OpenVR::CVRRenderModels::GetRenderModelOriginalPath(::StringW pchRenderModelName, ::System::Text::StringBuilder* pchOriginalPath, uint32_t unOriginalPathLen,
                                                                         ::by_ref<::OVR::OpenVR::EVRRenderModelError> peError) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(), { "GetRenderModelOriginalPath",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::StringBuilder*>(),
                                                                                                      ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::OVR::OpenVR::EVRRenderModelError>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, pchRenderModelName, pchOriginalPath, unOriginalPathLen, peError);
}
inline ::StringW OVR::OpenVR::CVRRenderModels::GetRenderModelErrorNameFromEnum(::OVR::OpenVR::EVRRenderModelError error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::CVRRenderModels*>(), { "GetRenderModelErrorNameFromEnum", {}, { ::i2c::type_of<::OVR::OpenVR::EVRRenderModelError>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, error);
}
inline ::OVR::OpenVR::CVRRenderModels* OVR::OpenVR::CVRRenderModels::New_ctor(::System::IntPtr pInterface) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::CVRRenderModels*>(pInterface));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRRenderModels::CVRRenderModels() {}
