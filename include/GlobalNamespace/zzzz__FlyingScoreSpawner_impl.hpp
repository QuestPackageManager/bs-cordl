#pragma once
// IWYU pragma private; include "GlobalNamespace/FlyingScoreSpawner.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FlyingScoreSpawner_def.hpp"
#include "GlobalNamespace/zzzz__FlyingObjectEffect_def.hpp"
#include "GlobalNamespace/zzzz__FlyingScoreEffect_def.hpp"
#include "GlobalNamespace/zzzz__FlyingScoreSpawner_def.hpp"
#include "GlobalNamespace/zzzz__IFlyingObjectEffectDidFinishEvent_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyCutScoreBuffer_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::FlyingScoreSpawner_SpawnPosition::FlyingScoreSpawner_SpawnPosition(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlyingScoreSpawner_SpawnPosition::FlyingScoreSpawner_SpawnPosition() {}
constexpr ::GlobalNamespace::FlyingScoreSpawner_SpawnPosition GlobalNamespace::FlyingScoreSpawner_SpawnPosition::Underground{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::FlyingScoreSpawner_SpawnPosition GlobalNamespace::FlyingScoreSpawner_SpawnPosition::AboveGround{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreSpawner_InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingScoreSpawner_InitData::*)(::GlobalNamespace::FlyingScoreSpawner_SpawnPosition)>(
    &::GlobalNamespace::FlyingScoreSpawner_InitData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57dbd48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner_InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FlyingScoreSpawner_SpawnPosition>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::FlyingScoreSpawner_SpawnPosition& GlobalNamespace::FlyingScoreSpawner_InitData::__cordl_internal_get_spawnPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spawnPosition;
}
constexpr ::GlobalNamespace::FlyingScoreSpawner_SpawnPosition const& GlobalNamespace::FlyingScoreSpawner_InitData::__cordl_internal_get_spawnPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spawnPosition;
}
constexpr void GlobalNamespace::FlyingScoreSpawner_InitData::__cordl_internal_set_spawnPosition(::GlobalNamespace::FlyingScoreSpawner_SpawnPosition value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___spawnPosition = value;
}
inline void GlobalNamespace::FlyingScoreSpawner_InitData::_ctor(::GlobalNamespace::FlyingScoreSpawner_SpawnPosition spawnPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner_InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FlyingScoreSpawner_SpawnPosition>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, spawnPosition);
}
inline ::GlobalNamespace::FlyingScoreSpawner_InitData* GlobalNamespace::FlyingScoreSpawner_InitData::New_ctor(::GlobalNamespace::FlyingScoreSpawner_SpawnPosition spawnPosition) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FlyingScoreSpawner_InitData*>(spawnPosition));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlyingScoreSpawner_InitData::FlyingScoreSpawner_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::*)(int32_t)>(
    &::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57db984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::*)()>(
    &::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57dbd50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::*)()>(
    &::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x57dbd54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5*>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::*)()>(
    &::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57dbdb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::*)()>(
    &::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x57dbdb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::*)()>(
    &::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57dbdf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::FlyingScoreSpawner>& GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::FlyingScoreSpawner> const& GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::FlyingScoreSpawner> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IReadonlyCutScoreBuffer*& GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::__cordl_internal_get_cutScoreBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cutScoreBuffer;
}
constexpr ::GlobalNamespace::IReadonlyCutScoreBuffer* const& GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::__cordl_internal_get_cutScoreBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cutScoreBuffer;
}
constexpr void GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::__cordl_internal_set_cutScoreBuffer(::GlobalNamespace::IReadonlyCutScoreBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cutScoreBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::__cordl_internal_get_color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::__cordl_internal_get_color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr void GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::__cordl_internal_set_color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___color = value;
}
inline void GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5*>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5* GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5::FlyingScoreSpawner__SpawnFlyingScoreNextFrameCoroutine_d__5() {}
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreSpawner.SpawnFlyingScoreNextFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingScoreSpawner::*)(::GlobalNamespace::IReadonlyCutScoreBuffer*, ::UnityEngine::Color)>(
    &::GlobalNamespace::FlyingScoreSpawner::SpawnFlyingScoreNextFrame)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x57db8dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner*>::get(), "SpawnFlyingScoreNextFrame", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyCutScoreBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreSpawner.SpawnFlyingScoreNextFrameCoroutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (
    ::GlobalNamespace::FlyingScoreSpawner::*)(::GlobalNamespace::IReadonlyCutScoreBuffer*, ::UnityEngine::Color)>(&::GlobalNamespace::FlyingScoreSpawner::SpawnFlyingScoreNextFrameCoroutine)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x57db8fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner*>::get(), "SpawnFlyingScoreNextFrameCoroutine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyCutScoreBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreSpawner.SpawnFlyingScore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingScoreSpawner::*)(::GlobalNamespace::IReadonlyCutScoreBuffer*, ::UnityEngine::Color)>(
    &::GlobalNamespace::FlyingScoreSpawner::SpawnFlyingScore)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x57db98c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner*>::get(), "SpawnFlyingScore", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyCutScoreBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreSpawner.HandleFlyingObjectEffectDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingScoreSpawner::*)(::GlobalNamespace::FlyingObjectEffect*)>(
    &::GlobalNamespace::FlyingScoreSpawner::HandleFlyingObjectEffectDidFinish)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x57dbc14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner*>::get(), "HandleFlyingObjectEffectDidFinish", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FlyingObjectEffect*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreSpawner._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingScoreSpawner::*)()>(&::GlobalNamespace::FlyingScoreSpawner::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57dbd44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::FlyingScoreEffect_Pool*& GlobalNamespace::FlyingScoreSpawner::__cordl_internal_get__flyingScoreEffectPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flyingScoreEffectPool;
}
constexpr ::GlobalNamespace::FlyingScoreEffect_Pool* const& GlobalNamespace::FlyingScoreSpawner::__cordl_internal_get__flyingScoreEffectPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flyingScoreEffectPool;
}
constexpr void GlobalNamespace::FlyingScoreSpawner::__cordl_internal_set__flyingScoreEffectPool(::GlobalNamespace::FlyingScoreEffect_Pool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____flyingScoreEffectPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::FlyingScoreSpawner_InitData*& GlobalNamespace::FlyingScoreSpawner::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::GlobalNamespace::FlyingScoreSpawner_InitData* const& GlobalNamespace::FlyingScoreSpawner::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::FlyingScoreSpawner::__cordl_internal_set__initData(::GlobalNamespace::FlyingScoreSpawner_InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::FlyingScoreSpawner::SpawnFlyingScoreNextFrame(::GlobalNamespace::IReadonlyCutScoreBuffer* cutScoreBuffer, ::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner*>::get(), "SpawnFlyingScoreNextFrame", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyCutScoreBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cutScoreBuffer, color);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::FlyingScoreSpawner::SpawnFlyingScoreNextFrameCoroutine(::GlobalNamespace::IReadonlyCutScoreBuffer* cutScoreBuffer,
                                                                                                                   ::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner*>::get(), "SpawnFlyingScoreNextFrameCoroutine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyCutScoreBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, cutScoreBuffer, color);
}
inline void GlobalNamespace::FlyingScoreSpawner::SpawnFlyingScore(::GlobalNamespace::IReadonlyCutScoreBuffer* cutScoreBuffer, ::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner*>::get(), "SpawnFlyingScore", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyCutScoreBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cutScoreBuffer, color);
}
inline void GlobalNamespace::FlyingScoreSpawner::HandleFlyingObjectEffectDidFinish(::GlobalNamespace::FlyingObjectEffect* flyingObjectEffect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner*>::get(), "HandleFlyingObjectEffectDidFinish", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FlyingObjectEffect*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, flyingObjectEffect);
}
inline void GlobalNamespace::FlyingScoreSpawner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FlyingScoreSpawner* GlobalNamespace::FlyingScoreSpawner::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FlyingScoreSpawner*>());
}
/// @brief Convert operator to "::GlobalNamespace::IFlyingObjectEffectDidFinishEvent"
constexpr GlobalNamespace::FlyingScoreSpawner::operator ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*() noexcept {
  return static_cast<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IFlyingObjectEffectDidFinishEvent"
constexpr ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent* GlobalNamespace::FlyingScoreSpawner::i___GlobalNamespace__IFlyingObjectEffectDidFinishEvent() noexcept {
  return static_cast<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlyingScoreSpawner::FlyingScoreSpawner() {}
