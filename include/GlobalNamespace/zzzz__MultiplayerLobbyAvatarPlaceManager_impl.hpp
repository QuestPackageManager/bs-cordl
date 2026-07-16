#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLobbyAvatarPlaceManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyAvatarPlaceManager_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyStateDataModel_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyAvatarPlace_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager.Activate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::*)(float_t, float_t)>(
    &::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::Activate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59d6670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager*>(), { "Activate", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager.Deactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::*)()>(&::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::Deactivate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59d6b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager*>(), { "Deactivate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::*)()>(&::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59d6c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager.SpawnAllPlaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::*)()>(&::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::SpawnAllPlaces)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x59d6678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager*>(), { "SpawnAllPlaces", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager.DespawnAllPlaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::*)()>(&::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::DespawnAllPlaces)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x59d6b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager*>(), { "DespawnAllPlaces", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::*)()>(&::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x59d6c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ILobbyStateDataModel*& GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::__cordl_internal_get__lobbyStateDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyStateDataModel;
}
constexpr ::GlobalNamespace::ILobbyStateDataModel* const& GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::__cordl_internal_get__lobbyStateDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyStateDataModel;
}
constexpr void GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::__cordl_internal_set__lobbyStateDataModel(::GlobalNamespace::ILobbyStateDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lobbyStateDataModel = value;
}
constexpr ::GlobalNamespace::MultiplayerLobbyAvatarPlace_Pool*& GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::__cordl_internal_get__avatarPlacesPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarPlacesPool;
}
constexpr ::GlobalNamespace::MultiplayerLobbyAvatarPlace_Pool* const& GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::__cordl_internal_get__avatarPlacesPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarPlacesPool;
}
constexpr void GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::__cordl_internal_set__avatarPlacesPool(::GlobalNamespace::MultiplayerLobbyAvatarPlace_Pool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarPlacesPool = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarPlace>>*& GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::__cordl_internal_get__allPlaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allPlaces;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarPlace>>* const&
GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::__cordl_internal_get__allPlaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allPlaces;
}
constexpr void
GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::__cordl_internal_set__allPlaces(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MultiplayerLobbyAvatarPlace>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allPlaces = value;
}
constexpr float_t& GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::__cordl_internal_get__innerCircleRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____innerCircleRadius;
}
constexpr float_t const& GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::__cordl_internal_get__innerCircleRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____innerCircleRadius;
}
constexpr void GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::__cordl_internal_set__innerCircleRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____innerCircleRadius = value;
}
constexpr float_t& GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::__cordl_internal_get__minOuterCircleRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minOuterCircleRadius;
}
constexpr float_t const& GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::__cordl_internal_get__minOuterCircleRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minOuterCircleRadius;
}
constexpr void GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::__cordl_internal_set__minOuterCircleRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minOuterCircleRadius = value;
}
inline void GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::Activate(float_t innerCircleRadius, float_t minOuterCircleRadius) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager*>(), { "Activate", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerCircleRadius, minOuterCircleRadius);
}
inline void GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::Deactivate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager*>(), { "Deactivate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::SpawnAllPlaces() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager*>(), { "SpawnAllPlaces", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::DespawnAllPlaces() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager*>(), { "DespawnAllPlaces", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager* GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLobbyAvatarPlaceManager::MultiplayerLobbyAvatarPlaceManager() {}
