#pragma once
// IWYU pragma private; include "OVR\OpenVR\IVRChaperoneSetup.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVRChaperoneSetup_def.hpp"
#include "OVR/OpenVR/zzzz__EChaperoneConfigFile_def.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix34_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdQuad_t_def.hpp"
#include "OVR/OpenVR/zzzz__IVRChaperoneSetup_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e32e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy::*)(::OVR::OpenVR::EChaperoneConfigFile)>(
    &::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e32e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy::*)(::OVR::OpenVR::EChaperoneConfigFile, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e32e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e32f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy::Invoke(::OVR::OpenVR::EChaperoneConfigFile configFile) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, configFile);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy::BeginInvoke(::OVR::OpenVR::EChaperoneConfigFile configFile, ::System::AsyncCallback* callback,
                                                                                              ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, configFile, callback, object);
}
inline bool OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy* OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy::IVRChaperoneSetup__CommitWorkingCopy() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e32f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy::*)()>(&::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e32fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e32fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e32fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy* OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy::IVRChaperoneSetup__RevertWorkingCopy() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e32fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize::*)(::by_ref<float_t>, ::by_ref<float_t>)>(
    &::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e33064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize::*)(::by_ref<float_t>, ::by_ref<float_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize::BeginInvoke)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e33078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize::*)(::by_ref<float_t>, ::by_ref<float_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize::EndInvoke)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e330e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize::Invoke(::by_ref<float_t> pSizeX, ::by_ref<float_t> pSizeZ) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pSizeX, pSizeZ);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize::BeginInvoke(::by_ref<float_t> pSizeX, ::by_ref<float_t> pSizeZ, ::System::AsyncCallback* callback,
                                                                                                   ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pSizeX, pSizeZ, callback, object);
}
inline bool OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize::EndInvoke(::by_ref<float_t> pSizeX, ::by_ref<float_t> pSizeZ, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pSizeX, pSizeZ, result);
}
inline ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize* OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize::IVRChaperoneSetup__GetWorkingPlayAreaSize() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e33118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect::*)(::by_ref<::OVR::OpenVR::HmdQuad_t>)>(
    &::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e33194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect::*)(::by_ref<::OVR::OpenVR::HmdQuad_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e331a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect::*)(::by_ref<::OVR::OpenVR::HmdQuad_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e33238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect::Invoke(::by_ref<::OVR::OpenVR::HmdQuad_t> rect) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rect);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect::BeginInvoke(::by_ref<::OVR::OpenVR::HmdQuad_t> rect, ::System::AsyncCallback* callback,
                                                                                                   ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, rect, callback, object);
}
inline bool OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect::EndInvoke(::by_ref<::OVR::OpenVR::HmdQuad_t> rect, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rect, result);
}
inline ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect* OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect::IVRChaperoneSetup__GetWorkingPlayAreaRect() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3325c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo::*)(::by_ref<::ArrayW<::OVR::OpenVR::HmdQuad_t>>, ::by_ref<uint32_t>)>(
    &::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e332dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo::*)(::by_ref<::ArrayW<::OVR::OpenVR::HmdQuad_t>>, ::by_ref<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo::BeginInvoke)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e332f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo::*)(::by_ref<uint32_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e33348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo::Invoke(::by_ref<::ArrayW<::OVR::OpenVR::HmdQuad_t>> pQuadsBuffer, ::by_ref<uint32_t> punQuadsCount) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pQuadsBuffer, punQuadsCount);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo::BeginInvoke(::by_ref<::ArrayW<::OVR::OpenVR::HmdQuad_t>> pQuadsBuffer, ::by_ref<uint32_t> punQuadsCount,
                                                                                                          ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pQuadsBuffer, punQuadsCount, callback, object);
}
inline bool OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo::EndInvoke(::by_ref<uint32_t> punQuadsCount, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, punQuadsCount, result);
}
inline ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo* OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3336c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo::*)(::by_ref<::ArrayW<::OVR::OpenVR::HmdQuad_t>>, ::by_ref<uint32_t>)>(
    &::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e333ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo::*)(::by_ref<::ArrayW<::OVR::OpenVR::HmdQuad_t>>, ::by_ref<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo::BeginInvoke)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e33400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo::*)(::by_ref<uint32_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e33458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo::Invoke(::by_ref<::ArrayW<::OVR::OpenVR::HmdQuad_t>> pQuadsBuffer, ::by_ref<uint32_t> punQuadsCount) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pQuadsBuffer, punQuadsCount);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo::BeginInvoke(::by_ref<::ArrayW<::OVR::OpenVR::HmdQuad_t>> pQuadsBuffer, ::by_ref<uint32_t> punQuadsCount,
                                                                                                       ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pQuadsBuffer, punQuadsCount, callback, object);
}
inline bool OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo::EndInvoke(::by_ref<uint32_t> punQuadsCount, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, punQuadsCount, result);
}
inline ::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo* OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo::IVRChaperoneSetup__GetLiveCollisionBoundsInfo() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e3347c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose::*)(::by_ref<::OVR::OpenVR::HmdMatrix34_t>)>(
    &::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e334f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose::*)(::by_ref<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e3350c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose::*)(
    ::by_ref<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3359c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose::Invoke(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pmatSeatedZeroPoseToRawTrackingPose);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose::BeginInvoke(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose,
                                                                                                                      ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pmatSeatedZeroPoseToRawTrackingPose, callback, object);
}
inline bool OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose::EndInvoke(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose,
                                                                                                 ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pmatSeatedZeroPoseToRawTrackingPose, result);
}
inline ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose* OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose::New_ctor(::System::Object* object,
                                                                                                                                                                        ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e335c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose::*)(::by_ref<::OVR::OpenVR::HmdMatrix34_t>)>(
    &::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3363c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose::*)(::by_ref<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e33650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose::*)(
    ::by_ref<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e336e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose::Invoke(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatStandingZeroPoseToRawTrackingPose) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pmatStandingZeroPoseToRawTrackingPose);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose::BeginInvoke(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatStandingZeroPoseToRawTrackingPose,
                                                                                                                        ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pmatStandingZeroPoseToRawTrackingPose, callback, object);
}
inline bool OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose::EndInvoke(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatStandingZeroPoseToRawTrackingPose,
                                                                                                   ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pmatStandingZeroPoseToRawTrackingPose, result);
}
inline ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose* OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose::New_ctor(::System::Object* object,
                                                                                                                                                                            ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e33704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize::*)(float_t, float_t)>(
    &::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e33770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize::*)(float_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize::BeginInvoke)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e33784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e337f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize::Invoke(float_t sizeX, float_t sizeZ) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sizeX, sizeZ);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize::BeginInvoke(float_t sizeX, float_t sizeZ, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, sizeX, sizeZ, callback, object);
}
inline void OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize* OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize::IVRChaperoneSetup__SetWorkingPlayAreaSize() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e33800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo::*)(::by_ref<::ArrayW<::OVR::OpenVR::HmdQuad_t>>, uint32_t)>(
    &::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e33880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo::*)(::by_ref<::ArrayW<::OVR::OpenVR::HmdQuad_t>>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo::BeginInvoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e33894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e338f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo::Invoke(::by_ref<::ArrayW<::OVR::OpenVR::HmdQuad_t>> pQuadsBuffer, uint32_t unQuadsCount) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pQuadsBuffer, unQuadsCount);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo::BeginInvoke(::by_ref<::ArrayW<::OVR::OpenVR::HmdQuad_t>> pQuadsBuffer, uint32_t unQuadsCount,
                                                                                                          ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pQuadsBuffer, unQuadsCount, callback, object);
}
inline void OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo* OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e338fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose::*)(::by_ref<::OVR::OpenVR::HmdMatrix34_t>)>(
    &::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e33978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose::*)(::by_ref<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e3398c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose::*)(
    ::by_ref<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose::EndInvoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e33a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose::Invoke(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pMatSeatedZeroPoseToRawTrackingPose) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pMatSeatedZeroPoseToRawTrackingPose);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose::BeginInvoke(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pMatSeatedZeroPoseToRawTrackingPose,
                                                                                                                      ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pMatSeatedZeroPoseToRawTrackingPose, callback, object);
}
inline void OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose::EndInvoke(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pMatSeatedZeroPoseToRawTrackingPose,
                                                                                                 ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pMatSeatedZeroPoseToRawTrackingPose, result);
}
inline ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose* OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose::New_ctor(::System::Object* object,
                                                                                                                                                                        ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e33a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose::*)(::by_ref<::OVR::OpenVR::HmdMatrix34_t>)>(
    &::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e33ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose::*)(::by_ref<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e33ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose::*)(
    ::by_ref<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose::EndInvoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e33b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose::Invoke(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pMatStandingZeroPoseToRawTrackingPose) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pMatStandingZeroPoseToRawTrackingPose);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose::BeginInvoke(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pMatStandingZeroPoseToRawTrackingPose,
                                                                                                                        ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pMatStandingZeroPoseToRawTrackingPose, callback, object);
}
inline void OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose::EndInvoke(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pMatStandingZeroPoseToRawTrackingPose,
                                                                                                   ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pMatStandingZeroPoseToRawTrackingPose, result);
}
inline ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose* OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose::New_ctor(::System::Object* object,
                                                                                                                                                                            ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e33b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk::*)(::OVR::OpenVR::EChaperoneConfigFile)>(
    &::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e33bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk*>(), { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk::*)(::OVR::OpenVR::EChaperoneConfigFile, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e33bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk*>(), { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e33c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk*>(), { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk::Invoke(::OVR::OpenVR::EChaperoneConfigFile configFile) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, configFile);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk::BeginInvoke(::OVR::OpenVR::EChaperoneConfigFile configFile, ::System::AsyncCallback* callback,
                                                                                           ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, configFile, callback, object);
}
inline void OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk* OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk::IVRChaperoneSetup__ReloadFromDisk() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e33c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose::*)(::by_ref<::OVR::OpenVR::HmdMatrix34_t>)>(
    &::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e33cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose::*)(::by_ref<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e33d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose::*)(
    ::by_ref<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e33da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose::Invoke(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pmatSeatedZeroPoseToRawTrackingPose);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose::BeginInvoke(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose,
                                                                                                                   ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pmatSeatedZeroPoseToRawTrackingPose, callback, object);
}
inline bool OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose::EndInvoke(::by_ref<::OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose,
                                                                                              ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pmatSeatedZeroPoseToRawTrackingPose, result);
}
inline ::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose* OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose::New_ctor(::System::Object* object,
                                                                                                                                                                  ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e33dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo::*)(::by_ref<::ArrayW<uint8_t>>, uint32_t)>(
    &::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e33e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo::*)(::by_ref<::ArrayW<uint8_t>>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo::BeginInvoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e33e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e33eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo::Invoke(::by_ref<::ArrayW<uint8_t>> pTagsBuffer, uint32_t unTagCount) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pTagsBuffer, unTagCount);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo::BeginInvoke(::by_ref<::ArrayW<uint8_t>> pTagsBuffer, uint32_t unTagCount,
                                                                                                              ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pTagsBuffer, unTagCount, callback, object);
}
inline void OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo* OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo::New_ctor(::System::Object* object,
                                                                                                                                                        ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e33ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo::*)(::by_ref<::ArrayW<uint8_t>>, ::by_ref<uint32_t>)>(
    &::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e33f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo::*)(::by_ref<::ArrayW<uint8_t>>, ::by_ref<uint32_t>,
                                                                                                                                                     ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo::BeginInvoke)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e33f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo::*)(::by_ref<uint32_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e33fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo::Invoke(::by_ref<::ArrayW<uint8_t>> pTagsBuffer, ::by_ref<uint32_t> punTagCount) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pTagsBuffer, punTagCount);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo::BeginInvoke(::by_ref<::ArrayW<uint8_t>> pTagsBuffer, ::by_ref<uint32_t> punTagCount,
                                                                                                           ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pTagsBuffer, punTagCount, callback, object);
}
inline bool OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo::EndInvoke(::by_ref<uint32_t> punTagCount, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, punTagCount, result);
}
inline ::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo* OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e33fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo::*)(::by_ref<::ArrayW<::OVR::OpenVR::HmdQuad_t>>, uint32_t)>(
    &::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e34050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo::*)(::by_ref<::ArrayW<::OVR::OpenVR::HmdQuad_t>>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo::BeginInvoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e34064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e340c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo::Invoke(::by_ref<::ArrayW<::OVR::OpenVR::HmdQuad_t>> pQuadsBuffer, uint32_t unQuadsCount) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pQuadsBuffer, unQuadsCount);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo::BeginInvoke(::by_ref<::ArrayW<::OVR::OpenVR::HmdQuad_t>> pQuadsBuffer, uint32_t unQuadsCount,
                                                                                                         ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pQuadsBuffer, unQuadsCount, callback, object);
}
inline bool OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo* OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e340e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo::*)(::by_ref<::ArrayW<::OVR::OpenVR::HmdQuad_t>>, ::by_ref<uint32_t>)>(
    &::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e34164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo::*)(::by_ref<::ArrayW<::OVR::OpenVR::HmdQuad_t>>, ::by_ref<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo::BeginInvoke)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e34178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo::*)(::by_ref<uint32_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e341d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo::Invoke(::by_ref<::ArrayW<::OVR::OpenVR::HmdQuad_t>> pQuadsBuffer, ::by_ref<uint32_t> punQuadsCount) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pQuadsBuffer, punQuadsCount);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo::BeginInvoke(::by_ref<::ArrayW<::OVR::OpenVR::HmdQuad_t>> pQuadsBuffer, ::by_ref<uint32_t> punQuadsCount,
                                                                                                      ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pQuadsBuffer, punQuadsCount, callback, object);
}
inline bool OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo::EndInvoke(::by_ref<uint32_t> punQuadsCount, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, punQuadsCount, result);
}
inline ::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo* OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo::IVRChaperoneSetup__GetLivePhysicalBoundsInfo() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e341f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer::*)(::System::Text::StringBuilder*, ::by_ref<uint32_t>)>(
    &::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e34274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer::*)(::System::Text::StringBuilder*, ::by_ref<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer::BeginInvoke)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e34288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer::*)(::by_ref<uint32_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e342e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer::Invoke(::System::Text::StringBuilder* pBuffer, ::by_ref<uint32_t> pnBufferLength) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pBuffer, pnBufferLength);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer::BeginInvoke(::System::Text::StringBuilder* pBuffer, ::by_ref<uint32_t> pnBufferLength,
                                                                                               ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pBuffer, pnBufferLength, callback, object);
}
inline bool OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer::EndInvoke(::by_ref<uint32_t> pnBufferLength, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pnBufferLength, result);
}
inline ::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer* OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer::IVRChaperoneSetup__ExportLiveToBuffer() {}
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e34304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking::*)(::StringW, uint32_t)>(
    &::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e34384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking::*)(::StringW, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking::BeginInvoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e34398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e343f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking*>(),
                                                                                          { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking*>(), 15 }));
    return ___internal_method;
  }
};
inline void OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking::Invoke(::StringW pBuffer, uint32_t nImportFlags) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pBuffer, nImportFlags);
}
inline ::System::IAsyncResult* OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking::BeginInvoke(::StringW pBuffer, uint32_t nImportFlags, ::System::AsyncCallback* callback,
                                                                                                      ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, pBuffer, nImportFlags, callback, object);
}
inline bool OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking* OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking*>(object, method));
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking::IVRChaperoneSetup__ImportFromBufferToWorking() {}
// Ctor Parameters [CppParam { name: "CommitWorkingCopy", ty: "::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy*", modifiers: "", def_value: Some("{}") }, CppParam { name: "RevertWorkingCopy", ty:
// "::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetWorkingPlayAreaSize", ty:
// "::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetWorkingPlayAreaRect", ty:
// "::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetWorkingCollisionBoundsInfo", ty:
// "::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetLiveCollisionBoundsInfo", ty:
// "::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetWorkingSeatedZeroPoseToRawTrackingPose", ty:
// "::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetWorkingStandingZeroPoseToRawTrackingPose", ty:
// "::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetWorkingPlayAreaSize", ty:
// "::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetWorkingCollisionBoundsInfo", ty:
// "::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetWorkingSeatedZeroPoseToRawTrackingPose", ty:
// "::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetWorkingStandingZeroPoseToRawTrackingPose", ty:
// "::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ReloadFromDisk", ty:
// "::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetLiveSeatedZeroPoseToRawTrackingPose", ty:
// "::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetWorkingCollisionBoundsTagsInfo", ty:
// "::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetLiveCollisionBoundsTagsInfo", ty:
// "::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SetWorkingPhysicalBoundsInfo", ty:
// "::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo*", modifiers: "", def_value: Some("{}") }, CppParam { name: "GetLivePhysicalBoundsInfo", ty:
// "::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ExportLiveToBuffer", ty:
// "::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ImportFromBufferToWorking", ty:
// "::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking*", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::IVRChaperoneSetup::IVRChaperoneSetup(
    ::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy* CommitWorkingCopy, ::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy* RevertWorkingCopy,
    ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize* GetWorkingPlayAreaSize, ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect* GetWorkingPlayAreaRect,
    ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo* GetWorkingCollisionBoundsInfo, ::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo* GetLiveCollisionBoundsInfo,
    ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose* GetWorkingSeatedZeroPoseToRawTrackingPose,
    ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose* GetWorkingStandingZeroPoseToRawTrackingPose,
    ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize* SetWorkingPlayAreaSize, ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo* SetWorkingCollisionBoundsInfo,
    ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose* SetWorkingSeatedZeroPoseToRawTrackingPose,
    ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose* SetWorkingStandingZeroPoseToRawTrackingPose, ::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk* ReloadFromDisk,
    ::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose* GetLiveSeatedZeroPoseToRawTrackingPose,
    ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo* SetWorkingCollisionBoundsTagsInfo,
    ::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo* GetLiveCollisionBoundsTagsInfo, ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo* SetWorkingPhysicalBoundsInfo,
    ::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo* GetLivePhysicalBoundsInfo, ::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer* ExportLiveToBuffer,
    ::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking* ImportFromBufferToWorking) noexcept {
  this->CommitWorkingCopy = CommitWorkingCopy;
  this->RevertWorkingCopy = RevertWorkingCopy;
  this->GetWorkingPlayAreaSize = GetWorkingPlayAreaSize;
  this->GetWorkingPlayAreaRect = GetWorkingPlayAreaRect;
  this->GetWorkingCollisionBoundsInfo = GetWorkingCollisionBoundsInfo;
  this->GetLiveCollisionBoundsInfo = GetLiveCollisionBoundsInfo;
  this->GetWorkingSeatedZeroPoseToRawTrackingPose = GetWorkingSeatedZeroPoseToRawTrackingPose;
  this->GetWorkingStandingZeroPoseToRawTrackingPose = GetWorkingStandingZeroPoseToRawTrackingPose;
  this->SetWorkingPlayAreaSize = SetWorkingPlayAreaSize;
  this->SetWorkingCollisionBoundsInfo = SetWorkingCollisionBoundsInfo;
  this->SetWorkingSeatedZeroPoseToRawTrackingPose = SetWorkingSeatedZeroPoseToRawTrackingPose;
  this->SetWorkingStandingZeroPoseToRawTrackingPose = SetWorkingStandingZeroPoseToRawTrackingPose;
  this->ReloadFromDisk = ReloadFromDisk;
  this->GetLiveSeatedZeroPoseToRawTrackingPose = GetLiveSeatedZeroPoseToRawTrackingPose;
  this->SetWorkingCollisionBoundsTagsInfo = SetWorkingCollisionBoundsTagsInfo;
  this->GetLiveCollisionBoundsTagsInfo = GetLiveCollisionBoundsTagsInfo;
  this->SetWorkingPhysicalBoundsInfo = SetWorkingPhysicalBoundsInfo;
  this->GetLivePhysicalBoundsInfo = GetLivePhysicalBoundsInfo;
  this->ExportLiveToBuffer = ExportLiveToBuffer;
  this->ImportFromBufferToWorking = ImportFromBufferToWorking;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVRChaperoneSetup::IVRChaperoneSetup() {}
