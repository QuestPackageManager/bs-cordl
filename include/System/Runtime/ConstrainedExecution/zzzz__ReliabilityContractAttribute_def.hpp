#pragma once
// IWYU pragma private; include "System/Runtime/ConstrainedExecution/ReliabilityContractAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/ConstrainedExecution/zzzz__Cer_def.hpp"
#include "System/Runtime/ConstrainedExecution/zzzz__Consistency_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ReliabilityContractAttribute)
namespace System::Runtime::ConstrainedExecution {
struct Cer;
}
namespace System::Runtime::ConstrainedExecution {
struct Consistency;
}
// Forward declare root types
namespace System::Runtime::ConstrainedExecution {
class ReliabilityContractAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::ConstrainedExecution::ReliabilityContractAttribute);
// Dependencies System.Attribute, System.Runtime.ConstrainedExecution.Cer, System.Runtime.ConstrainedExecution.Consistency
namespace System::Runtime::ConstrainedExecution {
// Is value type: false
// CS Name: System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
class CORDL_TYPE ReliabilityContractAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <Cer>k__BackingField, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__Cer_k__BackingField, put = __cordl_internal_set__Cer_k__BackingField)) ::System::Runtime::ConstrainedExecution::Cer _Cer_k__BackingField;

  /// @brief Field <ConsistencyGuarantee>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__ConsistencyGuarantee_k__BackingField,
                      put = __cordl_internal_set__ConsistencyGuarantee_k__BackingField)) ::System::Runtime::ConstrainedExecution::Consistency _ConsistencyGuarantee_k__BackingField;

  static inline ::System::Runtime::ConstrainedExecution::ReliabilityContractAttribute* New_ctor(::System::Runtime::ConstrainedExecution::Consistency consistencyGuarantee,
                                                                                                ::System::Runtime::ConstrainedExecution::Cer cer);

  constexpr ::System::Runtime::ConstrainedExecution::Cer const& __cordl_internal_get__Cer_k__BackingField() const;

  constexpr ::System::Runtime::ConstrainedExecution::Cer& __cordl_internal_get__Cer_k__BackingField();

  constexpr ::System::Runtime::ConstrainedExecution::Consistency const& __cordl_internal_get__ConsistencyGuarantee_k__BackingField() const;

  constexpr ::System::Runtime::ConstrainedExecution::Consistency& __cordl_internal_get__ConsistencyGuarantee_k__BackingField();

  constexpr void __cordl_internal_set__Cer_k__BackingField(::System::Runtime::ConstrainedExecution::Cer value);

  constexpr void __cordl_internal_set__ConsistencyGuarantee_k__BackingField(::System::Runtime::ConstrainedExecution::Consistency value);

  /// @brief Method .ctor, addr 0x3d1c808, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::ConstrainedExecution::Consistency consistencyGuarantee, ::System::Runtime::ConstrainedExecution::Cer cer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReliabilityContractAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReliabilityContractAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReliabilityContractAttribute(ReliabilityContractAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReliabilityContractAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReliabilityContractAttribute(ReliabilityContractAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3352 };

  /// @brief Field <ConsistencyGuarantee>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::System::Runtime::ConstrainedExecution::Consistency ____ConsistencyGuarantee_k__BackingField;

  /// @brief Field <Cer>k__BackingField, offset: 0x14, size: 0x4, def value: None
  ::System::Runtime::ConstrainedExecution::Cer ____Cer_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::ConstrainedExecution::ReliabilityContractAttribute, ____ConsistencyGuarantee_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::ConstrainedExecution::ReliabilityContractAttribute, ____Cer_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::ConstrainedExecution::ReliabilityContractAttribute, 0x18>, "Size mismatch!");

} // namespace System::Runtime::ConstrainedExecution
NEED_NO_BOX(::System::Runtime::ConstrainedExecution::ReliabilityContractAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::ConstrainedExecution::ReliabilityContractAttribute*, "System.Runtime.ConstrainedExecution", "ReliabilityContractAttribute");
