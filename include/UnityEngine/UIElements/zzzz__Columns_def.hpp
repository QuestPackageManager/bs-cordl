#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Columns.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectTraits_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Columns)
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
template <typename T> class Predicate_1;
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
template <typename T> class Columns_UxmlObjectTraits_1;
}
namespace UnityEngine::UIElements {
class Columns___c;
}
namespace UnityEngine::UIElements {
struct CreationContext;
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5647 };

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5648 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5649 };

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

  /// @brief Field <>9__76_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__76_0, put = setStaticF___9__76_0)) ::System::Predicate_1<::UnityEngine::UIElements::Column*>* __9__76_0;

  static inline ::UnityEngine::UIElements::Columns___c* New_ctor();

  /// @brief Method <UpdateVisibleColumns>b__76_0, addr 0x49f7628, size 0x18, virtual false, abstract: false, final false
  inline bool _UpdateVisibleColumns_b__76_0(::UnityEngine::UIElements::Column* c);

  /// @brief Method .ctor, addr 0x49f7620, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::Columns___c* getStaticF___9();

  static inline ::System::Predicate_1<::UnityEngine::UIElements::Column*>* getStaticF___9__76_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::Columns___c* value);

  static inline void setStaticF___9__76_0(::System::Predicate_1<::UnityEngine::UIElements::Column*>* value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5650 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Columns___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Collections.Generic.ICollection`1<T>, System.Collections.Generic.IEnumerable`1<T>, System.Collections.IEnumerable, System.Object, UnityEngine.UIElements.Columns::StretchMode
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Columns
class CORDL_TYPE Columns : public ::System::Object {
public:
  // Declarations
  using StretchMode = ::UnityEngine::UIElements::Columns_StretchMode;

  template <typename T> using UxmlObjectFactory_1 = ::UnityEngine::UIElements::Columns_UxmlObjectFactory_1<T>;

  template <typename T> using UxmlObjectTraits_1 = ::UnityEngine::UIElements::Columns_UxmlObjectTraits_1<T>;

  using __c = ::UnityEngine::UIElements::Columns___c;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Item)) ::UnityEngine::UIElements::Column* Item[];

  __declspec(property(get = get_Item)) ::UnityEngine::UIElements::Column* Item[];

  /// @brief Field changed, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_changed, put = __cordl_internal_set_changed)) ::System::Action_1<::UnityEngine::UIElements::ColumnsDataType>* changed;

  /// @brief Field columnAdded, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_columnAdded, put = __cordl_internal_set_columnAdded)) ::System::Action_2<::UnityEngine::UIElements::Column*, int32_t>* columnAdded;

  /// @brief Field columnChanged, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_columnChanged,
                      put = __cordl_internal_set_columnChanged)) ::System::Action_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType>* columnChanged;

  /// @brief Field columnRemoved, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_columnRemoved, put = __cordl_internal_set_columnRemoved)) ::System::Action_1<::UnityEngine::UIElements::Column*>* columnRemoved;

  /// @brief Field columnReordered, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_columnReordered,
                      put = __cordl_internal_set_columnReordered)) ::System::Action_3<::UnityEngine::UIElements::Column*, int32_t, int32_t>* columnReordered;

  /// @brief Field columnResized, offset 0x60, size 0x8
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

  __declspec(property(get = get_reorderable, put = set_reorderable)) bool reorderable;

  __declspec(property(get = get_resizable, put = set_resizable)) bool resizable;

  __declspec(property(get = get_resizePreview, put = set_resizePreview)) bool resizePreview;

  __declspec(property(get = get_stretchMode, put = set_stretchMode)) ::UnityEngine::UIElements::Columns_StretchMode stretchMode;

  __declspec(property(get = get_visibleList)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::Column*>* visibleList;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::UnityEngine::UIElements::Column*>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::UnityEngine::UIElements::Column*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::Column*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::Column*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x49f642c, size 0xb4, virtual true, abstract: false, final true
  inline void Add(::UnityEngine::UIElements::Column* item);

  /// @brief Method Clear, addr 0x49f6740, size 0x19c, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x49f6aec, size 0xac, virtual true, abstract: false, final true
  inline bool Contains(::UnityEngine::UIElements::Column* item);

  /// @brief Method Contains, addr 0x49f6b98, size 0x328, virtual false, abstract: false, final false
  inline bool Contains(::StringW name);

  /// @brief Method CopyTo, addr 0x49f6ec0, size 0xbc, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<::UnityEngine::UIElements::Column*, ::Array<::UnityEngine::UIElements::Column*>*> array, int32_t arrayIndex);

  /// @brief Method DirtyVisibleColumns, addr 0x49f6fd4, size 0x74, virtual false, abstract: false, final false
  inline void DirtyVisibleColumns();

  /// @brief Method GetEnumerator, addr 0x49f39fc, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::Column*>* GetEnumerator();

  /// @brief Method IndexOf, addr 0x49f0b20, size 0xac, virtual false, abstract: false, final false
  inline int32_t IndexOf(::UnityEngine::UIElements::Column* column);

  /// @brief Method InitOrderColumns, addr 0x49f5ad4, size 0x78, virtual false, abstract: false, final false
  inline void InitOrderColumns();

  /// @brief Method Insert, addr 0x49f64e0, size 0x260, virtual false, abstract: false, final false
  inline void Insert(int32_t index, ::UnityEngine::UIElements::Column* column);

  /// @brief Method IsPrimary, addr 0x49f63c0, size 0x68, virtual false, abstract: false, final false
  inline bool IsPrimary(::UnityEngine::UIElements::Column* column);

  static inline ::UnityEngine::UIElements::Columns* New_ctor();

  /// @brief Method NotifyChange, addr 0x49f5a04, size 0x1c, virtual false, abstract: false, final false
  inline void NotifyChange(::UnityEngine::UIElements::ColumnsDataType type);

  /// @brief Method OnColumnChanged, addr 0x49f6f7c, size 0x58, virtual false, abstract: false, final false
  inline void OnColumnChanged(::UnityEngine::UIElements::Column* column, ::UnityEngine::UIElements::ColumnDataType type);

  /// @brief Method OnColumnResized, addr 0x49f7048, size 0x1c, virtual false, abstract: false, final false
  inline void OnColumnResized(::UnityEngine::UIElements::Column* column);

  /// @brief Method Remove, addr 0x49f68dc, size 0x210, virtual true, abstract: false, final true
  inline bool Remove(::UnityEngine::UIElements::Column* column);

  /// @brief Method ReorderDisplay, addr 0x49f7430, size 0x104, virtual false, abstract: false, final false
  inline void ReorderDisplay(int32_t from, int32_t to);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x49f6428, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method UpdateVisibleColumns, addr 0x49f5b4c, size 0x20c, virtual false, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x49f7534, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_changed, addr 0x49f5d58, size 0xb0, virtual false, abstract: false, final false
  inline void add_changed(::System::Action_1<::UnityEngine::UIElements::ColumnsDataType>* value);

  /// @brief Method add_columnAdded, addr 0x49f1f0c, size 0xb0, virtual false, abstract: false, final false
  inline void add_columnAdded(::System::Action_2<::UnityEngine::UIElements::Column*, int32_t>* value);

  /// @brief Method add_columnChanged, addr 0x49f6050, size 0xb0, virtual false, abstract: false, final false
  inline void add_columnChanged(::System::Action_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType>* value);

  /// @brief Method add_columnRemoved, addr 0x49f1fbc, size 0xb0, virtual false, abstract: false, final false
  inline void add_columnRemoved(::System::Action_1<::UnityEngine::UIElements::Column*>* value);

  /// @brief Method add_columnReordered, addr 0x49f206c, size 0xb0, virtual false, abstract: false, final false
  inline void add_columnReordered(::System::Action_3<::UnityEngine::UIElements::Column*, int32_t, int32_t>* value);

  /// @brief Method add_columnResized, addr 0x49f61b0, size 0xb0, virtual false, abstract: false, final false
  inline void add_columnResized(::System::Action_1<::UnityEngine::UIElements::Column*>* value);

  /// @brief Method get_Count, addr 0x49f1e6c, size 0xa0, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly, addr 0x49f7064, size 0xa4, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method get_Item, addr 0x49f1ce0, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Column* get_Item(int32_t index);

  /// @brief Method get_Item, addr 0x49f7108, size 0x328, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Column* get_Item(::StringW name);

  /// @brief Method get_displayList, addr 0x49f0c7c, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::Column*>* get_displayList();

  /// @brief Method get_primaryColumnName, addr 0x49f59a8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_primaryColumnName();

  /// @brief Method get_reorderable, addr 0x49f5a20, size 0x8, virtual false, abstract: false, final false
  inline bool get_reorderable();

  /// @brief Method get_resizable, addr 0x49f5a5c, size 0x8, virtual false, abstract: false, final false
  inline bool get_resizable();

  /// @brief Method get_resizePreview, addr 0x49f5a98, size 0x8, virtual false, abstract: false, final false
  inline bool get_resizePreview();

  /// @brief Method get_stretchMode, addr 0x49f5eb8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Columns_StretchMode get_stretchMode();

  /// @brief Method get_visibleList, addr 0x49f0d44, size 0x18, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::Column*>* get_visibleList();

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<::UnityEngine::UIElements::Column*>"
  constexpr ::System::Collections::Generic::ICollection_1<::UnityEngine::UIElements::Column*>* i___System__Collections__Generic__ICollection_1___UnityEngine__UIElements__Column__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::Column*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::Column*>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__UIElements__Column__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method remove_changed, addr 0x49f5e08, size 0xb0, virtual false, abstract: false, final false
  inline void remove_changed(::System::Action_1<::UnityEngine::UIElements::ColumnsDataType>* value);

  /// @brief Method remove_columnAdded, addr 0x49f5ef0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_columnAdded(::System::Action_2<::UnityEngine::UIElements::Column*, int32_t>* value);

  /// @brief Method remove_columnChanged, addr 0x49f6100, size 0xb0, virtual false, abstract: false, final false
  inline void remove_columnChanged(::System::Action_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType>* value);

  /// @brief Method remove_columnRemoved, addr 0x49f5fa0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_columnRemoved(::System::Action_1<::UnityEngine::UIElements::Column*>* value);

  /// @brief Method remove_columnReordered, addr 0x49f6310, size 0xb0, virtual false, abstract: false, final false
  inline void remove_columnReordered(::System::Action_3<::UnityEngine::UIElements::Column*, int32_t, int32_t>* value);

  /// @brief Method remove_columnResized, addr 0x49f6260, size 0xb0, virtual false, abstract: false, final false
  inline void remove_columnResized(::System::Action_1<::UnityEngine::UIElements::Column*>* value);

  /// @brief Method set_primaryColumnName, addr 0x49f59b0, size 0x54, virtual false, abstract: false, final false
  inline void set_primaryColumnName(::StringW value);

  /// @brief Method set_reorderable, addr 0x49f5a28, size 0x34, virtual false, abstract: false, final false
  inline void set_reorderable(bool value);

  /// @brief Method set_resizable, addr 0x49f5a64, size 0x34, virtual false, abstract: false, final false
  inline void set_resizable(bool value);

  /// @brief Method set_resizePreview, addr 0x49f5aa0, size 0x34, virtual false, abstract: false, final false
  inline void set_resizePreview(bool value);

  /// @brief Method set_stretchMode, addr 0x49f5ec0, size 0x30, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5651 };

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

  /// @brief Field changed, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::ColumnsDataType>* ___changed;

  /// @brief Field columnAdded, offset: 0x48, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::UIElements::Column*, int32_t>* ___columnAdded;

  /// @brief Field columnRemoved, offset: 0x50, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::Column*>* ___columnRemoved;

  /// @brief Field columnChanged, offset: 0x58, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::UIElements::Column*, ::UnityEngine::UIElements::ColumnDataType>* ___columnChanged;

  /// @brief Field columnResized, offset: 0x60, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::Column*>* ___columnResized;

  /// @brief Field columnReordered, offset: 0x68, size: 0x8, def value: None
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

static_assert(offsetof(::UnityEngine::UIElements::Columns, ___changed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Columns, ___columnAdded) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Columns, ___columnRemoved) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Columns, ___columnChanged) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Columns, ___columnResized) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Columns, ___columnReordered) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Columns, 0x70>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Columns_StretchMode, "UnityEngine.UIElements", "Columns/StretchMode");
NEED_NO_BOX(::UnityEngine::UIElements::Columns);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Columns*, "UnityEngine.UIElements", "Columns");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::Columns_UxmlObjectFactory_1, "UnityEngine.UIElements", "Columns/UxmlObjectFactory`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::Columns_UxmlObjectTraits_1, "UnityEngine.UIElements", "Columns/UxmlObjectTraits`1");
NEED_NO_BOX(::UnityEngine::UIElements::Columns___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Columns___c*, "UnityEngine.UIElements", "Columns/<>c");
