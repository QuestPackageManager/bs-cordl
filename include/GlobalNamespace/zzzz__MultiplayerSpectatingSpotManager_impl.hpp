#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerSpectatingSpotManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSpectatingSpotManager_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSpectatingSpot_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSpectatingSpotManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSpectatingSpotManager___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerSpectatingSpotManager___c::*)()>(&::GlobalNamespace::MultiplayerSpectatingSpotManager___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59e9d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotManager___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSpectatingSpotManager___c._get_defaultSpot_b__3_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiplayerSpectatingSpotManager___c::*)(::GlobalNamespace::IMultiplayerSpectatingSpot*)>(
    &::GlobalNamespace::MultiplayerSpectatingSpotManager___c::_get_defaultSpot_b__3_0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x59e9d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotManager___c*>(),
                                                                                           { "<get_defaultSpot>b__3_0", {}, { ::i2c::type_of<::GlobalNamespace::IMultiplayerSpectatingSpot*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MultiplayerSpectatingSpotManager___c::setStaticF___9(::GlobalNamespace::MultiplayerSpectatingSpotManager___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MultiplayerSpectatingSpotManager___c*, "<>9", ::GlobalNamespace::MultiplayerSpectatingSpotManager___c*>(
      std::forward<::GlobalNamespace::MultiplayerSpectatingSpotManager___c*>(value));
}
inline ::GlobalNamespace::MultiplayerSpectatingSpotManager___c* GlobalNamespace::MultiplayerSpectatingSpotManager___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MultiplayerSpectatingSpotManager___c*, "<>9", ::GlobalNamespace::MultiplayerSpectatingSpotManager___c*>();
}
inline void GlobalNamespace::MultiplayerSpectatingSpotManager___c::setStaticF___9__3_0(::System::Func_2<::GlobalNamespace::IMultiplayerSpectatingSpot*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::IMultiplayerSpectatingSpot*, bool>*, "<>9__3_0", ::GlobalNamespace::MultiplayerSpectatingSpotManager___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::IMultiplayerSpectatingSpot*, bool>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::IMultiplayerSpectatingSpot*, bool>* GlobalNamespace::MultiplayerSpectatingSpotManager___c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::IMultiplayerSpectatingSpot*, bool>*, "<>9__3_0", ::GlobalNamespace::MultiplayerSpectatingSpotManager___c*>();
}
inline void GlobalNamespace::MultiplayerSpectatingSpotManager___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotManager___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerSpectatingSpotManager___c::_get_defaultSpot_b__3_0(::GlobalNamespace::IMultiplayerSpectatingSpot* s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotManager___c*>(),
                                                                                         { "<get_defaultSpot>b__3_0", {}, { ::i2c::type_of<::GlobalNamespace::IMultiplayerSpectatingSpot*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s);
}
inline ::GlobalNamespace::MultiplayerSpectatingSpotManager___c* GlobalNamespace::MultiplayerSpectatingSpotManager___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerSpectatingSpotManager___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerSpectatingSpotManager___c::MultiplayerSpectatingSpotManager___c() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSpectatingSpotManager.get_spectatingSpots
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* (
    ::GlobalNamespace::MultiplayerSpectatingSpotManager::*)()>(&::GlobalNamespace::MultiplayerSpectatingSpotManager::get_spectatingSpots)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59e96bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotManager*>(), { "get_spectatingSpots", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSpectatingSpotManager.get_defaultSpot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IMultiplayerSpectatingSpot* (::GlobalNamespace::MultiplayerSpectatingSpotManager::*)()>(
    &::GlobalNamespace::MultiplayerSpectatingSpotManager::get_defaultSpot)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x59e96c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotManager*>(), { "get_defaultSpot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSpectatingSpotManager.RegisterSpectatingSpot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerSpectatingSpotManager::*)(::GlobalNamespace::IMultiplayerSpectatingSpot*)>(
    &::GlobalNamespace::MultiplayerSpectatingSpotManager::RegisterSpectatingSpot)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x59e8f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotManager*>(),
                                                                                           { "RegisterSpectatingSpot", {}, { ::i2c::type_of<::GlobalNamespace::IMultiplayerSpectatingSpot*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSpectatingSpotManager.GetAdjacentSpot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IMultiplayerSpectatingSpot* (
    ::GlobalNamespace::MultiplayerSpectatingSpotManager::*)(::GlobalNamespace::IMultiplayerSpectatingSpot*, int32_t)>(&::GlobalNamespace::MultiplayerSpectatingSpotManager::GetAdjacentSpot)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59e99c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotManager*>(),
                                                             { "GetAdjacentSpot", {}, { ::i2c::type_of<::GlobalNamespace::IMultiplayerSpectatingSpot*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSpectatingSpotManager.GetIndexBySpot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MultiplayerSpectatingSpotManager::*)(::GlobalNamespace::IMultiplayerSpectatingSpot*)>(
    &::GlobalNamespace::MultiplayerSpectatingSpotManager::GetIndexBySpot)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x59e9a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotManager*>(),
                                                                                           { "GetIndexBySpot", {}, { ::i2c::type_of<::GlobalNamespace::IMultiplayerSpectatingSpot*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSpectatingSpotManager.UpdateIndexBySpotDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerSpectatingSpotManager::*)()>(
    &::GlobalNamespace::MultiplayerSpectatingSpotManager::UpdateIndexBySpotDictionary)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x59e9834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotManager*>(), { "UpdateIndexBySpotDictionary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSpectatingSpotManager.SpotOnHasBeenRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerSpectatingSpotManager::*)(::GlobalNamespace::IMultiplayerSpectatingSpot*)>(
    &::GlobalNamespace::MultiplayerSpectatingSpotManager::SpotOnHasBeenRemoved)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x59e9b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotManager*>(),
                                                                                           { "SpotOnHasBeenRemoved", {}, { ::i2c::type_of<::GlobalNamespace::IMultiplayerSpectatingSpot*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSpectatingSpotManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerSpectatingSpotManager::*)()>(&::GlobalNamespace::MultiplayerSpectatingSpotManager::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x59e9c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>*& GlobalNamespace::MultiplayerSpectatingSpotManager::__cordl_internal_get__spectatingSpots() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectatingSpots;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* const&
GlobalNamespace::MultiplayerSpectatingSpotManager::__cordl_internal_get__spectatingSpots() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectatingSpots;
}
constexpr void GlobalNamespace::MultiplayerSpectatingSpotManager::__cordl_internal_set__spectatingSpots(::System::Collections::Generic::List_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spectatingSpots = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IMultiplayerSpectatingSpot*, int32_t>*&
GlobalNamespace::MultiplayerSpectatingSpotManager::__cordl_internal_get__spotIndexBySpot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spotIndexBySpot;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IMultiplayerSpectatingSpot*, int32_t>* const&
GlobalNamespace::MultiplayerSpectatingSpotManager::__cordl_internal_get__spotIndexBySpot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spotIndexBySpot;
}
constexpr void
GlobalNamespace::MultiplayerSpectatingSpotManager::__cordl_internal_set__spotIndexBySpot(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IMultiplayerSpectatingSpot*, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spotIndexBySpot = value;
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* GlobalNamespace::MultiplayerSpectatingSpotManager::get_spectatingSpots() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotManager*>(), { "get_spectatingSpots", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::IMultiplayerSpectatingSpot* GlobalNamespace::MultiplayerSpectatingSpotManager::get_defaultSpot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotManager*>(), { "get_defaultSpot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IMultiplayerSpectatingSpot*>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerSpectatingSpotManager::RegisterSpectatingSpot(::GlobalNamespace::IMultiplayerSpectatingSpot* spectatingSpot) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotManager*>(),
                                                                                         { "RegisterSpectatingSpot", {}, { ::i2c::type_of<::GlobalNamespace::IMultiplayerSpectatingSpot*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spectatingSpot);
}
inline ::GlobalNamespace::IMultiplayerSpectatingSpot* GlobalNamespace::MultiplayerSpectatingSpotManager::GetAdjacentSpot(::GlobalNamespace::IMultiplayerSpectatingSpot* spectatingSpot,
                                                                                                                         int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotManager*>(),
                                                           { "GetAdjacentSpot", {}, { ::i2c::type_of<::GlobalNamespace::IMultiplayerSpectatingSpot*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IMultiplayerSpectatingSpot*>(this, ___internal_method, spectatingSpot, offset);
}
inline int32_t GlobalNamespace::MultiplayerSpectatingSpotManager::GetIndexBySpot(::GlobalNamespace::IMultiplayerSpectatingSpot* spectatingSpot) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotManager*>(),
                                                                                         { "GetIndexBySpot", {}, { ::i2c::type_of<::GlobalNamespace::IMultiplayerSpectatingSpot*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, spectatingSpot);
}
inline void GlobalNamespace::MultiplayerSpectatingSpotManager::UpdateIndexBySpotDictionary() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotManager*>(), { "UpdateIndexBySpotDictionary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerSpectatingSpotManager::SpotOnHasBeenRemoved(::GlobalNamespace::IMultiplayerSpectatingSpot* spectatingSpot) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotManager*>(),
                                                                                         { "SpotOnHasBeenRemoved", {}, { ::i2c::type_of<::GlobalNamespace::IMultiplayerSpectatingSpot*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spectatingSpot);
}
inline void GlobalNamespace::MultiplayerSpectatingSpotManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerSpectatingSpotManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerSpectatingSpotManager* GlobalNamespace::MultiplayerSpectatingSpotManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerSpectatingSpotManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerSpectatingSpotManager::MultiplayerSpectatingSpotManager() {}
