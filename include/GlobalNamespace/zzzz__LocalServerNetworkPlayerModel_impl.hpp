#pragma once
// IWYU pragma private; include "GlobalNamespace\LocalServerNetworkPlayerModel.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayerModel_1_impl.hpp"
#include "GlobalNamespace/zzzz__LocalServerNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionInitParams_1_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModelPartyConfig_1_def.hpp"
#include "GlobalNamespace/zzzz__LocalServerConnectionManager_def.hpp"
#include "GlobalNamespace/zzzz__LocalServerNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__PublicServerInfo_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig::*)()>(
    &::GlobalNamespace::LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5ccdfac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig::__cordl_internal_get_localPort() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localPort;
}
constexpr int32_t const& GlobalNamespace::LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig::__cordl_internal_get_localPort() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localPort;
}
constexpr void GlobalNamespace::LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig::__cordl_internal_set_localPort(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___localPort = value;
}
inline void GlobalNamespace::LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig* GlobalNamespace::LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig::LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig() {}
//  Writing Method size for method: ::GlobalNamespace::LocalServerNetworkPlayerModel.get_secret
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LocalServerNetworkPlayerModel::*)()>(&::GlobalNamespace::LocalServerNetworkPlayerModel::get_secret)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ccdb64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::LocalServerNetworkPlayerModel*>(), 64 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerNetworkPlayerModel.get_code
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LocalServerNetworkPlayerModel::*)()>(&::GlobalNamespace::LocalServerNetworkPlayerModel::get_code)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ccdbbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::LocalServerNetworkPlayerModel*>(), 65 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerNetworkPlayerModel.get_partyOwnerId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LocalServerNetworkPlayerModel::*)()>(&::GlobalNamespace::LocalServerNetworkPlayerModel::get_partyOwnerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ccdc14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::LocalServerNetworkPlayerModel*>(), 66 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerNetworkPlayerModel.get_configuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayServerConfiguration (::GlobalNamespace::LocalServerNetworkPlayerModel::*)()>(
    &::GlobalNamespace::LocalServerNetworkPlayerModel::get_configuration)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5ccdc1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::LocalServerNetworkPlayerModel*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerNetworkPlayerModel.get_selectionMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapLevelSelectionMask (::GlobalNamespace::LocalServerNetworkPlayerModel::*)()>(
    &::GlobalNamespace::LocalServerNetworkPlayerModel::get_selectionMask)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5ccdc98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::LocalServerNetworkPlayerModel*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerNetworkPlayerModel.RefreshPublicServers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerNetworkPlayerModel::*)(
    ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration,
    ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*>*, ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*)>(
    &::GlobalNamespace::LocalServerNetworkPlayerModel::RefreshPublicServers)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5ccdd14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::LocalServerNetworkPlayerModel*>(), 69 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerNetworkPlayerModel.GetConnectToServerParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LocalServerConnectionManager*>* (
    ::GlobalNamespace::LocalServerNetworkPlayerModel::*)(::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration, ::StringW, ::StringW)>(
    &::GlobalNamespace::LocalServerNetworkPlayerModel::GetConnectToServerParams)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5ccdda0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::LocalServerNetworkPlayerModel*>(), 67 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerNetworkPlayerModel.GetStartClientParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LocalServerConnectionManager*>* (
    ::GlobalNamespace::LocalServerNetworkPlayerModel::*)(::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration)>(
    &::GlobalNamespace::LocalServerNetworkPlayerModel::GetStartClientParams)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5ccde68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::LocalServerNetworkPlayerModel*>(), 68 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerNetworkPlayerModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalServerNetworkPlayerModel::*)()>(&::GlobalNamespace::LocalServerNetworkPlayerModel::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ccdf10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerNetworkPlayerModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams*&
GlobalNamespace::LocalServerNetworkPlayerModel::__cordl_internal_get__cachedConnectToServerParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedConnectToServerParams;
}
constexpr ::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams* const&
GlobalNamespace::LocalServerNetworkPlayerModel::__cordl_internal_get__cachedConnectToServerParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedConnectToServerParams;
}
constexpr void GlobalNamespace::LocalServerNetworkPlayerModel::__cordl_internal_set__cachedConnectToServerParams(
    ::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerConnectToServerParams* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cachedConnectToServerParams = value;
}
constexpr ::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams*&
GlobalNamespace::LocalServerNetworkPlayerModel::__cordl_internal_get__cachedStartClientParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedStartClientParams;
}
constexpr ::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams* const&
GlobalNamespace::LocalServerNetworkPlayerModel::__cordl_internal_get__cachedStartClientParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedStartClientParams;
}
constexpr void
GlobalNamespace::LocalServerNetworkPlayerModel::__cordl_internal_set__cachedStartClientParams(::GlobalNamespace::LocalServerConnectionManager_LocalServerConnectionManagerStartClientParams* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cachedStartClientParams = value;
}
constexpr int32_t& GlobalNamespace::LocalServerNetworkPlayerModel::__cordl_internal_get__localPort() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPort;
}
constexpr int32_t const& GlobalNamespace::LocalServerNetworkPlayerModel::__cordl_internal_get__localPort() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPort;
}
constexpr void GlobalNamespace::LocalServerNetworkPlayerModel::__cordl_internal_set__localPort(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localPort = value;
}
inline ::StringW GlobalNamespace::LocalServerNetworkPlayerModel::get_secret() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LocalServerNetworkPlayerModel*>(), 64 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::LocalServerNetworkPlayerModel::get_code() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LocalServerNetworkPlayerModel*>(), 65 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::LocalServerNetworkPlayerModel::get_partyOwnerId() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LocalServerNetworkPlayerModel*>(), 66 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayServerConfiguration GlobalNamespace::LocalServerNetworkPlayerModel::get_configuration() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LocalServerNetworkPlayerModel*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerConfiguration>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::LocalServerNetworkPlayerModel::get_selectionMask() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LocalServerNetworkPlayerModel*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelSelectionMask>(this, ___internal_method);
}
inline void GlobalNamespace::LocalServerNetworkPlayerModel::RefreshPublicServers(::GlobalNamespace::BeatmapLevelSelectionMask localSelectionMask,
                                                                                 ::GlobalNamespace::GameplayServerConfiguration localConfiguration,
                                                                                 ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*>* onSuccess,
                                                                                 ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* onFailure) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LocalServerNetworkPlayerModel*>(), 69 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localSelectionMask, localConfiguration, onSuccess, onFailure);
}
inline ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LocalServerConnectionManager*>*
GlobalNamespace::LocalServerNetworkPlayerModel::GetConnectToServerParams(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration,
                                                                         ::StringW secret, ::StringW code) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LocalServerNetworkPlayerModel*>(), 67 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LocalServerConnectionManager*>*>(this, ___internal_method, selectionMask, configuration,
                                                                                                                                            secret, code);
}
inline ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LocalServerConnectionManager*>*
GlobalNamespace::LocalServerNetworkPlayerModel::GetStartClientParams(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LocalServerNetworkPlayerModel*>(), 68 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LocalServerConnectionManager*>*>(this, ___internal_method, selectionMask, configuration);
}
template <typename T2> inline bool GlobalNamespace::LocalServerNetworkPlayerModel::CreatePartyConnection(::GlobalNamespace::INetworkPlayerModelPartyConfig_1<T2>* config) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LocalServerNetworkPlayerModel*>(), 62 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T2>() }));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, config);
}
inline void GlobalNamespace::LocalServerNetworkPlayerModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalServerNetworkPlayerModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalServerNetworkPlayerModel* GlobalNamespace::LocalServerNetworkPlayerModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalServerNetworkPlayerModel*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalServerNetworkPlayerModel::LocalServerNetworkPlayerModel() {}
