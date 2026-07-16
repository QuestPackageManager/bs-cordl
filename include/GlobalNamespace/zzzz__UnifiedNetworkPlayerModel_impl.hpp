#pragma once
// IWYU pragma private; include "GlobalNamespace/UnifiedNetworkPlayerModel.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UnifiedNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatSaberConnectedPlayerManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__GameLiftNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModelPartyConfig_1_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IUnifiedNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__LocalServerNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__UnifiedNetworkPlayerModel_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType() {}
constexpr ::GlobalNamespace::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType GlobalNamespace::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType::GameLift{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType GlobalNamespace::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType::LocalServer{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ccf468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig*>(), { ".ctor", {}, {} })));
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
  this->___secret = value;
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
  this->___code = value;
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig* GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UnifiedNetworkPlayerModel_JoinMatchmakingPartyConfig*>());
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel_StartClientPartyConfig::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel_StartClientPartyConfig::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ccf150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel_StartClientPartyConfig*>(), { ".ctor", {}, {} })));
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
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel_StartClientPartyConfig*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UnifiedNetworkPlayerModel_StartClientPartyConfig* GlobalNamespace::UnifiedNetworkPlayerModel_StartClientPartyConfig::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UnifiedNetworkPlayerModel_StartClientPartyConfig*>());
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
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::*)(int32_t)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ccef94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ccf46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::MoveNext)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x5ccf488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61.__m__Finally1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::__m__Finally1)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5ccf7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61*>(), { "<>m__Finally1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61.System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::INetworkPlayer* (::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ccf87c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ccf884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ccf8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61.System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* (::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::*)()>(
        &::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5ccf8c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61*>(),
                                                                                           { "System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ccf95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::GlobalNamespace::INetworkPlayer*& GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::GlobalNamespace::INetworkPlayer* const& GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::__cordl_internal_set___2__current(::GlobalNamespace::INetworkPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::GlobalNamespace::UnifiedNetworkPlayerModel*& GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::UnifiedNetworkPlayerModel* const& GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::__cordl_internal_set___4__this(::GlobalNamespace::UnifiedNetworkPlayerModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*& GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* const&
GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr void
GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::__cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap1 = value;
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61*>(), { "<>m__Finally1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::INetworkPlayer* GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::INetworkPlayer*>(this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*
GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61*>(),
                                                                                         { "System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61* GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>"
constexpr GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*
GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__INetworkPlayer__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>"
constexpr GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*
GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__INetworkPlayer__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnifiedNetworkPlayerModel__get_otherPlayers_d__61::UnifiedNetworkPlayerModel__get_otherPlayers_d__61() {}
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.add_connectedPlayerManagerCreatedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::add_connectedPlayerManagerCreatedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5ccd1ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(),
                                                             { "add_connectedPlayerManagerCreatedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.remove_connectedPlayerManagerCreatedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::remove_connectedPlayerManagerCreatedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5ccd26c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(),
                                                             { "remove_connectedPlayerManagerCreatedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.add_connectedPlayerManagerDestroyedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::add_connectedPlayerManagerDestroyedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5ccd32c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(),
                                                             { "add_connectedPlayerManagerDestroyedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.remove_connectedPlayerManagerDestroyedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::remove_connectedPlayerManagerDestroyedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5ccd3ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(),
                                                { "remove_connectedPlayerManagerDestroyedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.add_partySizeChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::add_partySizeChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5ccd4ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "add_partySizeChangedEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.remove_partySizeChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::remove_partySizeChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5ccd56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(),
                                                                                           { "remove_partySizeChangedEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.add_partyRefreshingEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::add_partyRefreshingEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5ccd62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "add_partyRefreshingEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.remove_partyRefreshingEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::remove_partyRefreshingEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5ccd6d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "remove_partyRefreshingEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.add_partyChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::add_partyChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5ccd784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(),
                                                             { "add_partyChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.remove_partyChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::remove_partyChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5ccd844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(),
                                                             { "remove_partyChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.add_joinRequestedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::add_joinRequestedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5ccd904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(),
                                                             { "add_joinRequestedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.remove_joinRequestedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::remove_joinRequestedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5ccd9c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(),
                                                             { "remove_joinRequestedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.add_inviteRequestedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::add_inviteRequestedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5ccda84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(),
                                                             { "add_inviteRequestedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.remove_inviteRequestedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::remove_inviteRequestedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5ccdb44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(),
                                                             { "remove_inviteRequestedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_activeNetworkPlayerModel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::INetworkPlayerModel* (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::get_activeNetworkPlayerModel)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5ccdc04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "get_activeNetworkPlayerModel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_activeNetworkPlayerModelType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::get_activeNetworkPlayerModelType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ccdc30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "get_activeNetworkPlayerModelType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_localPlayerIsPartyOwner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::get_localPlayerIsPartyOwner)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5ccdc38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "get_localPlayerIsPartyOwner", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_hasNetworkingFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::get_hasNetworkingFailed)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5ccdd08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "get_hasNetworkingFailed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_currentPartySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::get_currentPartySize)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5ccddd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "get_currentPartySize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_selectionMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapLevelSelectionMask (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::get_selectionMask)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5ccde9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "get_selectionMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_configuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayServerConfiguration (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::get_configuration)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5ccdf8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "get_configuration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_secret
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::get_secret)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cce078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "get_secret", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_code
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::get_code)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cce098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "get_code", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_localServerPort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::get_localServerPort)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cce0b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "get_localServerPort", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.set_localServerPort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(int32_t)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::set_localServerPort)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cce0c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "set_localServerPort", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_connectedPlayerManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatSaberConnectedPlayerManager* (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::get_connectedPlayerManager)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5cce0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "get_connectedPlayerManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_publicServers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::get_publicServers)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5cce18c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "get_publicServers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_discoveryEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::get_discoveryEnabled)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5cce1dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "get_discoveryEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.set_discoveryEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(bool)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::set_discoveryEnabled)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5cce29c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "set_discoveryEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::Initialize)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x5cce370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::Dispose)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x5cce8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_partyPlayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::get_partyPlayers)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5ccee60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "get_partyPlayers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.get_otherPlayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::get_otherPlayers)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ccef24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "get_otherPlayers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.SetServerFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(
    ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::SetServerFilter)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5ccefb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(),
                            { "SetServerFilter", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>(), ::i2c::type_of<::GlobalNamespace::GameplayServerConfiguration>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandlePlayersChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::HandlePlayersChanged)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5ccf154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "HandlePlayersChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandleInviteRequested
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::GlobalNamespace::INetworkPlayer*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::HandleInviteRequested)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ccf1b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "HandleInviteRequested", {}, { ::i2c::type_of<::GlobalNamespace::INetworkPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandleJoinRequested
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::GlobalNamespace::INetworkPlayer*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::HandleJoinRequested)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ccf1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "HandleJoinRequested", {}, { ::i2c::type_of<::GlobalNamespace::INetworkPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandlePartyChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::GlobalNamespace::INetworkPlayerModel*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::HandlePartyChanged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ccf1f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(),
                                                                                           { "HandlePartyChanged", {}, { ::i2c::type_of<::GlobalNamespace::INetworkPlayerModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandlePartySizeChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(int32_t)>(&::GlobalNamespace::UnifiedNetworkPlayerModel::HandlePartySizeChanged)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5ccf210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "HandlePartySizeChanged", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandlePartyRefreshing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::HandlePartyRefreshing)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ccf240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "HandlePartyRefreshing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandleConnectedPlayerManagerCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::GlobalNamespace::INetworkPlayerModel*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::HandleConnectedPlayerManagerCreated)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5ccf25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(),
                                                             { "HandleConnectedPlayerManagerCreated", {}, { ::i2c::type_of<::GlobalNamespace::INetworkPlayerModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.HandleConnectedPlayerManagerDestroyed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::GlobalNamespace::INetworkPlayerModel*)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::HandleConnectedPlayerManagerDestroyed)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5ccf2b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(),
                                                             { "HandleConnectedPlayerManagerDestroyed", {}, { ::i2c::type_of<::GlobalNamespace::INetworkPlayerModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.ResetMasterServerReachability
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::ResetMasterServerReachability)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5ccf304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "ResetMasterServerReachability", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.DestroyPartyConnection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::DestroyPartyConnection)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5ccf364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "DestroyPartyConnection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel.SetActiveNetworkPlayerModelType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)(::GlobalNamespace::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType)>(
    &::GlobalNamespace::UnifiedNetworkPlayerModel::SetActiveNetworkPlayerModelType)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5ccf428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(),
                                                { "SetActiveNetworkPlayerModelType", {}, { ::i2c::type_of<::GlobalNamespace::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnifiedNetworkPlayerModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnifiedNetworkPlayerModel::*)()>(&::GlobalNamespace::UnifiedNetworkPlayerModel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ccf464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { ".ctor", {}, {} })));
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
  this->____gameLiftNetworkPlayerModel = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalServerNetworkPlayerModel>& GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_get__localServerNetworkPlayerModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localServerNetworkPlayerModel;
}
constexpr ::UnityW<::GlobalNamespace::LocalServerNetworkPlayerModel> const& GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_get__localServerNetworkPlayerModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localServerNetworkPlayerModel;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_set__localServerNetworkPlayerModel(::UnityW<::GlobalNamespace::LocalServerNetworkPlayerModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localServerNetworkPlayerModel = value;
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
  this->___connectedPlayerManagerCreatedEvent = value;
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
  this->___connectedPlayerManagerDestroyedEvent = value;
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
  this->___partySizeChangedEvent = value;
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
  this->___partyRefreshingEvent = value;
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
  this->___partyChangedEvent = value;
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
  this->___joinRequestedEvent = value;
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
  this->___inviteRequestedEvent = value;
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
constexpr int32_t& GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_get__localServerPort_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localServerPort_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_get__localServerPort_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localServerPort_k__BackingField;
}
constexpr void GlobalNamespace::UnifiedNetworkPlayerModel::__cordl_internal_set__localServerPort_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localServerPort_k__BackingField = value;
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::add_connectedPlayerManagerCreatedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(),
                                                           { "add_connectedPlayerManagerCreatedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::remove_connectedPlayerManagerCreatedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(),
                                                           { "remove_connectedPlayerManagerCreatedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::add_connectedPlayerManagerDestroyedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(),
                                                           { "add_connectedPlayerManagerDestroyedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::remove_connectedPlayerManagerDestroyedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(),
                                                           { "remove_connectedPlayerManagerDestroyedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::add_partySizeChangedEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "add_partySizeChangedEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::remove_partySizeChangedEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "remove_partySizeChangedEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::add_partyRefreshingEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "add_partyRefreshingEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::remove_partyRefreshingEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "remove_partyRefreshingEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::add_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(),
                                                           { "add_partyChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::remove_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(),
                                                           { "remove_partyChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::add_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(),
                                                           { "add_joinRequestedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::remove_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(),
                                                           { "remove_joinRequestedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::add_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(),
                                                           { "add_inviteRequestedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::remove_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(),
                                                           { "remove_inviteRequestedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::INetworkPlayerModel* GlobalNamespace::UnifiedNetworkPlayerModel::get_activeNetworkPlayerModel() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "get_activeNetworkPlayerModel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::INetworkPlayerModel*>(this, ___internal_method);
}
inline ::GlobalNamespace::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType GlobalNamespace::UnifiedNetworkPlayerModel::get_activeNetworkPlayerModelType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "get_activeNetworkPlayerModelType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType>(this, ___internal_method);
}
inline bool GlobalNamespace::UnifiedNetworkPlayerModel::get_localPlayerIsPartyOwner() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "get_localPlayerIsPartyOwner", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::UnifiedNetworkPlayerModel::get_hasNetworkingFailed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "get_hasNetworkingFailed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::UnifiedNetworkPlayerModel::get_currentPartySize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "get_currentPartySize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::UnifiedNetworkPlayerModel::get_selectionMask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "get_selectionMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelSelectionMask>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayServerConfiguration GlobalNamespace::UnifiedNetworkPlayerModel::get_configuration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "get_configuration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerConfiguration>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::UnifiedNetworkPlayerModel::get_secret() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "get_secret", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::UnifiedNetworkPlayerModel::get_code() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "get_code", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t GlobalNamespace::UnifiedNetworkPlayerModel::get_localServerPort() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "get_localServerPort", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::set_localServerPort(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "set_localServerPort", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatSaberConnectedPlayerManager* GlobalNamespace::UnifiedNetworkPlayerModel::get_connectedPlayerManager() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "get_connectedPlayerManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GlobalNamespace::UnifiedNetworkPlayerModel::get_publicServers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "get_publicServers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>(this, ___internal_method);
}
inline bool GlobalNamespace::UnifiedNetworkPlayerModel::get_discoveryEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "get_discoveryEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::set_discoveryEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "set_discoveryEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GlobalNamespace::UnifiedNetworkPlayerModel::get_partyPlayers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "get_partyPlayers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GlobalNamespace::UnifiedNetworkPlayerModel::get_otherPlayers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "get_otherPlayers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>(this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::SetServerFilter(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(),
                          { "SetServerFilter", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>(), ::i2c::type_of<::GlobalNamespace::GameplayServerConfiguration>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectionMask, configuration);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandlePlayersChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "HandlePlayersChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandleInviteRequested(::GlobalNamespace::INetworkPlayer* player) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "HandleInviteRequested", {}, { ::i2c::type_of<::GlobalNamespace::INetworkPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandleJoinRequested(::GlobalNamespace::INetworkPlayer* player) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "HandleJoinRequested", {}, { ::i2c::type_of<::GlobalNamespace::INetworkPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandlePartyChanged(::GlobalNamespace::INetworkPlayerModel* playerModel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "HandlePartyChanged", {}, { ::i2c::type_of<::GlobalNamespace::INetworkPlayerModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerModel);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandlePartySizeChanged(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "HandlePartySizeChanged", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandlePartyRefreshing() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "HandlePartyRefreshing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandleConnectedPlayerManagerCreated(::GlobalNamespace::INetworkPlayerModel* networkPlayerModel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(),
                                                           { "HandleConnectedPlayerManagerCreated", {}, { ::i2c::type_of<::GlobalNamespace::INetworkPlayerModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, networkPlayerModel);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::HandleConnectedPlayerManagerDestroyed(::GlobalNamespace::INetworkPlayerModel* networkPlayerModel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(),
                                                           { "HandleConnectedPlayerManagerDestroyed", {}, { ::i2c::type_of<::GlobalNamespace::INetworkPlayerModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, networkPlayerModel);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::ResetMasterServerReachability() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "ResetMasterServerReachability", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::UnifiedNetworkPlayerModel::CreatePartyConnection(::GlobalNamespace::INetworkPlayerModelPartyConfig_1<T>* partyConfig) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(),
                                                           { "CreatePartyConnection", { ::i2c::class_of<T>() }, { ::i2c::type_of<::GlobalNamespace::INetworkPlayerModelPartyConfig_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, partyConfig);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::DestroyPartyConnection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { "DestroyPartyConnection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::SetActiveNetworkPlayerModelType(::GlobalNamespace::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType activeNetworkPlayerModelType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(),
                                              { "SetActiveNetworkPlayerModelType", {}, { ::i2c::type_of<::GlobalNamespace::UnifiedNetworkPlayerModel_ActiveNetworkPlayerModelType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeNetworkPlayerModelType);
}
inline void GlobalNamespace::UnifiedNetworkPlayerModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnifiedNetworkPlayerModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UnifiedNetworkPlayerModel* GlobalNamespace::UnifiedNetworkPlayerModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UnifiedNetworkPlayerModel*>());
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
