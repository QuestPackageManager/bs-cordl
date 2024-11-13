#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/SortColumnDescription.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__SortDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlObjectTraits_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SortColumnDescription)
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UIElements {
class Column;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
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
namespace UnityEngine::UIElements {
template <typename T> class __SortColumnDescription__UxmlObjectFactory_1;
}
namespace UnityEngine::UIElements {
template <typename T> class __SortColumnDescription__UxmlObjectTraits_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class SortColumnDescription;
}
namespace UnityEngine::UIElements {
template <typename T> class __SortColumnDescription__UxmlObjectFactory_1;
}
namespace UnityEngine::UIElements {
template <typename T> class __SortColumnDescription__UxmlObjectTraits_1;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::SortColumnDescription);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::__SortColumnDescription__UxmlObjectFactory_1);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::__SortColumnDescription__UxmlObjectTraits_1);
// Type: ::UxmlObjectFactory`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::SortColumnDescription::UxmlObjectFactory`1<T>*
class CORDL_TYPE __SortColumnDescription__UxmlObjectFactory_1 : public ::UnityEngine::UIElements::UxmlObjectFactory_2<T, ::UnityEngine::UIElements::__SortColumnDescription__UxmlObjectTraits_1<T>*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__SortColumnDescription__UxmlObjectFactory_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SortColumnDescription__UxmlObjectFactory_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SortColumnDescription__UxmlObjectFactory_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SortColumnDescription__UxmlObjectFactory_1(__SortColumnDescription__UxmlObjectFactory_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SortColumnDescription__UxmlObjectFactory_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SortColumnDescription__UxmlObjectFactory_1(__SortColumnDescription__UxmlObjectFactory_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5630 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Type: ::UxmlObjectTraits`1
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::SortColumnDescription::UxmlObjectTraits`1<T>*
class CORDL_TYPE __SortColumnDescription__UxmlObjectTraits_1 : public ::UnityEngine::UIElements::UxmlObjectTraits_1<T> {
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
  inline void Init(ByRef<T> obj, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__SortColumnDescription__UxmlObjectTraits_1<T>* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_ColumnIndex();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& __cordl_internal_get_m_ColumnIndex() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_ColumnName();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& __cordl_internal_get_m_ColumnName() const;

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SortDirection>*& __cordl_internal_get_m_SortDescription();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SortDirection>*> const&
  __cordl_internal_get_m_SortDescription() const;

  constexpr void __cordl_internal_set_m_ColumnIndex(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  constexpr void __cordl_internal_set_m_ColumnName(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr void __cordl_internal_set_m_SortDescription(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SortDirection>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SortColumnDescription__UxmlObjectTraits_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SortColumnDescription__UxmlObjectTraits_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SortColumnDescription__UxmlObjectTraits_1(__SortColumnDescription__UxmlObjectTraits_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SortColumnDescription__UxmlObjectTraits_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SortColumnDescription__UxmlObjectTraits_1(__SortColumnDescription__UxmlObjectTraits_1 const&) = delete;

  /// @brief Field m_ColumnName, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_ColumnName;

  /// @brief Field m_ColumnIndex, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_ColumnIndex;

  /// @brief Field m_SortDescription, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SortDirection>* ___m_SortDescription;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5631 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::SortColumnDescription
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::SortColumnDescription*
class CORDL_TYPE SortColumnDescription : public ::System::Object {
public:
  // Declarations
  template <typename T> using UxmlObjectFactory_1 = ::UnityEngine::UIElements::__SortColumnDescription__UxmlObjectFactory_1<T>;

  template <typename T> using UxmlObjectTraits_1 = ::UnityEngine::UIElements::__SortColumnDescription__UxmlObjectTraits_1<T>;

  /// @brief Field <column>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__column_k__BackingField, put = __cordl_internal_set__column_k__BackingField)) ::UnityEngine::UIElements::Column* _column_k__BackingField;

  /// @brief Field changed, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_changed, put = __cordl_internal_set_changed)) ::System::Action_1<::UnityEngine::UIElements::SortColumnDescription*>* changed;

  __declspec(property(get = get_column, put = set_column)) ::UnityEngine::UIElements::Column* column;

  __declspec(property(get = get_columnIndex, put = set_columnIndex)) int32_t columnIndex;

  __declspec(property(get = get_columnName, put = set_columnName)) ::StringW columnName;

  __declspec(property(get = get_direction, put = set_direction)) ::UnityEngine::UIElements::SortDirection direction;

  /// @brief Field m_ColumnIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ColumnIndex, put = __cordl_internal_set_m_ColumnIndex)) int32_t m_ColumnIndex;

  /// @brief Field m_ColumnName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColumnName, put = __cordl_internal_set_m_ColumnName)) ::StringW m_ColumnName;

  /// @brief Field m_SortDirection, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SortDirection, put = __cordl_internal_set_m_SortDirection)) ::UnityEngine::UIElements::SortDirection m_SortDirection;

  static inline ::UnityEngine::UIElements::SortColumnDescription* New_ctor();

  static inline ::UnityEngine::UIElements::SortColumnDescription* New_ctor(int32_t columnIndex, ::UnityEngine::UIElements::SortDirection direction);

  static inline ::UnityEngine::UIElements::SortColumnDescription* New_ctor(::StringW columnName, ::UnityEngine::UIElements::SortDirection direction);

  constexpr ::UnityEngine::UIElements::Column*& __cordl_internal_get__column_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Column*> const& __cordl_internal_get__column_k__BackingField() const;

  constexpr ::System::Action_1<::UnityEngine::UIElements::SortColumnDescription*>*& __cordl_internal_get_changed();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::UIElements::SortColumnDescription*>*> const& __cordl_internal_get_changed() const;

  constexpr int32_t const& __cordl_internal_get_m_ColumnIndex() const;

  constexpr int32_t& __cordl_internal_get_m_ColumnIndex();

  constexpr ::StringW const& __cordl_internal_get_m_ColumnName() const;

  constexpr ::StringW& __cordl_internal_get_m_ColumnName();

  constexpr ::UnityEngine::UIElements::SortDirection const& __cordl_internal_get_m_SortDirection() const;

  constexpr ::UnityEngine::UIElements::SortDirection& __cordl_internal_get_m_SortDirection();

  constexpr void __cordl_internal_set__column_k__BackingField(::UnityEngine::UIElements::Column* value);

  constexpr void __cordl_internal_set_changed(::System::Action_1<::UnityEngine::UIElements::SortColumnDescription*>* value);

  constexpr void __cordl_internal_set_m_ColumnIndex(int32_t value);

  constexpr void __cordl_internal_set_m_ColumnName(::StringW value);

  constexpr void __cordl_internal_set_m_SortDirection(::UnityEngine::UIElements::SortDirection value);

  /// @brief Method .ctor, addr 0x4999fec, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4999ffc, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(int32_t columnIndex, ::UnityEngine::UIElements::SortDirection direction);

  /// @brief Method .ctor, addr 0x499a08c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW columnName, ::UnityEngine::UIElements::SortDirection direction);

  /// @brief Method add_changed, addr 0x4999e8c, size 0xb0, virtual false, abstract: false, final false
  inline void add_changed(::System::Action_1<::UnityEngine::UIElements::SortColumnDescription*>* value);

  /// @brief Method get_column, addr 0x4999e40, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Column* get_column();

  /// @brief Method get_columnIndex, addr 0x4999e04, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_columnIndex();

  /// @brief Method get_columnName, addr 0x4999da8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_columnName();

  /// @brief Method get_direction, addr 0x4999e50, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::SortDirection get_direction();

  /// @brief Method remove_changed, addr 0x4999f3c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_changed(::System::Action_1<::UnityEngine::UIElements::SortColumnDescription*>* value);

  /// @brief Method set_column, addr 0x4999e48, size 0x8, virtual false, abstract: false, final false
  inline void set_column(::UnityEngine::UIElements::Column* value);

  /// @brief Method set_columnIndex, addr 0x4999e0c, size 0x34, virtual false, abstract: false, final false
  inline void set_columnIndex(int32_t value);

  /// @brief Method set_columnName, addr 0x4999db0, size 0x54, virtual false, abstract: false, final false
  inline void set_columnName(::StringW value);

  /// @brief Method set_direction, addr 0x4999e58, size 0x34, virtual false, abstract: false, final false
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

  /// @brief Field m_ColumnIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_ColumnIndex;

  /// @brief Field m_ColumnName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_ColumnName;

  /// @brief Field m_SortDirection, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::UIElements::SortDirection ___m_SortDirection;

  /// @brief Field <column>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::Column* ____column_k__BackingField;

  /// @brief Field changed, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::SortColumnDescription*>* ___changed;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5632 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::SortColumnDescription, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::SortColumnDescription, ___m_ColumnIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::SortColumnDescription, ___m_ColumnName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::SortColumnDescription, ___m_SortDirection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::SortColumnDescription, ____column_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::SortColumnDescription, ___changed) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::SortColumnDescription);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::SortColumnDescription*, "UnityEngine.UIElements", "SortColumnDescription");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::__SortColumnDescription__UxmlObjectFactory_1, "UnityEngine.UIElements", "SortColumnDescription/UxmlObjectFactory`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::__SortColumnDescription__UxmlObjectTraits_1, "UnityEngine.UIElements", "SortColumnDescription/UxmlObjectTraits`1");
