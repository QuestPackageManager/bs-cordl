#pragma once
// IWYU pragma private; include "GlobalNamespace/SliderController.hpp"
#include "GlobalNamespace/zzzz__SliderControllerBase_impl.hpp"
#include "GlobalNamespace/zzzz__SliderSpawnData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__FixedUpdateVector3SmoothValue_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapObjectController_def.hpp"
#include "GlobalNamespace/zzzz__IJumpOffsetYProvider_def.hpp"
#include "GlobalNamespace/zzzz__ILazyCopyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__ISliderDidDissolveEvent_def.hpp"
#include "GlobalNamespace/zzzz__ISliderDidFinishJumpEvent_def.hpp"
#include "GlobalNamespace/zzzz__ISliderDidStartDissolvingEvent_def.hpp"
#include "GlobalNamespace/zzzz__ISliderHeadDidMovePastCutMarkEvent_def.hpp"
#include "GlobalNamespace/zzzz__ISliderTailDidMovePastCutMarkEvent_def.hpp"
#include "GlobalNamespace/zzzz__IVariableMovementDataProvider_def.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "GlobalNamespace/zzzz__SliderIntensityEffect_def.hpp"
#include "GlobalNamespace/zzzz__SliderMeshController_def.hpp"
#include "GlobalNamespace/zzzz__SliderMovement_def.hpp"
#include "GlobalNamespace/zzzz__SliderSpawnData_def.hpp"
#include "GlobalNamespace/zzzz__TimeHelper_def.hpp"
#include "GlobalNamespace/zzzz__VariableMovementDataProvider_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SliderController_LengthType::SliderController_LengthType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderController_LengthType::SliderController_LengthType() {}
constexpr ::GlobalNamespace::SliderController_LengthType GlobalNamespace::SliderController_LengthType::Short{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::SliderController_LengthType GlobalNamespace::SliderController_LengthType::Medium{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::SliderController_LengthType GlobalNamespace::SliderController_LengthType::Long{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::Pool_SliderController_Short._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Pool_SliderController_Short::*)()>(&::GlobalNamespace::Pool_SliderController_Short::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x597791c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Pool_SliderController_Short*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Pool_SliderController_Short::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Pool_SliderController_Short*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Pool_SliderController_Short* GlobalNamespace::Pool_SliderController_Short::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Pool_SliderController_Short*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Pool_SliderController_Short::Pool_SliderController_Short() {}
//  Writing Method size for method: ::GlobalNamespace::Pool_SliderController_Medium._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Pool_SliderController_Medium::*)()>(&::GlobalNamespace::Pool_SliderController_Medium::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5977958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Pool_SliderController_Medium*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Pool_SliderController_Medium::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Pool_SliderController_Medium*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Pool_SliderController_Medium* GlobalNamespace::Pool_SliderController_Medium::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Pool_SliderController_Medium*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Pool_SliderController_Medium::Pool_SliderController_Medium() {}
//  Writing Method size for method: ::GlobalNamespace::Pool_SliderController_Long._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Pool_SliderController_Long::*)()>(&::GlobalNamespace::Pool_SliderController_Long::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5977994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Pool_SliderController_Long*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Pool_SliderController_Long::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Pool_SliderController_Long*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Pool_SliderController_Long* GlobalNamespace::Pool_SliderController_Long::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Pool_SliderController_Long*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Pool_SliderController_Long::Pool_SliderController_Long() {}
//  Writing Method size for method: ::GlobalNamespace::SliderController_Pool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderController_Pool::*)(
    ::GlobalNamespace::VariableMovementDataProvider*, ::GlobalNamespace::Pool_SliderController_Short*, ::GlobalNamespace::Pool_SliderController_Medium*,
    ::GlobalNamespace::Pool_SliderController_Long*)>(&::GlobalNamespace::SliderController_Pool::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59777bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController_Pool*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::GlobalNamespace::VariableMovementDataProvider*>(), ::i2c::type_of<::GlobalNamespace::Pool_SliderController_Short*>(),
                                                    ::i2c::type_of<::GlobalNamespace::Pool_SliderController_Medium*>(), ::i2c::type_of<::GlobalNamespace::Pool_SliderController_Long*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController_Pool.GetPool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::SliderController>>* (
    ::GlobalNamespace::SliderController_Pool::*)(::GlobalNamespace::SliderController_LengthType)>(&::GlobalNamespace::SliderController_Pool::GetPool)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x59777c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController_Pool*>(), { "GetPool", {}, { ::i2c::type_of<::GlobalNamespace::SliderController_LengthType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController_Pool.GetLengthFromSliderData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SliderController_LengthType (::GlobalNamespace::SliderController_Pool::*)(
    ::GlobalNamespace::SliderData*, ::GlobalNamespace::SliderSpawnData)>(&::GlobalNamespace::SliderController_Pool::GetLengthFromSliderData)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5977878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController_Pool*>(),
                                                { "GetLengthFromSliderData", {}, { ::i2c::type_of<::GlobalNamespace::SliderData*>(), ::i2c::type_of<::GlobalNamespace::SliderSpawnData>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::VariableMovementDataProvider*& GlobalNamespace::SliderController_Pool::__cordl_internal_get__variableMovementDataProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variableMovementDataProvider;
}
constexpr ::GlobalNamespace::VariableMovementDataProvider* const& GlobalNamespace::SliderController_Pool::__cordl_internal_get__variableMovementDataProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variableMovementDataProvider;
}
constexpr void GlobalNamespace::SliderController_Pool::__cordl_internal_set__variableMovementDataProvider(::GlobalNamespace::VariableMovementDataProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____variableMovementDataProvider = value;
}
constexpr ::GlobalNamespace::Pool_SliderController_Short*& GlobalNamespace::SliderController_Pool::__cordl_internal_get__shortPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shortPool;
}
constexpr ::GlobalNamespace::Pool_SliderController_Short* const& GlobalNamespace::SliderController_Pool::__cordl_internal_get__shortPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shortPool;
}
constexpr void GlobalNamespace::SliderController_Pool::__cordl_internal_set__shortPool(::GlobalNamespace::Pool_SliderController_Short* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shortPool = value;
}
constexpr ::GlobalNamespace::Pool_SliderController_Medium*& GlobalNamespace::SliderController_Pool::__cordl_internal_get__mediumPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mediumPool;
}
constexpr ::GlobalNamespace::Pool_SliderController_Medium* const& GlobalNamespace::SliderController_Pool::__cordl_internal_get__mediumPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mediumPool;
}
constexpr void GlobalNamespace::SliderController_Pool::__cordl_internal_set__mediumPool(::GlobalNamespace::Pool_SliderController_Medium* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mediumPool = value;
}
constexpr ::GlobalNamespace::Pool_SliderController_Long*& GlobalNamespace::SliderController_Pool::__cordl_internal_get__longPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____longPool;
}
constexpr ::GlobalNamespace::Pool_SliderController_Long* const& GlobalNamespace::SliderController_Pool::__cordl_internal_get__longPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____longPool;
}
constexpr void GlobalNamespace::SliderController_Pool::__cordl_internal_set__longPool(::GlobalNamespace::Pool_SliderController_Long* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____longPool = value;
}
inline void GlobalNamespace::SliderController_Pool::_ctor(::GlobalNamespace::VariableMovementDataProvider* variableMovementDataProvider, ::GlobalNamespace::Pool_SliderController_Short* shortPool,
                                                          ::GlobalNamespace::Pool_SliderController_Medium* mediumPool, ::GlobalNamespace::Pool_SliderController_Long* longPool) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController_Pool*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::VariableMovementDataProvider*>(), ::i2c::type_of<::GlobalNamespace::Pool_SliderController_Short*>(),
                                                  ::i2c::type_of<::GlobalNamespace::Pool_SliderController_Medium*>(), ::i2c::type_of<::GlobalNamespace::Pool_SliderController_Long*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, variableMovementDataProvider, shortPool, mediumPool, longPool);
}
inline ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::SliderController>>* GlobalNamespace::SliderController_Pool::GetPool(::GlobalNamespace::SliderController_LengthType lengthType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController_Pool*>(), { "GetPool", {}, { ::i2c::type_of<::GlobalNamespace::SliderController_LengthType>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::SliderController>>*>(this, ___internal_method, lengthType);
}
inline ::GlobalNamespace::SliderController_LengthType GlobalNamespace::SliderController_Pool::GetLengthFromSliderData(::GlobalNamespace::SliderData* sliderNoteData,
                                                                                                                      ::GlobalNamespace::SliderSpawnData sliderSpawnData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController_Pool*>(),
                                              { "GetLengthFromSliderData", {}, { ::i2c::type_of<::GlobalNamespace::SliderData*>(), ::i2c::type_of<::GlobalNamespace::SliderSpawnData>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderController_LengthType>(this, ___internal_method, sliderNoteData, sliderSpawnData);
}
inline ::GlobalNamespace::SliderController_Pool* GlobalNamespace::SliderController_Pool::New_ctor(::GlobalNamespace::VariableMovementDataProvider* variableMovementDataProvider,
                                                                                                  ::GlobalNamespace::Pool_SliderController_Short* shortPool,
                                                                                                  ::GlobalNamespace::Pool_SliderController_Medium* mediumPool,
                                                                                                  ::GlobalNamespace::Pool_SliderController_Long* longPool) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SliderController_Pool*>(variableMovementDataProvider, shortPool, mediumPool, longPool));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderController_Pool::SliderController_Pool() {}
//  Writing Method size for method: ::GlobalNamespace::SliderController__DissolveCoroutine_d__72._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderController__DissolveCoroutine_d__72::*)(int32_t)>(
    &::GlobalNamespace::SliderController__DissolveCoroutine_d__72::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5976d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController__DissolveCoroutine_d__72*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController__DissolveCoroutine_d__72.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderController__DissolveCoroutine_d__72::*)()>(
    &::GlobalNamespace::SliderController__DissolveCoroutine_d__72::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59779d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController__DissolveCoroutine_d__72*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController__DissolveCoroutine_d__72.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SliderController__DissolveCoroutine_d__72::*)()>(
    &::GlobalNamespace::SliderController__DissolveCoroutine_d__72::MoveNext)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x59779d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController__DissolveCoroutine_d__72*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController__DissolveCoroutine_d__72.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::SliderController__DissolveCoroutine_d__72::*)()>(
    &::GlobalNamespace::SliderController__DissolveCoroutine_d__72::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5977d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController__DissolveCoroutine_d__72*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController__DissolveCoroutine_d__72.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderController__DissolveCoroutine_d__72::*)()>(
    &::GlobalNamespace::SliderController__DissolveCoroutine_d__72::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5977d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController__DissolveCoroutine_d__72*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController__DissolveCoroutine_d__72.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::SliderController__DissolveCoroutine_d__72::*)()>(
    &::GlobalNamespace::SliderController__DissolveCoroutine_d__72::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5977d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController__DissolveCoroutine_d__72*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::SliderController__DissolveCoroutine_d__72::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::SliderController__DissolveCoroutine_d__72::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::SliderController__DissolveCoroutine_d__72::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::SliderController__DissolveCoroutine_d__72::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::SliderController__DissolveCoroutine_d__72::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::SliderController__DissolveCoroutine_d__72::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::SliderController>& GlobalNamespace::SliderController__DissolveCoroutine_d__72::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::SliderController> const& GlobalNamespace::SliderController__DissolveCoroutine_d__72::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::SliderController__DissolveCoroutine_d__72::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SliderController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr float_t& GlobalNamespace::SliderController__DissolveCoroutine_d__72::__cordl_internal_get_duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr float_t const& GlobalNamespace::SliderController__DissolveCoroutine_d__72::__cordl_internal_get_duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr void GlobalNamespace::SliderController__DissolveCoroutine_d__72::__cordl_internal_set_duration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___duration = value;
}
inline void GlobalNamespace::SliderController__DissolveCoroutine_d__72::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController__DissolveCoroutine_d__72*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::SliderController__DissolveCoroutine_d__72::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController__DissolveCoroutine_d__72*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SliderController__DissolveCoroutine_d__72::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController__DissolveCoroutine_d__72*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::SliderController__DissolveCoroutine_d__72::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController__DissolveCoroutine_d__72*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController__DissolveCoroutine_d__72::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController__DissolveCoroutine_d__72*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::SliderController__DissolveCoroutine_d__72::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController__DissolveCoroutine_d__72*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::GlobalNamespace::SliderController__DissolveCoroutine_d__72* GlobalNamespace::SliderController__DissolveCoroutine_d__72::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SliderController__DissolveCoroutine_d__72*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::SliderController__DissolveCoroutine_d__72::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::SliderController__DissolveCoroutine_d__72::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::SliderController__DissolveCoroutine_d__72::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::SliderController__DissolveCoroutine_d__72::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::SliderController__DissolveCoroutine_d__72::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::SliderController__DissolveCoroutine_d__72::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderController__DissolveCoroutine_d__72::SliderController__DissolveCoroutine_d__72() {}
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_sliderDidFinishJumpEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>* (::GlobalNamespace::SliderController::*)()>(
    &::GlobalNamespace::SliderController::get_sliderDidFinishJumpEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597409c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_sliderDidFinishJumpEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_sliderDidStartDissolvingEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>* (::GlobalNamespace::SliderController::*)()>(
    &::GlobalNamespace::SliderController::get_sliderDidStartDissolvingEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59740a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_sliderDidStartDissolvingEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_sliderDidDissolveEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>* (::GlobalNamespace::SliderController::*)()>(
    &::GlobalNamespace::SliderController::get_sliderDidDissolveEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59740ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_sliderDidDissolveEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_sliderHeadDidMovePastCutMark
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>* (::GlobalNamespace::SliderController::*)()>(
    &::GlobalNamespace::SliderController::get_sliderHeadDidMovePastCutMark)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59740b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_sliderHeadDidMovePastCutMark", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_sliderTailDidMovePastCutMark
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>* (::GlobalNamespace::SliderController::*)()>(
    &::GlobalNamespace::SliderController::get_sliderTailDidMovePastCutMark)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59740bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_sliderTailDidMovePastCutMark", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_lengthType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SliderController_LengthType (::GlobalNamespace::SliderController::*)()>(
    &::GlobalNamespace::SliderController::get_lengthType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59740c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_lengthType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_sliderData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SliderData* (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::get_sliderData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59740cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_sliderData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_sliderSpawnData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SliderSpawnData (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::get_sliderSpawnData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59740d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_sliderSpawnData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_saberInteractionParam
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::get_saberInteractionParam)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x59740e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_saberInteractionParam", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_sliderMeshController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SliderMeshController> (::GlobalNamespace::SliderController::*)()>(
    &::GlobalNamespace::SliderController::get_sliderMeshController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_sliderMeshController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_sliderMovement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SliderMovement> (::GlobalNamespace::SliderController::*)()>(
    &::GlobalNamespace::SliderController::get_sliderMovement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597414c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_sliderMovement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_initColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::get_initColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5974154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_initColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_randomValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::get_randomValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_randomValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_zDistanceBetweenNotes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::get_zDistanceBetweenNotes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_zDistanceBetweenNotes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_sliderDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::get_sliderDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_sliderDuration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_jumpOffsetY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::get_jumpOffsetY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_jumpOffsetY", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_closeSmoothedSaberInteractionPos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::FixedUpdateVector3SmoothValue* (::GlobalNamespace::SliderController::*)()>(
    &::GlobalNamespace::SliderController::get_closeSmoothedSaberInteractionPos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_closeSmoothedSaberInteractionPos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.get_sliderIntensityEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SliderIntensityEffect> (::GlobalNamespace::SliderController::*)()>(
    &::GlobalNamespace::SliderController::get_sliderIntensityEffect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5974188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_sliderIntensityEffect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderController::*)(
    ::GlobalNamespace::SliderController_LengthType, ::GlobalNamespace::SliderData*, ::by_ref<::GlobalNamespace::SliderSpawnData>, float_t, float_t)>(&::GlobalNamespace::SliderController::Init)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x5974190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(),
                                                             { "Init",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::SliderController_LengthType>(), ::i2c::type_of<::GlobalNamespace::SliderData*>(),
                                                                 ::i2c::type_of<::by_ref<::GlobalNamespace::SliderSpawnData>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::Awake)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5975584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::Start)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x597596c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::OnDestroy)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x5975ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59761c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.FixedUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::FixedUpdate)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5976364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "FixedUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.ManualUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::ManualUpdate)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x59761c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "ManualUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.UpdateMaterialPropertyBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderController::*)(float_t)>(&::GlobalNamespace::SliderController::UpdateMaterialPropertyBlock)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x59754ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "UpdateMaterialPropertyBlock", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.DissolveCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::SliderController::*)(float_t)>(
    &::GlobalNamespace::SliderController::DissolveCoroutine)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5976cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "DissolveCoroutine", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.Dissolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderController::*)(float_t)>(&::GlobalNamespace::SliderController::Dissolve)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5976d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "Dissolve", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.Hide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderController::*)(bool)>(&::GlobalNamespace::SliderController::Hide)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5976ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "Hide", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.Pause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderController::*)(bool)>(&::GlobalNamespace::SliderController::Pause)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5976e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "Pause", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.IsNoteStartOfThisSlider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SliderController::*)(::GlobalNamespace::NoteData*)>(&::GlobalNamespace::SliderController::IsNoteStartOfThisSlider)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5976e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "IsNoteStartOfThisSlider", {}, { ::i2c::type_of<::GlobalNamespace::NoteData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.HandleMovementDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::HandleMovementDidFinish)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5976f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "HandleMovementDidFinish", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.HandleHeadDidMovePastCutMark
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::HandleHeadDidMovePastCutMark)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x59770a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "HandleHeadDidMovePastCutMark", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.HandleTailDidMovePastCutMark
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::HandleTailDidMovePastCutMark)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5977288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "HandleTailDidMovePastCutMark", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.HandleNoteWasMissed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderController::*)(::GlobalNamespace::NoteController*)>(&::GlobalNamespace::SliderController::HandleNoteWasMissed)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x597742c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "HandleNoteWasMissed", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.HandleNoteWasCut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderController::*)(::GlobalNamespace::NoteController*, ::by_ref<::GlobalNamespace::NoteCutInfo>)>(
    &::GlobalNamespace::SliderController::HandleNoteWasCut)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x59774a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(),
                                                { "HandleNoteWasCut", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NoteCutInfo>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.HandleFadeInDidStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::HandleFadeInDidStart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5977538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "HandleFadeInDidStart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.SetSaberAttraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderController::*)(bool)>(&::GlobalNamespace::SliderController::SetSaberAttraction)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x59753d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "SetSaberAttraction", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController.GetSaberInteractionPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::Saber*)>(&::GlobalNamespace::SliderController::GetSaberInteractionPoint)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x597545c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "GetSaberInteractionPoint", {}, { ::i2c::type_of<::GlobalNamespace::Saber*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderController::*)()>(&::GlobalNamespace::SliderController::_ctor)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x59775c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SliderIntensityEffect>& GlobalNamespace::SliderController::__cordl_internal_get__sliderIntensityEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderIntensityEffect;
}
constexpr ::UnityW<::GlobalNamespace::SliderIntensityEffect> const& GlobalNamespace::SliderController::__cordl_internal_get__sliderIntensityEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderIntensityEffect;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__sliderIntensityEffect(::UnityW<::GlobalNamespace::SliderIntensityEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sliderIntensityEffect = value;
}
constexpr ::UnityW<::GlobalNamespace::SliderMeshController>& GlobalNamespace::SliderController::__cordl_internal_get__sliderMeshController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderMeshController;
}
constexpr ::UnityW<::GlobalNamespace::SliderMeshController> const& GlobalNamespace::SliderController::__cordl_internal_get__sliderMeshController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderMeshController;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__sliderMeshController(::UnityW<::GlobalNamespace::SliderMeshController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sliderMeshController = value;
}
constexpr ::UnityW<::GlobalNamespace::SliderMovement>& GlobalNamespace::SliderController::__cordl_internal_get__sliderMovement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderMovement;
}
constexpr ::UnityW<::GlobalNamespace::SliderMovement> const& GlobalNamespace::SliderController::__cordl_internal_get__sliderMovement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderMovement;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__sliderMovement(::UnityW<::GlobalNamespace::SliderMovement> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sliderMovement = value;
}
constexpr float_t& GlobalNamespace::SliderController::__cordl_internal_get__closeInteractionSaberPosSmoothParam() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____closeInteractionSaberPosSmoothParam;
}
constexpr float_t const& GlobalNamespace::SliderController::__cordl_internal_get__closeInteractionSaberPosSmoothParam() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____closeInteractionSaberPosSmoothParam;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__closeInteractionSaberPosSmoothParam(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____closeInteractionSaberPosSmoothParam = value;
}
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::SliderController::__cordl_internal_get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::GlobalNamespace::ColorManager* const& GlobalNamespace::SliderController::__cordl_internal_get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorManager = value;
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::SliderController::__cordl_internal_get__beatmapObjectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr ::GlobalNamespace::BeatmapObjectManager* const& GlobalNamespace::SliderController::__cordl_internal_get__beatmapObjectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapObjectManager = value;
}
constexpr ::UnityW<::GlobalNamespace::SaberManager>& GlobalNamespace::SliderController::__cordl_internal_get__saberManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberManager;
}
constexpr ::UnityW<::GlobalNamespace::SaberManager> const& GlobalNamespace::SliderController::__cordl_internal_get__saberManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberManager;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__saberManager(::UnityW<::GlobalNamespace::SaberManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberManager = value;
}
constexpr ::GlobalNamespace::IVariableMovementDataProvider*& GlobalNamespace::SliderController::__cordl_internal_get__variableMovementDataProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variableMovementDataProvider;
}
constexpr ::GlobalNamespace::IVariableMovementDataProvider* const& GlobalNamespace::SliderController::__cordl_internal_get__variableMovementDataProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variableMovementDataProvider;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__variableMovementDataProvider(::GlobalNamespace::IVariableMovementDataProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____variableMovementDataProvider = value;
}
constexpr ::GlobalNamespace::IJumpOffsetYProvider*& GlobalNamespace::SliderController::__cordl_internal_get__jumpOffsetYProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpOffsetYProvider;
}
constexpr ::GlobalNamespace::IJumpOffsetYProvider* const& GlobalNamespace::SliderController::__cordl_internal_get__jumpOffsetYProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpOffsetYProvider;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__jumpOffsetYProvider(::GlobalNamespace::IJumpOffsetYProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____jumpOffsetYProvider = value;
}
constexpr ::UnityW<::GlobalNamespace::TimeHelper>& GlobalNamespace::SliderController::__cordl_internal_get__timeHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeHelper;
}
constexpr ::UnityW<::GlobalNamespace::TimeHelper> const& GlobalNamespace::SliderController::__cordl_internal_get__timeHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeHelper;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__timeHelper(::UnityW<::GlobalNamespace::TimeHelper> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeHelper = value;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>*& GlobalNamespace::SliderController::__cordl_internal_get__sliderDidFinishMovement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderDidFinishMovement;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>* const& GlobalNamespace::SliderController::__cordl_internal_get__sliderDidFinishMovement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderDidFinishMovement;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__sliderDidFinishMovement(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sliderDidFinishMovement = value;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>*& GlobalNamespace::SliderController::__cordl_internal_get__sliderDidStartDissolving() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderDidStartDissolving;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>* const& GlobalNamespace::SliderController::__cordl_internal_get__sliderDidStartDissolving() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderDidStartDissolving;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__sliderDidStartDissolving(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sliderDidStartDissolving = value;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>*& GlobalNamespace::SliderController::__cordl_internal_get__sliderDidDissolve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderDidDissolve;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>* const& GlobalNamespace::SliderController::__cordl_internal_get__sliderDidDissolve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderDidDissolve;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__sliderDidDissolve(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sliderDidDissolve = value;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>*& GlobalNamespace::SliderController::__cordl_internal_get__sliderHeadDidMovePastCutMark() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderHeadDidMovePastCutMark;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>* const&
GlobalNamespace::SliderController::__cordl_internal_get__sliderHeadDidMovePastCutMark() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderHeadDidMovePastCutMark;
}
constexpr void
GlobalNamespace::SliderController::__cordl_internal_set__sliderHeadDidMovePastCutMark(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sliderHeadDidMovePastCutMark = value;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>*& GlobalNamespace::SliderController::__cordl_internal_get__sliderTailDidMovePastCutMark() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderTailDidMovePastCutMark;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>* const&
GlobalNamespace::SliderController::__cordl_internal_get__sliderTailDidMovePastCutMark() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderTailDidMovePastCutMark;
}
constexpr void
GlobalNamespace::SliderController::__cordl_internal_set__sliderTailDidMovePastCutMark(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sliderTailDidMovePastCutMark = value;
}
constexpr ::GlobalNamespace::SliderController_LengthType& GlobalNamespace::SliderController::__cordl_internal_get__lengthType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lengthType;
}
constexpr ::GlobalNamespace::SliderController_LengthType const& GlobalNamespace::SliderController::__cordl_internal_get__lengthType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lengthType;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__lengthType(::GlobalNamespace::SliderController_LengthType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lengthType = value;
}
constexpr ::GlobalNamespace::SliderData*& GlobalNamespace::SliderController::__cordl_internal_get__sliderData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderData;
}
constexpr ::GlobalNamespace::SliderData* const& GlobalNamespace::SliderController::__cordl_internal_get__sliderData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderData;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__sliderData(::GlobalNamespace::SliderData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sliderData = value;
}
constexpr ::GlobalNamespace::SliderSpawnData& GlobalNamespace::SliderController::__cordl_internal_get__sliderSpawnData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderSpawnData;
}
constexpr ::GlobalNamespace::SliderSpawnData const& GlobalNamespace::SliderController::__cordl_internal_get__sliderSpawnData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderSpawnData;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__sliderSpawnData(::GlobalNamespace::SliderSpawnData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sliderSpawnData = value;
}
constexpr ::UnityW<::GlobalNamespace::Saber>& GlobalNamespace::SliderController::__cordl_internal_get__saber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saber;
}
constexpr ::UnityW<::GlobalNamespace::Saber> const& GlobalNamespace::SliderController::__cordl_internal_get__saber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saber;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__saber(::UnityW<::GlobalNamespace::Saber> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saber = value;
}
constexpr float_t& GlobalNamespace::SliderController::__cordl_internal_get__sliderDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderDuration;
}
constexpr float_t const& GlobalNamespace::SliderController::__cordl_internal_get__sliderDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderDuration;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__sliderDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sliderDuration = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::SliderController::__cordl_internal_get__initColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SliderController::__cordl_internal_get__initColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initColor;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__initColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initColor = value;
}
constexpr bool& GlobalNamespace::SliderController::__cordl_internal_get__attractingSaber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attractingSaber;
}
constexpr bool const& GlobalNamespace::SliderController::__cordl_internal_get__attractingSaber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attractingSaber;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__attractingSaber(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____attractingSaber = value;
}
constexpr float_t& GlobalNamespace::SliderController::__cordl_internal_get__randomValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomValue;
}
constexpr float_t const& GlobalNamespace::SliderController::__cordl_internal_get__randomValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomValue;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__randomValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____randomValue = value;
}
constexpr float_t& GlobalNamespace::SliderController::__cordl_internal_get__zDistanceBetweenNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zDistanceBetweenNotes;
}
constexpr float_t const& GlobalNamespace::SliderController::__cordl_internal_get__zDistanceBetweenNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zDistanceBetweenNotes;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__zDistanceBetweenNotes(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____zDistanceBetweenNotes = value;
}
constexpr float_t& GlobalNamespace::SliderController::__cordl_internal_get__jumpOffsetY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpOffsetY;
}
constexpr float_t const& GlobalNamespace::SliderController::__cordl_internal_get__jumpOffsetY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpOffsetY;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__jumpOffsetY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____jumpOffsetY = value;
}
constexpr ::GlobalNamespace::FixedUpdateVector3SmoothValue*& GlobalNamespace::SliderController::__cordl_internal_get__closeSmoothedSaberInteractionPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____closeSmoothedSaberInteractionPos;
}
constexpr ::GlobalNamespace::FixedUpdateVector3SmoothValue* const& GlobalNamespace::SliderController::__cordl_internal_get__closeSmoothedSaberInteractionPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____closeSmoothedSaberInteractionPos;
}
constexpr void GlobalNamespace::SliderController::__cordl_internal_set__closeSmoothedSaberInteractionPos(::GlobalNamespace::FixedUpdateVector3SmoothValue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____closeSmoothedSaberInteractionPos = value;
}
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>* GlobalNamespace::SliderController::get_sliderDidFinishJumpEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_sliderDidFinishJumpEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidFinishJumpEvent*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>* GlobalNamespace::SliderController::get_sliderDidStartDissolvingEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_sliderDidStartDissolvingEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidStartDissolvingEvent*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>* GlobalNamespace::SliderController::get_sliderDidDissolveEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_sliderDidDissolveEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderDidDissolveEvent*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>* GlobalNamespace::SliderController::get_sliderHeadDidMovePastCutMark() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_sliderHeadDidMovePastCutMark", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderHeadDidMovePastCutMarkEvent*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>* GlobalNamespace::SliderController::get_sliderTailDidMovePastCutMark() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_sliderTailDidMovePastCutMark", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::ISliderTailDidMovePastCutMarkEvent*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::SliderController_LengthType GlobalNamespace::SliderController::get_lengthType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_lengthType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderController_LengthType>(this, ___internal_method);
}
inline ::GlobalNamespace::SliderData* GlobalNamespace::SliderController::get_sliderData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_sliderData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderData*>(this, ___internal_method);
}
inline ::GlobalNamespace::SliderSpawnData GlobalNamespace::SliderController::get_sliderSpawnData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_sliderSpawnData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderSpawnData>(this, ___internal_method);
}
inline float_t GlobalNamespace::SliderController::get_saberInteractionParam() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_saberInteractionParam", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::SliderMeshController> GlobalNamespace::SliderController::get_sliderMeshController() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_sliderMeshController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SliderMeshController>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::SliderMovement> GlobalNamespace::SliderController::get_sliderMovement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_sliderMovement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SliderMovement>>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::SliderController::get_initColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_initColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline float_t GlobalNamespace::SliderController::get_randomValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_randomValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::SliderController::get_zDistanceBetweenNotes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_zDistanceBetweenNotes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::SliderController::get_sliderDuration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_sliderDuration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::SliderController::get_jumpOffsetY() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_jumpOffsetY", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::GlobalNamespace::FixedUpdateVector3SmoothValue* GlobalNamespace::SliderController::get_closeSmoothedSaberInteractionPos() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_closeSmoothedSaberInteractionPos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FixedUpdateVector3SmoothValue*>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::SliderIntensityEffect> GlobalNamespace::SliderController::get_sliderIntensityEffect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "get_sliderIntensityEffect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SliderIntensityEffect>>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController::Init(::GlobalNamespace::SliderController_LengthType lengthType, ::GlobalNamespace::SliderData* sliderData,
                                                    ::by_ref<::GlobalNamespace::SliderSpawnData> sliderSpawnData, float_t noteUniformScale, float_t randomValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(),
                                                           { "Init",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::SliderController_LengthType>(), ::i2c::type_of<::GlobalNamespace::SliderData*>(),
                                                               ::i2c::type_of<::by_ref<::GlobalNamespace::SliderSpawnData>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lengthType, sliderData, sliderSpawnData, noteUniformScale, randomValue);
}
inline void GlobalNamespace::SliderController::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController::FixedUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "FixedUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController::ManualUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "ManualUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController::UpdateMaterialPropertyBlock(float_t timeSinceHeadNoteJump) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "UpdateMaterialPropertyBlock", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeSinceHeadNoteJump);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::SliderController::DissolveCoroutine(float_t duration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "DissolveCoroutine", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, duration);
}
inline void GlobalNamespace::SliderController::Dissolve(float_t duration) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "Dissolve", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, duration);
}
inline void GlobalNamespace::SliderController::Hide(bool hide) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "Hide", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hide);
}
inline void GlobalNamespace::SliderController::Pause(bool pause) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "Pause", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pause);
}
inline bool GlobalNamespace::SliderController::IsNoteStartOfThisSlider(::GlobalNamespace::NoteData* noteData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "IsNoteStartOfThisSlider", {}, { ::i2c::type_of<::GlobalNamespace::NoteData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, noteData);
}
inline void GlobalNamespace::SliderController::HandleMovementDidFinish() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "HandleMovementDidFinish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController::HandleHeadDidMovePastCutMark() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "HandleHeadDidMovePastCutMark", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController::HandleTailDidMovePastCutMark() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "HandleTailDidMovePastCutMark", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController::HandleNoteWasMissed(::GlobalNamespace::NoteController* noteController) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "HandleNoteWasMissed", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::SliderController::HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ::by_ref<::GlobalNamespace::NoteCutInfo> noteCutInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(),
                                              { "HandleNoteWasCut", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::NoteCutInfo>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController, noteCutInfo);
}
inline void GlobalNamespace::SliderController::HandleFadeInDidStart() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "HandleFadeInDidStart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SliderController::SetSaberAttraction(bool saberAttraction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "SetSaberAttraction", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saberAttraction);
}
inline ::UnityEngine::Vector3 GlobalNamespace::SliderController::GetSaberInteractionPoint(::GlobalNamespace::Saber* saber) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { "GetSaberInteractionPoint", {}, { ::i2c::type_of<::GlobalNamespace::Saber*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, saber);
}
inline void GlobalNamespace::SliderController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SliderController* GlobalNamespace::SliderController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SliderController*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBeatmapObjectController"
constexpr GlobalNamespace::SliderController::operator ::GlobalNamespace::IBeatmapObjectController*() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapObjectController*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBeatmapObjectController"
constexpr ::GlobalNamespace::IBeatmapObjectController* GlobalNamespace::SliderController::i___GlobalNamespace__IBeatmapObjectController() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapObjectController*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderController::SliderController() {}
