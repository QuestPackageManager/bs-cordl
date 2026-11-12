#pragma once
// IWYU pragma private; include "GlobalNamespace/GameLoader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameLoader)
namespace GlobalNamespace {
struct GameLoader__Start_d__4;
}
namespace GlobalNamespace {
class GameLoader___c;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
struct DateTime;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace Zenject {
class SceneContext;
}
// Forward declare root types
namespace GlobalNamespace {
class GameLoader;
}
namespace GlobalNamespace {
class GameLoader___c;
}
namespace GlobalNamespace {
struct GameLoader__Start_d__4;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameLoader*);
MARK_REF_T(::GlobalNamespace::GameLoader___c*);
MARK_VAL_T(::GlobalNamespace::GameLoader__Start_d__4);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameLoader*, "", "GameLoader");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameLoader___c*, "", "GameLoader/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameLoader__Start_d__4, "", "GameLoader/<Start>d__4");
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameLoader/<>c
class CORDL_TYPE GameLoader___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::GameLoader___c* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0)) ::System::Func_1<::System::DateTime>* __9__5_0;

  /// @brief Field <>9__5_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_1, put = setStaticF___9__5_1)) ::System::Func_1<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*>* __9__5_1;

  static inline ::GlobalNamespace::GameLoader___c* New_ctor();

  /// @brief Method <PrewarmSlowFirstCallsInBackground>b__5_0, addr 0x3a28f9c, size 0x54, virtual false, abstract: false, final false
  inline ::System::DateTime _PrewarmSlowFirstCallsInBackground_b__5_0();

  /// @brief Method <PrewarmSlowFirstCallsInBackground>b__5_1, addr 0x3a28ff0, size 0x88, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* _PrewarmSlowFirstCallsInBackground_b__5_1();

  /// @brief Method .ctor, addr 0x3a28f98, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::GameLoader___c* getStaticF___9();

  static inline ::System::Func_1<::System::DateTime>* getStaticF___9__5_0();

  static inline ::System::Func_1<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*>* getStaticF___9__5_1();

  static inline void setStaticF___9(::GlobalNamespace::GameLoader___c* value);

  static inline void setStaticF___9__5_0(::System::Func_1<::System::DateTime>* value);

  static inline void setStaticF___9__5_1(::System::Func_1<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameLoader___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameLoader___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameLoader___c(GameLoader___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameLoader___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameLoader___c(GameLoader___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21829 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GameLoader___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>,
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>, UnityEngine.ResourceManagement.ResourceProviders.SceneInstance
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameLoader/<Start>d__4
struct CORDL_TYPE GameLoader__Start_d__4 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3a29078, size 0x450, virtual true, abstract: false, final true
  inline void MoveNext();

  /// [DebuggerHidden]
  /// @brief Method SetStateMachine, addr 0x3a294c8, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GameLoader__Start_d__4();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::GameLoader>",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "_appInitHandle_5__2", ty:
  // "::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>", modifiers: "", def_value: None, comment:
  // None }]
  constexpr GameLoader__Start_d__4(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::GameLoader> __4__this,
                                   ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> _appInitHandle_5__2,
                                   ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21830 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameLoader> __4__this;

  /// @brief Field <appInitHandle>5__2, offset: 0x30, size: 0x18, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> _appInitHandle_5__2;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameLoader__Start_d__4, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLoader__Start_d__4, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLoader__Start_d__4, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLoader__Start_d__4, _appInitHandle_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLoader__Start_d__4, __u__1) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameLoader__Start_d__4) == 0x50, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>, UnityEngine.ResourceManagement.ResourceProviders.SceneInstance
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameLoader
class CORDL_TYPE GameLoader : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _Start_d__4 = ::GlobalNamespace::GameLoader__Start_d__4;

  using __c = ::GlobalNamespace::GameLoader___c;

  /// @brief Field _context, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__context, put = __cordl_internal_set__context)) ::UnityW<::Zenject::SceneContext> _context;

  /// @brief Field _handle, offset 0x28, size 0x18
  __declspec(property(get = __cordl_internal_get__handle,
                      put =
                          __cordl_internal_set__handle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>
      _handle;

  /// @brief Method Awake, addr 0x3a28ad4, size 0x64, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleSceneContextPostInstall, addr 0x3a28dc0, size 0x180, virtual false, abstract: false, final false
  inline void HandleSceneContextPostInstall();

  static inline ::GlobalNamespace::GameLoader* New_ctor();

  /// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)4)]
  /// @brief Method PrewarmSlowFirstCallsInBackground, addr 0x3a28bdc, size 0x1e4, virtual false, abstract: false, final false
  static inline void PrewarmSlowFirstCallsInBackground();

  /// [AsyncStateMachine(typeof(GameLoader::<Start>d__4))]
  /// @brief Method Start, addr 0x3a28b38, size 0xa4, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::Zenject::SceneContext> const& __cordl_internal_get__context() const;

  constexpr ::UnityW<::Zenject::SceneContext>& __cordl_internal_get__context();

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> const& __cordl_internal_get__handle() const;

  constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>& __cordl_internal_get__handle();

  constexpr void __cordl_internal_set__context(::UnityW<::Zenject::SceneContext> value);

  constexpr void __cordl_internal_set__handle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> value);

  /// @brief Method .ctor, addr 0x3a28f40, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameLoader", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameLoader(GameLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameLoader", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameLoader(GameLoader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21831 };

  /// @brief Field kInitSceneAssetLabel offset 0xffffffff size 0x8
  static constexpr ::ConstString kInitSceneAssetLabel{ u"AppInit" };

  /// @brief Field _context, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Zenject::SceneContext> ____context;

  /// @brief Field _handle, offset: 0x28, size: 0x18, def value: None
  ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> ____handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameLoader, ____context) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLoader, ____handle) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameLoader) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
