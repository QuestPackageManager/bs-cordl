#pragma once
// IWYU pragma private; include "UnityEngine/BlendShapeBufferRange.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BlendShapeBufferRange)
// Forward declare root types
namespace UnityEngine {
struct BlendShapeBufferRange;
}
// Write type traits
MARK_VAL_T(::UnityEngine::BlendShapeBufferRange);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.BlendShapeBufferRange
struct CORDL_TYPE BlendShapeBufferRange {
public:
  // Declarations
  __declspec(property(put = set_endIndex)) uint32_t endIndex;

  __declspec(property(put = set_startIndex)) uint32_t startIndex;

  /// @brief Method set_endIndex, addr 0x687f348, size 0x8, virtual false, abstract: false, final false
  inline void set_endIndex(uint32_t value);

  /// @brief Method set_startIndex, addr 0x687f338, size 0x8, virtual false, abstract: false, final false
  inline void set_startIndex(uint32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BlendShapeBufferRange();

  // Ctor Parameters [CppParam { name: "m_StartIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_EndIndex", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr BlendShapeBufferRange(uint32_t m_StartIndex, uint32_t m_EndIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10194 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_StartIndex, offset: 0x0, size: 0x4, def value: None
  uint32_t m_StartIndex;

  /// @brief Field m_EndIndex, offset: 0x4, size: 0x4, def value: None
  uint32_t m_EndIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::BlendShapeBufferRange, m_StartIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::BlendShapeBufferRange, m_EndIndex) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::BlendShapeBufferRange, 0x8>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BlendShapeBufferRange, "UnityEngine", "BlendShapeBufferRange");
