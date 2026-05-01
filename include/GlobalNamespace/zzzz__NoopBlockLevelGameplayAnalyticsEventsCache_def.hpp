#pragma once
// IWYU pragma private; include "GlobalNamespace/NoopBlockLevelGameplayAnalyticsEventsCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NoopBlockLevelGameplayAnalyticsEventsCache)
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
class IBlockLevelGameplayAnalyticsEventsCache;
}
namespace GlobalNamespace {
struct NoteCutInfo_FailReason;
}
namespace GlobalNamespace {
struct NoteData_GameplayType;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class NoopBlockLevelGameplayAnalyticsEventsCache;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoopBlockLevelGameplayAnalyticsEventsCache
class CORDL_TYPE NoopBlockLevelGameplayAnalyticsEventsCache : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache"
  constexpr operator ::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*() noexcept;

  /// @brief Method AddBadCut, addr 0x58bb9c8, size 0x4, virtual true, abstract: false, final true
  inline void AddBadCut(float_t beat, ::GlobalNamespace::NoteCutInfo_FailReason failReason, ::GlobalNamespace::ColorType colorType, ::GlobalNamespace::NoteData_GameplayType gameplayType,
                        ::System::Nullable_1<int32_t> lineIndex, ::System::Nullable_1<::GlobalNamespace::NoteLineLayer> lineLayer);

  /// @brief Method AddBlockMiss, addr 0x58bb9cc, size 0x4, virtual true, abstract: false, final true
  inline void AddBlockMiss(float_t beat, ::GlobalNamespace::ColorType colorType, ::GlobalNamespace::NoteData_GameplayType gameplayType, ::System::Nullable_1<int32_t> lineIndex,
                           ::System::Nullable_1<::GlobalNamespace::NoteLineLayer> lineLayer);

  /// @brief Method AddBombCut, addr 0x58bb9d0, size 0x4, virtual true, abstract: false, final true
  inline void AddBombCut(float_t beat);

  /// @brief Method AddGoodCut, addr 0x58bb9c4, size 0x4, virtual true, abstract: false, final true
  inline void AddGoodCut(float_t beat, float_t score, ::GlobalNamespace::ColorType colorType, ::GlobalNamespace::NoteData_GameplayType gameplayType, ::System::Nullable_1<int32_t> lineIndex,
                         ::System::Nullable_1<::GlobalNamespace::NoteLineLayer> lineLayer);

  /// @brief Method AddObstacleHit, addr 0x58bb9d4, size 0x4, virtual true, abstract: false, final true
  inline void AddObstacleHit(float_t beat, float_t duration);

  /// @brief Method IsEmpty, addr 0x58bb9e0, size 0x8, virtual true, abstract: false, final true
  inline bool IsEmpty();

  static inline ::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache* New_ctor();

  /// @brief Method SerializeJSON, addr 0x58bb9d8, size 0x8, virtual true, abstract: false, final true
  inline ::StringW SerializeJSON();

  /// @brief Method .ctor, addr 0x58bb9e8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache"
  constexpr ::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache* i___GlobalNamespace__IBlockLevelGameplayAnalyticsEventsCache() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoopBlockLevelGameplayAnalyticsEventsCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoopBlockLevelGameplayAnalyticsEventsCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoopBlockLevelGameplayAnalyticsEventsCache(NoopBlockLevelGameplayAnalyticsEventsCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoopBlockLevelGameplayAnalyticsEventsCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoopBlockLevelGameplayAnalyticsEventsCache(NoopBlockLevelGameplayAnalyticsEventsCache const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6270 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoopBlockLevelGameplayAnalyticsEventsCache*, "", "NoopBlockLevelGameplayAnalyticsEventsCache");
