#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/SortColumnDescription.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__SortDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectTraits_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SortColumnDescription)
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
namespace UnityEngine::UIElements {
struct BindablePropertyChangedEventArgs;
}
namespace UnityEngine::UIElements {
struct BindingId;
}
namespace UnityEngine::UIElements {
class Column;
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
template <typename T> class SortColumnDescription_UxmlObjectFactory_1;
}
namespace UnityEngine::UIElements {
class SortColumnDescription_UxmlObjectFactory;
}
namespace UnityEngine::UIElements {
template <typename T> class SortColumnDescription_UxmlObjectTraits_1;
}
namespace UnityEngine::UIElements {
struct SortDirection;
}
namespace UnityEngine::UIElements {
template <typename T> class UxmlEnumAttributeDescription_1;
}
namespace UnityEngine::UIElements {
class UxmlIntAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class SortColumnDescription;
}
namespace UnityEngine::UIElements {
class SortColumnDescription_UxmlObjectFactory;
}
namespace UnityEngine::UIElements {
template <typename T> class SortColumnDescription_UxmlObjectFactory_1;
}
namespace UnityEngine::UIElements {
template <typename T> class SortColumnDescription_UxmlObjectTraits_1;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::SortColumnDescription);
MARK_REF_PTR_T(::UnityEngine::UIElements::SortColumnDescription_UxmlObjectFactory);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::SortColumnDescription_UxmlObjectFactory_1);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::SortColumnDescription_UxmlObjectTraits_1);
// Dependencies UnityEngine.UIElements.UxmlObjectFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.SortColumnDescription/UxmlObjectFactory`1<T>
class CORDL_TYPE SortColumnDescription_UxmlObjectFactory_1 : public ::UnityEngine::UIElements::UxmlObjectFactory_2<T, ::UnityEngine::UIElements::SortColumnDescription_UxmlObjectTraits_1<T>*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::SortColumnDescription_UxmlObjectFactory_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortColumnDescription_UxmlObjectFactory_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortColumnDescription_UxmlObjectFactory_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortColumnDescription_UxmlObjectFactory_1(SortColumnDescription_UxmlObjectFactory_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortColumnDescription_UxmlObjectFactory_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortColumnDescription_UxmlObjectFactory_1(SortColumnDescription_UxmlObjectFactory_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4276 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.SortColumnDescription::UxmlObjectFactory`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.SortColumnDescription/UxmlObjectFactory
class CORDL_TYPE SortColumnDescription_UxmlObjectFactory : public ::UnityEngine::UIElements::SortColumnDescription_UxmlObjectFactory_1<::UnityEngine::UIElements::SortColumnDescription*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::SortColumnDescription_UxmlObjectFactory* New_ctor();

  /// @brief Method .ctor, addr 0x6b97468, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortColumnDescription_UxmlObjectFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortColumnDescription_UxmlObjectFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortColumnDescription_UxmlObjectFactory(SortColumnDescription_UxmlObjectFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortColumnDescription_UxmlObjectFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortColumnDescription_UxmlObjectFactory(SortColumnDescription_UxmlObjectFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4277 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::SortColumnDescription_UxmlObjectFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.UxmlObjectTraits`1<T>
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.SortColumnDescription/UxmlObjectTraits`1<T>
class CORDL_TYPE SortColumnDescription_UxmlObjectTraits_1 : public ::UnityEngine::UIElements::UxmlObjectTraits_1<T> {
public:
  // Declarations
  /// @brief Field m_ColumnIndex, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColumnIndex, put = __cordl_internal_set_m_ColumnIndex)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* m_ColumnIndex;

  /// @brief Field m_ColumnName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColumnName, put = __cordl_internal_set_m_ColumnName)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_ColumnName;

  /// @brief Field m_SortDescription, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SortDescription,
                      put = __cordl_internal_set_m_SortDescription)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SortDirection>* m_SortDescription;

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init(::ByRef<T> obj, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::SortColumnDescription_UxmlObjectTraits_1<T>* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription* const& __cordl_internal_get_m_ColumnIndex() const;

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_ColumnIndex();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_ColumnName() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_ColumnName();

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SortDirection>* const& __cordl_internal_get_m_SortDescription() const;

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SortDirection>*& __cordl_internal_get_m_SortDescription();

  constexpr void __cordl_internal_set_m_ColumnIndex(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  constexpr void __cordl_internal_set_m_ColumnName(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr void __cordl_internal_set_m_SortDescription(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SortDirection>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortColumnDescription_UxmlObjectTraits_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortColumnDescription_UxmlObjectTraits_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortColumnDescription_UxmlObjectTraits_1(SortColumnDescription_UxmlObjectTraits_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortColumnDescription_UxmlObjectTraits_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortColumnDescription_UxmlObjectTraits_1(SortColumnDescription_UxmlObjectTraits_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4278 };

  /// @brief Field m_ColumnName, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_ColumnName;

  /// @brief Field m_ColumnIndex, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_ColumnIndex;

  /// @brief Field m_SortDescription, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SortDirection>* ___m_SortDescription;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies System.Object, UnityEngine.UIElements.BindingId, UnityEngine.UIElements.SortDirection
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.SortColumnDescription
class CORDL_TYPE SortColumnDescription : public ::System::Object {
public:
  // Declarations
  using UxmlObjectFactory = ::UnityEngine::UIElements::SortColumnDescription_UxmlObjectFactory;

  template <typename T> using UxmlObjectFactory_1 = ::UnityEngine::UIElements::SortColumnDescription_UxmlObjectFactory_1<T>;

  template <typename T> using UxmlObjectTraits_1 = ::UnityEngine::UIElements::SortColumnDescription_UxmlObjectTraits_1<T>;

  /// @brief Field <column>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__column_k__BackingField, put = __cordl_internal_set__column_k__BackingField)) ::UnityEngine::UIElements::Column* _column_k__BackingField;

  /// @brief Field changed, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_changed, put = __cordl_internal_set_changed)) ::System::Action_1<::UnityEngine::UIElements::SortColumnDescription*>* changed;

  __declspec(property(get = get_column, put = set_column)) ::UnityEngine::UIElements::Column* column;

  __declspec(property(get = get_columnIndex, put = set_columnIndex)) int32_t columnIndex;

  /// @brief Field columnIndexProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_columnIndexProperty, put = setStaticF_columnIndexProperty)) ::UnityEngine::UIElements::BindingId columnIndexProperty;

  __declspec(property(get = get_columnName, put = set_columnName)) ::StringW columnName;

  /// @brief Field columnNameProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_columnNameProperty, put = setStaticF_columnNameProperty)) ::UnityEngine::UIElements::BindingId columnNameProperty;

  __declspec(property(get = get_direction, put = set_direction)) ::UnityEngine::UIElements::SortDirection direction;

  /// @brief Field directionProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_directionProperty, put = setStaticF_directionProperty)) ::UnityEngine::UIElements::BindingId directionProperty;

  /// @brief Field m_ColumnIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ColumnIndex, put = __cordl_internal_set_m_ColumnIndex)) int32_t m_ColumnIndex;

  /// @brief Field m_ColumnName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColumnName, put = __cordl_internal_set_m_ColumnName)) ::StringW m_ColumnName;

  /// @brief Field m_SortDirection, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SortDirection, put = __cordl_internal_set_m_SortDirection)) ::UnityEngine::UIElements::SortDirection m_SortDirection;

  /// @brief Field propertyChanged, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_propertyChanged,
                      put = __cordl_internal_set_propertyChanged)) ::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>* propertyChanged;

  /// @brief Convert operator to "::UnityEngine::UIElements::INotifyBindablePropertyChanged"
  constexpr operator ::UnityEngine::UIElements::INotifyBindablePropertyChanged*() noexcept;

  static inline ::UnityEngine::UIElements::SortColumnDescription* New_ctor();

  static inline ::UnityEngine::UIElements::SortColumnDescription* New_ctor(int32_t columnIndex, ::UnityEngine::UIElements::SortDirection direction);

  static inline ::UnityEngine::UIElements::SortColumnDescription* New_ctor(::StringW columnName, ::UnityEngine::UIElements::SortDirection direction);

  /// @brief Method NotifyPropertyChanged, addr 0x6b96e64, size 0x4c, virtual false, abstract: false, final false
  inline void NotifyPropertyChanged(::ByRef<::UnityEngine::UIElements::BindingId> property);

  constexpr ::UnityEngine::UIElements::Column* const& __cordl_internal_get__column_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::Column*& __cordl_internal_get__column_k__BackingField();

  constexpr ::System::Action_1<::UnityEngine::UIElements::SortColumnDescription*>* const& __cordl_internal_get_changed() const;

  constexpr ::System::Action_1<::UnityEngine::UIElements::SortColumnDescription*>*& __cordl_internal_get_changed();

  constexpr int32_t const& __cordl_internal_get_m_ColumnIndex() const;

  constexpr int32_t& __cordl_internal_get_m_ColumnIndex();

  constexpr ::StringW const& __cordl_internal_get_m_ColumnName() const;

  constexpr ::StringW& __cordl_internal_get_m_ColumnName();

  constexpr ::UnityEngine::UIElements::SortDirection const& __cordl_internal_get_m_SortDirection() const;

  constexpr ::UnityEngine::UIElements::SortDirection& __cordl_internal_get_m_SortDirection();

  constexpr ::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>* const& __cordl_internal_get_propertyChanged() const;

  constexpr ::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>*& __cordl_internal_get_propertyChanged();

  constexpr void __cordl_internal_set__column_k__BackingField(::UnityEngine::UIElements::Column* value);

  constexpr void __cordl_internal_set_changed(::System::Action_1<::UnityEngine::UIElements::SortColumnDescription*>* value);

  constexpr void __cordl_internal_set_m_ColumnIndex(int32_t value);

  constexpr void __cordl_internal_set_m_ColumnName(::StringW value);

  constexpr void __cordl_internal_set_m_SortDirection(::UnityEngine::UIElements::SortDirection value);

  constexpr void __cordl_internal_set_propertyChanged(::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>* value);

  /// @brief Method .ctor, addr 0x6b971e8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6b971f4, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(int32_t columnIndex, ::UnityEngine::UIElements::SortDirection direction);

  /// @brief Method .ctor, addr 0x6b97224, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW columnName, ::UnityEngine::UIElements::SortDirection direction);

  /// @brief Method add_changed, addr 0x6b97068, size 0xc0, virtual false, abstract: false, final false
  inline void add_changed(::System::Action_1<::UnityEngine::UIElements::SortColumnDescription*>* value);

  /// @brief Method add_propertyChanged, addr 0x6b96c10, size 0xc0, virtual true, abstract: false, final true
  inline void add_propertyChanged(::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>* value);

  static inline ::UnityEngine::UIElements::BindingId getStaticF_columnIndexProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_columnNameProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_directionProperty();

  /// @brief Method get_column, addr 0x6b96f84, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Column* get_column();

  /// @brief Method get_columnIndex, addr 0x6b96eb0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_columnIndex();

  /// @brief Method get_columnName, addr 0x6b96d90, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_columnName();

  /// @brief Method get_direction, addr 0x6b96f94, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::SortDirection get_direction();

  /// @brief Convert to "::UnityEngine::UIElements::INotifyBindablePropertyChanged"
  constexpr ::UnityEngine::UIElements::INotifyBindablePropertyChanged* i___UnityEngine__UIElements__INotifyBindablePropertyChanged() noexcept;

  /// @brief Method remove_changed, addr 0x6b97128, size 0xc0, virtual false, abstract: false, final false
  inline void remove_changed(::System::Action_1<::UnityEngine::UIElements::SortColumnDescription*>* value);

  /// @brief Method remove_propertyChanged, addr 0x6b96cd0, size 0xc0, virtual true, abstract: false, final true
  inline void remove_propertyChanged(::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>* value);

  static inline void setStaticF_columnIndexProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_columnNameProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_directionProperty(::UnityEngine::UIElements::BindingId value);

  /// @brief Method set_column, addr 0x6b96f8c, size 0x8, virtual false, abstract: false, final false
  inline void set_column(::UnityEngine::UIElements::Column* value);

  /// @brief Method set_columnIndex, addr 0x6b96eb8, size 0xcc, virtual false, abstract: false, final false
  inline void set_columnIndex(int32_t value);

  /// @brief Method set_columnName, addr 0x6b96d98, size 0xcc, virtual false, abstract: false, final false
  inline void set_columnName(::StringW value);

  /// @brief Method set_direction, addr 0x6b96f9c, size 0xcc, virtual false, abstract: false, final false
  inline void set_direction(::UnityEngine::UIElements::SortDirection value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortColumnDescription();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortColumnDescription", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortColumnDescription(SortColumnDescription&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortColumnDescription", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortColumnDescription(SortColumnDescription const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4279 };

  /// @brief Field m_ColumnIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_ColumnIndex;

  /// @brief Field m_ColumnName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_ColumnName;

  /// @brief Field m_SortDirection, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::UIElements::SortDirection ___m_SortDirection;

  /// @brief Field propertyChanged, offset: 0x28, size: 0x8, def value: None
  ::System::EventHandler_1<::UnityEngine::UIElements::BindablePropertyChangedEventArgs>* ___propertyChanged;

  /// @brief Field <column>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::Column* ____column_k__BackingField;

  /// @brief Field changed, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::SortColumnDescription*>* ___changed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::SortColumnDescription, ___m_ColumnIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::SortColumnDescription, ___m_ColumnName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::SortColumnDescription, ___m_SortDirection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::SortColumnDescription, ___propertyChanged) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::SortColumnDescription, ____column_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::SortColumnDescription, ___changed) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::SortColumnDescription, 0x40>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::SortColumnDescription);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::SortColumnDescription*, "UnityEngine.UIElements", "SortColumnDescription");
NEED_NO_BOX(::UnityEngine::UIElements::SortColumnDescription_UxmlObjectFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::SortColumnDescription_UxmlObjectFactory*, "UnityEngine.UIElements", "SortColumnDescription/UxmlObjectFactory");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::SortColumnDescription_UxmlObjectFactory_1, "UnityEngine.UIElements", "SortColumnDescription/UxmlObjectFactory`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::SortColumnDescription_UxmlObjectTraits_1, "UnityEngine.UIElements", "SortColumnDescription/UxmlObjectTraits`1");
