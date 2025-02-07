#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualElementAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PickingMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlAsset_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VisualElementAsset)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualElementAsset;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualElementAsset);
// Dependencies UnityEngine.ISerializationCallbackReceiver, UnityEngine.UIElements.PickingMode, UnityEngine.UIElements.UxmlAsset
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualElementAsset
class CORDL_TYPE VisualElementAsset : public ::UnityEngine::UIElements::UxmlAsset {
public:
  // Declarations
  __declspec(property(get = get_classes)) ::ArrayW<::StringW, ::Array<::StringW>*> classes;

  __declspec(property(get = get_hasStylesheetPaths)) bool hasStylesheetPaths;

  __declspec(property(get = get_hasStylesheets)) bool hasStylesheets;

  /// @brief Field m_Classes, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Classes, put = __cordl_internal_set_m_Classes)) ::ArrayW<::StringW, ::Array<::StringW>*> m_Classes;

  /// @brief Field m_Name, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Name, put = __cordl_internal_set_m_Name)) ::StringW m_Name;

  /// @brief Field m_PickingMode, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PickingMode, put = __cordl_internal_set_m_PickingMode)) ::UnityEngine::UIElements::PickingMode m_PickingMode;

  /// @brief Field m_RuleIndex, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RuleIndex, put = __cordl_internal_set_m_RuleIndex)) int32_t m_RuleIndex;

  /// @brief Field m_SkipClone, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SkipClone, put = __cordl_internal_set_m_SkipClone)) bool m_SkipClone;

  /// @brief Field m_StylesheetPaths, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StylesheetPaths, put = __cordl_internal_set_m_StylesheetPaths)) ::System::Collections::Generic::List_1<::StringW>* m_StylesheetPaths;

  /// @brief Field m_Stylesheets, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Stylesheets,
                      put = __cordl_internal_set_m_Stylesheets)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* m_Stylesheets;

  /// @brief Field m_Text, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text)) ::StringW m_Text;

  __declspec(property(get = get_ruleIndex)) int32_t ruleIndex;

  __declspec(property(get = get_skipClone)) bool skipClone;

  __declspec(property(get = get_stylesheetPaths)) ::System::Collections::Generic::List_1<::StringW>* stylesheetPaths;

  __declspec(property(get = get_stylesheets)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* stylesheets;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Method OnAfterDeserialize, addr 0x4aa875c, size 0x188, virtual true, abstract: false, final true
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x4aa8758, size 0x4, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_m_Classes() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_m_Classes();

  constexpr ::StringW const& __cordl_internal_get_m_Name() const;

  constexpr ::StringW& __cordl_internal_get_m_Name();

  constexpr ::UnityEngine::UIElements::PickingMode const& __cordl_internal_get_m_PickingMode() const;

  constexpr ::UnityEngine::UIElements::PickingMode& __cordl_internal_get_m_PickingMode();

  constexpr int32_t const& __cordl_internal_get_m_RuleIndex() const;

  constexpr int32_t& __cordl_internal_get_m_RuleIndex();

  constexpr bool const& __cordl_internal_get_m_SkipClone() const;

  constexpr bool& __cordl_internal_get_m_SkipClone();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_m_StylesheetPaths() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_StylesheetPaths();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* const& __cordl_internal_get_m_Stylesheets() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*& __cordl_internal_get_m_Stylesheets();

  constexpr ::StringW const& __cordl_internal_get_m_Text() const;

  constexpr ::StringW& __cordl_internal_get_m_Text();

  constexpr void __cordl_internal_set_m_Classes(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_m_Name(::StringW value);

  constexpr void __cordl_internal_set_m_PickingMode(::UnityEngine::UIElements::PickingMode value);

  constexpr void __cordl_internal_set_m_RuleIndex(int32_t value);

  constexpr void __cordl_internal_set_m_SkipClone(bool value);

  constexpr void __cordl_internal_set_m_StylesheetPaths(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_m_Stylesheets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* value);

  constexpr void __cordl_internal_set_m_Text(::StringW value);

  /// @brief Method get_classes, addr 0x4aa8638, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_classes();

  /// @brief Method get_hasStylesheetPaths, addr 0x4aa86b8, size 0x10, virtual false, abstract: false, final false
  inline bool get_hasStylesheetPaths();

  /// @brief Method get_hasStylesheets, addr 0x4aa8740, size 0x10, virtual false, abstract: false, final false
  inline bool get_hasStylesheets();

  /// @brief Method get_ruleIndex, addr 0x4aa8630, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ruleIndex();

  /// @brief Method get_skipClone, addr 0x4aa8750, size 0x8, virtual false, abstract: false, final false
  inline bool get_skipClone();

  /// @brief Method get_stylesheetPaths, addr 0x4aa8640, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_stylesheetPaths();

  /// @brief Method get_stylesheets, addr 0x4aa86c8, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* get_stylesheets();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElementAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualElementAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElementAsset(VisualElementAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElementAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElementAsset(VisualElementAsset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6285 };

  /// @brief Field m_Name, offset: 0x30, size: 0x8, def value: None
  ::StringW ___m_Name;

  /// @brief Field m_RuleIndex, offset: 0x38, size: 0x4, def value: None
  int32_t ___m_RuleIndex;

  /// @brief Field m_Text, offset: 0x40, size: 0x8, def value: None
  ::StringW ___m_Text;

  /// @brief Field m_PickingMode, offset: 0x48, size: 0x4, def value: None
  ::UnityEngine::UIElements::PickingMode ___m_PickingMode;

  /// @brief Field m_Classes, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_Classes;

  /// @brief Field m_StylesheetPaths, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___m_StylesheetPaths;

  /// @brief Field m_Stylesheets, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* ___m_Stylesheets;

  /// @brief Field m_SkipClone, offset: 0x68, size: 0x1, def value: None
  bool ___m_SkipClone;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::VisualElementAsset, ___m_Name) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementAsset, ___m_RuleIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementAsset, ___m_Text) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementAsset, ___m_PickingMode) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementAsset, ___m_Classes) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementAsset, ___m_StylesheetPaths) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementAsset, ___m_Stylesheets) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementAsset, ___m_SkipClone) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElementAsset, 0x70>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualElementAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementAsset*, "UnityEngine.UIElements", "VisualElementAsset");
