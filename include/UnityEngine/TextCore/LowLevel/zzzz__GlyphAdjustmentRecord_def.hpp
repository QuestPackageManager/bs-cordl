#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LowLevel/GlyphAdjustmentRecord.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphValueRecord_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlyphAdjustmentRecord)
namespace System {
class Object;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphValueRecord;
}
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct GlyphAdjustmentRecord;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord);
// Dependencies System.IEquatable`1<T>, UnityEngine.TextCore.LowLevel.GlyphValueRecord
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// CS Name: UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord
struct CORDL_TYPE GlyphAdjustmentRecord {
public:
  // Declarations
  __declspec(property(get = get_glyphIndex)) uint32_t glyphIndex;

  __declspec(property(get = get_glyphValueRecord)) ::UnityEngine::TextCore::LowLevel::GlyphValueRecord glyphValueRecord;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>*();

  /// @brief Method Equals, addr 0x4923d90, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4923e10, size 0xa4, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord other);

  /// @brief Method GetHashCode, addr 0x4923d24, size 0x6c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method get_glyphIndex, addr 0x4923d10, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_glyphIndex();

  /// @brief Method get_glyphValueRecord, addr 0x4923d18, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::LowLevel::GlyphValueRecord get_glyphValueRecord();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>"
  constexpr ::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>* i___System__IEquatable_1___UnityEngine__TextCore__LowLevel__GlyphAdjustmentRecord_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GlyphAdjustmentRecord();

  // Ctor Parameters [CppParam { name: "m_GlyphIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_GlyphValueRecord", ty:
  // "::UnityEngine::TextCore::LowLevel::GlyphValueRecord", modifiers: "", def_value: None }]
  constexpr GlyphAdjustmentRecord(uint32_t m_GlyphIndex, ::UnityEngine::TextCore::LowLevel::GlyphValueRecord m_GlyphValueRecord) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18187 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field m_GlyphIndex, offset: 0x0, size: 0x4, def value: None
  uint32_t m_GlyphIndex;

  /// @brief Field m_GlyphValueRecord, offset: 0x4, size: 0x10, def value: None
  ::UnityEngine::TextCore::LowLevel::GlyphValueRecord m_GlyphValueRecord;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord, m_GlyphIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord, m_GlyphValueRecord) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord, 0x14>, "Size mismatch!");

} // namespace UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord, "UnityEngine.TextCore.LowLevel", "GlyphAdjustmentRecord");
