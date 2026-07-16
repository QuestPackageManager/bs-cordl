#pragma once
// IWYU pragma private; include "Meta/XR/MetaXRFeature.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_impl.hpp"
#include "Meta/XR/zzzz__MetaXRFeature_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Meta::XR::MetaXRFeature.get_userPresent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MetaXRFeature::*)()>(&::Meta::XR::MetaXRFeature::get_userPresent)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5e4d5a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRFeature*>(), { "get_userPresent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXRFeature.HookGetInstanceProcAddr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Meta::XR::MetaXRFeature::*)(::System::IntPtr)>(&::Meta::XR::MetaXRFeature::HookGetInstanceProcAddr)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5e4d630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRFeature*>(), { ::i2c::class_of<::Meta::XR::MetaXRFeature*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXRFeature.OnInstanceCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MetaXRFeature::*)(uint64_t)>(&::Meta::XR::MetaXRFeature::OnInstanceCreate)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x5e4d760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRFeature*>(), { ::i2c::class_of<::Meta::XR::MetaXRFeature*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXRFeature.OnInstanceDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MetaXRFeature::*)(uint64_t)>(&::Meta::XR::MetaXRFeature::OnInstanceDestroy)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5e4da58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRFeature*>(), { ::i2c::class_of<::Meta::XR::MetaXRFeature*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXRFeature.OnSessionCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MetaXRFeature::*)(uint64_t)>(&::Meta::XR::MetaXRFeature::OnSessionCreate)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5e4db34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRFeature*>(), { ::i2c::class_of<::Meta::XR::MetaXRFeature*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXRFeature.OnAppSpaceChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MetaXRFeature::*)(uint64_t)>(&::Meta::XR::MetaXRFeature::OnAppSpaceChange)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5e4dc10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRFeature*>(), { ::i2c::class_of<::Meta::XR::MetaXRFeature*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXRFeature.OnSessionStateChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MetaXRFeature::*)(int32_t, int32_t)>(&::Meta::XR::MetaXRFeature::OnSessionStateChange)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5e4dcf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRFeature*>(), { ::i2c::class_of<::Meta::XR::MetaXRFeature*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXRFeature.OnSessionBegin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MetaXRFeature::*)(uint64_t)>(&::Meta::XR::MetaXRFeature::OnSessionBegin)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5e4ddf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRFeature*>(), { ::i2c::class_of<::Meta::XR::MetaXRFeature*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXRFeature.OnSessionEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MetaXRFeature::*)(uint64_t)>(&::Meta::XR::MetaXRFeature::OnSessionEnd)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5e4ded4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRFeature*>(), { ::i2c::class_of<::Meta::XR::MetaXRFeature*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXRFeature.OnSessionExiting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MetaXRFeature::*)(uint64_t)>(&::Meta::XR::MetaXRFeature::OnSessionExiting)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5e4dfb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRFeature*>(), { ::i2c::class_of<::Meta::XR::MetaXRFeature*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXRFeature.OnSessionDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MetaXRFeature::*)(uint64_t)>(&::Meta::XR::MetaXRFeature::OnSessionDestroy)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5e4e08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRFeature*>(), { ::i2c::class_of<::Meta::XR::MetaXRFeature*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MetaXRFeature._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MetaXRFeature::*)()>(&::Meta::XR::MetaXRFeature::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4e168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRFeature*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool Meta::XR::MetaXRFeature::get_userPresent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRFeature*>(), { "get_userPresent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IntPtr Meta::XR::MetaXRFeature::HookGetInstanceProcAddr(::System::IntPtr func) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::MetaXRFeature*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, func);
}
inline bool Meta::XR::MetaXRFeature::OnInstanceCreate(uint64_t xrInstance) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::MetaXRFeature*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xrInstance);
}
inline void Meta::XR::MetaXRFeature::OnInstanceDestroy(uint64_t xrInstance) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::MetaXRFeature*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrInstance);
}
inline void Meta::XR::MetaXRFeature::OnSessionCreate(uint64_t xrSession) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::MetaXRFeature*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrSession);
}
inline void Meta::XR::MetaXRFeature::OnAppSpaceChange(uint64_t xrSpace) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::MetaXRFeature*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrSpace);
}
inline void Meta::XR::MetaXRFeature::OnSessionStateChange(int32_t oldState, int32_t newState) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::MetaXRFeature*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldState, newState);
}
inline void Meta::XR::MetaXRFeature::OnSessionBegin(uint64_t xrSession) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::MetaXRFeature*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrSession);
}
inline void Meta::XR::MetaXRFeature::OnSessionEnd(uint64_t xrSession) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::MetaXRFeature*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrSession);
}
inline void Meta::XR::MetaXRFeature::OnSessionExiting(uint64_t xrSession) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::MetaXRFeature*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrSession);
}
inline void Meta::XR::MetaXRFeature::OnSessionDestroy(uint64_t xrSession) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::MetaXRFeature*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrSession);
}
inline void Meta::XR::MetaXRFeature::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::MetaXRFeature*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MetaXRFeature* Meta::XR::MetaXRFeature::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MetaXRFeature*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MetaXRFeature::MetaXRFeature() {}
