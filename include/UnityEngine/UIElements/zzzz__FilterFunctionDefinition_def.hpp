#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FilterFunctionDefinition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__FilterParameterDeclaration_def.hpp"
#include "UnityEngine/UIElements/zzzz__PostProcessingPass_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FilterFunctionDefinition)
namespace UnityEngine::UIElements {
struct FilterParameterDeclaration;
}
namespace UnityEngine::UIElements {
struct PostProcessingPass;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class FilterFunctionDefinition;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::FilterFunctionDefinition*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::FilterFunctionDefinition*, "UnityEngine.UIElements", "FilterFunctionDefinition");
// [HelpURL("ui-systems/custom-filters")]
// Dependencies UnityEngine.ScriptableObject, UnityEngine.UIElements.FilterParameterDeclaration, UnityEngine.UIElements.PostProcessingPass
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.FilterFunctionDefinition
class CORDL_TYPE FilterFunctionDefinition : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief [CreateProperty]
  __declspec(property(get = get_filterName, put = set_filterName)) ::StringW filterName;

  /// @brief Field m_FilterName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FilterName, put = __cordl_internal_set_m_FilterName)) ::StringW m_FilterName;

  /// @brief Field m_Parameters, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Parameters, put = __cordl_internal_set_m_Parameters)) ::ArrayW<::UnityEngine::UIElements::FilterParameterDeclaration> m_Parameters;

  /// @brief Field m_Passes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Passes, put = __cordl_internal_set_m_Passes)) ::ArrayW<::UnityEngine::UIElements::PostProcessingPass> m_Passes;

  /// @brief [CreateProperty]
  __declspec(property(get = get_parameters, put = set_parameters)) ::ArrayW<::UnityEngine::UIElements::FilterParameterDeclaration> parameters;

  /// @brief [CreateProperty]
  __declspec(property(get = get_passes, put = set_passes)) ::ArrayW<::UnityEngine::UIElements::PostProcessingPass> passes;

  static inline ::UnityEngine::UIElements::FilterFunctionDefinition* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_m_FilterName() const;

  constexpr ::StringW& __cordl_internal_get_m_FilterName();

  constexpr ::ArrayW<::UnityEngine::UIElements::FilterParameterDeclaration> const& __cordl_internal_get_m_Parameters() const;

  constexpr ::ArrayW<::UnityEngine::UIElements::FilterParameterDeclaration>& __cordl_internal_get_m_Parameters();

  constexpr ::ArrayW<::UnityEngine::UIElements::PostProcessingPass> const& __cordl_internal_get_m_Passes() const;

  constexpr ::ArrayW<::UnityEngine::UIElements::PostProcessingPass>& __cordl_internal_get_m_Passes();

  constexpr void __cordl_internal_set_m_FilterName(::StringW value);

  constexpr void __cordl_internal_set_m_Parameters(::ArrayW<::UnityEngine::UIElements::FilterParameterDeclaration> value);

  constexpr void __cordl_internal_set_m_Passes(::ArrayW<::UnityEngine::UIElements::PostProcessingPass> value);

  /// @brief Method .ctor, addr 0x7235f14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_filterName, addr 0x7235ee4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_filterName();

  /// @brief Method get_parameters, addr 0x7235ef4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::UIElements::FilterParameterDeclaration> get_parameters();

  /// @brief Method get_passes, addr 0x7235f04, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::UIElements::PostProcessingPass> get_passes();

  /// @brief Method set_filterName, addr 0x7235eec, size 0x8, virtual false, abstract: false, final false
  inline void set_filterName(::StringW value);

  /// @brief Method set_parameters, addr 0x7235efc, size 0x8, virtual false, abstract: false, final false
  inline void set_parameters(::ArrayW<::UnityEngine::UIElements::FilterParameterDeclaration> value);

  /// @brief Method set_passes, addr 0x7235f0c, size 0x8, virtual false, abstract: false, final false
  inline void set_passes(::ArrayW<::UnityEngine::UIElements::PostProcessingPass> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FilterFunctionDefinition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FilterFunctionDefinition", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FilterFunctionDefinition(FilterFunctionDefinition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FilterFunctionDefinition", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FilterFunctionDefinition(FilterFunctionDefinition const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4581 };

  /// [DontCreateProperty]
  /// [SerializeField]
  /// @brief Field m_FilterName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_FilterName;

  /// [DontCreateProperty]
  /// [SerializeField]
  /// @brief Field m_Parameters, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::FilterParameterDeclaration> ___m_Parameters;

  /// [DontCreateProperty]
  /// [SerializeField]
  /// @brief Field m_Passes, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::PostProcessingPass> ___m_Passes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::FilterFunctionDefinition, ___m_FilterName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FilterFunctionDefinition, ___m_Parameters) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FilterFunctionDefinition, ___m_Passes) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::FilterFunctionDefinition) == 0x30, "Size mismatch!");

} // namespace UnityEngine::UIElements
