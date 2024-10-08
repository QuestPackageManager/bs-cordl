#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LowLevel/MarkToBaseAdjustmentRecord.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphAnchorPoint_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__MarkPositionAdjustment_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MarkToBaseAdjustmentRecord)
namespace UnityEngine::TextCore::LowLevel {
struct GlyphAnchorPoint;
}
namespace UnityEngine::TextCore::LowLevel {
struct MarkPositionAdjustment;
}
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct MarkToBaseAdjustmentRecord;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord);
// Type: UnityEngine.TextCore.LowLevel::MarkToBaseAdjustmentRecord
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// CS Name: ::UnityEngine.TextCore.LowLevel::MarkToBaseAdjustmentRecord
struct CORDL_TYPE MarkToBaseAdjustmentRecord {
public:
  // Declarations
  __declspec(property(get = get_baseGlyphAnchorPoint)) ::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint baseGlyphAnchorPoint;

  __declspec(property(get = get_baseGlyphID)) uint32_t baseGlyphID;

  __declspec(property(get = get_markGlyphID)) uint32_t markGlyphID;

  __declspec(property(get = get_markPositionAdjustment)) ::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment markPositionAdjustment;

  /// @brief Method get_baseGlyphAnchorPoint, addr 0x48a8090, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint get_baseGlyphAnchorPoint();

  /// @brief Method get_baseGlyphID, addr 0x48a8088, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_baseGlyphID();

  /// @brief Method get_markGlyphID, addr 0x48a8098, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_markGlyphID();

  /// @brief Method get_markPositionAdjustment, addr 0x48a80a0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment get_markPositionAdjustment();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MarkToBaseAdjustmentRecord();

  // Ctor Parameters [CppParam { name: "m_BaseGlyphID", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_BaseGlyphAnchorPoint", ty:
  // "::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint", modifiers: "", def_value: None }, CppParam { name: "m_MarkGlyphID", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_MarkPositionAdjustment", ty: "::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment", modifiers: "", def_value: None }]
  constexpr MarkToBaseAdjustmentRecord(uint32_t m_BaseGlyphID, ::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint m_BaseGlyphAnchorPoint, uint32_t m_MarkGlyphID,
                                       ::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment m_MarkPositionAdjustment) noexcept;

  /// @brief Field m_BaseGlyphID, offset: 0x0, size: 0x4, def value: None
  uint32_t m_BaseGlyphID;

  /// @brief Field m_BaseGlyphAnchorPoint, offset: 0x4, size: 0x8, def value: None
  ::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint m_BaseGlyphAnchorPoint;

  /// @brief Field m_MarkGlyphID, offset: 0xc, size: 0x4, def value: None
  uint32_t m_MarkGlyphID;

  /// @brief Field m_MarkPositionAdjustment, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::TextCore::LowLevel::MarkPositionAdjustment m_MarkPositionAdjustment;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18100 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord, m_BaseGlyphID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord, m_BaseGlyphAnchorPoint) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord, m_MarkGlyphID) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord, m_MarkPositionAdjustment) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::MarkToBaseAdjustmentRecord, "UnityEngine.TextCore.LowLevel", "MarkToBaseAdjustmentRecord");
