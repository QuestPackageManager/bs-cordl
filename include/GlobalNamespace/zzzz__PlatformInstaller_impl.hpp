#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformInstaller.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__Installer_2_impl.hpp"
#include "GlobalNamespace/zzzz__PlatformInstaller_def.hpp"
#include "BeatSaber/Analytics/Gameplay/zzzz__GameplayEventsDispatcher_def.hpp"
#include "BeatSaber/FeatureFlags/zzzz__IFeatureFlagService_def.hpp"
#include "BeatSaber/GraphQL/zzzz__GraphQLClientProviderInstallerSO_def.hpp"
#include "GlobalNamespace/zzzz__MockPlatformAdditionalContentModelInitialDataSO_def.hpp"
#include "GlobalNamespace/zzzz__PlatformInstaller_def.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsManager_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlatformInstaller_Arguments._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformInstaller_Arguments::*)(
    bool, ::OSCE::Analytics::AnalyticsManager*, ::OculusStudios::Platform::Core::IPlatform*, ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*, uint64_t,
    ::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO*)>(&::GlobalNamespace::PlatformInstaller_Arguments::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x37734a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformInstaller_Arguments*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<bool>(), ::i2c::type_of<::OSCE::Analytics::AnalyticsManager*>(), ::i2c::type_of<::OculusStudios::Platform::Core::IPlatform*>(),
                                                    ::i2c::type_of<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*>(), ::i2c::type_of<uint64_t>(),
                                                    ::i2c::type_of<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO*>() } })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::PlatformInstaller_Arguments::__cordl_internal_get_useMock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useMock;
}
constexpr bool const& GlobalNamespace::PlatformInstaller_Arguments::__cordl_internal_get_useMock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useMock;
}
constexpr void GlobalNamespace::PlatformInstaller_Arguments::__cordl_internal_set_useMock(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useMock = value;
}
constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager>& GlobalNamespace::PlatformInstaller_Arguments::__cordl_internal_get_analyticsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___analyticsManager;
}
constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager> const& GlobalNamespace::PlatformInstaller_Arguments::__cordl_internal_get_analyticsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___analyticsManager;
}
constexpr void GlobalNamespace::PlatformInstaller_Arguments::__cordl_internal_set_analyticsManager(::UnityW<::OSCE::Analytics::AnalyticsManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___analyticsManager = value;
}
constexpr ::OculusStudios::Platform::Core::IPlatform*& GlobalNamespace::PlatformInstaller_Arguments::__cordl_internal_get_platform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___platform;
}
constexpr ::OculusStudios::Platform::Core::IPlatform* const& GlobalNamespace::PlatformInstaller_Arguments::__cordl_internal_get_platform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___platform;
}
constexpr void GlobalNamespace::PlatformInstaller_Arguments::__cordl_internal_set_platform(::OculusStudios::Platform::Core::IPlatform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___platform = value;
}
constexpr ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO>&
GlobalNamespace::PlatformInstaller_Arguments::__cordl_internal_get_mockPlatformAdditionalContentModelInitialData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mockPlatformAdditionalContentModelInitialData;
}
constexpr ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO> const&
GlobalNamespace::PlatformInstaller_Arguments::__cordl_internal_get_mockPlatformAdditionalContentModelInitialData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mockPlatformAdditionalContentModelInitialData;
}
constexpr void
GlobalNamespace::PlatformInstaller_Arguments::__cordl_internal_set_mockPlatformAdditionalContentModelInitialData(::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mockPlatformAdditionalContentModelInitialData = value;
}
constexpr uint64_t& GlobalNamespace::PlatformInstaller_Arguments::__cordl_internal_get_graphAppId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___graphAppId;
}
constexpr uint64_t const& GlobalNamespace::PlatformInstaller_Arguments::__cordl_internal_get_graphAppId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___graphAppId;
}
constexpr void GlobalNamespace::PlatformInstaller_Arguments::__cordl_internal_set_graphAppId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___graphAppId = value;
}
constexpr ::UnityW<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO>& GlobalNamespace::PlatformInstaller_Arguments::__cordl_internal_get_graphQLClientProviderInstaller() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___graphQLClientProviderInstaller;
}
constexpr ::UnityW<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO> const& GlobalNamespace::PlatformInstaller_Arguments::__cordl_internal_get_graphQLClientProviderInstaller() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___graphQLClientProviderInstaller;
}
constexpr void GlobalNamespace::PlatformInstaller_Arguments::__cordl_internal_set_graphQLClientProviderInstaller(::UnityW<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___graphQLClientProviderInstaller = value;
}
inline void GlobalNamespace::PlatformInstaller_Arguments::_ctor(bool useMock, ::OSCE::Analytics::AnalyticsManager* analyticsManager, ::OculusStudios::Platform::Core::IPlatform* platform,
                                                                ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO* mockPlatformAdditionalContentModelInitialData, uint64_t graphAppId,
                                                                ::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO* graphQLClientProviderInstaller) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformInstaller_Arguments*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<bool>(), ::i2c::type_of<::OSCE::Analytics::AnalyticsManager*>(), ::i2c::type_of<::OculusStudios::Platform::Core::IPlatform*>(),
                                                  ::i2c::type_of<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*>(), ::i2c::type_of<uint64_t>(),
                                                  ::i2c::type_of<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, useMock, analyticsManager, platform, mockPlatformAdditionalContentModelInitialData, graphAppId,
                                                   graphQLClientProviderInstaller);
}
inline ::GlobalNamespace::PlatformInstaller_Arguments*
GlobalNamespace::PlatformInstaller_Arguments::New_ctor(bool useMock, ::OSCE::Analytics::AnalyticsManager* analyticsManager, ::OculusStudios::Platform::Core::IPlatform* platform,
                                                       ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO* mockPlatformAdditionalContentModelInitialData, uint64_t graphAppId,
                                                       ::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO* graphQLClientProviderInstaller) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlatformInstaller_Arguments*>(useMock, analyticsManager, platform, mockPlatformAdditionalContentModelInitialData,
                                                                                                           graphAppId, graphQLClientProviderInstaller));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformInstaller_Arguments::PlatformInstaller_Arguments() {}
//  Writing Method size for method: ::GlobalNamespace::PlatformInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformInstaller::*)(::GlobalNamespace::PlatformInstaller_Arguments*)>(&::GlobalNamespace::PlatformInstaller::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3772dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformInstaller*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::PlatformInstaller_Arguments*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformInstaller::*)()>(&::GlobalNamespace::PlatformInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x3772e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformInstaller*>(), { ::i2c::class_of<::GlobalNamespace::PlatformInstaller*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformInstaller.BindAnalyticsModel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformInstaller::*)()>(&::GlobalNamespace::PlatformInstaller::BindAnalyticsModel)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3773130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformInstaller*>(), { "BindAnalyticsModel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformInstaller.BindBeatmapDataAssetFileModel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformInstaller::*)()>(&::GlobalNamespace::PlatformInstaller::BindBeatmapDataAssetFileModel)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x37732a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformInstaller*>(), { "BindBeatmapDataAssetFileModel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformInstaller.BindAdditionalContentModel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformInstaller::*)()>(&::GlobalNamespace::PlatformInstaller::BindAdditionalContentModel)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x377320c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformInstaller*>(), { "BindAdditionalContentModel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformInstaller.BindMockPlatformAdditionalContentModel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformInstaller::*)()>(&::GlobalNamespace::PlatformInstaller::BindMockPlatformAdditionalContentModel)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3773348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformInstaller*>(), { "BindMockPlatformAdditionalContentModel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformInstaller._InstallBindings_b__3_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher* (
    ::GlobalNamespace::PlatformInstaller::*)(::BeatSaber::FeatureFlags::IFeatureFlagService*)>(&::GlobalNamespace::PlatformInstaller::_InstallBindings_b__3_0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3773418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformInstaller*>(),
                                                                                           { "<InstallBindings>b__3_0", {}, { ::i2c::type_of<::BeatSaber::FeatureFlags::IFeatureFlagService*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PlatformInstaller_Arguments*& GlobalNamespace::PlatformInstaller::__cordl_internal_get__arguments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arguments;
}
constexpr ::GlobalNamespace::PlatformInstaller_Arguments* const& GlobalNamespace::PlatformInstaller::__cordl_internal_get__arguments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arguments;
}
constexpr void GlobalNamespace::PlatformInstaller::__cordl_internal_set__arguments(::GlobalNamespace::PlatformInstaller_Arguments* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arguments = value;
}
inline void GlobalNamespace::PlatformInstaller::_ctor(::GlobalNamespace::PlatformInstaller_Arguments* arguments) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformInstaller*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::PlatformInstaller_Arguments*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arguments);
}
inline void GlobalNamespace::PlatformInstaller::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlatformInstaller*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformInstaller::BindAnalyticsModel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformInstaller*>(), { "BindAnalyticsModel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformInstaller::BindBeatmapDataAssetFileModel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformInstaller*>(), { "BindBeatmapDataAssetFileModel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformInstaller::BindAdditionalContentModel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformInstaller*>(), { "BindAdditionalContentModel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformInstaller::BindMockPlatformAdditionalContentModel() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformInstaller*>(), { "BindMockPlatformAdditionalContentModel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher* GlobalNamespace::PlatformInstaller::_InstallBindings_b__3_0(::BeatSaber::FeatureFlags::IFeatureFlagService* featureFlagService) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformInstaller*>(),
                                                                                         { "<InstallBindings>b__3_0", {}, { ::i2c::type_of<::BeatSaber::FeatureFlags::IFeatureFlagService*>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher*>(this, ___internal_method, featureFlagService);
}
inline ::GlobalNamespace::PlatformInstaller* GlobalNamespace::PlatformInstaller::New_ctor(::GlobalNamespace::PlatformInstaller_Arguments* arguments) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlatformInstaller*>(arguments));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformInstaller::PlatformInstaller() {}
