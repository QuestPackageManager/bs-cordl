#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugUI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugUI)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Action;
}
namespace System {
class Enum;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Rendering {
class DebugUI_BitField;
}
namespace UnityEngine::Rendering {
class DebugUI_BoolField;
}
namespace UnityEngine::Rendering {
class DebugUI_Button;
}
namespace UnityEngine::Rendering {
class DebugUI_ColorField;
}
namespace UnityEngine::Rendering {
class DebugUI_Container;
}
namespace UnityEngine::Rendering {
template <typename T> class DebugUI_EnumField_1;
}
namespace UnityEngine::Rendering {
class DebugUI_EnumField;
}
namespace UnityEngine::Rendering {
template <typename T> class DebugUI_Field_1;
}
namespace UnityEngine::Rendering {
struct DebugUI_Flags;
}
namespace UnityEngine::Rendering {
class DebugUI_FloatField;
}
namespace UnityEngine::Rendering {
class DebugUI_Foldout;
}
namespace UnityEngine::Rendering {
class DebugUI_HBox;
}
namespace UnityEngine::Rendering {
class DebugUI_HistoryBoolField;
}
namespace UnityEngine::Rendering {
class DebugUI_HistoryEnumField;
}
namespace UnityEngine::Rendering {
class DebugUI_IContainer;
}
namespace UnityEngine::Rendering {
class DebugUI_IValueField;
}
namespace UnityEngine::Rendering {
class DebugUI_IntField;
}
namespace UnityEngine::Rendering {
class DebugUI_MaskField;
}
namespace UnityEngine::Rendering {
class DebugUI_MessageBox;
}
namespace UnityEngine::Rendering {
class DebugUI_ObjectField;
}
namespace UnityEngine::Rendering {
class DebugUI_ObjectListField;
}
namespace UnityEngine::Rendering {
class DebugUI_ObjectPopupField;
}
namespace UnityEngine::Rendering {
class DebugUI_Panel;
}
namespace UnityEngine::Rendering {
class DebugUI_ProgressBarValue;
}
namespace UnityEngine::Rendering {
class DebugUI_RuntimeDebugShadersMessageBox;
}
namespace UnityEngine::Rendering {
class DebugUI_Table;
}
namespace UnityEngine::Rendering {
class DebugUI_UIntField;
}
namespace UnityEngine::Rendering {
class DebugUI_VBox;
}
namespace UnityEngine::Rendering {
class DebugUI_ValueTuple;
}
namespace UnityEngine::Rendering {
class DebugUI_Value;
}
namespace UnityEngine::Rendering {
class DebugUI_Vector2Field;
}
namespace UnityEngine::Rendering {
class DebugUI_Vector3Field;
}
namespace UnityEngine::Rendering {
class DebugUI_Vector4Field;
}
namespace UnityEngine::Rendering {
class DebugUI_Widget;
}
namespace UnityEngine::Rendering {
template <typename T> class EnumField_1_DebugUI___c;
}
namespace UnityEngine::Rendering {
class EnumField_DebugUI___c;
}
namespace UnityEngine::Rendering {
struct Foldout_DebugUI_ContextMenuItem;
}
namespace UnityEngine::Rendering {
template <typename T> class ListChangedEventArgs_1;
}
namespace UnityEngine::Rendering {
struct MessageBox_DebugUI_Style;
}
namespace UnityEngine::Rendering {
template <typename T> class ObservableList_1;
}
namespace UnityEngine::Rendering {
class Panel_DebugUI___c;
}
namespace UnityEngine::Rendering {
class RuntimeDebugShadersMessageBox_DebugUI___c;
}
namespace UnityEngine::Rendering {
class Table_DebugUI_Row;
}
namespace UnityEngine::Rendering {
struct Widget_DebugUI_NameAndTooltip;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GUIContent;
}
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct DebugUI_Flags;
}
namespace UnityEngine::Rendering {
struct MessageBox_DebugUI_Style;
}
namespace UnityEngine::Rendering {
class DebugUI;
}
namespace UnityEngine::Rendering {
class DebugUI_BitField;
}
namespace UnityEngine::Rendering {
class DebugUI_BoolField;
}
namespace UnityEngine::Rendering {
class DebugUI_Button;
}
namespace UnityEngine::Rendering {
class DebugUI_ColorField;
}
namespace UnityEngine::Rendering {
class DebugUI_Container;
}
namespace UnityEngine::Rendering {
class DebugUI_EnumField;
}
namespace UnityEngine::Rendering {
template <typename T> class DebugUI_EnumField_1;
}
namespace UnityEngine::Rendering {
template <typename T> class DebugUI_Field_1;
}
namespace UnityEngine::Rendering {
class DebugUI_FloatField;
}
namespace UnityEngine::Rendering {
class DebugUI_Foldout;
}
namespace UnityEngine::Rendering {
class DebugUI_HBox;
}
namespace UnityEngine::Rendering {
class DebugUI_HistoryBoolField;
}
namespace UnityEngine::Rendering {
class DebugUI_HistoryEnumField;
}
namespace UnityEngine::Rendering {
class DebugUI_IContainer;
}
namespace UnityEngine::Rendering {
class DebugUI_IValueField;
}
namespace UnityEngine::Rendering {
class DebugUI_IntField;
}
namespace UnityEngine::Rendering {
class DebugUI_MaskField;
}
namespace UnityEngine::Rendering {
class DebugUI_MessageBox;
}
namespace UnityEngine::Rendering {
class DebugUI_ObjectField;
}
namespace UnityEngine::Rendering {
class DebugUI_ObjectListField;
}
namespace UnityEngine::Rendering {
class DebugUI_ObjectPopupField;
}
namespace UnityEngine::Rendering {
class DebugUI_Panel;
}
namespace UnityEngine::Rendering {
class DebugUI_ProgressBarValue;
}
namespace UnityEngine::Rendering {
class DebugUI_RuntimeDebugShadersMessageBox;
}
namespace UnityEngine::Rendering {
class DebugUI_Table;
}
namespace UnityEngine::Rendering {
class DebugUI_UIntField;
}
namespace UnityEngine::Rendering {
class DebugUI_VBox;
}
namespace UnityEngine::Rendering {
class DebugUI_Value;
}
namespace UnityEngine::Rendering {
class DebugUI_ValueTuple;
}
namespace UnityEngine::Rendering {
class DebugUI_Vector2Field;
}
namespace UnityEngine::Rendering {
class DebugUI_Vector3Field;
}
namespace UnityEngine::Rendering {
class DebugUI_Vector4Field;
}
namespace UnityEngine::Rendering {
class DebugUI_Widget;
}
namespace UnityEngine::Rendering {
template <typename T> class EnumField_1_DebugUI___c;
}
namespace UnityEngine::Rendering {
class EnumField_DebugUI___c;
}
namespace UnityEngine::Rendering {
class Panel_DebugUI___c;
}
namespace UnityEngine::Rendering {
class RuntimeDebugShadersMessageBox_DebugUI___c;
}
namespace UnityEngine::Rendering {
class Table_DebugUI_Row;
}
namespace UnityEngine::Rendering {
struct Foldout_DebugUI_ContextMenuItem;
}
namespace UnityEngine::Rendering {
struct Widget_DebugUI_NameAndTooltip;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::DebugUI_Flags);
MARK_VAL_T(::UnityEngine::Rendering::MessageBox_DebugUI_Style);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUI);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUI_BitField);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUI_BoolField);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUI_Button);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUI_ColorField);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUI_Container);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUI_EnumField);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::DebugUI_EnumField_1);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::DebugUI_Field_1);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUI_FloatField);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUI_Foldout);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUI_HBox);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUI_HistoryBoolField);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUI_HistoryEnumField);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUI_IContainer);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUI_IValueField);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUI_IntField);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUI_MaskField);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUI_MessageBox);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUI_ObjectField);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUI_ObjectListField);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUI_ObjectPopupField);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUI_Panel);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUI_ProgressBarValue);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUI_RuntimeDebugShadersMessageBox);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUI_Table);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUI_UIntField);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUI_VBox);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUI_Value);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUI_ValueTuple);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUI_Vector2Field);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUI_Vector3Field);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUI_Vector4Field);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugUI_Widget);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::EnumField_1_DebugUI___c);
MARK_REF_PTR_T(::UnityEngine::Rendering::EnumField_DebugUI___c);
MARK_REF_PTR_T(::UnityEngine::Rendering::Panel_DebugUI___c);
MARK_REF_PTR_T(::UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c);
MARK_REF_PTR_T(::UnityEngine::Rendering::Table_DebugUI_Row);
MARK_VAL_T(::UnityEngine::Rendering::Foldout_DebugUI_ContextMenuItem);
MARK_VAL_T(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.DebugUI/Flags
struct CORDL_TYPE DebugUI_Flags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DebugUI_Flags_Unwrapped
  enum struct __DebugUI_Flags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_EditorOnly = static_cast<int32_t>(0x2),
    __E_RuntimeOnly = static_cast<int32_t>(0x4),
    __E_EditorForceUpdate = static_cast<int32_t>(0x8),
    __E_FrequentlyUsed = static_cast<int32_t>(0x10),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DebugUI_Flags_Unwrapped() const noexcept {
    return static_cast<__DebugUI_Flags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI_Flags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DebugUI_Flags(int32_t value__) noexcept;

  /// @brief Field EditorForceUpdate value: I32(8)
  static ::UnityEngine::Rendering::DebugUI_Flags const EditorForceUpdate;

  /// @brief Field EditorOnly value: I32(2)
  static ::UnityEngine::Rendering::DebugUI_Flags const EditorOnly;

  /// @brief Field FrequentlyUsed value: I32(16)
  static ::UnityEngine::Rendering::DebugUI_Flags const FrequentlyUsed;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Rendering::DebugUI_Flags const None;

  /// @brief Field RuntimeOnly value: I32(4)
  static ::UnityEngine::Rendering::DebugUI_Flags const RuntimeOnly;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11972 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Flags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUI_Flags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Rendering.DebugUI::Flags
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/Widget
class CORDL_TYPE DebugUI_Widget : public ::System::Object {
public:
  // Declarations
  using NameAndTooltip = ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip;

  /// @brief Field <displayName>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__displayName_k__BackingField, put = __cordl_internal_set__displayName_k__BackingField)) ::StringW _displayName_k__BackingField;

  /// @brief Field <flags>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__flags_k__BackingField, put = __cordl_internal_set__flags_k__BackingField)) ::UnityEngine::Rendering::DebugUI_Flags _flags_k__BackingField;

  /// @brief Field <queryPath>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__queryPath_k__BackingField, put = __cordl_internal_set__queryPath_k__BackingField)) ::StringW _queryPath_k__BackingField;

  /// @brief Field <tooltip>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__tooltip_k__BackingField, put = __cordl_internal_set__tooltip_k__BackingField)) ::StringW _tooltip_k__BackingField;

  __declspec(property(get = get_displayName, put = set_displayName)) ::StringW displayName;

  __declspec(property(get = get_flags, put = set_flags)) ::UnityEngine::Rendering::DebugUI_Flags flags;

  __declspec(property(get = get_isEditorOnly)) bool isEditorOnly;

  __declspec(property(get = get_isHidden)) bool isHidden;

  /// @brief Field isHiddenCallback, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_isHiddenCallback, put = __cordl_internal_set_isHiddenCallback)) ::System::Func_1<bool>* isHiddenCallback;

  __declspec(property(get = get_isInactiveInEditor)) bool isInactiveInEditor;

  __declspec(property(get = get_isRuntimeOnly)) bool isRuntimeOnly;

  /// @brief Field m_Panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Panel, put = __cordl_internal_set_m_Panel)) ::UnityEngine::Rendering::DebugUI_Panel* m_Panel;

  /// @brief Field m_Parent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Parent, put = __cordl_internal_set_m_Parent)) ::UnityEngine::Rendering::DebugUI_IContainer* m_Parent;

  __declspec(property(put = set_nameAndTooltip)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip nameAndTooltip;

  __declspec(property(get = get_panel, put = set_panel)) ::UnityEngine::Rendering::DebugUI_Panel* panel;

  __declspec(property(get = get_parent, put = set_parent)) ::UnityEngine::Rendering::DebugUI_IContainer* parent;

  __declspec(property(get = get_queryPath, put = set_queryPath)) ::StringW queryPath;

  __declspec(property(get = get_tooltip, put = set_tooltip)) ::StringW tooltip;

  /// @brief Method GenerateQueryPath, addr 0x65b2d68, size 0xec, virtual true, abstract: false, final false
  inline void GenerateQueryPath();

  /// @brief Method GetHashCode, addr 0x65b3a38, size 0x70, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::Rendering::DebugUI_Widget* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__displayName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__displayName_k__BackingField();

  constexpr ::UnityEngine::Rendering::DebugUI_Flags const& __cordl_internal_get__flags_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::DebugUI_Flags& __cordl_internal_get__flags_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__queryPath_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__queryPath_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__tooltip_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__tooltip_k__BackingField();

  constexpr ::System::Func_1<bool>* const& __cordl_internal_get_isHiddenCallback() const;

  constexpr ::System::Func_1<bool>*& __cordl_internal_get_isHiddenCallback();

  constexpr ::UnityEngine::Rendering::DebugUI_Panel* const& __cordl_internal_get_m_Panel() const;

  constexpr ::UnityEngine::Rendering::DebugUI_Panel*& __cordl_internal_get_m_Panel();

  constexpr ::UnityEngine::Rendering::DebugUI_IContainer* const& __cordl_internal_get_m_Parent() const;

  constexpr ::UnityEngine::Rendering::DebugUI_IContainer*& __cordl_internal_get_m_Parent();

  constexpr void __cordl_internal_set__displayName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__flags_k__BackingField(::UnityEngine::Rendering::DebugUI_Flags value);

  constexpr void __cordl_internal_set__queryPath_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__tooltip_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_isHiddenCallback(::System::Func_1<bool>* value);

  constexpr void __cordl_internal_set_m_Panel(::UnityEngine::Rendering::DebugUI_Panel* value);

  constexpr void __cordl_internal_set_m_Parent(::UnityEngine::Rendering::DebugUI_IContainer* value);

  /// @brief Method .ctor, addr 0x65b2ca4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_displayName, addr 0x65b3964, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_displayName();

  /// @brief Method get_flags, addr 0x65b3954, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DebugUI_Flags get_flags();

  /// @brief Method get_isEditorOnly, addr 0x65b3994, size 0xc, virtual false, abstract: false, final false
  inline bool get_isEditorOnly();

  /// @brief Method get_isHidden, addr 0x65b311c, size 0x20, virtual false, abstract: false, final false
  inline bool get_isHidden();

  /// @brief Method get_isInactiveInEditor, addr 0x65b39ac, size 0x8c, virtual false, abstract: false, final false
  inline bool get_isInactiveInEditor();

  /// @brief Method get_isRuntimeOnly, addr 0x65b39a0, size 0xc, virtual false, abstract: false, final false
  inline bool get_isRuntimeOnly();

  /// @brief Method get_panel, addr 0x65b3934, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::DebugUI_Panel* get_panel();

  /// @brief Method get_parent, addr 0x65b3944, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::DebugUI_IContainer* get_parent();

  /// @brief Method get_queryPath, addr 0x65b3984, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_queryPath();

  /// @brief Method get_tooltip, addr 0x65b3974, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_tooltip();

  /// @brief Method set_displayName, addr 0x65b396c, size 0x8, virtual true, abstract: false, final true
  inline void set_displayName(::StringW value);

  /// @brief Method set_flags, addr 0x65b395c, size 0x8, virtual false, abstract: false, final false
  inline void set_flags(::UnityEngine::Rendering::DebugUI_Flags value);

  /// @brief Method set_nameAndTooltip, addr 0x65a8880, size 0x8, virtual false, abstract: false, final false
  inline void set_nameAndTooltip(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  /// @brief Method set_panel, addr 0x65b393c, size 0x8, virtual true, abstract: false, final false
  inline void set_panel(::UnityEngine::Rendering::DebugUI_Panel* value);

  /// @brief Method set_parent, addr 0x65b394c, size 0x8, virtual true, abstract: false, final false
  inline void set_parent(::UnityEngine::Rendering::DebugUI_IContainer* value);

  /// @brief Method set_queryPath, addr 0x65b398c, size 0x8, virtual false, abstract: false, final false
  inline void set_queryPath(::StringW value);

  /// @brief Method set_tooltip, addr 0x65b397c, size 0x8, virtual false, abstract: false, final false
  inline void set_tooltip(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI_Widget();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_Widget", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUI_Widget(DebugUI_Widget&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_Widget", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI_Widget(DebugUI_Widget const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11974 };

  /// @brief Field m_Panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugUI_Panel* ___m_Panel;

  /// @brief Field m_Parent, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugUI_IContainer* ___m_Parent;

  /// @brief Field <flags>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::Rendering::DebugUI_Flags ____flags_k__BackingField;

  /// @brief Field <displayName>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____displayName_k__BackingField;

  /// @brief Field <tooltip>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____tooltip_k__BackingField;

  /// @brief Field <queryPath>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::StringW ____queryPath_k__BackingField;

  /// @brief Field isHiddenCallback, offset: 0x40, size: 0x8, def value: None
  ::System::Func_1<bool>* ___isHiddenCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Widget, ___m_Panel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Widget, ___m_Parent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Widget, ____flags_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Widget, ____displayName_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Widget, ____tooltip_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Widget, ____queryPath_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Widget, ___isHiddenCallback) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUI_Widget, 0x48>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DebugUI::Widget
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/Container
class CORDL_TYPE DebugUI_Container : public ::UnityEngine::Rendering::DebugUI_Widget {
public:
  // Declarations
  /// @brief Field <children>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__children_k__BackingField,
                      put = __cordl_internal_set__children_k__BackingField)) ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* _children_k__BackingField;

  __declspec(property(get = get_children, put = set_children)) ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* children;

  __declspec(property(get = get_hideDisplayName)) bool hideDisplayName;

  __declspec(property(get = get_panel, put = set_panel)) ::UnityEngine::Rendering::DebugUI_Panel* panel;

  /// @brief Convert operator to "::UnityEngine::Rendering::DebugUI_IContainer"
  constexpr operator ::UnityEngine::Rendering::DebugUI_IContainer*() noexcept;

  /// @brief Method GenerateQueryPath, addr 0x65b2ca8, size 0xc0, virtual true, abstract: false, final false
  inline void GenerateQueryPath();

  /// @brief Method GetHashCode, addr 0x65b2ff4, size 0x128, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::Rendering::DebugUI_Container* New_ctor();

  static inline ::UnityEngine::Rendering::DebugUI_Container* New_ctor(::StringW displayName, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* children);

  static inline ::UnityEngine::Rendering::DebugUI_Container* New_ctor(::StringW id);

  /// @brief Method OnItemAdded, addr 0x65b2e54, size 0x68, virtual true, abstract: false, final false
  inline void OnItemAdded(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* sender,
                          ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI_Widget*>* e);

  /// @brief Method OnItemRemoved, addr 0x65b2f8c, size 0x68, virtual true, abstract: false, final false
  inline void OnItemRemoved(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* sender,
                            ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI_Widget*>* e);

  constexpr ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* const& __cordl_internal_get__children_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*& __cordl_internal_get__children_k__BackingField();

  constexpr void __cordl_internal_set__children_k__BackingField(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* value);

  /// @brief Method .ctor, addr 0x65b295c, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x65b29f8, size 0x1e4, virtual false, abstract: false, final false
  inline void _ctor(::StringW displayName, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* children);

  /// @brief Method .ctor, addr 0x65b2bdc, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::StringW id);

  /// @brief Method get_children, addr 0x65b2874, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* get_children();

  /// @brief Method get_hideDisplayName, addr 0x65b2808, size 0x6c, virtual false, abstract: false, final false
  inline bool get_hideDisplayName();

  /// @brief Method get_panel, addr 0x65b2884, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::DebugUI_Panel* get_panel();

  /// @brief Convert to "::UnityEngine::Rendering::DebugUI_IContainer"
  constexpr ::UnityEngine::Rendering::DebugUI_IContainer* i___UnityEngine__Rendering__DebugUI_IContainer() noexcept;

  /// @brief Method set_children, addr 0x65b287c, size 0x8, virtual false, abstract: false, final false
  inline void set_children(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* value);

  /// @brief Method set_panel, addr 0x65b288c, size 0xd0, virtual true, abstract: false, final false
  inline void set_panel(::UnityEngine::Rendering::DebugUI_Panel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI_Container();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_Container", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUI_Container(DebugUI_Container&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_Container", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI_Container(DebugUI_Container const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11965 };

  /// @brief Field k_IDToken offset 0xffffffff size 0x8
  static constexpr ::ConstString k_IDToken{ u"#" };

  /// @brief Field <children>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* ____children_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Container, ____children_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUI_Container, 0x50>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.DebugUI/Foldout/ContextMenuItem
struct CORDL_TYPE Foldout_DebugUI_ContextMenuItem {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Foldout_DebugUI_ContextMenuItem();

  // Ctor Parameters [CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "action", ty: "::System::Action*", modifiers: "", def_value: None }]
  constexpr Foldout_DebugUI_ContextMenuItem(::StringW displayName, ::System::Action* action) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11966 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field displayName, offset: 0x0, size: 0x8, def value: None
  ::StringW displayName;

  /// @brief Field action, offset: 0x8, size: 0x8, def value: None
  ::System::Action* action;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Foldout_DebugUI_ContextMenuItem, displayName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Foldout_DebugUI_ContextMenuItem, action) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Foldout_DebugUI_ContextMenuItem, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DebugUI::Container
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/Foldout
class CORDL_TYPE DebugUI_Foldout : public ::UnityEngine::Rendering::DebugUI_Container {
public:
  // Declarations
  using ContextMenuItem = ::UnityEngine::Rendering::Foldout_DebugUI_ContextMenuItem;

  __declspec(property(get = get_columnLabels, put = set_columnLabels)) ::ArrayW<::StringW, ::Array<::StringW>*> columnLabels;

  __declspec(property(get = get_columnTooltips, put = set_columnTooltips)) ::ArrayW<::StringW, ::Array<::StringW>*> columnTooltips;

  /// @brief Field contextMenuItems, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_contextMenuItems,
                      put = __cordl_internal_set_contextMenuItems)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Foldout_DebugUI_ContextMenuItem>* contextMenuItems;

  /// @brief Field isHeader, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get_isHeader, put = __cordl_internal_set_isHeader)) bool isHeader;

  __declspec(property(get = get_isReadOnly)) bool isReadOnly;

  /// @brief Field m_ColumnLabels, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColumnLabels, put = __cordl_internal_set_m_ColumnLabels)) ::ArrayW<::StringW, ::Array<::StringW>*> m_ColumnLabels;

  /// @brief Field m_ColumnTooltips, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColumnTooltips, put = __cordl_internal_set_m_ColumnTooltips)) ::ArrayW<::StringW, ::Array<::StringW>*> m_ColumnTooltips;

  /// @brief Field m_Dirty, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Dirty, put = __cordl_internal_set_m_Dirty)) bool m_Dirty;

  /// @brief Field m_RowContents, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RowContents, put = __cordl_internal_set_m_RowContents)) ::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>* m_RowContents;

  /// @brief Field opened, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_opened, put = __cordl_internal_set_opened)) bool opened;

  __declspec(property(get = get_rowContents)) ::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>* rowContents;

  /// @brief Convert operator to "::UnityEngine::Rendering::DebugUI_IValueField"
  constexpr operator ::UnityEngine::Rendering::DebugUI_IValueField*() noexcept;

  /// @brief Method GetValue, addr 0x65b34bc, size 0x8, virtual false, abstract: false, final false
  inline bool GetValue();

  static inline ::UnityEngine::Rendering::DebugUI_Foldout* New_ctor();

  static inline ::UnityEngine::Rendering::DebugUI_Foldout* New_ctor(::StringW displayName, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* children,
                                                                    ::ArrayW<::StringW, ::Array<::StringW>*> columnLabels, ::ArrayW<::StringW, ::Array<::StringW>*> columnTooltips);

  /// @brief Method SetValue, addr 0x65b34e8, size 0x44, virtual true, abstract: false, final true
  inline void SetValue(::System::Object* value);

  /// @brief Method SetValue, addr 0x65b3534, size 0x8, virtual false, abstract: false, final false
  inline void SetValue(bool value);

  /// @brief Method UnityEngine.Rendering.DebugUI.IValueField.GetValue, addr 0x65b34c4, size 0x24, virtual true, abstract: false, final true
  inline ::System::Object* UnityEngine_Rendering_DebugUI_IValueField_GetValue();

  /// @brief Method ValidateValue, addr 0x65b352c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* ValidateValue(::System::Object* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Foldout_DebugUI_ContextMenuItem>* const& __cordl_internal_get_contextMenuItems() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Foldout_DebugUI_ContextMenuItem>*& __cordl_internal_get_contextMenuItems();

  constexpr bool const& __cordl_internal_get_isHeader() const;

  constexpr bool& __cordl_internal_get_isHeader();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_m_ColumnLabels() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_m_ColumnLabels();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_m_ColumnTooltips() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_m_ColumnTooltips();

  constexpr bool const& __cordl_internal_get_m_Dirty() const;

  constexpr bool& __cordl_internal_get_m_Dirty();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>* const& __cordl_internal_get_m_RowContents() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>*& __cordl_internal_get_m_RowContents();

  constexpr bool const& __cordl_internal_get_opened() const;

  constexpr bool& __cordl_internal_get_opened();

  constexpr void __cordl_internal_set_contextMenuItems(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Foldout_DebugUI_ContextMenuItem>* value);

  constexpr void __cordl_internal_set_isHeader(bool value);

  constexpr void __cordl_internal_set_m_ColumnLabels(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_m_ColumnTooltips(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_m_Dirty(bool value);

  constexpr void __cordl_internal_set_m_RowContents(::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>* value);

  constexpr void __cordl_internal_set_opened(bool value);

  /// @brief Method .ctor, addr 0x65ab828, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x65b340c, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::StringW displayName, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* children, ::ArrayW<::StringW, ::Array<::StringW>*> columnLabels,
                    ::ArrayW<::StringW, ::Array<::StringW>*> columnTooltips);

  /// @brief Method get_columnLabels, addr 0x65b3144, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_columnLabels();

  /// @brief Method get_columnTooltips, addr 0x65b314c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_columnTooltips();

  /// @brief Method get_isReadOnly, addr 0x65b313c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isReadOnly();

  /// @brief Method get_rowContents, addr 0x65b3164, size 0x2a8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>* get_rowContents();

  /// @brief Convert to "::UnityEngine::Rendering::DebugUI_IValueField"
  constexpr ::UnityEngine::Rendering::DebugUI_IValueField* i___UnityEngine__Rendering__DebugUI_IValueField() noexcept;

  /// @brief Method set_columnLabels, addr 0x65ab8a0, size 0x10, virtual false, abstract: false, final false
  inline void set_columnLabels(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method set_columnTooltips, addr 0x65b3154, size 0x10, virtual false, abstract: false, final false
  inline void set_columnTooltips(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI_Foldout();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_Foldout", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUI_Foldout(DebugUI_Foldout&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_Foldout", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI_Foldout(DebugUI_Foldout const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11967 };

  /// @brief Field opened, offset: 0x50, size: 0x1, def value: None
  bool ___opened;

  /// @brief Field isHeader, offset: 0x51, size: 0x1, def value: None
  bool ___isHeader;

  /// @brief Field contextMenuItems, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Foldout_DebugUI_ContextMenuItem>* ___contextMenuItems;

  /// @brief Field m_Dirty, offset: 0x60, size: 0x1, def value: None
  bool ___m_Dirty;

  /// @brief Field m_ColumnLabels, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_ColumnLabels;

  /// @brief Field m_ColumnTooltips, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_ColumnTooltips;

  /// @brief Field m_RowContents, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>* ___m_RowContents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Foldout, ___opened) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Foldout, ___isHeader) == 0x51, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Foldout, ___contextMenuItems) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Foldout, ___m_Dirty) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Foldout, ___m_ColumnLabels) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Foldout, ___m_ColumnTooltips) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Foldout, ___m_RowContents) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUI_Foldout, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DebugUI::Container
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/HBox
class CORDL_TYPE DebugUI_HBox : public ::UnityEngine::Rendering::DebugUI_Container {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::DebugUI_HBox* New_ctor();

  /// @brief Method .ctor, addr 0x65b353c, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI_HBox();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_HBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUI_HBox(DebugUI_HBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_HBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI_HBox(DebugUI_HBox const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11968 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUI_HBox, 0x50>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DebugUI::Container
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/VBox
class CORDL_TYPE DebugUI_VBox : public ::UnityEngine::Rendering::DebugUI_Container {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::DebugUI_VBox* New_ctor();

  /// @brief Method .ctor, addr 0x65b3590, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI_VBox();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_VBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUI_VBox(DebugUI_VBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_VBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI_VBox(DebugUI_VBox const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11969 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUI_VBox, 0x50>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DebugUI::Foldout
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/Table/Row
class CORDL_TYPE Table_DebugUI_Row : public ::UnityEngine::Rendering::DebugUI_Foldout {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::Table_DebugUI_Row* New_ctor();

  /// @brief Method .ctor, addr 0x65a8908, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Table_DebugUI_Row();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Table_DebugUI_Row", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Table_DebugUI_Row(Table_DebugUI_Row&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Table_DebugUI_Row", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Table_DebugUI_Row(Table_DebugUI_Row const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11970 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Table_DebugUI_Row, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DebugUI::Container
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/Table
class CORDL_TYPE DebugUI_Table : public ::UnityEngine::Rendering::DebugUI_Container {
public:
  // Declarations
  using Row = ::UnityEngine::Rendering::Table_DebugUI_Row;

  __declspec(property(get = get_VisibleColumns)) ::ArrayW<bool, ::Array<bool>*> VisibleColumns;

  /// @brief Field columnHeaderStyle, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_columnHeaderStyle, put = setStaticF_columnHeaderStyle)) ::UnityEngine::GUIStyle* columnHeaderStyle;

  /// @brief Field isReadOnly, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_isReadOnly, put = __cordl_internal_set_isReadOnly)) bool isReadOnly;

  /// @brief Field m_Header, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Header, put = __cordl_internal_set_m_Header)) ::ArrayW<bool, ::Array<bool>*> m_Header;

  /// @brief Method GetColumnVisibility, addr 0x65b3828, size 0x4c, virtual false, abstract: false, final false
  inline bool GetColumnVisibility(int32_t index);

  static inline ::UnityEngine::Rendering::DebugUI_Table* New_ctor();

  /// @brief Method OnItemAdded, addr 0x65b3874, size 0x18, virtual true, abstract: false, final false
  inline void OnItemAdded(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* sender,
                          ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI_Widget*>* e);

  /// @brief Method OnItemRemoved, addr 0x65b388c, size 0x18, virtual true, abstract: false, final false
  inline void OnItemRemoved(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* sender,
                            ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI_Widget*>* e);

  /// @brief Method SetColumnVisibility, addr 0x65a882c, size 0x4c, virtual false, abstract: false, final false
  inline void SetColumnVisibility(int32_t index, bool visible);

  constexpr bool const& __cordl_internal_get_isReadOnly() const;

  constexpr bool& __cordl_internal_get_isReadOnly();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get_m_Header() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get_m_Header();

  constexpr void __cordl_internal_set_isReadOnly(bool value);

  constexpr void __cordl_internal_set_m_Header(::ArrayW<bool, ::Array<bool>*> value);

  /// @brief Method .ctor, addr 0x65a7940, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::GUIStyle* getStaticF_columnHeaderStyle();

  /// @brief Method get_VisibleColumns, addr 0x65b35e4, size 0x244, virtual false, abstract: false, final false
  inline ::ArrayW<bool, ::Array<bool>*> get_VisibleColumns();

  static inline void setStaticF_columnHeaderStyle(::UnityEngine::GUIStyle* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI_Table();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_Table", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUI_Table(DebugUI_Table&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_Table", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI_Table(DebugUI_Table const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11971 };

  /// @brief Field isReadOnly, offset: 0x50, size: 0x1, def value: None
  bool ___isReadOnly;

  /// @brief Field m_Header, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___m_Header;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Table, ___isReadOnly) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Table, ___m_Header) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUI_Table, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.DebugUI/Widget/NameAndTooltip
struct CORDL_TYPE Widget_DebugUI_NameAndTooltip {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Widget_DebugUI_NameAndTooltip();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "tooltip", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr Widget_DebugUI_NameAndTooltip(::StringW name, ::StringW tooltip) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11973 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field tooltip, offset: 0x8, size: 0x8, def value: None
  ::StringW tooltip;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, tooltip) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/IContainer
class CORDL_TYPE DebugUI_IContainer {
public:
  // Declarations
  __declspec(property(get = get_children)) ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* children;

  __declspec(property(get = get_displayName, put = set_displayName)) ::StringW displayName;

  __declspec(property(get = get_queryPath)) ::StringW queryPath;

  /// @brief Method get_children, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* get_children();

  /// @brief Method get_displayName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_displayName();

  /// @brief Method get_queryPath, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_queryPath();

  /// @brief Method set_displayName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_displayName(::StringW value);

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_IContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI_IContainer(DebugUI_IContainer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11975 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/IValueField
class CORDL_TYPE DebugUI_IValueField {
public:
  // Declarations
  /// @brief Method GetValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* GetValue();

  /// @brief Method SetValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetValue(::System::Object* value);

  /// @brief Method ValidateValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* ValidateValue(::System::Object* value);

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_IValueField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI_IValueField(DebugUI_IValueField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11976 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DebugUI::Widget
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/Button
class CORDL_TYPE DebugUI_Button : public ::UnityEngine::Rendering::DebugUI_Widget {
public:
  // Declarations
  /// @brief Field <action>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__action_k__BackingField, put = __cordl_internal_set__action_k__BackingField)) ::System::Action* _action_k__BackingField;

  __declspec(property(get = get_action, put = set_action)) ::System::Action* action;

  static inline ::UnityEngine::Rendering::DebugUI_Button* New_ctor();

  constexpr ::System::Action* const& __cordl_internal_get__action_k__BackingField() const;

  constexpr ::System::Action*& __cordl_internal_get__action_k__BackingField();

  constexpr void __cordl_internal_set__action_k__BackingField(::System::Action* value);

  /// @brief Method .ctor, addr 0x65b3ab8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_action, addr 0x65b3aa8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action* get_action();

  /// @brief Method set_action, addr 0x65b3ab0, size 0x8, virtual false, abstract: false, final false
  inline void set_action(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI_Button();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_Button", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUI_Button(DebugUI_Button&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_Button", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI_Button(DebugUI_Button const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11977 };

  /// @brief Field <action>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ____action_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Button, ____action_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUI_Button, 0x50>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DebugUI::Widget
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/Value
class CORDL_TYPE DebugUI_Value : public ::UnityEngine::Rendering::DebugUI_Widget {
public:
  // Declarations
  /// @brief Field <getter>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__getter_k__BackingField, put = __cordl_internal_set__getter_k__BackingField)) ::System::Func_1<::System::Object*>* _getter_k__BackingField;

  /// @brief Field formatString, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_formatString, put = __cordl_internal_set_formatString)) ::StringW formatString;

  __declspec(property(get = get_getter, put = set_getter)) ::System::Func_1<::System::Object*>* getter;

  /// @brief Field refreshRate, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_refreshRate, put = __cordl_internal_set_refreshRate)) float_t refreshRate;

  /// @brief Method FormatString, addr 0x65b3aec, size 0x9c, virtual true, abstract: false, final false
  inline ::StringW FormatString(::System::Object* value);

  /// @brief Method GetValue, addr 0x65b3acc, size 0x20, virtual true, abstract: false, final false
  inline ::System::Object* GetValue();

  static inline ::UnityEngine::Rendering::DebugUI_Value* New_ctor();

  constexpr ::System::Func_1<::System::Object*>* const& __cordl_internal_get__getter_k__BackingField() const;

  constexpr ::System::Func_1<::System::Object*>*& __cordl_internal_get__getter_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get_formatString() const;

  constexpr ::StringW& __cordl_internal_get_formatString();

  constexpr float_t const& __cordl_internal_get_refreshRate() const;

  constexpr float_t& __cordl_internal_get_refreshRate();

  constexpr void __cordl_internal_set__getter_k__BackingField(::System::Func_1<::System::Object*>* value);

  constexpr void __cordl_internal_set_formatString(::StringW value);

  constexpr void __cordl_internal_set_refreshRate(float_t value);

  /// @brief Method .ctor, addr 0x65a6a6c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_getter, addr 0x65b3abc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_1<::System::Object*>* get_getter();

  /// @brief Method set_getter, addr 0x65b3ac4, size 0x8, virtual false, abstract: false, final false
  inline void set_getter(::System::Func_1<::System::Object*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI_Value();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_Value", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUI_Value(DebugUI_Value&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_Value", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI_Value(DebugUI_Value const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11978 };

  /// @brief Field <getter>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::System::Func_1<::System::Object*>* ____getter_k__BackingField;

  /// @brief Field refreshRate, offset: 0x50, size: 0x4, def value: None
  float_t ___refreshRate;

  /// @brief Field formatString, offset: 0x58, size: 0x8, def value: None
  ::StringW ___formatString;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Value, ____getter_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Value, ___refreshRate) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Value, ___formatString) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUI_Value, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DebugUI::Value
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/ProgressBarValue
class CORDL_TYPE DebugUI_ProgressBarValue : public ::UnityEngine::Rendering::DebugUI_Value {
public:
  // Declarations
  /// @brief Field max, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_max, put = __cordl_internal_set_max)) float_t max;

  /// @brief Field min, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_min, put = __cordl_internal_set_min)) float_t min;

  /// @brief Method FormatString, addr 0x65b3b88, size 0xf0, virtual true, abstract: false, final false
  inline ::StringW FormatString(::System::Object* value);

  static inline ::UnityEngine::Rendering::DebugUI_ProgressBarValue* New_ctor();

  /// @brief Method <FormatString>g__Remap01|2_0, addr 0x65b3c78, size 0x10, virtual false, abstract: false, final false
  static inline float_t _FormatString_g__Remap01_2_0(float_t v, float_t x0, float_t y0);

  constexpr float_t const& __cordl_internal_get_max() const;

  constexpr float_t& __cordl_internal_get_max();

  constexpr float_t const& __cordl_internal_get_min() const;

  constexpr float_t& __cordl_internal_get_min();

  constexpr void __cordl_internal_set_max(float_t value);

  constexpr void __cordl_internal_set_min(float_t value);

  /// @brief Method .ctor, addr 0x65ab8bc, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI_ProgressBarValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_ProgressBarValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUI_ProgressBarValue(DebugUI_ProgressBarValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_ProgressBarValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI_ProgressBarValue(DebugUI_ProgressBarValue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11979 };

  /// @brief Field min, offset: 0x60, size: 0x4, def value: None
  float_t ___min;

  /// @brief Field max, offset: 0x64, size: 0x4, def value: None
  float_t ___max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugUI_ProgressBarValue, ___min) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_ProgressBarValue, ___max) == 0x64, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUI_ProgressBarValue, 0x68>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DebugUI::Widget
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/ValueTuple
class CORDL_TYPE DebugUI_ValueTuple : public ::UnityEngine::Rendering::DebugUI_Widget {
public:
  // Declarations
  __declspec(property(get = get_numElements)) int32_t numElements;

  /// @brief Field pinnedElementIndex, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_pinnedElementIndex, put = __cordl_internal_set_pinnedElementIndex)) int32_t pinnedElementIndex;

  __declspec(property(get = get_refreshRate)) float_t refreshRate;

  /// @brief Field values, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_values, put = __cordl_internal_set_values)) ::ArrayW<::UnityEngine::Rendering::DebugUI_Value*, ::Array<::UnityEngine::Rendering::DebugUI_Value*>*>
      values;

  static inline ::UnityEngine::Rendering::DebugUI_ValueTuple* New_ctor();

  constexpr int32_t const& __cordl_internal_get_pinnedElementIndex() const;

  constexpr int32_t& __cordl_internal_get_pinnedElementIndex();

  constexpr ::ArrayW<::UnityEngine::Rendering::DebugUI_Value*, ::Array<::UnityEngine::Rendering::DebugUI_Value*>*> const& __cordl_internal_get_values() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::DebugUI_Value*, ::Array<::UnityEngine::Rendering::DebugUI_Value*>*>& __cordl_internal_get_values();

  constexpr void __cordl_internal_set_pinnedElementIndex(int32_t value);

  constexpr void __cordl_internal_set_values(::ArrayW<::UnityEngine::Rendering::DebugUI_Value*, ::Array<::UnityEngine::Rendering::DebugUI_Value*>*> value);

  /// @brief Method .ctor, addr 0x65ab8b0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_numElements, addr 0x65b3c88, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_numElements();

  /// @brief Method get_refreshRate, addr 0x65b3ca0, size 0x64, virtual false, abstract: false, final false
  inline float_t get_refreshRate();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI_ValueTuple();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_ValueTuple", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUI_ValueTuple(DebugUI_ValueTuple&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_ValueTuple", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI_ValueTuple(DebugUI_ValueTuple const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11980 };

  /// @brief Field values, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::DebugUI_Value*, ::Array<::UnityEngine::Rendering::DebugUI_Value*>*> ___values;

  /// @brief Field pinnedElementIndex, offset: 0x50, size: 0x4, def value: None
  int32_t ___pinnedElementIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugUI_ValueTuple, ___values) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_ValueTuple, ___pinnedElementIndex) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUI_ValueTuple, 0x58>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DebugUI::Widget
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/Field`1<T>
class CORDL_TYPE DebugUI_Field_1 : public ::UnityEngine::Rendering::DebugUI_Widget {
public:
  // Declarations
  /// @brief Field <getter>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__getter_k__BackingField, put = __cordl_internal_set__getter_k__BackingField)) ::System::Func_1<T>* _getter_k__BackingField;

  /// @brief Field <setter>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__setter_k__BackingField, put = __cordl_internal_set__setter_k__BackingField)) ::System::Action_1<T>* _setter_k__BackingField;

  __declspec(property(get = get_getter, put = set_getter)) ::System::Func_1<T>* getter;

  /// @brief Field onValueChanged, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_onValueChanged, put = __cordl_internal_set_onValueChanged)) ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<T>*, T>* onValueChanged;

  __declspec(property(get = get_setter, put = set_setter)) ::System::Action_1<T>* setter;

  /// @brief Convert operator to "::UnityEngine::Rendering::DebugUI_IValueField"
  constexpr operator ::UnityEngine::Rendering::DebugUI_IValueField*() noexcept;

  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T GetValue();

  static inline ::UnityEngine::Rendering::DebugUI_Field_1<T>* New_ctor();

  /// @brief Method SetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetValue(::System::Object* value);

  /// @brief Method SetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetValue(T value);

  /// @brief Method UnityEngine.Rendering.DebugUI.IValueField.GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* UnityEngine_Rendering_DebugUI_IValueField_GetValue();

  /// @brief Method UnityEngine.Rendering.DebugUI.IValueField.ValidateValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* UnityEngine_Rendering_DebugUI_IValueField_ValidateValue(::System::Object* value);

  /// @brief Method ValidateValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T ValidateValue(T value);

  constexpr ::System::Func_1<T>* const& __cordl_internal_get__getter_k__BackingField() const;

  constexpr ::System::Func_1<T>*& __cordl_internal_get__getter_k__BackingField();

  constexpr ::System::Action_1<T>* const& __cordl_internal_get__setter_k__BackingField() const;

  constexpr ::System::Action_1<T>*& __cordl_internal_get__setter_k__BackingField();

  constexpr ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<T>*, T>* const& __cordl_internal_get_onValueChanged() const;

  constexpr ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<T>*, T>*& __cordl_internal_get_onValueChanged();

  constexpr void __cordl_internal_set__getter_k__BackingField(::System::Func_1<T>* value);

  constexpr void __cordl_internal_set__setter_k__BackingField(::System::Action_1<T>* value);

  constexpr void __cordl_internal_set_onValueChanged(::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<T>*, T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_getter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Func_1<T>* get_getter();

  /// @brief Method get_setter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Action_1<T>* get_setter();

  /// @brief Convert to "::UnityEngine::Rendering::DebugUI_IValueField"
  constexpr ::UnityEngine::Rendering::DebugUI_IValueField* i___UnityEngine__Rendering__DebugUI_IValueField() noexcept;

  /// @brief Method set_getter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_getter(::System::Func_1<T>* value);

  /// @brief Method set_setter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_setter(::System::Action_1<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI_Field_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_Field_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUI_Field_1(DebugUI_Field_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_Field_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI_Field_1(DebugUI_Field_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11981 };

  /// @brief Field <getter>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::System::Func_1<T>* ____getter_k__BackingField;

  /// @brief Field <setter>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::System::Action_1<T>* ____setter_k__BackingField;

  /// @brief Field onValueChanged, offset: 0x58, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<T>*, T>* ___onValueChanged;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DebugUI::Field`1<T>
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/BoolField
class CORDL_TYPE DebugUI_BoolField : public ::UnityEngine::Rendering::DebugUI_Field_1<bool> {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::DebugUI_BoolField* New_ctor();

  /// @brief Method .ctor, addr 0x65b3d04, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI_BoolField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_BoolField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUI_BoolField(DebugUI_BoolField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_BoolField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI_BoolField(DebugUI_BoolField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11982 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUI_BoolField, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DebugUI::BoolField
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/HistoryBoolField
class CORDL_TYPE DebugUI_HistoryBoolField : public ::UnityEngine::Rendering::DebugUI_BoolField {
public:
  // Declarations
  /// @brief Field <historyGetter>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__historyGetter_k__BackingField,
                      put = __cordl_internal_set__historyGetter_k__BackingField)) ::ArrayW<::System::Func_1<bool>*, ::Array<::System::Func_1<bool>*>*>
      _historyGetter_k__BackingField;

  __declspec(property(get = get_historyDepth)) int32_t historyDepth;

  __declspec(property(get = get_historyGetter, put = set_historyGetter)) ::ArrayW<::System::Func_1<bool>*, ::Array<::System::Func_1<bool>*>*> historyGetter;

  /// @brief Method GetHistoryValue, addr 0x65b3d68, size 0x40, virtual false, abstract: false, final false
  inline bool GetHistoryValue(int32_t historyIndex);

  static inline ::UnityEngine::Rendering::DebugUI_HistoryBoolField* New_ctor();

  constexpr ::ArrayW<::System::Func_1<bool>*, ::Array<::System::Func_1<bool>*>*> const& __cordl_internal_get__historyGetter_k__BackingField() const;

  constexpr ::ArrayW<::System::Func_1<bool>*, ::Array<::System::Func_1<bool>*>*>& __cordl_internal_get__historyGetter_k__BackingField();

  constexpr void __cordl_internal_set__historyGetter_k__BackingField(::ArrayW<::System::Func_1<bool>*, ::Array<::System::Func_1<bool>*>*> value);

  /// @brief Method .ctor, addr 0x65b3da8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_historyDepth, addr 0x65b3d50, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_historyDepth();

  /// @brief Method get_historyGetter, addr 0x65b3d40, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Func_1<bool>*, ::Array<::System::Func_1<bool>*>*> get_historyGetter();

  /// @brief Method set_historyGetter, addr 0x65b3d48, size 0x8, virtual false, abstract: false, final false
  inline void set_historyGetter(::ArrayW<::System::Func_1<bool>*, ::Array<::System::Func_1<bool>*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI_HistoryBoolField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_HistoryBoolField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUI_HistoryBoolField(DebugUI_HistoryBoolField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_HistoryBoolField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI_HistoryBoolField(DebugUI_HistoryBoolField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11983 };

  /// @brief Field <historyGetter>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::System::Func_1<bool>*, ::Array<::System::Func_1<bool>*>*> ____historyGetter_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugUI_HistoryBoolField, ____historyGetter_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUI_HistoryBoolField, 0x68>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DebugUI::Field`1<T>
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/IntField
class CORDL_TYPE DebugUI_IntField : public ::UnityEngine::Rendering::DebugUI_Field_1<int32_t> {
public:
  // Declarations
  /// @brief Field incStep, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_incStep, put = __cordl_internal_set_incStep)) int32_t incStep;

  /// @brief Field intStepMult, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_intStepMult, put = __cordl_internal_set_intStepMult)) int32_t intStepMult;

  /// @brief Field max, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_max, put = __cordl_internal_set_max)) ::System::Func_1<int32_t>* max;

  /// @brief Field min, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_min, put = __cordl_internal_set_min)) ::System::Func_1<int32_t>* min;

  static inline ::UnityEngine::Rendering::DebugUI_IntField* New_ctor();

  /// @brief Method ValidateValue, addr 0x65b3de4, size 0x64, virtual true, abstract: false, final false
  inline int32_t ValidateValue(int32_t value);

  constexpr int32_t const& __cordl_internal_get_incStep() const;

  constexpr int32_t& __cordl_internal_get_incStep();

  constexpr int32_t const& __cordl_internal_get_intStepMult() const;

  constexpr int32_t& __cordl_internal_get_intStepMult();

  constexpr ::System::Func_1<int32_t>* const& __cordl_internal_get_max() const;

  constexpr ::System::Func_1<int32_t>*& __cordl_internal_get_max();

  constexpr ::System::Func_1<int32_t>* const& __cordl_internal_get_min() const;

  constexpr ::System::Func_1<int32_t>*& __cordl_internal_get_min();

  constexpr void __cordl_internal_set_incStep(int32_t value);

  constexpr void __cordl_internal_set_intStepMult(int32_t value);

  constexpr void __cordl_internal_set_max(::System::Func_1<int32_t>* value);

  constexpr void __cordl_internal_set_min(::System::Func_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x65b3e48, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI_IntField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_IntField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUI_IntField(DebugUI_IntField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_IntField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI_IntField(DebugUI_IntField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11984 };

  /// @brief Field min, offset: 0x60, size: 0x8, def value: None
  ::System::Func_1<int32_t>* ___min;

  /// @brief Field max, offset: 0x68, size: 0x8, def value: None
  ::System::Func_1<int32_t>* ___max;

  /// @brief Field incStep, offset: 0x70, size: 0x4, def value: None
  int32_t ___incStep;

  /// @brief Field intStepMult, offset: 0x74, size: 0x4, def value: None
  int32_t ___intStepMult;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugUI_IntField, ___min) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_IntField, ___max) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_IntField, ___incStep) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_IntField, ___intStepMult) == 0x74, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUI_IntField, 0x78>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DebugUI::Field`1<T>
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/UIntField
class CORDL_TYPE DebugUI_UIntField : public ::UnityEngine::Rendering::DebugUI_Field_1<uint32_t> {
public:
  // Declarations
  /// @brief Field incStep, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_incStep, put = __cordl_internal_set_incStep)) uint32_t incStep;

  /// @brief Field intStepMult, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_intStepMult, put = __cordl_internal_set_intStepMult)) uint32_t intStepMult;

  /// @brief Field max, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_max, put = __cordl_internal_set_max)) ::System::Func_1<uint32_t>* max;

  /// @brief Field min, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_min, put = __cordl_internal_set_min)) ::System::Func_1<uint32_t>* min;

  static inline ::UnityEngine::Rendering::DebugUI_UIntField* New_ctor();

  /// @brief Method ValidateValue, addr 0x65b3e94, size 0x64, virtual true, abstract: false, final false
  inline uint32_t ValidateValue(uint32_t value);

  constexpr uint32_t const& __cordl_internal_get_incStep() const;

  constexpr uint32_t& __cordl_internal_get_incStep();

  constexpr uint32_t const& __cordl_internal_get_intStepMult() const;

  constexpr uint32_t& __cordl_internal_get_intStepMult();

  constexpr ::System::Func_1<uint32_t>* const& __cordl_internal_get_max() const;

  constexpr ::System::Func_1<uint32_t>*& __cordl_internal_get_max();

  constexpr ::System::Func_1<uint32_t>* const& __cordl_internal_get_min() const;

  constexpr ::System::Func_1<uint32_t>*& __cordl_internal_get_min();

  constexpr void __cordl_internal_set_incStep(uint32_t value);

  constexpr void __cordl_internal_set_intStepMult(uint32_t value);

  constexpr void __cordl_internal_set_max(::System::Func_1<uint32_t>* value);

  constexpr void __cordl_internal_set_min(::System::Func_1<uint32_t>* value);

  /// @brief Method .ctor, addr 0x65b3ef8, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI_UIntField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_UIntField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUI_UIntField(DebugUI_UIntField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_UIntField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI_UIntField(DebugUI_UIntField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11985 };

  /// @brief Field min, offset: 0x60, size: 0x8, def value: None
  ::System::Func_1<uint32_t>* ___min;

  /// @brief Field max, offset: 0x68, size: 0x8, def value: None
  ::System::Func_1<uint32_t>* ___max;

  /// @brief Field incStep, offset: 0x70, size: 0x4, def value: None
  uint32_t ___incStep;

  /// @brief Field intStepMult, offset: 0x74, size: 0x4, def value: None
  uint32_t ___intStepMult;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugUI_UIntField, ___min) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_UIntField, ___max) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_UIntField, ___incStep) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_UIntField, ___intStepMult) == 0x74, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUI_UIntField, 0x78>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DebugUI::Field`1<T>
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/FloatField
class CORDL_TYPE DebugUI_FloatField : public ::UnityEngine::Rendering::DebugUI_Field_1<float_t> {
public:
  // Declarations
  /// @brief Field decimals, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_decimals, put = __cordl_internal_set_decimals)) int32_t decimals;

  /// @brief Field incStep, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_incStep, put = __cordl_internal_set_incStep)) float_t incStep;

  /// @brief Field incStepMult, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_incStepMult, put = __cordl_internal_set_incStepMult)) float_t incStepMult;

  /// @brief Field max, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_max, put = __cordl_internal_set_max)) ::System::Func_1<float_t>* max;

  /// @brief Field min, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_min, put = __cordl_internal_set_min)) ::System::Func_1<float_t>* min;

  static inline ::UnityEngine::Rendering::DebugUI_FloatField* New_ctor();

  /// @brief Method ValidateValue, addr 0x65b3f44, size 0x60, virtual true, abstract: false, final false
  inline float_t ValidateValue(float_t value);

  constexpr int32_t const& __cordl_internal_get_decimals() const;

  constexpr int32_t& __cordl_internal_get_decimals();

  constexpr float_t const& __cordl_internal_get_incStep() const;

  constexpr float_t& __cordl_internal_get_incStep();

  constexpr float_t const& __cordl_internal_get_incStepMult() const;

  constexpr float_t& __cordl_internal_get_incStepMult();

  constexpr ::System::Func_1<float_t>* const& __cordl_internal_get_max() const;

  constexpr ::System::Func_1<float_t>*& __cordl_internal_get_max();

  constexpr ::System::Func_1<float_t>* const& __cordl_internal_get_min() const;

  constexpr ::System::Func_1<float_t>*& __cordl_internal_get_min();

  constexpr void __cordl_internal_set_decimals(int32_t value);

  constexpr void __cordl_internal_set_incStep(float_t value);

  constexpr void __cordl_internal_set_incStepMult(float_t value);

  constexpr void __cordl_internal_set_max(::System::Func_1<float_t>* value);

  constexpr void __cordl_internal_set_min(::System::Func_1<float_t>* value);

  /// @brief Method .ctor, addr 0x65b3fa4, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI_FloatField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_FloatField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUI_FloatField(DebugUI_FloatField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_FloatField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI_FloatField(DebugUI_FloatField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11986 };

  /// @brief Field min, offset: 0x60, size: 0x8, def value: None
  ::System::Func_1<float_t>* ___min;

  /// @brief Field max, offset: 0x68, size: 0x8, def value: None
  ::System::Func_1<float_t>* ___max;

  /// @brief Field incStep, offset: 0x70, size: 0x4, def value: None
  float_t ___incStep;

  /// @brief Field incStepMult, offset: 0x74, size: 0x4, def value: None
  float_t ___incStepMult;

  /// @brief Field decimals, offset: 0x78, size: 0x4, def value: None
  int32_t ___decimals;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugUI_FloatField, ___min) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_FloatField, ___max) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_FloatField, ___incStep) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_FloatField, ___incStepMult) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_FloatField, ___decimals) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUI_FloatField, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/EnumField`1/<>c<T>
class CORDL_TYPE EnumField_1_DebugUI___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::EnumField_1_DebugUI___c<T>* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0)) ::System::Func_2<::System::Reflection::FieldInfo*, bool>* __9__6_0;

  static inline ::UnityEngine::Rendering::EnumField_1_DebugUI___c<T>* New_ctor();

  /// @brief Method <AutoFillFromType>b__6_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _AutoFillFromType_b__6_0(::System::Reflection::FieldInfo* fieldInfo);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::EnumField_1_DebugUI___c<T>* getStaticF___9();

  static inline ::System::Func_2<::System::Reflection::FieldInfo*, bool>* getStaticF___9__6_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::EnumField_1_DebugUI___c<T>* value);

  static inline void setStaticF___9__6_0(::System::Func_2<::System::Reflection::FieldInfo*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumField_1_DebugUI___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnumField_1_DebugUI___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumField_1_DebugUI___c(EnumField_1_DebugUI___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumField_1_DebugUI___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumField_1_DebugUI___c(EnumField_1_DebugUI___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11987 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DebugUI::Field`1<T>
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/EnumField`1<T>
class CORDL_TYPE DebugUI_EnumField_1 : public ::UnityEngine::Rendering::DebugUI_Field_1<T> {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::EnumField_1_DebugUI___c<T>;

  /// @brief Field enumNames, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_enumNames, put = __cordl_internal_set_enumNames)) ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> enumNames;

  __declspec(property(get = get_enumValues, put = set_enumValues)) ::ArrayW<int32_t, ::Array<int32_t>*> enumValues;

  /// @brief Field m_EnumValues, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EnumValues, put = __cordl_internal_set_m_EnumValues)) ::ArrayW<int32_t, ::Array<int32_t>*> m_EnumValues;

  /// @brief Field s_NicifyRegEx, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_NicifyRegEx, put = setStaticF_s_NicifyRegEx)) ::System::Text::RegularExpressions::Regex* s_NicifyRegEx;

  /// @brief Method AutoFillFromType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AutoFillFromType(::System::Type* enumType);

  static inline ::UnityEngine::Rendering::DebugUI_EnumField_1<T>* New_ctor();

  constexpr ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> const& __cordl_internal_get_enumNames() const;

  constexpr ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*>& __cordl_internal_get_enumNames();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_EnumValues() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_EnumValues();

  constexpr void __cordl_internal_set_enumNames(::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> value);

  constexpr void __cordl_internal_set_m_EnumValues(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Text::RegularExpressions::Regex* getStaticF_s_NicifyRegEx();

  /// @brief Method get_enumValues, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_enumValues();

  static inline void setStaticF_s_NicifyRegEx(::System::Text::RegularExpressions::Regex* value);

  /// @brief Method set_enumValues, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_enumValues(::ArrayW<int32_t, ::Array<int32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI_EnumField_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_EnumField_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUI_EnumField_1(DebugUI_EnumField_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_EnumField_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI_EnumField_1(DebugUI_EnumField_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11988 };

  /// @brief Field enumNames, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> ___enumNames;

  /// @brief Field m_EnumValues, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_EnumValues;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/EnumField/<>c
class CORDL_TYPE EnumField_DebugUI___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::EnumField_DebugUI___c* __9;

  /// @brief Field <>9__17_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_0, put = setStaticF___9__17_0)) ::System::Func_2<::UnityEngine::GUIContent*, ::StringW>* __9__17_0;

  static inline ::UnityEngine::Rendering::EnumField_DebugUI___c* New_ctor();

  /// @brief Method <InitQuickSeparators>b__17_0, addr 0x65b450c, size 0x8c, virtual false, abstract: false, final false
  inline ::StringW _InitQuickSeparators_b__17_0(::UnityEngine::GUIContent* x);

  /// @brief Method .ctor, addr 0x65b4508, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::EnumField_DebugUI___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::GUIContent*, ::StringW>* getStaticF___9__17_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::EnumField_DebugUI___c* value);

  static inline void setStaticF___9__17_0(::System::Func_2<::UnityEngine::GUIContent*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumField_DebugUI___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnumField_DebugUI___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumField_DebugUI___c(EnumField_DebugUI___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumField_DebugUI___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumField_DebugUI___c(EnumField_DebugUI___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11989 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::EnumField_DebugUI___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DebugUI::EnumField`1<T>
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/EnumField
class CORDL_TYPE DebugUI_EnumField : public ::UnityEngine::Rendering::DebugUI_EnumField_1<int32_t> {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::EnumField_DebugUI___c;

  /// @brief Field <getIndex>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__getIndex_k__BackingField, put = __cordl_internal_set__getIndex_k__BackingField)) ::System::Func_1<int32_t>* _getIndex_k__BackingField;

  /// @brief Field <setIndex>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__setIndex_k__BackingField, put = __cordl_internal_set__setIndex_k__BackingField)) ::System::Action_1<int32_t>* _setIndex_k__BackingField;

  __declspec(property(put = set_autoEnum)) ::System::Type* autoEnum;

  __declspec(property(get = get_currentIndex, put = set_currentIndex)) int32_t currentIndex;

  __declspec(property(get = get_getIndex, put = set_getIndex)) ::System::Func_1<int32_t>* getIndex;

  __declspec(property(get = get_indexes)) ::ArrayW<int32_t, ::Array<int32_t>*> indexes;

  /// @brief Field m_Indexes, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Indexes, put = __cordl_internal_set_m_Indexes)) ::ArrayW<int32_t, ::Array<int32_t>*> m_Indexes;

  /// @brief Field quickSeparators, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_quickSeparators, put = __cordl_internal_set_quickSeparators)) ::ArrayW<int32_t, ::Array<int32_t>*> quickSeparators;

  __declspec(property(get = get_setIndex, put = set_setIndex)) ::System::Action_1<int32_t>* setIndex;

  /// @brief Method InitQuickSeparators, addr 0x65b4134, size 0x214, virtual false, abstract: false, final false
  inline void InitQuickSeparators();

  static inline ::UnityEngine::Rendering::DebugUI_EnumField* New_ctor();

  /// @brief Method SetValue, addr 0x65b4348, size 0x16c, virtual true, abstract: false, final false
  inline void SetValue(int32_t value);

  constexpr ::System::Func_1<int32_t>* const& __cordl_internal_get__getIndex_k__BackingField() const;

  constexpr ::System::Func_1<int32_t>*& __cordl_internal_get__getIndex_k__BackingField();

  constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get__setIndex_k__BackingField() const;

  constexpr ::System::Action_1<int32_t>*& __cordl_internal_get__setIndex_k__BackingField();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_Indexes() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_Indexes();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_quickSeparators() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_quickSeparators();

  constexpr void __cordl_internal_set__getIndex_k__BackingField(::System::Func_1<int32_t>* value);

  constexpr void __cordl_internal_set__setIndex_k__BackingField(::System::Action_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_Indexes(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_quickSeparators(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x65a66c0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_currentIndex, addr 0x65b4090, size 0x20, virtual false, abstract: false, final false
  inline int32_t get_currentIndex();

  /// @brief Method get_getIndex, addr 0x65b4070, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_1<int32_t>* get_getIndex();

  /// @brief Method get_indexes, addr 0x65b3ff8, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_indexes();

  /// @brief Method get_setIndex, addr 0x65b4080, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_1<int32_t>* get_setIndex();

  /// @brief Method set_autoEnum, addr 0x65b40d0, size 0x64, virtual false, abstract: false, final false
  inline void set_autoEnum(::System::Type* value);

  /// @brief Method set_currentIndex, addr 0x65b40b0, size 0x20, virtual false, abstract: false, final false
  inline void set_currentIndex(int32_t value);

  /// @brief Method set_getIndex, addr 0x65b4078, size 0x8, virtual false, abstract: false, final false
  inline void set_getIndex(::System::Func_1<int32_t>* value);

  /// @brief Method set_setIndex, addr 0x65b4088, size 0x8, virtual false, abstract: false, final false
  inline void set_setIndex(::System::Action_1<int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI_EnumField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_EnumField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUI_EnumField(DebugUI_EnumField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_EnumField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI_EnumField(DebugUI_EnumField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11990 };

  /// @brief Field quickSeparators, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___quickSeparators;

  /// @brief Field m_Indexes, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_Indexes;

  /// @brief Field <getIndex>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::System::Func_1<int32_t>* ____getIndex_k__BackingField;

  /// @brief Field <setIndex>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Action_1<int32_t>* ____setIndex_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugUI_EnumField, ___quickSeparators) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_EnumField, ___m_Indexes) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_EnumField, ____getIndex_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_EnumField, ____setIndex_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUI_EnumField, 0x90>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DebugUI::Field`1<T>
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/ObjectPopupField
class CORDL_TYPE DebugUI_ObjectPopupField : public ::UnityEngine::Rendering::DebugUI_Field_1<::UnityW<::UnityEngine::Object>> {
public:
  // Declarations
  /// @brief Field <getObjects>k__BackingField, offset 0x60, size 0x8
  __declspec(property(
      get = __cordl_internal_get__getObjects_k__BackingField,
      put = __cordl_internal_set__getObjects_k__BackingField)) ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*>* _getObjects_k__BackingField;

  __declspec(property(get = get_getObjects, put = set_getObjects)) ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*>* getObjects;

  static inline ::UnityEngine::Rendering::DebugUI_ObjectPopupField* New_ctor();

  constexpr ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*>* const& __cordl_internal_get__getObjects_k__BackingField() const;

  constexpr ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*>*& __cordl_internal_get__getObjects_k__BackingField();

  constexpr void __cordl_internal_set__getObjects_k__BackingField(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*>* value);

  /// @brief Method .ctor, addr 0x65a69a0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_getObjects, addr 0x65b4598, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*>* get_getObjects();

  /// @brief Method set_getObjects, addr 0x65b45a0, size 0x8, virtual false, abstract: false, final false
  inline void set_getObjects(::System::Func_1<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI_ObjectPopupField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_ObjectPopupField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUI_ObjectPopupField(DebugUI_ObjectPopupField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_ObjectPopupField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI_ObjectPopupField(DebugUI_ObjectPopupField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11991 };

  /// @brief Field <getObjects>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::System::Func_1<::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*>* ____getObjects_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugUI_ObjectPopupField, ____getObjects_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUI_ObjectPopupField, 0x68>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DebugUI::EnumField
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/HistoryEnumField
class CORDL_TYPE DebugUI_HistoryEnumField : public ::UnityEngine::Rendering::DebugUI_EnumField {
public:
  // Declarations
  /// @brief Field <historyIndexGetter>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__historyIndexGetter_k__BackingField,
                      put = __cordl_internal_set__historyIndexGetter_k__BackingField)) ::ArrayW<::System::Func_1<int32_t>*, ::Array<::System::Func_1<int32_t>*>*>
      _historyIndexGetter_k__BackingField;

  __declspec(property(get = get_historyDepth)) int32_t historyDepth;

  __declspec(property(get = get_historyIndexGetter, put = set_historyIndexGetter)) ::ArrayW<::System::Func_1<int32_t>*, ::Array<::System::Func_1<int32_t>*>*> historyIndexGetter;

  /// @brief Method GetHistoryValue, addr 0x65b45d0, size 0x40, virtual false, abstract: false, final false
  inline int32_t GetHistoryValue(int32_t historyIndex);

  static inline ::UnityEngine::Rendering::DebugUI_HistoryEnumField* New_ctor();

  constexpr ::ArrayW<::System::Func_1<int32_t>*, ::Array<::System::Func_1<int32_t>*>*> const& __cordl_internal_get__historyIndexGetter_k__BackingField() const;

  constexpr ::ArrayW<::System::Func_1<int32_t>*, ::Array<::System::Func_1<int32_t>*>*>& __cordl_internal_get__historyIndexGetter_k__BackingField();

  constexpr void __cordl_internal_set__historyIndexGetter_k__BackingField(::ArrayW<::System::Func_1<int32_t>*, ::Array<::System::Func_1<int32_t>*>*> value);

  /// @brief Method .ctor, addr 0x65b4610, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_historyDepth, addr 0x65b45b8, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_historyDepth();

  /// @brief Method get_historyIndexGetter, addr 0x65b45a8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Func_1<int32_t>*, ::Array<::System::Func_1<int32_t>*>*> get_historyIndexGetter();

  /// @brief Method set_historyIndexGetter, addr 0x65b45b0, size 0x8, virtual false, abstract: false, final false
  inline void set_historyIndexGetter(::ArrayW<::System::Func_1<int32_t>*, ::Array<::System::Func_1<int32_t>*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI_HistoryEnumField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_HistoryEnumField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUI_HistoryEnumField(DebugUI_HistoryEnumField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_HistoryEnumField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI_HistoryEnumField(DebugUI_HistoryEnumField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11992 };

  /// @brief Field <historyIndexGetter>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::System::Func_1<int32_t>*, ::Array<::System::Func_1<int32_t>*>*> ____historyIndexGetter_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugUI_HistoryEnumField, ____historyIndexGetter_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUI_HistoryEnumField, 0x98>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DebugUI::EnumField`1<T>
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/BitField
class CORDL_TYPE DebugUI_BitField : public ::UnityEngine::Rendering::DebugUI_EnumField_1<::System::Enum*> {
public:
  // Declarations
  __declspec(property(get = get_enumType, put = set_enumType)) ::System::Type* enumType;

  /// @brief Field m_EnumType, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EnumType, put = __cordl_internal_set_m_EnumType)) ::System::Type* m_EnumType;

  static inline ::UnityEngine::Rendering::DebugUI_BitField* New_ctor();

  constexpr ::System::Type* const& __cordl_internal_get_m_EnumType() const;

  constexpr ::System::Type*& __cordl_internal_get_m_EnumType();

  constexpr void __cordl_internal_set_m_EnumType(::System::Type* value);

  /// @brief Method .ctor, addr 0x65b467c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_enumType, addr 0x65b4614, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_enumType();

  /// @brief Method set_enumType, addr 0x65b461c, size 0x60, virtual false, abstract: false, final false
  inline void set_enumType(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI_BitField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_BitField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUI_BitField(DebugUI_BitField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_BitField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI_BitField(DebugUI_BitField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11993 };

  /// @brief Field m_EnumType, offset: 0x70, size: 0x8, def value: None
  ::System::Type* ___m_EnumType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugUI_BitField, ___m_EnumType) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUI_BitField, 0x78>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DebugUI::EnumField`1<T>
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/MaskField
class CORDL_TYPE DebugUI_MaskField : public ::UnityEngine::Rendering::DebugUI_EnumField_1<uint32_t> {
public:
  // Declarations
  /// @brief Method Fill, addr 0x65b46e8, size 0x434, virtual false, abstract: false, final false
  inline void Fill(::ArrayW<::StringW, ::Array<::StringW>*> names);

  static inline ::UnityEngine::Rendering::DebugUI_MaskField* New_ctor();

  /// @brief Method SetValue, addr 0x65b4b1c, size 0xe8, virtual true, abstract: false, final false
  inline void SetValue(uint32_t value);

  /// @brief Method .ctor, addr 0x65b4c04, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI_MaskField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_MaskField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUI_MaskField(DebugUI_MaskField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_MaskField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI_MaskField(DebugUI_MaskField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11994 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUI_MaskField, 0x70>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Color, UnityEngine.Rendering.DebugUI::Field`1<T>
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/ColorField
class CORDL_TYPE DebugUI_ColorField : public ::UnityEngine::Rendering::DebugUI_Field_1<::UnityEngine::Color> {
public:
  // Declarations
  /// @brief Field decimals, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_decimals, put = __cordl_internal_set_decimals)) int32_t decimals;

  /// @brief Field hdr, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_hdr, put = __cordl_internal_set_hdr)) bool hdr;

  /// @brief Field incStep, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_incStep, put = __cordl_internal_set_incStep)) float_t incStep;

  /// @brief Field incStepMult, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_incStepMult, put = __cordl_internal_set_incStepMult)) float_t incStepMult;

  /// @brief Field showAlpha, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get_showAlpha, put = __cordl_internal_set_showAlpha)) bool showAlpha;

  /// @brief Field showPicker, offset 0x62, size 0x1
  __declspec(property(get = __cordl_internal_get_showPicker, put = __cordl_internal_set_showPicker)) bool showPicker;

  static inline ::UnityEngine::Rendering::DebugUI_ColorField* New_ctor();

  /// @brief Method ValidateValue, addr 0x65b4c70, size 0x58, virtual true, abstract: false, final false
  inline ::UnityEngine::Color ValidateValue(::UnityEngine::Color value);

  constexpr int32_t const& __cordl_internal_get_decimals() const;

  constexpr int32_t& __cordl_internal_get_decimals();

  constexpr bool const& __cordl_internal_get_hdr() const;

  constexpr bool& __cordl_internal_get_hdr();

  constexpr float_t const& __cordl_internal_get_incStep() const;

  constexpr float_t& __cordl_internal_get_incStep();

  constexpr float_t const& __cordl_internal_get_incStepMult() const;

  constexpr float_t& __cordl_internal_get_incStepMult();

  constexpr bool const& __cordl_internal_get_showAlpha() const;

  constexpr bool& __cordl_internal_get_showAlpha();

  constexpr bool const& __cordl_internal_get_showPicker() const;

  constexpr bool& __cordl_internal_get_showPicker();

  constexpr void __cordl_internal_set_decimals(int32_t value);

  constexpr void __cordl_internal_set_hdr(bool value);

  constexpr void __cordl_internal_set_incStep(float_t value);

  constexpr void __cordl_internal_set_incStepMult(float_t value);

  constexpr void __cordl_internal_set_showAlpha(bool value);

  constexpr void __cordl_internal_set_showPicker(bool value);

  /// @brief Method .ctor, addr 0x65b4cc8, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI_ColorField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_ColorField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUI_ColorField(DebugUI_ColorField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_ColorField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI_ColorField(DebugUI_ColorField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11995 };

  /// @brief Field hdr, offset: 0x60, size: 0x1, def value: None
  bool ___hdr;

  /// @brief Field showAlpha, offset: 0x61, size: 0x1, def value: None
  bool ___showAlpha;

  /// @brief Field showPicker, offset: 0x62, size: 0x1, def value: None
  bool ___showPicker;

  /// @brief Field incStep, offset: 0x64, size: 0x4, def value: None
  float_t ___incStep;

  /// @brief Field incStepMult, offset: 0x68, size: 0x4, def value: None
  float_t ___incStepMult;

  /// @brief Field decimals, offset: 0x6c, size: 0x4, def value: None
  int32_t ___decimals;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugUI_ColorField, ___hdr) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_ColorField, ___showAlpha) == 0x61, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_ColorField, ___showPicker) == 0x62, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_ColorField, ___incStep) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_ColorField, ___incStepMult) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_ColorField, ___decimals) == 0x6c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUI_ColorField, 0x70>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DebugUI::Field`1<T>, UnityEngine.Vector2
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/Vector2Field
class CORDL_TYPE DebugUI_Vector2Field : public ::UnityEngine::Rendering::DebugUI_Field_1<::UnityEngine::Vector2> {
public:
  // Declarations
  /// @brief Field decimals, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_decimals, put = __cordl_internal_set_decimals)) int32_t decimals;

  /// @brief Field incStep, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_incStep, put = __cordl_internal_set_incStep)) float_t incStep;

  /// @brief Field incStepMult, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_incStepMult, put = __cordl_internal_set_incStepMult)) float_t incStepMult;

  static inline ::UnityEngine::Rendering::DebugUI_Vector2Field* New_ctor();

  constexpr int32_t const& __cordl_internal_get_decimals() const;

  constexpr int32_t& __cordl_internal_get_decimals();

  constexpr float_t const& __cordl_internal_get_incStep() const;

  constexpr float_t& __cordl_internal_get_incStep();

  constexpr float_t const& __cordl_internal_get_incStepMult() const;

  constexpr float_t& __cordl_internal_get_incStepMult();

  constexpr void __cordl_internal_set_decimals(int32_t value);

  constexpr void __cordl_internal_set_incStep(float_t value);

  constexpr void __cordl_internal_set_incStepMult(float_t value);

  /// @brief Method .ctor, addr 0x65b4d24, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI_Vector2Field();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_Vector2Field", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUI_Vector2Field(DebugUI_Vector2Field&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_Vector2Field", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI_Vector2Field(DebugUI_Vector2Field const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11996 };

  /// @brief Field incStep, offset: 0x60, size: 0x4, def value: None
  float_t ___incStep;

  /// @brief Field incStepMult, offset: 0x64, size: 0x4, def value: None
  float_t ___incStepMult;

  /// @brief Field decimals, offset: 0x68, size: 0x4, def value: None
  int32_t ___decimals;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Vector2Field, ___incStep) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Vector2Field, ___incStepMult) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Vector2Field, ___decimals) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUI_Vector2Field, 0x70>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DebugUI::Field`1<T>, UnityEngine.Vector3
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/Vector3Field
class CORDL_TYPE DebugUI_Vector3Field : public ::UnityEngine::Rendering::DebugUI_Field_1<::UnityEngine::Vector3> {
public:
  // Declarations
  /// @brief Field decimals, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_decimals, put = __cordl_internal_set_decimals)) int32_t decimals;

  /// @brief Field incStep, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_incStep, put = __cordl_internal_set_incStep)) float_t incStep;

  /// @brief Field incStepMult, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_incStepMult, put = __cordl_internal_set_incStepMult)) float_t incStepMult;

  static inline ::UnityEngine::Rendering::DebugUI_Vector3Field* New_ctor();

  constexpr int32_t const& __cordl_internal_get_decimals() const;

  constexpr int32_t& __cordl_internal_get_decimals();

  constexpr float_t const& __cordl_internal_get_incStep() const;

  constexpr float_t& __cordl_internal_get_incStep();

  constexpr float_t const& __cordl_internal_get_incStepMult() const;

  constexpr float_t& __cordl_internal_get_incStepMult();

  constexpr void __cordl_internal_set_decimals(int32_t value);

  constexpr void __cordl_internal_set_incStep(float_t value);

  constexpr void __cordl_internal_set_incStepMult(float_t value);

  /// @brief Method .ctor, addr 0x65b4d78, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI_Vector3Field();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_Vector3Field", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUI_Vector3Field(DebugUI_Vector3Field&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_Vector3Field", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI_Vector3Field(DebugUI_Vector3Field const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11997 };

  /// @brief Field incStep, offset: 0x60, size: 0x4, def value: None
  float_t ___incStep;

  /// @brief Field incStepMult, offset: 0x64, size: 0x4, def value: None
  float_t ___incStepMult;

  /// @brief Field decimals, offset: 0x68, size: 0x4, def value: None
  int32_t ___decimals;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Vector3Field, ___incStep) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Vector3Field, ___incStepMult) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Vector3Field, ___decimals) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUI_Vector3Field, 0x70>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DebugUI::Field`1<T>, UnityEngine.Vector4
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/Vector4Field
class CORDL_TYPE DebugUI_Vector4Field : public ::UnityEngine::Rendering::DebugUI_Field_1<::UnityEngine::Vector4> {
public:
  // Declarations
  /// @brief Field decimals, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_decimals, put = __cordl_internal_set_decimals)) int32_t decimals;

  /// @brief Field incStep, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_incStep, put = __cordl_internal_set_incStep)) float_t incStep;

  /// @brief Field incStepMult, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_incStepMult, put = __cordl_internal_set_incStepMult)) float_t incStepMult;

  static inline ::UnityEngine::Rendering::DebugUI_Vector4Field* New_ctor();

  constexpr int32_t const& __cordl_internal_get_decimals() const;

  constexpr int32_t& __cordl_internal_get_decimals();

  constexpr float_t const& __cordl_internal_get_incStep() const;

  constexpr float_t& __cordl_internal_get_incStep();

  constexpr float_t const& __cordl_internal_get_incStepMult() const;

  constexpr float_t& __cordl_internal_get_incStepMult();

  constexpr void __cordl_internal_set_decimals(int32_t value);

  constexpr void __cordl_internal_set_incStep(float_t value);

  constexpr void __cordl_internal_set_incStepMult(float_t value);

  /// @brief Method .ctor, addr 0x65b4dcc, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI_Vector4Field();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_Vector4Field", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUI_Vector4Field(DebugUI_Vector4Field&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_Vector4Field", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI_Vector4Field(DebugUI_Vector4Field const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11998 };

  /// @brief Field incStep, offset: 0x60, size: 0x4, def value: None
  float_t ___incStep;

  /// @brief Field incStepMult, offset: 0x64, size: 0x4, def value: None
  float_t ___incStepMult;

  /// @brief Field decimals, offset: 0x68, size: 0x4, def value: None
  int32_t ___decimals;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Vector4Field, ___incStep) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Vector4Field, ___incStepMult) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Vector4Field, ___decimals) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUI_Vector4Field, 0x70>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DebugUI::Field`1<T>
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/ObjectField
class CORDL_TYPE DebugUI_ObjectField : public ::UnityEngine::Rendering::DebugUI_Field_1<::UnityW<::UnityEngine::Object>> {
public:
  // Declarations
  /// @brief Field type, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Type* type;

  static inline ::UnityEngine::Rendering::DebugUI_ObjectField* New_ctor();

  constexpr ::System::Type* const& __cordl_internal_get_type() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method .ctor, addr 0x65a8888, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI_ObjectField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_ObjectField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUI_ObjectField(DebugUI_ObjectField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_ObjectField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI_ObjectField(DebugUI_ObjectField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11999 };

  /// @brief Field type, offset: 0x60, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugUI_ObjectField, ___type) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUI_ObjectField, 0x68>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DebugUI::Field`1<T>
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/ObjectListField
class CORDL_TYPE DebugUI_ObjectListField : public ::UnityEngine::Rendering::DebugUI_Field_1<::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*>> {
public:
  // Declarations
  /// @brief Field type, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Type* type;

  static inline ::UnityEngine::Rendering::DebugUI_ObjectListField* New_ctor();

  constexpr ::System::Type* const& __cordl_internal_get_type() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method .ctor, addr 0x65b4e20, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI_ObjectListField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_ObjectListField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUI_ObjectListField(DebugUI_ObjectListField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_ObjectListField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI_ObjectListField(DebugUI_ObjectListField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12000 };

  /// @brief Field type, offset: 0x60, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugUI_ObjectListField, ___type) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUI_ObjectListField, 0x68>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.DebugUI/MessageBox/Style
struct CORDL_TYPE MessageBox_DebugUI_Style {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MessageBox_DebugUI_Style_Unwrapped
  enum struct __MessageBox_DebugUI_Style_Unwrapped : int32_t {
    __E_Info = static_cast<int32_t>(0x0),
    __E_Warning = static_cast<int32_t>(0x1),
    __E_Error = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MessageBox_DebugUI_Style_Unwrapped() const noexcept {
    return static_cast<__MessageBox_DebugUI_Style_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageBox_DebugUI_Style();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MessageBox_DebugUI_Style(int32_t value__) noexcept;

  /// @brief Field Error value: I32(2)
  static ::UnityEngine::Rendering::MessageBox_DebugUI_Style const Error;

  /// @brief Field Info value: I32(0)
  static ::UnityEngine::Rendering::MessageBox_DebugUI_Style const Info;

  /// @brief Field Warning value: I32(1)
  static ::UnityEngine::Rendering::MessageBox_DebugUI_Style const Warning;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12001 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::MessageBox_DebugUI_Style, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::MessageBox_DebugUI_Style, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DebugUI::MessageBox::Style, UnityEngine.Rendering.DebugUI::Widget
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/MessageBox
class CORDL_TYPE DebugUI_MessageBox : public ::UnityEngine::Rendering::DebugUI_Widget {
public:
  // Declarations
  using Style = ::UnityEngine::Rendering::MessageBox_DebugUI_Style;

  __declspec(property(get = get_message)) ::StringW message;

  /// @brief Field messageCallback, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_messageCallback, put = __cordl_internal_set_messageCallback)) ::System::Func_1<::StringW>* messageCallback;

  /// @brief Field style, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_style, put = __cordl_internal_set_style)) ::UnityEngine::Rendering::MessageBox_DebugUI_Style style;

  static inline ::UnityEngine::Rendering::DebugUI_MessageBox* New_ctor();

  constexpr ::System::Func_1<::StringW>* const& __cordl_internal_get_messageCallback() const;

  constexpr ::System::Func_1<::StringW>*& __cordl_internal_get_messageCallback();

  constexpr ::UnityEngine::Rendering::MessageBox_DebugUI_Style const& __cordl_internal_get_style() const;

  constexpr ::UnityEngine::Rendering::MessageBox_DebugUI_Style& __cordl_internal_get_style();

  constexpr void __cordl_internal_set_messageCallback(::System::Func_1<::StringW>* value);

  constexpr void __cordl_internal_set_style(::UnityEngine::Rendering::MessageBox_DebugUI_Style value);

  /// @brief Method .ctor, addr 0x65b4ec0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_message, addr 0x65b4ea0, size 0x20, virtual false, abstract: false, final false
  inline ::StringW get_message();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI_MessageBox();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_MessageBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUI_MessageBox(DebugUI_MessageBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_MessageBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI_MessageBox(DebugUI_MessageBox const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12002 };

  /// @brief Field style, offset: 0x48, size: 0x4, def value: None
  ::UnityEngine::Rendering::MessageBox_DebugUI_Style ___style;

  /// @brief Field messageCallback, offset: 0x50, size: 0x8, def value: None
  ::System::Func_1<::StringW>* ___messageCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugUI_MessageBox, ___style) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_MessageBox, ___messageCallback) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUI_MessageBox, 0x58>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/RuntimeDebugShadersMessageBox/<>c
class CORDL_TYPE RuntimeDebugShadersMessageBox_DebugUI___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0)) ::System::Func_1<bool>* __9__0_0;

  static inline ::UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c* New_ctor();

  /// @brief Method <.ctor>b__0_0, addr 0x65b5024, size 0x9c, virtual false, abstract: false, final false
  inline bool __ctor_b__0_0();

  /// @brief Method .ctor, addr 0x65b5020, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c* getStaticF___9();

  static inline ::System::Func_1<bool>* getStaticF___9__0_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c* value);

  static inline void setStaticF___9__0_0(::System::Func_1<bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeDebugShadersMessageBox_DebugUI___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeDebugShadersMessageBox_DebugUI___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeDebugShadersMessageBox_DebugUI___c(RuntimeDebugShadersMessageBox_DebugUI___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeDebugShadersMessageBox_DebugUI___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeDebugShadersMessageBox_DebugUI___c(RuntimeDebugShadersMessageBox_DebugUI___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12003 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.DebugUI::MessageBox
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/RuntimeDebugShadersMessageBox
class CORDL_TYPE DebugUI_RuntimeDebugShadersMessageBox : public ::UnityEngine::Rendering::DebugUI_MessageBox {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c;

  static inline ::UnityEngine::Rendering::DebugUI_RuntimeDebugShadersMessageBox* New_ctor();

  /// @brief Method .ctor, addr 0x65b4ec4, size 0x108, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI_RuntimeDebugShadersMessageBox();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_RuntimeDebugShadersMessageBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUI_RuntimeDebugShadersMessageBox(DebugUI_RuntimeDebugShadersMessageBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_RuntimeDebugShadersMessageBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI_RuntimeDebugShadersMessageBox(DebugUI_RuntimeDebugShadersMessageBox const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12004 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUI_RuntimeDebugShadersMessageBox, 0x58>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/Panel/<>c
class CORDL_TYPE Panel_DebugUI___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Panel_DebugUI___c* __9;

  /// @brief Field <>9__29_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__29_0, put = setStaticF___9__29_0)) ::System::Action_1<::UnityEngine::Rendering::DebugUI_Panel*>* __9__29_0;

  static inline ::UnityEngine::Rendering::Panel_DebugUI___c* New_ctor();

  /// @brief Method <.ctor>b__29_0, addr 0x65b53cc, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__29_0(::UnityEngine::Rendering::DebugUI_Panel* _p0_);

  /// @brief Method .ctor, addr 0x65b53c8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Panel_DebugUI___c* getStaticF___9();

  static inline ::System::Action_1<::UnityEngine::Rendering::DebugUI_Panel*>* getStaticF___9__29_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Panel_DebugUI___c* value);

  static inline void setStaticF___9__29_0(::System::Action_1<::UnityEngine::Rendering::DebugUI_Panel*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Panel_DebugUI___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Panel_DebugUI___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Panel_DebugUI___c(Panel_DebugUI___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Panel_DebugUI___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Panel_DebugUI___c(Panel_DebugUI___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12005 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Panel_DebugUI___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Rendering.DebugUI::Flags
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI/Panel
class CORDL_TYPE DebugUI_Panel : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::Panel_DebugUI___c;

  /// @brief Field <children>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__children_k__BackingField,
                      put = __cordl_internal_set__children_k__BackingField)) ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* _children_k__BackingField;

  /// @brief Field <displayName>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__displayName_k__BackingField, put = __cordl_internal_set__displayName_k__BackingField)) ::StringW _displayName_k__BackingField;

  /// @brief Field <flags>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__flags_k__BackingField, put = __cordl_internal_set__flags_k__BackingField)) ::UnityEngine::Rendering::DebugUI_Flags _flags_k__BackingField;

  /// @brief Field <groupIndex>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__groupIndex_k__BackingField, put = __cordl_internal_set__groupIndex_k__BackingField)) int32_t _groupIndex_k__BackingField;

  __declspec(property(get = get_children, put = set_children)) ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* children;

  __declspec(property(get = get_displayName, put = set_displayName)) ::StringW displayName;

  __declspec(property(get = get_editorForceUpdate)) bool editorForceUpdate;

  __declspec(property(get = get_flags, put = set_flags)) ::UnityEngine::Rendering::DebugUI_Flags flags;

  __declspec(property(get = get_groupIndex, put = set_groupIndex)) int32_t groupIndex;

  __declspec(property(get = get_isEditorOnly)) bool isEditorOnly;

  __declspec(property(get = get_isInactiveInEditor)) bool isInactiveInEditor;

  __declspec(property(get = get_isRuntimeOnly)) bool isRuntimeOnly;

  /// @brief Field onSetDirty, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_onSetDirty, put = __cordl_internal_set_onSetDirty)) ::System::Action_1<::UnityEngine::Rendering::DebugUI_Panel*>* onSetDirty;

  __declspec(property(get = get_queryPath)) ::StringW queryPath;

  /// @brief Convert operator to "::System::IComparable_1<::UnityEngine::Rendering::DebugUI_Panel*>"
  constexpr operator ::System::IComparable_1<::UnityEngine::Rendering::DebugUI_Panel*>*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::DebugUI_IContainer"
  constexpr operator ::UnityEngine::Rendering::DebugUI_IContainer*() noexcept;

  /// @brief Method GetHashCode, addr 0x65b5268, size 0xe8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::Rendering::DebugUI_Panel* New_ctor();

  /// @brief Method OnItemAdded, addr 0x65b51b8, size 0x58, virtual true, abstract: false, final false
  inline void OnItemAdded(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* sender,
                          ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI_Widget*>* e);

  /// @brief Method OnItemRemoved, addr 0x65b5210, size 0x58, virtual true, abstract: false, final false
  inline void OnItemRemoved(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* sender,
                            ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::DebugUI_Widget*>* e);

  /// @brief Method SetDirty, addr 0x65b2ebc, size 0xd0, virtual false, abstract: false, final false
  inline void SetDirty();

  /// @brief Method System.IComparable<UnityEngine.Rendering.DebugUI.Panel>.CompareTo, addr 0x65b5350, size 0x24, virtual true, abstract: false, final true
  inline int32_t System_IComparable_UnityEngine_Rendering_DebugUI_Panel__CompareTo(::UnityEngine::Rendering::DebugUI_Panel* other);

  constexpr ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* const& __cordl_internal_get__children_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>*& __cordl_internal_get__children_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__displayName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__displayName_k__BackingField();

  constexpr ::UnityEngine::Rendering::DebugUI_Flags const& __cordl_internal_get__flags_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::DebugUI_Flags& __cordl_internal_get__flags_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__groupIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__groupIndex_k__BackingField();

  constexpr ::System::Action_1<::UnityEngine::Rendering::DebugUI_Panel*>* const& __cordl_internal_get_onSetDirty() const;

  constexpr ::System::Action_1<::UnityEngine::Rendering::DebugUI_Panel*>*& __cordl_internal_get_onSetDirty();

  constexpr void __cordl_internal_set__children_k__BackingField(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* value);

  constexpr void __cordl_internal_set__displayName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__flags_k__BackingField(::UnityEngine::Rendering::DebugUI_Flags value);

  constexpr void __cordl_internal_set__groupIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_onSetDirty(::System::Action_1<::UnityEngine::Rendering::DebugUI_Panel*>* value);

  /// @brief Method .ctor, addr 0x65aed50, size 0x1f0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_onSetDirty, addr 0x65aef40, size 0xc0, virtual false, abstract: false, final false
  inline void add_onSetDirty(::System::Action_1<::UnityEngine::Rendering::DebugUI_Panel*>* value);

  /// @brief Method get_children, addr 0x65b51a8, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* get_children();

  /// @brief Method get_displayName, addr 0x65b50d0, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_displayName();

  /// @brief Method get_editorForceUpdate, addr 0x65b519c, size 0xc, virtual false, abstract: false, final false
  inline bool get_editorForceUpdate();

  /// @brief Method get_flags, addr 0x65b50c0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DebugUI_Flags get_flags();

  /// @brief Method get_groupIndex, addr 0x65b50e0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_groupIndex();

  /// @brief Method get_isEditorOnly, addr 0x65b50f8, size 0xc, virtual false, abstract: false, final false
  inline bool get_isEditorOnly();

  /// @brief Method get_isInactiveInEditor, addr 0x65b5110, size 0x8c, virtual false, abstract: false, final false
  inline bool get_isInactiveInEditor();

  /// @brief Method get_isRuntimeOnly, addr 0x65b5104, size 0xc, virtual false, abstract: false, final false
  inline bool get_isRuntimeOnly();

  /// @brief Method get_queryPath, addr 0x65b50f0, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_queryPath();

  /// @brief Convert to "::System::IComparable_1<::UnityEngine::Rendering::DebugUI_Panel*>"
  constexpr ::System::IComparable_1<::UnityEngine::Rendering::DebugUI_Panel*>* i___System__IComparable_1___UnityEngine__Rendering__DebugUI_Panel__() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::DebugUI_IContainer"
  constexpr ::UnityEngine::Rendering::DebugUI_IContainer* i___UnityEngine__Rendering__DebugUI_IContainer() noexcept;

  /// @brief Method remove_onSetDirty, addr 0x65aec10, size 0xc0, virtual false, abstract: false, final false
  inline void remove_onSetDirty(::System::Action_1<::UnityEngine::Rendering::DebugUI_Panel*>* value);

  /// @brief Method set_children, addr 0x65b51b0, size 0x8, virtual false, abstract: false, final false
  inline void set_children(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* value);

  /// @brief Method set_displayName, addr 0x65b50d8, size 0x8, virtual true, abstract: false, final true
  inline void set_displayName(::StringW value);

  /// @brief Method set_flags, addr 0x65b50c8, size 0x8, virtual false, abstract: false, final false
  inline void set_flags(::UnityEngine::Rendering::DebugUI_Flags value);

  /// @brief Method set_groupIndex, addr 0x65b50e8, size 0x8, virtual false, abstract: false, final false
  inline void set_groupIndex(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI_Panel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_Panel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUI_Panel(DebugUI_Panel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI_Panel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI_Panel(DebugUI_Panel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12006 };

  /// @brief Field <flags>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::DebugUI_Flags ____flags_k__BackingField;

  /// @brief Field <displayName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____displayName_k__BackingField;

  /// @brief Field <groupIndex>k__BackingField, offset: 0x20, size: 0x4, def value: None
  int32_t ____groupIndex_k__BackingField;

  /// @brief Field <children>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* ____children_k__BackingField;

  /// @brief Field onSetDirty, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::Rendering::DebugUI_Panel*>* ___onSetDirty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Panel, ____flags_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Panel, ____displayName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Panel, ____groupIndex_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Panel, ____children_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugUI_Panel, ___onSetDirty) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUI_Panel, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugUI
class CORDL_TYPE DebugUI : public ::System::Object {
public:
  // Declarations
  using BitField = ::UnityEngine::Rendering::DebugUI_BitField;

  using BoolField = ::UnityEngine::Rendering::DebugUI_BoolField;

  using Button = ::UnityEngine::Rendering::DebugUI_Button;

  using ColorField = ::UnityEngine::Rendering::DebugUI_ColorField;

  using Container = ::UnityEngine::Rendering::DebugUI_Container;

  using EnumField = ::UnityEngine::Rendering::DebugUI_EnumField;

  template <typename T> using EnumField_1 = ::UnityEngine::Rendering::DebugUI_EnumField_1<T>;

  template <typename T> using Field_1 = ::UnityEngine::Rendering::DebugUI_Field_1<T>;

  using Flags = ::UnityEngine::Rendering::DebugUI_Flags;

  using FloatField = ::UnityEngine::Rendering::DebugUI_FloatField;

  using Foldout = ::UnityEngine::Rendering::DebugUI_Foldout;

  using HBox = ::UnityEngine::Rendering::DebugUI_HBox;

  using HistoryBoolField = ::UnityEngine::Rendering::DebugUI_HistoryBoolField;

  using HistoryEnumField = ::UnityEngine::Rendering::DebugUI_HistoryEnumField;

  using IContainer = ::UnityEngine::Rendering::DebugUI_IContainer;

  using IValueField = ::UnityEngine::Rendering::DebugUI_IValueField;

  using IntField = ::UnityEngine::Rendering::DebugUI_IntField;

  using MaskField = ::UnityEngine::Rendering::DebugUI_MaskField;

  using MessageBox = ::UnityEngine::Rendering::DebugUI_MessageBox;

  using ObjectField = ::UnityEngine::Rendering::DebugUI_ObjectField;

  using ObjectListField = ::UnityEngine::Rendering::DebugUI_ObjectListField;

  using ObjectPopupField = ::UnityEngine::Rendering::DebugUI_ObjectPopupField;

  using Panel = ::UnityEngine::Rendering::DebugUI_Panel;

  using ProgressBarValue = ::UnityEngine::Rendering::DebugUI_ProgressBarValue;

  using RuntimeDebugShadersMessageBox = ::UnityEngine::Rendering::DebugUI_RuntimeDebugShadersMessageBox;

  using Table = ::UnityEngine::Rendering::DebugUI_Table;

  using UIntField = ::UnityEngine::Rendering::DebugUI_UIntField;

  using VBox = ::UnityEngine::Rendering::DebugUI_VBox;

  using Value = ::UnityEngine::Rendering::DebugUI_Value;

  using ValueTuple = ::UnityEngine::Rendering::DebugUI_ValueTuple;

  using Vector2Field = ::UnityEngine::Rendering::DebugUI_Vector2Field;

  using Vector3Field = ::UnityEngine::Rendering::DebugUI_Vector3Field;

  using Vector4Field = ::UnityEngine::Rendering::DebugUI_Vector4Field;

  using Widget = ::UnityEngine::Rendering::DebugUI_Widget;

  static inline ::UnityEngine::Rendering::DebugUI* New_ctor();

  /// @brief Method .ctor, addr 0x65b2804, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUI();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUI(DebugUI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUI(DebugUI const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12007 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugUI, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI_Flags, "UnityEngine.Rendering", "DebugUI/Flags");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::MessageBox_DebugUI_Style, "UnityEngine.Rendering", "DebugUI/MessageBox/Style");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI*, "UnityEngine.Rendering", "DebugUI");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI_BitField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI_BitField*, "UnityEngine.Rendering", "DebugUI/BitField");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI_BoolField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI_BoolField*, "UnityEngine.Rendering", "DebugUI/BoolField");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI_Button);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI_Button*, "UnityEngine.Rendering", "DebugUI/Button");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI_ColorField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI_ColorField*, "UnityEngine.Rendering", "DebugUI/ColorField");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI_Container);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI_Container*, "UnityEngine.Rendering", "DebugUI/Container");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI_EnumField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI_EnumField*, "UnityEngine.Rendering", "DebugUI/EnumField");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::DebugUI_EnumField_1, "UnityEngine.Rendering", "DebugUI/EnumField`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::DebugUI_Field_1, "UnityEngine.Rendering", "DebugUI/Field`1");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI_FloatField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI_FloatField*, "UnityEngine.Rendering", "DebugUI/FloatField");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI_Foldout);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI_Foldout*, "UnityEngine.Rendering", "DebugUI/Foldout");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI_HBox);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI_HBox*, "UnityEngine.Rendering", "DebugUI/HBox");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI_HistoryBoolField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI_HistoryBoolField*, "UnityEngine.Rendering", "DebugUI/HistoryBoolField");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI_HistoryEnumField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI_HistoryEnumField*, "UnityEngine.Rendering", "DebugUI/HistoryEnumField");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI_IContainer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI_IContainer*, "UnityEngine.Rendering", "DebugUI/IContainer");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI_IValueField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI_IValueField*, "UnityEngine.Rendering", "DebugUI/IValueField");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI_IntField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI_IntField*, "UnityEngine.Rendering", "DebugUI/IntField");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI_MaskField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI_MaskField*, "UnityEngine.Rendering", "DebugUI/MaskField");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI_MessageBox);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI_MessageBox*, "UnityEngine.Rendering", "DebugUI/MessageBox");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI_ObjectField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI_ObjectField*, "UnityEngine.Rendering", "DebugUI/ObjectField");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI_ObjectListField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI_ObjectListField*, "UnityEngine.Rendering", "DebugUI/ObjectListField");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI_ObjectPopupField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI_ObjectPopupField*, "UnityEngine.Rendering", "DebugUI/ObjectPopupField");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI_Panel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI_Panel*, "UnityEngine.Rendering", "DebugUI/Panel");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI_ProgressBarValue);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI_ProgressBarValue*, "UnityEngine.Rendering", "DebugUI/ProgressBarValue");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI_RuntimeDebugShadersMessageBox);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI_RuntimeDebugShadersMessageBox*, "UnityEngine.Rendering", "DebugUI/RuntimeDebugShadersMessageBox");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI_Table);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI_Table*, "UnityEngine.Rendering", "DebugUI/Table");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI_UIntField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI_UIntField*, "UnityEngine.Rendering", "DebugUI/UIntField");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI_VBox);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI_VBox*, "UnityEngine.Rendering", "DebugUI/VBox");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI_Value);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI_Value*, "UnityEngine.Rendering", "DebugUI/Value");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI_ValueTuple);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI_ValueTuple*, "UnityEngine.Rendering", "DebugUI/ValueTuple");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI_Vector2Field);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI_Vector2Field*, "UnityEngine.Rendering", "DebugUI/Vector2Field");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI_Vector3Field);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI_Vector3Field*, "UnityEngine.Rendering", "DebugUI/Vector3Field");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI_Vector4Field);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI_Vector4Field*, "UnityEngine.Rendering", "DebugUI/Vector4Field");
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI_Widget);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI_Widget*, "UnityEngine.Rendering", "DebugUI/Widget");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::EnumField_1_DebugUI___c, "UnityEngine.Rendering", "DebugUI/EnumField`1/<>c");
NEED_NO_BOX(::UnityEngine::Rendering::EnumField_DebugUI___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::EnumField_DebugUI___c*, "UnityEngine.Rendering", "DebugUI/EnumField/<>c");
NEED_NO_BOX(::UnityEngine::Rendering::Panel_DebugUI___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Panel_DebugUI___c*, "UnityEngine.Rendering", "DebugUI/Panel/<>c");
NEED_NO_BOX(::UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RuntimeDebugShadersMessageBox_DebugUI___c*, "UnityEngine.Rendering", "DebugUI/RuntimeDebugShadersMessageBox/<>c");
NEED_NO_BOX(::UnityEngine::Rendering::Table_DebugUI_Row);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Table_DebugUI_Row*, "UnityEngine.Rendering", "DebugUI/Table/Row");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Foldout_DebugUI_ContextMenuItem, "UnityEngine.Rendering", "DebugUI/Foldout/ContextMenuItem");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip, "UnityEngine.Rendering", "DebugUI/Widget/NameAndTooltip");
