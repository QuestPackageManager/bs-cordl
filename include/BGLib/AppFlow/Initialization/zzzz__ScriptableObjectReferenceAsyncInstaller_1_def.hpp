#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScriptableObjectReferenceAsyncInstaller_1)
namespace BGLib::AppFlow::Initialization {
class __AsyncInstaller__IInstallerRegistry;
}
namespace BGLib::AppFlow::Initialization {
template <typename T> struct __ScriptableObjectReferenceAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__3;
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
namespace UnityEngine::AddressableAssets {
template <typename TObject> class AssetReferenceT_1;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace BGLib::AppFlow::Initialization {
template <typename T> class ScriptableObjectReferenceAsyncInstaller_1;
}
namespace BGLib::AppFlow::Initialization {
template <typename T> struct __ScriptableObjectReferenceAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1);
MARK_GEN_VAL_T(::BGLib::AppFlow::Initialization::__ScriptableObjectReferenceAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__3);
// Type: ::<LoadResourcesBeforeInstallAsync>d__3
// SizeInfo { instance_size: 48, native_size: 64, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::AppFlow::Initialization {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::ScriptableObjectReferenceAsyncInstaller`1::<LoadResourcesBeforeInstallAsync>d__3<T>
struct CORDL_TYPE __ScriptableObjectReferenceAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__3 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ScriptableObjectReferenceAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__3();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<T>", modifiers: "", def_value: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<T>", modifiers: "", def_value: None }]
  constexpr __ScriptableObjectReferenceAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__3(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                               ::UnityW<T> __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<T> __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace BGLib::AppFlow::Initialization
// Type: BGLib.AppFlow.Initialization::ScriptableObjectReferenceAsyncInstaller`1
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::AppFlow::Initialization {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::BGLib.AppFlow.Initialization::ScriptableObjectReferenceAsyncInstaller`1<T>*
class CORDL_TYPE ScriptableObjectReferenceAsyncInstaller_1 : public ::BGLib::AppFlow::Initialization::AsyncInstaller {
public:
  // Declarations
  using _LoadResourcesBeforeInstallAsync_d__3 = ::BGLib::AppFlow::Initialization::__ScriptableObjectReferenceAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__3<T>;

  /// @brief Field _assetReference, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__assetReference, put = __cordl_internal_set__assetReference))::UnityEngine::AddressableAssets::AssetReferenceT_1<T>* _assetReference;

  /// @brief Field _instance, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__instance, put = __cordl_internal_set__instance)) T _instance;

  /// @brief Method InstallBindings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method LoadResourcesBeforeInstall, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void LoadResourcesBeforeInstall(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry, ::Zenject::DiContainer* _);

  /// @brief Method LoadResourcesBeforeInstallAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* LoadResourcesBeforeInstallAsync(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry, ::Zenject::DiContainer* _);

  static inline ::BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1<T>* New_ctor();

  constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<T>*& __cordl_internal_get__assetReference();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReferenceT_1<T>*> const& __cordl_internal_get__assetReference() const;

  constexpr T const& __cordl_internal_get__instance() const;

  constexpr T& __cordl_internal_get__instance();

  constexpr void __cordl_internal_set__assetReference(::UnityEngine::AddressableAssets::AssetReferenceT_1<T>* value);

  constexpr void __cordl_internal_set__instance(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableObjectReferenceAsyncInstaller_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectReferenceAsyncInstaller_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableObjectReferenceAsyncInstaller_1(ScriptableObjectReferenceAsyncInstaller_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectReferenceAsyncInstaller_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableObjectReferenceAsyncInstaller_1(ScriptableObjectReferenceAsyncInstaller_1 const&) = delete;

  /// @brief Field _assetReference, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReferenceT_1<T>* ____assetReference;

  /// @brief Field _instance, offset: 0x28, size: 0x8, def value: None
  T ____instance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGLib::AppFlow::Initialization
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1, "BGLib.AppFlow.Initialization", "ScriptableObjectReferenceAsyncInstaller`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::BGLib::AppFlow::Initialization::__ScriptableObjectReferenceAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__3, "BGLib.AppFlow.Initialization",
                                      "ScriptableObjectReferenceAsyncInstaller`1/<LoadResourcesBeforeInstallAsync>d__3");
