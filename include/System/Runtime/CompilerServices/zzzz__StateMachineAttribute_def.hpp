#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/StateMachineAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(StateMachineAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class StateMachineAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::StateMachineAttribute);
// Dependencies System.Attribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.StateMachineAttribute
class CORDL_TYPE StateMachineAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_StateMachineType)) ::System::Type* StateMachineType;

  /// @brief Field <StateMachineType>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__StateMachineType_k__BackingField, put = __cordl_internal_set__StateMachineType_k__BackingField)) ::System::Type* _StateMachineType_k__BackingField;

  static inline ::System::Runtime::CompilerServices::StateMachineAttribute* New_ctor(::System::Type* stateMachineType);

  constexpr ::System::Type* const& __cordl_internal_get__StateMachineType_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__StateMachineType_k__BackingField();

  constexpr void __cordl_internal_set__StateMachineType_k__BackingField(::System::Type* value);

  /// @brief Method .ctor, addr 0x3d19c44, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* stateMachineType);

  /// @brief Method get_StateMachineType, addr 0x3d1aa70, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_StateMachineType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StateMachineAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StateMachineAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StateMachineAttribute(StateMachineAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StateMachineAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StateMachineAttribute(StateMachineAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3384 };

  /// @brief Field <StateMachineType>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____StateMachineType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::CompilerServices::StateMachineAttribute, ____StateMachineType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::StateMachineAttribute, 0x18>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::StateMachineAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::StateMachineAttribute*, "System.Runtime.CompilerServices", "StateMachineAttribute");
