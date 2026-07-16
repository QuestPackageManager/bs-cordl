#pragma once
// IWYU pragma private; include "GlobalNamespace/CombineGroupIdToVector4FloatFxGroupEffectTarget.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__CombineGroupIdToVector4FloatFxGroupEffectTarget_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__CombineGroupIdToVector4FloatFxGroupEffectTarget_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupSO_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
// Ctor Parameters [CppParam { name: "lightGroup", ty: "::UnityW<::GlobalNamespace::LightGroupSO>", modifiers: "", def_value: Some("{}") }, CppParam { name: "index", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex(
    ::UnityW<::GlobalNamespace::LightGroupSO> lightGroup, int32_t index) noexcept {
  this->lightGroup = lightGroup;
  this->index = index;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex() {}
//  Writing Method size for method: ::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c::*)()>(
    &::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x598cba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c._Awake_b__10_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c::*)(
    ::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex)>(&::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c::_Awake_b__10_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x598cba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c*>(),
                                                             { "<Awake>b__10_0", {}, { ::i2c::type_of<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c._Awake_b__10_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c::*)(
    ::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex)>(&::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c::_Awake_b__10_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x598cbb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c*>(),
                                                             { "<Awake>b__10_1", {}, { ::i2c::type_of<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c::setStaticF___9(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c*, "<>9", ::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c*>(
      std::forward<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c*>(value));
}
inline ::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c* GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c*, "<>9", ::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c*>();
}
inline void GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c::setStaticF___9__10_0(
    ::System::Func_2<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex, int32_t>*, "<>9__10_0",
                                    ::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex, int32_t>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex, int32_t>*
GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c::getStaticF___9__10_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex, int32_t>*, "<>9__10_0",
                                           ::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c*>();
}
inline void GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c::setStaticF___9__10_1(
    ::System::Func_2<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex, int32_t>*, "<>9__10_1",
                                    ::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex, int32_t>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex, int32_t>*
GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c::getStaticF___9__10_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex, int32_t>*, "<>9__10_1",
                                           ::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c*>();
}
inline void GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c::_Awake_b__10_0(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c*>(),
                                                           { "<Awake>b__10_0", {}, { ::i2c::type_of<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, item);
}
inline int32_t GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c::_Awake_b__10_1(::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c*>(),
                                                           { "<Awake>b__10_1", {}, { ::i2c::type_of<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, item);
}
inline ::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c* GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget___c::CombineGroupIdToVector4FloatFxGroupEffectTarget___c() {}
//  Writing Method size for method: ::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::*)()>(
    &::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::Awake)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x598c5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::*)()>(
    &::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::Start)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x598c754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::*)()>(
    &::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::OnDestroy)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x598c7e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::SetValue)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x598c8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget.TriggerValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::TriggerValue)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x598c9d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget.HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::*)()>(
    &::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x598caf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget*>(),
                                                                                           { "HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::*)()>(
    &::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x598cb48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::__cordl_internal_get__propertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyName;
}
constexpr ::StringW const& GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::__cordl_internal_get__propertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyName;
}
constexpr void GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::__cordl_internal_set__propertyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____propertyName = value;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::__cordl_internal_get__materialPropertyBlockController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const&
GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::__cordl_internal_get__materialPropertyBlockController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr void
GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::__cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materialPropertyBlockController = value;
}
constexpr ::UnityEngine::Vector4& GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::__cordl_internal_get__defaultValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValue;
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::__cordl_internal_get__defaultValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValue;
}
constexpr void GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::__cordl_internal_set__defaultValue(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultValue = value;
}
constexpr ::ArrayW<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex>&
GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::__cordl_internal_get__lightGroupsToIndices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroupsToIndices;
}
constexpr ::ArrayW<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex> const&
GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::__cordl_internal_get__lightGroupsToIndices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroupsToIndices;
}
constexpr void GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::__cordl_internal_set__lightGroupsToIndices(
    ::ArrayW<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget_LightGroupSOToIndex> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightGroupsToIndices = value;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCallbacksController = value;
}
constexpr bool& GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::__cordl_internal_get__didReceiveEventThisFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didReceiveEventThisFrame;
}
constexpr bool const& GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::__cordl_internal_get__didReceiveEventThisFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didReceiveEventThisFrame;
}
constexpr void GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::__cordl_internal_set__didReceiveEventThisFrame(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____didReceiveEventThisFrame = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::__cordl_internal_get__groupIdToIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupIdToIndex;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* const& GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::__cordl_internal_get__groupIdToIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupIdToIndex;
}
constexpr void GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::__cordl_internal_set__groupIdToIndex(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____groupIdToIndex = value;
}
constexpr int32_t& GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::__cordl_internal_get__propertyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyId;
}
constexpr int32_t const& GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::__cordl_internal_get__propertyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyId;
}
constexpr void GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::__cordl_internal_set__propertyId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____propertyId = value;
}
constexpr ::UnityEngine::Vector4& GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::__cordl_internal_get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::__cordl_internal_get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr void GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::__cordl_internal_set__data(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____data = value;
}
inline void GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::OnDestroy() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::SetValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::TriggerValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget*>(),
                                                                                         { "HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget* GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CombineGroupIdToVector4FloatFxGroupEffectTarget::CombineGroupIdToVector4FloatFxGroupEffectTarget() {}
