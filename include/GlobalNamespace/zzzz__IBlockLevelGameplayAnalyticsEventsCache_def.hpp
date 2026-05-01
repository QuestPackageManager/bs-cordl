#pragma once
// IWYU pragma private; include "GlobalNamespace/IBlockLevelGameplayAnalyticsEventsCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IBlockLevelGameplayAnalyticsEventsCache)
namespace GlobalNamespace {
struct ColorType;
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
class IBlockLevelGameplayAnalyticsEventsCache;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IBlockLevelGameplayAnalyticsEventsCache
class CORDL_TYPE IBlockLevelGameplayAnalyticsEventsCache {
public:
  // Declarations
  /// @brief Method AddBadCut, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AddBadCut(float_t beat, ::GlobalNamespace::NoteCutInfo_FailReason failReason, ::GlobalNamespace::ColorType colorType, ::GlobalNamespace::NoteData_GameplayType gameplayType,
                        ::System::Nullable_1<int32_t> lineIndex, ::System::Nullable_1<::GlobalNamespace::NoteLineLayer> lineLayer);

  /// @brief Method AddBlockMiss, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AddBlockMiss(float_t beat, ::GlobalNamespace::ColorType colorType, ::GlobalNamespace::NoteData_GameplayType gameplayType, ::System::Nullable_1<int32_t> lineIndex,
                           ::System::Nullable_1<::GlobalNamespace::NoteLineLayer> lineLayer);

  /// @brief Method AddBombCut, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AddBombCut(float_t beat);

  /// @brief Method AddGoodCut, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AddGoodCut(float_t beat, float_t score, ::GlobalNamespace::ColorType colorType, ::GlobalNamespace::NoteData_GameplayType gameplayType, ::System::Nullable_1<int32_t> lineIndex,
                         ::System::Nullable_1<::GlobalNamespace::NoteLineLayer> lineLayer);

  /// @brief Method AddObstacleHit, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AddObstacleHit(float_t beat, float_t duration);

  /// @brief Method IsEmpty, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsEmpty();

  /// @brief Method SerializeJSON, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW SerializeJSON();

  // Ctor Parameters [CppParam { name: "", ty: "IBlockLevelGameplayAnalyticsEventsCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBlockLevelGameplayAnalyticsEventsCache(IBlockLevelGameplayAnalyticsEventsCache const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6266 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBlockLevelGameplayAnalyticsEventsCache*, "", "IBlockLevelGameplayAnalyticsEventsCache");
