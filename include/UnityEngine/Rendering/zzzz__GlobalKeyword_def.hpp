#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GlobalKeyword.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
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
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GlobalKeyword, "UnityEngine.Rendering", "GlobalKeyword");
// [NativeHeader("Runtime/Shaders/Keywords/KeywordSpaceScriptBindings.h")]
// [NativeHeader("Runtime/Graphics/ShaderScriptBindings.h")]
// [UsedByNativeCode]
// [IsReadOnly]
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GlobalKeyword
struct CORDL_TYPE GlobalKeyword {
public:
  // Declarations
  __declspec(property(get = get_name)) ::StringW name;

  /// @brief Method Create, addr 0x6f8a768, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::GlobalKeyword Create(::StringW name);

  /// [FreeFunction("ShaderScripting::CreateGlobalKeyword")]
  /// @brief Method CreateGlobalKeyword, addr 0x6f8a4f8, size 0x124, virtual false, abstract: false, final false
  static inline void CreateGlobalKeyword(::StringW keyword);

  /// @brief Method CreateGlobalKeyword_Injected, addr 0x6f8a61c, size 0x3c, virtual false, abstract: false, final false
  static inline void CreateGlobalKeyword_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// [FreeFunction("ShaderScripting::GetGlobalKeywordCount")]
  /// @brief Method GetGlobalKeywordCount, addr 0x6f8a368, size 0x28, virtual false, abstract: false, final false
  static inline uint32_t GetGlobalKeywordCount();

  /// [FreeFunction("ShaderScripting::GetGlobalKeywordIndex")]
  /// @brief Method GetGlobalKeywordIndex, addr 0x6f8a390, size 0x12c, virtual false, abstract: false, final false
  static inline uint32_t GetGlobalKeywordIndex(::StringW keyword);

  /// @brief Method GetGlobalKeywordIndex_Injected, addr 0x6f8a4bc, size 0x3c, virtual false, abstract: false, final false
  static inline uint32_t GetGlobalKeywordIndex_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// [FreeFunction("ShaderScripting::GetGlobalKeywordName")]
  /// @brief Method GetGlobalKeywordName, addr 0x6f8a658, size 0xcc, virtual false, abstract: false, final false
  static inline ::StringW GetGlobalKeywordName(uint32_t keywordIndex);

  /// @brief Method GetGlobalKeywordName_Injected, addr 0x6f8a724, size 0x44, virtual false, abstract: false, final false
  static inline void GetGlobalKeywordName_Injected(uint32_t keywordIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method ToString, addr 0x6f8a8d4, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x6f8a798, size 0x134, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method get_name, addr 0x6f8a8cc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GlobalKeyword();

  // Ctor Parameters [CppParam { name: "m_Index", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
  constexpr GlobalKeyword(uint32_t m_Index) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10497 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field m_Index, offset: 0x0, size: 0x4, def value: None
  uint32_t m_Index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GlobalKeyword, m_Index) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::GlobalKeyword) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering
