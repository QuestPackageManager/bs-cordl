#pragma once
// IWYU pragma private; include "BGLib/MetaRemoteAssets/MetaRemoteAssetsLoader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AsyncLoader_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MetaRemoteAssetsLoader)
namespace BGLib::AppFlow::Initialization {
struct AsyncLoader_SynchronizationStep;
}
namespace BGLib::AppFlow::Initialization {
class IInstallerRegistry;
}
namespace BGLib::MetaRemoteAssets {
struct MetaRemoteAssetsLoader__LoadInternalAsync_d__3;
}
namespace BGLib::MetaRemoteAssets {
class MetaRemoteAssetsLoader___c;
}
namespace GlobalNamespace {
class NetworkConfigSO;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class IResourceLocator;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace BGLib::MetaRemoteAssets {
class MetaRemoteAssetsLoader;
}
namespace BGLib::MetaRemoteAssets {
class MetaRemoteAssetsLoader___c;
}
namespace BGLib::MetaRemoteAssets {
struct MetaRemoteAssetsLoader__LoadInternalAsync_d__3;
}
// Write type traits
MARK_REF_T(::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader*);
MARK_REF_T(::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c*);
MARK_VAL_T(::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader__LoadInternalAsync_d__3);
DEFINE_IL2CPP_CLASS(::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader*, "BGLib.MetaRemoteAssets", "MetaRemoteAssetsLoader");
DEFINE_IL2CPP_CLASS(::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c*, "BGLib.MetaRemoteAssets", "MetaRemoteAssetsLoader/<>c");
DEFINE_IL2CPP_CLASS(::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader__LoadInternalAsync_d__3, "BGLib.MetaRemoteAssets", "MetaRemoteAssetsLoader/<LoadInternalAsync>d__3");
// Dependencies System.Object
namespace BGLib::MetaRemoteAssets {
// Is value type: false
// CS Name: BGLib.MetaRemoteAssets.MetaRemoteAssetsLoader/<>c
class CORDL_TYPE MetaRemoteAssetsLoader___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, bool>* __9__3_0;

  static inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c* New_ctor();

  /// @brief Method <LoadInternalAsync>b__3_0, addr 0x3775cd0, size 0xdc, virtual false, abstract: false, final false
  inline bool _LoadInternalAsync_b__3_0(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* locator);

  /// @brief Method .ctor, addr 0x3775ccc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, bool>* getStaticF___9__3_0();

  static inline void setStaticF___9(::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c* value);

  static inline void setStaticF___9__3_0(::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaRemoteAssetsLoader___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetaRemoteAssetsLoader___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetaRemoteAssetsLoader___c(MetaRemoteAssetsLoader___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetaRemoteAssetsLoader___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetaRemoteAssetsLoader___c(MetaRemoteAssetsLoader___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20998 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c) == 0x10, "Size mismatch!");

} // namespace BGLib::MetaRemoteAssets
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace BGLib::MetaRemoteAssets {
// Is value type: true
// CS Name: BGLib.MetaRemoteAssets.MetaRemoteAssetsLoader/<LoadInternalAsync>d__3
struct CORDL_TYPE MetaRemoteAssetsLoader__LoadInternalAsync_d__3 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3775dac, size 0x5cc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3776378, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaRemoteAssetsLoader__LoadInternalAsync_d__3();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader>",
  // modifiers: "", def_value: None }, CppParam { name: "registry", ty: "::BGLib::AppFlow::Initialization::IInstallerRegistry*", modifiers: "", def_value: None }, CppParam { name:
  // "_shouldUseMock_5__2", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>", modifiers: "", def_value: None }]
  constexpr MetaRemoteAssetsLoader__LoadInternalAsync_d__3(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                           ::UnityW<::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader> __4__this, ::BGLib::AppFlow::Initialization::IInstallerRegistry* registry,
                                                           bool _shouldUseMock_5__2,
                                                           ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20999 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader> __4__this;

  /// @brief Field registry, offset: 0x28, size: 0x8, def value: None
  ::BGLib::AppFlow::Initialization::IInstallerRegistry* registry;

  /// @brief Field <shouldUseMock>5__2, offset: 0x30, size: 0x1, def value: None
  bool _shouldUseMock_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader__LoadInternalAsync_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader__LoadInternalAsync_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader__LoadInternalAsync_d__3, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader__LoadInternalAsync_d__3, registry) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader__LoadInternalAsync_d__3, _shouldUseMock_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader__LoadInternalAsync_d__3, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader__LoadInternalAsync_d__3) == 0x40, "Size mismatch!");

} // namespace BGLib::MetaRemoteAssets
// Dependencies BGLib.AppFlow.Initialization.AsyncLoader
namespace BGLib::MetaRemoteAssets {
// Is value type: false
// CS Name: BGLib.MetaRemoteAssets.MetaRemoteAssetsLoader
class CORDL_TYPE MetaRemoteAssetsLoader : public ::BGLib::AppFlow::Initialization::AsyncLoader {
public:
  // Declarations
  using _LoadInternalAsync_d__3 = ::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader__LoadInternalAsync_d__3;

  using __c = ::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader___c;

  /// @brief Field _networkConfig, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__networkConfig, put = __cordl_internal_set__networkConfig)) ::UnityW<::GlobalNamespace::NetworkConfigSO> _networkConfig;

  __declspec(property(get = get_synchronizationStep)) ::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep synchronizationStep;

  /// @brief Method ApplyAddressablesOverrides, addr 0x37758c4, size 0x100, virtual false, abstract: false, final false
  inline void ApplyAddressablesOverrides();

  /// @brief Method LoadInternalAsync, addr 0x3775804, size 0xc0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LoadInternalAsync(::BGLib::AppFlow::Initialization::IInstallerRegistry* registry, ::Zenject::DiContainer* container,
                                                             ::System::Threading::CancellationToken cancellationToken);

  static inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader* New_ctor();

  /// @brief Method WebRequestOverride, addr 0x37759c4, size 0x2b0, virtual false, abstract: false, final false
  inline void WebRequestOverride(::UnityEngine::Networking::UnityWebRequest* request);

  constexpr ::UnityW<::GlobalNamespace::NetworkConfigSO> const& __cordl_internal_get__networkConfig() const;

  constexpr ::UnityW<::GlobalNamespace::NetworkConfigSO>& __cordl_internal_get__networkConfig();

  constexpr void __cordl_internal_set__networkConfig(::UnityW<::GlobalNamespace::NetworkConfigSO> value);

  /// @brief Method .ctor, addr 0x3775c74, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_synchronizationStep, addr 0x37757fc, size 0x8, virtual true, abstract: false, final false
  inline ::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep get_synchronizationStep();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaRemoteAssetsLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetaRemoteAssetsLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetaRemoteAssetsLoader(MetaRemoteAssetsLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetaRemoteAssetsLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetaRemoteAssetsLoader(MetaRemoteAssetsLoader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21000 };

  /// @brief Field _networkConfig, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NetworkConfigSO> ____networkConfig;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader, ____networkConfig) == 0x30, "Offset mismatch!");

static_assert(sizeof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsLoader) == 0x38, "Size mismatch!");

} // namespace BGLib::MetaRemoteAssets
