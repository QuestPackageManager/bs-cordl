#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionStagesManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionStagesManager_def.hpp"
#include "GlobalNamespace/zzzz__MissionStageLockView_def.hpp"
#include "GlobalNamespace/zzzz__MissionStage_def.hpp"
#include "GlobalNamespace/zzzz__MissionStagesManager_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionStagesManager___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionStagesManager___c::*)()>(&::GlobalNamespace::MissionStagesManager___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c0cd58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionStagesManager___c._InitStages_b__6_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::MissionStagesManager___c::*)(::GlobalNamespace::MissionStage*)>(
    &::GlobalNamespace::MissionStagesManager___c::_InitStages_b__6_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3c0cd60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager___c*>::get(), "<InitStages>b__6_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionStage*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MissionStagesManager___c::setStaticF___9(::GlobalNamespace::MissionStagesManager___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MissionStagesManager___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager___c*>::get>(
      std::forward<::GlobalNamespace::MissionStagesManager___c*>(value));
}
inline ::GlobalNamespace::MissionStagesManager___c* GlobalNamespace::MissionStagesManager___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MissionStagesManager___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager___c*>::get>();
}
inline void GlobalNamespace::MissionStagesManager___c::setStaticF___9__6_0(::System::Func_2<::UnityW<::GlobalNamespace::MissionStage>, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::MissionStage>, int32_t>*, "<>9__6_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager___c*>::get>(
      std::forward<::System::Func_2<::UnityW<::GlobalNamespace::MissionStage>, int32_t>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::MissionStage>, int32_t>* GlobalNamespace::MissionStagesManager___c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::MissionStage>, int32_t>*, "<>9__6_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager___c*>::get>();
}
inline void GlobalNamespace::MissionStagesManager___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MissionStagesManager___c::_InitStages_b__6_0(::GlobalNamespace::MissionStage* stage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager___c*>::get(), "<InitStages>b__6_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionStage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, stage);
}
inline ::GlobalNamespace::MissionStagesManager___c* GlobalNamespace::MissionStagesManager___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MissionStagesManager___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionStagesManager___c::MissionStagesManager___c() {}
//  Writing Method size for method: ::GlobalNamespace::MissionStagesManager.get_firstLockedMissionStage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::MissionStage> (::GlobalNamespace::MissionStagesManager::*)()>(
    &::GlobalNamespace::MissionStagesManager::get_firstLockedMissionStage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c0ca54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager*>::get(),
                                                                               "get_firstLockedMissionStage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionStagesManager.UpdateFirtsLockedMissionStage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionStagesManager::*)(int32_t)>(
    &::GlobalNamespace::MissionStagesManager::UpdateFirtsLockedMissionStage)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3c0ca5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager*>::get(), "UpdateFirtsLockedMissionStage",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionStagesManager.InitStages
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionStagesManager::*)()>(&::GlobalNamespace::MissionStagesManager::InitStages)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x3c0caec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager*>::get(), "InitStages",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionStagesManager.UpdateStageLockPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionStagesManager::*)()>(
    &::GlobalNamespace::MissionStagesManager::UpdateStageLockPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3c0cc30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager*>::get(),
                                                                               "UpdateStageLockPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionStagesManager.UpdateStageLockPositionAnimated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionStagesManager::*)(bool, float_t)>(
    &::GlobalNamespace::MissionStagesManager::UpdateStageLockPositionAnimated)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3c0b63c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager*>::get(), "UpdateStageLockPositionAnimated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionStagesManager.UpdateStageLockText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionStagesManager::*)(int32_t)>(
    &::GlobalNamespace::MissionStagesManager::UpdateStageLockText)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3c0cc3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager*>::get(), "UpdateStageLockText",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionStagesManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionStagesManager::*)()>(&::GlobalNamespace::MissionStagesManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c0ccf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionStageLockView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionStage>, ::Array<::UnityW<::GlobalNamespace::MissionStage>>*>& GlobalNamespace::MissionStagesManager::__cordl_internal_get__missionStages() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionStages;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionStage>, ::Array<::UnityW<::GlobalNamespace::MissionStage>>*> const&
GlobalNamespace::MissionStagesManager::__cordl_internal_get__missionStages() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionStages;
}
constexpr void
GlobalNamespace::MissionStagesManager::__cordl_internal_set__missionStages(::ArrayW<::UnityW<::GlobalNamespace::MissionStage>, ::Array<::UnityW<::GlobalNamespace::MissionStage>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionStages)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____firstLockedMissionStage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::GlobalNamespace::MissionStage> GlobalNamespace::MissionStagesManager::get_firstLockedMissionStage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager*>::get(),
                                                                             "get_firstLockedMissionStage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MissionStage>, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionStagesManager::UpdateFirtsLockedMissionStage(int32_t numberOfClearedMissions) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager*>::get(), "UpdateFirtsLockedMissionStage",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, numberOfClearedMissions);
}
inline void GlobalNamespace::MissionStagesManager::InitStages() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager*>::get(), "InitStages",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionStagesManager::UpdateStageLockPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager*>::get(),
                                                                             "UpdateStageLockPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionStagesManager::UpdateStageLockPositionAnimated(bool animated, float_t animationDuration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager*>::get(), "UpdateStageLockPositionAnimated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, animated, animationDuration);
}
inline void GlobalNamespace::MissionStagesManager::UpdateStageLockText(int32_t numberOfClearedMissions) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager*>::get(), "UpdateStageLockText",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, numberOfClearedMissions);
}
inline void GlobalNamespace::MissionStagesManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionStagesManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionStagesManager* GlobalNamespace::MissionStagesManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MissionStagesManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionStagesManager::MissionStagesManager() {}
