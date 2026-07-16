#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerOtherPlayersScoreDiffTextManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerOtherPlayersScoreDiffTextManager_def.hpp"
#include "GlobalNamespace/zzzz__CoreGameHUDController_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLayoutProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerOtherPlayersScoreDiffTextManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayersManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreProvider_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c::*)()>(
    &::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59da304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c._Update_b__10_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c::*)(::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*)>(
    &::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c::_Update_b__10_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59da308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c*>(),
                                                             { "<Update>b__10_0", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c::setStaticF___9(::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c*, "<>9", ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c*>(
      std::forward<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c*>(value));
}
inline ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c* GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c*, "<>9", ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c*>();
}
inline void GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c::setStaticF___9__10_0(::System::Func_2<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*, bool>*, "<>9__10_0",
                                    ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*, bool>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*, bool>* GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c::getStaticF___9__10_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*, bool>*, "<>9__10_0",
                                           ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c*>();
}
inline void GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c::_Update_b__10_0(::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer* p) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c*>(),
                                                                                         { "<Update>b__10_0", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c* GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager___c::MultiplayerOtherPlayersScoreDiffTextManager___c() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::*)()>(
    &::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::Start)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x59d92a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::*)()>(
    &::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::OnDestroy)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x59d9394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::*)()>(
    &::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::Update)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x59d94a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager.InitLeftRightPositions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::*)()>(
    &::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::InitLeftRightPositions)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x59d9c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*>(), { "InitLeftRightPositions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager.HideAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::*)()>(
    &::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::HideAll)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x59d98c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*>(), { "HideAll", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager.HandleStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::*)(::GlobalNamespace::MultiplayerController_State)>(
    &::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::HandleStateChanged)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x59da128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*>(),
                                                                                           { "HandleStateChanged", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerController_State>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::*)()>(
    &::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59da2ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MultiplayerController>& GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::__cordl_internal_get__multiplayerController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerController;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerController> const& GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::__cordl_internal_get__multiplayerController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerController;
}
constexpr void GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::__cordl_internal_set__multiplayerController(::UnityW<::GlobalNamespace::MultiplayerController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerController = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager>& GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::__cordl_internal_get__playersManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersManager;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> const& GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::__cordl_internal_get__playersManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersManager;
}
constexpr void GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::__cordl_internal_set__playersManager(::UnityW<::GlobalNamespace::MultiplayerPlayersManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playersManager = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider>& GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::__cordl_internal_get__scoreProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreProvider;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> const& GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::__cordl_internal_get__scoreProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreProvider;
}
constexpr void GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::__cordl_internal_set__scoreProvider(::UnityW<::GlobalNamespace::MultiplayerScoreProvider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scoreProvider = value;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*& GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* const& GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerSessionManager = value;
}
constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::__cordl_internal_get__layoutProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layoutProvider;
}
constexpr ::GlobalNamespace::MultiplayerLayoutProvider* const& GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::__cordl_internal_get__layoutProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layoutProvider;
}
constexpr void GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::__cordl_internal_set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____layoutProvider = value;
}
constexpr ::GlobalNamespace::CoreGameHUDController_InitData*& GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::GlobalNamespace::CoreGameHUDController_InitData* const& GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::__cordl_internal_set__initData(::GlobalNamespace::CoreGameHUDController_InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initData = value;
}
constexpr float_t& GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::__cordl_internal_get__timeToNextUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeToNextUpdate;
}
constexpr float_t const& GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::__cordl_internal_get__timeToNextUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeToNextUpdate;
}
constexpr void GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::__cordl_internal_set__timeToNextUpdate(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeToNextUpdate = value;
}
inline void GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::InitLeftRightPositions() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*>(), { "InitLeftRightPositions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::HideAll() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*>(), { "HideAll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::HandleStateChanged(::GlobalNamespace::MultiplayerController_State newState) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*>(),
                                                                                         { "HandleStateChanged", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerController_State>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager* GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::MultiplayerOtherPlayersScoreDiffTextManager() {}
