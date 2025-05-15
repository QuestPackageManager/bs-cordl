#pragma once
// IWYU pragma private; include "System/Data/DataColumnPropertyDescriptor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataColumnPropertyDescriptor)
namespace System::ComponentModel {
class AttributeCollection;
}
namespace System::Data {
class DataColumn;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data {
class DataColumnPropertyDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataColumnPropertyDescriptor);
// Dependencies System.ComponentModel.PropertyDescriptor
namespace System::Data {
// Is value type: false
// CS Name: System.Data.DataColumnPropertyDescriptor
class CORDL_TYPE DataColumnPropertyDescriptor : public ::System::ComponentModel::PropertyDescriptor {
public:
  // Declarations
  __declspec(property(get = get_Attributes)) ::System::ComponentModel::AttributeCollection* Attributes;

  __declspec(property(get = get_Column)) ::System::Data::DataColumn* Column;

  __declspec(property(get = get_ComponentType)) ::System::Type* ComponentType;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_PropertyType)) ::System::Type* PropertyType;

  /// @brief Field <Column>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__Column_k__BackingField, put = __cordl_internal_set__Column_k__BackingField)) ::System::Data::DataColumn* _Column_k__BackingField;

  /// @brief Method CanResetValue, addr 0x415c30c, size 0x114, virtual true, abstract: false, final false
  inline bool CanResetValue(::System::Object* component);

  /// @brief Method Equals, addr 0x415c27c, size 0x70, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method GetHashCode, addr 0x415c2ec, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetValue, addr 0x415c454, size 0x88, virtual true, abstract: false, final false
  inline ::System::Object* GetValue(::System::Object* component);

  static inline ::System::Data::DataColumnPropertyDescriptor* New_ctor(::System::Data::DataColumn* dataColumn);

  /// @brief Method ResetValue, addr 0x415c4dc, size 0xc4, virtual true, abstract: false, final false
  inline void ResetValue(::System::Object* component);

  /// @brief Method SetValue, addr 0x415c62c, size 0xe0, virtual true, abstract: false, final false
  inline void SetValue(::System::Object* component, ::System::Object* value);

  /// @brief Method ShouldSerializeValue, addr 0x415c70c, size 0x8, virtual true, abstract: false, final false
  inline bool ShouldSerializeValue(::System::Object* component);

  constexpr ::System::Data::DataColumn* const& __cordl_internal_get__Column_k__BackingField() const;

  constexpr ::System::Data::DataColumn*& __cordl_internal_get__Column_k__BackingField();

  constexpr void __cordl_internal_set__Column_k__BackingField(::System::Data::DataColumn* value);

  /// @brief Method .ctor, addr 0x415bfdc, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataColumn* dataColumn);

  /// @brief Method get_Attributes, addr 0x415c014, size 0x1bc, virtual true, abstract: false, final false
  inline ::System::ComponentModel::AttributeCollection* get_Attributes();

  /// @brief Method get_Column, addr 0x415c1d0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::DataColumn* get_Column();

  /// @brief Method get_ComponentType, addr 0x415c1d8, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Type* get_ComponentType();

  /// @brief Method get_IsReadOnly, addr 0x415c244, size 0x1c, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_PropertyType, addr 0x415c260, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Type* get_PropertyType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataColumnPropertyDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataColumnPropertyDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataColumnPropertyDescriptor(DataColumnPropertyDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataColumnPropertyDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataColumnPropertyDescriptor(DataColumnPropertyDescriptor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11379 };

  /// @brief Field <Column>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Data::DataColumn* ____Column_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::DataColumnPropertyDescriptor, ____Column_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::DataColumnPropertyDescriptor, 0x90>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataColumnPropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataColumnPropertyDescriptor*, "System.Data", "DataColumnPropertyDescriptor");
