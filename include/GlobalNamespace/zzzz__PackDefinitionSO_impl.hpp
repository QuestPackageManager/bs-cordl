#pragma once
// IWYU pragma private; include "GlobalNamespace/PackDefinitionSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PackDefinitionSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPackSO_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardIdsSO_def.hpp"
#include "GlobalNamespace/zzzz__OculusLevelProductPacksSO_def.hpp"
#include "GlobalNamespace/zzzz__PS4LevelProductPacksSO_def.hpp"
#include "GlobalNamespace/zzzz__PS5LevelProductPacksSO_def.hpp"
#include "GlobalNamespace/zzzz__PackDefinitionSO_def.hpp"
#include "GlobalNamespace/zzzz__PackPromoInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__PerceivedLoudnessSO_def.hpp"
#include "GlobalNamespace/zzzz__SonyLeaderboardIdsSO_def.hpp"
#include "GlobalNamespace/zzzz__SonyLevelProductPackSourceSO_def.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::LeaderboardIdsSO> (::GlobalNamespace::PackDefinitionSO_LeaderboardIds::*)()>(
    &::GlobalNamespace::PackDefinitionSO_LeaderboardIds::get_riftLeaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d4278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>::get(),
                                                                               "get_riftLeaderboardIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_LeaderboardIds.set_riftLeaderboardIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackDefinitionSO_LeaderboardIds::*)(::GlobalNamespace::LeaderboardIdsSO*)>(
    &::GlobalNamespace::PackDefinitionSO_LeaderboardIds::set_riftLeaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d4280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>::get(), "set_riftLeaderboardIds", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LeaderboardIdsSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_LeaderboardIds.get_questLeaderboardIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::LeaderboardIdsSO> (::GlobalNamespace::PackDefinitionSO_LeaderboardIds::*)()>(
    &::GlobalNamespace::PackDefinitionSO_LeaderboardIds::get_questLeaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d4288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>::get(),
                                                                               "get_questLeaderboardIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_LeaderboardIds.set_questLeaderboardIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackDefinitionSO_LeaderboardIds::*)(::GlobalNamespace::LeaderboardIdsSO*)>(
    &::GlobalNamespace::PackDefinitionSO_LeaderboardIds::set_questLeaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d4290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>::get(), "set_questLeaderboardIds", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LeaderboardIdsSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_LeaderboardIds.get_steamLeaderboardIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::LeaderboardIdsSO> (::GlobalNamespace::PackDefinitionSO_LeaderboardIds::*)()>(
    &::GlobalNamespace::PackDefinitionSO_LeaderboardIds::get_steamLeaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d4298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>::get(),
                                                                               "get_steamLeaderboardIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_LeaderboardIds.set_steamLeaderboardIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackDefinitionSO_LeaderboardIds::*)(::GlobalNamespace::LeaderboardIdsSO*)>(
    &::GlobalNamespace::PackDefinitionSO_LeaderboardIds::set_steamLeaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d42a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>::get(), "set_steamLeaderboardIds", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LeaderboardIdsSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_LeaderboardIds.get_ps4LeaderboardIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> (::GlobalNamespace::PackDefinitionSO_LeaderboardIds::*)()>(
    &::GlobalNamespace::PackDefinitionSO_LeaderboardIds::get_ps4LeaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d42a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>::get(),
                                                                               "get_ps4LeaderboardIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_LeaderboardIds.set_ps4LeaderboardIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackDefinitionSO_LeaderboardIds::*)(::GlobalNamespace::SonyLeaderboardIdsSO*)>(
    &::GlobalNamespace::PackDefinitionSO_LeaderboardIds::set_ps4LeaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d42b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>::get(), "set_ps4LeaderboardIds", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SonyLeaderboardIdsSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_LeaderboardIds.get_ps5LeaderboardIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> (::GlobalNamespace::PackDefinitionSO_LeaderboardIds::*)()>(
    &::GlobalNamespace::PackDefinitionSO_LeaderboardIds::get_ps5LeaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d42b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>::get(),
                                                                               "get_ps5LeaderboardIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_LeaderboardIds.set_ps5LeaderboardIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackDefinitionSO_LeaderboardIds::*)(::GlobalNamespace::SonyLeaderboardIdsSO*)>(
    &::GlobalNamespace::PackDefinitionSO_LeaderboardIds::set_ps5LeaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d42c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>::get(), "set_ps5LeaderboardIds", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SonyLeaderboardIdsSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_LeaderboardIds._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackDefinitionSO_LeaderboardIds::*)()>(
    &::GlobalNamespace::PackDefinitionSO_LeaderboardIds::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d42c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____riftLeaderboardIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____questLeaderboardIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____steamLeaderboardIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>& GlobalNamespace::PackDefinitionSO_LeaderboardIds::__cordl_internal_get__ps4LeaderboardIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps4LeaderboardIds;
}
constexpr ::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> const& GlobalNamespace::PackDefinitionSO_LeaderboardIds::__cordl_internal_get__ps4LeaderboardIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps4LeaderboardIds;
}
constexpr void GlobalNamespace::PackDefinitionSO_LeaderboardIds::__cordl_internal_set__ps4LeaderboardIds(::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ps4LeaderboardIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>& GlobalNamespace::PackDefinitionSO_LeaderboardIds::__cordl_internal_get__ps5LeaderboardIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5LeaderboardIds;
}
constexpr ::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> const& GlobalNamespace::PackDefinitionSO_LeaderboardIds::__cordl_internal_get__ps5LeaderboardIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5LeaderboardIds;
}
constexpr void GlobalNamespace::PackDefinitionSO_LeaderboardIds::__cordl_internal_set__ps5LeaderboardIds(::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ps5LeaderboardIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::GlobalNamespace::LeaderboardIdsSO> GlobalNamespace::PackDefinitionSO_LeaderboardIds::get_riftLeaderboardIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>::get(),
                                                                             "get_riftLeaderboardIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LeaderboardIdsSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionSO_LeaderboardIds::set_riftLeaderboardIds(::GlobalNamespace::LeaderboardIdsSO* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>::get(), "set_riftLeaderboardIds", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LeaderboardIdsSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::LeaderboardIdsSO> GlobalNamespace::PackDefinitionSO_LeaderboardIds::get_questLeaderboardIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>::get(),
                                                                             "get_questLeaderboardIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LeaderboardIdsSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionSO_LeaderboardIds::set_questLeaderboardIds(::GlobalNamespace::LeaderboardIdsSO* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>::get(), "set_questLeaderboardIds", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LeaderboardIdsSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::LeaderboardIdsSO> GlobalNamespace::PackDefinitionSO_LeaderboardIds::get_steamLeaderboardIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>::get(),
                                                                             "get_steamLeaderboardIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LeaderboardIdsSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionSO_LeaderboardIds::set_steamLeaderboardIds(::GlobalNamespace::LeaderboardIdsSO* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>::get(), "set_steamLeaderboardIds", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LeaderboardIdsSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> GlobalNamespace::PackDefinitionSO_LeaderboardIds::get_ps4LeaderboardIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>::get(),
                                                                             "get_ps4LeaderboardIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionSO_LeaderboardIds::set_ps4LeaderboardIds(::GlobalNamespace::SonyLeaderboardIdsSO* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>::get(), "set_ps4LeaderboardIds", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SonyLeaderboardIdsSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> GlobalNamespace::PackDefinitionSO_LeaderboardIds::get_ps5LeaderboardIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>::get(),
                                                                             "get_ps5LeaderboardIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionSO_LeaderboardIds::set_ps5LeaderboardIds(::GlobalNamespace::SonyLeaderboardIdsSO* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>::get(), "set_ps5LeaderboardIds", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SonyLeaderboardIdsSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PackDefinitionSO_LeaderboardIds::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PackDefinitionSO_LeaderboardIds* GlobalNamespace::PackDefinitionSO_LeaderboardIds::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PackDefinitionSO_LeaderboardIds::PackDefinitionSO_LeaderboardIds() {}
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_LevelProductPacks.get_steamLevelProductPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::SteamLevelProductPacksSO> (::GlobalNamespace::PackDefinitionSO_LevelProductPacks::*)()>(
    &::GlobalNamespace::PackDefinitionSO_LevelProductPacks::get_steamLevelProductPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d42d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>::get(),
                                                                               "get_steamLevelProductPacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_LevelProductPacks.set_steamLevelProductPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackDefinitionSO_LevelProductPacks::*)(::GlobalNamespace::SteamLevelProductPacksSO*)>(
    &::GlobalNamespace::PackDefinitionSO_LevelProductPacks::set_steamLevelProductPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d42d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>::get(), "set_steamLevelProductPacks", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SteamLevelProductPacksSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_LevelProductPacks.get_oculusLevelProductPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::OculusLevelProductPacksSO> (::GlobalNamespace::PackDefinitionSO_LevelProductPacks::*)()>(
    &::GlobalNamespace::PackDefinitionSO_LevelProductPacks::get_oculusLevelProductPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d42e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>::get(),
                                                                               "get_oculusLevelProductPacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_LevelProductPacks.set_oculusLevelProductPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackDefinitionSO_LevelProductPacks::*)(::GlobalNamespace::OculusLevelProductPacksSO*)>(
    &::GlobalNamespace::PackDefinitionSO_LevelProductPacks::set_oculusLevelProductPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d42e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>::get(), "set_oculusLevelProductPacks", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OculusLevelProductPacksSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_LevelProductPacks.get_ps4LevelProductPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::PS4LevelProductPacksSO> (::GlobalNamespace::PackDefinitionSO_LevelProductPacks::*)()>(
    &::GlobalNamespace::PackDefinitionSO_LevelProductPacks::get_ps4LevelProductPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d42f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>::get(),
                                                                               "get_ps4LevelProductPacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_LevelProductPacks.set_ps4LevelProductPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackDefinitionSO_LevelProductPacks::*)(::GlobalNamespace::PS4LevelProductPacksSO*)>(
    &::GlobalNamespace::PackDefinitionSO_LevelProductPacks::set_ps4LevelProductPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d42f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>::get(), "set_ps4LevelProductPacks", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PS4LevelProductPacksSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_LevelProductPacks.get_ps5LevelProductPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::PS5LevelProductPacksSO> (::GlobalNamespace::PackDefinitionSO_LevelProductPacks::*)()>(
    &::GlobalNamespace::PackDefinitionSO_LevelProductPacks::get_ps5LevelProductPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d4300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>::get(),
                                                                               "get_ps5LevelProductPacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_LevelProductPacks.set_ps5LevelProductPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackDefinitionSO_LevelProductPacks::*)(::GlobalNamespace::PS5LevelProductPacksSO*)>(
    &::GlobalNamespace::PackDefinitionSO_LevelProductPacks::set_ps5LevelProductPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d4308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>::get(), "set_ps5LevelProductPacks", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PS5LevelProductPacksSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_LevelProductPacks.get_sonyLevelProductPackSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::SonyLevelProductPackSourceSO> (
    ::GlobalNamespace::PackDefinitionSO_LevelProductPacks::*)()>(&::GlobalNamespace::PackDefinitionSO_LevelProductPacks::get_sonyLevelProductPackSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d4310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>::get(),
                                                                               "get_sonyLevelProductPackSource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_LevelProductPacks.set_sonyLevelProductPackSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackDefinitionSO_LevelProductPacks::*)(::GlobalNamespace::SonyLevelProductPackSourceSO*)>(
    &::GlobalNamespace::PackDefinitionSO_LevelProductPacks::set_sonyLevelProductPackSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d4318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>::get(), "set_sonyLevelProductPackSource",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SonyLevelProductPackSourceSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_LevelProductPacks._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackDefinitionSO_LevelProductPacks::*)()>(
    &::GlobalNamespace::PackDefinitionSO_LevelProductPacks::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d4320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____steamLevelProductPacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____oculusLevelProductPacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SonyLevelProductPackSourceSO>& GlobalNamespace::PackDefinitionSO_LevelProductPacks::__cordl_internal_get__sonyLevelProductPackSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sonyLevelProductPackSource;
}
constexpr ::UnityW<::GlobalNamespace::SonyLevelProductPackSourceSO> const& GlobalNamespace::PackDefinitionSO_LevelProductPacks::__cordl_internal_get__sonyLevelProductPackSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sonyLevelProductPackSource;
}
constexpr void GlobalNamespace::PackDefinitionSO_LevelProductPacks::__cordl_internal_set__sonyLevelProductPackSource(::UnityW<::GlobalNamespace::SonyLevelProductPackSourceSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sonyLevelProductPackSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PS4LevelProductPacksSO>& GlobalNamespace::PackDefinitionSO_LevelProductPacks::__cordl_internal_get__ps4LevelProductPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps4LevelProductPacks;
}
constexpr ::UnityW<::GlobalNamespace::PS4LevelProductPacksSO> const& GlobalNamespace::PackDefinitionSO_LevelProductPacks::__cordl_internal_get__ps4LevelProductPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps4LevelProductPacks;
}
constexpr void GlobalNamespace::PackDefinitionSO_LevelProductPacks::__cordl_internal_set__ps4LevelProductPacks(::UnityW<::GlobalNamespace::PS4LevelProductPacksSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ps4LevelProductPacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PS5LevelProductPacksSO>& GlobalNamespace::PackDefinitionSO_LevelProductPacks::__cordl_internal_get__ps5LevelProductPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5LevelProductPacks;
}
constexpr ::UnityW<::GlobalNamespace::PS5LevelProductPacksSO> const& GlobalNamespace::PackDefinitionSO_LevelProductPacks::__cordl_internal_get__ps5LevelProductPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5LevelProductPacks;
}
constexpr void GlobalNamespace::PackDefinitionSO_LevelProductPacks::__cordl_internal_set__ps5LevelProductPacks(::UnityW<::GlobalNamespace::PS5LevelProductPacksSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ps5LevelProductPacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::GlobalNamespace::SteamLevelProductPacksSO> GlobalNamespace::PackDefinitionSO_LevelProductPacks::get_steamLevelProductPacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>::get(),
                                                                             "get_steamLevelProductPacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionSO_LevelProductPacks::set_steamLevelProductPacks(::GlobalNamespace::SteamLevelProductPacksSO* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>::get(), "set_steamLevelProductPacks", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SteamLevelProductPacksSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::OculusLevelProductPacksSO> GlobalNamespace::PackDefinitionSO_LevelProductPacks::get_oculusLevelProductPacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>::get(),
                                                                             "get_oculusLevelProductPacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OculusLevelProductPacksSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionSO_LevelProductPacks::set_oculusLevelProductPacks(::GlobalNamespace::OculusLevelProductPacksSO* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>::get(), "set_oculusLevelProductPacks", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OculusLevelProductPacksSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::PS4LevelProductPacksSO> GlobalNamespace::PackDefinitionSO_LevelProductPacks::get_ps4LevelProductPacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>::get(),
                                                                             "get_ps4LevelProductPacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PS4LevelProductPacksSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionSO_LevelProductPacks::set_ps4LevelProductPacks(::GlobalNamespace::PS4LevelProductPacksSO* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>::get(), "set_ps4LevelProductPacks", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PS4LevelProductPacksSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::PS5LevelProductPacksSO> GlobalNamespace::PackDefinitionSO_LevelProductPacks::get_ps5LevelProductPacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>::get(),
                                                                             "get_ps5LevelProductPacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PS5LevelProductPacksSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionSO_LevelProductPacks::set_ps5LevelProductPacks(::GlobalNamespace::PS5LevelProductPacksSO* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>::get(), "set_ps5LevelProductPacks", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PS5LevelProductPacksSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::SonyLevelProductPackSourceSO> GlobalNamespace::PackDefinitionSO_LevelProductPacks::get_sonyLevelProductPackSource() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>::get(),
                                                                             "get_sonyLevelProductPackSource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SonyLevelProductPackSourceSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionSO_LevelProductPacks::set_sonyLevelProductPackSource(::GlobalNamespace::SonyLevelProductPackSourceSO* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>::get(), "set_sonyLevelProductPackSource", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SonyLevelProductPackSourceSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PackDefinitionSO_LevelProductPacks::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PackDefinitionSO_LevelProductPacks* GlobalNamespace::PackDefinitionSO_LevelProductPacks::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PackDefinitionSO_LevelProductPacks::PackDefinitionSO_LevelProductPacks() {}
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO_Credits._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackDefinitionSO_Credits::*)()>(&::GlobalNamespace::PackDefinitionSO_Credits::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d4328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_Credits*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___creditsPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PackDefinitionSO_Credits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO_Credits*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PackDefinitionSO_Credits* GlobalNamespace::PackDefinitionSO_Credits::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PackDefinitionSO_Credits*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PackDefinitionSO_Credits::PackDefinitionSO_Credits() {}
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_content
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::BeatmapLevelPackSO> (::GlobalNamespace::PackDefinitionSO::*)()>(
    &::GlobalNamespace::PackDefinitionSO::get_content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d4190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_content",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.set_content
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackDefinitionSO::*)(::GlobalNamespace::BeatmapLevelPackSO*)>(
    &::GlobalNamespace::PackDefinitionSO::set_content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d4198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "set_content", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPackSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_order
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::PackDefinitionSO::*)()>(&::GlobalNamespace::PackDefinitionSO::get_order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d41a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_order",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.set_order
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackDefinitionSO::*)(int32_t)>(&::GlobalNamespace::PackDefinitionSO::set_order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d41a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "set_order", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_tags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PackDefinitionSO_Tags (::GlobalNamespace::PackDefinitionSO::*)()>(
    &::GlobalNamespace::PackDefinitionSO::get_tags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d41b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_tags",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.set_tags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackDefinitionSO::*)(::GlobalNamespace::PackDefinitionSO_Tags)>(
    &::GlobalNamespace::PackDefinitionSO::set_tags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d41b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "set_tags", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PackDefinitionSO_Tags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_levelProductPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PackDefinitionSO_LevelProductPacks* (::GlobalNamespace::PackDefinitionSO::*)()>(
    &::GlobalNamespace::PackDefinitionSO::get_levelProductPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d41c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(),
                                                                               "get_levelProductPacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.set_levelProductPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackDefinitionSO::*)(::GlobalNamespace::PackDefinitionSO_LevelProductPacks*)>(
    &::GlobalNamespace::PackDefinitionSO::set_levelProductPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d41c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "set_levelProductPacks", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_leaderboardIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PackDefinitionSO_LeaderboardIds* (::GlobalNamespace::PackDefinitionSO::*)()>(
    &::GlobalNamespace::PackDefinitionSO::get_leaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d41d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(),
                                                                               "get_leaderboardIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_packPromoInfoReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>* (
    ::GlobalNamespace::PackDefinitionSO::*)()>(&::GlobalNamespace::PackDefinitionSO::get_packPromoInfoReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d41d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(),
                                                                               "get_packPromoInfoReference", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_isBuiltIn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PackDefinitionSO::*)()>(&::GlobalNamespace::PackDefinitionSO::get_isBuiltIn)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26d41e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_isBuiltIn",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_isDLC
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PackDefinitionSO::*)()>(&::GlobalNamespace::PackDefinitionSO::get_isDLC)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26ccbc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_isDLC",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_isBuiltInContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PackDefinitionSO::*)()>(&::GlobalNamespace::PackDefinitionSO::get_isBuiltInContent)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26d41ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(),
                                                                               "get_isBuiltInContent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_isOST
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PackDefinitionSO::*)()>(&::GlobalNamespace::PackDefinitionSO::get_isOST)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26ccbb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_isOST",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_isEntitlementCheckSkipped
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PackDefinitionSO::*)()>(
    &::GlobalNamespace::PackDefinitionSO::get_isEntitlementCheckSkipped)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26ccbd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(),
                                                                               "get_isEntitlementCheckSkipped", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_isHidden
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PackDefinitionSO::*)()>(&::GlobalNamespace::PackDefinitionSO::get_isHidden)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x26d4200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_isHidden",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_isInDevelopment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PackDefinitionSO::*)()>(&::GlobalNamespace::PackDefinitionSO::get_isInDevelopment)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26d4210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(),
                                                                               "get_isInDevelopment", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_hasCredits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PackDefinitionSO::*)()>(&::GlobalNamespace::PackDefinitionSO::get_hasCredits)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26d421c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_hasCredits",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_perceivedLoudness
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::PerceivedLoudnessSO> (::GlobalNamespace::PackDefinitionSO::*)()>(
    &::GlobalNamespace::PackDefinitionSO::get_perceivedLoudness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d4258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(),
                                                                               "get_perceivedLoudness", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.set_perceivedLoudness
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackDefinitionSO::*)(::GlobalNamespace::PerceivedLoudnessSO*)>(
    &::GlobalNamespace::PackDefinitionSO::set_perceivedLoudness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d4260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "set_perceivedLoudness", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PerceivedLoudnessSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_credits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PackDefinitionSO_Credits* (::GlobalNamespace::PackDefinitionSO::*)()>(
    &::GlobalNamespace::PackDefinitionSO::get_credits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d4268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_credits",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackDefinitionSO::*)()>(&::GlobalNamespace::PackDefinitionSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d4270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelPack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leaderboardIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelProductPacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____packPromoInfoReference)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____perceivedLoudnessPerLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____credits)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::GlobalNamespace::BeatmapLevelPackSO> GlobalNamespace::PackDefinitionSO::get_content() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_content",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BeatmapLevelPackSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionSO::set_content(::GlobalNamespace::BeatmapLevelPackSO* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "set_content", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPackSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::PackDefinitionSO::get_order() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_order",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionSO::set_order(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "set_order",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PackDefinitionSO_Tags GlobalNamespace::PackDefinitionSO::get_tags() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_tags",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PackDefinitionSO_Tags, false>(this, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionSO::set_tags(::GlobalNamespace::PackDefinitionSO_Tags value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "set_tags", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PackDefinitionSO_Tags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PackDefinitionSO_LevelProductPacks* GlobalNamespace::PackDefinitionSO::get_levelProductPacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(),
                                                                             "get_levelProductPacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*, false>(this, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionSO::set_levelProductPacks(::GlobalNamespace::PackDefinitionSO_LevelProductPacks* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "set_levelProductPacks", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PackDefinitionSO_LevelProductPacks*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PackDefinitionSO_LeaderboardIds* GlobalNamespace::PackDefinitionSO::get_leaderboardIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_leaderboardIds",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PackDefinitionSO_LeaderboardIds*, false>(this, ___internal_method);
}
inline ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>* GlobalNamespace::PackDefinitionSO::get_packPromoInfoReference() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(),
                                                                             "get_packPromoInfoReference", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::PackDefinitionSO::get_isBuiltIn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_isBuiltIn",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::PackDefinitionSO::get_isDLC() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_isDLC",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::PackDefinitionSO::get_isBuiltInContent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(),
                                                                             "get_isBuiltInContent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::PackDefinitionSO::get_isOST() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_isOST",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::PackDefinitionSO::get_isEntitlementCheckSkipped() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(),
                                                                             "get_isEntitlementCheckSkipped", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::PackDefinitionSO::get_isHidden() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_isHidden",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::PackDefinitionSO::get_isInDevelopment() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_isInDevelopment",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::PackDefinitionSO::get_hasCredits() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_hasCredits",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::PerceivedLoudnessSO> GlobalNamespace::PackDefinitionSO::get_perceivedLoudness() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(),
                                                                             "get_perceivedLoudness", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PerceivedLoudnessSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionSO::set_perceivedLoudness(::GlobalNamespace::PerceivedLoudnessSO* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "set_perceivedLoudness", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PerceivedLoudnessSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PackDefinitionSO_Credits* GlobalNamespace::PackDefinitionSO::get_credits() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_credits",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PackDefinitionSO_Credits*, false>(this, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PackDefinitionSO* GlobalNamespace::PackDefinitionSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PackDefinitionSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PackDefinitionSO::PackDefinitionSO() {}
