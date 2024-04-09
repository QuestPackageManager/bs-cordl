#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpriteAsyncLoader)
namespace BGLib::DotnetExtension::Collections {
template <typename TKey, typename TValue> class LRUCache_2;
}
namespace GlobalNamespace {
struct __SpriteAsyncLoader___LoadSpriteAsyncInternal_d__4;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class SpriteAsyncLoader;
}
namespace GlobalNamespace {
struct __SpriteAsyncLoader___LoadSpriteAsyncInternal_d__4;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SpriteAsyncLoader);
MARK_VAL_T(::GlobalNamespace::__SpriteAsyncLoader___LoadSpriteAsyncInternal_d__4);
// Type: ::<LoadSpriteAsyncInternal>d__4
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SpriteAsyncLoader::<LoadSpriteAsyncInternal>d__4
struct CORDL_TYPE __SpriteAsyncLoader___LoadSpriteAsyncInternal_d__4 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x265a4a8, size 0x250, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x265a6f8, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SpriteAsyncLoader___LoadSpriteAsyncInternal_d__4();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::UnityEngine::Sprite>>", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::SpriteAsyncLoader*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>>",
  // modifiers: "", def_value: None }]
  constexpr __SpriteAsyncLoader___LoadSpriteAsyncInternal_d__4(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::UnityEngine::Sprite>> __t__builder,
                                                               ::StringW path, ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::SpriteAsyncLoader* __4__this,
                                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::UnityEngine::Sprite>> __t__builder;

  /// @brief Field path, offset: 0x20, size: 0x8, def value: None
  ::StringW path;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::SpriteAsyncLoader* __4__this;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Sprite>> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SpriteAsyncLoader___LoadSpriteAsyncInternal_d__4, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SpriteAsyncLoader___LoadSpriteAsyncInternal_d__4, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SpriteAsyncLoader___LoadSpriteAsyncInternal_d__4, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SpriteAsyncLoader___LoadSpriteAsyncInternal_d__4, path) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SpriteAsyncLoader___LoadSpriteAsyncInternal_d__4, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SpriteAsyncLoader___LoadSpriteAsyncInternal_d__4, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SpriteAsyncLoader___LoadSpriteAsyncInternal_d__4, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SpriteAsyncLoader
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SpriteAsyncLoader*
class CORDL_TYPE SpriteAsyncLoader : public ::System::Object {
public:
  // Declarations
  using _LoadSpriteAsyncInternal_d__4 = ::GlobalNamespace::__SpriteAsyncLoader___LoadSpriteAsyncInternal_d__4;

  /// @brief Field _cache, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__cache, put = __cordl_internal_set__cache))::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::UnityW<::UnityEngine::Sprite>>* _cache;

  /// @brief Field _loadingTasks, offset 0x18, size 0x8
  __declspec(
      property(get = __cordl_internal_get__loadingTasks,
               put = __cordl_internal_set__loadingTasks))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*>* _loadingTasks;

  /// @brief Method ClearCache, addr 0x265a394, size 0x50, virtual false, abstract: false, final false
  inline void ClearCache();

  /// @brief Method LoadSpriteAsync, addr 0x265a140, size 0x150, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>* LoadSpriteAsync(::StringW path, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method LoadSpriteAsyncInternal, addr 0x265a290, size 0x104, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>* LoadSpriteAsyncInternal(::StringW path, ::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::SpriteAsyncLoader* New_ctor();

  constexpr ::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::UnityW<::UnityEngine::Sprite>>*& __cordl_internal_get__cache();

  constexpr ::cordl_internals::to_const_pointer<::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::UnityW<::UnityEngine::Sprite>>*> const& __cordl_internal_get__cache() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*>*& __cordl_internal_get__loadingTasks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*>*> const&
  __cordl_internal_get__loadingTasks() const;

  constexpr void __cordl_internal_set__cache(::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::UnityW<::UnityEngine::Sprite>>* value);

  constexpr void __cordl_internal_set__loadingTasks(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*>* value);

  /// @brief Method .ctor, addr 0x265a3e4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

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

  /// @brief Field _cache, offset: 0x10, size: 0x8, def value: None
  ::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::UnityW<::UnityEngine::Sprite>>* ____cache;

  /// @brief Field _loadingTasks, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*>* ____loadingTasks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpriteAsyncLoader, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteAsyncLoader, ____cache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpriteAsyncLoader, ____loadingTasks) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SpriteAsyncLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpriteAsyncLoader*, "", "SpriteAsyncLoader");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SpriteAsyncLoader___LoadSpriteAsyncInternal_d__4, "", "SpriteAsyncLoader/<LoadSpriteAsyncInternal>d__4");
