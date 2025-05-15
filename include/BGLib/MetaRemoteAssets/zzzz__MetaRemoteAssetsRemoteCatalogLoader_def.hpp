#pragma once
// IWYU pragma private; include "BGLib/MetaRemoteAssets/MetaRemoteAssetsRemoteCatalogLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/MetaRemoteAssets/zzzz__IRemoteCatalogLoader_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MetaRemoteAssetsRemoteCatalogLoader)
namespace BGLib::MetaRemoteAssets {
struct MetaRemoteAssetsRemoteCatalogLoader__LoadRemoteCatalogAsync_d__0;
}
namespace BGLib::MetaRemoteAssets {
class MetaRemoteAssetsRemoteCatalogLoader___c;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
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
// Forward declare root types
namespace BGLib::MetaRemoteAssets {
class MetaRemoteAssetsRemoteCatalogLoader;
}
namespace BGLib::MetaRemoteAssets {
class MetaRemoteAssetsRemoteCatalogLoader___c;
}
namespace BGLib::MetaRemoteAssets {
struct MetaRemoteAssetsRemoteCatalogLoader__LoadRemoteCatalogAsync_d__0;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader);
MARK_REF_PTR_T(::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader___c);
MARK_VAL_T(::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader__LoadRemoteCatalogAsync_d__0);
// Dependencies System.Object
namespace BGLib::MetaRemoteAssets {
// Is value type: false
// CS Name: BGLib.MetaRemoteAssets.MetaRemoteAssetsRemoteCatalogLoader/<>c
class CORDL_TYPE MetaRemoteAssetsRemoteCatalogLoader___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader___c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0)) ::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, bool>* __9__0_0;

  static inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader___c* New_ctor();

  /// @brief Method <LoadRemoteCatalogAsync>b__0_0, addr 0x22aafac, size 0xd8, virtual false, abstract: false, final false
  inline bool _LoadRemoteCatalogAsync_b__0_0(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* locator);

  /// @brief Method .ctor, addr 0x22aafa4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, bool>* getStaticF___9__0_0();

  static inline void setStaticF___9(::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader___c* value);

  static inline void setStaticF___9__0_0(::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaRemoteAssetsRemoteCatalogLoader___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetaRemoteAssetsRemoteCatalogLoader___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetaRemoteAssetsRemoteCatalogLoader___c(MetaRemoteAssetsRemoteCatalogLoader___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetaRemoteAssetsRemoteCatalogLoader___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetaRemoteAssetsRemoteCatalogLoader___c(MetaRemoteAssetsRemoteCatalogLoader___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18368 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader___c, 0x10>, "Size mismatch!");

} // namespace BGLib::MetaRemoteAssets
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace BGLib::MetaRemoteAssets {
// Is value type: true
// CS Name: BGLib.MetaRemoteAssets.MetaRemoteAssetsRemoteCatalogLoader/<LoadRemoteCatalogAsync>d__0
struct CORDL_TYPE MetaRemoteAssetsRemoteCatalogLoader__LoadRemoteCatalogAsync_d__0 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22ab084, size 0x4c4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22ab548, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaRemoteAssetsRemoteCatalogLoader__LoadRemoteCatalogAsync_d__0();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>", modifiers: "", def_value: None }]
  constexpr MetaRemoteAssetsRemoteCatalogLoader__LoadRemoteCatalogAsync_d__0(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18369 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder;

  /// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader__LoadRemoteCatalogAsync_d__0, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader__LoadRemoteCatalogAsync_d__0, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader__LoadRemoteCatalogAsync_d__0, __u__1) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader__LoadRemoteCatalogAsync_d__0, 0x28>, "Size mismatch!");

} // namespace BGLib::MetaRemoteAssets
// Dependencies BGLib.MetaRemoteAssets.IRemoteCatalogLoader, System.Object
namespace BGLib::MetaRemoteAssets {
// Is value type: false
// CS Name: BGLib.MetaRemoteAssets.MetaRemoteAssetsRemoteCatalogLoader
class CORDL_TYPE MetaRemoteAssetsRemoteCatalogLoader : public ::System::Object {
public:
  // Declarations
  using _LoadRemoteCatalogAsync_d__0 = ::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader__LoadRemoteCatalogAsync_d__0;

  using __c = ::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader___c;

  /// @brief Convert operator to "::BGLib::MetaRemoteAssets::IRemoteCatalogLoader"
  constexpr operator ::BGLib::MetaRemoteAssets::IRemoteCatalogLoader*() noexcept;

  /// @brief Method LoadRemoteCatalogAsync, addr 0x22aae5c, size 0xe4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<bool>* LoadRemoteCatalogAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader* New_ctor();

  /// @brief Method .ctor, addr 0x22aaf40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::BGLib::MetaRemoteAssets::IRemoteCatalogLoader"
  constexpr ::BGLib::MetaRemoteAssets::IRemoteCatalogLoader* i___BGLib__MetaRemoteAssets__IRemoteCatalogLoader() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaRemoteAssetsRemoteCatalogLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetaRemoteAssetsRemoteCatalogLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetaRemoteAssetsRemoteCatalogLoader(MetaRemoteAssetsRemoteCatalogLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetaRemoteAssetsRemoteCatalogLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetaRemoteAssetsRemoteCatalogLoader(MetaRemoteAssetsRemoteCatalogLoader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18370 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader, 0x10>, "Size mismatch!");

} // namespace BGLib::MetaRemoteAssets
NEED_NO_BOX(::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader*, "BGLib.MetaRemoteAssets", "MetaRemoteAssetsRemoteCatalogLoader");
NEED_NO_BOX(::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader___c);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader___c*, "BGLib.MetaRemoteAssets", "MetaRemoteAssetsRemoteCatalogLoader/<>c");
DEFINE_IL2CPP_ARG_TYPE(::BGLib::MetaRemoteAssets::MetaRemoteAssetsRemoteCatalogLoader__LoadRemoteCatalogAsync_d__0, "BGLib.MetaRemoteAssets",
                       "MetaRemoteAssetsRemoteCatalogLoader/<LoadRemoteCatalogAsync>d__0");
