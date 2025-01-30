#pragma once
// IWYU pragma private; include "GlobalNamespace/UnifiedNetworkPlayerModel.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_impl.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModelPartyConfig_1_impl.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModel_impl.hpp"
#include "GlobalNamespace/zzzz__IUnifiedNetworkPlayerModel_impl.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_impl.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_impl.hpp"
#include "System/Collections/zzzz__IEnumerable_impl.hpp"
#include "System/Collections/zzzz__IEnumerator_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__IInitializable_impl.hpp"
#include "GlobalNamespace/zzzz__UnifiedNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_def.hpp"
#include "GlobalNamespace/zzzz__GameLiftNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModelPartyConfig_1_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PartyMessageHandler_def.hpp"
#include "GlobalNamespace/zzzz__PlatformNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__UnifiedNetworkPlayerModel_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType() {}
constexpr ::GlobalNamespace::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType GlobalNamespace::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType::GameLift{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType GlobalNamespace::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType::Platform{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e774fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig::__cordl_internal_get_selectionMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectionMask;
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig::__cordl_internal_get_selectionMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectionMask;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig::__cordl_internal_set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selectionMask = value;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration& GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig::__cordl_internal_get_configuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___configuration;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration const& GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig::__cordl_internal_get_configuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___configuration;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig::__cordl_internal_set_configuration(::GlobalNamespace::GameplayServerConfiguration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___configuration = value;
}
constexpr ::StringW& GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig::__cordl_internal_get_secret() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secret;
}
constexpr ::StringW const& GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig::__cordl_internal_get_secret() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secret;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig::__cordl_internal_set_secret(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___secret)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig::__cordl_internal_get_code() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___code;
}
constexpr ::StringW const& GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig::__cordl_internal_get_code() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___code;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig::__cordl_internal_set_code(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___code)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig* GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig*>());
}
/// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::UnifiedNetworkPlayerModel*>"
constexpr GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig::operator ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<
    ::GlobalNamespace::UnifiedNetworkPlayerModel*>*() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::UnifiedNetworkPlayerModel*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::UnifiedNetworkPlayerModel*>"
constexpr ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::UnifiedNetworkPlayerModel*>*
GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig::i___GlobalNamespace__INetworkPlayerModelPartyConfig_1___GlobalNamespace__UnifiedNetworkPlayerModel__() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::UnifiedNetworkPlayerModel*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig() {}
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel_StartClientPartyConfig._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel_StartClientPartyConfig::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel_StartClientPartyConfig::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e77290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel_StartClientPartyConfig*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& GlobalNamespace::UnifiedNetworkPlayerModel_StartClientPartyConfig::__cordl_internal_get_selectionMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectionMask;
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& GlobalNamespace::UnifiedNetworkPlayerModel_StartClientPartyConfig::__cordl_internal_get_selectionMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectionMask;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel_StartClientPartyConfig::__cordl_internal_set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selectionMask = value;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration& GlobalNamespace::UnifiedNetworkPlayerModel_StartClientPartyConfig::__cordl_internal_get_configuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___configuration;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration const& GlobalNamespace::UnifiedNetworkPlayerModel_StartClientPartyConfig::__cordl_internal_get_configuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___configuration;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel_StartClientPartyConfig::__cordl_internal_set_configuration(::GlobalNamespace::GameplayServerConfiguration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___configuration = value;
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel_StartClientPartyConfig::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel_StartClientPartyConfig*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::UnifiedNetworkPlayerModel_StartClientPartyConfig* GlobalNamespace::UnifiedNetworkPlayerModel_StartClientPartyConfig::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::UnifiedNetworkPlayerModel_StartClientPartyConfig*>());
}
/// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::UnifiedNetworkPlayerModel*>"
constexpr GlobalNamespace::UnifiedNetworkPlayerModel_StartClientPartyConfig::operator ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::UnifiedNetworkPlayerModel*>*() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::UnifiedNetworkPlayerModel*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::UnifiedNetworkPlayerModel*>"
constexpr ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::UnifiedNetworkPlayerModel*>*
GlobalNamespace::UnifiedNetworkPlayerModel_StartClientPartyConfig::i___GlobalNamespace__INetworkPlayerModelPartyConfig_1___GlobalNamespace__UnifiedNetworkPlayerModel__() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::UnifiedNetworkPlayerModel*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnifiedNetworkPlayerModel_StartClientPartyConfig::UnifiedNetworkPlayerModel_StartClientPartyConfig() {}
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::*)(int32_t)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3e770fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3e7799c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::MoveNext)> {
  constexpr static std::size_t size = 0x514;
  constexpr static std::size_t addrs = 0x3e779d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64.__m__Finally1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3e77ee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64*>::get(), "<>m__Finally1",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64.__m__Finally2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::__m__Finally2)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3e77f94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64*>::get(), "<>m__Finally2",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64.System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::INetworkPlayer* (::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e78044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64*>::get(),
                                    "System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3e7804c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e78084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64.System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* (::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::*)()>(
        &::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3e7808c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64*>::get(),
                                    "System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3e78128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::GlobalNamespace::INetworkPlayer*& GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::GlobalNamespace::INetworkPlayer* const& GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::__cordl_internal_set___2__current(::GlobalNamespace::INetworkPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::GlobalNamespace::UnifiedNetworkPlayerModel*& GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::UnifiedNetworkPlayerModel* const& GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::__cordl_internal_set___4__this(::GlobalNamespace::UnifiedNetworkPlayerModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*& GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* const&
GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr void
GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::__cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64*>::get(), "<>m__Finally1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::__m__Finally2() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64*>::get(), "<>m__Finally2",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::INetworkPlayer* GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64*>::get(),
                                  "System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::INetworkPlayer*, false>(this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*
GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64*>::get(),
                                  "System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64* GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>"
constexpr GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*
GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__INetworkPlayer__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>"
constexpr GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*
GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__INetworkPlayer__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__64::UnifiedNetworkPlayerModel__get_otherPlayers_d__64() {}
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.add_connectedPlayerManagerCreatedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::add_connectedPlayerManagerCreatedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3e753d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "add_connectedPlayerManagerCreatedEvent",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.remove_connectedPlayerManagerCreatedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::remove_connectedPlayerManagerCreatedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3e75480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "remove_connectedPlayerManagerCreatedEvent",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.add_connectedPlayerManagerDestroyedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::add_connectedPlayerManagerDestroyedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3e75530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "add_connectedPlayerManagerDestroyedEvent",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.remove_connectedPlayerManagerDestroyedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::remove_connectedPlayerManagerDestroyedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3e755e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "remove_connectedPlayerManagerDestroyedEvent",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.add_partySizeChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::add_partySizeChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3e75690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "add_partySizeChangedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.remove_partySizeChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::remove_partySizeChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3e75740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "remove_partySizeChangedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.add_partyRefreshingEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::add_partyRefreshingEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3e757f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "add_partyRefreshingEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.remove_partyRefreshingEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::remove_partyRefreshingEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3e7588c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "remove_partyRefreshingEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.add_partyChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::add_partyChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3e75928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "add_partyChangedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.remove_partyChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::remove_partyChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3e759d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "remove_partyChangedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.add_joinRequestedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::add_joinRequestedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3e75a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "add_joinRequestedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.remove_joinRequestedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::remove_joinRequestedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3e75b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "remove_joinRequestedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.add_inviteRequestedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::add_inviteRequestedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3e75be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "add_inviteRequestedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.remove_inviteRequestedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::remove_inviteRequestedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3e75c98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "remove_inviteRequestedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_activeNetworkPlayerModel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::INetworkPlayerModel* (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::get_activeNetworkPlayerModel)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3e75d48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "get_activeNetworkPlayerModel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_activeNetworkPlayerModelType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType (
    ::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::get_activeNetworkPlayerModelType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e75d74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "get_activeNetworkPlayerModelType",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_localPlayerIsPartyOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::get_localPlayerIsPartyOwner)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3e75d7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "get_localPlayerIsPartyOwner", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_hasNetworkingFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::get_hasNetworkingFailed)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3e75e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "get_hasNetworkingFailed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_currentPartySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::get_currentPartySize)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3e75f14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "get_currentPartySize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_selectionMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevelSelectionMask (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::get_selectionMask)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x3e75fd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "get_selectionMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_configuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayServerConfiguration (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::get_configuration)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3e760bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "get_configuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_secret
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::get_secret)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3e761a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "get_secret", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_code
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::get_code)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3e761c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "get_code",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_connectedPlayerManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConnectedPlayerManager* (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::get_connectedPlayerManager)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3e761e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "get_connectedPlayerManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_publicServers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* (
    ::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::get_publicServers)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3e762a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "get_publicServers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_friends
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* (
    ::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::get_friends)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3e762f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "get_friends", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_discoveryEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::get_discoveryEnabled)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3e76314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "get_discoveryEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.set_discoveryEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(bool)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::set_discoveryEnabled)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3e763d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "set_discoveryEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_enableFriends
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::get_enableFriends)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3e76498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "get_enableFriends", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.set_enableFriends
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(bool)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::set_enableFriends)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3e764bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "set_enableFriends",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::Initialize)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x3e7679c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::Dispose)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x3e76bb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_partyPlayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* (
    ::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::get_partyPlayers)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3e76fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "get_partyPlayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_otherPlayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* (
    ::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::get_otherPlayers)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3e7708c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "get_otherPlayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.SetServerFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(
    ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::SetServerFilter)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x3e77130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "SetServerFilter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.RefreshAlternateDiscoveryModels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::RefreshAlternateDiscoveryModels)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x3e764f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "RefreshAlternateDiscoveryModels",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandlePlayersChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::HandlePlayersChanged)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3e77298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "HandlePlayersChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandleInviteRequested
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::GlobalNamespace::INetworkPlayer*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::HandleInviteRequested)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3e77300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "HandleInviteRequested", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandleJoinRequested
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::GlobalNamespace::INetworkPlayer*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::HandleJoinRequested)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3e7731c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "HandleJoinRequested", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandlePartyChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::GlobalNamespace::INetworkPlayerModel*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::HandlePartyChanged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3e77338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "HandlePartyChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayerModel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandlePartySizeChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(int32_t)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::HandlePartySizeChanged)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3e77358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "HandlePartySizeChanged",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandlePartyRefreshing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::HandlePartyRefreshing)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3e7738c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "HandlePartyRefreshing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandleFriendConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::GlobalNamespace::IConnectedPlayer*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::HandleFriendConnected)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3e773a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "HandleFriendConnected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandleFriendConnectToMasterServer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::StringW)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::HandleFriendConnectToMasterServer)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3e7740c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "HandleFriendConnectToMasterServer",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandleConnectedPlayerManagerCreated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::GlobalNamespace::INetworkPlayerModel*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::HandleConnectedPlayerManagerCreated)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x3e77504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "HandleConnectedPlayerManagerCreated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayerModel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandleConnectedPlayerManagerDestroyed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::GlobalNamespace::INetworkPlayerModel*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::HandleConnectedPlayerManagerDestroyed)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3e777a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "HandleConnectedPlayerManagerDestroyed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayerModel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.ResetMasterServerReachability
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::ResetMasterServerReachability)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3e77848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "ResetMasterServerReachability", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.DestroyPartyConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::DestroyPartyConnection)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3e77898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                               "DestroyPartyConnection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.SetActiveNetworkPlayerModelType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(
    ::GlobalNamespace::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::SetActiveNetworkPlayerModelType)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3e77958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "SetActiveNetworkPlayerModelType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e77994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameLiftNetworkPlayerModel>& GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_get__gameLiftNetworkPlayerModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameLiftNetworkPlayerModel;
}
constexpr ::UnityW<::GlobalNamespace::GameLiftNetworkPlayerModel> const& GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_get__gameLiftNetworkPlayerModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameLiftNetworkPlayerModel;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_set__gameLiftNetworkPlayerModel(::UnityW<::GlobalNamespace::GameLiftNetworkPlayerModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameLiftNetworkPlayerModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PlatformNetworkPlayerModel>& GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_get__platformNetworkPlayerModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformNetworkPlayerModel;
}
constexpr ::UnityW<::GlobalNamespace::PlatformNetworkPlayerModel> const& GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_get__platformNetworkPlayerModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformNetworkPlayerModel;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_set__platformNetworkPlayerModel(::UnityW<::GlobalNamespace::PlatformNetworkPlayerModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____platformNetworkPlayerModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*& GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_get_connectedPlayerManagerCreatedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedPlayerManagerCreatedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* const& GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_get_connectedPlayerManagerCreatedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedPlayerManagerCreatedEvent;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_set_connectedPlayerManagerCreatedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___connectedPlayerManagerCreatedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*& GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_get_connectedPlayerManagerDestroyedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedPlayerManagerDestroyedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* const& GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_get_connectedPlayerManagerDestroyedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedPlayerManagerDestroyedEvent;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_set_connectedPlayerManagerDestroyedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___connectedPlayerManagerDestroyedEvent)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<int32_t>*& GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_get_partySizeChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partySizeChangedEvent;
}
constexpr ::System::Action_1<int32_t>* const& GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_get_partySizeChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partySizeChangedEvent;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_set_partySizeChangedEvent(::System::Action_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___partySizeChangedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_get_partyRefreshingEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partyRefreshingEvent;
}
constexpr ::System::Action* const& GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_get_partyRefreshingEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partyRefreshingEvent;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_set_partyRefreshingEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___partyRefreshingEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*& GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_get_partyChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partyChangedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* const& GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_get_partyChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partyChangedEvent;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_set_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___partyChangedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>*& GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_get_joinRequestedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___joinRequestedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* const& GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_get_joinRequestedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___joinRequestedEvent;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_set_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___joinRequestedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>*& GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_get_inviteRequestedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inviteRequestedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* const& GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_get_inviteRequestedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inviteRequestedEvent;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_set_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inviteRequestedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PartyMessageHandler*& GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_get__partyMessageHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partyMessageHandler;
}
constexpr ::GlobalNamespace::PartyMessageHandler* const& GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_get__partyMessageHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partyMessageHandler;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_set__partyMessageHandler(::GlobalNamespace::PartyMessageHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____partyMessageHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PartyMessageHandler*& GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_get__friendPartyMessageHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____friendPartyMessageHandler;
}
constexpr ::GlobalNamespace::PartyMessageHandler* const& GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_get__friendPartyMessageHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____friendPartyMessageHandler;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_set__friendPartyMessageHandler(::GlobalNamespace::PartyMessageHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____friendPartyMessageHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType& GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_get__activeNetworkPlayerModelType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeNetworkPlayerModelType;
}
constexpr ::GlobalNamespace::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType const& GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_get__activeNetworkPlayerModelType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeNetworkPlayerModelType;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_set__activeNetworkPlayerModelType(::GlobalNamespace::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activeNetworkPlayerModelType = value;
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::add_connectedPlayerManagerCreatedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "add_connectedPlayerManagerCreatedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::remove_connectedPlayerManagerCreatedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "remove_connectedPlayerManagerCreatedEvent",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::add_connectedPlayerManagerDestroyedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "add_connectedPlayerManagerDestroyedEvent",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::remove_connectedPlayerManagerDestroyedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "remove_connectedPlayerManagerDestroyedEvent",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::add_partySizeChangedEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "add_partySizeChangedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::remove_partySizeChangedEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "remove_partySizeChangedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::add_partyRefreshingEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "add_partyRefreshingEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::remove_partyRefreshingEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "remove_partyRefreshingEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::add_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "add_partyChangedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::remove_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "remove_partyChangedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::add_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "add_joinRequestedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::remove_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "remove_joinRequestedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::add_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "add_inviteRequestedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::remove_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "remove_inviteRequestedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::INetworkPlayerModel* GlobalNamespace::UnifiedNetworkPlayerModel::get_activeNetworkPlayerModel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "get_activeNetworkPlayerModel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::INetworkPlayerModel*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType GlobalNamespace::UnifiedNetworkPlayerModel::get_activeNetworkPlayerModelType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "get_activeNetworkPlayerModelType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType, false>(this, ___internal_method);
}
inline bool GlobalNamespace::UnifiedNetworkPlayerModel::get_localPlayerIsPartyOwner() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "get_localPlayerIsPartyOwner", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::UnifiedNetworkPlayerModel::get_hasNetworkingFailed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "get_hasNetworkingFailed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::UnifiedNetworkPlayerModel::get_currentPartySize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "get_currentPartySize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::UnifiedNetworkPlayerModel::get_selectionMask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "get_selectionMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelSelectionMask, false>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayServerConfiguration GlobalNamespace::UnifiedNetworkPlayerModel::get_configuration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "get_configuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerConfiguration, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::UnifiedNetworkPlayerModel::get_secret() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "get_secret",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::UnifiedNetworkPlayerModel::get_code() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "get_code",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ConnectedPlayerManager* GlobalNamespace::UnifiedNetworkPlayerModel::get_connectedPlayerManager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "get_connectedPlayerManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectedPlayerManager*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GlobalNamespace::UnifiedNetworkPlayerModel::get_publicServers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "get_publicServers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GlobalNamespace::UnifiedNetworkPlayerModel::get_friends() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "get_friends", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::UnifiedNetworkPlayerModel::get_discoveryEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "get_discoveryEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::set_discoveryEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "set_discoveryEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::UnifiedNetworkPlayerModel::get_enableFriends() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "get_enableFriends", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::set_enableFriends(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "set_enableFriends",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "Initialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GlobalNamespace::UnifiedNetworkPlayerModel::get_partyPlayers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "get_partyPlayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GlobalNamespace::UnifiedNetworkPlayerModel::get_otherPlayers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "get_otherPlayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::SetServerFilter(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "SetServerFilter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, selectionMask, configuration);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::RefreshAlternateDiscoveryModels() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "RefreshAlternateDiscoveryModels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandlePlayersChanged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "HandlePlayersChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandleInviteRequested(::GlobalNamespace::INetworkPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "HandleInviteRequested", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandleJoinRequested(::GlobalNamespace::INetworkPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "HandleJoinRequested", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandlePartyChanged(::GlobalNamespace::INetworkPlayerModel* playerModel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "HandlePartyChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayerModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerModel);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandlePartySizeChanged(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "HandlePartySizeChanged",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, size);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandlePartyRefreshing() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "HandlePartyRefreshing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandleFriendConnected(::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "HandleFriendConnected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandleFriendConnectToMasterServer(::StringW secret) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "HandleFriendConnectToMasterServer",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, secret);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandleConnectedPlayerManagerCreated(::GlobalNamespace::INetworkPlayerModel* networkPlayerModel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "HandleConnectedPlayerManagerCreated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayerModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, networkPlayerModel);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandleConnectedPlayerManagerDestroyed(::GlobalNamespace::INetworkPlayerModel* networkPlayerModel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "HandleConnectedPlayerManagerDestroyed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayerModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, networkPlayerModel);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::ResetMasterServerReachability() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "ResetMasterServerReachability", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::UnifiedNetworkPlayerModel::CreatePartyConnection(::GlobalNamespace::INetworkPlayerModelPartyConfig_1<T>* partyConfig) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "CreatePartyConnection",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayerModelPartyConfig_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, partyConfig);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::DestroyPartyConnection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(),
                                                                             "DestroyPartyConnection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::SetActiveNetworkPlayerModelType(::GlobalNamespace::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType activeNetworkPlayerModelType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), "SetActiveNetworkPlayerModelType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, activeNetworkPlayerModelType);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnifiedNetworkPlayerModel*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::UnifiedNetworkPlayerModel* GlobalNamespace::UnifiedNetworkPlayerModel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::UnifiedNetworkPlayerModel*>());
}
/// @brief Convert operator to "::GlobalNamespace::IUnifiedNetworkPlayerModel"
constexpr GlobalNamespace::UnifiedNetworkPlayerModel::operator ::GlobalNamespace::IUnifiedNetworkPlayerModel*() noexcept {
  return static_cast<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IUnifiedNetworkPlayerModel"
constexpr ::GlobalNamespace::IUnifiedNetworkPlayerModel* GlobalNamespace::UnifiedNetworkPlayerModel::i___GlobalNamespace__IUnifiedNetworkPlayerModel() noexcept {
  return static_cast<::GlobalNamespace::IUnifiedNetworkPlayerModel*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModel"
constexpr GlobalNamespace::UnifiedNetworkPlayerModel::operator ::GlobalNamespace::INetworkPlayerModel*() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayerModel*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INetworkPlayerModel"
constexpr ::GlobalNamespace::INetworkPlayerModel* GlobalNamespace::UnifiedNetworkPlayerModel::i___GlobalNamespace__INetworkPlayerModel() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayerModel*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr GlobalNamespace::UnifiedNetworkPlayerModel::operator ::Zenject::IInitializable*() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* GlobalNamespace::UnifiedNetworkPlayerModel::i___Zenject__IInitializable() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::UnifiedNetworkPlayerModel::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::UnifiedNetworkPlayerModel::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnifiedNetworkPlayerModel::UnifiedNetworkPlayerModel() {}
