#pragma once
// IWYU pragma private; include "GlobalNamespace/CuttableBySaber.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CuttableBySaber_def.hpp"
#include "GlobalNamespace/zzzz__CuttableBySaber_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x59e7d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate::*)(
    ::GlobalNamespace::Saber*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate::Invoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x59e7e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate::*)(::GlobalNamespace::Saber*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::System::AsyncCallback*,
                                                                 ::System::Object*)>(&::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x59e7e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59e7f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate::Invoke(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation,
                                                                           ::UnityEngine::Vector3 cutDirVec) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saber, cutPoint, orientation, cutDirVec);
}
inline ::System::IAsyncResult* GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate::BeginInvoke(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint,
                                                                                                   ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec,
                                                                                                   ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, saber, cutPoint, orientation, cutDirVec, callback, object);
}
inline void GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate* GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate::CuttableBySaber_WasCutBySaberDelegate() {}
//  Writing Method size for method: ::GlobalNamespace::CuttableBySaber.add_wasCutBySaberEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CuttableBySaber::*)(::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate*)>(
    &::GlobalNamespace::CuttableBySaber::add_wasCutBySaberEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59e7bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CuttableBySaber*>(),
                                                             { "add_wasCutBySaberEvent", {}, { ::i2c::type_of<::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CuttableBySaber.remove_wasCutBySaberEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CuttableBySaber::*)(::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate*)>(
    &::GlobalNamespace::CuttableBySaber::remove_wasCutBySaberEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59e7c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CuttableBySaber*>(),
                                                             { "remove_wasCutBySaberEvent", {}, { ::i2c::type_of<::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CuttableBySaber.CallWasCutBySaberEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CuttableBySaber::*)(::GlobalNamespace::Saber*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion,
                                                                                                    ::UnityEngine::Vector3)>(&::GlobalNamespace::CuttableBySaber::CallWasCutBySaberEvent)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x59e7b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CuttableBySaber*>(), { "CallWasCutBySaberEvent",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::GlobalNamespace::Saber*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                     ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CuttableBySaber.get_canBeCut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CuttableBySaber::*)()>(&::GlobalNamespace::CuttableBySaber::get_canBeCut)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CuttableBySaber*>(), { ::i2c::class_of<::GlobalNamespace::CuttableBySaber*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CuttableBySaber.set_canBeCut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CuttableBySaber::*)(bool)>(&::GlobalNamespace::CuttableBySaber::set_canBeCut)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CuttableBySaber*>(), { ::i2c::class_of<::GlobalNamespace::CuttableBySaber*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CuttableBySaber.get_radius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::CuttableBySaber::*)()>(&::GlobalNamespace::CuttableBySaber::get_radius)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CuttableBySaber*>(), { ::i2c::class_of<::GlobalNamespace::CuttableBySaber*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CuttableBySaber.Cut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CuttableBySaber::*)(::GlobalNamespace::Saber*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion,
                                                                                                    ::UnityEngine::Vector3)>(&::GlobalNamespace::CuttableBySaber::Cut)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CuttableBySaber*>(), { ::i2c::class_of<::GlobalNamespace::CuttableBySaber*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CuttableBySaber._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CuttableBySaber::*)()>(&::GlobalNamespace::CuttableBySaber::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59e7bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CuttableBySaber*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate*& GlobalNamespace::CuttableBySaber::__cordl_internal_get_wasCutBySaberEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wasCutBySaberEvent;
}
constexpr ::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate* const& GlobalNamespace::CuttableBySaber::__cordl_internal_get_wasCutBySaberEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wasCutBySaberEvent;
}
constexpr void GlobalNamespace::CuttableBySaber::__cordl_internal_set_wasCutBySaberEvent(::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wasCutBySaberEvent = value;
}
inline void GlobalNamespace::CuttableBySaber::add_wasCutBySaberEvent(::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CuttableBySaber*>(), { "add_wasCutBySaberEvent", {}, { ::i2c::type_of<::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CuttableBySaber::remove_wasCutBySaberEvent(::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CuttableBySaber*>(),
                                                           { "remove_wasCutBySaberEvent", {}, { ::i2c::type_of<::GlobalNamespace::CuttableBySaber_WasCutBySaberDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CuttableBySaber::CallWasCutBySaberEvent(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation,
                                                                     ::UnityEngine::Vector3 cutDirVec) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CuttableBySaber*>(), { "CallWasCutBySaberEvent",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::GlobalNamespace::Saber*>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                          ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saber, cutPoint, orientation, cutDirVec);
}
inline bool GlobalNamespace::CuttableBySaber::get_canBeCut() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CuttableBySaber*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CuttableBySaber::set_canBeCut(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CuttableBySaber*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::CuttableBySaber::get_radius() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CuttableBySaber*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::CuttableBySaber::Cut(::GlobalNamespace::Saber* saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CuttableBySaber*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saber, cutPoint, orientation, cutDirVec);
}
inline void GlobalNamespace::CuttableBySaber::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CuttableBySaber*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CuttableBySaber* GlobalNamespace::CuttableBySaber::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CuttableBySaber*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CuttableBySaber::CuttableBySaber() {}
