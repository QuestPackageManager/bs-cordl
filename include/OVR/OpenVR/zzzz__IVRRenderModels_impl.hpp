#pragma once
// IWYU pragma private; include "OVR\OpenVR\IVRRenderModels.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3d020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRRenderModelError (::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async::*)(::StringW, ::by_ref<::System::IntPtr>)>(
    &::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3d0a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async::*)(::StringW, ::by_ref<::System::IntPtr>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async::BeginInvoke)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e3d0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRRenderModelError (::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async::*)(
    ::by_ref<::System::IntPtr>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3d10c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRRenderModelError OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async::Invoke(::StringW pchRenderModelName, ::by_ref<::System::IntPtr> ppRenderModel) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRRenderModelError>(this, ___internal_method, pchRenderModelName, ppRenderModel);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async::BeginInvoke(::StringW pchRenderModelName, ::by_ref<::System::IntPtr> ppRenderModel,
                                                                                                ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchRenderModelName, ppRenderModel, callback, object);
}
inline ::OVR::OpenVR::EVRRenderModelError OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async::EndInvoke(::by_ref<::System::IntPtr> ppRenderModel, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRRenderModelError>(this, ___internal_method, ppRenderModel, result);
}
inline ::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async* OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async::IVRRenderModels__LoadRenderModel_Async() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__FreeRenderModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRRenderModels__FreeRenderModel::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__FreeRenderModel::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3d130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__FreeRenderModel*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__FreeRenderModel.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRRenderModels__FreeRenderModel::*)(::System::IntPtr)>(&::OVR::OpenVR::IVRRenderModels__FreeRenderModel::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3d19c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__FreeRenderModel*>(), { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__FreeRenderModel*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__FreeRenderModel.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRRenderModels__FreeRenderModel::*)(::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRRenderModels__FreeRenderModel::BeginInvoke)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e3d1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__FreeRenderModel*>(), { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__FreeRenderModel*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__FreeRenderModel.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRRenderModels__FreeRenderModel::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRRenderModels__FreeRenderModel::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e3d204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__FreeRenderModel*>(), { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__FreeRenderModel*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__FreeRenderModel::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__FreeRenderModel*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRRenderModels__FreeRenderModel::Invoke(::System::IntPtr pRenderModel) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__FreeRenderModel*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pRenderModel);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__FreeRenderModel::BeginInvoke(::System::IntPtr pRenderModel, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__FreeRenderModel*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pRenderModel, callback, object);
}
inline void OVR::OpenVR::IVRRenderModels__FreeRenderModel::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__FreeRenderModel*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRRenderModels__FreeRenderModel* OVR::OpenVR::IVRRenderModels__FreeRenderModel::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRRenderModels__FreeRenderModel*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__FreeRenderModel::IVRRenderModels__FreeRenderModel() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__LoadTexture_Async._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRRenderModels__LoadTexture_Async::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__LoadTexture_Async::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3d210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadTexture_Async*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__LoadTexture_Async.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRRenderModelError (::OVR::OpenVR::IVRRenderModels__LoadTexture_Async::*)(int32_t, ::by_ref<::System::IntPtr>)>(
    &::OVR::OpenVR::IVRRenderModels__LoadTexture_Async::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3d27c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadTexture_Async*>(), { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadTexture_Async*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__LoadTexture_Async.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRRenderModels__LoadTexture_Async::*)(int32_t, ::by_ref<::System::IntPtr>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRRenderModels__LoadTexture_Async::BeginInvoke)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e3d290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadTexture_Async*>(), { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadTexture_Async*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__LoadTexture_Async.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRRenderModelError (::OVR::OpenVR::IVRRenderModels__LoadTexture_Async::*)(::by_ref<::System::IntPtr>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRRenderModels__LoadTexture_Async::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3d30c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadTexture_Async*>(), { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadTexture_Async*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__LoadTexture_Async::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadTexture_Async*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRRenderModelError OVR::OpenVR::IVRRenderModels__LoadTexture_Async::Invoke(int32_t textureId, ::by_ref<::System::IntPtr> ppTexture) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadTexture_Async*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRRenderModelError>(this, ___internal_method, textureId, ppTexture);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__LoadTexture_Async::BeginInvoke(int32_t textureId, ::by_ref<::System::IntPtr> ppTexture, ::System::AsyncCallback* callback,
                                                                                            ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadTexture_Async*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, textureId, ppTexture, callback, object);
}
inline ::OVR::OpenVR::EVRRenderModelError OVR::OpenVR::IVRRenderModels__LoadTexture_Async::EndInvoke(::by_ref<::System::IntPtr> ppTexture, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadTexture_Async*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRRenderModelError>(this, ___internal_method, ppTexture, result);
}
inline ::OVR::OpenVR::IVRRenderModels__LoadTexture_Async* OVR::OpenVR::IVRRenderModels__LoadTexture_Async::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRRenderModels__LoadTexture_Async*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__LoadTexture_Async::IVRRenderModels__LoadTexture_Async() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__FreeTexture._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRRenderModels__FreeTexture::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__FreeTexture::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3d330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__FreeTexture*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__FreeTexture.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRRenderModels__FreeTexture::*)(::System::IntPtr)>(&::OVR::OpenVR::IVRRenderModels__FreeTexture::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3d39c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__FreeTexture*>(), { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__FreeTexture*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__FreeTexture.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRRenderModels__FreeTexture::*)(::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRRenderModels__FreeTexture::BeginInvoke)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e3d3b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__FreeTexture*>(), { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__FreeTexture*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__FreeTexture.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRRenderModels__FreeTexture::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRRenderModels__FreeTexture::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e3d404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__FreeTexture*>(), { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__FreeTexture*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__FreeTexture::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__FreeTexture*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRRenderModels__FreeTexture::Invoke(::System::IntPtr pTexture) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__FreeTexture*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pTexture);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__FreeTexture::BeginInvoke(::System::IntPtr pTexture, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__FreeTexture*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pTexture, callback, object);
}
inline void OVR::OpenVR::IVRRenderModels__FreeTexture::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__FreeTexture*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRRenderModels__FreeTexture* OVR::OpenVR::IVRRenderModels__FreeTexture::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRRenderModels__FreeTexture*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__FreeTexture::IVRRenderModels__FreeTexture() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3d410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRRenderModelError (::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async::*)(
    int32_t, ::System::IntPtr, ::by_ref<::System::IntPtr>)>(&::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3d47c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async::*)(int32_t, ::System::IntPtr, ::by_ref<::System::IntPtr>,
                                                                                                                                           ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e3d490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRRenderModelError (::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async::*)(
    ::by_ref<::System::IntPtr>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3d520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRRenderModelError OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async::Invoke(int32_t textureId, ::System::IntPtr pD3D11Device, ::by_ref<::System::IntPtr> ppD3D11Texture2D) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRRenderModelError>(this, ___internal_method, textureId, pD3D11Device, ppD3D11Texture2D);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async::BeginInvoke(int32_t textureId, ::System::IntPtr pD3D11Device, ::by_ref<::System::IntPtr> ppD3D11Texture2D,
                                                                                                 ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, textureId, pD3D11Device, ppD3D11Texture2D, callback, object);
}
inline ::OVR::OpenVR::EVRRenderModelError OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async::EndInvoke(::by_ref<::System::IntPtr> ppD3D11Texture2D, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRRenderModelError>(this, ___internal_method, ppD3D11Texture2D, result);
}
inline ::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async* OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async::IVRRenderModels__LoadTextureD3D11_Async() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3d544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRRenderModelError (::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async::*)(int32_t, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3d5b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async::*)(int32_t, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async::BeginInvoke)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e3d5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::EVRRenderModelError (::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3d63c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRRenderModelError OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async::Invoke(int32_t textureId, ::System::IntPtr pDstTexture) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRRenderModelError>(this, ___internal_method, textureId, pDstTexture);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async::BeginInvoke(int32_t textureId, ::System::IntPtr pDstTexture, ::System::AsyncCallback* callback,
                                                                                                     ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, textureId, pDstTexture, callback, object);
}
inline ::OVR::OpenVR::EVRRenderModelError OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRRenderModelError>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async* OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async::IVRRenderModels__LoadIntoTextureD3D11_Async() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3d660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11::*)(::System::IntPtr)>(&::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3d6cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11*>(), { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11::*)(::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11::BeginInvoke)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e3d6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11*>(), { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e3d734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11*>(), { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__FreeTextureD3D11::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRRenderModels__FreeTextureD3D11::Invoke(::System::IntPtr pD3D11Texture2D) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pD3D11Texture2D);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__FreeTextureD3D11::BeginInvoke(::System::IntPtr pD3D11Texture2D, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pD3D11Texture2D, callback, object);
}
inline void OVR::OpenVR::IVRRenderModels__FreeTextureD3D11::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11* OVR::OpenVR::IVRRenderModels__FreeTextureD3D11::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11::IVRRenderModels__FreeTextureD3D11() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelName._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRRenderModels__GetRenderModelName::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__GetRenderModelName::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3d740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelName*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelName.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRRenderModels__GetRenderModelName::*)(uint32_t, ::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::IVRRenderModels__GetRenderModelName::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3d7ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelName*>(), { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelName*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelName.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRRenderModels__GetRenderModelName::*)(uint32_t, ::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRRenderModels__GetRenderModelName::BeginInvoke)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e3d7c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelName*>(), { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelName*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelName.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRRenderModels__GetRenderModelName::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRRenderModels__GetRenderModelName::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3d838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelName*>(), { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelName*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__GetRenderModelName::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelName*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRRenderModels__GetRenderModelName::Invoke(uint32_t unRenderModelIndex, ::System::Text::StringBuilder* pchRenderModelName, uint32_t unRenderModelNameLen) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelName*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, unRenderModelIndex, pchRenderModelName, unRenderModelNameLen);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__GetRenderModelName::BeginInvoke(uint32_t unRenderModelIndex, ::System::Text::StringBuilder* pchRenderModelName,
                                                                                             uint32_t unRenderModelNameLen, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelName*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, unRenderModelIndex, pchRenderModelName, unRenderModelNameLen, callback, object);
}
inline uint32_t OVR::OpenVR::IVRRenderModels__GetRenderModelName::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelName*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRRenderModels__GetRenderModelName* OVR::OpenVR::IVRRenderModels__GetRenderModelName::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRRenderModels__GetRenderModelName*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__GetRenderModelName::IVRRenderModels__GetRenderModelName() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelCount._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRRenderModels__GetRenderModelCount::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__GetRenderModelCount::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e3d85c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelCount*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelCount.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRRenderModels__GetRenderModelCount::*)()>(&::OVR::OpenVR::IVRRenderModels__GetRenderModelCount::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3d8c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelCount*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelCount*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelCount.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRRenderModels__GetRenderModelCount::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRRenderModels__GetRenderModelCount::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e3d8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelCount*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelCount*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelCount.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRRenderModels__GetRenderModelCount::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRRenderModels__GetRenderModelCount::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3d8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelCount*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelCount*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__GetRenderModelCount::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelCount*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRRenderModels__GetRenderModelCount::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelCount*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__GetRenderModelCount::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelCount*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline uint32_t OVR::OpenVR::IVRRenderModels__GetRenderModelCount::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelCount*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRRenderModels__GetRenderModelCount* OVR::OpenVR::IVRRenderModels__GetRenderModelCount::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRRenderModels__GetRenderModelCount*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__GetRenderModelCount::IVRRenderModels__GetRenderModelCount() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentCount._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRRenderModels__GetComponentCount::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentCount::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e3d918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentCount*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentCount.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRRenderModels__GetComponentCount::*)(::StringW)>(&::OVR::OpenVR::IVRRenderModels__GetComponentCount::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3d994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentCount*>(), { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentCount*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentCount.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRRenderModels__GetComponentCount::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentCount::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e3d9a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentCount*>(), { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentCount*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentCount.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRRenderModels__GetComponentCount::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentCount::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3d9c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentCount*>(), { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentCount*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__GetComponentCount::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentCount*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRRenderModels__GetComponentCount::Invoke(::StringW pchRenderModelName) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentCount*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, pchRenderModelName);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__GetComponentCount::BeginInvoke(::StringW pchRenderModelName, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentCount*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchRenderModelName, callback, object);
}
inline uint32_t OVR::OpenVR::IVRRenderModels__GetComponentCount::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentCount*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRRenderModels__GetComponentCount* OVR::OpenVR::IVRRenderModels__GetComponentCount::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRRenderModels__GetComponentCount*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__GetComponentCount::IVRRenderModels__GetComponentCount() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentName._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRRenderModels__GetComponentName::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentName::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3d9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentName*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentName.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRRenderModels__GetComponentName::*)(::StringW, uint32_t, ::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentName::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3da6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentName*>(), { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentName*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentName.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRRenderModels__GetComponentName::*)(::StringW, uint32_t, ::System::Text::StringBuilder*, uint32_t,
                                                                                                                                     ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentName::BeginInvoke)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e3da80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentName*>(), { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentName*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentName.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRRenderModels__GetComponentName::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentName::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3dafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentName*>(), { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentName*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__GetComponentName::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentName*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRRenderModels__GetComponentName::Invoke(::StringW pchRenderModelName, uint32_t unComponentIndex, ::System::Text::StringBuilder* pchComponentName,
                                                                       uint32_t unComponentNameLen) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentName*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, pchRenderModelName, unComponentIndex, pchComponentName, unComponentNameLen);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__GetComponentName::BeginInvoke(::StringW pchRenderModelName, uint32_t unComponentIndex, ::System::Text::StringBuilder* pchComponentName,
                                                                                           uint32_t unComponentNameLen, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentName*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchRenderModelName, unComponentIndex, pchComponentName, unComponentNameLen, callback, object);
}
inline uint32_t OVR::OpenVR::IVRRenderModels__GetComponentName::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentName*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRRenderModels__GetComponentName* OVR::OpenVR::IVRRenderModels__GetComponentName::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRRenderModels__GetComponentName*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__GetComponentName::IVRRenderModels__GetComponentName() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3db20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask::*)(::StringW, ::StringW)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3dba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask::*)(::StringW, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e3dbb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3dbdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__GetComponentButtonMask::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint64_t OVR::OpenVR::IVRRenderModels__GetComponentButtonMask::Invoke(::StringW pchRenderModelName, ::StringW pchComponentName) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, pchRenderModelName, pchComponentName);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__GetComponentButtonMask::BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName, ::System::AsyncCallback* callback,
                                                                                                 ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchRenderModelName, pchComponentName, callback, object);
}
inline uint64_t OVR::OpenVR::IVRRenderModels__GetComponentButtonMask::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask* OVR::OpenVR::IVRRenderModels__GetComponentButtonMask::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask::IVRRenderModels__GetComponentButtonMask() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3dc00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName::*)(::StringW, ::StringW, ::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3dc80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName::*)(::StringW, ::StringW, ::System::Text::StringBuilder*,
                                                                                                                                                uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e3dc94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3dcf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName::Invoke(::StringW pchRenderModelName, ::StringW pchComponentName, ::System::Text::StringBuilder* pchComponentRenderModelName,
                                                                                  uint32_t unComponentRenderModelNameLen) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, pchRenderModelName, pchComponentName, pchComponentRenderModelName, unComponentRenderModelNameLen);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName::BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName,
                                                                                                      ::System::Text::StringBuilder* pchComponentRenderModelName,
                                                                                                      uint32_t unComponentRenderModelNameLen, ::System::AsyncCallback* callback,
                                                                                                      ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchRenderModelName, pchComponentName, pchComponentRenderModelName, unComponentRenderModelNameLen,
                                                                      callback, object);
}
inline uint32_t OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName* OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName::IVRRenderModels__GetComponentRenderModelName() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3dd18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath::*)(
    ::StringW, ::StringW, uint64_t, ::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t>, ::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t>)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3dd98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath::*)(::StringW, ::StringW, uint64_t, ::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t>,
                                                                       ::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath::BeginInvoke)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5e3ddac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath::*)(
    ::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t>, ::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e3de9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath::Invoke(::StringW pchRenderModelName, ::StringW pchComponentName, uint64_t devicePath,
                                                                                 ::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState,
                                                                                 ::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pchRenderModelName, pchComponentName, devicePath, pState, pComponentState);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath::BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName, uint64_t devicePath,
                                                                                                         ::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState,
                                                                                                         ::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState,
                                                                                                         ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchRenderModelName, pchComponentName, devicePath, pState, pComponentState, callback, object);
}
inline bool OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath::EndInvoke(::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState,
                                                                                    ::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pState, pComponentState, result);
}
inline ::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath* OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath::IVRRenderModels__GetComponentStateForDevicePath() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRRenderModels__GetComponentState::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentState::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3decc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentState*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentState.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRRenderModels__GetComponentState::*)(
    ::StringW, ::StringW, ::by_ref<::OVR::OpenVR::VRControllerState_t>, ::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t>, ::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t>)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentState::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3df4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentState*>(), { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentState*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentState.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRRenderModels__GetComponentState::*)(::StringW, ::StringW, ::by_ref<::OVR::OpenVR::VRControllerState_t>, ::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t>,
                                                          ::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentState::BeginInvoke)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5e3df60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentState*>(), { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentState*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetComponentState.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRRenderModels__GetComponentState::*)(
    ::by_ref<::OVR::OpenVR::VRControllerState_t>, ::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t>, ::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRRenderModels__GetComponentState::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e3e06c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentState*>(), { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentState*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__GetComponentState::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentState*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRRenderModels__GetComponentState::Invoke(::StringW pchRenderModelName, ::StringW pchComponentName, ::by_ref<::OVR::OpenVR::VRControllerState_t> pControllerState,
                                                                    ::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState,
                                                                    ::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentState*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pchRenderModelName, pchComponentName, pControllerState, pState, pComponentState);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__GetComponentState::BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName,
                                                                                            ::by_ref<::OVR::OpenVR::VRControllerState_t> pControllerState,
                                                                                            ::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState,
                                                                                            ::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState, ::System::AsyncCallback* callback,
                                                                                            ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentState*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchRenderModelName, pchComponentName, pControllerState, pState, pComponentState, callback, object);
}
inline bool OVR::OpenVR::IVRRenderModels__GetComponentState::EndInvoke(::by_ref<::OVR::OpenVR::VRControllerState_t> pControllerState,
                                                                       ::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState,
                                                                       ::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetComponentState*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pControllerState, pState, pComponentState, result);
}
inline ::OVR::OpenVR::IVRRenderModels__GetComponentState* OVR::OpenVR::IVRRenderModels__GetComponentState::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRRenderModels__GetComponentState*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__GetComponentState::IVRRenderModels__GetComponentState() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3e09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent::*)(::StringW, ::StringW)>(
    &::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3e11c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent::*)(::StringW, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e3e130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3e158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__RenderModelHasComponent::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRRenderModels__RenderModelHasComponent::Invoke(::StringW pchRenderModelName, ::StringW pchComponentName) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pchRenderModelName, pchComponentName);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__RenderModelHasComponent::BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName, ::System::AsyncCallback* callback,
                                                                                                  ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchRenderModelName, pchComponentName, callback, object);
}
inline bool OVR::OpenVR::IVRRenderModels__RenderModelHasComponent::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent* OVR::OpenVR::IVRRenderModels__RenderModelHasComponent::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent::IVRRenderModels__RenderModelHasComponent() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3e17c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL::*)(
    ::StringW, ::System::Text::StringBuilder*, uint32_t, ::by_ref<::OVR::OpenVR::EVRRenderModelError>)>(&::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3e1fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL::*)(::StringW, ::System::Text::StringBuilder*, uint32_t, ::by_ref<::OVR::OpenVR::EVRRenderModelError>, ::System::AsyncCallback*,
                                                                   ::System::Object*)>(&::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL::BeginInvoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e3e210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL::*)(::by_ref<::OVR::OpenVR::EVRRenderModelError>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3e2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL::Invoke(::StringW pchRenderModelName, ::System::Text::StringBuilder* pchThumbnailURL, uint32_t unThumbnailURLLen,
                                                                                 ::by_ref<::OVR::OpenVR::EVRRenderModelError> peError) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, pchRenderModelName, pchThumbnailURL, unThumbnailURLLen, peError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL::BeginInvoke(::StringW pchRenderModelName, ::System::Text::StringBuilder* pchThumbnailURL,
                                                                                                     uint32_t unThumbnailURLLen, ::by_ref<::OVR::OpenVR::EVRRenderModelError> peError,
                                                                                                     ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchRenderModelName, pchThumbnailURL, unThumbnailURLLen, peError, callback, object);
}
inline uint32_t OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL::EndInvoke(::by_ref<::OVR::OpenVR::EVRRenderModelError> peError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, peError, result);
}
inline ::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL* OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL::IVRRenderModels__GetRenderModelThumbnailURL() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3e2f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath::*)(
    ::StringW, ::System::Text::StringBuilder*, uint32_t, ::by_ref<::OVR::OpenVR::EVRRenderModelError>)>(&::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3e374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath::*)(::StringW, ::System::Text::StringBuilder*, uint32_t, ::by_ref<::OVR::OpenVR::EVRRenderModelError>, ::System::AsyncCallback*,
                                                                   ::System::Object*)>(&::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath::BeginInvoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e3e388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath::*)(::by_ref<::OVR::OpenVR::EVRRenderModelError>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3e448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath::Invoke(::StringW pchRenderModelName, ::System::Text::StringBuilder* pchOriginalPath, uint32_t unOriginalPathLen,
                                                                                 ::by_ref<::OVR::OpenVR::EVRRenderModelError> peError) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, pchRenderModelName, pchOriginalPath, unOriginalPathLen, peError);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath::BeginInvoke(::StringW pchRenderModelName, ::System::Text::StringBuilder* pchOriginalPath,
                                                                                                     uint32_t unOriginalPathLen, ::by_ref<::OVR::OpenVR::EVRRenderModelError> peError,
                                                                                                     ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pchRenderModelName, pchOriginalPath, unOriginalPathLen, peError, callback, object);
}
inline uint32_t OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath::EndInvoke(::by_ref<::OVR::OpenVR::EVRRenderModelError> peError, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, peError, result);
}
inline ::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath* OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath::IVRRenderModels__GetRenderModelOriginalPath() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e3e46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum::*)(::OVR::OpenVR::EVRRenderModelError)>(
    &::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3e4d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum::*)(::OVR::OpenVR::EVRRenderModelError, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e3e4ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3e574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::IntPtr OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum::Invoke(::OVR::OpenVR::EVRRenderModelError error) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, error);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum::BeginInvoke(::OVR::OpenVR::EVRRenderModelError error, ::System::AsyncCallback* callback,
                                                                                                          ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, error, callback, object);
}
inline ::System::IntPtr OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum* OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum*>(object, method));
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
