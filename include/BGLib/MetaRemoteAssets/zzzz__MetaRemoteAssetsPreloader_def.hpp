#pragma once
// IWYU pragma private; include "BGLib/MetaRemoteAssets/MetaRemoteAssetsPreloader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AsyncPreloader_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MetaRemoteAssetsPreloader)
namespace BGLib::MetaRemoteAssets {
struct MetaRemoteAssetsPreloader__PreloadAsync_d__0;
}
namespace BGLib::MetaRemoteAssets {
class MetaRemoteAssetsPreloader___c;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class IResourceLocator;
}
// Forward declare root types
namespace BGLib::MetaRemoteAssets {
class MetaRemoteAssetsPreloader;
}
namespace BGLib::MetaRemoteAssets {
class MetaRemoteAssetsPreloader___c;
}
namespace BGLib::MetaRemoteAssets {
struct MetaRemoteAssetsPreloader__PreloadAsync_d__0;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader);
MARK_REF_PTR_T(::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c);
MARK_VAL_T(::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__0);
// Dependencies System.Object
namespace BGLib::MetaRemoteAssets {
// Is value type: false
// CS Name: BGLib.MetaRemoteAssets.MetaRemoteAssetsPreloader/<>c
class CORDL_TYPE MetaRemoteAssetsPreloader___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0)) ::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, bool>* __9__0_0;

  static inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c* New_ctor();

  /// @brief Method <PreloadAsync>b__0_0, addr 0x22aa914, size 0xd8, virtual false, abstract: false, final false
  inline bool _PreloadAsync_b__0_0(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator* locator);

  /// @brief Method .ctor, addr 0x22aa90c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, bool>* getStaticF___9__0_0();

  static inline void setStaticF___9(::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c* value);

  static inline void setStaticF___9__0_0(::System::Func_2<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaRemoteAssetsPreloader___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetaRemoteAssetsPreloader___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetaRemoteAssetsPreloader___c(MetaRemoteAssetsPreloader___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetaRemoteAssetsPreloader___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetaRemoteAssetsPreloader___c(MetaRemoteAssetsPreloader___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18365 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c, 0x10>, "Size mismatch!");

} // namespace BGLib::MetaRemoteAssets
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace BGLib::MetaRemoteAssets {
// Is value type: true
// CS Name: BGLib.MetaRemoteAssets.MetaRemoteAssetsPreloader/<PreloadAsync>d__0
struct CORDL_TYPE MetaRemoteAssetsPreloader__PreloadAsync_d__0 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22aa9ec, size 0x458, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22aae44, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaRemoteAssetsPreloader__PreloadAsync_d__0();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>", modifiers: "", def_value: None }]
  constexpr MetaRemoteAssetsPreloader__PreloadAsync_d__0(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                         ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18366 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__0, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__0, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__0, __u__1) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__0, 0x28>, "Size mismatch!");

} // namespace BGLib::MetaRemoteAssets
// Dependencies BGLib.AppFlow.Initialization.AsyncPreloader
namespace BGLib::MetaRemoteAssets {
// Is value type: false
// CS Name: BGLib.MetaRemoteAssets.MetaRemoteAssetsPreloader
class CORDL_TYPE MetaRemoteAssetsPreloader : public ::BGLib::AppFlow::Initialization::AsyncPreloader {
public:
  // Declarations
  using _PreloadAsync_d__0 = ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__0;

  using __c = ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c;

  static inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader* New_ctor();

  /// @brief Method PreloadAsync, addr 0x22aa7ec, size 0xbc, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* PreloadAsync();

  /// @brief Method .ctor, addr 0x22aa8a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaRemoteAssetsPreloader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetaRemoteAssetsPreloader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetaRemoteAssetsPreloader(MetaRemoteAssetsPreloader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetaRemoteAssetsPreloader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetaRemoteAssetsPreloader(MetaRemoteAssetsPreloader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18367 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader, 0x28>, "Size mismatch!");

} // namespace BGLib::MetaRemoteAssets
NEED_NO_BOX(::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader*, "BGLib.MetaRemoteAssets", "MetaRemoteAssetsPreloader");
NEED_NO_BOX(::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader___c*, "BGLib.MetaRemoteAssets", "MetaRemoteAssetsPreloader/<>c");
DEFINE_IL2CPP_ARG_TYPE(::BGLib::MetaRemoteAssets::MetaRemoteAssetsPreloader__PreloadAsync_d__0, "BGLib.MetaRemoteAssets", "MetaRemoteAssetsPreloader/<PreloadAsync>d__0");
