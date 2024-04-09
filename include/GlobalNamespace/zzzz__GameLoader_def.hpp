#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameLoader)
namespace GlobalNamespace {
struct __GameLoader___Start_d__3;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
namespace Zenject {
class SceneContext;
}
// Forward declare root types
namespace GlobalNamespace {
class GameLoader;
}
namespace GlobalNamespace {
struct __GameLoader___Start_d__3;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameLoader);
MARK_VAL_T(::GlobalNamespace::__GameLoader___Start_d__3);
// Type: ::<Start>d__3
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::GameLoader::<Start>d__3
struct CORDL_TYPE __GameLoader___Start_d__3 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2500464, size 0x33c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x25007a0, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameLoader___Start_d__3();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::GameLoader>", modifiers: "",
  // def_value: None }, CppParam { name: "_handle_5__2", ty:
  // "::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>", modifiers: "", def_value: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>", modifiers: "", def_value: None }]
  constexpr __GameLoader___Start_d__3(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::GameLoader> __4__this,
                                      ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> _handle_5__2,
                                      ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameLoader> __4__this;

  /// @brief Field <handle>5__2, offset: 0x30, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> _handle_5__2;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameLoader___Start_d__3, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLoader___Start_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLoader___Start_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLoader___Start_d__3, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLoader___Start_d__3, _handle_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameLoader___Start_d__3, __u__1) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GameLoader
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameLoader*
class CORDL_TYPE GameLoader : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _Start_d__3 = ::GlobalNamespace::__GameLoader___Start_d__3;

  /// @brief Field _context, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__context, put = __cordl_internal_set__context))::UnityW<::Zenject::SceneContext> _context;

  /// @brief Field _handle, offset 0x20, size 0x20
  __declspec(property(
      get = __cordl_internal_get__handle,
      put = __cordl_internal_set__handle))::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> _handle;

  /// @brief Method HandleSceneContextPostInstall, addr 0x2500330, size 0x12c, virtual false, abstract: false, final false
  inline void HandleSceneContextPostInstall();

  static inline ::GlobalNamespace::GameLoader* New_ctor();

  /// @brief Method Start, addr 0x2500298, size 0x98, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::Zenject::SceneContext> const& __cordl_internal_get__context() const;

  constexpr ::UnityW<::Zenject::SceneContext>& __cordl_internal_get__context();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> const& __cordl_internal_get__handle() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>& __cordl_internal_get__handle();

  constexpr void __cordl_internal_set__context(::UnityW<::Zenject::SceneContext> value);

  constexpr void __cordl_internal_set__handle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> value);

  /// @brief Method .ctor, addr 0x250045c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameLoader(GameLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameLoader(GameLoader const&) = delete;

  /// @brief Field _context, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::Zenject::SceneContext> ____context;

  /// @brief Field _handle, offset: 0x20, size: 0x20, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> ____handle;

  /// @brief Field kInitSceneAssetLabel offset 0xffffffff size 0x8
  static constexpr ::ConstString kInitSceneAssetLabel{ u"AppInit" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameLoader, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLoader, ____context) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLoader, ____handle) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameLoader*, "", "GameLoader");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameLoader___Start_d__3, "", "GameLoader/<Start>d__3");
