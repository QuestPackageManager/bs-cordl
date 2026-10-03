#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRChaperone.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVRChaperone_def.hpp"
#include "OVR/OpenVR/zzzz__ChaperoneCalibrationState_def.hpp"
#include "OVR/OpenVR/zzzz__HmdColor_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdQuad_t_def.hpp"
#include "OVR/OpenVR/zzzz__IVRChaperone_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__GetCalibrationState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperone__GetCalibrationState::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperone__GetCalibrationState::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x624c3e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetCalibrationState*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__GetCalibrationState.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::ChaperoneCalibrationState (::OVR::OpenVR::IVRChaperone__GetCalibrationState::*)()>(
    &::OVR::OpenVR::IVRChaperone__GetCalibrationState::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x624c44c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetCalibrationState*>(), { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetCalibrationState*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__GetCalibrationState.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRChaperone__GetCalibrationState::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRChaperone__GetCalibrationState::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x624c460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetCalibrationState*>(), { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetCalibrationState*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__GetCalibrationState.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVR::OpenVR::ChaperoneCalibrationState (::OVR::OpenVR::IVRChaperone__GetCalibrationState::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRChaperone__GetCalibrationState::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x624c47c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetCalibrationState*>(), { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetCalibrationState*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperone__GetCalibrationState::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetCalibrationState*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::ChaperoneCalibrationState OVR::OpenVR::IVRChaperone__GetCalibrationState::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetCalibrationState*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::ChaperoneCalibrationState>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperone__GetCalibrationState::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetCalibrationState*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline ::OVR::OpenVR::ChaperoneCalibrationState OVR::OpenVR::IVRChaperone__GetCalibrationState::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetCalibrationState*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::ChaperoneCalibrationState>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRChaperone__GetCalibrationState* OVR::OpenVR::IVRChaperone__GetCalibrationState::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRChaperone__GetCalibrationState*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperone__GetCalibrationState::IVRChaperone__GetCalibrationState() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__GetPlayAreaSize._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperone__GetPlayAreaSize::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperone__GetPlayAreaSize::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x624c4a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetPlayAreaSize*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__GetPlayAreaSize.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRChaperone__GetPlayAreaSize::*)(::by_ref<float_t>, ::by_ref<float_t>)>(
    &::OVR::OpenVR::IVRChaperone__GetPlayAreaSize::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x624c520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetPlayAreaSize*>(), { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetPlayAreaSize*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__GetPlayAreaSize.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRChaperone__GetPlayAreaSize::*)(::by_ref<float_t>, ::by_ref<float_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRChaperone__GetPlayAreaSize::BeginInvoke)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x624c534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetPlayAreaSize*>(), { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetPlayAreaSize*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__GetPlayAreaSize.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRChaperone__GetPlayAreaSize::*)(::by_ref<float_t>, ::by_ref<float_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRChaperone__GetPlayAreaSize::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x624c5a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetPlayAreaSize*>(), { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetPlayAreaSize*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperone__GetPlayAreaSize::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetPlayAreaSize*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRChaperone__GetPlayAreaSize::Invoke(::by_ref<float_t> pSizeX, ::by_ref<float_t> pSizeZ) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetPlayAreaSize*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pSizeX, pSizeZ);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperone__GetPlayAreaSize::BeginInvoke(::by_ref<float_t> pSizeX, ::by_ref<float_t> pSizeZ, ::System::AsyncCallback* callback,
                                                                                       ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetPlayAreaSize*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pSizeX, pSizeZ, callback, object);
}
inline bool OVR::OpenVR::IVRChaperone__GetPlayAreaSize::EndInvoke(::by_ref<float_t> pSizeX, ::by_ref<float_t> pSizeZ, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetPlayAreaSize*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pSizeX, pSizeZ, result);
}
inline ::OVR::OpenVR::IVRChaperone__GetPlayAreaSize* OVR::OpenVR::IVRChaperone__GetPlayAreaSize::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRChaperone__GetPlayAreaSize*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperone__GetPlayAreaSize::IVRChaperone__GetPlayAreaSize() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__GetPlayAreaRect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperone__GetPlayAreaRect::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperone__GetPlayAreaRect::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x624c5d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetPlayAreaRect*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__GetPlayAreaRect.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRChaperone__GetPlayAreaRect::*)(::by_ref<::OVR::OpenVR::HmdQuad_t>)>(
    &::OVR::OpenVR::IVRChaperone__GetPlayAreaRect::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x624c650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetPlayAreaRect*>(), { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetPlayAreaRect*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__GetPlayAreaRect.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRChaperone__GetPlayAreaRect::*)(::by_ref<::OVR::OpenVR::HmdQuad_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::IVRChaperone__GetPlayAreaRect::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x624c664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetPlayAreaRect*>(), { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetPlayAreaRect*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__GetPlayAreaRect.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRChaperone__GetPlayAreaRect::*)(::by_ref<::OVR::OpenVR::HmdQuad_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRChaperone__GetPlayAreaRect::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x624c6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetPlayAreaRect*>(), { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetPlayAreaRect*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperone__GetPlayAreaRect::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetPlayAreaRect*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRChaperone__GetPlayAreaRect::Invoke(::by_ref<::OVR::OpenVR::HmdQuad_t> rect) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetPlayAreaRect*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rect);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperone__GetPlayAreaRect::BeginInvoke(::by_ref<::OVR::OpenVR::HmdQuad_t> rect, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetPlayAreaRect*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, rect, callback, object);
}
inline bool OVR::OpenVR::IVRChaperone__GetPlayAreaRect::EndInvoke(::by_ref<::OVR::OpenVR::HmdQuad_t> rect, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetPlayAreaRect*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rect, result);
}
inline ::OVR::OpenVR::IVRChaperone__GetPlayAreaRect* OVR::OpenVR::IVRChaperone__GetPlayAreaRect::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRChaperone__GetPlayAreaRect*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperone__GetPlayAreaRect::IVRChaperone__GetPlayAreaRect() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__ReloadInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperone__ReloadInfo::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRChaperone__ReloadInfo::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x624c718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__ReloadInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__ReloadInfo.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperone__ReloadInfo::*)()>(&::OVR::OpenVR::IVRChaperone__ReloadInfo::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x624c780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__ReloadInfo*>(), { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__ReloadInfo*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__ReloadInfo.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRChaperone__ReloadInfo::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRChaperone__ReloadInfo::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x624c794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__ReloadInfo*>(), { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__ReloadInfo*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__ReloadInfo.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperone__ReloadInfo::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRChaperone__ReloadInfo::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x624c7b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__ReloadInfo*>(), { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__ReloadInfo*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperone__ReloadInfo::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__ReloadInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRChaperone__ReloadInfo::Invoke() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__ReloadInfo*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperone__ReloadInfo::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__ReloadInfo*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::IVRChaperone__ReloadInfo::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__ReloadInfo*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRChaperone__ReloadInfo* OVR::OpenVR::IVRChaperone__ReloadInfo::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRChaperone__ReloadInfo*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperone__ReloadInfo::IVRChaperone__ReloadInfo() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__SetSceneColor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperone__SetSceneColor::*)(::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::IVRChaperone__SetSceneColor::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x624c7bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__SetSceneColor*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__SetSceneColor.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperone__SetSceneColor::*)(::OVR::OpenVR::HmdColor_t)>(&::OVR::OpenVR::IVRChaperone__SetSceneColor::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x624c828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__SetSceneColor*>(), { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__SetSceneColor*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__SetSceneColor.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRChaperone__SetSceneColor::*)(::OVR::OpenVR::HmdColor_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRChaperone__SetSceneColor::BeginInvoke)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x624c83c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__SetSceneColor*>(), { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__SetSceneColor*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__SetSceneColor.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperone__SetSceneColor::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRChaperone__SetSceneColor::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x624c8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__SetSceneColor*>(), { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__SetSceneColor*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperone__SetSceneColor::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__SetSceneColor*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRChaperone__SetSceneColor::Invoke(::OVR::OpenVR::HmdColor_t color) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__SetSceneColor*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperone__SetSceneColor::BeginInvoke(::OVR::OpenVR::HmdColor_t color, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__SetSceneColor*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, color, callback, object);
}
inline void OVR::OpenVR::IVRChaperone__SetSceneColor::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__SetSceneColor*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRChaperone__SetSceneColor* OVR::OpenVR::IVRChaperone__SetSceneColor::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRChaperone__SetSceneColor*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperone__SetSceneColor::IVRChaperone__SetSceneColor() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__GetBoundsColor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperone__GetBoundsColor::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperone__GetBoundsColor::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x624c8d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetBoundsColor*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__GetBoundsColor.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperone__GetBoundsColor::*)(
    ::by_ref<::OVR::OpenVR::HmdColor_t>, int32_t, float_t, ::by_ref<::OVR::OpenVR::HmdColor_t>)>(&::OVR::OpenVR::IVRChaperone__GetBoundsColor::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x624c954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetBoundsColor*>(), { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetBoundsColor*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__GetBoundsColor.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRChaperone__GetBoundsColor::*)(::by_ref<::OVR::OpenVR::HmdColor_t>, int32_t, float_t, ::by_ref<::OVR::OpenVR::HmdColor_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRChaperone__GetBoundsColor::BeginInvoke)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x624c968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetBoundsColor*>(), { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetBoundsColor*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__GetBoundsColor.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperone__GetBoundsColor::*)(::by_ref<::OVR::OpenVR::HmdColor_t>, ::by_ref<::OVR::OpenVR::HmdColor_t>,
                                                                                                             ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRChaperone__GetBoundsColor::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x624ca48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetBoundsColor*>(), { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetBoundsColor*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperone__GetBoundsColor::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetBoundsColor*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRChaperone__GetBoundsColor::Invoke(::by_ref<::OVR::OpenVR::HmdColor_t> pOutputColorArray, int32_t nNumOutputColors, float_t flCollisionBoundsFadeDistance,
                                                              ::by_ref<::OVR::OpenVR::HmdColor_t> pOutputCameraColor) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetBoundsColor*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pOutputColorArray, nNumOutputColors, flCollisionBoundsFadeDistance, pOutputCameraColor);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperone__GetBoundsColor::BeginInvoke(::by_ref<::OVR::OpenVR::HmdColor_t> pOutputColorArray, int32_t nNumOutputColors,
                                                                                      float_t flCollisionBoundsFadeDistance, ::by_ref<::OVR::OpenVR::HmdColor_t> pOutputCameraColor,
                                                                                      ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetBoundsColor*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pOutputColorArray, nNumOutputColors, flCollisionBoundsFadeDistance, pOutputCameraColor, callback,
                                                                      object);
}
inline void OVR::OpenVR::IVRChaperone__GetBoundsColor::EndInvoke(::by_ref<::OVR::OpenVR::HmdColor_t> pOutputColorArray, ::by_ref<::OVR::OpenVR::HmdColor_t> pOutputCameraColor,
                                                                 ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__GetBoundsColor*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pOutputColorArray, pOutputCameraColor, result);
}
inline ::OVR::OpenVR::IVRChaperone__GetBoundsColor* OVR::OpenVR::IVRChaperone__GetBoundsColor::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRChaperone__GetBoundsColor*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperone__GetBoundsColor::IVRChaperone__GetBoundsColor() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__AreBoundsVisible._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperone__AreBoundsVisible::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperone__AreBoundsVisible::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x624ca6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__AreBoundsVisible*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__AreBoundsVisible.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRChaperone__AreBoundsVisible::*)()>(&::OVR::OpenVR::IVRChaperone__AreBoundsVisible::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x624cad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__AreBoundsVisible*>(), { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__AreBoundsVisible*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__AreBoundsVisible.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRChaperone__AreBoundsVisible::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRChaperone__AreBoundsVisible::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x624cae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__AreBoundsVisible*>(), { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__AreBoundsVisible*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__AreBoundsVisible.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRChaperone__AreBoundsVisible::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::IVRChaperone__AreBoundsVisible::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x624cb04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__AreBoundsVisible*>(), { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__AreBoundsVisible*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperone__AreBoundsVisible::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__AreBoundsVisible*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRChaperone__AreBoundsVisible::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__AreBoundsVisible*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperone__AreBoundsVisible::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__AreBoundsVisible*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::IVRChaperone__AreBoundsVisible::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__AreBoundsVisible*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRChaperone__AreBoundsVisible* OVR::OpenVR::IVRChaperone__AreBoundsVisible::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRChaperone__AreBoundsVisible*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperone__AreBoundsVisible::IVRChaperone__AreBoundsVisible() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__ForceBoundsVisible._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperone__ForceBoundsVisible::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperone__ForceBoundsVisible::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x624cb28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__ForceBoundsVisible*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__ForceBoundsVisible.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperone__ForceBoundsVisible::*)(bool)>(&::OVR::OpenVR::IVRChaperone__ForceBoundsVisible::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x624cb94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__ForceBoundsVisible*>(), { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__ForceBoundsVisible*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__ForceBoundsVisible.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRChaperone__ForceBoundsVisible::*)(bool, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRChaperone__ForceBoundsVisible::BeginInvoke)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x624cba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__ForceBoundsVisible*>(), { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__ForceBoundsVisible*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperone__ForceBoundsVisible.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperone__ForceBoundsVisible::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRChaperone__ForceBoundsVisible::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x624cc00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__ForceBoundsVisible*>(), { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__ForceBoundsVisible*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperone__ForceBoundsVisible::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperone__ForceBoundsVisible*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRChaperone__ForceBoundsVisible::Invoke(bool bForce) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__ForceBoundsVisible*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bForce);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperone__ForceBoundsVisible::BeginInvoke(bool bForce, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__ForceBoundsVisible*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, bForce, callback, object);
}
inline void OVR::OpenVR::IVRChaperone__ForceBoundsVisible::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperone__ForceBoundsVisible*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRChaperone__ForceBoundsVisible* OVR::OpenVR::IVRChaperone__ForceBoundsVisible::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRChaperone__ForceBoundsVisible*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperone__ForceBoundsVisible::IVRChaperone__ForceBoundsVisible() {}
// Ctor Parameters [CppParam { name: "GetCalibrationState", ty: "::OVR::OpenVR::IVRChaperone__GetCalibrationState*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "GetPlayAreaSize", ty: "::OVR::OpenVR::IVRChaperone__GetPlayAreaSize*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GetPlayAreaRect", ty:
// "::OVR::OpenVR::IVRChaperone__GetPlayAreaRect*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ReloadInfo", ty: "::OVR::OpenVR::IVRChaperone__ReloadInfo*", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "SetSceneColor", ty: "::OVR::OpenVR::IVRChaperone__SetSceneColor*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "GetBoundsColor", ty: "::OVR::OpenVR::IVRChaperone__GetBoundsColor*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AreBoundsVisible", ty:
// "::OVR::OpenVR::IVRChaperone__AreBoundsVisible*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ForceBoundsVisible", ty:
// "::OVR::OpenVR::IVRChaperone__ForceBoundsVisible*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::OVR::OpenVR::IVRChaperone::IVRChaperone(::OVR::OpenVR::IVRChaperone__GetCalibrationState* GetCalibrationState, ::OVR::OpenVR::IVRChaperone__GetPlayAreaSize* GetPlayAreaSize,
                                                    ::OVR::OpenVR::IVRChaperone__GetPlayAreaRect* GetPlayAreaRect, ::OVR::OpenVR::IVRChaperone__ReloadInfo* ReloadInfo,
                                                    ::OVR::OpenVR::IVRChaperone__SetSceneColor* SetSceneColor, ::OVR::OpenVR::IVRChaperone__GetBoundsColor* GetBoundsColor,
                                                    ::OVR::OpenVR::IVRChaperone__AreBoundsVisible* AreBoundsVisible, ::OVR::OpenVR::IVRChaperone__ForceBoundsVisible* ForceBoundsVisible) noexcept {
  this->GetCalibrationState = GetCalibrationState;
  this->GetPlayAreaSize = GetPlayAreaSize;
  this->GetPlayAreaRect = GetPlayAreaRect;
  this->ReloadInfo = ReloadInfo;
  this->SetSceneColor = SetSceneColor;
  this->GetBoundsColor = GetBoundsColor;
  this->AreBoundsVisible = AreBoundsVisible;
  this->ForceBoundsVisible = ForceBoundsVisible;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperone::IVRChaperone() {}
