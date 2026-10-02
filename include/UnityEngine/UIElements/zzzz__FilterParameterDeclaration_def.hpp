#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FilterParameterDeclaration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__FilterParameter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(FilterParameterDeclaration)
namespace UnityEngine::UIElements {
struct FilterParameter;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct FilterParameterDeclaration;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::FilterParameterDeclaration);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::FilterParameterDeclaration, "UnityEngine.UIElements", "FilterParameterDeclaration");
// Dependencies UnityEngine.UIElements.FilterParameter
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.FilterParameterDeclaration
struct CORDL_TYPE FilterParameterDeclaration {
public:
  // Declarations
  /// @brief [CreateProperty]
  __declspec(property(get = get_interpolationDefaultValue, put = set_interpolationDefaultValue)) ::UnityEngine::UIElements::FilterParameter interpolationDefaultValue;

  /// @brief [CreateProperty]
  __declspec(property(get = get_name, put = set_name)) ::StringW name;

  /// @brief Method get_interpolationDefaultValue, addr 0x7235ebc, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::FilterParameter get_interpolationDefaultValue();

  /// @brief Method get_name, addr 0x7235eac, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method set_interpolationDefaultValue, addr 0x7235ed0, size 0x14, virtual false, abstract: false, final false
  inline void set_interpolationDefaultValue(::UnityEngine::UIElements::FilterParameter value);

  /// @brief Method set_name, addr 0x7235eb4, size 0x8, virtual false, abstract: false, final false
  inline void set_name(::StringW value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FilterParameterDeclaration();

  // Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_InterpolationDefaultValue", ty:
  // "::UnityEngine::UIElements::FilterParameter", modifiers: "", def_value: None, comment: None }, CppParam { name: "defaultValue", ty: "::UnityEngine::UIElements::FilterParameter", modifiers: "",
  // def_value: None, comment: None }]
  constexpr FilterParameterDeclaration(::StringW m_Name, ::UnityEngine::UIElements::FilterParameter m_InterpolationDefaultValue, ::UnityEngine::UIElements::FilterParameter defaultValue) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4580 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// [SerializeField]
  /// [DontCreateProperty]
  /// @brief Field m_Name, offset: 0x0, size: 0x8, def value: None
  ::StringW m_Name;

  /// [SerializeField]
  /// [DontCreateProperty]
  /// @brief Field m_InterpolationDefaultValue, offset: 0x8, size: 0x18, def value: None
  ::UnityEngine::UIElements::FilterParameter m_InterpolationDefaultValue;

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Field defaultValue, offset: 0x20, size: 0x18, def value: None
  ::UnityEngine::UIElements::FilterParameter defaultValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::FilterParameterDeclaration, m_Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FilterParameterDeclaration, m_InterpolationDefaultValue) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::FilterParameterDeclaration, defaultValue) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::FilterParameterDeclaration) == 0x38, "Size mismatch!");

} // namespace UnityEngine::UIElements
