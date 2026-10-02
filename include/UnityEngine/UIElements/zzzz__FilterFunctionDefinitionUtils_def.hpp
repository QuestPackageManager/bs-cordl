#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FilterFunctionDefinitionUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FilterFunctionDefinitionUtils)
namespace UnityEngine::UIElements {
class FilterFunctionDefinition;
}
namespace UnityEngine::UIElements {
struct FilterFunctionType;
}
namespace UnityEngine::UIElements {
struct FilterFunction;
}
namespace UnityEngine::UIElements {
struct FilterPassContext;
}
namespace UnityEngine::UIElements {
struct PostProcessingMargins;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class FilterFunctionDefinitionUtils;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::FilterFunctionDefinitionUtils*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::FilterFunctionDefinitionUtils*, "UnityEngine.UIElements", "FilterFunctionDefinitionUtils");
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.FilterFunctionDefinitionUtils
class CORDL_TYPE FilterFunctionDefinitionUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_BlurDef, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_BlurDef, put = setStaticF_s_BlurDef)) ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> s_BlurDef;

  /// @brief Field s_ContrastDef, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ContrastDef, put = setStaticF_s_ContrastDef)) ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> s_ContrastDef;

  /// @brief Field s_GrayscaleDef, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_GrayscaleDef, put = setStaticF_s_GrayscaleDef)) ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> s_GrayscaleDef;

  /// @brief Field s_HueRotateDef, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_HueRotateDef, put = setStaticF_s_HueRotateDef)) ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> s_HueRotateDef;

  /// @brief Field s_InvertDef, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_InvertDef, put = setStaticF_s_InvertDef)) ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> s_InvertDef;

  /// @brief Field s_OpacityDef, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_OpacityDef, put = setStaticF_s_OpacityDef)) ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> s_OpacityDef;

  /// @brief Field s_SepiaDef, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SepiaDef, put = setStaticF_s_SepiaDef)) ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> s_SepiaDef;

  /// @brief Field s_TintDef, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_TintDef, put = setStaticF_s_TintDef)) ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> s_TintDef;

  /// @brief Method ApplyBlurSettings, addr 0x7237024, size 0xc8, virtual false, abstract: false, final false
  static inline void ApplyBlurSettings(::UnityEngine::MaterialPropertyBlock* mpb, ::UnityEngine::UIElements::FilterPassContext context);

  /// @brief Method ApplySettings, addr 0x72370ec, size 0x5d8, virtual false, abstract: false, final false
  static inline void ApplySettings(::UnityEngine::MaterialPropertyBlock* mpb, ::UnityEngine::UIElements::FilterPassContext context);

  /// @brief Method ComputeHorizontalBlurMargins, addr 0x7236e40, size 0xf4, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::PostProcessingMargins ComputeHorizontalBlurMargins(::UnityEngine::UIElements::FilterFunction func);

  /// @brief Method ComputeVerticalBlurMargins, addr 0x7236f34, size 0xf0, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::PostProcessingMargins ComputeVerticalBlurMargins(::UnityEngine::UIElements::FilterFunction func);

  /// @brief Method CreateBlurFilterFunctionDefinition, addr 0x72367dc, size 0x3c0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> CreateBlurFilterFunctionDefinition();

  /// @brief Method CreateColorEffectFilterFunctionDefinition, addr 0x7236b9c, size 0x2a4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> CreateColorEffectFilterFunctionDefinition(::UnityEngine::UIElements::FilterFunctionType filterType);

  /// @brief Method GetBuiltinDefinition, addr 0x7236438, size 0x3a4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> GetBuiltinDefinition(::UnityEngine::UIElements::FilterFunctionType type);

  /// @brief Method GetBuiltinFilterName, addr 0x72362b4, size 0x184, virtual false, abstract: false, final false
  static inline ::StringW GetBuiltinFilterName(::UnityEngine::UIElements::FilterFunctionType type);

  static inline ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> getStaticF_s_BlurDef();

  static inline ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> getStaticF_s_ContrastDef();

  static inline ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> getStaticF_s_GrayscaleDef();

  static inline ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> getStaticF_s_HueRotateDef();

  static inline ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> getStaticF_s_InvertDef();

  static inline ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> getStaticF_s_OpacityDef();

  static inline ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> getStaticF_s_SepiaDef();

  static inline ::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> getStaticF_s_TintDef();

  static inline void setStaticF_s_BlurDef(::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> value);

  static inline void setStaticF_s_ContrastDef(::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> value);

  static inline void setStaticF_s_GrayscaleDef(::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> value);

  static inline void setStaticF_s_HueRotateDef(::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> value);

  static inline void setStaticF_s_InvertDef(::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> value);

  static inline void setStaticF_s_OpacityDef(::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> value);

  static inline void setStaticF_s_SepiaDef(::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> value);

  static inline void setStaticF_s_TintDef(::UnityW<::UnityEngine::UIElements::FilterFunctionDefinition> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FilterFunctionDefinitionUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FilterFunctionDefinitionUtils", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FilterFunctionDefinitionUtils(FilterFunctionDefinitionUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FilterFunctionDefinitionUtils", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FilterFunctionDefinitionUtils(FilterFunctionDefinitionUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4589 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::FilterFunctionDefinitionUtils) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
