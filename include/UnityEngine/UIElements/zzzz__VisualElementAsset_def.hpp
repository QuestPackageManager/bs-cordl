#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualElementAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__UxmlAsset_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VisualElementAsset)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
class UxmlAsset;
}
namespace UnityEngine::UIElements {
struct UxmlNamespaceDefinition;
}
namespace UnityEngine::UIElements {
class UxmlSerializedData;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualElementAsset;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::VisualElementAsset*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::VisualElementAsset*, "UnityEngine.UIElements", "VisualElementAsset");
// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule", "UnityEditor.UIToolkitAuthoringModule" })]
// Dependencies UnityEngine.UIElements.UxmlAsset
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualElementAsset
class CORDL_TYPE VisualElementAsset : public ::UnityEngine::UIElements::UxmlAsset {
public:
  // Declarations
  __declspec(property(get = get_classes)) ::ArrayW<::StringW> classes;

  __declspec(property(get = get_hasStylesheetPaths)) bool hasStylesheetPaths;

  __declspec(property(get = get_hasStylesheets)) bool hasStylesheets;

  /// @brief Field m_Classes, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Classes, put = __cordl_internal_set_m_Classes)) ::ArrayW<::StringW> m_Classes;

  /// @brief Field m_RuleIndex, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RuleIndex, put = __cordl_internal_set_m_RuleIndex)) int32_t m_RuleIndex;

  /// @brief Field m_SerializedData, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SerializedData, put = __cordl_internal_set_m_SerializedData)) ::UnityEngine::UIElements::UxmlSerializedData* m_SerializedData;

  /// @brief Field m_SkipClone, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SkipClone, put = __cordl_internal_set_m_SkipClone)) bool m_SkipClone;

  /// @brief Field m_StylesheetPaths, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StylesheetPaths, put = __cordl_internal_set_m_StylesheetPaths)) ::System::Collections::Generic::List_1<::StringW>* m_StylesheetPaths;

  /// @brief Field m_Stylesheets, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Stylesheets,
                      put = __cordl_internal_set_m_Stylesheets)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* m_Stylesheets;

  __declspec(property(get = get_ruleIndex, put = set_ruleIndex)) int32_t ruleIndex;

  __declspec(property(get = get_serializedData)) ::UnityEngine::UIElements::UxmlSerializedData* serializedData;

  /// @brief [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  __declspec(property(get = get_skipClone)) bool skipClone;

  __declspec(property(get = get_stylesheetPaths)) ::System::Collections::Generic::List_1<::StringW>* stylesheetPaths;

  __declspec(property(get = get_stylesheets)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* stylesheets;

  /// @brief Method Accepts, addr 0x71498b8, size 0x78, virtual true, abstract: false, final false
  inline bool Accepts(::UnityEngine::UIElements::UxmlAsset* asset, ::by_ref<::StringW> errorMessage);

  /// @brief Method IdsPathMatchesAttributeOverrideIdsPath, addr 0x7149200, size 0x13c, virtual false, abstract: false, final false
  static inline bool IdsPathMatchesAttributeOverrideIdsPath(::System::Collections::Generic::List_1<int32_t>* idsPath, ::System::Collections::Generic::List_1<int32_t>* attributeOverrideIdsPath,
                                                            int32_t templateId);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method Instantiate, addr 0x714933c, size 0x57c, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* Instantiate(::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::VisualElementAsset* New_ctor(::StringW fullTypeName, ::UnityEngine::UIElements::UxmlNamespaceDefinition xmlNamespace);

  /// @brief Method OnVisualTreeAssetChanged, addr 0x7149a70, size 0x144, virtual true, abstract: false, final false
  inline void OnVisualTreeAssetChanged(::UnityEngine::UIElements::VisualTreeAsset* previousVta, ::UnityEngine::UIElements::VisualTreeAsset* newVta);

  /// @brief Method ToString, addr 0x7149930, size 0x140, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::ArrayW<::StringW> const& __cordl_internal_get_m_Classes() const;

  constexpr ::ArrayW<::StringW>& __cordl_internal_get_m_Classes();

  constexpr int32_t const& __cordl_internal_get_m_RuleIndex() const;

  constexpr int32_t& __cordl_internal_get_m_RuleIndex();

  constexpr ::UnityEngine::UIElements::UxmlSerializedData* const& __cordl_internal_get_m_SerializedData() const;

  constexpr ::UnityEngine::UIElements::UxmlSerializedData*& __cordl_internal_get_m_SerializedData();

  constexpr bool const& __cordl_internal_get_m_SkipClone() const;

  constexpr bool& __cordl_internal_get_m_SkipClone();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_m_StylesheetPaths() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_StylesheetPaths();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* const& __cordl_internal_get_m_Stylesheets() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*& __cordl_internal_get_m_Stylesheets();

  constexpr void __cordl_internal_set_m_Classes(::ArrayW<::StringW> value);

  constexpr void __cordl_internal_set_m_RuleIndex(int32_t value);

  constexpr void __cordl_internal_set_m_SerializedData(::UnityEngine::UIElements::UxmlSerializedData* value);

  constexpr void __cordl_internal_set_m_SkipClone(bool value);

  constexpr void __cordl_internal_set_m_StylesheetPaths(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_m_Stylesheets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* value);

  /// @brief Method .ctor, addr 0x7149134, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor(::StringW fullTypeName, ::UnityEngine::UIElements::UxmlNamespaceDefinition xmlNamespace);

  /// @brief Method get_classes, addr 0x7148ffc, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> get_classes();

  /// @brief Method get_hasStylesheetPaths, addr 0x7149084, size 0x10, virtual false, abstract: false, final false
  inline bool get_hasStylesheetPaths();

  /// @brief Method get_hasStylesheets, addr 0x7149114, size 0x10, virtual false, abstract: false, final false
  inline bool get_hasStylesheets();

  /// @brief Method get_ruleIndex, addr 0x7148fec, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ruleIndex();

  /// @brief Method get_serializedData, addr 0x7149124, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UxmlSerializedData* get_serializedData();

  /// @brief Method get_skipClone, addr 0x714912c, size 0x8, virtual false, abstract: false, final false
  inline bool get_skipClone();

  /// @brief Method get_stylesheetPaths, addr 0x7149004, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_stylesheetPaths();

  /// @brief Method get_stylesheets, addr 0x7149094, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* get_stylesheets();

  /// @brief Method set_ruleIndex, addr 0x7148ff4, size 0x8, virtual false, abstract: false, final false
  inline void set_ruleIndex(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElementAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualElementAsset", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElementAsset(VisualElementAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElementAsset", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElementAsset(VisualElementAsset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5297 };

  /// @brief Field k_LostInlineStyles offset 0xffffffff size 0x8
  static constexpr ::ConstString k_LostInlineStyles{ u"VisualElementAsset previously had inline styles that were lost." };

  /// [SerializeField]
  /// @brief Field m_RuleIndex, offset: 0x58, size: 0x4, def value: None
  int32_t ___m_RuleIndex;

  /// [SerializeField]
  /// @brief Field m_Classes, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::StringW> ___m_Classes;

  /// [SerializeField]
  /// @brief Field m_StylesheetPaths, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___m_StylesheetPaths;

  /// [SerializeField]
  /// @brief Field m_Stylesheets, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* ___m_Stylesheets;

  /// [SerializeReference]
  /// @brief Field m_SerializedData, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlSerializedData* ___m_SerializedData;

  /// [SerializeField]
  /// @brief Field m_SkipClone, offset: 0x80, size: 0x1, def value: None
  bool ___m_SkipClone;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualElementAsset, ___m_RuleIndex) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementAsset, ___m_Classes) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementAsset, ___m_StylesheetPaths) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementAsset, ___m_Stylesheets) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementAsset, ___m_SerializedData) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementAsset, ___m_SkipClone) == 0x80, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::VisualElementAsset) == 0x88, "Size mismatch!");

} // namespace UnityEngine::UIElements
