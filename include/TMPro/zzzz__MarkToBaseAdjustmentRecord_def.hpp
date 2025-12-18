#pragma once
// IWYU pragma private; include "TMPro/MarkToBaseAdjustmentRecord.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TMPro/zzzz__GlyphAnchorPoint_def.hpp"
#include "TMPro/zzzz__MarkPositionAdjustment_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MarkToBaseAdjustmentRecord)
namespace TMPro {
struct GlyphAnchorPoint;
}
namespace TMPro {
struct MarkPositionAdjustment;
}
// Forward declare root types
namespace TMPro {
struct MarkToBaseAdjustmentRecord;
}
// Write type traits
MARK_VAL_T(::TMPro::MarkToBaseAdjustmentRecord);
// Dependencies TMPro.GlyphAnchorPoint, TMPro.MarkPositionAdjustment
namespace TMPro {
// Is value type: true
// CS Name: TMPro.MarkToBaseAdjustmentRecord
struct CORDL_TYPE MarkToBaseAdjustmentRecord {
public:
  // Declarations
  __declspec(property(get = get_baseGlyphAnchorPoint, put = set_baseGlyphAnchorPoint)) ::TMPro::GlyphAnchorPoint baseGlyphAnchorPoint;

  __declspec(property(get = get_baseGlyphID, put = set_baseGlyphID)) uint32_t baseGlyphID;

  __declspec(property(get = get_markGlyphID, put = set_markGlyphID)) uint32_t markGlyphID;

  __declspec(property(get = get_markPositionAdjustment, put = set_markPositionAdjustment)) ::TMPro::MarkPositionAdjustment markPositionAdjustment;

  /// @brief Method get_baseGlyphAnchorPoint, addr 0x677f3a0, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::GlyphAnchorPoint get_baseGlyphAnchorPoint();

  /// @brief Method get_baseGlyphID, addr 0x677f390, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_baseGlyphID();

  /// @brief Method get_markGlyphID, addr 0x677f3b0, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_markGlyphID();

  /// @brief Method get_markPositionAdjustment, addr 0x677f3c0, size 0x8, virtual false, abstract: false, final false
  inline ::TMPro::MarkPositionAdjustment get_markPositionAdjustment();

  /// @brief Method set_baseGlyphAnchorPoint, addr 0x677f3a8, size 0x8, virtual false, abstract: false, final false
  inline void set_baseGlyphAnchorPoint(::TMPro::GlyphAnchorPoint value);

  /// @brief Method set_baseGlyphID, addr 0x677f398, size 0x8, virtual false, abstract: false, final false
  inline void set_baseGlyphID(uint32_t value);

  /// @brief Method set_markGlyphID, addr 0x677f3b8, size 0x8, virtual false, abstract: false, final false
  inline void set_markGlyphID(uint32_t value);

  /// @brief Method set_markPositionAdjustment, addr 0x677f3c8, size 0x8, virtual false, abstract: false, final false
  inline void set_markPositionAdjustment(::TMPro::MarkPositionAdjustment value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr MarkToBaseAdjustmentRecord();

  // Ctor Parameters [CppParam { name: "m_BaseGlyphID", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_BaseGlyphAnchorPoint", ty: "::TMPro::GlyphAnchorPoint", modifiers: "",
  // def_value: None }, CppParam { name: "m_MarkGlyphID", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_MarkPositionAdjustment", ty: "::TMPro::MarkPositionAdjustment",
  // modifiers: "", def_value: None }]
  constexpr MarkToBaseAdjustmentRecord(uint32_t m_BaseGlyphID, ::TMPro::GlyphAnchorPoint m_BaseGlyphAnchorPoint, uint32_t m_MarkGlyphID,
                                       ::TMPro::MarkPositionAdjustment m_MarkPositionAdjustment) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15820 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_BaseGlyphID, offset: 0x0, size: 0x4, def value: None
  uint32_t m_BaseGlyphID;

  /// @brief Field m_BaseGlyphAnchorPoint, offset: 0x4, size: 0x8, def value: None
  ::TMPro::GlyphAnchorPoint m_BaseGlyphAnchorPoint;

  /// @brief Field m_MarkGlyphID, offset: 0xc, size: 0x4, def value: None
  uint32_t m_MarkGlyphID;

  /// @brief Field m_MarkPositionAdjustment, offset: 0x10, size: 0x8, def value: None
  ::TMPro::MarkPositionAdjustment m_MarkPositionAdjustment;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::MarkToBaseAdjustmentRecord, m_BaseGlyphID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::MarkToBaseAdjustmentRecord, m_BaseGlyphAnchorPoint) == 0x4, "Offset mismatch!");

static_assert(offsetof(::TMPro::MarkToBaseAdjustmentRecord, m_MarkGlyphID) == 0xc, "Offset mismatch!");

static_assert(offsetof(::TMPro::MarkToBaseAdjustmentRecord, m_MarkPositionAdjustment) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::MarkToBaseAdjustmentRecord, 0x18>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::MarkToBaseAdjustmentRecord, "TMPro", "MarkToBaseAdjustmentRecord");
