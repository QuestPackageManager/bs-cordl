#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Columns.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectTraits_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Columns)
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
namespace System {
class Object;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace UnityEngine::UIElements {
struct BindablePropertyChangedEventArgs;
}
namespace UnityEngine::UIElements {
struct BindingId;
}
namespace UnityEngine::UIElements {
struct ColumnDataType;
}
namespace UnityEngine::UIElements {
class Column;
}
namespace UnityEngine::UIElements {
struct ColumnsDataType;
}
namespace UnityEngine::UIElements {
struct Columns_StretchMode;
}
namespace UnityEngine::UIElements {
template <typename T> class Columns_UxmlObjectFactory_1;
}
namespace UnityEngine::UIElements {
class Columns_UxmlObjectFactory;
}
namespace UnityEngine::UIElements {
template <typename T> class Columns_UxmlObjectTraits_1;
}
namespace UnityEngine::UIElements {
class Columns___c;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class INotifyBindablePropertyChanged;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
template <typename T> class UxmlEnumAttributeDescription_1;
}
namespace UnityEngine::UIElements {
template <typename T> class UxmlObjectListAttributeDescription_1;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct Columns_StretchMode;
}
namespace UnityEngine::UIElements {
class Columns;
}
namespace UnityEngine::UIElements {
class Columns_UxmlObjectFactory;
}
namespace UnityEngine::UIElements {
template <typename T> class Columns_UxmlObjectFactory_1;
}
namespace UnityEngine::UIElements {
template <typename T> class Columns_UxmlObjectTraits_1;
}
namespace UnityEngine::UIElements {
class Columns___c;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Columns_StretchMode);
MARK_REF_PTR_T(::UnityEngine::UIElements::Columns);
MARK_REF_PTR_T(::UnityEngine::UIElements::Columns_UxmlObjectFactory);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::Columns_UxmlObjectFactory_1);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::Columns_UxmlObjectTraits_1);
MARK_REF_PTR_T(::UnityEngine::UIElements::Columns___c);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.Columns/StretchMode
struct CORDL_TYPE Columns_StretchMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Columns_StretchMode_Unwrapped
  enum struct __Columns_StretchMode_Unwrapped : int32_t {
    __E_Grow = static_cast<int32_t>(0x0),
    __E_GrowAndFill = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Columns_StretchMode_Unwrapped() const noexcept {
    return static_cast<__Columns_StretchMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Columns_StretchMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Columns_StretchMode(int32_t value__) noexcept;

  /// @brief Field Grow value: I32(0)
  static ::UnityEngine::UIElements::Columns_StretchMode const Grow;

  /// @brief Field GrowAndFill value: I32(1)
  static ::UnityEngine::UIElements::Columns_StretchMode const GrowAndFill;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4261 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Columns_StretchMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Columns_StretchMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.UxmlObjectFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.Columns/UxmlObjectFactory`1<T>
class CORDL_TYPE Columns_UxmlObjectFactory_1 : public ::UnityEngine::UIElements::UxmlObjectFactory_2<T, ::UnityEngine::UIElements::Columns_UxmlObjectTraits_1<T>*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::Columns_UxmlObjectFactory_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Columns_UxmlObjectFactory_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Columns_UxmlObjectFactory_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Columns_UxmlObjectFactory_1(Columns_UxmlObjectFactory_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Columns_UxmlObjectFactory_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Columns_UxmlObjectFactory_1(Columns_UxmlObjectFactory_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4262 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.Columns::UxmlObjectFactory`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Columns/UxmlObjectFactory
class CORDL_TYPE Columns_UxmlObjectFactory : public ::UnityEngine::UIElements::Columns_UxmlObjectFactory_1<::UnityEngine::UIElements::Columns*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::Columns_UxmlObjectFactory* New_ctor();

  /// @brief Method .ctor, addr 0x6b2832c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Columns_UxmlObjectFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Columns_UxmlObjectFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Columns_UxmlObjectFactory(Columns_UxmlObjectFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Columns_UxmlObjectFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Columns_UxmlObjectFactory(Columns_UxmlObjectFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4263 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Columns_UxmlObjectFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.UxmlObjectTraits`1<T>
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.Columns/UxmlObjectTraits`1<T>
class CORDL_TYPE Columns_UxmlObjectTraits_1 : public ::UnityEngine::UIElements::UxmlObjectTraits_1<T> {
public:
  // Declarations
  /// @brief Field m_Columns, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Columns,
                      put = __cordl_internal_set_m_Columns)) ::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<::UnityEngine::UIElements::Column*>* m_Columns;

  /// @brief Field m_PrimaryColumnName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PrimaryColumnName, put = __cordl_internal_set_m_PrimaryColumnName)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_PrimaryColumnName;

  /// @brief Field m_Reorderable, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Reorderable, put = __cordl_internal_set_m_Reorderable)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_Reorderable;

  /// @brief Field m_Resizable, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Resizable, put = __cordl_internal_set_m_Resizable)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_Resizable;

  /// @brief Field m_ResizePreview, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ResizePreview, put = __cordl_internal_set_m_ResizePreview)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_ResizePreview;

  /// @brief Field m_StretchMode, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StretchMode,
                      put = __cordl_internal_set_m_StretchMode)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::Columns_StretchMode>* m_StretchMode;

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init(::ByRef<T> obj, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::Columns_UxmlObjectTraits_1<T>* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<::UnityEngine::UIElements::Column*>* const& __cordl_internal_get_m_Columns() const;

  constexpr ::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<::UnityEngine::UIElements::Column*>*& __cordl_internal_get_m_Columns();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_PrimaryColumnName() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_PrimaryColumnName();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_Reorderable() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_Reorderable();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_Resizable() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_Resizable();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_ResizePreview() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_ResizePreview();

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::Columns_StretchMode>* const& __cordl_internal_get_m_StretchMode() const;

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::Columns_StretchMode>*& __cordl_internal_get_m_StretchMode();

  constexpr void __cordl_internal_set_m_Columns(::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<::UnityEngine::UIElements::Column*>* value);

  constexpr void __cordl_internal_set_m_PrimaryColumnName(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Reorderable(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Resizable(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_ResizePreview(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_StretchMode(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::Columns_StretchMode>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Columns_UxmlObjectTraits_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Columns_UxmlObjectTraits_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Columns_UxmlObjectTraits_1(Columns_UxmlObjectTraits_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Columns_UxmlObjectTraits_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Columns_UxmlObjectTraits_1(Columns_UxmlObjectTraits_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4264 };

  /// @brief Field m_PrimaryColumnName, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_PrimaryColumnName;

  /// @brief Field m_StretchMode, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::Columns_StretchMode>* ___m_StretchMode;

  /// @brief Field m_Reorderable, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_Reorderable;

  /// @brief Field m_Resizable, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_Resizable;

  /// @brief Field m_ResizePreview, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_ResizePreview;

  /// @brief Field m_Columns, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlObjectListAttributeDescription_1<::UnityEngine::UIElements::Column*>* ___m_Columns;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Columns/<>c
class CORDL_TYPE Columns___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::Columns___c* __9;

  /// @brief Field <>9__87_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__87_0, put = setStaticF___9__87_0)) ::System::Predicate_1<::UnityEngine::UIElements::Column*>* __9__87_0;

  static inline ::UnityEngine::UIElements::Columns___c* New_ctor();

  /// @brief Method <UpdateVisibleColumns>b__87_0, addr 0x6b283f8, size 0x14, virtual false, abstract: false, final false
  inline bool _UpdateVisibleColumns_b__87_0(::UnityEngine::UIElements::Column* c);

  /// @brief Method .ctor, addr 0x6b283f4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::Columns___c* getStaticF___9();

  static inline ::System::Predicate_1<::UnityEngine::UIElements::Column*>* getStaticF___9__87_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::Columns___c* value);

  static inline void setStaticF___9__87_0(::System::Predicate_1<::UnityEngine::UIElements::Column*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Columns___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Columns___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Columns___c(Columns___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Columns___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Columns___c(Columns___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4265 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Columns___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object, UnityEngine.UIElements.BindingId, UnityEngine.UIElements.Columns::StretchMode
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Columns
class CORDL_TYPE Columns : public ::System::Object {
public:
  // Declarations
  using StretchMode = ::UnityEngine::UIElements::Columns_StretchMode;

  using UxmlObjectFactory = ::UnityEngine::UIElements::Columns_UxmlObjectFactory;

  template <typename T> using UxmlObjectFactory_1 = ::UnityEngine::UIElements::Columns_UxmlObjectFactory_1<T>;

  template <typename T> using UxmlObjectTraits_1 = ::UnityEngine::UIElements::Columns_UxmlObjectTraits_1<T>;

  using __c = ::UnityEngine::UIElements::Columns___c;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Item)) ::UnityEngine::UIElements::Column* Item[];

  __declspec(property(get = get_Item)) ::UnityEngine::UIElements::Column* Item[];

  /// @brief Field changed, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_changed, put = __cordl_internal_set_changed)) ::System::Action_1<::UnityEngine::UIElements::ColumnsDataType>* changed;

  /// @brief Field columnAdded, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_columnAdded, put = __cordl_internal_set_columnAdded)) ::System::Action_2<::UnityEngine::UIElements::Column*, int32_t>* columnAdded;

  /// @brief Field columnChanged, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_columnChanged,
                      put = __cordl_internal_set_columnChanged)) ::System::Action_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType>* columnChanged;

  /// @brief Field columnRemoved, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_columnRemoved, put = __cordl_internal_set_columnRemoved)) ::System::Action_1<::UnityEngine::UIElements::Column*>* columnRemoved;

  /// @brief Field columnReordered, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_columnReordered,
                      put = __cordl_internal_set_columnReordered)) ::System::Action_3<::UnityEngine::UIElements::Column*, int32_t, int32_t>* columnReordered;

  /// @brief Field columnResized, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_columnResized, put = __cordl_internal_set_columnResized)) ::System::Action_1<::UnityEngine::UIElements::Column*>* columnResized;

  __declspec(property(get = get_displayList)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::Column*>* displayList;

  /// @brief Field m_Columns, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Columns, put = __cordl_internal_set_m_Columns)) ::System::Collections::Generic::IList_1<::UnityEngine::UIElements::Column*>* m_Columns;

  /// @brief Field m_DisplayColumns, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DisplayColumns,
                      put = __cordl_internal_set_m_DisplayColumns)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* m_DisplayColumns;

  /// @brief Field m_PrimaryColumnName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PrimaryColumnName, put = __cordl_internal_set_m_PrimaryColumnName)) ::StringW m_PrimaryColumnName;

  /// @brief Field m_Reorderable, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Reorderable, put = __cordl_internal_set_m_Reorderable)) bool m_Reorderable;

  /// @brief Field m_Resizable, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Resizable, put = __cordl_internal_set_m_Resizable)) bool m_Resizable;

  /// @brief Field m_ResizePreview, offset 0x32, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ResizePreview, put = __cordl_internal_set_m_ResizePreview)) bool m_ResizePreview;

  /// @brief Field m_StretchMode, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StretchMode, put = __cordl_internal_set_m_StretchMode)) ::UnityEngine::UIElements::Columns_StretchMode m_StretchMode;

  /// @brief Field m_VisibleColumns, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VisibleColumns,
                      put = __cordl_internal_set_m_VisibleColumns)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* m_VisibleColumns;

  /// @brief Field m_VisibleColumnsDirty, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_VisibleColumnsDirty, put = __cordl_internal_set_m_VisibleColumnsDirty)) bool m_VisibleColumnsDirty;

  __declspec(property(get = get_primaryColumnName, put = set_primaryColumnName)) ::StringW primaryColumnName;

  /// @brief Field primaryColumnNameProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_primaryColumnNameProperty, put = setStaticF_primaryColumnNameProperty)) ::UnityEngine::UIElements::BindingId primaryColumnNameProperty;

  /// @brief Field propertyChanged, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_propertyChanged,
                      put = __cordl_internal_set_propertyChanged)) ::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>* propertyChanged;

  __declspec(property(get = get_reorderable, put = set_reorderable)) bool reorderable;

  /// @brief Field reorderableProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_reorderableProperty, put = setStaticF_reorderableProperty)) ::UnityEngine::UIElements::BindingId reorderableProperty;

  __declspec(property(get = get_resizable, put = set_resizable)) bool resizable;

  /// @brief Field resizableProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_resizableProperty, put = setStaticF_resizableProperty)) ::UnityEngine::UIElements::BindingId resizableProperty;

  __declspec(property(get = get_resizePreview, put = set_resizePreview)) bool resizePreview;

  /// @brief Field resizePreviewProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_resizePreviewProperty, put = setStaticF_resizePreviewProperty)) ::UnityEngine::UIElements::BindingId resizePreviewProperty;

  __declspec(property(get = get_stretchMode, put = set_stretchMode)) ::UnityEngine::UIElements::Columns_StretchMode stretchMode;

  /// @brief Field stretchModeProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_stretchModeProperty, put = setStaticF_stretchModeProperty)) ::UnityEngine::UIElements::BindingId stretchModeProperty;

  __declspec(property(get = get_visibleList)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::Column*>* visibleList;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::UnityEngine::UIElements::Column*>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::UnityEngine::UIElements::Column*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::Column*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::Column*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::INotifyBindablePropertyChanged"
  constexpr operator ::UnityEngine::UIElements::INotifyBindablePropertyChanged*() noexcept;

  /// @brief Method Add, addr 0x6b26b7c, size 0xc0, virtual true, abstract: false, final true
  inline void Add(::UnityEngine::UIElements::Column* item);

  /// @brief Method Clear, addr 0x6b26ef4, size 0x1a4, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x6b27314, size 0xb8, virtual true, abstract: false, final true
  inline bool Contains(::UnityEngine::UIElements::Column* item);

  /// @brief Method Contains, addr 0x6b273cc, size 0x2f4, virtual false, abstract: false, final false
  inline bool Contains(::StringW name);

  /// @brief Method CopyTo, addr 0x6b276c0, size 0xc0, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<::UnityEngine::UIElements::Column*, ::Array<::UnityEngine::UIElements::Column*>*> array, int32_t arrayIndex);

  /// @brief Method DirtyVisibleColumns, addr 0x6b27a3c, size 0x7c, virtual false, abstract: false, final false
  inline void DirtyVisibleColumns();

  /// @brief Method GetEnumerator, addr 0x6b2391c, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::Column*>* GetEnumerator();

  /// @brief Method IndexOf, addr 0x6b1fb50, size 0xb8, virtual false, abstract: false, final false
  inline int32_t IndexOf(::UnityEngine::UIElements::Column* column);

  /// @brief Method InitOrderColumns, addr 0x6b260c4, size 0x80, virtual false, abstract: false, final false
  inline void InitOrderColumns();

  /// @brief Method Insert, addr 0x6b26c3c, size 0x2b8, virtual false, abstract: false, final false
  inline void Insert(int32_t index, ::UnityEngine::UIElements::Column* column);

  /// @brief Method IsPrimary, addr 0x6b26b14, size 0x64, virtual false, abstract: false, final false
  inline bool IsPrimary(::UnityEngine::UIElements::Column* column);

  static inline ::UnityEngine::UIElements::Columns* New_ctor();

  /// @brief Method NotifyChange, addr 0x6b25de0, size 0x1c, virtual false, abstract: false, final false
  inline void NotifyChange(::UnityEngine::UIElements::ColumnsDataType type);

  /// @brief Method NotifyPropertyChanged, addr 0x6b25dfc, size 0x4c, virtual false, abstract: false, final false
  inline void NotifyPropertyChanged(::ByRef<::UnityEngine::UIElements::BindingId> property);

  /// @brief Method OnColumnChanged, addr 0x6b279e4, size 0x58, virtual false, abstract: false, final false
  inline void OnColumnChanged(::UnityEngine::UIElements::Column* column, ::UnityEngine::UIElements::ColumnDataType type);

  /// @brief Method OnColumnResized, addr 0x6b27ab8, size 0x1c, virtual false, abstract: false, final false
  inline void OnColumnResized(::UnityEngine::UIElements::Column* column);

  /// @brief Method OnColumnsPropertyChanged, addr 0x6b27780, size 0x264, virtual false, abstract: false, final false
  inline void OnColumnsPropertyChanged(::System::Object* sender, ::UnityEngine::UIElements::BindablePropertyChangedEventArgs args);

  /// @brief Method Remove, addr 0x6b27098, size 0x27c, virtual true, abstract: false, final true
  inline bool Remove(::UnityEngine::UIElements::Column* column);

  /// @brief Method ReorderDisplay, addr 0x6b27e70, size 0x110, virtual false, abstract: false, final false
  inline void ReorderDisplay(int32_t from, int32_t to);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x6b26b78, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method UpdateVisibleColumns, addr 0x6b26144, size 0x23c, virtual false, abstract: false, final false
  inline void UpdateVisibleColumns();

  constexpr ::System::Action_1<::UnityEngine::UIElements::ColumnsDataType>* const& __cordl_internal_get_changed() const;

  constexpr ::System::Action_1<::UnityEngine::UIElements::ColumnsDataType>*& __cordl_internal_get_changed();

  constexpr ::System::Action_2<::UnityEngine::UIElements::Column*, int32_t>* const& __cordl_internal_get_columnAdded() const;

  constexpr ::System::Action_2<::UnityEngine::UIElements::Column*, int32_t>*& __cordl_internal_get_columnAdded();

  constexpr ::System::Action_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType>* const& __cordl_internal_get_columnChanged() const;

  constexpr ::System::Action_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType>*& __cordl_internal_get_columnChanged();

  constexpr ::System::Action_1<::UnityEngine::UIElements::Column*>* const& __cordl_internal_get_columnRemoved() const;

  constexpr ::System::Action_1<::UnityEngine::UIElements::Column*>*& __cordl_internal_get_columnRemoved();

  constexpr ::System::Action_3<::UnityEngine::UIElements::Column*, int32_t, int32_t>* const& __cordl_internal_get_columnReordered() const;

  constexpr ::System::Action_3<::UnityEngine::UIElements::Column*, int32_t, int32_t>*& __cordl_internal_get_columnReordered();

  constexpr ::System::Action_1<::UnityEngine::UIElements::Column*>* const& __cordl_internal_get_columnResized() const;

  constexpr ::System::Action_1<::UnityEngine::UIElements::Column*>*& __cordl_internal_get_columnResized();

  constexpr ::System::Collections::Generic::IList_1<::UnityEngine::UIElements::Column*>* const& __cordl_internal_get_m_Columns() const;

  constexpr ::System::Collections::Generic::IList_1<::UnityEngine::UIElements::Column*>*& __cordl_internal_get_m_Columns();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* const& __cordl_internal_get_m_DisplayColumns() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>*& __cordl_internal_get_m_DisplayColumns();

  constexpr ::StringW const& __cordl_internal_get_m_PrimaryColumnName() const;

  constexpr ::StringW& __cordl_internal_get_m_PrimaryColumnName();

  constexpr bool const& __cordl_internal_get_m_Reorderable() const;

  constexpr bool& __cordl_internal_get_m_Reorderable();

  constexpr bool const& __cordl_internal_get_m_Resizable() const;

  constexpr bool& __cordl_internal_get_m_Resizable();

  constexpr bool const& __cordl_internal_get_m_ResizePreview() const;

  constexpr bool& __cordl_internal_get_m_ResizePreview();

  constexpr ::UnityEngine::UIElements::Columns_StretchMode const& __cordl_internal_get_m_StretchMode() const;

  constexpr ::UnityEngine::UIElements::Columns_StretchMode& __cordl_internal_get_m_StretchMode();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* const& __cordl_internal_get_m_VisibleColumns() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>*& __cordl_internal_get_m_VisibleColumns();

  constexpr bool const& __cordl_internal_get_m_VisibleColumnsDirty() const;

  constexpr bool& __cordl_internal_get_m_VisibleColumnsDirty();

  constexpr ::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>* const& __cordl_internal_get_propertyChanged() const;

  constexpr ::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>*& __cordl_internal_get_propertyChanged();

  constexpr void __cordl_internal_set_changed(::System::Action_1<::UnityEngine::UIElements::ColumnsDataType>* value);

  constexpr void __cordl_internal_set_columnAdded(::System::Action_2<::UnityEngine::UIElements::Column*, int32_t>* value);

  constexpr void __cordl_internal_set_columnChanged(::System::Action_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType>* value);

  constexpr void __cordl_internal_set_columnRemoved(::System::Action_1<::UnityEngine::UIElements::Column*>* value);

  constexpr void __cordl_internal_set_columnReordered(::System::Action_3<::UnityEngine::UIElements::Column*, int32_t, int32_t>* value);

  constexpr void __cordl_internal_set_columnResized(::System::Action_1<::UnityEngine::UIElements::Column*>* value);

  constexpr void __cordl_internal_set_m_Columns(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::Column*>* value);

  constexpr void __cordl_internal_set_m_DisplayColumns(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* value);

  constexpr void __cordl_internal_set_m_PrimaryColumnName(::StringW value);

  constexpr void __cordl_internal_set_m_Reorderable(bool value);

  constexpr void __cordl_internal_set_m_Resizable(bool value);

  constexpr void __cordl_internal_set_m_ResizePreview(bool value);

  constexpr void __cordl_internal_set_m_StretchMode(::UnityEngine::UIElements::Columns_StretchMode value);

  constexpr void __cordl_internal_set_m_VisibleColumns(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* value);

  constexpr void __cordl_internal_set_m_VisibleColumnsDirty(bool value);

  constexpr void __cordl_internal_set_propertyChanged(::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>* value);

  /// @brief Method .ctor, addr 0x6b27f80, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_changed, addr 0x6b26380, size 0xc0, virtual false, abstract: false, final false
  inline void add_changed(::System::Action_1<::UnityEngine::UIElements::ColumnsDataType>* value);

  /// @brief Method add_columnAdded, addr 0x6b21f2c, size 0xc0, virtual false, abstract: false, final false
  inline void add_columnAdded(::System::Action_2<::UnityEngine::UIElements::Column*, int32_t>* value);

  /// @brief Method add_columnChanged, addr 0x6b26754, size 0xc0, virtual false, abstract: false, final false
  inline void add_columnChanged(::System::Action_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType>* value);

  /// @brief Method add_columnRemoved, addr 0x6b21fec, size 0xc0, virtual false, abstract: false, final false
  inline void add_columnRemoved(::System::Action_1<::UnityEngine::UIElements::Column*>* value);

  /// @brief Method add_columnReordered, addr 0x6b220ac, size 0xc0, virtual false, abstract: false, final false
  inline void add_columnReordered(::System::Action_3<::UnityEngine::UIElements::Column*, int32_t, int32_t>* value);

  /// @brief Method add_columnResized, addr 0x6b268d4, size 0xc0, virtual false, abstract: false, final false
  inline void add_columnResized(::System::Action_1<::UnityEngine::UIElements::Column*>* value);

  /// @brief Method add_propertyChanged, addr 0x6b25b8c, size 0xc0, virtual true, abstract: false, final true
  inline void add_propertyChanged(::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>* value);

  static inline ::UnityEngine::UIElements::BindingId getStaticF_primaryColumnNameProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_reorderableProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_resizableProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_resizePreviewProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_stretchModeProperty();

  /// @brief Method get_Count, addr 0x6b21e88, size 0xa4, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly, addr 0x6b27ad4, size 0xa8, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method get_Item, addr 0x6b21ce0, size 0xb4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Column* get_Item(int32_t index);

  /// @brief Method get_Item, addr 0x6b27b7c, size 0x2f4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Column* get_Item(::StringW name);

  /// @brief Method get_displayList, addr 0x6b1fcd8, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::Column*>* get_displayList();

  /// @brief Method get_primaryColumnName, addr 0x6b25d0c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_primaryColumnName();

  /// @brief Method get_reorderable, addr 0x6b25e48, size 0x8, virtual false, abstract: false, final false
  inline bool get_reorderable();

  /// @brief Method get_resizable, addr 0x6b25f1c, size 0x8, virtual false, abstract: false, final false
  inline bool get_resizable();

  /// @brief Method get_resizePreview, addr 0x6b25ff0, size 0x8, virtual false, abstract: false, final false
  inline bool get_resizePreview();

  /// @brief Method get_stretchMode, addr 0x6b26500, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Columns_StretchMode get_stretchMode();

  /// @brief Method get_visibleList, addr 0x6b1fdc0, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::Column*>* get_visibleList();

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<::UnityEngine::UIElements::Column*>"
  constexpr ::System::Collections::Generic::ICollection_1<::UnityEngine::UIElements::Column*>* i___System__Collections__Generic__ICollection_1___UnityEngine__UIElements__Column__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::Column*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::Column*>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__UIElements__Column__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::INotifyBindablePropertyChanged"
  constexpr ::UnityEngine::UIElements::INotifyBindablePropertyChanged* i___UnityEngine__UIElements__INotifyBindablePropertyChanged() noexcept;

  /// @brief Method remove_changed, addr 0x6b26440, size 0xc0, virtual false, abstract: false, final false
  inline void remove_changed(::System::Action_1<::UnityEngine::UIElements::ColumnsDataType>* value);

  /// @brief Method remove_columnAdded, addr 0x6b265d4, size 0xc0, virtual false, abstract: false, final false
  inline void remove_columnAdded(::System::Action_2<::UnityEngine::UIElements::Column*, int32_t>* value);

  /// @brief Method remove_columnChanged, addr 0x6b26814, size 0xc0, virtual false, abstract: false, final false
  inline void remove_columnChanged(::System::Action_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType>* value);

  /// @brief Method remove_columnRemoved, addr 0x6b26694, size 0xc0, virtual false, abstract: false, final false
  inline void remove_columnRemoved(::System::Action_1<::UnityEngine::UIElements::Column*>* value);

  /// @brief Method remove_columnReordered, addr 0x6b26a54, size 0xc0, virtual false, abstract: false, final false
  inline void remove_columnReordered(::System::Action_3<::UnityEngine::UIElements::Column*, int32_t, int32_t>* value);

  /// @brief Method remove_columnResized, addr 0x6b26994, size 0xc0, virtual false, abstract: false, final false
  inline void remove_columnResized(::System::Action_1<::UnityEngine::UIElements::Column*>* value);

  /// @brief Method remove_propertyChanged, addr 0x6b25c4c, size 0xc0, virtual true, abstract: false, final true
  inline void remove_propertyChanged(::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>* value);

  static inline void setStaticF_primaryColumnNameProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_reorderableProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_resizableProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_resizePreviewProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_stretchModeProperty(::UnityEngine::UIElements::BindingId value);

  /// @brief Method set_primaryColumnName, addr 0x6b25d14, size 0xcc, virtual false, abstract: false, final false
  inline void set_primaryColumnName(::StringW value);

  /// @brief Method set_reorderable, addr 0x6b25e50, size 0xcc, virtual false, abstract: false, final false
  inline void set_reorderable(bool value);

  /// @brief Method set_resizable, addr 0x6b25f24, size 0xcc, virtual false, abstract: false, final false
  inline void set_resizable(bool value);

  /// @brief Method set_resizePreview, addr 0x6b25ff8, size 0xcc, virtual false, abstract: false, final false
  inline void set_resizePreview(bool value);

  /// @brief Method set_stretchMode, addr 0x6b26508, size 0xcc, virtual false, abstract: false, final false
  inline void set_stretchMode(::UnityEngine::UIElements::Columns_StretchMode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Columns();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Columns", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Columns(Columns&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Columns", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Columns(Columns const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4266 };

  /// @brief Field m_Columns, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<::UnityEngine::UIElements::Column*>* ___m_Columns;

  /// @brief Field m_DisplayColumns, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* ___m_DisplayColumns;

  /// @brief Field m_VisibleColumns, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* ___m_VisibleColumns;

  /// @brief Field m_VisibleColumnsDirty, offset: 0x28, size: 0x1, def value: None
  bool ___m_VisibleColumnsDirty;

  /// @brief Field m_StretchMode, offset: 0x2c, size: 0x4, def value: None
  ::UnityEngine::UIElements::Columns_StretchMode ___m_StretchMode;

  /// @brief Field m_Reorderable, offset: 0x30, size: 0x1, def value: None
  bool ___m_Reorderable;

  /// @brief Field m_Resizable, offset: 0x31, size: 0x1, def value: None
  bool ___m_Resizable;

  /// @brief Field m_ResizePreview, offset: 0x32, size: 0x1, def value: None
  bool ___m_ResizePreview;

  /// @brief Field m_PrimaryColumnName, offset: 0x38, size: 0x8, def value: None
  ::StringW ___m_PrimaryColumnName;

  /// @brief Field propertyChanged, offset: 0x40, size: 0x8, def value: None
  ::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>* ___propertyChanged;

  /// @brief Field changed, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::ColumnsDataType>* ___changed;

  /// @brief Field columnAdded, offset: 0x50, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::UIElements::Column*, int32_t>* ___columnAdded;

  /// @brief Field columnRemoved, offset: 0x58, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::Column*>* ___columnRemoved;

  /// @brief Field columnChanged, offset: 0x60, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType>* ___columnChanged;

  /// @brief Field columnResized, offset: 0x68, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::Column*>* ___columnResized;

  /// @brief Field columnReordered, offset: 0x70, size: 0x8, def value: None
  ::System::Action_3<::UnityEngine::UIElements::Column*, int32_t, int32_t>* ___columnReordered;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Columns, ___m_Columns) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Columns, ___m_DisplayColumns) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Columns, ___m_VisibleColumns) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Columns, ___m_VisibleColumnsDirty) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Columns, ___m_StretchMode) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Columns, ___m_Reorderable) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Columns, ___m_Resizable) == 0x31, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Columns, ___m_ResizePreview) == 0x32, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Columns, ___m_PrimaryColumnName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Columns, ___propertyChanged) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Columns, ___changed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Columns, ___columnAdded) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Columns, ___columnRemoved) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Columns, ___columnChanged) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Columns, ___columnResized) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Columns, ___columnReordered) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Columns, 0x78>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Columns_StretchMode, "UnityEngine.UIElements", "Columns/StretchMode");
NEED_NO_BOX(::UnityEngine::UIElements::Columns);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Columns*, "UnityEngine.UIElements", "Columns");
NEED_NO_BOX(::UnityEngine::UIElements::Columns_UxmlObjectFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Columns_UxmlObjectFactory*, "UnityEngine.UIElements", "Columns/UxmlObjectFactory");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::Columns_UxmlObjectFactory_1, "UnityEngine.UIElements", "Columns/UxmlObjectFactory`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::Columns_UxmlObjectTraits_1, "UnityEngine.UIElements", "Columns/UxmlObjectTraits`1");
NEED_NO_BOX(::UnityEngine::UIElements::Columns___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Columns___c*, "UnityEngine.UIElements", "Columns/<>c");
