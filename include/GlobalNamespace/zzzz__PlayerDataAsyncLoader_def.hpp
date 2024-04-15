#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerDataAsyncLoader)
namespace BGLib::AppFlow::Initialization {
class __AsyncInstaller__IInstallerRegistry;
}
namespace GlobalNamespace {
struct __PlayerDataAsyncLoader___LoadResourcesBeforeInstallAsync_d__2;
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
namespace System::Threading::Tasks {
class Task;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerDataAsyncLoader;
}
namespace GlobalNamespace {
struct __PlayerDataAsyncLoader___LoadResourcesBeforeInstallAsync_d__2;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerDataAsyncLoader);
MARK_VAL_T(::GlobalNamespace::__PlayerDataAsyncLoader___LoadResourcesBeforeInstallAsync_d__2);
// Type: ::<LoadResourcesBeforeInstallAsync>d__2
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlayerDataAsyncLoader::<LoadResourcesBeforeInstallAsync>d__2
struct CORDL_TYPE __PlayerDataAsyncLoader___LoadResourcesBeforeInstallAsync_d__2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x250c280, size 0x28c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x250c50c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerDataAsyncLoader___LoadResourcesBeforeInstallAsync_d__2();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "container", ty: "::Zenject::DiContainer*", modifiers: "", def_value: None },
  // CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PlayerDataAsyncLoader>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
  constexpr __PlayerDataAsyncLoader___LoadResourcesBeforeInstallAsync_d__2(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                           ::Zenject::DiContainer* container, ::UnityW<::GlobalNamespace::PlayerDataAsyncLoader> __4__this,
                                                                           ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field container, offset: 0x20, size: 0x8, def value: None
  ::Zenject::DiContainer* container;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataAsyncLoader> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerDataAsyncLoader___LoadResourcesBeforeInstallAsync_d__2, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerDataAsyncLoader___LoadResourcesBeforeInstallAsync_d__2, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerDataAsyncLoader___LoadResourcesBeforeInstallAsync_d__2, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerDataAsyncLoader___LoadResourcesBeforeInstallAsync_d__2, container) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerDataAsyncLoader___LoadResourcesBeforeInstallAsync_d__2, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerDataAsyncLoader___LoadResourcesBeforeInstallAsync_d__2, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerDataAsyncLoader
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerDataAsyncLoader*
class CORDL_TYPE PlayerDataAsyncLoader : public ::BGLib::AppFlow::Initialization::AsyncInstaller {
public:
  // Declarations
  using _LoadResourcesBeforeInstallAsync_d__2 = ::GlobalNamespace::__PlayerDataAsyncLoader___LoadResourcesBeforeInstallAsync_d__2;

  /// @brief Field _playerDataContent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataContent, put = __cordl_internal_set__playerDataContent))::StringW _playerDataContent;

  /// @brief Method InstallBindings, addr 0x250c1c0, size 0xb8, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method LoadResourcesBeforeInstall, addr 0x250c064, size 0x80, virtual true, abstract: false, final false
  inline void LoadResourcesBeforeInstall(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry, ::Zenject::DiContainer* container);

  /// @brief Method LoadResourcesBeforeInstallAsync, addr 0x250c0e4, size 0xdc, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LoadResourcesBeforeInstallAsync(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry, ::Zenject::DiContainer* container);

  static inline ::GlobalNamespace::PlayerDataAsyncLoader* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__playerDataContent() const;

  constexpr ::StringW& __cordl_internal_get__playerDataContent();

  constexpr void __cordl_internal_set__playerDataContent(::StringW value);

  /// @brief Method .ctor, addr 0x250c278, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerDataAsyncLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerDataAsyncLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerDataAsyncLoader(PlayerDataAsyncLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerDataAsyncLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerDataAsyncLoader(PlayerDataAsyncLoader const&) = delete;

  /// @brief Field _playerDataContent, offset: 0x20, size: 0x8, def value: None
  ::StringW ____playerDataContent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerDataAsyncLoader, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerDataAsyncLoader, ____playerDataContent) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerDataAsyncLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerDataAsyncLoader*, "", "PlayerDataAsyncLoader");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerDataAsyncLoader___LoadResourcesBeforeInstallAsync_d__2, "", "PlayerDataAsyncLoader/<LoadResourcesBeforeInstallAsync>d__2");
