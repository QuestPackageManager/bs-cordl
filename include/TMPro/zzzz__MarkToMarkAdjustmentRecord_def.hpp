#pragma once
// IWYU pragma private; include "TMPro/MarkToMarkAdjustmentRecord.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TMPro/zzzz__GlyphAnchorPoint_def.hpp"
#include "TMPro/zzzz__MarkPositionAdjustment_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MarkToMarkAdjustmentRecord)
namespace TMPro {
struct GlyphAnchorPoint;
}
namespace TMPro {
struct MarkPositionAdjustment;
}
// Forward declare root types
namespace TMPro {
struct MarkToMarkAdjustmentRecord;
}
// Write type traits
MARK_VAL_T(::TMPro::MarkToMarkAdjustmentRecord);
// Dependencies TMPro.GlyphAnchorPoint, TMPro.MarkPositionAdjustment
namespace TMPro {
// Is value type: true
// CS Name: TMPro.MarkToMarkAdjustmentRecord
struct CORDL_TYPE MarkToMarkAdjustmentRecord {
public:
  // Declarations
  __declspec(property(get = get_baseMarkGlyphAnchorPoint, put = set_baseMarkGlyphAnchorPoint)) ::TMPro::GlyphAnchorPoint baseMarkGlyphAnchorPoint;

  __declspec(property(get = get_baseMarkGlyphID, put = set_baseMarkGlyphID)) uint32_t baseMarkGlyphID;

  __declspec(property(get = get_combiningMarkGlyphID, put = set_combiningMarkGlyphID)) uint32_t combiningMarkGlyphID;

  __declspec(property(get = get_combiningMarkPositionAdjustment, put = set_combiningMarkPositionAdjustment)) ::TMPro::MarkPositionAdjustment combiningMarkPositionAdjustment;

  /// @brief Method get_baseMarkGlyphAnchorPoint, addr 0x677f3e0, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::GlyphAnchorPoint get_baseMarkGlyphAnchorPoint();

  /// @brief Method get_baseMarkGlyphID, addr 0x677f3d0, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_baseMarkGlyphID();

  /// @brief Method get_combiningMarkGlyphID, addr 0x677f3f0, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_combiningMarkGlyphID();

  /// @brief Method get_combiningMarkPositionAdjustment, addr 0x677f400, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::MarkPositionAdjustment get_combiningMarkPositionAdjustment();

  /// @brief Method set_baseMarkGlyphAnchorPoint, addr 0x677f3e8, size 0x8, virtual false, abstract: false, final false
  inline void set_baseMarkGlyphAnchorPoint(::TMPro::GlyphAnchorPoint value);

  /// @brief Method set_baseMarkGlyphID, addr 0x677f3d8, size 0x8, virtual false, abstract: false, final false
  inline void set_baseMarkGlyphID(uint32_t value);

  /// @brief Method set_combiningMarkGlyphID, addr 0x677f3f8, size 0x8, virtual false, abstract: false, final false
  inline void set_combiningMarkGlyphID(uint32_t value);

  /// @brief Method set_combiningMarkPositionAdjustment, addr 0x677f408, size 0x8, virtual false, abstract: false, final false
  inline void set_combiningMarkPositionAdjustment(::TMPro::MarkPositionAdjustment value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr MarkToMarkAdjustmentRecord();

  // Ctor Parameters [CppParam { name: "m_BaseMarkGlyphID", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_BaseMarkGlyphAnchorPoint", ty: "::TMPro::GlyphAnchorPoint", modifiers:
  // "", def_value: None }, CppParam { name: "m_CombiningMarkGlyphID", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_CombiningMarkPositionAdjustment", ty:
  // "::TMPro::MarkPositionAdjustment", modifiers: "", def_value: None }]
  constexpr MarkToMarkAdjustmentRecord(uint32_t m_BaseMarkGlyphID, ::TMPro::GlyphAnchorPoint m_BaseMarkGlyphAnchorPoint, uint32_t m_CombiningMarkGlyphID,
                                       ::TMPro::MarkPositionAdjustment m_CombiningMarkPositionAdjustment) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15821 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_BaseMarkGlyphID, offset: 0x0, size: 0x4, def value: None
  uint32_t m_BaseMarkGlyphID;

  /// @brief Field m_BaseMarkGlyphAnchorPoint, offset: 0x4, size: 0x8, def value: None
  ::TMPro::GlyphAnchorPoint m_BaseMarkGlyphAnchorPoint;

  /// @brief Field m_CombiningMarkGlyphID, offset: 0xc, size: 0x4, def value: None
  uint32_t m_CombiningMarkGlyphID;

  /// @brief Field m_CombiningMarkPositionAdjustment, offset: 0x10, size: 0x8, def value: None
  ::TMPro::MarkPositionAdjustment m_CombiningMarkPositionAdjustment;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::MarkToMarkAdjustmentRecord, m_BaseMarkGlyphID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::MarkToMarkAdjustmentRecord, m_BaseMarkGlyphAnchorPoint) == 0x4, "Offset mismatch!");

static_assert(offsetof(::TMPro::MarkToMarkAdjustmentRecord, m_CombiningMarkGlyphID) == 0xc, "Offset mismatch!");

static_assert(offsetof(::TMPro::MarkToMarkAdjustmentRecord, m_CombiningMarkPositionAdjustment) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::MarkToMarkAdjustmentRecord, 0x18>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::MarkToMarkAdjustmentRecord, "TMPro", "MarkToMarkAdjustmentRecord");
