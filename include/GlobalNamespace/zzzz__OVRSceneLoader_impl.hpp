#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneLoader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSceneLoader_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneLoader_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__AssetBundle_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader_SceneInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneLoader_SceneInfo::*)(::System::Collections::Generic::List_1<::StringW>*, int64_t)>(
    &::GlobalNamespace::OVRSceneLoader_SceneInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ebfdc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader_SceneInfo>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSceneLoader_SceneInfo::_ctor(::System::Collections::Generic::List_1<::StringW>* sceneList, int64_t currentSceneEpochVersion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader_SceneInfo>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sceneList, currentSceneEpochVersion);
}
// Ctor Parameters [CppParam { name: "scenes", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "version", ty: "int64_t", modifiers:
// "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRSceneLoader_SceneInfo::OVRSceneLoader_SceneInfo(::System::Collections::Generic::List_1<::StringW>* scenes, int64_t version) noexcept {
  this->scenes = scenes;
  this->version = version;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneLoader_SceneInfo::OVRSceneLoader_SceneInfo() {}
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::*)(int32_t)>(
    &::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ebfdd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::*)()>(
    &::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ebfdd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::*)()>(
    &::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::MoveNext)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5ebfddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::*)()>(
    &::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ebfe80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::*)()>(
    &::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ebfe88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::*)()>(
    &::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ebfec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRSceneLoader>& GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::OVRSceneLoader> const& GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRSceneLoader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24* GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneLoader__DelayCanvasPosUpdate_d__24::OVRSceneLoader__DelayCanvasPosUpdate_d__24() {}
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::*)(int32_t)>(
    &::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ebfec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::*)()>(
    &::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ebfed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::*)()>(
    &::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::MoveNext)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x5ebfed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::*)()>(
    &::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ec0204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::*)()>(
    &::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ec020c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::*)()>(
    &::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ec0244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRSceneLoader>& GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::OVRSceneLoader> const& GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVRSceneLoader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25* GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneLoader__onCheckSceneCoroutine_d__25::OVRSceneLoader__onCheckSceneCoroutine_d__25() {}
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneLoader::*)()>(&::GlobalNamespace::OVRSceneLoader::Awake)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ebe764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneLoader::*)()>(&::GlobalNamespace::OVRSceneLoader::Start)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5ebe7d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader.LoadScene
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneLoader::*)(::GlobalNamespace::OVRSceneLoader_SceneInfo)>(&::GlobalNamespace::OVRSceneLoader::LoadScene)> {
  constexpr static std::size_t size = 0x914;
  constexpr static std::size_t addrs = 0x5ebec4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader*>(), { "LoadScene", {}, { ::i2c::type_of<::GlobalNamespace::OVRSceneLoader_SceneInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader.LoadSceneOperation_completed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneLoader::*)(::UnityEngine::AsyncOperation*)>(&::GlobalNamespace::OVRSceneLoader::LoadSceneOperation_completed)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5ebf560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader*>(), { "LoadSceneOperation_completed", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneLoader::*)()>(&::GlobalNamespace::OVRSceneLoader::Update)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x5ebf694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader.UpdateCanvasPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneLoader::*)()>(&::GlobalNamespace::OVRSceneLoader::UpdateCanvasPosition)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5ebf944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader*>(), { "UpdateCanvasPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader.GetSceneInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSceneLoader_SceneInfo (::GlobalNamespace::OVRSceneLoader::*)()>(&::GlobalNamespace::OVRSceneLoader::GetSceneInfo)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5ebe9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader*>(), { "GetSceneInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader.DelayCanvasPosUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRSceneLoader::*)()>(&::GlobalNamespace::OVRSceneLoader::DelayCanvasPosUpdate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5ebe950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader*>(), { "DelayCanvasPosUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader.onCheckSceneCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRSceneLoader::*)()>(&::GlobalNamespace::OVRSceneLoader::onCheckSceneCoroutine)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5ebf640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader*>(), { "onCheckSceneCoroutine", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader.DestroyAllGameObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneLoader::*)()>(&::GlobalNamespace::OVRSceneLoader::DestroyAllGameObjects)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5ebfb48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader*>(), { "DestroyAllGameObjects", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneLoader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSceneLoader::*)()>(&::GlobalNamespace::OVRSceneLoader::_ctor)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5ebfc54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::OVRSceneLoader::__cordl_internal_get_sceneCheckIntervalSeconds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneCheckIntervalSeconds;
}
constexpr float_t const& GlobalNamespace::OVRSceneLoader::__cordl_internal_get_sceneCheckIntervalSeconds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneCheckIntervalSeconds;
}
constexpr void GlobalNamespace::OVRSceneLoader::__cordl_internal_set_sceneCheckIntervalSeconds(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sceneCheckIntervalSeconds = value;
}
constexpr float_t& GlobalNamespace::OVRSceneLoader::__cordl_internal_get_logCloseTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logCloseTime;
}
constexpr float_t const& GlobalNamespace::OVRSceneLoader::__cordl_internal_get_logCloseTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logCloseTime;
}
constexpr void GlobalNamespace::OVRSceneLoader::__cordl_internal_set_logCloseTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___logCloseTime = value;
}
constexpr ::UnityW<::UnityEngine::Canvas>& GlobalNamespace::OVRSceneLoader::__cordl_internal_get_mainCanvas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainCanvas;
}
constexpr ::UnityW<::UnityEngine::Canvas> const& GlobalNamespace::OVRSceneLoader::__cordl_internal_get_mainCanvas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainCanvas;
}
constexpr void GlobalNamespace::OVRSceneLoader::__cordl_internal_set_mainCanvas(::UnityW<::UnityEngine::Canvas> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mainCanvas = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::OVRSceneLoader::__cordl_internal_get_logTextBox() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logTextBox;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::OVRSceneLoader::__cordl_internal_get_logTextBox() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logTextBox;
}
constexpr void GlobalNamespace::OVRSceneLoader::__cordl_internal_set_logTextBox(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___logTextBox = value;
}
constexpr ::UnityEngine::AsyncOperation*& GlobalNamespace::OVRSceneLoader::__cordl_internal_get_loadSceneOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadSceneOperation;
}
constexpr ::UnityEngine::AsyncOperation* const& GlobalNamespace::OVRSceneLoader::__cordl_internal_get_loadSceneOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadSceneOperation;
}
constexpr void GlobalNamespace::OVRSceneLoader::__cordl_internal_set_loadSceneOperation(::UnityEngine::AsyncOperation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___loadSceneOperation = value;
}
constexpr ::StringW& GlobalNamespace::OVRSceneLoader::__cordl_internal_get_formattedLogText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___formattedLogText;
}
constexpr ::StringW const& GlobalNamespace::OVRSceneLoader::__cordl_internal_get_formattedLogText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___formattedLogText;
}
constexpr void GlobalNamespace::OVRSceneLoader::__cordl_internal_set_formattedLogText(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___formattedLogText = value;
}
constexpr float_t& GlobalNamespace::OVRSceneLoader::__cordl_internal_get_closeLogTimer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeLogTimer;
}
constexpr float_t const& GlobalNamespace::OVRSceneLoader::__cordl_internal_get_closeLogTimer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeLogTimer;
}
constexpr void GlobalNamespace::OVRSceneLoader::__cordl_internal_set_closeLogTimer(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___closeLogTimer = value;
}
constexpr bool& GlobalNamespace::OVRSceneLoader::__cordl_internal_get_closeLogDialogue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeLogDialogue;
}
constexpr bool const& GlobalNamespace::OVRSceneLoader::__cordl_internal_get_closeLogDialogue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closeLogDialogue;
}
constexpr void GlobalNamespace::OVRSceneLoader::__cordl_internal_set_closeLogDialogue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___closeLogDialogue = value;
}
constexpr bool& GlobalNamespace::OVRSceneLoader::__cordl_internal_get_canvasPosUpdated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canvasPosUpdated;
}
constexpr bool const& GlobalNamespace::OVRSceneLoader::__cordl_internal_get_canvasPosUpdated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___canvasPosUpdated;
}
constexpr void GlobalNamespace::OVRSceneLoader::__cordl_internal_set_canvasPosUpdated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___canvasPosUpdated = value;
}
constexpr ::StringW& GlobalNamespace::OVRSceneLoader::__cordl_internal_get_scenePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenePath;
}
constexpr ::StringW const& GlobalNamespace::OVRSceneLoader::__cordl_internal_get_scenePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scenePath;
}
constexpr void GlobalNamespace::OVRSceneLoader::__cordl_internal_set_scenePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scenePath = value;
}
constexpr ::StringW& GlobalNamespace::OVRSceneLoader::__cordl_internal_get_sceneLoadDataPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneLoadDataPath;
}
constexpr ::StringW const& GlobalNamespace::OVRSceneLoader::__cordl_internal_get_sceneLoadDataPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sceneLoadDataPath;
}
constexpr void GlobalNamespace::OVRSceneLoader::__cordl_internal_set_sceneLoadDataPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sceneLoadDataPath = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AssetBundle>>*& GlobalNamespace::OVRSceneLoader::__cordl_internal_get_loadedAssetBundles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadedAssetBundles;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AssetBundle>>* const& GlobalNamespace::OVRSceneLoader::__cordl_internal_get_loadedAssetBundles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadedAssetBundles;
}
constexpr void GlobalNamespace::OVRSceneLoader::__cordl_internal_set_loadedAssetBundles(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AssetBundle>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___loadedAssetBundles = value;
}
constexpr ::GlobalNamespace::OVRSceneLoader_SceneInfo& GlobalNamespace::OVRSceneLoader::__cordl_internal_get_currentSceneInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentSceneInfo;
}
constexpr ::GlobalNamespace::OVRSceneLoader_SceneInfo const& GlobalNamespace::OVRSceneLoader::__cordl_internal_get_currentSceneInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentSceneInfo;
}
constexpr void GlobalNamespace::OVRSceneLoader::__cordl_internal_set_currentSceneInfo(::GlobalNamespace::OVRSceneLoader_SceneInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentSceneInfo = value;
}
inline void GlobalNamespace::OVRSceneLoader::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneLoader::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneLoader::LoadScene(::GlobalNamespace::OVRSceneLoader_SceneInfo sceneInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader*>(), { "LoadScene", {}, { ::i2c::type_of<::GlobalNamespace::OVRSceneLoader_SceneInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneInfo);
}
inline void GlobalNamespace::OVRSceneLoader::LoadSceneOperation_completed(::UnityEngine::AsyncOperation* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader*>(), { "LoadSceneOperation_completed", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void GlobalNamespace::OVRSceneLoader::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneLoader::UpdateCanvasPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader*>(), { "UpdateCanvasPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSceneLoader_SceneInfo GlobalNamespace::OVRSceneLoader::GetSceneInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader*>(), { "GetSceneInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSceneLoader_SceneInfo>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRSceneLoader::DelayCanvasPosUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader*>(), { "DelayCanvasPosUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRSceneLoader::onCheckSceneCoroutine() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader*>(), { "onCheckSceneCoroutine", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneLoader::DestroyAllGameObjects() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader*>(), { "DestroyAllGameObjects", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSceneLoader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRSceneLoader*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSceneLoader* GlobalNamespace::OVRSceneLoader::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRSceneLoader*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSceneLoader::OVRSceneLoader() {}
