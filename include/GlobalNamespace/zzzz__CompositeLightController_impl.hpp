#pragma once
// IWYU pragma private; include "GlobalNamespace\CompositeLightController.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CompositeLightController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__ColorBoostBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__CompositeLayoutBase_def.hpp"
#include "GlobalNamespace/zzzz__CompositeLightControllerSet_def.hpp"
#include "GlobalNamespace/zzzz__CompositeLightController_def.hpp"
#include "GlobalNamespace/zzzz__CompositeModificationFlags_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxEventHandler_def.hpp"
#include "GlobalNamespace/zzzz__IBpmController_def.hpp"
#include "GlobalNamespace/zzzz__LightAxis_def.hpp"
#include "GlobalNamespace/zzzz__LightColorBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__LightColorEventHandler_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupTranslationLimits_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationEventHandler_def.hpp"
#include "GlobalNamespace/zzzz__LightTranslationBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__LightTranslationEventHandler_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIdManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CompositeLightController___c__DisplayClass22_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLightController___c__DisplayClass22_0::*)()>(
    &::GlobalNamespace::CompositeLightController___c__DisplayClass22_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59915cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController___c__DisplayClass22_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::CompositeLightController___c__DisplayClass22_0::__cordl_internal_get_groupId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupId;
}
constexpr int32_t const& GlobalNamespace::CompositeLightController___c__DisplayClass22_0::__cordl_internal_get_groupId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupId;
}
constexpr void GlobalNamespace::CompositeLightController___c__DisplayClass22_0::__cordl_internal_set_groupId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___groupId = value;
}
inline void GlobalNamespace::CompositeLightController___c__DisplayClass22_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController___c__DisplayClass22_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CompositeLightController___c__DisplayClass22_0* GlobalNamespace::CompositeLightController___c__DisplayClass22_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CompositeLightController___c__DisplayClass22_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CompositeLightController___c__DisplayClass22_0::CompositeLightController___c__DisplayClass22_0() {}
//  Writing Method size for method: ::GlobalNamespace::CompositeLightController___c__DisplayClass22_1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLightController___c__DisplayClass22_1::*)()>(
    &::GlobalNamespace::CompositeLightController___c__DisplayClass22_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59915d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController___c__DisplayClass22_1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLightController___c__DisplayClass22_1._RegisterFloatFxCallbacks_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLightController___c__DisplayClass22_1::*)(float_t)>(
    &::GlobalNamespace::CompositeLightController___c__DisplayClass22_1::_RegisterFloatFxCallbacks_b__0)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5993118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController___c__DisplayClass22_1*>(),
                                                                                           { "<RegisterFloatFxCallbacks>b__0", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>>& GlobalNamespace::CompositeLightController___c__DisplayClass22_1::__cordl_internal_get_bucketTargets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bucketTargets;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>> const& GlobalNamespace::CompositeLightController___c__DisplayClass22_1::__cordl_internal_get_bucketTargets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bucketTargets;
}
constexpr void GlobalNamespace::CompositeLightController___c__DisplayClass22_1::__cordl_internal_set_bucketTargets(::ArrayW<::UnityW<::GlobalNamespace::FloatFxGroupEffectTarget>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bucketTargets = value;
}
constexpr int32_t& GlobalNamespace::CompositeLightController___c__DisplayClass22_1::__cordl_internal_get_elementId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementId;
}
constexpr int32_t const& GlobalNamespace::CompositeLightController___c__DisplayClass22_1::__cordl_internal_get_elementId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementId;
}
constexpr void GlobalNamespace::CompositeLightController___c__DisplayClass22_1::__cordl_internal_set_elementId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementId = value;
}
constexpr ::GlobalNamespace::CompositeLightController___c__DisplayClass22_0*& GlobalNamespace::CompositeLightController___c__DisplayClass22_1::__cordl_internal_get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr ::GlobalNamespace::CompositeLightController___c__DisplayClass22_0* const& GlobalNamespace::CompositeLightController___c__DisplayClass22_1::__cordl_internal_get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
constexpr void GlobalNamespace::CompositeLightController___c__DisplayClass22_1::__cordl_internal_set_CS$__8__locals1(::GlobalNamespace::CompositeLightController___c__DisplayClass22_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CS$__8__locals1 = value;
}
inline void GlobalNamespace::CompositeLightController___c__DisplayClass22_1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController___c__DisplayClass22_1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CompositeLightController___c__DisplayClass22_1::_RegisterFloatFxCallbacks_b__0(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController___c__DisplayClass22_1*>(),
                                                                                         { "<RegisterFloatFxCallbacks>b__0", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::CompositeLightController___c__DisplayClass22_1* GlobalNamespace::CompositeLightController___c__DisplayClass22_1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CompositeLightController___c__DisplayClass22_1*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CompositeLightController___c__DisplayClass22_1::CompositeLightController___c__DisplayClass22_1() {}
//  Writing Method size for method: ::GlobalNamespace::CompositeLightController.get_sets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CompositeLightControllerSet*>* (
    ::GlobalNamespace::CompositeLightController::*)()>(&::GlobalNamespace::CompositeLightController::get_sets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x598dbc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(), { "get_sets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLightController.get_layout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CompositeLayoutBase* (::GlobalNamespace::CompositeLightController::*)()>(
    &::GlobalNamespace::CompositeLightController::get_layout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x598dbd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(), { "get_layout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLightController.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLightController::*)(
    ::GlobalNamespace::BeatmapCallbacksController*, ::GlobalNamespace::ColorManager*, ::Tweening::SongTimeTweeningManager*, ::GlobalNamespace::LightWithIdManager*,
    ::GlobalNamespace::IBpmController*)>(&::GlobalNamespace::CompositeLightController::Initialize)> {
  constexpr static std::size_t size = 0x770;
  constexpr static std::size_t addrs = 0x598dbd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(),
                                                             { "Initialize",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>(), ::i2c::type_of<::GlobalNamespace::ColorManager*>(),
                                                                 ::i2c::type_of<::Tweening::SongTimeTweeningManager*>(), ::i2c::type_of<::GlobalNamespace::LightWithIdManager*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::IBpmController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLightController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLightController::*)()>(&::GlobalNamespace::CompositeLightController::OnDestroy)> {
  constexpr static std::size_t size = 0x8e0;
  constexpr static std::size_t addrs = 0x598edf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLightController.ResolveColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::CompositeLightController::*)(::GlobalNamespace::EnvironmentColorType, bool, float_t)>(
    &::GlobalNamespace::CompositeLightController::ResolveColor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x598f890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(),
                                                { "ResolveColor", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentColorType>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLightController.GetCachedAxisTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (*)(::ArrayW<::UnityEngine::Transform*>, ::UnityEngine::Transform*, int32_t)>(
    &::GlobalNamespace::CompositeLightController::GetCachedAxisTransform)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x598f8c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(),
                            { "GetCachedAxisTransform", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLightController.RegisterRotationCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLightController::*)(
    ::GlobalNamespace::BeatmapCallbacksController*, ::GlobalNamespace::CompositeLightControllerSet*, ::GlobalNamespace::CompositeModificationFlags, ::Tweening::SongTimeTweeningManager*,
    ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationEventHandler*>*)>(&::GlobalNamespace::CompositeLightController::RegisterRotationCallbacks)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x598e348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(),
                                                             { "RegisterRotationCallbacks",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>(), ::i2c::type_of<::GlobalNamespace::CompositeLightControllerSet*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::CompositeModificationFlags>(), ::i2c::type_of<::Tweening::SongTimeTweeningManager*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationEventHandler*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLightController.RegisterRotationCallbackForAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLightController::*)(
    ::GlobalNamespace::BeatmapCallbacksController*, ::GlobalNamespace::LightRotationEventHandler*, int32_t, int32_t, ::GlobalNamespace::LightAxis,
    ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationEventHandler*>*)>(&::GlobalNamespace::CompositeLightController::RegisterRotationCallbackForAxis)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5990574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(),
                                                             { "RegisterRotationCallbackForAxis",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>(), ::i2c::type_of<::GlobalNamespace::LightRotationEventHandler*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LightAxis>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationEventHandler*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLightController.RegisterTranslationCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLightController::*)(
    ::GlobalNamespace::BeatmapCallbacksController*, ::GlobalNamespace::CompositeLightControllerSet*, ::GlobalNamespace::CompositeModificationFlags, ::Tweening::SongTimeTweeningManager*,
    ::GlobalNamespace::LightGroupTranslationLimits*, ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightTranslationEventHandler*>*)>(
    &::GlobalNamespace::CompositeLightController::RegisterTranslationCallbacks)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x598e568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(),
                                                             { "RegisterTranslationCallbacks",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>(), ::i2c::type_of<::GlobalNamespace::CompositeLightControllerSet*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::CompositeModificationFlags>(), ::i2c::type_of<::Tweening::SongTimeTweeningManager*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::LightGroupTranslationLimits*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightTranslationEventHandler*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLightController.RegisterTranslationCallbackForAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLightController::*)(
    ::GlobalNamespace::BeatmapCallbacksController*, ::GlobalNamespace::LightTranslationEventHandler*, int32_t, int32_t, ::GlobalNamespace::LightAxis,
    ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightTranslationEventHandler*>*)>(&::GlobalNamespace::CompositeLightController::RegisterTranslationCallbackForAxis)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x59913cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(),
                                                             { "RegisterTranslationCallbackForAxis",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>(), ::i2c::type_of<::GlobalNamespace::LightTranslationEventHandler*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LightAxis>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightTranslationEventHandler*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLightController.RegisterFloatFxCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLightController::*)(
    ::GlobalNamespace::BeatmapCallbacksController*, ::GlobalNamespace::CompositeLightControllerSet*, ::Tweening::SongTimeTweeningManager*,
    ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::FloatFxEventHandler*>*)>(&::GlobalNamespace::CompositeLightController::RegisterFloatFxCallbacks)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x598e7bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(),
                                                             { "RegisterFloatFxCallbacks",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>(), ::i2c::type_of<::GlobalNamespace::CompositeLightControllerSet*>(),
                                                                 ::i2c::type_of<::Tweening::SongTimeTweeningManager*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::FloatFxEventHandler*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLightController.RegisterColorTargetsCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLightController::*)(
    ::GlobalNamespace::BeatmapCallbacksController*, ::GlobalNamespace::CompositeLightControllerSet*, ::Tweening::SongTimeTweeningManager*, ::GlobalNamespace::LightWithIdManager*,
    ::GlobalNamespace::IBpmController*, ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::GlobalNamespace::LightColorEventHandler*>*>*)>(
    &::GlobalNamespace::CompositeLightController::RegisterColorTargetsCallbacks)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x598eb88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(),
                            { "RegisterColorTargetsCallbacks",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>(), ::i2c::type_of<::GlobalNamespace::CompositeLightControllerSet*>(),
                                ::i2c::type_of<::Tweening::SongTimeTweeningManager*>(), ::i2c::type_of<::GlobalNamespace::LightWithIdManager*>(), ::i2c::type_of<::GlobalNamespace::IBpmController*>(),
                                ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::GlobalNamespace::LightColorEventHandler*>*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLightController.RegisterOneColorHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLightController::*)(
    ::GlobalNamespace::BeatmapCallbacksController*, ::Tweening::SongTimeTweeningManager*, ::GlobalNamespace::LightWithIdManager*, ::GlobalNamespace::IBpmController*,
    ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::GlobalNamespace::LightColorEventHandler*>*>*, int32_t, int32_t)>(
    &::GlobalNamespace::CompositeLightController::RegisterOneColorHandler)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x59916b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(),
                            { "RegisterOneColorHandler",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>(), ::i2c::type_of<::Tweening::SongTimeTweeningManager*>(),
                                ::i2c::type_of<::GlobalNamespace::LightWithIdManager*>(), ::i2c::type_of<::GlobalNamespace::IBpmController*>(),
                                ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::GlobalNamespace::LightColorEventHandler*>*>*>(),
                                ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLightController.RegisterColorBoostCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLightController::*)(::GlobalNamespace::BeatmapCallbacksController*)>(
    &::GlobalNamespace::CompositeLightController::RegisterColorBoostCallbacks)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x598ed38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(),
                                                             { "RegisterColorBoostCallbacks", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLightController.HandleRotationChangeBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLightController::*)(::GlobalNamespace::LightRotationBeatmapEventData*)>(
    &::GlobalNamespace::CompositeLightController::HandleRotationChangeBeatmapEvent)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5991dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(),
                                                             { "HandleRotationChangeBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::LightRotationBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLightController.HandleTranslationChangeBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLightController::*)(::GlobalNamespace::LightTranslationBeatmapEventData*)>(
    &::GlobalNamespace::CompositeLightController::HandleTranslationChangeBeatmapEvent)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5991f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(),
                                                             { "HandleTranslationChangeBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::LightTranslationBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLightController.HandleFloatFxChangeBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLightController::*)(::GlobalNamespace::FloatFxBeatmapEventData*)>(
    &::GlobalNamespace::CompositeLightController::HandleFloatFxChangeBeatmapEvent)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5992158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(),
                                                             { "HandleFloatFxChangeBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::FloatFxBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLightController.HandleColorTargetsChangeBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLightController::*)(::GlobalNamespace::LightColorBeatmapEventData*)>(
    &::GlobalNamespace::CompositeLightController::HandleColorTargetsChangeBeatmapEvent)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x599236c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(),
                                                             { "HandleColorTargetsChangeBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::LightColorBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLightController.HandleColorBoostBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLightController::*)(::GlobalNamespace::ColorBoostBeatmapEventData*)>(
    &::GlobalNamespace::CompositeLightController::HandleColorBoostBeatmapEvent)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x59929c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(),
                                                             { "HandleColorBoostBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::ColorBoostBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeLightController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeLightController::*)()>(&::GlobalNamespace::CompositeLightController::_ctor)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5992e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CompositeLightControllerSet*>*& GlobalNamespace::CompositeLightController::__cordl_internal_get__sets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sets;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CompositeLightControllerSet*>* const& GlobalNamespace::CompositeLightController::__cordl_internal_get__sets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sets;
}
constexpr void GlobalNamespace::CompositeLightController::__cordl_internal_set__sets(::System::Collections::Generic::List_1<::GlobalNamespace::CompositeLightControllerSet*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sets = value;
}
constexpr ::GlobalNamespace::CompositeLayoutBase*& GlobalNamespace::CompositeLightController::__cordl_internal_get__layout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layout;
}
constexpr ::GlobalNamespace::CompositeLayoutBase* const& GlobalNamespace::CompositeLightController::__cordl_internal_get__layout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layout;
}
constexpr void GlobalNamespace::CompositeLightController::__cordl_internal_set__layout(::GlobalNamespace::CompositeLayoutBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____layout = value;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::CompositeLightController::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::CompositeLightController::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::CompositeLightController::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCallbacksController = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>*& GlobalNamespace::CompositeLightController::__cordl_internal_get__registeredCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registeredCallbacks;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>* const& GlobalNamespace::CompositeLightController::__cordl_internal_get__registeredCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registeredCallbacks;
}
constexpr void GlobalNamespace::CompositeLightController::__cordl_internal_set__registeredCallbacks(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDataCallbackWrapper*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____registeredCallbacks = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationEventHandler*>*>*&
GlobalNamespace::CompositeLightController::__cordl_internal_get__rotationHandlersBySet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationHandlersBySet;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationEventHandler*>*>* const&
GlobalNamespace::CompositeLightController::__cordl_internal_get__rotationHandlersBySet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationHandlersBySet;
}
constexpr void GlobalNamespace::CompositeLightController::__cordl_internal_set__rotationHandlersBySet(
    ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationEventHandler*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotationHandlersBySet = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightTranslationEventHandler*>*>*&
GlobalNamespace::CompositeLightController::__cordl_internal_get__translationHandlersBySet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____translationHandlersBySet;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightTranslationEventHandler*>*>* const&
GlobalNamespace::CompositeLightController::__cordl_internal_get__translationHandlersBySet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____translationHandlersBySet;
}
constexpr void GlobalNamespace::CompositeLightController::__cordl_internal_set__translationHandlersBySet(
    ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightTranslationEventHandler*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____translationHandlersBySet = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::FloatFxEventHandler*>*>*&
GlobalNamespace::CompositeLightController::__cordl_internal_get__floatFxHandlersBySet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatFxHandlersBySet;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::FloatFxEventHandler*>*>* const&
GlobalNamespace::CompositeLightController::__cordl_internal_get__floatFxHandlersBySet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatFxHandlersBySet;
}
constexpr void GlobalNamespace::CompositeLightController::__cordl_internal_set__floatFxHandlersBySet(
    ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::FloatFxEventHandler*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floatFxHandlersBySet = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::GlobalNamespace::LightColorEventHandler*>*>*>*&
GlobalNamespace::CompositeLightController::__cordl_internal_get__colorHandlersBySet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorHandlersBySet;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::GlobalNamespace::LightColorEventHandler*>*>*>* const&
GlobalNamespace::CompositeLightController::__cordl_internal_get__colorHandlersBySet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorHandlersBySet;
}
constexpr void GlobalNamespace::CompositeLightController::__cordl_internal_set__colorHandlersBySet(
    ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::GlobalNamespace::LightColorEventHandler*>*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorHandlersBySet = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::CompositeLightController::__cordl_internal_get__colorBoostBeatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorBoostBeatmapDataCallbackWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::CompositeLightController::__cordl_internal_get__colorBoostBeatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorBoostBeatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::CompositeLightController::__cordl_internal_set__colorBoostBeatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorBoostBeatmapDataCallbackWrapper = value;
}
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::CompositeLightController::__cordl_internal_get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::GlobalNamespace::ColorManager* const& GlobalNamespace::CompositeLightController::__cordl_internal_get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::CompositeLightController::__cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorManager = value;
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CompositeLightControllerSet*>* GlobalNamespace::CompositeLightController::get_sets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(), { "get_sets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CompositeLightControllerSet*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::CompositeLayoutBase* GlobalNamespace::CompositeLightController::get_layout() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(), { "get_layout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CompositeLayoutBase*>(this, ___internal_method);
}
inline void GlobalNamespace::CompositeLightController::Initialize(::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController, ::GlobalNamespace::ColorManager* colorManager,
                                                                  ::Tweening::SongTimeTweeningManager* tweeningManager, ::GlobalNamespace::LightWithIdManager* lightManager,
                                                                  ::GlobalNamespace::IBpmController* bpmController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(),
                                                           { "Initialize",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>(), ::i2c::type_of<::GlobalNamespace::ColorManager*>(),
                                                               ::i2c::type_of<::Tweening::SongTimeTweeningManager*>(), ::i2c::type_of<::GlobalNamespace::LightWithIdManager*>(),
                                                               ::i2c::type_of<::GlobalNamespace::IBpmController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapCallbacksController, colorManager, tweeningManager, lightManager, bpmController);
}
inline void GlobalNamespace::CompositeLightController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::CompositeLightController::ResolveColor(::GlobalNamespace::EnvironmentColorType colorType, bool colorBoost, float_t brightness) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(),
                                                           { "ResolveColor", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentColorType>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, colorType, colorBoost, brightness);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::CompositeLightController::GetCachedAxisTransform(::ArrayW<::UnityEngine::Transform*> cache, ::UnityEngine::Transform* fallback,
                                                                                                            int32_t elementIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(),
                          { "GetCachedAxisTransform", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(nullptr, ___internal_method, cache, fallback, elementIndex);
}
inline void GlobalNamespace::CompositeLightController::RegisterRotationCallbacks(::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
                                                                                 ::GlobalNamespace::CompositeLightControllerSet* set, ::GlobalNamespace::CompositeModificationFlags flags,
                                                                                 ::Tweening::SongTimeTweeningManager* tweeningManager,
                                                                                 ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationEventHandler*>* handlers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(),
                                                           { "RegisterRotationCallbacks",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>(), ::i2c::type_of<::GlobalNamespace::CompositeLightControllerSet*>(),
                                                               ::i2c::type_of<::GlobalNamespace::CompositeModificationFlags>(), ::i2c::type_of<::Tweening::SongTimeTweeningManager*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationEventHandler*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapCallbacksController, set, flags, tweeningManager, handlers);
}
inline void GlobalNamespace::CompositeLightController::RegisterRotationCallbackForAxis(::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
                                                                                       ::GlobalNamespace::LightRotationEventHandler* handler, int32_t groupId, int32_t elementId,
                                                                                       ::GlobalNamespace::LightAxis axis,
                                                                                       ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationEventHandler*>* handlers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(),
                                                           { "RegisterRotationCallbackForAxis",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>(), ::i2c::type_of<::GlobalNamespace::LightRotationEventHandler*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LightAxis>(),
                                                               ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightRotationEventHandler*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapCallbacksController, handler, groupId, elementId, axis, handlers);
}
inline void GlobalNamespace::CompositeLightController::RegisterTranslationCallbacks(::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
                                                                                    ::GlobalNamespace::CompositeLightControllerSet* set, ::GlobalNamespace::CompositeModificationFlags flags,
                                                                                    ::Tweening::SongTimeTweeningManager* tweeningManager, ::GlobalNamespace::LightGroupTranslationLimits* limits,
                                                                                    ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightTranslationEventHandler*>* handlers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(),
                                                           { "RegisterTranslationCallbacks",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>(), ::i2c::type_of<::GlobalNamespace::CompositeLightControllerSet*>(),
                                                               ::i2c::type_of<::GlobalNamespace::CompositeModificationFlags>(), ::i2c::type_of<::Tweening::SongTimeTweeningManager*>(),
                                                               ::i2c::type_of<::GlobalNamespace::LightGroupTranslationLimits*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightTranslationEventHandler*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapCallbacksController, set, flags, tweeningManager, limits, handlers);
}
inline void GlobalNamespace::CompositeLightController::RegisterTranslationCallbackForAxis(
    ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController, ::GlobalNamespace::LightTranslationEventHandler* handler, int32_t groupId, int32_t elementId,
    ::GlobalNamespace::LightAxis axis, ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightTranslationEventHandler*>* handlers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(),
                                                           { "RegisterTranslationCallbackForAxis",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>(), ::i2c::type_of<::GlobalNamespace::LightTranslationEventHandler*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::LightAxis>(),
                                                               ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::LightTranslationEventHandler*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapCallbacksController, handler, groupId, elementId, axis, handlers);
}
inline void GlobalNamespace::CompositeLightController::RegisterFloatFxCallbacks(::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
                                                                                ::GlobalNamespace::CompositeLightControllerSet* set, ::Tweening::SongTimeTweeningManager* tweeningManager,
                                                                                ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::FloatFxEventHandler*>* handlers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(),
                                                           { "RegisterFloatFxCallbacks",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>(), ::i2c::type_of<::GlobalNamespace::CompositeLightControllerSet*>(),
                                                               ::i2c::type_of<::Tweening::SongTimeTweeningManager*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::FloatFxEventHandler*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapCallbacksController, set, tweeningManager, handlers);
}
inline void GlobalNamespace::CompositeLightController::RegisterColorTargetsCallbacks(
    ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController, ::GlobalNamespace::CompositeLightControllerSet* set, ::Tweening::SongTimeTweeningManager* tweeningManager,
    ::GlobalNamespace::LightWithIdManager* lightManager, ::GlobalNamespace::IBpmController* bpmController,
    ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::GlobalNamespace::LightColorEventHandler*>*>* handlersByElementId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(),
                          { "RegisterColorTargetsCallbacks",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>(), ::i2c::type_of<::GlobalNamespace::CompositeLightControllerSet*>(),
                              ::i2c::type_of<::Tweening::SongTimeTweeningManager*>(), ::i2c::type_of<::GlobalNamespace::LightWithIdManager*>(), ::i2c::type_of<::GlobalNamespace::IBpmController*>(),
                              ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::GlobalNamespace::LightColorEventHandler*>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapCallbacksController, set, tweeningManager, lightManager, bpmController, handlersByElementId);
}
inline void GlobalNamespace::CompositeLightController::RegisterOneColorHandler(
    ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController, ::Tweening::SongTimeTweeningManager* tweeningManager, ::GlobalNamespace::LightWithIdManager* lightManager,
    ::GlobalNamespace::IBpmController* bpmController,
    ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::GlobalNamespace::LightColorEventHandler*>*>* handlersByElementId, int32_t groupId,
    int32_t elementId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(),
                          { "RegisterOneColorHandler",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>(), ::i2c::type_of<::Tweening::SongTimeTweeningManager*>(),
                              ::i2c::type_of<::GlobalNamespace::LightWithIdManager*>(), ::i2c::type_of<::GlobalNamespace::IBpmController*>(),
                              ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::GlobalNamespace::LightColorEventHandler*>*>*>(),
                              ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapCallbacksController, tweeningManager, lightManager, bpmController, handlersByElementId, groupId, elementId);
}
inline void GlobalNamespace::CompositeLightController::RegisterColorBoostCallbacks(::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(),
                                                                                         { "RegisterColorBoostCallbacks", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapCallbacksController);
}
inline void GlobalNamespace::CompositeLightController::HandleRotationChangeBeatmapEvent(::GlobalNamespace::LightRotationBeatmapEventData* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(),
                                                           { "HandleRotationChangeBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::LightRotationBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::CompositeLightController::HandleTranslationChangeBeatmapEvent(::GlobalNamespace::LightTranslationBeatmapEventData* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(),
                                                           { "HandleTranslationChangeBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::LightTranslationBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::CompositeLightController::HandleFloatFxChangeBeatmapEvent(::GlobalNamespace::FloatFxBeatmapEventData* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(),
                                                           { "HandleFloatFxChangeBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::FloatFxBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::CompositeLightController::HandleColorTargetsChangeBeatmapEvent(::GlobalNamespace::LightColorBeatmapEventData* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(),
                                                           { "HandleColorTargetsChangeBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::LightColorBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::CompositeLightController::HandleColorBoostBeatmapEvent(::GlobalNamespace::ColorBoostBeatmapEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(),
                                                           { "HandleColorBoostBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::ColorBoostBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void GlobalNamespace::CompositeLightController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeLightController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CompositeLightController* GlobalNamespace::CompositeLightController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CompositeLightController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CompositeLightController::CompositeLightController() {}
