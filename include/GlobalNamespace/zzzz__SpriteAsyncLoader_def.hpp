#pragma once
// IWYU pragma private; include "GlobalNamespace/SpriteAsyncLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpriteAsyncLoader)
namespace BGLib::DotnetExtension::Collections {
template <typename TKey, typename TValue> class LRUCache_2;
}
namespace GlobalNamespace {
template <typename TKey, typename TValue> class IReferenceCountingCache_2;
}
namespace GlobalNamespace {
template <typename TKey, typename TValue> class ReferenceCountingCache_2;
}
namespace GlobalNamespace {
struct SpriteAsyncLoader__DestroySpriteTask_d__10;
}
namespace GlobalNamespace {
struct SpriteAsyncLoader__UnloadSprite_d__9;
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
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class SpriteAsyncLoader;
}
namespace GlobalNamespace {
struct SpriteAsyncLoader__DestroySpriteTask_d__10;
}
namespace GlobalNamespace {
struct SpriteAsyncLoader__UnloadSprite_d__9;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SpriteAsyncLoader);
MARK_VAL_T(::GlobalNamespace::SpriteAsyncLoader__DestroySpriteTask_d__10);
MARK_VAL_T(::GlobalNamespace::SpriteAsyncLoader__UnloadSprite_d__9);
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: SpriteAsyncLoader/<DestroySpriteTask>d__10
struct CORDL_TYPE SpriteAsyncLoader__DestroySpriteTask_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3c26cbc, size 0x288, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3c26f44, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SpriteAsyncLoader__DestroySpriteTask_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "spriteTask", ty:
  // "::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SpriteAsyncLoader*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>>", modifiers: "", def_value: None }]
  constexpr SpriteAsyncLoader__DestroySpriteTask_d__10(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                       ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>* spriteTask, ::GlobalNamespace::SpriteAsyncLoader* __4__this,
                                                       ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18597 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field spriteTask, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>* spriteTask;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::SpriteAsyncLoader* __4__this;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpriteAsyncLoader__DestroySpriteTask_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteAsyncLoader__DestroySpriteTask_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteAsyncLoader__DestroySpriteTask_d__10, spriteTask) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteAsyncLoader__DestroySpriteTask_d__10, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteAsyncLoader__DestroySpriteTask_d__10, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpriteAsyncLoader__DestroySpriteTask_d__10, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: SpriteAsyncLoader/<UnloadSprite>d__9
struct CORDL_TYPE SpriteAsyncLoader__UnloadSprite_d__9 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3c26f50, size 0x434, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3c27384, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SpriteAsyncLoader__UnloadSprite_d__9();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "cache", ty:
  // "::GlobalNamespace::IReferenceCountingCache_2<::StringW,::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*>*", modifiers: "", def_value: None }, CppParam { name: "path", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SpriteAsyncLoader*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>>", modifiers: "", def_value: None }]
  constexpr SpriteAsyncLoader__UnloadSprite_d__9(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                 ::GlobalNamespace::IReferenceCountingCache_2<::StringW, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*>* cache, ::StringW path,
                                                 ::GlobalNamespace::SpriteAsyncLoader* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18598 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field cache, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IReferenceCountingCache_2<::StringW, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*>* cache;

  /// @brief Field path, offset: 0x30, size: 0x8, def value: None
  ::StringW path;

  /// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::SpriteAsyncLoader* __4__this;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpriteAsyncLoader__UnloadSprite_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteAsyncLoader__UnloadSprite_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteAsyncLoader__UnloadSprite_d__9, cache) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteAsyncLoader__UnloadSprite_d__9, path) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteAsyncLoader__UnloadSprite_d__9, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteAsyncLoader__UnloadSprite_d__9, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpriteAsyncLoader__UnloadSprite_d__9, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpriteAsyncLoader
class CORDL_TYPE SpriteAsyncLoader : public ::System::Object {
public:
  // Declarations
  using _DestroySpriteTask_d__10 = ::GlobalNamespace::SpriteAsyncLoader__DestroySpriteTask_d__10;

  using _UnloadSprite_d__9 = ::GlobalNamespace::SpriteAsyncLoader__UnloadSprite_d__9;

  /// @brief Field _destroyFunc, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__destroyFunc, put = __cordl_internal_set__destroyFunc)) ::System::Action_1<::UnityW<::UnityEngine::Sprite>>* _destroyFunc;

  /// @brief Field _loadFunc, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get__loadFunc,
      put = __cordl_internal_set__loadFunc)) ::System::Func_3<::StringW, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*>* _loadFunc;

  /// @brief Field _lruCache, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__lruCache, put = __cordl_internal_set__lruCache)) ::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::StringW>* _lruCache;

  /// @brief Field _referenceCountingCache, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__referenceCountingCache,
                      put = __cordl_internal_set__referenceCountingCache)) ::GlobalNamespace::ReferenceCountingCache_2<::StringW, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*>*
      _referenceCountingCache;

  /// @brief Method ClearCache, addr 0x3c26804, size 0x360, virtual false, abstract: false, final false
  inline void ClearCache();

  /// @brief Method DestroySprite, addr 0x3c26c0c, size 0xb0, virtual false, abstract: false, final false
  static inline void DestroySprite(::UnityEngine::Sprite* sprite);

  /// @brief Method DestroySpriteTask, addr 0x3c26b64, size 0x98, virtual false, abstract: false, final false
  inline void DestroySpriteTask(::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>* spriteTask);

  /// @brief Method HandleItemWillBeRemovedFromCache, addr 0x3c26bfc, size 0x10, virtual false, abstract: false, final false
  inline void HandleItemWillBeRemovedFromCache(::StringW path, ::StringW _);

  /// @brief Method LoadSpriteAsync, addr 0x3c265e4, size 0x16c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>* LoadSpriteAsync(::StringW path);

  static inline ::GlobalNamespace::SpriteAsyncLoader*
  New_ctor(::System::Func_3<::StringW, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*>* loadFunc,
           ::System::Action_1<::UnityW<::UnityEngine::Sprite>>* destroyFunc, int32_t cacheSize);

  /// @brief Method UnloadSprite, addr 0x3c26760, size 0xa4, virtual false, abstract: false, final false
  inline void UnloadSprite(::GlobalNamespace::IReferenceCountingCache_2<::StringW, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*>* cache, ::StringW path);

  /// @brief Method UnloadSprite, addr 0x3c26750, size 0x10, virtual false, abstract: false, final false
  inline void UnloadSprite(::StringW path);

  constexpr ::System::Action_1<::UnityW<::UnityEngine::Sprite>>* const& __cordl_internal_get__destroyFunc() const;

  constexpr ::System::Action_1<::UnityW<::UnityEngine::Sprite>>*& __cordl_internal_get__destroyFunc();

  constexpr ::System::Func_3<::StringW, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*>* const& __cordl_internal_get__loadFunc() const;

  constexpr ::System::Func_3<::StringW, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*>*& __cordl_internal_get__loadFunc();

  constexpr ::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::StringW>* const& __cordl_internal_get__lruCache() const;

  constexpr ::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::StringW>*& __cordl_internal_get__lruCache();

  constexpr ::GlobalNamespace::ReferenceCountingCache_2<::StringW, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*>* const& __cordl_internal_get__referenceCountingCache() const;

  constexpr ::GlobalNamespace::ReferenceCountingCache_2<::StringW, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*>*& __cordl_internal_get__referenceCountingCache();

  constexpr void __cordl_internal_set__destroyFunc(::System::Action_1<::UnityW<::UnityEngine::Sprite>>* value);

  constexpr void __cordl_internal_set__loadFunc(::System::Func_3<::StringW, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*>* value);

  constexpr void __cordl_internal_set__lruCache(::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__referenceCountingCache(::GlobalNamespace::ReferenceCountingCache_2<::StringW, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*>* value);

  /// @brief Method .ctor, addr 0x3c2648c, size 0x158, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_3<::StringW, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*>* loadFunc,
                    ::System::Action_1<::UnityW<::UnityEngine::Sprite>>* destroyFunc, int32_t cacheSize);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpriteAsyncLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpriteAsyncLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpriteAsyncLoader(SpriteAsyncLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpriteAsyncLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpriteAsyncLoader(SpriteAsyncLoader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18599 };

  /// @brief Field _lruCache, offset: 0x10, size: 0x8, def value: None
  ::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::StringW>* ____lruCache;

  /// @brief Field _referenceCountingCache, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ReferenceCountingCache_2<::StringW, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*>* ____referenceCountingCache;

  /// @brief Field _loadFunc, offset: 0x20, size: 0x8, def value: None
  ::System::Func_3<::StringW, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*>* ____loadFunc;

  /// @brief Field _destroyFunc, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::UnityEngine::Sprite>>* ____destroyFunc;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpriteAsyncLoader, ____lruCache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteAsyncLoader, ____referenceCountingCache) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteAsyncLoader, ____loadFunc) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteAsyncLoader, ____destroyFunc) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpriteAsyncLoader, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SpriteAsyncLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpriteAsyncLoader*, "", "SpriteAsyncLoader");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpriteAsyncLoader__DestroySpriteTask_d__10, "", "SpriteAsyncLoader/<DestroySpriteTask>d__10");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpriteAsyncLoader__UnloadSprite_d__9, "", "SpriteAsyncLoader/<UnloadSprite>d__9");
