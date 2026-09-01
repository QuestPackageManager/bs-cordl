#pragma once
// IWYU pragma private; include "GlobalNamespace\PlatformInstaller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__Installer_2_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformInstaller)
namespace BeatSaber::Analytics::Gameplay {
class GameplayEventsDispatcher;
}
namespace BeatSaber::FeatureFlags {
class IFeatureFlagService;
}
namespace BeatSaber::GraphQL {
class GraphQLClientProviderInstallerSO;
}
namespace GlobalNamespace {
class MockPlatformAdditionalContentModelInitialDataSO;
}
namespace GlobalNamespace {
class PlatformInstaller_Arguments;
}
namespace OSCE::Analytics {
class AnalyticsManager;
}
namespace OculusStudios::Platform::Core {
class IPlatform;
}
// Forward declare root types
namespace GlobalNamespace {
class PlatformInstaller;
}
namespace GlobalNamespace {
class PlatformInstaller_Arguments;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlatformInstaller*);
MARK_REF_T(::GlobalNamespace::PlatformInstaller_Arguments*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlatformInstaller*, "", "PlatformInstaller");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlatformInstaller_Arguments*, "", "PlatformInstaller/Arguments");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlatformInstaller/Arguments
class CORDL_TYPE PlatformInstaller_Arguments : public ::System::Object {
public:
  // Declarations
  /// @brief Field analyticsManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_analyticsManager, put = __cordl_internal_set_analyticsManager)) ::UnityW<::OSCE::Analytics::AnalyticsManager> analyticsManager;

  /// @brief Field graphAppId, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_graphAppId, put = __cordl_internal_set_graphAppId)) uint64_t graphAppId;

  /// @brief Field graphQLClientProviderInstaller, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_graphQLClientProviderInstaller,
                      put = __cordl_internal_set_graphQLClientProviderInstaller)) ::UnityW<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO>
      graphQLClientProviderInstaller;

  /// @brief Field mockPlatformAdditionalContentModelInitialData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mockPlatformAdditionalContentModelInitialData,
                      put = __cordl_internal_set_mockPlatformAdditionalContentModelInitialData)) ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO>
      mockPlatformAdditionalContentModelInitialData;

  /// @brief Field platform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_platform, put = __cordl_internal_set_platform)) ::OculusStudios::Platform::Core::IPlatform* platform;

  /// @brief Field useMock, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_useMock, put = __cordl_internal_set_useMock)) bool useMock;

  static inline ::GlobalNamespace::PlatformInstaller_Arguments* New_ctor(bool useMock, ::OSCE::Analytics::AnalyticsManager* analyticsManager, ::OculusStudios::Platform::Core::IPlatform* platform,
                                                                         ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO* mockPlatformAdditionalContentModelInitialData,
                                                                         uint64_t graphAppId, ::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO* graphQLClientProviderInstaller);

  constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager> const& __cordl_internal_get_analyticsManager() const;

  constexpr ::UnityW<::OSCE::Analytics::AnalyticsManager>& __cordl_internal_get_analyticsManager();

  constexpr uint64_t const& __cordl_internal_get_graphAppId() const;

  constexpr uint64_t& __cordl_internal_get_graphAppId();

  constexpr ::UnityW<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO> const& __cordl_internal_get_graphQLClientProviderInstaller() const;

  constexpr ::UnityW<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO>& __cordl_internal_get_graphQLClientProviderInstaller();

  constexpr ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO> const& __cordl_internal_get_mockPlatformAdditionalContentModelInitialData() const;

  constexpr ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO>& __cordl_internal_get_mockPlatformAdditionalContentModelInitialData();

  constexpr ::OculusStudios::Platform::Core::IPlatform* const& __cordl_internal_get_platform() const;

  constexpr ::OculusStudios::Platform::Core::IPlatform*& __cordl_internal_get_platform();

  constexpr bool const& __cordl_internal_get_useMock() const;

  constexpr bool& __cordl_internal_get_useMock();

  constexpr void __cordl_internal_set_analyticsManager(::UnityW<::OSCE::Analytics::AnalyticsManager> value);

  constexpr void __cordl_internal_set_graphAppId(uint64_t value);

  constexpr void __cordl_internal_set_graphQLClientProviderInstaller(::UnityW<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO> value);

  constexpr void __cordl_internal_set_mockPlatformAdditionalContentModelInitialData(::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO> value);

  constexpr void __cordl_internal_set_platform(::OculusStudios::Platform::Core::IPlatform* value);

  constexpr void __cordl_internal_set_useMock(bool value);

  /// @brief Method .ctor, addr 0x3777c30, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(bool useMock, ::OSCE::Analytics::AnalyticsManager* analyticsManager, ::OculusStudios::Platform::Core::IPlatform* platform,
                    ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO* mockPlatformAdditionalContentModelInitialData, uint64_t graphAppId,
                    ::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO* graphQLClientProviderInstaller);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformInstaller_Arguments();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformInstaller_Arguments", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformInstaller_Arguments(PlatformInstaller_Arguments&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformInstaller_Arguments", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformInstaller_Arguments(PlatformInstaller_Arguments const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21032 };

  /// @brief Field useMock, offset: 0x10, size: 0x1, def value: None
  bool ___useMock;

  /// @brief Field analyticsManager, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::OSCE::Analytics::AnalyticsManager> ___analyticsManager;

  /// @brief Field platform, offset: 0x20, size: 0x8, def value: None
  ::OculusStudios::Platform::Core::IPlatform* ___platform;

  /// @brief Field mockPlatformAdditionalContentModelInitialData, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO> ___mockPlatformAdditionalContentModelInitialData;

  /// @brief Field graphAppId, offset: 0x30, size: 0x8, def value: None
  uint64_t ___graphAppId;

  /// @brief Field graphQLClientProviderInstaller, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::BeatSaber::GraphQL::GraphQLClientProviderInstallerSO> ___graphQLClientProviderInstaller;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformInstaller_Arguments, ___useMock) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstaller_Arguments, ___analyticsManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstaller_Arguments, ___platform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstaller_Arguments, ___mockPlatformAdditionalContentModelInitialData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstaller_Arguments, ___graphAppId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstaller_Arguments, ___graphQLClientProviderInstaller) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlatformInstaller_Arguments) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies Zenject.Installer`2<TParam1, TDerived>
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlatformInstaller
class CORDL_TYPE PlatformInstaller : public ::Zenject::Installer_2<::GlobalNamespace::PlatformInstaller_Arguments*, ::GlobalNamespace::PlatformInstaller*> {
public:
  // Declarations
  using Arguments = ::GlobalNamespace::PlatformInstaller_Arguments;

  /// @brief Field _arguments, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__arguments, put = __cordl_internal_set__arguments)) ::GlobalNamespace::PlatformInstaller_Arguments* _arguments;

  /// @brief Method BindAdditionalContentModel, addr 0x377799c, size 0x94, virtual false, abstract: false, final false
  inline void BindAdditionalContentModel();

  /// @brief Method BindAnalyticsModel, addr 0x37778c0, size 0xdc, virtual false, abstract: false, final false
  inline void BindAnalyticsModel();

  /// @brief Method BindBeatmapDataAssetFileModel, addr 0x3777a30, size 0xa8, virtual false, abstract: false, final false
  inline void BindBeatmapDataAssetFileModel();

  /// @brief Method BindMockPlatformAdditionalContentModel, addr 0x3777ad8, size 0xd0, virtual false, abstract: false, final false
  inline void BindMockPlatformAdditionalContentModel();

  /// @brief Method InstallBindings, addr 0x377759c, size 0x324, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::PlatformInstaller* New_ctor(::GlobalNamespace::PlatformInstaller_Arguments* arguments);

  /// @brief Method <InstallBindings>b__3_0, addr 0x3777ba8, size 0x88, virtual false, abstract: false, final false
  inline ::BeatSaber::Analytics::Gameplay::GameplayEventsDispatcher* _InstallBindings_b__3_0(::BeatSaber::FeatureFlags::IFeatureFlagService* featureFlagService);

  constexpr ::GlobalNamespace::PlatformInstaller_Arguments* const& __cordl_internal_get__arguments() const;

  constexpr ::GlobalNamespace::PlatformInstaller_Arguments*& __cordl_internal_get__arguments();

  constexpr void __cordl_internal_set__arguments(::GlobalNamespace::PlatformInstaller_Arguments* value);

  /// @brief Method .ctor, addr 0x377754c, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::PlatformInstaller_Arguments* arguments);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformInstaller(PlatformInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformInstaller(PlatformInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21033 };

  /// @brief Field _arguments, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::PlatformInstaller_Arguments* ____arguments;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformInstaller, ____arguments) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlatformInstaller) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
