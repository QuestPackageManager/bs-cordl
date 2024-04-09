#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MainSettingsAsyncLoader)
namespace BGLib::AppFlow::Initialization {
class __AsyncInstaller__IInstallerRegistry;
}
namespace BeatSaber::PerformancePresets {
class PerformancePreset;
}
namespace GlobalNamespace {
class IFileStorage;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
struct __MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__2;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class MainSettingsAsyncLoader;
}
namespace GlobalNamespace {
struct __MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__2;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainSettingsAsyncLoader);
MARK_VAL_T(::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__2);
// Type: ::<LoadResourcesBeforeInstallAsync>d__2
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MainSettingsAsyncLoader::<LoadResourcesBeforeInstallAsync>d__2
struct CORDL_TYPE __MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2500df0, size 0x2c8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x25010b8, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__2();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "container", ty: "::Zenject::DiContainer*", modifiers: "", def_value: None },
  // CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::MainSettingsAsyncLoader>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty:
  // "::UnityW<::GlobalNamespace::MainSettingsModelSO>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty: "::GlobalNamespace::IFileStorage*", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW,::BeatSaber::PerformancePresets::PerformancePreset*>>", modifiers: "",
  // def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__2(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Zenject::DiContainer* container, ::UnityW<::GlobalNamespace::MainSettingsAsyncLoader> __4__this,
      ::UnityW<::GlobalNamespace::MainSettingsModelSO> __7__wrap1, ::GlobalNamespace::IFileStorage* __7__wrap2,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*>> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field container, offset: 0x20, size: 0x8, def value: None
  ::Zenject::DiContainer* container;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSettingsAsyncLoader> __4__this;

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSettingsModelSO> __7__wrap1;

  /// @brief Field <>7__wrap2, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IFileStorage* __7__wrap2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*>> __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__2, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__2, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__2, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__2, container) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__2, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__2, __7__wrap1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__2, __7__wrap2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__2, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__2, __u__2) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MainSettingsAsyncLoader
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MainSettingsAsyncLoader*
class CORDL_TYPE MainSettingsAsyncLoader : public ::BGLib::AppFlow::Initialization::AsyncInstaller {
public:
  // Declarations
  using _LoadResourcesBeforeInstallAsync_d__2 = ::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__2;

  /// @brief Field _mainSettingsModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSettingsModel, put = __cordl_internal_set__mainSettingsModel))::UnityW<::GlobalNamespace::MainSettingsModelSO> _mainSettingsModel;

  /// @brief Method InstallBindings, addr 0x2500de4, size 0x4, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method LoadResourcesBeforeInstall, addr 0x2500c74, size 0x94, virtual true, abstract: false, final false
  inline void LoadResourcesBeforeInstall(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry, ::Zenject::DiContainer* container);

  /// @brief Method LoadResourcesBeforeInstallAsync, addr 0x2500d08, size 0xdc, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LoadResourcesBeforeInstallAsync(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry, ::Zenject::DiContainer* container);

  static inline ::GlobalNamespace::MainSettingsAsyncLoader* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO> const& __cordl_internal_get__mainSettingsModel() const;

  constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO>& __cordl_internal_get__mainSettingsModel();

  constexpr void __cordl_internal_set__mainSettingsModel(::UnityW<::GlobalNamespace::MainSettingsModelSO> value);

  /// @brief Method .ctor, addr 0x2500de8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainSettingsAsyncLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainSettingsAsyncLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainSettingsAsyncLoader(MainSettingsAsyncLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainSettingsAsyncLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainSettingsAsyncLoader(MainSettingsAsyncLoader const&) = delete;

  /// @brief Field _mainSettingsModel, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSettingsModelSO> ____mainSettingsModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainSettingsAsyncLoader, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsAsyncLoader, ____mainSettingsModel) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainSettingsAsyncLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainSettingsAsyncLoader*, "", "MainSettingsAsyncLoader");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MainSettingsAsyncLoader___LoadResourcesBeforeInstallAsync_d__2, "", "MainSettingsAsyncLoader/<LoadResourcesBeforeInstallAsync>d__2");
