#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "GlobalNamespace/zzzz__PerformancePreset_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MainSettingsModelAsyncLoader)
namespace GlobalNamespace {
struct __MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class ISaveData;
}
namespace BGLib::AppFlow::Initialization {
class __AsyncInstaller__IInstallerRegistry;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace GlobalNamespace {
class PerformancePreset;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
class MainSettingsModelAsyncLoader;
}
namespace GlobalNamespace {
struct __MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainSettingsModelAsyncLoader);
MARK_VAL_T(::GlobalNamespace::__MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3);
// Type: ::<LoadResourcesBeforeInstallAsync>d__3
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2507), inst: 5315 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2507)), TypeDefinitionIndex(TypeDefinitionIndex(3401)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 870 }),
// TypeDefinitionIndex(TypeDefinitionIndex(4443))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4027)) CS Name: ::MainSettingsModelAsyncLoader::<LoadResourcesBeforeInstallAsync>d__3
struct CORDL_TYPE __MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2226488, size 0x26c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22266f4, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MainSettingsModelAsyncLoader*", modifiers:
  // "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>", modifiers: "",
  // def_value: None }]
  constexpr __MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::MainSettingsModelAsyncLoader* __4__this,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW, ::GlobalNamespace::PerformancePreset*>> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MainSettingsModelAsyncLoader* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW, ::GlobalNamespace::PerformancePreset*>> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MainSettingsModelAsyncLoader
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15422))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4028))
// CS Name: ::MainSettingsModelAsyncLoader*
class CORDL_TYPE MainSettingsModelAsyncLoader : public ::BGLib::AppFlow::Initialization::AsyncInstaller {
public:
  // Declarations
  using _LoadResourcesBeforeInstallAsync_d__3 = ::GlobalNamespace::__MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3;

  /// @brief Field _mainSettingsModel, offset 0x20, size 0x8
  __declspec(property(get = __get__mainSettingsModel, put = __set__mainSettingsModel))::GlobalNamespace::MainSettingsModelSO* _mainSettingsModel;

  /// @brief Field _saveData, offset 0x28, size 0x8
  __declspec(property(get = __get__saveData, put = __set__saveData))::GlobalNamespace::ISaveData* _saveData;

  constexpr ::GlobalNamespace::MainSettingsModelSO*& __get__mainSettingsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsModelSO*> const& __get__mainSettingsModel() const;

  constexpr void __set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO* value);

  constexpr ::GlobalNamespace::ISaveData*& __get__saveData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISaveData*> const& __get__saveData() const;

  constexpr void __set__saveData(::GlobalNamespace::ISaveData* value);

  /// @brief Method LoadResourcesBeforeInstall, addr 0x222628c, size 0x98, virtual true, abstract: false, final false
  inline void LoadResourcesBeforeInstall(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry);

  /// @brief Method LoadResourcesBeforeInstallAsync, addr 0x2226324, size 0xc8, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LoadResourcesBeforeInstallAsync(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry);

  /// @brief Method InstallBindings, addr 0x22263ec, size 0x94, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::MainSettingsModelAsyncLoader* New_ctor();

  /// @brief Method .ctor, addr 0x2226480, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MainSettingsModelAsyncLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainSettingsModelAsyncLoader(MainSettingsModelAsyncLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainSettingsModelAsyncLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainSettingsModelAsyncLoader(MainSettingsModelAsyncLoader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainSettingsModelAsyncLoader();

public:
  /// @brief Field _mainSettingsModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MainSettingsModelSO* ____mainSettingsModel;

  /// @brief Field _saveData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ISaveData* ____saveData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainSettingsModelAsyncLoader, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelAsyncLoader, ____mainSettingsModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsModelAsyncLoader, ____saveData) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainSettingsModelAsyncLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainSettingsModelAsyncLoader*, "", "MainSettingsModelAsyncLoader");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3, "", "MainSettingsModelAsyncLoader/<LoadResourcesBeforeInstallAsync>d__3");
