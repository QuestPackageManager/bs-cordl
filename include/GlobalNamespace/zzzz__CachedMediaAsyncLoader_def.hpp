#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CachedMediaAsyncLoader)
namespace GlobalNamespace {
template <typename TKey, typename TValue> class AsyncCachedLoader_2;
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
// Forward declare root types
namespace GlobalNamespace {
class CachedMediaAsyncLoader;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CachedMediaAsyncLoader);
// Type: ::CachedMediaAsyncLoader
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CachedMediaAsyncLoader*
class CORDL_TYPE CachedMediaAsyncLoader : public ::System::Object {
public:
  // Declarations
  /// @brief Field _spriteAsyncCachedLoader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__spriteAsyncCachedLoader,
                      put = __cordl_internal_set__spriteAsyncCachedLoader))::GlobalNamespace::AsyncCachedLoader_2<::StringW, ::UnityW<::UnityEngine::Sprite>>* _spriteAsyncCachedLoader;

  /// @brief Convert operator to "::GlobalNamespace::ISpriteAsyncLoader"
  constexpr operator ::GlobalNamespace::ISpriteAsyncLoader*() noexcept;

  /// @brief Method ClearCache, addr 0x2536b04, size 0x58, virtual false, abstract: false, final false
  inline void ClearCache();

  /// @brief Method LoadSpriteAsync, addr 0x2536b5c, size 0x100, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>* LoadSpriteAsync(::StringW path, ::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::CachedMediaAsyncLoader* New_ctor();

  constexpr ::GlobalNamespace::AsyncCachedLoader_2<::StringW, ::UnityW<::UnityEngine::Sprite>>*& __cordl_internal_get__spriteAsyncCachedLoader();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AsyncCachedLoader_2<::StringW, ::UnityW<::UnityEngine::Sprite>>*> const& __cordl_internal_get__spriteAsyncCachedLoader() const;

  constexpr void __cordl_internal_set__spriteAsyncCachedLoader(::GlobalNamespace::AsyncCachedLoader_2<::StringW, ::UnityW<::UnityEngine::Sprite>>* value);

  /// @brief Method .ctor, addr 0x2536c5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::ISpriteAsyncLoader"
  constexpr ::GlobalNamespace::ISpriteAsyncLoader* i___GlobalNamespace__ISpriteAsyncLoader() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CachedMediaAsyncLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CachedMediaAsyncLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CachedMediaAsyncLoader(CachedMediaAsyncLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CachedMediaAsyncLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CachedMediaAsyncLoader(CachedMediaAsyncLoader const&) = delete;

  /// @brief Field _spriteAsyncCachedLoader, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::AsyncCachedLoader_2<::StringW, ::UnityW<::UnityEngine::Sprite>>* ____spriteAsyncCachedLoader;

  /// @brief Field kMaxNumberOfSpriteCachedElements offset 0xffffffff size 0x4
  static constexpr int32_t kMaxNumberOfSpriteCachedElements{ static_cast<int32_t>(0x64) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CachedMediaAsyncLoader, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CachedMediaAsyncLoader, ____spriteAsyncCachedLoader) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CachedMediaAsyncLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CachedMediaAsyncLoader*, "", "CachedMediaAsyncLoader");
