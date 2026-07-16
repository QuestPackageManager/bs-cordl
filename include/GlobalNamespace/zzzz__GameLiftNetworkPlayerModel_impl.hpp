#pragma once
// IWYU pragma private; include "GlobalNamespace/GameLiftNetworkPlayerModel.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayerModel_1_impl.hpp"
#include "GlobalNamespace/zzzz__GameLiftNetworkPlayerModel_def.hpp"
#include "BGNet/Core/GameLift/zzzz__IGameLiftPlayerSessionProvider_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "GlobalNamespace/zzzz__GameLiftConnectionManager_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionInitParams_1_def.hpp"
#include "GlobalNamespace/zzzz__PublicServerInfo_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameLiftNetworkPlayerModel.get_secret
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameLiftNetworkPlayerModel::*)()>(&::GlobalNamespace::GameLiftNetworkPlayerModel::get_secret)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ccb3e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLiftNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::GameLiftNetworkPlayerModel*>(), 64 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftNetworkPlayerModel.get_code
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameLiftNetworkPlayerModel::*)()>(&::GlobalNamespace::GameLiftNetworkPlayerModel::get_code)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ccb43c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLiftNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::GameLiftNetworkPlayerModel*>(), 65 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftNetworkPlayerModel.get_partyOwnerId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameLiftNetworkPlayerModel::*)()>(&::GlobalNamespace::GameLiftNetworkPlayerModel::get_partyOwnerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ccb494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLiftNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::GameLiftNetworkPlayerModel*>(), 66 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftNetworkPlayerModel.get_configuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayServerConfiguration (::GlobalNamespace::GameLiftNetworkPlayerModel::*)()>(
    &::GlobalNamespace::GameLiftNetworkPlayerModel::get_configuration)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5ccb49c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLiftNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::GameLiftNetworkPlayerModel*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftNetworkPlayerModel.get_selectionMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapLevelSelectionMask (::GlobalNamespace::GameLiftNetworkPlayerModel::*)()>(
    &::GlobalNamespace::GameLiftNetworkPlayerModel::get_selectionMask)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5ccb518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLiftNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::GameLiftNetworkPlayerModel*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftNetworkPlayerModel.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLiftNetworkPlayerModel::*)()>(&::GlobalNamespace::GameLiftNetworkPlayerModel::Update)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5ccb594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLiftNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::GameLiftNetworkPlayerModel*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftNetworkPlayerModel.RefreshPublicServers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLiftNetworkPlayerModel::*)(
    ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration,
    ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*>*, ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*)>(
    &::GlobalNamespace::GameLiftNetworkPlayerModel::RefreshPublicServers)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5ccb65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLiftNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::GameLiftNetworkPlayerModel*>(), 69 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftNetworkPlayerModel.GetConnectToServerParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::GameLiftConnectionManager*>* (
    ::GlobalNamespace::GameLiftNetworkPlayerModel::*)(::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration, ::StringW, ::StringW)>(
    &::GlobalNamespace::GameLiftNetworkPlayerModel::GetConnectToServerParams)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5ccb6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLiftNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::GameLiftNetworkPlayerModel*>(), 67 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftNetworkPlayerModel.GetStartClientParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::GameLiftConnectionManager*>* (
    ::GlobalNamespace::GameLiftNetworkPlayerModel::*)(::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration)>(
    &::GlobalNamespace::GameLiftNetworkPlayerModel::GetStartClientParams)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5ccb7ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLiftNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::GameLiftNetworkPlayerModel*>(), 68 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLiftNetworkPlayerModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLiftNetworkPlayerModel::*)()>(&::GlobalNamespace::GameLiftNetworkPlayerModel::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5ccb858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLiftNetworkPlayerModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider*& GlobalNamespace::GameLiftNetworkPlayerModel::__cordl_internal_get__gameLiftPlayerSessionProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameLiftPlayerSessionProvider;
}
constexpr ::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider* const& GlobalNamespace::GameLiftNetworkPlayerModel::__cordl_internal_get__gameLiftPlayerSessionProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameLiftPlayerSessionProvider;
}
constexpr void GlobalNamespace::GameLiftNetworkPlayerModel::__cordl_internal_set__gameLiftPlayerSessionProvider(::BGNet::Core::GameLift::IGameLiftPlayerSessionProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameLiftPlayerSessionProvider = value;
}
constexpr ::GlobalNamespace::GameLiftConnectionManager_ConnectToServerParams*& GlobalNamespace::GameLiftNetworkPlayerModel::__cordl_internal_get__cachedConnectToServerParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedConnectToServerParams;
}
constexpr ::GlobalNamespace::GameLiftConnectionManager_ConnectToServerParams* const& GlobalNamespace::GameLiftNetworkPlayerModel::__cordl_internal_get__cachedConnectToServerParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedConnectToServerParams;
}
constexpr void GlobalNamespace::GameLiftNetworkPlayerModel::__cordl_internal_set__cachedConnectToServerParams(::GlobalNamespace::GameLiftConnectionManager_ConnectToServerParams* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cachedConnectToServerParams = value;
}
constexpr ::GlobalNamespace::GameLiftConnectionManager_StartClientParams*& GlobalNamespace::GameLiftNetworkPlayerModel::__cordl_internal_get__cachedStartClientParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedStartClientParams;
}
constexpr ::GlobalNamespace::GameLiftConnectionManager_StartClientParams* const& GlobalNamespace::GameLiftNetworkPlayerModel::__cordl_internal_get__cachedStartClientParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedStartClientParams;
}
constexpr void GlobalNamespace::GameLiftNetworkPlayerModel::__cordl_internal_set__cachedStartClientParams(::GlobalNamespace::GameLiftConnectionManager_StartClientParams* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cachedStartClientParams = value;
}
inline ::StringW GlobalNamespace::GameLiftNetworkPlayerModel::get_secret() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameLiftNetworkPlayerModel*>(), 64 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameLiftNetworkPlayerModel::get_code() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameLiftNetworkPlayerModel*>(), 65 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameLiftNetworkPlayerModel::get_partyOwnerId() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameLiftNetworkPlayerModel*>(), 66 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayServerConfiguration GlobalNamespace::GameLiftNetworkPlayerModel::get_configuration() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameLiftNetworkPlayerModel*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerConfiguration>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::GameLiftNetworkPlayerModel::get_selectionMask() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameLiftNetworkPlayerModel*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelSelectionMask>(this, ___internal_method);
}
inline void GlobalNamespace::GameLiftNetworkPlayerModel::Update() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameLiftNetworkPlayerModel*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameLiftNetworkPlayerModel::RefreshPublicServers(::GlobalNamespace::BeatmapLevelSelectionMask localSelectionMask,
                                                                              ::GlobalNamespace::GameplayServerConfiguration localConfiguration,
                                                                              ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*>* onSuccess,
                                                                              ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* onFailure) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameLiftNetworkPlayerModel*>(), 69 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localSelectionMask, localConfiguration, onSuccess, onFailure);
}
inline ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::GameLiftConnectionManager*>*
GlobalNamespace::GameLiftNetworkPlayerModel::GetConnectToServerParams(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration,
                                                                      ::StringW secret, ::StringW code) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameLiftNetworkPlayerModel*>(), 67 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::GameLiftConnectionManager*>*>(this, ___internal_method, selectionMask, configuration, secret,
                                                                                                                                         code);
}
inline ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::GameLiftConnectionManager*>*
GlobalNamespace::GameLiftNetworkPlayerModel::GetStartClientParams(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameLiftNetworkPlayerModel*>(), 68 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::GameLiftConnectionManager*>*>(this, ___internal_method, selectionMask, configuration);
}
inline void GlobalNamespace::GameLiftNetworkPlayerModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameLiftNetworkPlayerModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameLiftNetworkPlayerModel* GlobalNamespace::GameLiftNetworkPlayerModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameLiftNetworkPlayerModel*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameLiftNetworkPlayerModel::GameLiftNetworkPlayerModel() {}
