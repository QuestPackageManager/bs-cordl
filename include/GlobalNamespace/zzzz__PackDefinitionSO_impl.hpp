#pragma once
#include "GlobalNamespace/zzzz__PackDefinitionSO_impl.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PackDefinitionSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPackSO_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardIdsSO_def.hpp"
#include "GlobalNamespace/zzzz__OculusLevelProductPacksSO_def.hpp"
#include "GlobalNamespace/zzzz__PS4LevelProductPacksSO_def.hpp"
#include "GlobalNamespace/zzzz__PS5LevelProductPacksSO_def.hpp"
#include "GlobalNamespace/zzzz__PackDefinitionSO_def.hpp"
#include "GlobalNamespace/zzzz__PerceivedLoudnessSO_def.hpp"
#include "GlobalNamespace/zzzz__PromoInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__RelativeSfxVolumeSO_def.hpp"
#include "GlobalNamespace/zzzz__SonyLeaderboardIdsSO_def.hpp"
#include "GlobalNamespace/zzzz__SonyLevelProductPackSourceSO_def.hpp"
#include "GlobalNamespace/zzzz__SteamLevelProductPacksSO_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceGameObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PackDefinitionSO__Tags::__PackDefinitionSO__Tags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PackDefinitionSO__Tags::__PackDefinitionSO__Tags() {}
constexpr ::GlobalNamespace::__PackDefinitionSO__Tags GlobalNamespace::__PackDefinitionSO__Tags::OST{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__PackDefinitionSO__Tags GlobalNamespace::__PackDefinitionSO__Tags::DLC{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__PackDefinitionSO__Tags GlobalNamespace::__PackDefinitionSO__Tags::Owned{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__PackDefinitionSO__Tags GlobalNamespace::__PackDefinitionSO__Tags::Debug{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::__PackDefinitionSO__Tags GlobalNamespace::__PackDefinitionSO__Tags::InDevelopment{ static_cast<int32_t>(0x10) };
//  Writing Method size for method: ::GlobalNamespace::__PackDefinitionSO__LeaderboardIds.get_riftLeaderboardIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::LeaderboardIdsSO> (::GlobalNamespace::__PackDefinitionSO__LeaderboardIds::*)()>(
    &::GlobalNamespace::__PackDefinitionSO__LeaderboardIds::get_riftLeaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f8794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LeaderboardIds*>::get(),
                                                                               "get_riftLeaderboardIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PackDefinitionSO__LeaderboardIds.set_riftLeaderboardIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PackDefinitionSO__LeaderboardIds::*)(::GlobalNamespace::LeaderboardIdsSO*)>(
    &::GlobalNamespace::__PackDefinitionSO__LeaderboardIds::set_riftLeaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f879c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LeaderboardIds*>::get(), "set_riftLeaderboardIds", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LeaderboardIdsSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PackDefinitionSO__LeaderboardIds.get_questLeaderboardIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::LeaderboardIdsSO> (::GlobalNamespace::__PackDefinitionSO__LeaderboardIds::*)()>(
    &::GlobalNamespace::__PackDefinitionSO__LeaderboardIds::get_questLeaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f87a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LeaderboardIds*>::get(),
                                                                               "get_questLeaderboardIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PackDefinitionSO__LeaderboardIds.set_questLeaderboardIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PackDefinitionSO__LeaderboardIds::*)(::GlobalNamespace::LeaderboardIdsSO*)>(
    &::GlobalNamespace::__PackDefinitionSO__LeaderboardIds::set_questLeaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f87ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LeaderboardIds*>::get(), "set_questLeaderboardIds", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LeaderboardIdsSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PackDefinitionSO__LeaderboardIds.get_steamLeaderboardIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::LeaderboardIdsSO> (::GlobalNamespace::__PackDefinitionSO__LeaderboardIds::*)()>(
    &::GlobalNamespace::__PackDefinitionSO__LeaderboardIds::get_steamLeaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f87b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LeaderboardIds*>::get(),
                                                                               "get_steamLeaderboardIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PackDefinitionSO__LeaderboardIds.set_steamLeaderboardIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PackDefinitionSO__LeaderboardIds::*)(::GlobalNamespace::LeaderboardIdsSO*)>(
    &::GlobalNamespace::__PackDefinitionSO__LeaderboardIds::set_steamLeaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f87bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LeaderboardIds*>::get(), "set_steamLeaderboardIds", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LeaderboardIdsSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PackDefinitionSO__LeaderboardIds.get_ps4LeaderboardIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> (::GlobalNamespace::__PackDefinitionSO__LeaderboardIds::*)()>(
    &::GlobalNamespace::__PackDefinitionSO__LeaderboardIds::get_ps4LeaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f87c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LeaderboardIds*>::get(),
                                                                               "get_ps4LeaderboardIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PackDefinitionSO__LeaderboardIds.set_ps4LeaderboardIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PackDefinitionSO__LeaderboardIds::*)(::GlobalNamespace::SonyLeaderboardIdsSO*)>(
    &::GlobalNamespace::__PackDefinitionSO__LeaderboardIds::set_ps4LeaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f87cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LeaderboardIds*>::get(), "set_ps4LeaderboardIds", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SonyLeaderboardIdsSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PackDefinitionSO__LeaderboardIds.get_ps5LeaderboardIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> (::GlobalNamespace::__PackDefinitionSO__LeaderboardIds::*)()>(
    &::GlobalNamespace::__PackDefinitionSO__LeaderboardIds::get_ps5LeaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f87d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LeaderboardIds*>::get(),
                                                                               "get_ps5LeaderboardIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PackDefinitionSO__LeaderboardIds.set_ps5LeaderboardIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PackDefinitionSO__LeaderboardIds::*)(::GlobalNamespace::SonyLeaderboardIdsSO*)>(
    &::GlobalNamespace::__PackDefinitionSO__LeaderboardIds::set_ps5LeaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f87dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LeaderboardIds*>::get(), "set_ps5LeaderboardIds", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SonyLeaderboardIdsSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PackDefinitionSO__LeaderboardIds._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PackDefinitionSO__LeaderboardIds::*)()>(
    &::GlobalNamespace::__PackDefinitionSO__LeaderboardIds::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f87e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LeaderboardIds*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO>& GlobalNamespace::__PackDefinitionSO__LeaderboardIds::__cordl_internal_get__riftLeaderboardIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____riftLeaderboardIds;
}
constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO> const& GlobalNamespace::__PackDefinitionSO__LeaderboardIds::__cordl_internal_get__riftLeaderboardIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____riftLeaderboardIds;
}
constexpr void GlobalNamespace::__PackDefinitionSO__LeaderboardIds::__cordl_internal_set__riftLeaderboardIds(::UnityW<::GlobalNamespace::LeaderboardIdsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____riftLeaderboardIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO>& GlobalNamespace::__PackDefinitionSO__LeaderboardIds::__cordl_internal_get__questLeaderboardIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____questLeaderboardIds;
}
constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO> const& GlobalNamespace::__PackDefinitionSO__LeaderboardIds::__cordl_internal_get__questLeaderboardIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____questLeaderboardIds;
}
constexpr void GlobalNamespace::__PackDefinitionSO__LeaderboardIds::__cordl_internal_set__questLeaderboardIds(::UnityW<::GlobalNamespace::LeaderboardIdsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____questLeaderboardIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO>& GlobalNamespace::__PackDefinitionSO__LeaderboardIds::__cordl_internal_get__steamLeaderboardIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____steamLeaderboardIds;
}
constexpr ::UnityW<::GlobalNamespace::LeaderboardIdsSO> const& GlobalNamespace::__PackDefinitionSO__LeaderboardIds::__cordl_internal_get__steamLeaderboardIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____steamLeaderboardIds;
}
constexpr void GlobalNamespace::__PackDefinitionSO__LeaderboardIds::__cordl_internal_set__steamLeaderboardIds(::UnityW<::GlobalNamespace::LeaderboardIdsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____steamLeaderboardIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>& GlobalNamespace::__PackDefinitionSO__LeaderboardIds::__cordl_internal_get__ps4LeaderboardIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps4LeaderboardIds;
}
constexpr ::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> const& GlobalNamespace::__PackDefinitionSO__LeaderboardIds::__cordl_internal_get__ps4LeaderboardIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps4LeaderboardIds;
}
constexpr void GlobalNamespace::__PackDefinitionSO__LeaderboardIds::__cordl_internal_set__ps4LeaderboardIds(::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ps4LeaderboardIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>& GlobalNamespace::__PackDefinitionSO__LeaderboardIds::__cordl_internal_get__ps5LeaderboardIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5LeaderboardIds;
}
constexpr ::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> const& GlobalNamespace::__PackDefinitionSO__LeaderboardIds::__cordl_internal_get__ps5LeaderboardIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5LeaderboardIds;
}
constexpr void GlobalNamespace::__PackDefinitionSO__LeaderboardIds::__cordl_internal_set__ps5LeaderboardIds(::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ps5LeaderboardIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::GlobalNamespace::LeaderboardIdsSO> GlobalNamespace::__PackDefinitionSO__LeaderboardIds::get_riftLeaderboardIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LeaderboardIds*>::get(),
                                                                             "get_riftLeaderboardIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LeaderboardIdsSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PackDefinitionSO__LeaderboardIds::set_riftLeaderboardIds(::GlobalNamespace::LeaderboardIdsSO* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LeaderboardIds*>::get(), "set_riftLeaderboardIds", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LeaderboardIdsSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::LeaderboardIdsSO> GlobalNamespace::__PackDefinitionSO__LeaderboardIds::get_questLeaderboardIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LeaderboardIds*>::get(),
                                                                             "get_questLeaderboardIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LeaderboardIdsSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PackDefinitionSO__LeaderboardIds::set_questLeaderboardIds(::GlobalNamespace::LeaderboardIdsSO* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LeaderboardIds*>::get(), "set_questLeaderboardIds", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LeaderboardIdsSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::LeaderboardIdsSO> GlobalNamespace::__PackDefinitionSO__LeaderboardIds::get_steamLeaderboardIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LeaderboardIds*>::get(),
                                                                             "get_steamLeaderboardIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LeaderboardIdsSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PackDefinitionSO__LeaderboardIds::set_steamLeaderboardIds(::GlobalNamespace::LeaderboardIdsSO* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LeaderboardIds*>::get(), "set_steamLeaderboardIds", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LeaderboardIdsSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> GlobalNamespace::__PackDefinitionSO__LeaderboardIds::get_ps4LeaderboardIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LeaderboardIds*>::get(),
                                                                             "get_ps4LeaderboardIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PackDefinitionSO__LeaderboardIds::set_ps4LeaderboardIds(::GlobalNamespace::SonyLeaderboardIdsSO* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LeaderboardIds*>::get(), "set_ps4LeaderboardIds", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SonyLeaderboardIdsSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO> GlobalNamespace::__PackDefinitionSO__LeaderboardIds::get_ps5LeaderboardIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LeaderboardIds*>::get(),
                                                                             "get_ps5LeaderboardIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SonyLeaderboardIdsSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PackDefinitionSO__LeaderboardIds::set_ps5LeaderboardIds(::GlobalNamespace::SonyLeaderboardIdsSO* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LeaderboardIds*>::get(), "set_ps5LeaderboardIds", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SonyLeaderboardIdsSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__PackDefinitionSO__LeaderboardIds* GlobalNamespace::__PackDefinitionSO__LeaderboardIds::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PackDefinitionSO__LeaderboardIds*>());
}
inline void GlobalNamespace::__PackDefinitionSO__LeaderboardIds::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LeaderboardIds*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PackDefinitionSO__LeaderboardIds::__PackDefinitionSO__LeaderboardIds() {}
//  Writing Method size for method: ::GlobalNamespace::__PackDefinitionSO__LevelProductPacks.get_steamLevelProductPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::SteamLevelProductPacksSO> (
    ::GlobalNamespace::__PackDefinitionSO__LevelProductPacks::*)()>(&::GlobalNamespace::__PackDefinitionSO__LevelProductPacks::get_steamLevelProductPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f87ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LevelProductPacks*>::get(),
                                                                               "get_steamLevelProductPacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PackDefinitionSO__LevelProductPacks.set_steamLevelProductPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PackDefinitionSO__LevelProductPacks::*)(::GlobalNamespace::SteamLevelProductPacksSO*)>(
    &::GlobalNamespace::__PackDefinitionSO__LevelProductPacks::set_steamLevelProductPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f87f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LevelProductPacks*>::get(), "set_steamLevelProductPacks",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SteamLevelProductPacksSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PackDefinitionSO__LevelProductPacks.get_oculusLevelProductPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::OculusLevelProductPacksSO> (
    ::GlobalNamespace::__PackDefinitionSO__LevelProductPacks::*)()>(&::GlobalNamespace::__PackDefinitionSO__LevelProductPacks::get_oculusLevelProductPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f87fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LevelProductPacks*>::get(),
                                                                               "get_oculusLevelProductPacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PackDefinitionSO__LevelProductPacks.set_oculusLevelProductPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PackDefinitionSO__LevelProductPacks::*)(::GlobalNamespace::OculusLevelProductPacksSO*)>(
    &::GlobalNamespace::__PackDefinitionSO__LevelProductPacks::set_oculusLevelProductPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f8804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LevelProductPacks*>::get(), "set_oculusLevelProductPacks",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OculusLevelProductPacksSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PackDefinitionSO__LevelProductPacks.get_ps4LevelProductPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::PS4LevelProductPacksSO> (::GlobalNamespace::__PackDefinitionSO__LevelProductPacks::*)()>(
    &::GlobalNamespace::__PackDefinitionSO__LevelProductPacks::get_ps4LevelProductPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f880c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LevelProductPacks*>::get(),
                                                                               "get_ps4LevelProductPacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PackDefinitionSO__LevelProductPacks.set_ps4LevelProductPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PackDefinitionSO__LevelProductPacks::*)(::GlobalNamespace::PS4LevelProductPacksSO*)>(
    &::GlobalNamespace::__PackDefinitionSO__LevelProductPacks::set_ps4LevelProductPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f8814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LevelProductPacks*>::get(), "set_ps4LevelProductPacks", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PS4LevelProductPacksSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PackDefinitionSO__LevelProductPacks.get_ps5LevelProductPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::PS5LevelProductPacksSO> (::GlobalNamespace::__PackDefinitionSO__LevelProductPacks::*)()>(
    &::GlobalNamespace::__PackDefinitionSO__LevelProductPacks::get_ps5LevelProductPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f881c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LevelProductPacks*>::get(),
                                                                               "get_ps5LevelProductPacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PackDefinitionSO__LevelProductPacks.set_ps5LevelProductPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PackDefinitionSO__LevelProductPacks::*)(::GlobalNamespace::PS5LevelProductPacksSO*)>(
    &::GlobalNamespace::__PackDefinitionSO__LevelProductPacks::set_ps5LevelProductPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f8824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LevelProductPacks*>::get(), "set_ps5LevelProductPacks", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PS5LevelProductPacksSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PackDefinitionSO__LevelProductPacks.get_sonyLevelProductPackSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::SonyLevelProductPackSourceSO> (
    ::GlobalNamespace::__PackDefinitionSO__LevelProductPacks::*)()>(&::GlobalNamespace::__PackDefinitionSO__LevelProductPacks::get_sonyLevelProductPackSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f882c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LevelProductPacks*>::get(),
                                                                               "get_sonyLevelProductPackSource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PackDefinitionSO__LevelProductPacks.set_sonyLevelProductPackSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PackDefinitionSO__LevelProductPacks::*)(::GlobalNamespace::SonyLevelProductPackSourceSO*)>(
    &::GlobalNamespace::__PackDefinitionSO__LevelProductPacks::set_sonyLevelProductPackSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f8834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LevelProductPacks*>::get(), "set_sonyLevelProductPackSource",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SonyLevelProductPackSourceSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PackDefinitionSO__LevelProductPacks._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PackDefinitionSO__LevelProductPacks::*)()>(
    &::GlobalNamespace::__PackDefinitionSO__LevelProductPacks::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f883c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LevelProductPacks*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>& GlobalNamespace::__PackDefinitionSO__LevelProductPacks::__cordl_internal_get__steamLevelProductPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____steamLevelProductPacks;
}
constexpr ::UnityW<::GlobalNamespace::SteamLevelProductPacksSO> const& GlobalNamespace::__PackDefinitionSO__LevelProductPacks::__cordl_internal_get__steamLevelProductPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____steamLevelProductPacks;
}
constexpr void GlobalNamespace::__PackDefinitionSO__LevelProductPacks::__cordl_internal_set__steamLevelProductPacks(::UnityW<::GlobalNamespace::SteamLevelProductPacksSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____steamLevelProductPacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::OculusLevelProductPacksSO>& GlobalNamespace::__PackDefinitionSO__LevelProductPacks::__cordl_internal_get__oculusLevelProductPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusLevelProductPacks;
}
constexpr ::UnityW<::GlobalNamespace::OculusLevelProductPacksSO> const& GlobalNamespace::__PackDefinitionSO__LevelProductPacks::__cordl_internal_get__oculusLevelProductPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusLevelProductPacks;
}
constexpr void GlobalNamespace::__PackDefinitionSO__LevelProductPacks::__cordl_internal_set__oculusLevelProductPacks(::UnityW<::GlobalNamespace::OculusLevelProductPacksSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____oculusLevelProductPacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SonyLevelProductPackSourceSO>& GlobalNamespace::__PackDefinitionSO__LevelProductPacks::__cordl_internal_get__sonyLevelProductPackSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sonyLevelProductPackSource;
}
constexpr ::UnityW<::GlobalNamespace::SonyLevelProductPackSourceSO> const& GlobalNamespace::__PackDefinitionSO__LevelProductPacks::__cordl_internal_get__sonyLevelProductPackSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sonyLevelProductPackSource;
}
constexpr void GlobalNamespace::__PackDefinitionSO__LevelProductPacks::__cordl_internal_set__sonyLevelProductPackSource(::UnityW<::GlobalNamespace::SonyLevelProductPackSourceSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sonyLevelProductPackSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PS4LevelProductPacksSO>& GlobalNamespace::__PackDefinitionSO__LevelProductPacks::__cordl_internal_get__ps4LevelProductPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps4LevelProductPacks;
}
constexpr ::UnityW<::GlobalNamespace::PS4LevelProductPacksSO> const& GlobalNamespace::__PackDefinitionSO__LevelProductPacks::__cordl_internal_get__ps4LevelProductPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps4LevelProductPacks;
}
constexpr void GlobalNamespace::__PackDefinitionSO__LevelProductPacks::__cordl_internal_set__ps4LevelProductPacks(::UnityW<::GlobalNamespace::PS4LevelProductPacksSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ps4LevelProductPacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PS5LevelProductPacksSO>& GlobalNamespace::__PackDefinitionSO__LevelProductPacks::__cordl_internal_get__ps5LevelProductPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5LevelProductPacks;
}
constexpr ::UnityW<::GlobalNamespace::PS5LevelProductPacksSO> const& GlobalNamespace::__PackDefinitionSO__LevelProductPacks::__cordl_internal_get__ps5LevelProductPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ps5LevelProductPacks;
}
constexpr void GlobalNamespace::__PackDefinitionSO__LevelProductPacks::__cordl_internal_set__ps5LevelProductPacks(::UnityW<::GlobalNamespace::PS5LevelProductPacksSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ps5LevelProductPacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::GlobalNamespace::SteamLevelProductPacksSO> GlobalNamespace::__PackDefinitionSO__LevelProductPacks::get_steamLevelProductPacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LevelProductPacks*>::get(),
                                                                             "get_steamLevelProductPacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PackDefinitionSO__LevelProductPacks::set_steamLevelProductPacks(::GlobalNamespace::SteamLevelProductPacksSO* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LevelProductPacks*>::get(), "set_steamLevelProductPacks", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SteamLevelProductPacksSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::OculusLevelProductPacksSO> GlobalNamespace::__PackDefinitionSO__LevelProductPacks::get_oculusLevelProductPacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LevelProductPacks*>::get(),
                                                                             "get_oculusLevelProductPacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OculusLevelProductPacksSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PackDefinitionSO__LevelProductPacks::set_oculusLevelProductPacks(::GlobalNamespace::OculusLevelProductPacksSO* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LevelProductPacks*>::get(), "set_oculusLevelProductPacks", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OculusLevelProductPacksSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::PS4LevelProductPacksSO> GlobalNamespace::__PackDefinitionSO__LevelProductPacks::get_ps4LevelProductPacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LevelProductPacks*>::get(),
                                                                             "get_ps4LevelProductPacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PS4LevelProductPacksSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PackDefinitionSO__LevelProductPacks::set_ps4LevelProductPacks(::GlobalNamespace::PS4LevelProductPacksSO* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LevelProductPacks*>::get(), "set_ps4LevelProductPacks", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PS4LevelProductPacksSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::PS5LevelProductPacksSO> GlobalNamespace::__PackDefinitionSO__LevelProductPacks::get_ps5LevelProductPacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LevelProductPacks*>::get(),
                                                                             "get_ps5LevelProductPacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PS5LevelProductPacksSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PackDefinitionSO__LevelProductPacks::set_ps5LevelProductPacks(::GlobalNamespace::PS5LevelProductPacksSO* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LevelProductPacks*>::get(), "set_ps5LevelProductPacks", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PS5LevelProductPacksSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::SonyLevelProductPackSourceSO> GlobalNamespace::__PackDefinitionSO__LevelProductPacks::get_sonyLevelProductPackSource() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LevelProductPacks*>::get(),
                                                                             "get_sonyLevelProductPackSource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SonyLevelProductPackSourceSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PackDefinitionSO__LevelProductPacks::set_sonyLevelProductPackSource(::GlobalNamespace::SonyLevelProductPackSourceSO* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LevelProductPacks*>::get(), "set_sonyLevelProductPackSource",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SonyLevelProductPackSourceSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__PackDefinitionSO__LevelProductPacks* GlobalNamespace::__PackDefinitionSO__LevelProductPacks::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PackDefinitionSO__LevelProductPacks*>());
}
inline void GlobalNamespace::__PackDefinitionSO__LevelProductPacks::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LevelProductPacks*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PackDefinitionSO__LevelProductPacks::__PackDefinitionSO__LevelProductPacks() {}
//  Writing Method size for method: ::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo.get_levelID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo::*)()>(
    &::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo::get_levelID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f8844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*>::get(),
                                                                               "get_levelID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo.get_promoInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::PromoInfoSO> (::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo::*)()>(
    &::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo::get_promoInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f884c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*>::get(),
                                                                               "get_promoInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo::*)()>(
    &::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f8854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__PackDefinitionSO__LevelPromoInfo::__cordl_internal_get__levelID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelID;
}
constexpr ::StringW const& GlobalNamespace::__PackDefinitionSO__LevelPromoInfo::__cordl_internal_get__levelID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelID;
}
constexpr void GlobalNamespace::__PackDefinitionSO__LevelPromoInfo::__cordl_internal_set__levelID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PromoInfoSO>& GlobalNamespace::__PackDefinitionSO__LevelPromoInfo::__cordl_internal_get__promoInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promoInfo;
}
constexpr ::UnityW<::GlobalNamespace::PromoInfoSO> const& GlobalNamespace::__PackDefinitionSO__LevelPromoInfo::__cordl_internal_get__promoInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promoInfo;
}
constexpr void GlobalNamespace::__PackDefinitionSO__LevelPromoInfo::__cordl_internal_set__promoInfo(::UnityW<::GlobalNamespace::PromoInfoSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____promoInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::__PackDefinitionSO__LevelPromoInfo::get_levelID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*>::get(),
                                                                             "get_levelID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::PromoInfoSO> GlobalNamespace::__PackDefinitionSO__LevelPromoInfo::get_promoInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*>::get(),
                                                                             "get_promoInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PromoInfoSO>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo* GlobalNamespace::__PackDefinitionSO__LevelPromoInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*>());
}
inline void GlobalNamespace::__PackDefinitionSO__LevelPromoInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo::__PackDefinitionSO__LevelPromoInfo() {}
//  Writing Method size for method: ::GlobalNamespace::__PackDefinitionSO__Credits._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PackDefinitionSO__Credits::*)()>(&::GlobalNamespace::__PackDefinitionSO__Credits::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f885c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__Credits*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__PackDefinitionSO__Credits::__cordl_internal_get_order() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___order;
}
constexpr int32_t const& GlobalNamespace::__PackDefinitionSO__Credits::__cordl_internal_get_order() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___order;
}
constexpr void GlobalNamespace::__PackDefinitionSO__Credits::__cordl_internal_set_order(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___order = value;
}
constexpr ::UnityEngine::AddressableAssets::AssetReferenceGameObject*& GlobalNamespace::__PackDefinitionSO__Credits::__cordl_internal_get_creditsPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___creditsPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReferenceGameObject*> const&
GlobalNamespace::__PackDefinitionSO__Credits::__cordl_internal_get_creditsPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___creditsPrefab;
}
constexpr void GlobalNamespace::__PackDefinitionSO__Credits::__cordl_internal_set_creditsPrefab(::UnityEngine::AddressableAssets::AssetReferenceGameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___creditsPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__PackDefinitionSO__Credits* GlobalNamespace::__PackDefinitionSO__Credits::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PackDefinitionSO__Credits*>());
}
inline void GlobalNamespace::__PackDefinitionSO__Credits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PackDefinitionSO__Credits*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PackDefinitionSO__Credits::__PackDefinitionSO__Credits() {}
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_content
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::BeatmapLevelPackSO> (::GlobalNamespace::PackDefinitionSO::*)()>(
    &::GlobalNamespace::PackDefinitionSO::get_content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f864c;

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
  constexpr static std::size_t addrs = 0x12f8654;

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
  constexpr static std::size_t addrs = 0x12f865c;

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
  constexpr static std::size_t addrs = 0x12f8664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "set_order", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_tags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__PackDefinitionSO__Tags (::GlobalNamespace::PackDefinitionSO::*)()>(
    &::GlobalNamespace::PackDefinitionSO::get_tags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f866c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_tags",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.set_tags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackDefinitionSO::*)(::GlobalNamespace::__PackDefinitionSO__Tags)>(
    &::GlobalNamespace::PackDefinitionSO::set_tags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f8674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "set_tags", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PackDefinitionSO__Tags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_levelProductPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__PackDefinitionSO__LevelProductPacks* (::GlobalNamespace::PackDefinitionSO::*)()>(
    &::GlobalNamespace::PackDefinitionSO::get_levelProductPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f867c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(),
                                                                               "get_levelProductPacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.set_levelProductPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackDefinitionSO::*)(::GlobalNamespace::__PackDefinitionSO__LevelProductPacks*)>(
    &::GlobalNamespace::PackDefinitionSO::set_levelProductPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f8684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "set_levelProductPacks", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PackDefinitionSO__LevelProductPacks*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_leaderboardIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__PackDefinitionSO__LeaderboardIds* (::GlobalNamespace::PackDefinitionSO::*)()>(
    &::GlobalNamespace::PackDefinitionSO::get_leaderboardIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f868c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(),
                                                                               "get_leaderboardIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_packPromoInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::PromoInfoSO> (::GlobalNamespace::PackDefinitionSO::*)()>(
    &::GlobalNamespace::PackDefinitionSO::get_packPromoInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f8694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_packPromoInfo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_levelsPromoInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*, ::Array<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*>*> (::GlobalNamespace::PackDefinitionSO::*)()>(
        &::GlobalNamespace::PackDefinitionSO::get_levelsPromoInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f869c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(),
                                                                               "get_levelsPromoInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_isOST
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PackDefinitionSO::*)()>(&::GlobalNamespace::PackDefinitionSO::get_isOST)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x12f86a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_isOST",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_isDLC
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PackDefinitionSO::*)()>(&::GlobalNamespace::PackDefinitionSO::get_isDLC)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x12f86b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_isDLC",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_isOwned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PackDefinitionSO::*)()>(&::GlobalNamespace::PackDefinitionSO::get_isOwned)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x12f86bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_isOwned",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_isDebug
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PackDefinitionSO::*)()>(&::GlobalNamespace::PackDefinitionSO::get_isDebug)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x12f86c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_isDebug",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_isInDevelopment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PackDefinitionSO::*)()>(&::GlobalNamespace::PackDefinitionSO::get_isInDevelopment)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x12f86d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(),
                                                                               "get_isInDevelopment", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_perceivedLoudness
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::PerceivedLoudnessSO> (::GlobalNamespace::PackDefinitionSO::*)()>(
    &::GlobalNamespace::PackDefinitionSO::get_perceivedLoudness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f86e0;

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
  constexpr static std::size_t addrs = 0x12f86e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "set_perceivedLoudness", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PerceivedLoudnessSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_relativeSfxVolume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::RelativeSfxVolumeSO> (::GlobalNamespace::PackDefinitionSO::*)()>(
    &::GlobalNamespace::PackDefinitionSO::get_relativeSfxVolume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f86f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(),
                                                                               "get_relativeSfxVolume", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.get_credits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__PackDefinitionSO__Credits* (::GlobalNamespace::PackDefinitionSO::*)()>(
    &::GlobalNamespace::PackDefinitionSO::get_credits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f86f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_credits",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::PackDefinitionSO> (*)(::StringW, int32_t, ::GlobalNamespace::__PackDefinitionSO__Tags)>(
    &::GlobalNamespace::PackDefinitionSO::Create)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x12f8700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PackDefinitionSO__Tags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackDefinitionSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackDefinitionSO::*)()>(&::GlobalNamespace::PackDefinitionSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f878c;

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
constexpr ::GlobalNamespace::__PackDefinitionSO__LeaderboardIds*& GlobalNamespace::PackDefinitionSO::__cordl_internal_get__leaderboardIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardIds;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PackDefinitionSO__LeaderboardIds*> const& GlobalNamespace::PackDefinitionSO::__cordl_internal_get__leaderboardIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardIds;
}
constexpr void GlobalNamespace::PackDefinitionSO::__cordl_internal_set__leaderboardIds(::GlobalNamespace::__PackDefinitionSO__LeaderboardIds* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leaderboardIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PackDefinitionSO__LevelProductPacks*& GlobalNamespace::PackDefinitionSO::__cordl_internal_get__levelProductPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelProductPacks;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PackDefinitionSO__LevelProductPacks*> const& GlobalNamespace::PackDefinitionSO::__cordl_internal_get__levelProductPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelProductPacks;
}
constexpr void GlobalNamespace::PackDefinitionSO::__cordl_internal_set__levelProductPacks(::GlobalNamespace::__PackDefinitionSO__LevelProductPacks* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelProductPacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PackDefinitionSO__Tags& GlobalNamespace::PackDefinitionSO::__cordl_internal_get__tags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tags;
}
constexpr ::GlobalNamespace::__PackDefinitionSO__Tags const& GlobalNamespace::PackDefinitionSO::__cordl_internal_get__tags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tags;
}
constexpr void GlobalNamespace::PackDefinitionSO::__cordl_internal_set__tags(::GlobalNamespace::__PackDefinitionSO__Tags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tags = value;
}
constexpr ::UnityW<::GlobalNamespace::PromoInfoSO>& GlobalNamespace::PackDefinitionSO::__cordl_internal_get__packPromoInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packPromoInfo;
}
constexpr ::UnityW<::GlobalNamespace::PromoInfoSO> const& GlobalNamespace::PackDefinitionSO::__cordl_internal_get__packPromoInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packPromoInfo;
}
constexpr void GlobalNamespace::PackDefinitionSO::__cordl_internal_set__packPromoInfo(::UnityW<::GlobalNamespace::PromoInfoSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____packPromoInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*, ::Array<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*>*>&
GlobalNamespace::PackDefinitionSO::__cordl_internal_get__levelsPromoInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelsPromoInfo;
}
constexpr ::ArrayW<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*, ::Array<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*>*> const&
GlobalNamespace::PackDefinitionSO::__cordl_internal_get__levelsPromoInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelsPromoInfo;
}
constexpr void GlobalNamespace::PackDefinitionSO::__cordl_internal_set__levelsPromoInfo(
    ::ArrayW<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*, ::Array<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelsPromoInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::UnityW<::GlobalNamespace::RelativeSfxVolumeSO>& GlobalNamespace::PackDefinitionSO::__cordl_internal_get__relativeSfxVolumePerLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeSfxVolumePerLevel;
}
constexpr ::UnityW<::GlobalNamespace::RelativeSfxVolumeSO> const& GlobalNamespace::PackDefinitionSO::__cordl_internal_get__relativeSfxVolumePerLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeSfxVolumePerLevel;
}
constexpr void GlobalNamespace::PackDefinitionSO::__cordl_internal_set__relativeSfxVolumePerLevel(::UnityW<::GlobalNamespace::RelativeSfxVolumeSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____relativeSfxVolumePerLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PackDefinitionSO__Credits*& GlobalNamespace::PackDefinitionSO::__cordl_internal_get__credits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____credits;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PackDefinitionSO__Credits*> const& GlobalNamespace::PackDefinitionSO::__cordl_internal_get__credits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____credits;
}
constexpr void GlobalNamespace::PackDefinitionSO::__cordl_internal_set__credits(::GlobalNamespace::__PackDefinitionSO__Credits* value) {
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
inline ::GlobalNamespace::__PackDefinitionSO__Tags GlobalNamespace::PackDefinitionSO::get_tags() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_tags",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__PackDefinitionSO__Tags, false>(this, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionSO::set_tags(::GlobalNamespace::__PackDefinitionSO__Tags value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "set_tags", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PackDefinitionSO__Tags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__PackDefinitionSO__LevelProductPacks* GlobalNamespace::PackDefinitionSO::get_levelProductPacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(),
                                                                             "get_levelProductPacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__PackDefinitionSO__LevelProductPacks*, false>(this, ___internal_method);
}
inline void GlobalNamespace::PackDefinitionSO::set_levelProductPacks(::GlobalNamespace::__PackDefinitionSO__LevelProductPacks* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "set_levelProductPacks", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PackDefinitionSO__LevelProductPacks*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__PackDefinitionSO__LeaderboardIds* GlobalNamespace::PackDefinitionSO::get_leaderboardIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_leaderboardIds",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__PackDefinitionSO__LeaderboardIds*, false>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::PromoInfoSO> GlobalNamespace::PackDefinitionSO::get_packPromoInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_packPromoInfo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PromoInfoSO>, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*, ::Array<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*>*> GlobalNamespace::PackDefinitionSO::get_levelsPromoInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_levelsPromoInfo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*, ::Array<::GlobalNamespace::__PackDefinitionSO__LevelPromoInfo*>*>, false>(
      this, ___internal_method);
}
inline bool GlobalNamespace::PackDefinitionSO::get_isOST() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_isOST",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::PackDefinitionSO::get_isDLC() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_isDLC",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::PackDefinitionSO::get_isOwned() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_isOwned",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::PackDefinitionSO::get_isDebug() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_isDebug",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::PackDefinitionSO::get_isInDevelopment() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_isInDevelopment",
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
inline ::UnityW<::GlobalNamespace::RelativeSfxVolumeSO> GlobalNamespace::PackDefinitionSO::get_relativeSfxVolume() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(),
                                                                             "get_relativeSfxVolume", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::RelativeSfxVolumeSO>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__PackDefinitionSO__Credits* GlobalNamespace::PackDefinitionSO::get_credits() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "get_credits",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__PackDefinitionSO__Credits*, false>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::PackDefinitionSO> GlobalNamespace::PackDefinitionSO::Create(::StringW name, int32_t order, ::GlobalNamespace::__PackDefinitionSO__Tags tags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PackDefinitionSO__Tags>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PackDefinitionSO>, false>(nullptr, ___internal_method, name, order, tags);
}
inline ::GlobalNamespace::PackDefinitionSO* GlobalNamespace::PackDefinitionSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PackDefinitionSO*>());
}
inline void GlobalNamespace::PackDefinitionSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackDefinitionSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PackDefinitionSO::PackDefinitionSO() {}
