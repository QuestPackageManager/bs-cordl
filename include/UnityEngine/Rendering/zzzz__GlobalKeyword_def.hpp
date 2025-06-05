#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GlobalKeyword.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlobalKeyword)
// Forward declare root types
namespace UnityEngine::Rendering {
struct GlobalKeyword;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::GlobalKeyword);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GlobalKeyword
struct CORDL_TYPE GlobalKeyword {
public:
  // Declarations
  /// @brief Method ToString, addr 0x48cb368, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GlobalKeyword();

  // Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr GlobalKeyword(::StringW m_Name, uint32_t m_Index) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11259 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Name, offset: 0x0, size: 0x8, def value: None
  ::StringW m_Name;

  /// @brief Field m_Index, offset: 0x8, size: 0x4, def value: None
  uint32_t m_Index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GlobalKeyword, m_Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GlobalKeyword, m_Index) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GlobalKeyword, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GlobalKeyword, "UnityEngine.Rendering", "GlobalKeyword");
