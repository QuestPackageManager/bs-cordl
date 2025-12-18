#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatLine.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__BeatLine_def.hpp"
#include "GlobalNamespace/zzzz__BeatLine_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "GlobalNamespace/zzzz__VariableMovementDataProvider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatLine_Pool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatLine_Pool::*)()>(&::GlobalNamespace::BeatLine_Pool::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x57149b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatLine_Pool*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatLine_Pool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatLine_Pool*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatLine_Pool* GlobalNamespace::BeatLine_Pool::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatLine_Pool*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatLine_Pool::BeatLine_Pool() {}
//  Writing Method size for method: ::GlobalNamespace::BeatLine.get_isFinished
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BeatLine::*)()>(&::GlobalNamespace::BeatLine::get_isFinished)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5714574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatLine*>::get(), "get_isFinished",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatLine.get_rotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatLine::*)()>(&::GlobalNamespace::BeatLine::get_rotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57145cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatLine*>::get(), "get_rotation",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatLine.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatLine::*)(::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::BeatLine::Init)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x57145d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatLine*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatLine.ColorWasSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatLine::*)(::UnityEngine::Color)>(&::GlobalNamespace::BeatLine::ColorWasSet)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57146a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatLine*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatLine*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatLine.AddHighlight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatLine::*)(float_t)>(&::GlobalNamespace::BeatLine::AddHighlight)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x57146ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatLine*>::get(), "AddHighlight", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatLine.ManualUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatLine::*)(float_t)>(&::GlobalNamespace::BeatLine::ManualUpdate)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5714760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatLine*>::get(), "ManualUpdate", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatLine._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatLine::*)()>(&::GlobalNamespace::BeatLine::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x57148f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatLine*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight>& GlobalNamespace::BeatLine::__cordl_internal_get__tubeBloomPrePassLight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tubeBloomPrePassLight;
}
constexpr ::UnityW<::GlobalNamespace::TubeBloomPrePassLight> const& GlobalNamespace::BeatLine::__cordl_internal_get__tubeBloomPrePassLight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tubeBloomPrePassLight;
}
constexpr void GlobalNamespace::BeatLine::__cordl_internal_set__tubeBloomPrePassLight(::UnityW<::GlobalNamespace::TubeBloomPrePassLight> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tubeBloomPrePassLight)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::BeatLine::__cordl_internal_get__arriveFadeCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arriveFadeCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::BeatLine::__cordl_internal_get__arriveFadeCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arriveFadeCurve;
}
constexpr void GlobalNamespace::BeatLine::__cordl_internal_set__arriveFadeCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arriveFadeCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::BeatLine::__cordl_internal_get__jumpFadeCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpFadeCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::BeatLine::__cordl_internal_get__jumpFadeCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpFadeCurve;
}
constexpr void GlobalNamespace::BeatLine::__cordl_internal_set__jumpFadeCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____jumpFadeCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::BeatLine::__cordl_internal_get__alphaMul() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alphaMul;
}
constexpr float_t const& GlobalNamespace::BeatLine::__cordl_internal_get__alphaMul() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alphaMul;
}
constexpr void GlobalNamespace::BeatLine::__cordl_internal_set__alphaMul(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alphaMul = value;
}
constexpr float_t& GlobalNamespace::BeatLine::__cordl_internal_get__maxAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxAlpha;
}
constexpr float_t const& GlobalNamespace::BeatLine::__cordl_internal_get__maxAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxAlpha;
}
constexpr void GlobalNamespace::BeatLine::__cordl_internal_set__maxAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxAlpha = value;
}
constexpr ::GlobalNamespace::VariableMovementDataProvider*& GlobalNamespace::BeatLine::__cordl_internal_get__variableMovementDataProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variableMovementDataProvider;
}
constexpr ::GlobalNamespace::VariableMovementDataProvider* const& GlobalNamespace::BeatLine::__cordl_internal_get__variableMovementDataProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variableMovementDataProvider;
}
constexpr void GlobalNamespace::BeatLine::__cordl_internal_set__variableMovementDataProvider(::GlobalNamespace::VariableMovementDataProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____variableMovementDataProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<float_t>*& GlobalNamespace::BeatLine::__cordl_internal_get__highlightTimes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightTimes;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& GlobalNamespace::BeatLine::__cordl_internal_get__highlightTimes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightTimes;
}
constexpr void GlobalNamespace::BeatLine::__cordl_internal_set__highlightTimes(::System::Collections::Generic::List_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____highlightTimes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::BeatLine::__cordl_internal_get__color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::BeatLine::__cordl_internal_get__color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr void GlobalNamespace::BeatLine::__cordl_internal_set__color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color = value;
}
constexpr float_t& GlobalNamespace::BeatLine::__cordl_internal_get__rotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotation;
}
constexpr float_t const& GlobalNamespace::BeatLine::__cordl_internal_get__rotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotation;
}
constexpr void GlobalNamespace::BeatLine::__cordl_internal_set__rotation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotation = value;
}
inline bool GlobalNamespace::BeatLine::get_isFinished() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatLine*>::get(), "get_isFinished",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatLine::get_rotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatLine*>::get(), "get_rotation",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatLine::Init(::UnityEngine::Vector3 position, float_t rotation) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatLine*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, rotation);
}
inline void GlobalNamespace::BeatLine::ColorWasSet(::UnityEngine::Color color) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatLine*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void GlobalNamespace::BeatLine::AddHighlight(float_t noteTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatLine*>::get(), "AddHighlight", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteTime);
}
inline void GlobalNamespace::BeatLine::ManualUpdate(float_t songTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatLine*>::get(), "ManualUpdate", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, songTime);
}
inline void GlobalNamespace::BeatLine::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatLine*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatLine* GlobalNamespace::BeatLine::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatLine*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatLine::BeatLine() {}
