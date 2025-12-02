#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/MaterialQualityUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialQualityUtilities)
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct MaterialQuality;
}
namespace UnityEngine::Rendering {
struct ShaderKeyword;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class MaterialQualityUtilities;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::MaterialQualityUtilities);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.MaterialQualityUtilities
class CORDL_TYPE MaterialQualityUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field EnumNames, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EnumNames, put = setStaticF_EnumNames)) ::ArrayW<::StringW, ::Array<::StringW>*> EnumNames;

  /// @brief Field KeywordNames, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_KeywordNames, put = setStaticF_KeywordNames)) ::ArrayW<::StringW, ::Array<::StringW>*> KeywordNames;

  /// @brief Field Keywords, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Keywords, put = setStaticF_Keywords)) ::ArrayW<::UnityEngine::Rendering::ShaderKeyword, ::Array<::UnityEngine::Rendering::ShaderKeyword>*> Keywords;

  /// @brief Method FromIndex, addr 0x65a85b4, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::MaterialQuality FromIndex(int32_t index);

  /// @brief Method GetClosestQuality, addr 0x65a83ec, size 0x138, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::MaterialQuality GetClosestQuality(::UnityEngine::Rendering::MaterialQuality availableLevels, ::UnityEngine::Rendering::MaterialQuality requestedLevel);

  /// @brief Method GetHighestQuality, addr 0x65a835c, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::MaterialQuality GetHighestQuality(::UnityEngine::Rendering::MaterialQuality levels);

  /// @brief Method SetGlobalShaderKeywords, addr 0x65a85c0, size 0xfc, virtual false, abstract: false, final false
  static inline void SetGlobalShaderKeywords(::UnityEngine::Rendering::MaterialQuality level);

  /// @brief Method SetGlobalShaderKeywords, addr 0x65a86bc, size 0x118, virtual false, abstract: false, final false
  static inline void SetGlobalShaderKeywords(::UnityEngine::Rendering::MaterialQuality level, ::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method ToFirstIndex, addr 0x65a8524, size 0x90, virtual false, abstract: false, final false
  static inline int32_t ToFirstIndex(::UnityEngine::Rendering::MaterialQuality level);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_EnumNames();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_KeywordNames();

  static inline ::ArrayW<::UnityEngine::Rendering::ShaderKeyword, ::Array<::UnityEngine::Rendering::ShaderKeyword>*> getStaticF_Keywords();

  static inline void setStaticF_EnumNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_KeywordNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_Keywords(::ArrayW<::UnityEngine::Rendering::ShaderKeyword, ::Array<::UnityEngine::Rendering::ShaderKeyword>*> value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12281 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::MaterialQualityUtilities, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::MaterialQualityUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::MaterialQualityUtilities*, "UnityEngine.Rendering", "MaterialQualityUtilities");
