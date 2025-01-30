#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LowLevel/MarkToMarkAdjustmentRecord.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphAnchorPoint_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__MarkPositionAdjustment_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MarkToMarkAdjustmentRecord)
namespace UnityEngine::TextCore::LowLevel {
struct GlyphAnchorPoint;
}
namespace UnityEngine::TextCore::LowLevel {
struct MarkPositionAdjustment;
}
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct MarkToMarkAdjustmentRecord;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord);
// Dependencies UnityEngine.TextCore.LowLevel.GlyphAnchorPoint, UnityEngine.TextCore.LowLevel.MarkPositionAdjustment
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// CS Name: UnityEngine.TextCore.LowLevel.MarkToMarkAdjustmentRecord
struct CORDL_TYPE MarkToMarkAdjustmentRecord {
public:
  // Declarations
  __declspec(property(get = get_baseMarkGlyphAnchorPoint)) ::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint baseMarkGlyphAnchorPoint;

  __declspec(property(get = get_baseMarkGlyphID)) uint32_t baseMarkGlyphID;

  __declspec(property(get = get_combiningMarkGlyphID)) uint32_t combiningMarkGlyphID;

  __declspec(property(get = get_combiningMarkPositionAdjustment)) ::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment combiningMarkPositionAdjustment;

  /// @brief Method get_baseMarkGlyphAnchorPoint, addr 0x49240bc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint get_baseMarkGlyphAnchorPoint();

  /// @brief Method get_baseMarkGlyphID, addr 0x49240b4, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_baseMarkGlyphID();

  /// @brief Method get_combiningMarkGlyphID, addr 0x49240c4, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_combiningMarkGlyphID();

  /// @brief Method get_combiningMarkPositionAdjustment, addr 0x49240cc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment get_combiningMarkPositionAdjustment();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MarkToMarkAdjustmentRecord();

  // Ctor Parameters [CppParam { name: "m_BaseMarkGlyphID", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_BaseMarkGlyphAnchorPoint", ty:
  // "::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint", modifiers: "", def_value: None }, CppParam { name: "m_CombiningMarkGlyphID", ty: "uint32_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_CombiningMarkPositionAdjustment", ty: "::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment", modifiers: "", def_value: None }]
  constexpr MarkToMarkAdjustmentRecord(uint32_t m_BaseMarkGlyphID, ::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint m_BaseMarkGlyphAnchorPoint, uint32_t m_CombiningMarkGlyphID,
                                       ::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment m_CombiningMarkPositionAdjustment) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18192 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_BaseMarkGlyphID, offset: 0x0, size: 0x4, def value: None
  uint32_t m_BaseMarkGlyphID;

  /// @brief Field m_BaseMarkGlyphAnchorPoint, offset: 0x4, size: 0x8, def value: None
  ::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint m_BaseMarkGlyphAnchorPoint;

  /// @brief Field m_CombiningMarkGlyphID, offset: 0xc, size: 0x4, def value: None
  uint32_t m_CombiningMarkGlyphID;

  /// @brief Field m_CombiningMarkPositionAdjustment, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment m_CombiningMarkPositionAdjustment;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord, m_BaseMarkGlyphID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord, m_BaseMarkGlyphAnchorPoint) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord, m_CombiningMarkGlyphID) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord, m_CombiningMarkPositionAdjustment) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord, 0x18>, "Size mismatch!");

} // namespace UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::MarkToMarkAdjustmentRecord, "UnityEngine.TextCore.LowLevel", "MarkToMarkAdjustmentRecord");
