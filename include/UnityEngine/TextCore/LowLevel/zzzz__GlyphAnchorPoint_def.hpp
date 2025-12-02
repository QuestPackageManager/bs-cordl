#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LowLevel/GlyphAnchorPoint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GlyphAnchorPoint)
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct GlyphAnchorPoint;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint);
// Dependencies
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// CS Name: UnityEngine.TextCore.LowLevel.GlyphAnchorPoint
struct CORDL_TYPE GlyphAnchorPoint {
public:
  // Declarations
  __declspec(property(get = get_xCoordinate, put = set_xCoordinate)) float_t xCoordinate;

  __declspec(property(get = get_yCoordinate, put = set_yCoordinate)) float_t yCoordinate;

  /// @brief Method get_xCoordinate, addr 0x698c45c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_xCoordinate();

  /// @brief Method get_yCoordinate, addr 0x698c46c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_yCoordinate();

  /// @brief Method set_xCoordinate, addr 0x698c464, size 0x8, virtual false, abstract: false, final false
  inline void set_xCoordinate(float_t value);

  /// @brief Method set_yCoordinate, addr 0x698c474, size 0x8, virtual false, abstract: false, final false
  inline void set_yCoordinate(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr GlyphAnchorPoint();

  // Ctor Parameters [CppParam { name: "m_XCoordinate", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_YCoordinate", ty: "float_t", modifiers: "", def_value: None }]
  constexpr GlyphAnchorPoint(float_t m_XCoordinate, float_t m_YCoordinate) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21654 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_XCoordinate, offset: 0x0, size: 0x4, def value: None
  float_t m_XCoordinate;

  /// @brief Field m_YCoordinate, offset: 0x4, size: 0x4, def value: None
  float_t m_YCoordinate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint, m_XCoordinate) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint, m_YCoordinate) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint, 0x8>, "Size mismatch!");

} // namespace UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint, "UnityEngine.TextCore.LowLevel", "GlyphAnchorPoint");
