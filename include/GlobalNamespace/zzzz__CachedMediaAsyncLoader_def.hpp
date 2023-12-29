#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CachedMediaAsyncLoader)
namespace GlobalNamespace {
template <typename TKey, typename TValue> class AsyncCachedLoader_2;
}
namespace GlobalNamespace {
struct __CachedMediaAsyncLoader___LoadSpriteAsync_d__3;
}
namespace GlobalNamespace {
class ISpriteAsyncLoader;
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
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
// Forward declare root types
namespace GlobalNamespace {
class CachedMediaAsyncLoader;
}
namespace GlobalNamespace {
struct __CachedMediaAsyncLoader___LoadSpriteAsync_d__3;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CachedMediaAsyncLoader);
MARK_VAL_T(::GlobalNamespace::__CachedMediaAsyncLoader___LoadSpriteAsync_d__3);
// Type: ::<LoadSpriteAsync>d__3
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2675)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 765 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(3389)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3389), inst: 765 }),
// TypeDefinitionIndex(TypeDefinitionIndex(10213))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6001)) CS Name: ::CachedMediaAsyncLoader::<LoadSpriteAsync>d__3
struct CORDL_TYPE __CachedMediaAsyncLoader___LoadSpriteAsync_d__3 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x21b5484 size 0x2c0 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x21b5744 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::CachedMediaAsyncLoader*", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken",
  // ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>",
  // modifiers: "", def_value: None }]
  constexpr __CachedMediaAsyncLoader___LoadSpriteAsync_d__3(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*> __t__builder,
                                                            ::GlobalNamespace::CachedMediaAsyncLoader* __4__this, ::StringW path, ::System::Threading::CancellationToken cancellationToken,
                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CachedMediaAsyncLoader___LoadSpriteAsync_d__3();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::CachedMediaAsyncLoader* __4__this;

  /// @brief Field path, offset: 0x28, size: 0x8, def value: None
  ::StringW path;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CachedMediaAsyncLoader___LoadSpriteAsync_d__3, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__CachedMediaAsyncLoader___LoadSpriteAsync_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CachedMediaAsyncLoader___LoadSpriteAsync_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CachedMediaAsyncLoader___LoadSpriteAsync_d__3, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CachedMediaAsyncLoader___LoadSpriteAsync_d__3, path) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CachedMediaAsyncLoader___LoadSpriteAsync_d__3, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CachedMediaAsyncLoader___LoadSpriteAsync_d__3, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::CachedMediaAsyncLoader
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6002))
// CS Name: ::CachedMediaAsyncLoader*
class CORDL_TYPE CachedMediaAsyncLoader : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _LoadSpriteAsync_d__3 = ::GlobalNamespace::__CachedMediaAsyncLoader___LoadSpriteAsync_d__3;

  /// @brief Field _maxNumberOfSpriteCachedElements, offset 0x18, size 0x4
  __declspec(property(get = __get__maxNumberOfSpriteCachedElements, put = __set__maxNumberOfSpriteCachedElements)) int32_t _maxNumberOfSpriteCachedElements;

  /// @brief Field _spriteAsyncCachedLoader, offset 0x20, size 0x8
  __declspec(property(get = __get__spriteAsyncCachedLoader, put = __set__spriteAsyncCachedLoader))::GlobalNamespace::AsyncCachedLoader_2<::StringW, ::UnityEngine::Sprite*>* _spriteAsyncCachedLoader;

  /// @brief Convert operator to "::GlobalNamespace::ISpriteAsyncLoader"
  constexpr operator ::GlobalNamespace::ISpriteAsyncLoader*() noexcept;

  constexpr int32_t& __get__maxNumberOfSpriteCachedElements();

  constexpr int32_t const& __get__maxNumberOfSpriteCachedElements() const;

  constexpr void __set__maxNumberOfSpriteCachedElements(int32_t value);

  constexpr ::GlobalNamespace::AsyncCachedLoader_2<::StringW, ::UnityEngine::Sprite*>*& __get__spriteAsyncCachedLoader();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AsyncCachedLoader_2<::StringW, ::UnityEngine::Sprite*>*> const& __get__spriteAsyncCachedLoader() const;

  constexpr void __set__spriteAsyncCachedLoader(::GlobalNamespace::AsyncCachedLoader_2<::StringW, ::UnityEngine::Sprite*>* value);

  /// @brief Method ClearCache addr 0x21b5318 size 0x58 virtual false final false
  inline void ClearCache();

  /// @brief Method LoadSpriteAsync addr 0x21b5370 size 0x104 virtual true final true
  inline ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>* LoadSpriteAsync(::StringW path, ::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::CachedMediaAsyncLoader* New_ctor();

  /// @brief Method .ctor addr 0x21b5474 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CachedMediaAsyncLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CachedMediaAsyncLoader(CachedMediaAsyncLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CachedMediaAsyncLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CachedMediaAsyncLoader(CachedMediaAsyncLoader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CachedMediaAsyncLoader();

public:
  /// @brief Field _maxNumberOfSpriteCachedElements, offset: 0x18, size: 0x4, def value: None
  int32_t ____maxNumberOfSpriteCachedElements;

  /// @brief Field _spriteAsyncCachedLoader, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::AsyncCachedLoader_2<::StringW, ::UnityEngine::Sprite*>* ____spriteAsyncCachedLoader;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CachedMediaAsyncLoader, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CachedMediaAsyncLoader, ____maxNumberOfSpriteCachedElements) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CachedMediaAsyncLoader, ____spriteAsyncCachedLoader) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CachedMediaAsyncLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CachedMediaAsyncLoader*, "", "CachedMediaAsyncLoader");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CachedMediaAsyncLoader___LoadSpriteAsync_d__3, "", "CachedMediaAsyncLoader/<LoadSpriteAsync>d__3");
