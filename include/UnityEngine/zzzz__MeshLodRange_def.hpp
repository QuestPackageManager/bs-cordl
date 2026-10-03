#pragma once
// IWYU pragma private; include "UnityEngine/MeshLodRange.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshLodRange)
// Forward declare root types
namespace UnityEngine {
struct MeshLodRange;
}
// Write type traits
MARK_VAL_T(::UnityEngine::MeshLodRange);
DEFINE_IL2CPP_CLASS(::UnityEngine::MeshLodRange, "UnityEngine", "MeshLodRange");
// [UsedByNativeCode]
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.MeshLodRange
struct CORDL_TYPE MeshLodRange {
public:
  // Declarations
  /// @brief Method ToString, addr 0x6f0dfac, size 0xb4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshLodRange();

  // Ctor Parameters [CppParam { name: "m_IndexStart", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_IndexCount", ty: "uint32_t", modifiers: "", def_value: None,
  // comment: None }]
  constexpr MeshLodRange(uint32_t m_IndexStart, uint32_t m_IndexCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9807 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// [SerializeField]
  /// @brief Field m_IndexStart, offset: 0x0, size: 0x4, def value: None
  uint32_t m_IndexStart;

  /// [SerializeField]
  /// @brief Field m_IndexCount, offset: 0x4, size: 0x4, def value: None
  uint32_t m_IndexCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::MeshLodRange, m_IndexStart) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::MeshLodRange, m_IndexCount) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::MeshLodRange) == 0x8, "Size mismatch!");

} // namespace UnityEngine
