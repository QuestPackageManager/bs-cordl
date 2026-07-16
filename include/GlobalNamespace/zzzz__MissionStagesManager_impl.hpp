#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionStagesManager.hpp"
#include "GlobalNamespace/zzzz__MissionStage_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionStagesManager_def.hpp"
#include "GlobalNamespace/zzzz__MissionStageLockView_def.hpp"
#include "GlobalNamespace/zzzz__MissionStage_def.hpp"
#include "GlobalNamespace/zzzz__MissionStagesManager_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionStagesManager___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionStagesManager___c::*)()>(&::GlobalNamespace::MissionStagesManager___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x593bb14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionStagesManager___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionStagesManager___c._InitStages_b__6_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MissionStagesManager___c::*)(::GlobalNamespace::MissionStage*)>(
    &::GlobalNamespace::MissionStagesManager___c::_InitStages_b__6_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x593bb18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionStagesManager___c*>(), { "<InitStages>b__6_0", {}, { ::i2c::type_of<::GlobalNamespace::MissionStage*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MissionStagesManager___c::setStaticF___9(::GlobalNamespace::MissionStagesManager___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MissionStagesManager___c*, "<>9", ::GlobalNamespace::MissionStagesManager___c*>(
      std::forward<::GlobalNamespace::MissionStagesManager___c*>(value));
}
inline ::GlobalNamespace::MissionStagesManager___c* GlobalNamespace::MissionStagesManager___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MissionStagesManager___c*, "<>9", ::GlobalNamespace::MissionStagesManager___c*>();
}
inline void GlobalNamespace::MissionStagesManager___c::setStaticF___9__6_0(::System::Func_2<::UnityW<::GlobalNamespace::MissionStage>, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::MissionStage>, int32_t>*, "<>9__6_0", ::GlobalNamespace::MissionStagesManager___c*>(
      std::forward<::System::Func_2<::UnityW<::GlobalNamespace::MissionStage>, int32_t>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::MissionStage>, int32_t>* GlobalNamespace::MissionStagesManager___c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::MissionStage>, int32_t>*, "<>9__6_0", ::GlobalNamespace::MissionStagesManager___c*>();
}
inline void GlobalNamespace::MissionStagesManager___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionStagesManager___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MissionStagesManager___c::_InitStages_b__6_0(::GlobalNamespace::MissionStage* stage) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionStagesManager___c*>(), { "<InitStages>b__6_0", {}, { ::i2c::type_of<::GlobalNamespace::MissionStage*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, stage);
}
inline ::GlobalNamespace::MissionStagesManager___c* GlobalNamespace::MissionStagesManager___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionStagesManager___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionStagesManager___c::MissionStagesManager___c() {}
//  Writing Method size for method: ::GlobalNamespace::MissionStagesManager.get_firstLockedMissionStage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MissionStage> (::GlobalNamespace::MissionStagesManager::*)()>(
    &::GlobalNamespace::MissionStagesManager::get_firstLockedMissionStage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x593b958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionStagesManager*>(), { "get_firstLockedMissionStage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionStagesManager.UpdateFirtsLockedMissionStage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionStagesManager::*)(int32_t)>(&::GlobalNamespace::MissionStagesManager::UpdateFirtsLockedMissionStage)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x593b034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionStagesManager*>(), { "UpdateFirtsLockedMissionStage", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionStagesManager.InitStages
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionStagesManager::*)()>(&::GlobalNamespace::MissionStagesManager::InitStages)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x593b960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionStagesManager*>(), { "InitStages", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionStagesManager.UpdateStageLockPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionStagesManager::*)()>(&::GlobalNamespace::MissionStagesManager::UpdateStageLockPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x593b2c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionStagesManager*>(), { "UpdateStageLockPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionStagesManager.UpdateStageLockPositionAnimated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionStagesManager::*)(bool, float_t)>(&::GlobalNamespace::MissionStagesManager::UpdateStageLockPositionAnimated)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x59397f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionStagesManager*>(),
                                                                                           { "UpdateStageLockPositionAnimated", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionStagesManager.UpdateStageLockText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionStagesManager::*)(int32_t)>(&::GlobalNamespace::MissionStagesManager::UpdateStageLockText)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x593b0b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionStagesManager*>(), { "UpdateStageLockText", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionStagesManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionStagesManager::*)()>(&::GlobalNamespace::MissionStagesManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x593babc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionStagesManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MissionStageLockView>& GlobalNamespace::MissionStagesManager::__cordl_internal_get__missionStageLockView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionStageLockView;
}
constexpr ::UnityW<::GlobalNamespace::MissionStageLockView> const& GlobalNamespace::MissionStagesManager::__cordl_internal_get__missionStageLockView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionStageLockView;
}
constexpr void GlobalNamespace::MissionStagesManager::__cordl_internal_set__missionStageLockView(::UnityW<::GlobalNamespace::MissionStageLockView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionStageLockView = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionStage>>& GlobalNamespace::MissionStagesManager::__cordl_internal_get__missionStages() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionStages;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionStage>> const& GlobalNamespace::MissionStagesManager::__cordl_internal_get__missionStages() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionStages;
}
constexpr void GlobalNamespace::MissionStagesManager::__cordl_internal_set__missionStages(::ArrayW<::UnityW<::GlobalNamespace::MissionStage>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionStages = value;
}
constexpr ::UnityW<::GlobalNamespace::MissionStage>& GlobalNamespace::MissionStagesManager::__cordl_internal_get__firstLockedMissionStage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstLockedMissionStage;
}
constexpr ::UnityW<::GlobalNamespace::MissionStage> const& GlobalNamespace::MissionStagesManager::__cordl_internal_get__firstLockedMissionStage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstLockedMissionStage;
}
constexpr void GlobalNamespace::MissionStagesManager::__cordl_internal_set__firstLockedMissionStage(::UnityW<::GlobalNamespace::MissionStage> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____firstLockedMissionStage = value;
}
inline ::UnityW<::GlobalNamespace::MissionStage> GlobalNamespace::MissionStagesManager::get_firstLockedMissionStage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionStagesManager*>(), { "get_firstLockedMissionStage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MissionStage>>(this, ___internal_method);
}
inline void GlobalNamespace::MissionStagesManager::UpdateFirtsLockedMissionStage(int32_t numberOfClearedMissions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionStagesManager*>(), { "UpdateFirtsLockedMissionStage", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numberOfClearedMissions);
}
inline void GlobalNamespace::MissionStagesManager::InitStages() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionStagesManager*>(), { "InitStages", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionStagesManager::UpdateStageLockPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionStagesManager*>(), { "UpdateStageLockPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionStagesManager::UpdateStageLockPositionAnimated(bool animated, float_t animationDuration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionStagesManager*>(), { "UpdateStageLockPositionAnimated", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animated, animationDuration);
}
inline void GlobalNamespace::MissionStagesManager::UpdateStageLockText(int32_t numberOfClearedMissions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionStagesManager*>(), { "UpdateStageLockText", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numberOfClearedMissions);
}
inline void GlobalNamespace::MissionStagesManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionStagesManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionStagesManager* GlobalNamespace::MissionStagesManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionStagesManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionStagesManager::MissionStagesManager() {}
