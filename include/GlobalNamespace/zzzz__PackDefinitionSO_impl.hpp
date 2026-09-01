#pragma once
// IWYU pragma private; include "GlobalNamespace\PackDefinitionSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PackDefinitionSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPackSO_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardIdsSO_def.hpp"
#include "GlobalNamespace/zzzz__OculusLevelProductPacksSO_def.hpp"
#include "GlobalNamespace/zzzz__PackDefinitionSO_def.hpp"
#include "GlobalNamespace/zzzz__PackPromoInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__PerceivedLoudnessSO_def.hpp"
#include "GlobalNamespace/zzzz__SteamLevelProductPacksSO_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceGameObject_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PackDefinitionSO_Tags::PackDefinitionSO_Tags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PackDefinitionSO_Tags::PackDefinitionSO_Tags() {}
constexpr ::GlobalNamespace::PackDefinitionSO_Tags GlobalNamespace::PackDefinitionSO_Tags::Hidden{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::PackDefinitionSO_Tags GlobalNamespace::PackDefinitionSO_Tags::BuiltIn{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::PackDefinitionSO_Tags GlobalNamespace::PackDefinitionSO_Tags::DLC{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::PackDefinitionSO_Tags GlobalNamespace::PackDefinitionSO_Tags::InDevelopment{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_LeaderboardIds.get_riftLeaderboardIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::LeaderboardIdsSO> (::GlobalNamespace::PackDefinitionSO_LeaderboardIds::*)()>(
    &::GlobalNamespace::PackDefinitionSO_LeaderboardIds::get_riftLeaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>(), { "get_riftLeaderboardIds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_LeaderboardIds.set_riftLeaderboardIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PackDefinitionSO_LeaderboardIds::*)(::GlobalNamespace::LeaderboardIdsSO*)>(
    &::GlobalNamespace::PackDefinitionSO_LeaderboardIds::set_riftLeaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f39c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>(),
                                                                                           { "set_riftLeaderboardIds", {}, { ::i2c::type_of<::GlobalNamespace::LeaderboardIdsSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_LeaderboardIds.get_questLeaderboardIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::LeaderboardIdsSO> (::GlobalNamespace::PackDefinitionSO_LeaderboardIds::*)()>(
    &::GlobalNamespace::PackDefinitionSO_LeaderboardIds::get_questLeaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f3a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>(), { "get_questLeaderboardIds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_LeaderboardIds.set_questLeaderboardIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PackDefinitionSO_LeaderboardIds::*)(::GlobalNamespace::LeaderboardIdsSO*)>(
    &::GlobalNamespace::PackDefinitionSO_LeaderboardIds::set_questLeaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>(),
                                                                                           { "set_questLeaderboardIds", {}, { ::i2c::type_of<::GlobalNamespace::LeaderboardIdsSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_LeaderboardIds.get_steamLeaderboardIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::LeaderboardIdsSO> (::GlobalNamespace::PackDefinitionSO_LeaderboardIds::*)()>(
    &::GlobalNamespace::PackDefinitionSO_LeaderboardIds::get_steamLeaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f3b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>(), { "get_steamLeaderboardIds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_LeaderboardIds.set_steamLeaderboardIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PackDefinitionSO_LeaderboardIds::*)(::GlobalNamespace::LeaderboardIdsSO*)>(
    &::GlobalNamespace::PackDefinitionSO_LeaderboardIds::set_steamLeaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f3bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>(),
                                                                                           { "set_steamLeaderboardIds", {}, { ::i2c::type_of<::GlobalNamespace::LeaderboardIdsSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_LeaderboardIds._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PackDefinitionSO_LeaderboardIds::*)()>(&::GlobalNamespace::PackDefinitionSO_LeaderboardIds::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x372f3c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO>& GlobalNamespace::PackDefinitionSO_LeaderboardIds::__cordl_internal_get__riftLeaderboardIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____riftLeaderboardIds;
}
constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO> const& GlobalNamespace::PackDefinitionSO_LeaderboardIds::__cordl_internal_get__riftLeaderboardIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____riftLeaderboardIds;
}
constexpr void GlobalNamespace::PackDefinitionSO_LeaderboardIds::__cordl_internal_set__riftLeaderboardIds(::UnityW<::GlobalNamespace::LeaderboardIdsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____riftLeaderboardIds = value;
}
constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO>& GlobalNamespace::PackDefinitionSO_LeaderboardIds::__cordl_internal_get__questLeaderboardIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____questLeaderboardIds;
}
constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO> const& GlobalNamespace::PackDefinitionSO_LeaderboardIds::__cordl_internal_get__questLeaderboardIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____questLeaderboardIds;
}
constexpr void GlobalNamespace::PackDefinitionSO_LeaderboardIds::__cordl_internal_set__questLeaderboardIds(::UnityW<::GlobalNamespace::LeaderboardIdsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____questLeaderboardIds = value;
}
constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO>& GlobalNamespace::PackDefinitionSO_LeaderboardIds::__cordl_internal_get__steamLeaderboardIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____steamLeaderboardIds;
}
constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO> const& GlobalNamespace::PackDefinitionSO_LeaderboardIds::__cordl_internal_get__steamLeaderboardIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____steamLeaderboardIds;
}
constexpr void GlobalNamespace::PackDefinitionSO_LeaderboardIds::__cordl_internal_set__steamLeaderboardIds(::UnityW<::GlobalNamespace::LeaderboardIdsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____steamLeaderboardIds = value;
}
inline ::UnityW<::GlobalNamespace::LeaderboardIdsSO> GlobalNamespace::PackDefinitionSO_LeaderboardIds::get_riftLeaderboardIds() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>(), { "get_riftLeaderboardIds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>(this, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionSO_LeaderboardIds::set_riftLeaderboardIds(::GlobalNamespace::LeaderboardIdsSO* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>(),
                                                                                         { "set_riftLeaderboardIds", {}, { ::i2c::type_of<::GlobalNamespace::LeaderboardIdsSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::LeaderboardIdsSO> GlobalNamespace::PackDefinitionSO_LeaderboardIds::get_questLeaderboardIds() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>(), { "get_questLeaderboardIds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>(this, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionSO_LeaderboardIds::set_questLeaderboardIds(::GlobalNamespace::LeaderboardIdsSO* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>(),
                                                                                         { "set_questLeaderboardIds", {}, { ::i2c::type_of<::GlobalNamespace::LeaderboardIdsSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::LeaderboardIdsSO> GlobalNamespace::PackDefinitionSO_LeaderboardIds::get_steamLeaderboardIds() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>(), { "get_steamLeaderboardIds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>(this, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionSO_LeaderboardIds::set_steamLeaderboardIds(::GlobalNamespace::LeaderboardIdsSO* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>(),
                                                                                         { "set_steamLeaderboardIds", {}, { ::i2c::type_of<::GlobalNamespace::LeaderboardIdsSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PackDefinitionSO_LeaderboardIds::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PackDefinitionSO_LeaderboardIds* GlobalNamespace::PackDefinitionSO_LeaderboardIds::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PackDefinitionSO_LeaderboardIds::PackDefinitionSO_LeaderboardIds() {}
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_LevelProductPacks.get_steamLevelProductPacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SteamLevelProductPacksSO> (::GlobalNamespace::PackDefinitionSO_LevelProductPacks::*)()>(
    &::GlobalNamespace::PackDefinitionSO_LevelProductPacks::get_steamLevelProductPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>(), { "get_steamLevelProductPacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_LevelProductPacks.set_steamLevelProductPacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PackDefinitionSO_LevelProductPacks::*)(::GlobalNamespace::SteamLevelProductPacksSO*)>(
    &::GlobalNamespace::PackDefinitionSO_LevelProductPacks::set_steamLevelProductPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>(),
                                                                                           { "set_steamLevelProductPacks", {}, { ::i2c::type_of<::GlobalNamespace::SteamLevelProductPacksSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_LevelProductPacks.get_oculusLevelProductPacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::OculusLevelProductPacksSO> (::GlobalNamespace::PackDefinitionSO_LevelProductPacks::*)()>(
    &::GlobalNamespace::PackDefinitionSO_LevelProductPacks::get_oculusLevelProductPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>(), { "get_oculusLevelProductPacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_LevelProductPacks.set_oculusLevelProductPacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PackDefinitionSO_LevelProductPacks::*)(::GlobalNamespace::OculusLevelProductPacksSO*)>(
    &::GlobalNamespace::PackDefinitionSO_LevelProductPacks::set_oculusLevelProductPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f3e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>(),
                                                             { "set_oculusLevelProductPacks", {}, { ::i2c::type_of<::GlobalNamespace::OculusLevelProductPacksSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_LevelProductPacks._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PackDefinitionSO_LevelProductPacks::*)()>(&::GlobalNamespace::PackDefinitionSO_LevelProductPacks::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x372f3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>& GlobalNamespace::PackDefinitionSO_LevelProductPacks::__cordl_internal_get__steamLevelProductPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____steamLevelProductPacks;
}
constexpr ::UnityW<::GlobalNamespace::SteamLevelProductPacksSO> const& GlobalNamespace::PackDefinitionSO_LevelProductPacks::__cordl_internal_get__steamLevelProductPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____steamLevelProductPacks;
}
constexpr void GlobalNamespace::PackDefinitionSO_LevelProductPacks::__cordl_internal_set__steamLevelProductPacks(::UnityW<::GlobalNamespace::SteamLevelProductPacksSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____steamLevelProductPacks = value;
}
constexpr ::UnityW<::GlobalNamespace::OculusLevelProductPacksSO>& GlobalNamespace::PackDefinitionSO_LevelProductPacks::__cordl_internal_get__oculusLevelProductPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusLevelProductPacks;
}
constexpr ::UnityW<::GlobalNamespace::OculusLevelProductPacksSO> const& GlobalNamespace::PackDefinitionSO_LevelProductPacks::__cordl_internal_get__oculusLevelProductPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusLevelProductPacks;
}
constexpr void GlobalNamespace::PackDefinitionSO_LevelProductPacks::__cordl_internal_set__oculusLevelProductPacks(::UnityW<::GlobalNamespace::OculusLevelProductPacksSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____oculusLevelProductPacks = value;
}
inline ::UnityW<::GlobalNamespace::SteamLevelProductPacksSO> GlobalNamespace::PackDefinitionSO_LevelProductPacks::get_steamLevelProductPacks() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>(), { "get_steamLevelProductPacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>>(this, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionSO_LevelProductPacks::set_steamLevelProductPacks(::GlobalNamespace::SteamLevelProductPacksSO* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>(),
                                                                                         { "set_steamLevelProductPacks", {}, { ::i2c::type_of<::GlobalNamespace::SteamLevelProductPacksSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::OculusLevelProductPacksSO> GlobalNamespace::PackDefinitionSO_LevelProductPacks::get_oculusLevelProductPacks() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>(), { "get_oculusLevelProductPacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OculusLevelProductPacksSO>>(this, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionSO_LevelProductPacks::set_oculusLevelProductPacks(::GlobalNamespace::OculusLevelProductPacksSO* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>(),
                                                                                         { "set_oculusLevelProductPacks", {}, { ::i2c::type_of<::GlobalNamespace::OculusLevelProductPacksSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PackDefinitionSO_LevelProductPacks::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PackDefinitionSO_LevelProductPacks* GlobalNamespace::PackDefinitionSO_LevelProductPacks::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PackDefinitionSO_LevelProductPacks::PackDefinitionSO_LevelProductPacks() {}
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_Credits._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PackDefinitionSO_Credits::*)()>(&::GlobalNamespace::PackDefinitionSO_Credits::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x372f3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO_Credits*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::PackDefinitionSO_Credits::__cordl_internal_get_order() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___order;
}
constexpr int32_t const& GlobalNamespace::PackDefinitionSO_Credits::__cordl_internal_get_order() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___order;
}
constexpr void GlobalNamespace::PackDefinitionSO_Credits::__cordl_internal_set_order(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___order = value;
}
constexpr ::UnityEngine::AddressableAssets::AssetReferenceGameObject*& GlobalNamespace::PackDefinitionSO_Credits::__cordl_internal_get_creditsPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___creditsPrefab;
}
constexpr ::UnityEngine::AddressableAssets::AssetReferenceGameObject* const& GlobalNamespace::PackDefinitionSO_Credits::__cordl_internal_get_creditsPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___creditsPrefab;
}
constexpr void GlobalNamespace::PackDefinitionSO_Credits::__cordl_internal_set_creditsPrefab(::UnityEngine::AddressableAssets::AssetReferenceGameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___creditsPrefab = value;
}
inline void GlobalNamespace::PackDefinitionSO_Credits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO_Credits*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PackDefinitionSO_Credits* GlobalNamespace::PackDefinitionSO_Credits::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PackDefinitionSO_Credits*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PackDefinitionSO_Credits::PackDefinitionSO_Credits() {}
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_allowUnsortedLevels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PackDefinitionSO::*)()>(&::GlobalNamespace::PackDefinitionSO::get_allowUnsortedLevels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_allowUnsortedLevels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.set_allowUnsortedLevels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PackDefinitionSO::*)(bool)>(&::GlobalNamespace::PackDefinitionSO::set_allowUnsortedLevels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f26c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "set_allowUnsortedLevels", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_content
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BeatmapLevelPackSO> (::GlobalNamespace::PackDefinitionSO::*)()>(&::GlobalNamespace::PackDefinitionSO::get_content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_content", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.set_content
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PackDefinitionSO::*)(::GlobalNamespace::BeatmapLevelPackSO*)>(&::GlobalNamespace::PackDefinitionSO::set_content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f27c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "set_content", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPackSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_order
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PackDefinitionSO::*)()>(&::GlobalNamespace::PackDefinitionSO::get_order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_order", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.set_order
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PackDefinitionSO::*)(int32_t)>(&::GlobalNamespace::PackDefinitionSO::set_order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f28c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "set_order", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_tags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PackDefinitionSO_Tags (::GlobalNamespace::PackDefinitionSO::*)()>(&::GlobalNamespace::PackDefinitionSO::get_tags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_tags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.set_tags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PackDefinitionSO::*)(::GlobalNamespace::PackDefinitionSO_Tags)>(&::GlobalNamespace::PackDefinitionSO::set_tags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f29c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "set_tags", {}, { ::i2c::type_of<::GlobalNamespace::PackDefinitionSO_Tags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_levelProductPacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PackDefinitionSO_LevelProductPacks* (::GlobalNamespace::PackDefinitionSO::*)()>(
    &::GlobalNamespace::PackDefinitionSO::get_levelProductPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f2a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_levelProductPacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.set_levelProductPacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PackDefinitionSO::*)(::GlobalNamespace::PackDefinitionSO_LevelProductPacks*)>(
    &::GlobalNamespace::PackDefinitionSO::set_levelProductPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f2ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "set_levelProductPacks", {}, { ::i2c::type_of<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_leaderboardIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PackDefinitionSO_LeaderboardIds* (::GlobalNamespace::PackDefinitionSO::*)()>(
    &::GlobalNamespace::PackDefinitionSO::get_leaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f2b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_leaderboardIds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_packPromoInfoReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>* (::GlobalNamespace::PackDefinitionSO::*)()>(
    &::GlobalNamespace::PackDefinitionSO::get_packPromoInfoReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f2bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_packPromoInfoReference", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.set_packPromoInfoReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PackDefinitionSO::*)(
    ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>*)>(&::GlobalNamespace::PackDefinitionSO::set_packPromoInfoReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f2c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(),
                            { "set_packPromoInfoReference", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_isBuiltIn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PackDefinitionSO::*)()>(&::GlobalNamespace::PackDefinitionSO::get_isBuiltIn)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x372f2cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_isBuiltIn", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_isDLC
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PackDefinitionSO::*)()>(&::GlobalNamespace::PackDefinitionSO::get_isDLC)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x372f2d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_isDLC", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_isBuiltInContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PackDefinitionSO::*)()>(&::GlobalNamespace::PackDefinitionSO::get_isBuiltInContent)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x372f2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_isBuiltInContent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_isOST
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PackDefinitionSO::*)()>(&::GlobalNamespace::PackDefinitionSO::get_isOST)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x372f2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_isOST", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_isEntitlementCheckSkipped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PackDefinitionSO::*)()>(&::GlobalNamespace::PackDefinitionSO::get_isEntitlementCheckSkipped)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x372f30c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_isEntitlementCheckSkipped", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_isHidden
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PackDefinitionSO::*)()>(&::GlobalNamespace::PackDefinitionSO::get_isHidden)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x372f320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_isHidden", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_isInDevelopment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PackDefinitionSO::*)()>(&::GlobalNamespace::PackDefinitionSO::get_isInDevelopment)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x372f330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_isInDevelopment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_isIndividualSongs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PackDefinitionSO::*)()>(&::GlobalNamespace::PackDefinitionSO::get_isIndividualSongs)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x372f33c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_isIndividualSongs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_hasCredits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PackDefinitionSO::*)()>(&::GlobalNamespace::PackDefinitionSO::get_hasCredits)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x372f35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_hasCredits", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_perceivedLoudness
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PerceivedLoudnessSO> (::GlobalNamespace::PackDefinitionSO::*)()>(
    &::GlobalNamespace::PackDefinitionSO::get_perceivedLoudness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_perceivedLoudness", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.set_perceivedLoudness
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PackDefinitionSO::*)(::GlobalNamespace::PerceivedLoudnessSO*)>(
    &::GlobalNamespace::PackDefinitionSO::set_perceivedLoudness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f37c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "set_perceivedLoudness", {}, { ::i2c::type_of<::GlobalNamespace::PerceivedLoudnessSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_credits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PackDefinitionSO_Credits* (::GlobalNamespace::PackDefinitionSO::*)()>(&::GlobalNamespace::PackDefinitionSO::get_credits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_credits", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PackDefinitionSO::*)()>(&::GlobalNamespace::PackDefinitionSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372f38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BeatmapLevelPackSO>& GlobalNamespace::PackDefinitionSO::__cordl_internal_get__beatmapLevelPack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelPack;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapLevelPackSO> const& GlobalNamespace::PackDefinitionSO::__cordl_internal_get__beatmapLevelPack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelPack;
}
constexpr void GlobalNamespace::PackDefinitionSO::__cordl_internal_set__beatmapLevelPack(::UnityW<::GlobalNamespace::BeatmapLevelPackSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelPack = value;
}
constexpr bool& GlobalNamespace::PackDefinitionSO::__cordl_internal_get__allowUnsortedLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowUnsortedLevels;
}
constexpr bool const& GlobalNamespace::PackDefinitionSO::__cordl_internal_get__allowUnsortedLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowUnsortedLevels;
}
constexpr void GlobalNamespace::PackDefinitionSO::__cordl_internal_set__allowUnsortedLevels(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowUnsortedLevels = value;
}
constexpr int32_t& GlobalNamespace::PackDefinitionSO::__cordl_internal_get__order() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____order;
}
constexpr int32_t const& GlobalNamespace::PackDefinitionSO::__cordl_internal_get__order() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____order;
}
constexpr void GlobalNamespace::PackDefinitionSO::__cordl_internal_set__order(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____order = value;
}
constexpr ::GlobalNamespace::PackDefinitionSO_LeaderboardIds*& GlobalNamespace::PackDefinitionSO::__cordl_internal_get__leaderboardIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardIds;
}
constexpr ::GlobalNamespace::PackDefinitionSO_LeaderboardIds* const& GlobalNamespace::PackDefinitionSO::__cordl_internal_get__leaderboardIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardIds;
}
constexpr void GlobalNamespace::PackDefinitionSO::__cordl_internal_set__leaderboardIds(::GlobalNamespace::PackDefinitionSO_LeaderboardIds* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leaderboardIds = value;
}
constexpr ::GlobalNamespace::PackDefinitionSO_LevelProductPacks*& GlobalNamespace::PackDefinitionSO::__cordl_internal_get__levelProductPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelProductPacks;
}
constexpr ::GlobalNamespace::PackDefinitionSO_LevelProductPacks* const& GlobalNamespace::PackDefinitionSO::__cordl_internal_get__levelProductPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelProductPacks;
}
constexpr void GlobalNamespace::PackDefinitionSO::__cordl_internal_set__levelProductPacks(::GlobalNamespace::PackDefinitionSO_LevelProductPacks* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelProductPacks = value;
}
constexpr ::GlobalNamespace::PackDefinitionSO_Tags& GlobalNamespace::PackDefinitionSO::__cordl_internal_get__tags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tags;
}
constexpr ::GlobalNamespace::PackDefinitionSO_Tags const& GlobalNamespace::PackDefinitionSO::__cordl_internal_get__tags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tags;
}
constexpr void GlobalNamespace::PackDefinitionSO::__cordl_internal_set__tags(::GlobalNamespace::PackDefinitionSO_Tags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tags = value;
}
constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>*& GlobalNamespace::PackDefinitionSO::__cordl_internal_get__packPromoInfoReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packPromoInfoReference;
}
constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>* const&
GlobalNamespace::PackDefinitionSO::__cordl_internal_get__packPromoInfoReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packPromoInfoReference;
}
constexpr void
GlobalNamespace::PackDefinitionSO::__cordl_internal_set__packPromoInfoReference(::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____packPromoInfoReference = value;
}
constexpr ::UnityW<::GlobalNamespace::PerceivedLoudnessSO>& GlobalNamespace::PackDefinitionSO::__cordl_internal_get__perceivedLoudnessPerLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perceivedLoudnessPerLevel;
}
constexpr ::UnityW<::GlobalNamespace::PerceivedLoudnessSO> const& GlobalNamespace::PackDefinitionSO::__cordl_internal_get__perceivedLoudnessPerLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perceivedLoudnessPerLevel;
}
constexpr void GlobalNamespace::PackDefinitionSO::__cordl_internal_set__perceivedLoudnessPerLevel(::UnityW<::GlobalNamespace::PerceivedLoudnessSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____perceivedLoudnessPerLevel = value;
}
constexpr ::GlobalNamespace::PackDefinitionSO_Credits*& GlobalNamespace::PackDefinitionSO::__cordl_internal_get__credits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____credits;
}
constexpr ::GlobalNamespace::PackDefinitionSO_Credits* const& GlobalNamespace::PackDefinitionSO::__cordl_internal_get__credits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____credits;
}
constexpr void GlobalNamespace::PackDefinitionSO::__cordl_internal_set__credits(::GlobalNamespace::PackDefinitionSO_Credits* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____credits = value;
}
inline bool GlobalNamespace::PackDefinitionSO::get_allowUnsortedLevels() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_allowUnsortedLevels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionSO::set_allowUnsortedLevels(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "set_allowUnsortedLevels", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::BeatmapLevelPackSO> GlobalNamespace::PackDefinitionSO::get_content() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_content", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>>(this, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionSO::set_content(::GlobalNamespace::BeatmapLevelPackSO* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "set_content", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPackSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::PackDefinitionSO::get_order() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_order", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionSO::set_order(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "set_order", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PackDefinitionSO_Tags GlobalNamespace::PackDefinitionSO::get_tags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_tags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PackDefinitionSO_Tags>(this, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionSO::set_tags(::GlobalNamespace::PackDefinitionSO_Tags value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "set_tags", {}, { ::i2c::type_of<::GlobalNamespace::PackDefinitionSO_Tags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PackDefinitionSO_LevelProductPacks* GlobalNamespace::PackDefinitionSO::get_levelProductPacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_levelProductPacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>(this, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionSO::set_levelProductPacks(::GlobalNamespace::PackDefinitionSO_LevelProductPacks* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "set_levelProductPacks", {}, { ::i2c::type_of<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PackDefinitionSO_LeaderboardIds* GlobalNamespace::PackDefinitionSO::get_leaderboardIds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_leaderboardIds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>(this, ___internal_method);
}
inline ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>* GlobalNamespace::PackDefinitionSO::get_packPromoInfoReference() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_packPromoInfoReference", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>*>(this, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionSO::set_packPromoInfoReference(::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(),
                          { "set_packPromoInfoReference", {}, { ::i2c::type_of<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PackDefinitionSO::get_isBuiltIn() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_isBuiltIn", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PackDefinitionSO::get_isDLC() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_isDLC", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PackDefinitionSO::get_isBuiltInContent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_isBuiltInContent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PackDefinitionSO::get_isOST() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_isOST", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PackDefinitionSO::get_isEntitlementCheckSkipped() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_isEntitlementCheckSkipped", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PackDefinitionSO::get_isHidden() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_isHidden", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PackDefinitionSO::get_isInDevelopment() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_isInDevelopment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PackDefinitionSO::get_isIndividualSongs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_isIndividualSongs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::PackDefinitionSO::get_hasCredits() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_hasCredits", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::PerceivedLoudnessSO> GlobalNamespace::PackDefinitionSO::get_perceivedLoudness() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_perceivedLoudness", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PerceivedLoudnessSO>>(this, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionSO::set_perceivedLoudness(::GlobalNamespace::PerceivedLoudnessSO* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "set_perceivedLoudness", {}, { ::i2c::type_of<::GlobalNamespace::PerceivedLoudnessSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PackDefinitionSO_Credits* GlobalNamespace::PackDefinitionSO::get_credits() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { "get_credits", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PackDefinitionSO_Credits*>(this, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackDefinitionSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PackDefinitionSO* GlobalNamespace::PackDefinitionSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PackDefinitionSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PackDefinitionSO::PackDefinitionSO() {}
