#pragma once
// IWYU pragma private; include "System/Data/DataRelationPropertyDescriptor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataRelationPropertyDescriptor)
namespace System::Data {
class DataRelation;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data {
class DataRelationPropertyDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataRelationPropertyDescriptor);
// Dependencies System.ComponentModel.PropertyDescriptor
namespace System::Data {
// Is value type: false
// CS Name: System.Data.DataRelationPropertyDescriptor
class CORDL_TYPE DataRelationPropertyDescriptor : public ::System::ComponentModel::PropertyDescriptor {
public:
  // Declarations
  __declspec(property(get = get_ComponentType)) ::System::Type* ComponentType;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_PropertyType)) ::System::Type* PropertyType;

  __declspec(property(get = get_Relation)) ::System::Data::DataRelation* Relation;

  /// @brief Field <Relation>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__Relation_k__BackingField, put = __cordl_internal_set__Relation_k__BackingField)) ::System::Data::DataRelation* _Relation_k__BackingField;

  /// @brief Method CanResetValue, addr 0x41637fc, size 0x8, virtual true, abstract: false, final false
  inline bool CanResetValue(::System::Object* component);

  /// @brief Method Equals, addr 0x416376c, size 0x70, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method GetHashCode, addr 0x41637dc, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetValue, addr 0x4163804, size 0x8c, virtual true, abstract: false, final false
  inline ::System::Object* GetValue(::System::Object* component);

  static inline ::System::Data::DataRelationPropertyDescriptor* New_ctor(::System::Data::DataRelation* dataRelation);

  /// @brief Method ResetValue, addr 0x4163898, size 0x4, virtual true, abstract: false, final false
  inline void ResetValue(::System::Object* component);

  /// @brief Method SetValue, addr 0x416389c, size 0x4, virtual true, abstract: false, final false
  inline void SetValue(::System::Object* component, ::System::Object* value);

  /// @brief Method ShouldSerializeValue, addr 0x41638a0, size 0x8, virtual true, abstract: false, final false
  inline bool ShouldSerializeValue(::System::Object* component);

  constexpr ::System::Data::DataRelation* const& __cordl_internal_get__Relation_k__BackingField() const;

  constexpr ::System::Data::DataRelation*& __cordl_internal_get__Relation_k__BackingField();

  constexpr void __cordl_internal_set__Relation_k__BackingField(::System::Data::DataRelation* value);

  /// @brief Method .ctor, addr 0x4163638, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataRelation* dataRelation);

  /// @brief Method get_ComponentType, addr 0x416368c, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Type* get_ComponentType();

  /// @brief Method get_IsReadOnly, addr 0x41636f8, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_PropertyType, addr 0x4163700, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Type* get_PropertyType();

  /// @brief Method get_Relation, addr 0x4163684, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::DataRelation* get_Relation();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataRelationPropertyDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataRelationPropertyDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataRelationPropertyDescriptor(DataRelationPropertyDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataRelationPropertyDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataRelationPropertyDescriptor(DataRelationPropertyDescriptor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11387 };

  /// @brief Field <Relation>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Data::DataRelation* ____Relation_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::DataRelationPropertyDescriptor, ____Relation_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::DataRelationPropertyDescriptor, 0x90>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataRelationPropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataRelationPropertyDescriptor*, "System.Data", "DataRelationPropertyDescriptor");
