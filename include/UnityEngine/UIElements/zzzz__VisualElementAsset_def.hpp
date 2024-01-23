#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PickingMode_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VisualElementAsset)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualElementAsset;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualElementAsset);
// Type: UnityEngine.UIElements::VisualElementAsset
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6823))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7013))
// CS Name: ::UnityEngine.UIElements::VisualElementAsset*
class CORDL_TYPE VisualElementAsset : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Name, put = __cordl_internal_set_m_Name))::StringW m_Name;

  /// @brief Field m_Id, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Id, put = __cordl_internal_set_m_Id)) int32_t m_Id;

  /// @brief Field m_OrderInDocument, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_OrderInDocument, put = __cordl_internal_set_m_OrderInDocument)) int32_t m_OrderInDocument;

  /// @brief Field m_ParentId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ParentId, put = __cordl_internal_set_m_ParentId)) int32_t m_ParentId;

  /// @brief Field m_RuleIndex, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RuleIndex, put = __cordl_internal_set_m_RuleIndex)) int32_t m_RuleIndex;

  /// @brief Field m_Text, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text))::StringW m_Text;

  /// @brief Field m_PickingMode, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PickingMode, put = __cordl_internal_set_m_PickingMode))::UnityEngine::UIElements::PickingMode m_PickingMode;

  /// @brief Field m_FullTypeName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FullTypeName, put = __cordl_internal_set_m_FullTypeName))::StringW m_FullTypeName;

  /// @brief Field m_Classes, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Classes, put = __cordl_internal_set_m_Classes))::ArrayW<::StringW, ::Array<::StringW>*> m_Classes;

  /// @brief Field m_StylesheetPaths, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StylesheetPaths, put = __cordl_internal_set_m_StylesheetPaths))::System::Collections::Generic::List_1<::StringW>* m_StylesheetPaths;

  /// @brief Field m_Stylesheets, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Stylesheets,
                      put = __cordl_internal_set_m_Stylesheets))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* m_Stylesheets;

  /// @brief Field m_Properties, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Properties, put = __cordl_internal_set_m_Properties))::System::Collections::Generic::List_1<::StringW>* m_Properties;

  __declspec(property(get = get_id)) int32_t id;

  __declspec(property(get = get_orderInDocument)) int32_t orderInDocument;

  __declspec(property(get = get_parentId)) int32_t parentId;

  __declspec(property(get = get_ruleIndex)) int32_t ruleIndex;

  __declspec(property(get = get_fullTypeName))::StringW fullTypeName;

  __declspec(property(get = get_classes))::ArrayW<::StringW, ::Array<::StringW>*> classes;

  __declspec(property(get = get_stylesheetPaths))::System::Collections::Generic::List_1<::StringW>* stylesheetPaths;

  __declspec(property(get = get_hasStylesheetPaths)) bool hasStylesheetPaths;

  __declspec(property(get = get_stylesheets))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* stylesheets;

  __declspec(property(get = get_hasStylesheets)) bool hasStylesheets;

  /// @brief Convert operator to "::UnityEngine::UIElements::IUxmlAttributes"
  constexpr operator ::UnityEngine::UIElements::IUxmlAttributes*() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IUxmlAttributes"
  constexpr ::UnityEngine::UIElements::IUxmlAttributes* i___UnityEngine__UIElements__IUxmlAttributes() noexcept;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

  constexpr ::StringW& __cordl_internal_get_m_Name();

  constexpr ::StringW const& __cordl_internal_get_m_Name() const;

  constexpr void __cordl_internal_set_m_Name(::StringW value);

  constexpr int32_t& __cordl_internal_get_m_Id();

  constexpr int32_t const& __cordl_internal_get_m_Id() const;

  constexpr void __cordl_internal_set_m_Id(int32_t value);

  constexpr int32_t& __cordl_internal_get_m_OrderInDocument();

  constexpr int32_t const& __cordl_internal_get_m_OrderInDocument() const;

  constexpr void __cordl_internal_set_m_OrderInDocument(int32_t value);

  constexpr int32_t& __cordl_internal_get_m_ParentId();

  constexpr int32_t const& __cordl_internal_get_m_ParentId() const;

  constexpr void __cordl_internal_set_m_ParentId(int32_t value);

  constexpr int32_t& __cordl_internal_get_m_RuleIndex();

  constexpr int32_t const& __cordl_internal_get_m_RuleIndex() const;

  constexpr void __cordl_internal_set_m_RuleIndex(int32_t value);

  constexpr ::StringW& __cordl_internal_get_m_Text();

  constexpr ::StringW const& __cordl_internal_get_m_Text() const;

  constexpr void __cordl_internal_set_m_Text(::StringW value);

  constexpr ::UnityEngine::UIElements::PickingMode& __cordl_internal_get_m_PickingMode();

  constexpr ::UnityEngine::UIElements::PickingMode const& __cordl_internal_get_m_PickingMode() const;

  constexpr void __cordl_internal_set_m_PickingMode(::UnityEngine::UIElements::PickingMode value);

  constexpr ::StringW& __cordl_internal_get_m_FullTypeName();

  constexpr ::StringW const& __cordl_internal_get_m_FullTypeName() const;

  constexpr void __cordl_internal_set_m_FullTypeName(::StringW value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_m_Classes();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_m_Classes() const;

  constexpr void __cordl_internal_set_m_Classes(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_StylesheetPaths();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_m_StylesheetPaths() const;

  constexpr void __cordl_internal_set_m_StylesheetPaths(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*& __cordl_internal_get_m_Stylesheets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*> const& __cordl_internal_get_m_Stylesheets() const;

  constexpr void __cordl_internal_set_m_Stylesheets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_Properties();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_m_Properties() const;

  constexpr void __cordl_internal_set_m_Properties(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method get_id, addr 0x2e122c0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_id();

  /// @brief Method get_orderInDocument, addr 0x2e131d0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_orderInDocument();

  /// @brief Method get_parentId, addr 0x2e12094, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_parentId();

  /// @brief Method get_ruleIndex, addr 0x2e1318c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ruleIndex();

  /// @brief Method get_fullTypeName, addr 0x2e13454, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_fullTypeName();

  /// @brief Method get_classes, addr 0x2e13658, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_classes();

  /// @brief Method get_stylesheetPaths, addr 0x2e13670, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_stylesheetPaths();

  /// @brief Method get_hasStylesheetPaths, addr 0x2e13660, size 0x10, virtual false, abstract: false, final false
  inline bool get_hasStylesheetPaths();

  /// @brief Method get_stylesheets, addr 0x2e13700, size 0x80, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* get_stylesheets();

  /// @brief Method get_hasStylesheets, addr 0x2e136f0, size 0x10, virtual false, abstract: false, final false
  inline bool get_hasStylesheets();

  /// @brief Method OnBeforeSerialize, addr 0x2e14ad4, size 0x4, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  /// @brief Method OnAfterDeserialize, addr 0x2e14ad8, size 0x188, virtual true, abstract: false, final true
  inline void OnAfterDeserialize();

  /// @brief Method AddProperty, addr 0x2e14c60, size 0x4, virtual false, abstract: false, final false
  inline void AddProperty(::StringW propertyName, ::StringW propertyValue);

  /// @brief Method SetOrAddProperty, addr 0x2e14c64, size 0x210, virtual false, abstract: false, final false
  inline void SetOrAddProperty(::StringW propertyName, ::StringW propertyValue);

  /// @brief Method TryGetAttributeValue, addr 0x2e14e74, size 0xd0, virtual true, abstract: false, final true
  inline bool TryGetAttributeValue(::StringW propertyName, ByRef<::StringW> value);

  // Ctor Parameters [CppParam { name: "", ty: "VisualElementAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElementAsset(VisualElementAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElementAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElementAsset(VisualElementAsset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElementAsset();

public:
  /// @brief Field m_Name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_Name;

  /// @brief Field m_Id, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_Id;

  /// @brief Field m_OrderInDocument, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_OrderInDocument;

  /// @brief Field m_ParentId, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_ParentId;

  /// @brief Field m_RuleIndex, offset: 0x24, size: 0x4, def value: None
  int32_t ___m_RuleIndex;

  /// @brief Field m_Text, offset: 0x28, size: 0x8, def value: None
  ::StringW ___m_Text;

  /// @brief Field m_PickingMode, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::UIElements::PickingMode ___m_PickingMode;

  /// @brief Field m_FullTypeName, offset: 0x38, size: 0x8, def value: None
  ::StringW ___m_FullTypeName;

  /// @brief Field m_Classes, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_Classes;

  /// @brief Field m_StylesheetPaths, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___m_StylesheetPaths;

  /// @brief Field m_Stylesheets, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* ___m_Stylesheets;

  /// @brief Field m_Properties, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___m_Properties;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElementAsset, 0x60>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementAsset, ___m_Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementAsset, ___m_Id) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementAsset, ___m_OrderInDocument) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementAsset, ___m_ParentId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementAsset, ___m_RuleIndex) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementAsset, ___m_Text) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementAsset, ___m_PickingMode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementAsset, ___m_FullTypeName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementAsset, ___m_Classes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementAsset, ___m_StylesheetPaths) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementAsset, ___m_Stylesheets) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::VisualElementAsset, ___m_Properties) == 0x58, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualElementAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementAsset*, "UnityEngine.UIElements", "VisualElementAsset");
