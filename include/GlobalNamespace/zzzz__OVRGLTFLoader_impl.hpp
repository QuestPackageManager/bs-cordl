#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRGLTFLoader.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFScene_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTextureQualityFiltering_impl.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFLoader_def.hpp"
#include "GlobalNamespace/zzzz__OVRChunkType_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFAccessor_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFAnimatinonNode_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFAnimationNodeMorphTargetHandler_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFInputNode_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFLoader_def.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFScene_def.hpp"
#include "GlobalNamespace/zzzz__OVRMaterialData_def.hpp"
#include "GlobalNamespace/zzzz__OVRMeshAttributes_def.hpp"
#include "GlobalNamespace/zzzz__OVRMeshData_def.hpp"
#include "GlobalNamespace/zzzz__OVRTextureData_def.hpp"
#include "GlobalNamespace/zzzz__OVRTextureQualityFiltering_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONArray_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0::*)()>(&::GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e52250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0._LoadGLBCoroutine_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0::*)()>(
    &::GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0::_LoadGLBCoroutine_b__1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e52254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0*>(), { "<LoadGLBCoroutine>b__1", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::Task_1<::OVRSimpleJSON::JSONNode*>*& GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0::__cordl_internal_get_task() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___task;
}
constexpr ::System::Threading::Tasks::Task_1<::OVRSimpleJSON::JSONNode*>* const& GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0::__cordl_internal_get_task() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___task;
}
constexpr void GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0::__cordl_internal_set_task(::System::Threading::Tasks::Task_1<::OVRSimpleJSON::JSONNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___task = value;
}
inline void GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0::_LoadGLBCoroutine_b__1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0*>(), { "<LoadGLBCoroutine>b__1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0* GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0::OVRGLTFLoader___c__DisplayClass26_0() {}
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::*)(int32_t)>(&::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4f6dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::*)()>(
    &::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e5226c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::*)()>(&::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::MoveNext)> {
  constexpr static std::size_t size = 0x8ec;
  constexpr static std::size_t addrs = 0x5e52270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::*)()>(
    &::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e52b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::*)()>(
    &::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e52b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::*)()>(
    &::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e52b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::GlobalNamespace::OVRGLTFLoader*& GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::OVRGLTFLoader* const& GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::__cordl_internal_set___4__this(::GlobalNamespace::OVRGLTFLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0*& GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::__cordl_internal_get___8__1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____8__1;
}
constexpr ::GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0* const& GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::__cordl_internal_get___8__1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____8__1;
}
constexpr void GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::__cordl_internal_set___8__1(::GlobalNamespace::OVRGLTFLoader___c__DisplayClass26_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____8__1 = value;
}
constexpr bool& GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::__cordl_internal_get_supportAnimation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportAnimation;
}
constexpr bool const& GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::__cordl_internal_get_supportAnimation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportAnimation;
}
constexpr void GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::__cordl_internal_set_supportAnimation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___supportAnimation = value;
}
constexpr bool& GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::__cordl_internal_get_loadMips() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadMips;
}
constexpr bool const& GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::__cordl_internal_get_loadMips() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadMips;
}
constexpr void GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::__cordl_internal_set_loadMips(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___loadMips = value;
}
constexpr ::System::Collections::IEnumerator*& GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::__cordl_internal_get__loadGltf_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadGltf_5__2;
}
constexpr ::System::Collections::IEnumerator* const& GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::__cordl_internal_get__loadGltf_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadGltf_5__2;
}
constexpr void GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::__cordl_internal_set__loadGltf_5__2(::System::Collections::IEnumerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadGltf_5__2 = value;
}
inline void GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26*>(), { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26* GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRGLTFLoader__LoadGLBCoroutine_d__26::OVRGLTFLoader__LoadGLBCoroutine_d__26() {}
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::*)(int32_t)>(&::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4fe60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::*)()>(&::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e52ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::*)()>(&::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::MoveNext)> {
  constexpr static std::size_t size = 0x6dc;
  constexpr static std::size_t addrs = 0x5e52ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::*)()>(
    &::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e53284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37*>(), { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::*)()>(
    &::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e5328c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::*)()>(
    &::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e532c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::GlobalNamespace::OVRGLTFLoader*& GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::OVRGLTFLoader* const& GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::__cordl_internal_set___4__this(::GlobalNamespace::OVRGLTFLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr bool& GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::__cordl_internal_get_loadMips() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadMips;
}
constexpr bool const& GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::__cordl_internal_get_loadMips() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadMips;
}
constexpr void GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::__cordl_internal_set_loadMips(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___loadMips = value;
}
constexpr bool& GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::__cordl_internal_get_supportAnimation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportAnimation;
}
constexpr bool const& GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::__cordl_internal_get_supportAnimation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportAnimation;
}
constexpr void GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::__cordl_internal_set_supportAnimation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___supportAnimation = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::__cordl_internal_get__sceneRootTransform_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneRootTransform_5__2;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::__cordl_internal_get__sceneRootTransform_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneRootTransform_5__2;
}
constexpr void GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::__cordl_internal_set__sceneRootTransform_5__2(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sceneRootTransform_5__2 = value;
}
constexpr ::OVRSimpleJSON::JSONArray*& GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::__cordl_internal_get__nodes_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodes_5__3;
}
constexpr ::OVRSimpleJSON::JSONArray* const& GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::__cordl_internal_get__nodes_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodes_5__3;
}
constexpr void GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::__cordl_internal_set__nodes_5__3(::OVRSimpleJSON::JSONArray* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nodes_5__3 = value;
}
constexpr ::OVRSimpleJSON::JSONNode_Enumerator& GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::__cordl_internal_get___7__wrap3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap3;
}
constexpr ::OVRSimpleJSON::JSONNode_Enumerator const& GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::__cordl_internal_get___7__wrap3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap3;
}
constexpr void GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::__cordl_internal_set___7__wrap3(::OVRSimpleJSON::JSONNode_Enumerator value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap3 = value;
}
constexpr ::System::Collections::IEnumerator*& GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::__cordl_internal_get__processNode_5__5() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____processNode_5__5;
}
constexpr ::System::Collections::IEnumerator* const& GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::__cordl_internal_get__processNode_5__5() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____processNode_5__5;
}
constexpr void GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::__cordl_internal_set__processNode_5__5(::System::Collections::IEnumerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____processNode_5__5 = value;
}
inline void GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37*>(), { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37* GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRGLTFLoader__LoadGLTF_d__37::OVRGLTFLoader__LoadGLTF_d__37() {}
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::*)(int32_t)>(
    &::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e51f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::*)()>(
    &::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e532cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::*)()>(&::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::MoveNext)> {
  constexpr static std::size_t size = 0x6c8;
  constexpr static std::size_t addrs = 0x5e532d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::*)()>(
    &::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e53998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::*)()>(
    &::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e539a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::*)()>(
    &::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e539d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::GlobalNamespace::OVRGLTFLoader*& GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::OVRGLTFLoader* const& GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::__cordl_internal_set___4__this(::GlobalNamespace::OVRGLTFLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr int32_t& GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::__cordl_internal_get__animationIndex_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationIndex_5__2;
}
constexpr int32_t const& GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::__cordl_internal_get__animationIndex_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationIndex_5__2;
}
constexpr void GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::__cordl_internal_set__animationIndex_5__2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____animationIndex_5__2 = value;
}
constexpr float_t& GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::__cordl_internal_get__processingStart_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____processingStart_5__3;
}
constexpr float_t const& GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::__cordl_internal_get__processingStart_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____processingStart_5__3;
}
constexpr void GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::__cordl_internal_set__processingStart_5__3(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____processingStart_5__3 = value;
}
constexpr ::OVRSimpleJSON::JSONNode_Enumerator& GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::__cordl_internal_get___7__wrap3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap3;
}
constexpr ::OVRSimpleJSON::JSONNode_Enumerator const& GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::__cordl_internal_get___7__wrap3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap3;
}
constexpr void GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::__cordl_internal_set___7__wrap3(::OVRSimpleJSON::JSONNode_Enumerator value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap3 = value;
}
inline void GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48* GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRGLTFLoader__ProcessAnimations_d__48::OVRGLTFLoader__ProcessAnimations_d__48() {}
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::*)(int32_t)>(&::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4feec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::*)()>(
    &::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e539e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::*)()>(&::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::MoveNext)> {
  constexpr static std::size_t size = 0xd64;
  constexpr static std::size_t addrs = 0x5e539e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::*)()>(
    &::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e54748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38*>(), { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::*)()>(
    &::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e54750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::*)()>(
    &::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e54788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::GlobalNamespace::OVRGLTFLoader*& GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::OVRGLTFLoader* const& GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_set___4__this(::GlobalNamespace::OVRGLTFLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::OVRSimpleJSON::JSONArray*& GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_get_nodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodes;
}
constexpr ::OVRSimpleJSON::JSONArray* const& GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_get_nodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodes;
}
constexpr void GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_set_nodes(::OVRSimpleJSON::JSONArray* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nodes = value;
}
constexpr int32_t& GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_get_nodeId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodeId;
}
constexpr int32_t const& GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_get_nodeId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodeId;
}
constexpr void GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_set_nodeId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nodeId = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_get_parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_get_parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
constexpr void GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_set_parent(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parent = value;
}
constexpr bool& GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_get_loadMips() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadMips;
}
constexpr bool const& GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_get_loadMips() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadMips;
}
constexpr void GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_set_loadMips(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___loadMips = value;
}
constexpr bool& GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_get__hasSkipped_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasSkipped_5__2;
}
constexpr bool const& GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_get__hasSkipped_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasSkipped_5__2;
}
constexpr void GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_set__hasSkipped_5__2(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasSkipped_5__2 = value;
}
constexpr ::OVRSimpleJSON::JSONNode*& GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_get__node_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____node_5__3;
}
constexpr ::OVRSimpleJSON::JSONNode* const& GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_get__node_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____node_5__3;
}
constexpr void GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_set__node_5__3(::OVRSimpleJSON::JSONNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____node_5__3 = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_get__nodeGameObject_5__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeGameObject_5__4;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_get__nodeGameObject_5__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeGameObject_5__4;
}
constexpr void GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_set__nodeGameObject_5__4(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nodeGameObject_5__4 = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_get__nodeTransform_5__5() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeTransform_5__5;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_get__nodeTransform_5__5() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeTransform_5__5;
}
constexpr void GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_set__nodeTransform_5__5(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nodeTransform_5__5 = value;
}
constexpr ::StringW& GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_get__nodeName_5__6() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeName_5__6;
}
constexpr ::StringW const& GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_get__nodeName_5__6() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeName_5__6;
}
constexpr void GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_set__nodeName_5__6(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nodeName_5__6 = value;
}
constexpr ::OVRSimpleJSON::JSONNode_ValueEnumerator& GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_get___7__wrap6() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap6;
}
constexpr ::OVRSimpleJSON::JSONNode_ValueEnumerator const& GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_get___7__wrap6() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap6;
}
constexpr void GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_set___7__wrap6(::OVRSimpleJSON::JSONNode_ValueEnumerator value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap6 = value;
}
constexpr ::System::Collections::IEnumerator*& GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_get__processNode_5__8() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____processNode_5__8;
}
constexpr ::System::Collections::IEnumerator* const& GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_get__processNode_5__8() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____processNode_5__8;
}
constexpr void GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::__cordl_internal_set__processNode_5__8(::System::Collections::IEnumerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____processNode_5__8 = value;
}
inline void GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38*>(), { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38* GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRGLTFLoader__ProcessNode_d__38::OVRGLTFLoader__ProcessNode_d__38() {}
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGLTFLoader::*)(::StringW)>(&::GlobalNamespace::OVRGLTFLoader::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e4f37c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGLTFLoader::*)(::ArrayW<uint8_t>)>(&::GlobalNamespace::OVRGLTFLoader::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e4f420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGLTFLoader::*)(::System::Func_1<::System::IO::Stream*>*)>(&::GlobalNamespace::OVRGLTFLoader::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e4f4f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { ".ctor", {}, { ::i2c::type_of<::System::Func_1<::System::IO::Stream*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.LoadGLB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRGLTFScene (::GlobalNamespace::OVRGLTFLoader::*)(bool, bool)>(&::GlobalNamespace::OVRGLTFLoader::LoadGLB)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5e4f588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "LoadGLB", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.LoadGLBCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRGLTFLoader::*)(bool, bool)>(&::GlobalNamespace::OVRGLTFLoader::LoadGLBCoroutine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5e4f668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "LoadGLBCoroutine", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.InitializeGLBLoad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (::GlobalNamespace::OVRGLTFLoader::*)()>(&::GlobalNamespace::OVRGLTFLoader::InitializeGLBLoad)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5e4f6e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "InitializeGLBLoad", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.SetModelShader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGLTFLoader::*)(::UnityEngine::Shader*)>(&::GlobalNamespace::OVRGLTFLoader::SetModelShader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4fa5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "SetModelShader", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.SetModelAlphaBlendShader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGLTFLoader::*)(::UnityEngine::Shader*)>(&::GlobalNamespace::OVRGLTFLoader::SetModelAlphaBlendShader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4fa64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "SetModelAlphaBlendShader", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.SetTextureQualityFiltering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGLTFLoader::*)(::GlobalNamespace::OVRTextureQualityFiltering)>(
    &::GlobalNamespace::OVRGLTFLoader::SetTextureQualityFiltering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4fa6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(),
                                                                                           { "SetTextureQualityFiltering", {}, { ::i2c::type_of<::GlobalNamespace::OVRTextureQualityFiltering>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.SetMipMapBias
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGLTFLoader::*)(float_t)>(&::GlobalNamespace::OVRGLTFLoader::SetMipMapBias)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e4fa74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "SetMipMapBias", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.DetectTextureQuality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTextureQualityFiltering (*)(::by_ref<::UnityEngine::Texture2D*>)>(
    &::GlobalNamespace::OVRGLTFLoader::DetectTextureQuality)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e4fa94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "DetectTextureQuality", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Texture2D*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.ApplyTextureQuality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRTextureQualityFiltering, ::by_ref<::UnityEngine::Texture2D*>)>(
    &::GlobalNamespace::OVRGLTFLoader::ApplyTextureQuality)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5e4fb54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(),
                                         { "ApplyTextureQuality", {}, { ::i2c::type_of<::GlobalNamespace::OVRTextureQualityFiltering>(), ::i2c::type_of<::by_ref<::UnityEngine::Texture2D*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.ValidateGLB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IO::Stream*)>(&::GlobalNamespace::OVRGLTFLoader::ValidateGLB)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5e4f7d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "ValidateGLB", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.ReadChunk
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::IO::Stream*, ::GlobalNamespace::OVRChunkType)>(&::GlobalNamespace::OVRGLTFLoader::ReadChunk)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e4f984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(),
                                                             { "ReadChunk", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::GlobalNamespace::OVRChunkType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.ValidateChunk
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IO::Stream*, ::GlobalNamespace::OVRChunkType, ::by_ref<uint32_t>)>(&::GlobalNamespace::OVRGLTFLoader::ValidateChunk)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5e4fcc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(),
                            { "ValidateChunk", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::GlobalNamespace::OVRChunkType>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.LoadGLTF
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRGLTFLoader::*)(bool, bool)>(&::GlobalNamespace::OVRGLTFLoader::LoadGLTF)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5e4fdec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "LoadGLTF", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.ProcessNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (
    ::GlobalNamespace::OVRGLTFLoader::*)(::OVRSimpleJSON::JSONArray*, int32_t, bool, ::UnityEngine::Transform*)>(&::GlobalNamespace::OVRGLTFLoader::ProcessNode)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5e4fe68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(),
                            { "ProcessNode", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONArray*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.ProcessMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRMeshData (::GlobalNamespace::OVRGLTFLoader::*)(::OVRSimpleJSON::JSONNode*, bool)>(
    &::GlobalNamespace::OVRGLTFLoader::ProcessMesh)> {
  constexpr static std::size_t size = 0x8e8;
  constexpr static std::size_t addrs = 0x5e4fef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "ProcessMesh", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.FlipTriangleIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::ArrayW<int32_t>>)>(&::GlobalNamespace::OVRGLTFLoader::FlipTriangleIndices)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e513a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "FlipTriangleIndices", {}, { ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.ReadMeshAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRMeshAttributes (::GlobalNamespace::OVRGLTFLoader::*)(::OVRSimpleJSON::JSONNode*, int32_t, int32_t)>(
    &::GlobalNamespace::OVRGLTFLoader::ReadMeshAttributes)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x5e51418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(),
                                                             { "ReadMeshAttributes", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.ProcessSkin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGLTFLoader::*)(::OVRSimpleJSON::JSONNode*, ::UnityEngine::SkinnedMeshRenderer*)>(
    &::GlobalNamespace::OVRGLTFLoader::ProcessSkin)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x5e51990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(),
                                                             { "ProcessSkin", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>(), ::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.ProcessMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRMaterialData (::GlobalNamespace::OVRGLTFLoader::*)(int32_t)>(&::GlobalNamespace::OVRGLTFLoader::ProcessMaterial)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x5e507dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "ProcessMaterial", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.ProcessTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTextureData (::GlobalNamespace::OVRGLTFLoader::*)(int32_t)>(&::GlobalNamespace::OVRGLTFLoader::ProcessTexture)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x5e50bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "ProcessTexture", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.TranscodeTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRGLTFLoader::*)(::by_ref<::GlobalNamespace::OVRTextureData>)>(&::GlobalNamespace::OVRGLTFLoader::TranscodeTexture)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5e50fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "TranscodeTexture", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::OVRTextureData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.CreateUnityMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::OVRGLTFLoader::*)(::GlobalNamespace::OVRMaterialData, bool)>(
    &::GlobalNamespace::OVRGLTFLoader::CreateUnityMaterial)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x5e51084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "CreateUnityMaterial", {}, { ::i2c::type_of<::GlobalNamespace::OVRMaterialData>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.GetInputNodeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRGLTFInputNode (::GlobalNamespace::OVRGLTFLoader::*)(::StringW)>(&::GlobalNamespace::OVRGLTFLoader::GetInputNodeType)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5e51d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "GetInputNodeType", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader.ProcessAnimations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::OVRGLTFLoader::*)()>(&::GlobalNamespace::OVRGLTFLoader::ProcessAnimations)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e51efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "ProcessAnimations", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFLoader._LoadGLBCoroutine_b__26_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (::GlobalNamespace::OVRGLTFLoader::*)()>(&::GlobalNamespace::OVRGLTFLoader::_LoadGLBCoroutine_b__26_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e5224c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "<LoadGLBCoroutine>b__26_0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<::System::IO::Stream*>*& GlobalNamespace::OVRGLTFLoader::__cordl_internal_get_m_deferredStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_deferredStream;
}
constexpr ::System::Func_1<::System::IO::Stream*>* const& GlobalNamespace::OVRGLTFLoader::__cordl_internal_get_m_deferredStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_deferredStream;
}
constexpr void GlobalNamespace::OVRGLTFLoader::__cordl_internal_set_m_deferredStream(::System::Func_1<::System::IO::Stream*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_deferredStream = value;
}
constexpr ::OVRSimpleJSON::JSONNode*& GlobalNamespace::OVRGLTFLoader::__cordl_internal_get_m_jsonData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_jsonData;
}
constexpr ::OVRSimpleJSON::JSONNode* const& GlobalNamespace::OVRGLTFLoader::__cordl_internal_get_m_jsonData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_jsonData;
}
constexpr void GlobalNamespace::OVRGLTFLoader::__cordl_internal_set_m_jsonData(::OVRSimpleJSON::JSONNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_jsonData = value;
}
constexpr ::System::IO::Stream*& GlobalNamespace::OVRGLTFLoader::__cordl_internal_get_m_glbStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_glbStream;
}
constexpr ::System::IO::Stream* const& GlobalNamespace::OVRGLTFLoader::__cordl_internal_get_m_glbStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_glbStream;
}
constexpr void GlobalNamespace::OVRGLTFLoader::__cordl_internal_set_m_glbStream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_glbStream = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::OVRGLTFLoader::__cordl_internal_get_m_Nodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Nodes;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::OVRGLTFLoader::__cordl_internal_get_m_Nodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Nodes;
}
constexpr void GlobalNamespace::OVRGLTFLoader::__cordl_internal_set_m_Nodes(::ArrayW<::UnityW<::UnityEngine::GameObject>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Nodes = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>*&
GlobalNamespace::OVRGLTFLoader::__cordl_internal_get_m_InputAnimationNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputAnimationNodes;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>* const&
GlobalNamespace::OVRGLTFLoader::__cordl_internal_get_m_InputAnimationNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InputAnimationNodes;
}
constexpr void GlobalNamespace::OVRGLTFLoader::__cordl_internal_set_m_InputAnimationNodes(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode, ::GlobalNamespace::OVRGLTFAnimatinonNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InputAnimationNodes = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*>>*& GlobalNamespace::OVRGLTFLoader::__cordl_internal_get_m_AnimationLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AnimationLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*>>* const&
GlobalNamespace::OVRGLTFLoader::__cordl_internal_get_m_AnimationLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AnimationLookup;
}
constexpr void
GlobalNamespace::OVRGLTFLoader::__cordl_internal_set_m_AnimationLookup(::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::GlobalNamespace::OVRGLTFAnimatinonNode*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AnimationLookup = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>*&
GlobalNamespace::OVRGLTFLoader::__cordl_internal_get_m_morphTargetHandlers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_morphTargetHandlers;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>* const&
GlobalNamespace::OVRGLTFLoader::__cordl_internal_get_m_morphTargetHandlers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_morphTargetHandlers;
}
constexpr void
GlobalNamespace::OVRGLTFLoader::__cordl_internal_set_m_morphTargetHandlers(::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_morphTargetHandlers = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::OVRGLTFLoader::__cordl_internal_get_m_Shader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Shader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::OVRGLTFLoader::__cordl_internal_get_m_Shader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Shader;
}
constexpr void GlobalNamespace::OVRGLTFLoader::__cordl_internal_set_m_Shader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Shader = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::OVRGLTFLoader::__cordl_internal_get_m_AlphaBlendShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AlphaBlendShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::OVRGLTFLoader::__cordl_internal_get_m_AlphaBlendShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AlphaBlendShader;
}
constexpr void GlobalNamespace::OVRGLTFLoader::__cordl_internal_set_m_AlphaBlendShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AlphaBlendShader = value;
}
constexpr ::GlobalNamespace::OVRTextureQualityFiltering& GlobalNamespace::OVRGLTFLoader::__cordl_internal_get_m_TextureQuality() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextureQuality;
}
constexpr ::GlobalNamespace::OVRTextureQualityFiltering const& GlobalNamespace::OVRGLTFLoader::__cordl_internal_get_m_TextureQuality() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextureQuality;
}
constexpr void GlobalNamespace::OVRGLTFLoader::__cordl_internal_set_m_TextureQuality(::GlobalNamespace::OVRTextureQualityFiltering value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextureQuality = value;
}
constexpr float_t& GlobalNamespace::OVRGLTFLoader::__cordl_internal_get_m_TextureMipmapBias() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextureMipmapBias;
}
constexpr float_t const& GlobalNamespace::OVRGLTFLoader::__cordl_internal_get_m_TextureMipmapBias() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextureMipmapBias;
}
constexpr void GlobalNamespace::OVRGLTFLoader::__cordl_internal_set_m_TextureMipmapBias(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextureMipmapBias = value;
}
constexpr ::GlobalNamespace::OVRGLTFScene& GlobalNamespace::OVRGLTFLoader::__cordl_internal_get_scene() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scene;
}
constexpr ::GlobalNamespace::OVRGLTFScene const& GlobalNamespace::OVRGLTFLoader::__cordl_internal_get_scene() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scene;
}
constexpr void GlobalNamespace::OVRGLTFLoader::__cordl_internal_set_scene(::GlobalNamespace::OVRGLTFScene value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scene = value;
}
constexpr ::System::Func_3<::StringW, ::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Texture2D>>*& GlobalNamespace::OVRGLTFLoader::__cordl_internal_get_textureUriHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textureUriHandler;
}
constexpr ::System::Func_3<::StringW, ::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Texture2D>>* const& GlobalNamespace::OVRGLTFLoader::__cordl_internal_get_textureUriHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textureUriHandler;
}
constexpr void GlobalNamespace::OVRGLTFLoader::__cordl_internal_set_textureUriHandler(::System::Func_3<::StringW, ::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Texture2D>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textureUriHandler = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Texture2D>>*& GlobalNamespace::OVRGLTFLoader::__cordl_internal_get_m_textures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_textures;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Texture2D>>* const& GlobalNamespace::OVRGLTFLoader::__cordl_internal_get_m_textures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_textures;
}
constexpr void GlobalNamespace::OVRGLTFLoader::__cordl_internal_set_m_textures(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Texture2D>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_textures = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Material>>*& GlobalNamespace::OVRGLTFLoader::__cordl_internal_get_m_materials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_materials;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Material>>* const& GlobalNamespace::OVRGLTFLoader::__cordl_internal_get_m_materials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_materials;
}
constexpr void GlobalNamespace::OVRGLTFLoader::__cordl_internal_set_m_materials(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::Material>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_materials = value;
}
constexpr float_t& GlobalNamespace::OVRGLTFLoader::__cordl_internal_get_m_processingNodesStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_processingNodesStart;
}
constexpr float_t const& GlobalNamespace::OVRGLTFLoader::__cordl_internal_get_m_processingNodesStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_processingNodesStart;
}
constexpr void GlobalNamespace::OVRGLTFLoader::__cordl_internal_set_m_processingNodesStart(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_processingNodesStart = value;
}
constexpr ::GlobalNamespace::OVRGLTFAccessor*& GlobalNamespace::OVRGLTFLoader::__cordl_internal_get__dataAccessor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataAccessor;
}
constexpr ::GlobalNamespace::OVRGLTFAccessor* const& GlobalNamespace::OVRGLTFLoader::__cordl_internal_get__dataAccessor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataAccessor;
}
constexpr void GlobalNamespace::OVRGLTFLoader::__cordl_internal_set__dataAccessor(::GlobalNamespace::OVRGLTFAccessor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataAccessor = value;
}
inline void GlobalNamespace::OVRGLTFLoader::setStaticF_GLTFToUnitySpace(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "GLTFToUnitySpace", ::GlobalNamespace::OVRGLTFLoader*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRGLTFLoader::getStaticF_GLTFToUnitySpace() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "GLTFToUnitySpace", ::GlobalNamespace::OVRGLTFLoader*>();
}
inline void GlobalNamespace::OVRGLTFLoader::setStaticF_GLTFToUnityTangent(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "GLTFToUnityTangent", ::GlobalNamespace::OVRGLTFLoader*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRGLTFLoader::getStaticF_GLTFToUnityTangent() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "GLTFToUnityTangent", ::GlobalNamespace::OVRGLTFLoader*>();
}
inline void GlobalNamespace::OVRGLTFLoader::setStaticF_GLTFToUnitySpace_Rotation(::UnityEngine::Vector4 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector4, "GLTFToUnitySpace_Rotation", ::GlobalNamespace::OVRGLTFLoader*>(std::forward<::UnityEngine::Vector4>(value));
}
inline ::UnityEngine::Vector4 GlobalNamespace::OVRGLTFLoader::getStaticF_GLTFToUnitySpace_Rotation() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector4, "GLTFToUnitySpace_Rotation", ::GlobalNamespace::OVRGLTFLoader*>();
}
inline void GlobalNamespace::OVRGLTFLoader::setStaticF_InputNodeNameMap(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OVRGLTFInputNode>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OVRGLTFInputNode>*, "InputNodeNameMap", ::GlobalNamespace::OVRGLTFLoader*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OVRGLTFInputNode>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OVRGLTFInputNode>* GlobalNamespace::OVRGLTFLoader::getStaticF_InputNodeNameMap() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OVRGLTFInputNode>*, "InputNodeNameMap", ::GlobalNamespace::OVRGLTFLoader*>();
}
inline void GlobalNamespace::OVRGLTFLoader::_ctor(::StringW fileName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fileName);
}
inline void GlobalNamespace::OVRGLTFLoader::_ctor(::ArrayW<uint8_t> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::OVRGLTFLoader::_ctor(::System::Func_1<::System::IO::Stream*>* deferredStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { ".ctor", {}, { ::i2c::type_of<::System::Func_1<::System::IO::Stream*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deferredStream);
}
inline ::GlobalNamespace::OVRGLTFScene GlobalNamespace::OVRGLTFLoader::LoadGLB(bool supportAnimation, bool loadMips) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "LoadGLB", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRGLTFScene>(this, ___internal_method, supportAnimation, loadMips);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRGLTFLoader::LoadGLBCoroutine(bool supportAnimation, bool loadMips) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "LoadGLBCoroutine", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, supportAnimation, loadMips);
}
inline ::OVRSimpleJSON::JSONNode* GlobalNamespace::OVRGLTFLoader::InitializeGLBLoad() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "InitializeGLBLoad", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(this, ___internal_method);
}
inline void GlobalNamespace::OVRGLTFLoader::SetModelShader(::UnityEngine::Shader* shader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "SetModelShader", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shader);
}
inline void GlobalNamespace::OVRGLTFLoader::SetModelAlphaBlendShader(::UnityEngine::Shader* shader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "SetModelAlphaBlendShader", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shader);
}
inline void GlobalNamespace::OVRGLTFLoader::SetTextureQualityFiltering(::GlobalNamespace::OVRTextureQualityFiltering loadedTexturesQuality) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(),
                                                                                         { "SetTextureQualityFiltering", {}, { ::i2c::type_of<::GlobalNamespace::OVRTextureQualityFiltering>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loadedTexturesQuality);
}
inline void GlobalNamespace::OVRGLTFLoader::SetMipMapBias(float_t loadedTexturesMipmapBiasing) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "SetMipMapBias", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loadedTexturesMipmapBiasing);
}
inline ::GlobalNamespace::OVRTextureQualityFiltering GlobalNamespace::OVRGLTFLoader::DetectTextureQuality(::by_ref<::UnityEngine::Texture2D*> srcTexture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "DetectTextureQuality", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Texture2D*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTextureQualityFiltering>(nullptr, ___internal_method, srcTexture);
}
inline void GlobalNamespace::OVRGLTFLoader::ApplyTextureQuality(::GlobalNamespace::OVRTextureQualityFiltering qualityLevel, ::by_ref<::UnityEngine::Texture2D*> destTexture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(),
                                       { "ApplyTextureQuality", {}, { ::i2c::type_of<::GlobalNamespace::OVRTextureQualityFiltering>(), ::i2c::type_of<::by_ref<::UnityEngine::Texture2D*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, qualityLevel, destTexture);
}
inline bool GlobalNamespace::OVRGLTFLoader::ValidateGLB(::System::IO::Stream* glbStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "ValidateGLB", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, glbStream);
}
inline ::ArrayW<uint8_t> GlobalNamespace::OVRGLTFLoader::ReadChunk(::System::IO::Stream* glbStream, ::GlobalNamespace::OVRChunkType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "ReadChunk", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::GlobalNamespace::OVRChunkType>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, glbStream, type);
}
inline bool GlobalNamespace::OVRGLTFLoader::ValidateChunk(::System::IO::Stream* glbStream, ::GlobalNamespace::OVRChunkType type, ::by_ref<uint32_t> chunkLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(),
                                       { "ValidateChunk", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::GlobalNamespace::OVRChunkType>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, glbStream, type, chunkLength);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRGLTFLoader::LoadGLTF(bool supportAnimation, bool loadMips) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "LoadGLTF", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, supportAnimation, loadMips);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRGLTFLoader::ProcessNode(::OVRSimpleJSON::JSONArray* nodes, int32_t nodeId, bool loadMips, ::UnityEngine::Transform* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(),
                          { "ProcessNode", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONArray*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, nodes, nodeId, loadMips, parent);
}
inline ::GlobalNamespace::OVRMeshData GlobalNamespace::OVRGLTFLoader::ProcessMesh(::OVRSimpleJSON::JSONNode* meshNode, bool loadMips) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "ProcessMesh", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRMeshData>(this, ___internal_method, meshNode, loadMips);
}
inline void GlobalNamespace::OVRGLTFLoader::FlipTriangleIndices(::by_ref<::ArrayW<int32_t>> indices) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "FlipTriangleIndices", {}, { ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, indices);
}
inline ::GlobalNamespace::OVRMeshAttributes GlobalNamespace::OVRGLTFLoader::ReadMeshAttributes(::OVRSimpleJSON::JSONNode* jsonAttributes, int32_t totalVertexCount, int32_t vertexOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(),
                                                           { "ReadMeshAttributes", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRMeshAttributes>(this, ___internal_method, jsonAttributes, totalVertexCount, vertexOffset);
}
inline void GlobalNamespace::OVRGLTFLoader::ProcessSkin(::OVRSimpleJSON::JSONNode* skinNode, ::UnityEngine::SkinnedMeshRenderer* renderer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(),
                                                           { "ProcessSkin", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>(), ::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, skinNode, renderer);
}
inline ::GlobalNamespace::OVRMaterialData GlobalNamespace::OVRGLTFLoader::ProcessMaterial(int32_t matId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "ProcessMaterial", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRMaterialData>(this, ___internal_method, matId);
}
inline ::GlobalNamespace::OVRTextureData GlobalNamespace::OVRGLTFLoader::ProcessTexture(int32_t textureId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "ProcessTexture", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTextureData>(this, ___internal_method, textureId);
}
inline void GlobalNamespace::OVRGLTFLoader::TranscodeTexture(::by_ref<::GlobalNamespace::OVRTextureData> textureData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "TranscodeTexture", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::OVRTextureData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textureData);
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::OVRGLTFLoader::CreateUnityMaterial(::GlobalNamespace::OVRMaterialData matData, bool loadMips) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "CreateUnityMaterial", {}, { ::i2c::type_of<::GlobalNamespace::OVRMaterialData>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method, matData, loadMips);
}
inline ::GlobalNamespace::OVRGLTFInputNode GlobalNamespace::OVRGLTFLoader::GetInputNodeType(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "GetInputNodeType", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRGLTFInputNode>(this, ___internal_method, name);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::OVRGLTFLoader::ProcessAnimations() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "ProcessAnimations", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* GlobalNamespace::OVRGLTFLoader::_LoadGLBCoroutine_b__26_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRGLTFLoader*>(), { "<LoadGLBCoroutine>b__26_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRGLTFLoader* GlobalNamespace::OVRGLTFLoader::New_ctor(::StringW fileName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRGLTFLoader*>(fileName));
}
inline ::GlobalNamespace::OVRGLTFLoader* GlobalNamespace::OVRGLTFLoader::New_ctor(::ArrayW<uint8_t> data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRGLTFLoader*>(data));
}
inline ::GlobalNamespace::OVRGLTFLoader* GlobalNamespace::OVRGLTFLoader::New_ctor(::System::Func_1<::System::IO::Stream*>* deferredStream) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRGLTFLoader*>(deferredStream));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRGLTFLoader::OVRGLTFLoader() {}
