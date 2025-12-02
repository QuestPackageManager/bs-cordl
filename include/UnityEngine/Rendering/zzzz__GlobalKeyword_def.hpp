#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GlobalKeyword.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlobalKeyword)
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
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
  /// @brief Method Create, addr 0x68f8e88, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::GlobalKeyword Create(::StringW name);

  /// @brief Method CreateGlobalKeyword, addr 0x68f8d28, size 0x124, virtual false, abstract: false, final false
  static inline void CreateGlobalKeyword(::StringW keyword);

  /// @brief Method CreateGlobalKeyword_Injected, addr 0x68f8e4c, size 0x3c, virtual false, abstract: false, final false
  static inline void CreateGlobalKeyword_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// @brief Method GetGlobalKeywordCount, addr 0x68f8b98, size 0x28, virtual false, abstract: false, final false
  static inline uint32_t GetGlobalKeywordCount();

  /// @brief Method GetGlobalKeywordIndex, addr 0x68f8bc0, size 0x12c, virtual false, abstract: false, final false
  static inline uint32_t GetGlobalKeywordIndex(::StringW keyword);

  /// @brief Method GetGlobalKeywordIndex_Injected, addr 0x68f8cec, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t GetGlobalKeywordIndex_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// @brief Method ToString, addr 0x68f8ff0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x68f8eb8, size 0x138, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  // Ctor Parameters []
  // @brief default ctor
  constexpr GlobalKeyword();

  // Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr GlobalKeyword(::StringW m_Name, uint32_t m_Index) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10862 };

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
