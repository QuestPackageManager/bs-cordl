#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextCacheEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TextCacheEntry)
namespace UnityEngine::TextCore::Text {
class TextHandle;
}
namespace UnityEngine::TextCore::Text {
class TextInfo;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct TextCacheEntry;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::TextCacheEntry);
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::Text::TextCacheEntry, "UnityEngine.TextCore.Text", "TextCacheEntry");
// Dependencies
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: UnityEngine.TextCore.Text.TextCacheEntry
struct CORDL_TYPE TextCacheEntry {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x7063fac, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::TextCore::Text::TextHandle* handle, ::UnityEngine::TextCore::Text::TextInfo* info, float_t time);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextCacheEntry();

  // Ctor Parameters [CppParam { name: "textHandle", ty: "::UnityEngine::TextCore::Text::TextHandle*", modifiers: "", def_value: None, comment: None }, CppParam { name: "textInfo", ty:
  // "::UnityEngine::TextCore::Text::TextInfo*", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastTimeInCache", ty: "float_t", modifiers: "", def_value: None, comment: None }]
  constexpr TextCacheEntry(::UnityEngine::TextCore::Text::TextHandle* textHandle, ::UnityEngine::TextCore::Text::TextInfo* textInfo, float_t lastTimeInCache) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17870 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field textHandle, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::TextCore::Text::TextHandle* textHandle;

  /// @brief Field textInfo, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::TextCore::Text::TextInfo* textInfo;

  /// @brief Field lastTimeInCache, offset: 0x10, size: 0x4, def value: None
  float_t lastTimeInCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::TextCacheEntry, textHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextCacheEntry, textInfo) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextCacheEntry, lastTimeInCache) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TextCore::Text::TextCacheEntry) == 0x18, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
