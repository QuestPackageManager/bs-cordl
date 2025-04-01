#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Column.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__Background_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectTraits_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Column)
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine::UIElements {
struct Background;
}
namespace UnityEngine::UIElements {
struct ColumnDataType;
}
namespace UnityEngine::UIElements {
template <typename T> class Column_UxmlObjectFactory_1;
}
namespace UnityEngine::UIElements {
template <typename T> class Column_UxmlObjectTraits_1;
}
namespace UnityEngine::UIElements {
class Columns;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
template <typename T> class UxmlObjectTraits_1_Column___c__DisplayClass15_0;
}
namespace UnityEngine::UIElements {
template <typename T> class UxmlObjectTraits_1_Column___c__DisplayClass15_1;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class VisualTreeAsset;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Column;
}
namespace UnityEngine::UIElements {
template <typename T> class Column_UxmlObjectFactory_1;
}
namespace UnityEngine::UIElements {
template <typename T> class Column_UxmlObjectTraits_1;
}
namespace UnityEngine::UIElements {
template <typename T> class UxmlObjectTraits_1_Column___c__DisplayClass15_0;
}
namespace UnityEngine::UIElements {
template <typename T> class UxmlObjectTraits_1_Column___c__DisplayClass15_1;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Column);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::Column_UxmlObjectFactory_1);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::Column_UxmlObjectTraits_1);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::UxmlObjectTraits_1_Column___c__DisplayClass15_0);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::UxmlObjectTraits_1_Column___c__DisplayClass15_1);
// Dependencies UnityEngine.UIElements.UxmlObjectFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.Column/UxmlObjectFactory`1<T>
class CORDL_TYPE Column_UxmlObjectFactory_1 : public ::UnityEngine::UIElements::UxmlObjectFactory_2<T, ::UnityEngine::UIElements::Column_UxmlObjectTraits_1<T>*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::Column_UxmlObjectFactory_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Column_UxmlObjectFactory_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Column_UxmlObjectFactory_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Column_UxmlObjectFactory_1(Column_UxmlObjectFactory_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Column_UxmlObjectFactory_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Column_UxmlObjectFactory_1(Column_UxmlObjectFactory_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5638 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.Column/UxmlObjectTraits`1/<>c__DisplayClass15_0<T>
class CORDL_TYPE UxmlObjectTraits_1_Column___c__DisplayClass15_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field asset, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_asset, put = __cordl_internal_set_asset)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> asset;

  static inline ::UnityEngine::UIElements::UxmlObjectTraits_1_Column___c__DisplayClass15_0<T>* New_ctor();

  /// @brief Method <Init>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* _Init_b__0();

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& __cordl_internal_get_asset() const;

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& __cordl_internal_get_asset();

  constexpr void __cordl_internal_set_asset(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlObjectTraits_1_Column___c__DisplayClass15_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlObjectTraits_1_Column___c__DisplayClass15_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlObjectTraits_1_Column___c__DisplayClass15_0(UxmlObjectTraits_1_Column___c__DisplayClass15_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlObjectTraits_1_Column___c__DisplayClass15_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlObjectTraits_1_Column___c__DisplayClass15_0(UxmlObjectTraits_1_Column___c__DisplayClass15_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5639 };

  /// @brief Field asset, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> ___asset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.Column/UxmlObjectTraits`1/<>c__DisplayClass15_1<T>
class CORDL_TYPE UxmlObjectTraits_1_Column___c__DisplayClass15_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field asset, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_asset, put = __cordl_internal_set_asset)) ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> asset;

  static inline ::UnityEngine::UIElements::UxmlObjectTraits_1_Column___c__DisplayClass15_1<T>* New_ctor();

  /// @brief Method <Init>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* _Init_b__1();

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& __cordl_internal_get_asset() const;

  constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& __cordl_internal_get_asset();

  constexpr void __cordl_internal_set_asset(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlObjectTraits_1_Column___c__DisplayClass15_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlObjectTraits_1_Column___c__DisplayClass15_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlObjectTraits_1_Column___c__DisplayClass15_1(UxmlObjectTraits_1_Column___c__DisplayClass15_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlObjectTraits_1_Column___c__DisplayClass15_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlObjectTraits_1_Column___c__DisplayClass15_1(UxmlObjectTraits_1_Column___c__DisplayClass15_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5640 };

  /// @brief Field asset, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> ___asset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.UxmlObjectTraits`1<T>
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.Column/UxmlObjectTraits`1<T>
class CORDL_TYPE Column_UxmlObjectTraits_1 : public ::UnityEngine::UIElements::UxmlObjectTraits_1<T> {
public:
  // Declarations
  using __c__DisplayClass15_0 = ::UnityEngine::UIElements::UxmlObjectTraits_1_Column___c__DisplayClass15_0<T>;

  using __c__DisplayClass15_1 = ::UnityEngine::UIElements::UxmlObjectTraits_1_Column___c__DisplayClass15_1<T>;

  /// @brief Field m_CellTemplateId, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CellTemplateId, put = __cordl_internal_set_m_CellTemplateId)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_CellTemplateId;

  /// @brief Field m_HeaderTemplateId, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HeaderTemplateId, put = __cordl_internal_set_m_HeaderTemplateId)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_HeaderTemplateId;

  /// @brief Field m_MaxWidth, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaxWidth, put = __cordl_internal_set_m_MaxWidth)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_MaxWidth;

  /// @brief Field m_MinWidth, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MinWidth, put = __cordl_internal_set_m_MinWidth)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_MinWidth;

  /// @brief Field m_Name, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Name, put = __cordl_internal_set_m_Name)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Name;

  /// @brief Field m_Optional, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Optional, put = __cordl_internal_set_m_Optional)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_Optional;

  /// @brief Field m_Resizable, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Resizable, put = __cordl_internal_set_m_Resizable)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_Resizable;

  /// @brief Field m_Sortable, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Sortable, put = __cordl_internal_set_m_Sortable)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_Sortable;

  /// @brief Field m_Stretch, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Stretch, put = __cordl_internal_set_m_Stretch)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_Stretch;

  /// @brief Field m_Text, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Text;

  /// @brief Field m_Visible, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Visible, put = __cordl_internal_set_m_Visible)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_Visible;

  /// @brief Field m_Width, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Width, put = __cordl_internal_set_m_Width)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Width;

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init(::ByRef<T> obj, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::Column_UxmlObjectTraits_1<T>* New_ctor();

  /// @brief Method ParseLength, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length ParseLength(::StringW str, ::UnityEngine::UIElements::Length defaultValue);

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_CellTemplateId() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_CellTemplateId();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_HeaderTemplateId() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_HeaderTemplateId();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_MaxWidth() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_MaxWidth();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_MinWidth() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_MinWidth();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_Name() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Name();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_Optional() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_Optional();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_Resizable() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_Resizable();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_Sortable() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_Sortable();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_Stretch() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_Stretch();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_Text() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Text();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_Visible() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_Visible();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_Width() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Width();

  constexpr void __cordl_internal_set_m_CellTemplateId(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr void __cordl_internal_set_m_HeaderTemplateId(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr void __cordl_internal_set_m_MaxWidth(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr void __cordl_internal_set_m_MinWidth(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Name(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Optional(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Resizable(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Sortable(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Stretch(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Text(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Visible(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Width(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Column_UxmlObjectTraits_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Column_UxmlObjectTraits_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Column_UxmlObjectTraits_1(Column_UxmlObjectTraits_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Column_UxmlObjectTraits_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Column_UxmlObjectTraits_1(Column_UxmlObjectTraits_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5641 };

  /// @brief Field m_Name, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Name;

  /// @brief Field m_Text, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Text;

  /// @brief Field m_Visible, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_Visible;

  /// @brief Field m_Width, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Width;

  /// @brief Field m_MinWidth, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_MinWidth;

  /// @brief Field m_MaxWidth, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_MaxWidth;

  /// @brief Field m_Stretch, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_Stretch;

  /// @brief Field m_Sortable, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_Sortable;

  /// @brief Field m_Optional, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_Optional;

  /// @brief Field m_Resizable, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_Resizable;

  /// @brief Field m_HeaderTemplateId, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_HeaderTemplateId;

  /// @brief Field m_CellTemplateId, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_CellTemplateId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies System.Object, UnityEngine.UIElements.Background, UnityEngine.UIElements.Length
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Column
class CORDL_TYPE Column : public ::System::Object {
public:
  // Declarations
  template <typename T> using UxmlObjectFactory_1 = ::UnityEngine::UIElements::Column_UxmlObjectFactory_1<T>;

  template <typename T> using UxmlObjectTraits_1 = ::UnityEngine::UIElements::Column_UxmlObjectTraits_1<T>;

  /// @brief Field <collection>k__BackingField, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__collection_k__BackingField, put = __cordl_internal_set__collection_k__BackingField)) ::UnityEngine::UIElements::Columns* _collection_k__BackingField;

  /// @brief Field <destroyCell>k__BackingField, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__destroyCell_k__BackingField,
                      put = __cordl_internal_set__destroyCell_k__BackingField)) ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* _destroyCell_k__BackingField;

  __declspec(property(get = get_bindCell)) ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* bindCell;

  __declspec(property(get = get_bindHeader)) ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* bindHeader;

  /// @brief Field changed, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_changed,
                      put = __cordl_internal_set_changed)) ::System::Action_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType>* changed;

  __declspec(property(get = get_collection, put = set_collection)) ::UnityEngine::UIElements::Columns* collection;

  __declspec(property(get = get_desiredWidth, put = set_desiredWidth)) float_t desiredWidth;

  __declspec(property(get = get_destroyCell)) ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* destroyCell;

  __declspec(property(get = get_destroyHeader)) ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* destroyHeader;

  __declspec(property(get = get_displayIndex)) int32_t displayIndex;

  __declspec(property(get = get_icon)) ::UnityEngine::UIElements::Background icon;

  __declspec(property(get = get_index)) int32_t index;

  /// @brief Field k_InvalidTemplateError, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_InvalidTemplateError, put = setStaticF_k_InvalidTemplateError)) ::StringW k_InvalidTemplateError;

  /// @brief Field m_BindCell, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BindCell, put = __cordl_internal_set_m_BindCell)) ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* m_BindCell;

  /// @brief Field m_BindHeader, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BindHeader, put = __cordl_internal_set_m_BindHeader)) ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* m_BindHeader;

  /// @brief Field m_DesiredWidth, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DesiredWidth, put = __cordl_internal_set_m_DesiredWidth)) float_t m_DesiredWidth;

  /// @brief Field m_DestroyHeader, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DestroyHeader, put = __cordl_internal_set_m_DestroyHeader)) ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* m_DestroyHeader;

  /// @brief Field m_Icon, offset 0x20, size 0x20
  __declspec(property(get = __cordl_internal_get_m_Icon, put = __cordl_internal_set_m_Icon)) ::UnityEngine::UIElements::Background m_Icon;

  /// @brief Field m_MakeCell, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MakeCell, put = __cordl_internal_set_m_MakeCell)) ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* m_MakeCell;

  /// @brief Field m_MakeHeader, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MakeHeader, put = __cordl_internal_set_m_MakeHeader)) ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* m_MakeHeader;

  /// @brief Field m_MaxWidth, offset 0x54, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaxWidth, put = __cordl_internal_set_m_MaxWidth)) ::UnityEngine::UIElements::Length m_MaxWidth;

  /// @brief Field m_MinWidth, offset 0x4c, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MinWidth, put = __cordl_internal_set_m_MinWidth)) ::UnityEngine::UIElements::Length m_MinWidth;

  /// @brief Field m_Name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Name, put = __cordl_internal_set_m_Name)) ::StringW m_Name;

  /// @brief Field m_Optional, offset 0x62, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Optional, put = __cordl_internal_set_m_Optional)) bool m_Optional;

  /// @brief Field m_Resizable, offset 0x63, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Resizable, put = __cordl_internal_set_m_Resizable)) bool m_Resizable;

  /// @brief Field m_Sortable, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Sortable, put = __cordl_internal_set_m_Sortable)) bool m_Sortable;

  /// @brief Field m_Stretchable, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Stretchable, put = __cordl_internal_set_m_Stretchable)) bool m_Stretchable;

  /// @brief Field m_Title, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Title, put = __cordl_internal_set_m_Title)) ::StringW m_Title;

  /// @brief Field m_UnbindCellItem, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UnbindCellItem,
                      put = __cordl_internal_set_m_UnbindCellItem)) ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* m_UnbindCellItem;

  /// @brief Field m_UnbindHeader, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UnbindHeader, put = __cordl_internal_set_m_UnbindHeader)) ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* m_UnbindHeader;

  /// @brief Field m_Visible, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Visible, put = __cordl_internal_set_m_Visible)) bool m_Visible;

  /// @brief Field m_Width, offset 0x44, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Width, put = __cordl_internal_set_m_Width)) ::UnityEngine::UIElements::Length m_Width;

  __declspec(property(get = get_makeCell, put = set_makeCell)) ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* makeCell;

  __declspec(property(get = get_makeHeader, put = set_makeHeader)) ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* makeHeader;

  __declspec(property(get = get_maxWidth, put = set_maxWidth)) ::UnityEngine::UIElements::Length maxWidth;

  __declspec(property(get = get_minWidth, put = set_minWidth)) ::UnityEngine::UIElements::Length minWidth;

  __declspec(property(get = get_name, put = set_name)) ::StringW name;

  __declspec(property(get = get_optional, put = set_optional)) bool optional;

  __declspec(property(get = get_resizable, put = set_resizable)) bool resizable;

  /// @brief Field resized, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_resized, put = __cordl_internal_set_resized)) ::System::Action_1<::UnityEngine::UIElements::Column*>* resized;

  __declspec(property(get = get_sortable, put = set_sortable)) bool sortable;

  __declspec(property(get = get_stretchable, put = set_stretchable)) bool stretchable;

  __declspec(property(get = get_title, put = set_title)) ::StringW title;

  __declspec(property(get = get_unbindCell)) ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* unbindCell;

  __declspec(property(get = get_unbindHeader)) ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* unbindHeader;

  __declspec(property(get = get_visible, put = set_visible)) bool visible;

  __declspec(property(get = get_visibleIndex)) int32_t visibleIndex;

  __declspec(property(get = get_width, put = set_width)) ::UnityEngine::UIElements::Length width;

  /// @brief Method GetMaxWidth, addr 0x49f1410, size 0x24, virtual false, abstract: false, final false
  inline float_t GetMaxWidth(float_t layoutWidth);

  /// @brief Method GetMinWidth, addr 0x49f1434, size 0x24, virtual false, abstract: false, final false
  inline float_t GetMinWidth(float_t layoutWidth);

  /// @brief Method GetWidth, addr 0x49f13ec, size 0x24, virtual false, abstract: false, final false
  inline float_t GetWidth(float_t layoutWidth);

  static inline ::UnityEngine::UIElements::Column* New_ctor();

  /// @brief Method NotifyChange, addr 0x49f0a74, size 0x28, virtual false, abstract: false, final false
  inline void NotifyChange(::UnityEngine::UIElements::ColumnDataType type);

  constexpr ::UnityEngine::UIElements::Columns* const& __cordl_internal_get__collection_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::Columns*& __cordl_internal_get__collection_k__BackingField();

  constexpr ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get__destroyCell_k__BackingField() const;

  constexpr ::System::Action_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get__destroyCell_k__BackingField();

  constexpr ::System::Action_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType>* const& __cordl_internal_get_changed() const;

  constexpr ::System::Action_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType>*& __cordl_internal_get_changed();

  constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* const& __cordl_internal_get_m_BindCell() const;

  constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*& __cordl_internal_get_m_BindCell();

  constexpr ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get_m_BindHeader() const;

  constexpr ::System::Action_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_BindHeader();

  constexpr float_t const& __cordl_internal_get_m_DesiredWidth() const;

  constexpr float_t& __cordl_internal_get_m_DesiredWidth();

  constexpr ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get_m_DestroyHeader() const;

  constexpr ::System::Action_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_DestroyHeader();

  constexpr ::UnityEngine::UIElements::Background const& __cordl_internal_get_m_Icon() const;

  constexpr ::UnityEngine::UIElements::Background& __cordl_internal_get_m_Icon();

  constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get_m_MakeCell() const;

  constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_MakeCell();

  constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get_m_MakeHeader() const;

  constexpr ::System::Func_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_MakeHeader();

  constexpr ::UnityEngine::UIElements::Length const& __cordl_internal_get_m_MaxWidth() const;

  constexpr ::UnityEngine::UIElements::Length& __cordl_internal_get_m_MaxWidth();

  constexpr ::UnityEngine::UIElements::Length const& __cordl_internal_get_m_MinWidth() const;

  constexpr ::UnityEngine::UIElements::Length& __cordl_internal_get_m_MinWidth();

  constexpr ::StringW const& __cordl_internal_get_m_Name() const;

  constexpr ::StringW& __cordl_internal_get_m_Name();

  constexpr bool const& __cordl_internal_get_m_Optional() const;

  constexpr bool& __cordl_internal_get_m_Optional();

  constexpr bool const& __cordl_internal_get_m_Resizable() const;

  constexpr bool& __cordl_internal_get_m_Resizable();

  constexpr bool const& __cordl_internal_get_m_Sortable() const;

  constexpr bool& __cordl_internal_get_m_Sortable();

  constexpr bool const& __cordl_internal_get_m_Stretchable() const;

  constexpr bool& __cordl_internal_get_m_Stretchable();

  constexpr ::StringW const& __cordl_internal_get_m_Title() const;

  constexpr ::StringW& __cordl_internal_get_m_Title();

  constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* const& __cordl_internal_get_m_UnbindCellItem() const;

  constexpr ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>*& __cordl_internal_get_m_UnbindCellItem();

  constexpr ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get_m_UnbindHeader() const;

  constexpr ::System::Action_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_m_UnbindHeader();

  constexpr bool const& __cordl_internal_get_m_Visible() const;

  constexpr bool& __cordl_internal_get_m_Visible();

  constexpr ::UnityEngine::UIElements::Length const& __cordl_internal_get_m_Width() const;

  constexpr ::UnityEngine::UIElements::Length& __cordl_internal_get_m_Width();

  constexpr ::System::Action_1<::UnityEngine::UIElements::Column*>* const& __cordl_internal_get_resized() const;

  constexpr ::System::Action_1<::UnityEngine::UIElements::Column*>*& __cordl_internal_get_resized();

  constexpr void __cordl_internal_set__collection_k__BackingField(::UnityEngine::UIElements::Columns* value);

  constexpr void __cordl_internal_set__destroyCell_k__BackingField(::System::Action_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set_changed(::System::Action_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType>* value);

  constexpr void __cordl_internal_set_m_BindCell(::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* value);

  constexpr void __cordl_internal_set_m_BindHeader(::System::Action_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set_m_DesiredWidth(float_t value);

  constexpr void __cordl_internal_set_m_DestroyHeader(::System::Action_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set_m_Icon(::UnityEngine::UIElements::Background value);

  constexpr void __cordl_internal_set_m_MakeCell(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set_m_MakeHeader(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set_m_MaxWidth(::UnityEngine::UIElements::Length value);

  constexpr void __cordl_internal_set_m_MinWidth(::UnityEngine::UIElements::Length value);

  constexpr void __cordl_internal_set_m_Name(::StringW value);

  constexpr void __cordl_internal_set_m_Optional(bool value);

  constexpr void __cordl_internal_set_m_Resizable(bool value);

  constexpr void __cordl_internal_set_m_Sortable(bool value);

  constexpr void __cordl_internal_set_m_Stretchable(bool value);

  constexpr void __cordl_internal_set_m_Title(::StringW value);

  constexpr void __cordl_internal_set_m_UnbindCellItem(::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* value);

  constexpr void __cordl_internal_set_m_UnbindHeader(::System::Action_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set_m_Visible(bool value);

  constexpr void __cordl_internal_set_m_Width(::UnityEngine::UIElements::Length value);

  constexpr void __cordl_internal_set_resized(::System::Action_1<::UnityEngine::UIElements::Column*>* value);

  /// @brief Method .ctor, addr 0x49f1458, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_changed, addr 0x49f112c, size 0xb0, virtual false, abstract: false, final false
  inline void add_changed(::System::Action_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType>* value);

  /// @brief Method add_resized, addr 0x49f128c, size 0xb0, virtual false, abstract: false, final false
  inline void add_resized(::System::Action_1<::UnityEngine::UIElements::Column*>* value);

  static inline ::StringW getStaticF_k_InvalidTemplateError();

  /// @brief Method get_bindCell, addr 0x49f1104, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* get_bindCell();

  /// @brief Method get_bindHeader, addr 0x49f108c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* get_bindHeader();

  /// @brief Method get_collection, addr 0x49f111c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Columns* get_collection();

  /// @brief Method get_desiredWidth, addr 0x49f0f14, size 0x8, virtual false, abstract: false, final false
  inline float_t get_desiredWidth();

  /// @brief Method get_destroyCell, addr 0x49f1114, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* get_destroyCell();

  /// @brief Method get_destroyHeader, addr 0x49f109c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* get_destroyHeader();

  /// @brief Method get_displayIndex, addr 0x49f0bcc, size 0xb0, virtual false, abstract: false, final false
  inline int32_t get_displayIndex();

  /// @brief Method get_icon, addr 0x49f0afc, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Background get_icon();

  /// @brief Method get_index, addr 0x49f0b08, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_index();

  /// @brief Method get_makeCell, addr 0x49f10a4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* get_makeCell();

  /// @brief Method get_makeHeader, addr 0x49f102c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* get_makeHeader();

  /// @brief Method get_maxWidth, addr 0x49f0eb4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Length get_maxWidth();

  /// @brief Method get_minWidth, addr 0x49f0e54, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Length get_minWidth();

  /// @brief Method get_name, addr 0x49f0a14, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_optional, addr 0x49f0fa4, size 0x8, virtual false, abstract: false, final false
  inline bool get_optional();

  /// @brief Method get_resizable, addr 0x49f0fe8, size 0x8, virtual false, abstract: false, final false
  inline bool get_resizable();

  /// @brief Method get_sortable, addr 0x49f0f1c, size 0x8, virtual false, abstract: false, final false
  inline bool get_sortable();

  /// @brief Method get_stretchable, addr 0x49f0f60, size 0x8, virtual false, abstract: false, final false
  inline bool get_stretchable();

  /// @brief Method get_title, addr 0x49f0a9c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_title();

  /// @brief Method get_unbindCell, addr 0x49f110c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* get_unbindCell();

  /// @brief Method get_unbindHeader, addr 0x49f1094, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* get_unbindHeader();

  /// @brief Method get_visible, addr 0x49f0d5c, size 0x8, virtual false, abstract: false, final false
  inline bool get_visible();

  /// @brief Method get_visibleIndex, addr 0x49f0c94, size 0xb0, virtual false, abstract: false, final false
  inline int32_t get_visibleIndex();

  /// @brief Method get_width, addr 0x49f0da0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Length get_width();

  /// @brief Method remove_changed, addr 0x49f11dc, size 0xb0, virtual false, abstract: false, final false
  inline void remove_changed(::System::Action_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType>* value);

  /// @brief Method remove_resized, addr 0x49f133c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_resized(::System::Action_1<::UnityEngine::UIElements::Column*>* value);

  static inline void setStaticF_k_InvalidTemplateError(::StringW value);

  /// @brief Method set_collection, addr 0x49f1124, size 0x8, virtual false, abstract: false, final false
  inline void set_collection(::UnityEngine::UIElements::Columns* value);

  /// @brief Method set_desiredWidth, addr 0x49f0e24, size 0x30, virtual false, abstract: false, final false
  inline void set_desiredWidth(float_t value);

  /// @brief Method set_makeCell, addr 0x49f10ac, size 0x58, virtual false, abstract: false, final false
  inline void set_makeCell(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value);

  /// @brief Method set_makeHeader, addr 0x49f1034, size 0x58, virtual false, abstract: false, final false
  inline void set_makeHeader(::System::Func_1<::UnityEngine::UIElements::VisualElement*>* value);

  /// @brief Method set_maxWidth, addr 0x49f0ebc, size 0x58, virtual false, abstract: false, final false
  inline void set_maxWidth(::UnityEngine::UIElements::Length value);

  /// @brief Method set_minWidth, addr 0x49f0e5c, size 0x58, virtual false, abstract: false, final false
  inline void set_minWidth(::UnityEngine::UIElements::Length value);

  /// @brief Method set_name, addr 0x49f0a1c, size 0x58, virtual false, abstract: false, final false
  inline void set_name(::StringW value);

  /// @brief Method set_optional, addr 0x49f0fac, size 0x3c, virtual false, abstract: false, final false
  inline void set_optional(bool value);

  /// @brief Method set_resizable, addr 0x49f0ff0, size 0x3c, virtual false, abstract: false, final false
  inline void set_resizable(bool value);

  /// @brief Method set_sortable, addr 0x49f0f24, size 0x3c, virtual false, abstract: false, final false
  inline void set_sortable(bool value);

  /// @brief Method set_stretchable, addr 0x49f0f68, size 0x3c, virtual false, abstract: false, final false
  inline void set_stretchable(bool value);

  /// @brief Method set_title, addr 0x49f0aa4, size 0x58, virtual false, abstract: false, final false
  inline void set_title(::StringW value);

  /// @brief Method set_visible, addr 0x49f0d64, size 0x3c, virtual false, abstract: false, final false
  inline void set_visible(bool value);

  /// @brief Method set_width, addr 0x49f0da8, size 0x7c, virtual false, abstract: false, final false
  inline void set_width(::UnityEngine::UIElements::Length value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Column();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Column", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Column(Column&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Column", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Column(Column const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5642 };

  /// @brief Field m_Name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_Name;

  /// @brief Field m_Title, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_Title;

  /// @brief Field m_Icon, offset: 0x20, size: 0x20, def value: None
  ::UnityEngine::UIElements::Background ___m_Icon;

  /// @brief Field m_Visible, offset: 0x40, size: 0x1, def value: None
  bool ___m_Visible;

  /// @brief Field m_Width, offset: 0x44, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length ___m_Width;

  /// @brief Field m_MinWidth, offset: 0x4c, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length ___m_MinWidth;

  /// @brief Field m_MaxWidth, offset: 0x54, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length ___m_MaxWidth;

  /// @brief Field m_DesiredWidth, offset: 0x5c, size: 0x4, def value: None
  float_t ___m_DesiredWidth;

  /// @brief Field m_Stretchable, offset: 0x60, size: 0x1, def value: None
  bool ___m_Stretchable;

  /// @brief Field m_Sortable, offset: 0x61, size: 0x1, def value: None
  bool ___m_Sortable;

  /// @brief Field m_Optional, offset: 0x62, size: 0x1, def value: None
  bool ___m_Optional;

  /// @brief Field m_Resizable, offset: 0x63, size: 0x1, def value: None
  bool ___m_Resizable;

  /// @brief Field m_MakeHeader, offset: 0x68, size: 0x8, def value: None
  ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* ___m_MakeHeader;

  /// @brief Field m_BindHeader, offset: 0x70, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* ___m_BindHeader;

  /// @brief Field m_UnbindHeader, offset: 0x78, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* ___m_UnbindHeader;

  /// @brief Field m_DestroyHeader, offset: 0x80, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* ___m_DestroyHeader;

  /// @brief Field m_MakeCell, offset: 0x88, size: 0x8, def value: None
  ::System::Func_1<::UnityEngine::UIElements::VisualElement*>* ___m_MakeCell;

  /// @brief Field m_BindCell, offset: 0x90, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* ___m_BindCell;

  /// @brief Field m_UnbindCellItem, offset: 0x98, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::UIElements::VisualElement*, int32_t>* ___m_UnbindCellItem;

  /// @brief Field <destroyCell>k__BackingField, offset: 0xa0, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::VisualElement*>* ____destroyCell_k__BackingField;

  /// @brief Field <collection>k__BackingField, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Columns* ____collection_k__BackingField;

  /// @brief Field changed, offset: 0xb0, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType>* ___changed;

  /// @brief Field resized, offset: 0xb8, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::Column*>* ___resized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Column, ___m_Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Column, ___m_Title) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Column, ___m_Icon) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Column, ___m_Visible) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Column, ___m_Width) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Column, ___m_MinWidth) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Column, ___m_MaxWidth) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Column, ___m_DesiredWidth) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Column, ___m_Stretchable) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Column, ___m_Sortable) == 0x61, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Column, ___m_Optional) == 0x62, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Column, ___m_Resizable) == 0x63, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Column, ___m_MakeHeader) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Column, ___m_BindHeader) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Column, ___m_UnbindHeader) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Column, ___m_DestroyHeader) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Column, ___m_MakeCell) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Column, ___m_BindCell) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Column, ___m_UnbindCellItem) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Column, ____destroyCell_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Column, ____collection_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Column, ___changed) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Column, ___resized) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Column, 0xc0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Column);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Column*, "UnityEngine.UIElements", "Column");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::Column_UxmlObjectFactory_1, "UnityEngine.UIElements", "Column/UxmlObjectFactory`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::Column_UxmlObjectTraits_1, "UnityEngine.UIElements", "Column/UxmlObjectTraits`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UxmlObjectTraits_1_Column___c__DisplayClass15_0, "UnityEngine.UIElements", "Column/UxmlObjectTraits`1/<>c__DisplayClass15_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UxmlObjectTraits_1_Column___c__DisplayClass15_1, "UnityEngine.UIElements", "Column/UxmlObjectTraits`1/<>c__DisplayClass15_1");
