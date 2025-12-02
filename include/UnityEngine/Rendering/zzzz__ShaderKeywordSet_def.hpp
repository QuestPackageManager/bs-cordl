#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShaderKeywordSet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderKeywordSet)
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
struct ShaderKeyword;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ShaderKeywordSet;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ShaderKeywordSet);
// Dependencies System.IntPtr
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ShaderKeywordSet
struct CORDL_TYPE ShaderKeywordSet {
public:
  // Declarations
  /// @brief Method CheckKeywordCompatible, addr 0x68f9ea8, size 0xc4, virtual false, abstract: false, final false
  inline void CheckKeywordCompatible(::UnityEngine::Rendering::ShaderKeyword keyword);

  /// @brief Method IsEnabled, addr 0x68f9f6c, size 0x40, virtual false, abstract: false, final false
  inline bool IsEnabled(::UnityEngine::Rendering::ShaderKeyword keyword);

  /// @brief Method IsKeywordNameEnabled, addr 0x68f9d24, size 0x140, virtual false, abstract: false, final false
  static inline bool IsKeywordNameEnabled(::UnityEngine::Rendering::ShaderKeywordSet state, ::StringW name);

  /// @brief Method IsKeywordNameEnabled_Injected, addr 0x68f9e64, size 0x44, virtual false, abstract: false, final false
  static inline bool IsKeywordNameEnabled_Injected(::ByRef<::UnityEngine::Rendering::ShaderKeywordSet> state, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderKeywordSet();

  // Ctor Parameters [CppParam { name: "m_KeywordState", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Shader", ty: "::System::IntPtr", modifiers: "", def_value: None
  // }, CppParam { name: "m_ComputeShader", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_StateIndex", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr ShaderKeywordSet(::System::IntPtr m_KeywordState, ::System::IntPtr m_Shader, ::System::IntPtr m_ComputeShader, uint64_t m_StateIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10867 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_KeywordState, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr m_KeywordState;

  /// @brief Field m_Shader, offset: 0x8, size: 0x8, def value: None
  ::System::IntPtr m_Shader;

  /// @brief Field m_ComputeShader, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr m_ComputeShader;

  /// @brief Field m_StateIndex, offset: 0x18, size: 0x8, def value: None
  uint64_t m_StateIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ShaderKeywordSet, m_KeywordState) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderKeywordSet, m_Shader) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderKeywordSet, m_ComputeShader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderKeywordSet, m_StateIndex) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ShaderKeywordSet, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ShaderKeywordSet, "UnityEngine.Rendering", "ShaderKeywordSet");
