#pragma once
// IWYU pragma private; include "UnityEngine/ProbeSetIndex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Hash128_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeSetIndex)
// Forward declare root types
namespace UnityEngine {
struct ProbeSetIndex;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProbeSetIndex);
DEFINE_IL2CPP_CLASS(::UnityEngine::ProbeSetIndex, "UnityEngine", "ProbeSetIndex");
// [NativeType("Runtime/Camera/ProbeSetIndex.h")]
// Dependencies UnityEngine.Hash128
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ProbeSetIndex
struct CORDL_TYPE ProbeSetIndex {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeSetIndex();

  // Ctor Parameters [CppParam { name: "m_Hash", ty: "::UnityEngine::Hash128", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Offset", ty: "int32_t", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "m_Size", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr ProbeSetIndex(::UnityEngine::Hash128 m_Hash, int32_t m_Offset, int32_t m_Size) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9726 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_Hash, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Hash128 m_Hash;

  /// @brief Field m_Offset, offset: 0x10, size: 0x4, def value: None
  int32_t m_Offset;

  /// @brief Field m_Size, offset: 0x14, size: 0x4, def value: None
  int32_t m_Size;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProbeSetIndex, m_Hash) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProbeSetIndex, m_Offset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProbeSetIndex, m_Size) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ProbeSetIndex) == 0x18, "Size mismatch!");

} // namespace UnityEngine
