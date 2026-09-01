#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\MaterialQualityUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderKeyword_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialQualityUtilities)
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct MaterialQuality;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class MaterialQualityUtilities;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::MaterialQualityUtilities*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::MaterialQualityUtilities*, "UnityEngine.Rendering", "MaterialQualityUtilities");
// Dependencies System.Object, UnityEngine.Rendering.ShaderKeyword
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.MaterialQualityUtilities
class CORDL_TYPE MaterialQualityUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field EnumNames, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EnumNames, put = setStaticF_EnumNames)) ::ArrayW<::StringW> EnumNames;

  /// @brief Field KeywordNames, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_KeywordNames, put = setStaticF_KeywordNames)) ::ArrayW<::StringW> KeywordNames;

  /// @brief Field Keywords, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Keywords, put = setStaticF_Keywords)) ::ArrayW<::UnityEngine::Rendering::ShaderKeyword> Keywords;

  /// @brief Method FromIndex, addr 0x67c72a8, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::MaterialQuality FromIndex(int32_t index);

  /// @brief Method GetClosestQuality, addr 0x67c70e0, size 0x138, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::MaterialQuality GetClosestQuality(::UnityEngine::Rendering::MaterialQuality availableLevels, ::UnityEngine::Rendering::MaterialQuality requestedLevel);

  /// @brief Method GetHighestQuality, addr 0x67c7050, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::MaterialQuality GetHighestQuality(::UnityEngine::Rendering::MaterialQuality levels);

  /// @brief Method SetGlobalShaderKeywords, addr 0x67c72b4, size 0xfc, virtual false, abstract: false, final false
  static inline void SetGlobalShaderKeywords(::UnityEngine::Rendering::MaterialQuality level);

  /// @brief Method SetGlobalShaderKeywords, addr 0x67c73b0, size 0x118, virtual false, abstract: false, final false
  static inline void SetGlobalShaderKeywords(::UnityEngine::Rendering::MaterialQuality level, ::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method ToFirstIndex, addr 0x67c7218, size 0x90, virtual false, abstract: false, final false
  static inline int32_t ToFirstIndex(::UnityEngine::Rendering::MaterialQuality level);

  static inline ::ArrayW<::StringW> getStaticF_EnumNames();

  static inline ::ArrayW<::StringW> getStaticF_KeywordNames();

  static inline ::ArrayW<::UnityEngine::Rendering::ShaderKeyword> getStaticF_Keywords();

  static inline void setStaticF_EnumNames(::ArrayW<::StringW> value);

  static inline void setStaticF_KeywordNames(::ArrayW<::StringW> value);

  static inline void setStaticF_Keywords(::ArrayW<::UnityEngine::Rendering::ShaderKeyword> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialQualityUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialQualityUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialQualityUtilities(MaterialQualityUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialQualityUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialQualityUtilities(MaterialQualityUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12310 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::MaterialQualityUtilities) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
