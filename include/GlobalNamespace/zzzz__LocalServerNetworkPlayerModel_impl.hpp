#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalServerNetworkPlayerModel.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig::*)()>(
    &::GlobalNamespace::LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5ab81e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig* GlobalNamespace::LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig::LocalServerNetworkPlayerModel_LocalServerJoinMatchmakingPartyConfig() {}
//  Writing Method size for method: ::GlobalNamespace::LocalServerNetworkPlayerModel.get_secret
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::LocalServerNetworkPlayerModel::*)()>(
    &::GlobalNamespace::LocalServerNetworkPlayerModel::get_secret)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ab7da0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerNetworkPlayerModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerNetworkPlayerModel*>::get(), 64));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerNetworkPlayerModel.get_code
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::LocalServerNetworkPlayerModel::*)()>(
    &::GlobalNamespace::LocalServerNetworkPlayerModel::get_code)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ab7df8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerNetworkPlayerModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerNetworkPlayerModel*>::get(), 65));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerNetworkPlayerModel.get_partyOwnerId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::LocalServerNetworkPlayerModel::*)()>(
    &::GlobalNamespace::LocalServerNetworkPlayerModel::get_partyOwnerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ab7e50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerNetworkPlayerModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerNetworkPlayerModel*>::get(), 66));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerNetworkPlayerModel.get_configuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayServerConfiguration (::GlobalNamespace::LocalServerNetworkPlayerModel::*)()>(
    &::GlobalNamespace::LocalServerNetworkPlayerModel::get_configuration)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5ab7e58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerNetworkPlayerModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerNetworkPlayerModel*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerNetworkPlayerModel.get_selectionMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevelSelectionMask (::GlobalNamespace::LocalServerNetworkPlayerModel::*)()>(
    &::GlobalNamespace::LocalServerNetworkPlayerModel::get_selectionMask)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5ab7ed4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerNetworkPlayerModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerNetworkPlayerModel*>::get(), 41));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerNetworkPlayerModel.RefreshPublicServers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalServerNetworkPlayerModel::*)(
    ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration,
    ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*>*, ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*)>(
    &::GlobalNamespace::LocalServerNetworkPlayerModel::RefreshPublicServers)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5ab7f50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerNetworkPlayerModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerNetworkPlayerModel*>::get(), 69));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerNetworkPlayerModel.GetConnectToServerParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LocalServerConnectionManager*>* (
    ::GlobalNamespace::LocalServerNetworkPlayerModel::*)(::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration, ::StringW, ::StringW)>(
    &::GlobalNamespace::LocalServerNetworkPlayerModel::GetConnectToServerParams)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5ab7fdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerNetworkPlayerModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerNetworkPlayerModel*>::get(), 67));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerNetworkPlayerModel.GetStartClientParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LocalServerConnectionManager*>* (
    ::GlobalNamespace::LocalServerNetworkPlayerModel::*)(::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration)>(
    &::GlobalNamespace::LocalServerNetworkPlayerModel::GetStartClientParams)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5ab80a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerNetworkPlayerModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerNetworkPlayerModel*>::get(), 68));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalServerNetworkPlayerModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalServerNetworkPlayerModel::*)()>(
    &::GlobalNamespace::LocalServerNetworkPlayerModel::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ab814c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerNetworkPlayerModel*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cachedConnectToServerParams)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cachedStartClientParams)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerNetworkPlayerModel*>::get(), 64)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::LocalServerNetworkPlayerModel::get_code() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerNetworkPlayerModel*>::get(), 65)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::LocalServerNetworkPlayerModel::get_partyOwnerId() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerNetworkPlayerModel*>::get(), 66)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayServerConfiguration GlobalNamespace::LocalServerNetworkPlayerModel::get_configuration() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerNetworkPlayerModel*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerConfiguration, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::LocalServerNetworkPlayerModel::get_selectionMask() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerNetworkPlayerModel*>::get(), 41)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelSelectionMask, false>(this, ___internal_method);
}
inline void GlobalNamespace::LocalServerNetworkPlayerModel::RefreshPublicServers(::GlobalNamespace::BeatmapLevelSelectionMask localSelectionMask,
                                                                                 ::GlobalNamespace::GameplayServerConfiguration localConfiguration,
                                                                                 ::System::Action_1<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PublicServerInfo>*>* onSuccess,
                                                                                 ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* onFailure) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerNetworkPlayerModel*>::get(), 69)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, localSelectionMask, localConfiguration, onSuccess, onFailure);
}
inline ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LocalServerConnectionManager*>*
GlobalNamespace::LocalServerNetworkPlayerModel::GetConnectToServerParams(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration,
                                                                         ::StringW secret, ::StringW code) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerNetworkPlayerModel*>::get(), 67)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LocalServerConnectionManager*>*, false>(this, ___internal_method, selectionMask,
                                                                                                                                                   configuration, secret, code);
}
inline ::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LocalServerConnectionManager*>*
GlobalNamespace::LocalServerNetworkPlayerModel::GetStartClientParams(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerNetworkPlayerModel*>::get(), 68)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectionInitParams_1<::GlobalNamespace::LocalServerConnectionManager*>*, false>(this, ___internal_method, selectionMask,
                                                                                                                                                   configuration);
}
template <typename T2> inline bool GlobalNamespace::LocalServerNetworkPlayerModel::CreatePartyConnection(::GlobalNamespace::INetworkPlayerModelPartyConfig_1<T2>* config) {
  auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerNetworkPlayerModel*>::get(), 62)));
  auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, config);
}
inline void GlobalNamespace::LocalServerNetworkPlayerModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalServerNetworkPlayerModel*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalServerNetworkPlayerModel* GlobalNamespace::LocalServerNetworkPlayerModel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LocalServerNetworkPlayerModel*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalServerNetworkPlayerModel::LocalServerNetworkPlayerModel() {}
