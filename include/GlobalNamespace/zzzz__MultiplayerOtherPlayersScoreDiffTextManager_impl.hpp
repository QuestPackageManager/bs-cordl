#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerOtherPlayersScoreDiffTextManager_def.hpp"
#include "GlobalNamespace/zzzz__CoreGameHUDController_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLayoutProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerOtherPlayersScoreDiffTextManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayersManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreProvider_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c::*)()>(
    &::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2253dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c._Update_b__10_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c::*)(
    ::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*)>(&::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c::_Update_b__10_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2253de0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c*>::get(), "<Update>b__10_0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c::setStaticF___9(::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c*>::get>(
      std::forward<::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c*>(value));
}
inline ::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c* GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c*>::get>();
}
inline void GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c::setStaticF___9__10_0(::System::Func_2<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*, bool>*, "<>9__10_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*, bool>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*, bool>* GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c::getStaticF___9__10_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*, bool>*, "<>9__10_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c*>::get>();
}
inline ::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c* GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c*>());
}
inline void GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c::_Update_b__10_0(::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer* p) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c*>::get(), "<Update>b__10_0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, p);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerOtherPlayersScoreDiffTextManager____c::__MultiplayerOtherPlayersScoreDiffTextManager____c() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::*)()>(
    &::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::Start)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2252e2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*>::get(), "Start",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::*)()>(
    &::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2252ee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*>::get(), "OnDestroy",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::*)()>(
    &::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::Update)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x2252fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*>::get(), "Update",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager.InitLeftRightPositions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::*)()>(
    &::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::InitLeftRightPositions)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x2253748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*>::get(),
                                                 "InitLeftRightPositions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager.HideAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::*)()>(
    &::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::HideAll)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x2253388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*>::get(), "HideAll",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager.HandleStateChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::*)(
    ::GlobalNamespace::__MultiplayerController__State)>(&::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::HandleStateChanged)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2253c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*>::get(), "HandleStateChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerController__State>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::*)()>(
    &::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2253d6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playersManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scoreProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IMultiplayerSessionManager*& GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const&
GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerSessionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::__cordl_internal_get__layoutProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layoutProvider;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLayoutProvider*> const&
GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::__cordl_internal_get__layoutProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layoutProvider;
}
constexpr void GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::__cordl_internal_set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____layoutProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__CoreGameHUDController__InitData*& GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CoreGameHUDController__InitData*> const&
GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::__cordl_internal_set__initData(::GlobalNamespace::__CoreGameHUDController__InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*>::get(), "Start",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::OnDestroy() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*>::get(), "OnDestroy",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::Update() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*>::get(), "Update",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::InitLeftRightPositions() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*>::get(), "InitLeftRightPositions",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::HideAll() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*>::get(), "HideAll",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::HandleStateChanged(::GlobalNamespace::__MultiplayerController__State newState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*>::get(), "HandleStateChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerController__State>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newState);
}
inline ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager* GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*>());
}
inline void GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerOtherPlayersScoreDiffTextManager::MultiplayerOtherPlayersScoreDiffTextManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
