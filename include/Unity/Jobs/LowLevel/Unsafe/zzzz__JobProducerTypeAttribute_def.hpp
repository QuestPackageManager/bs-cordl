#pragma once
// IWYU pragma private; include "Unity/Jobs/LowLevel/Unsafe/JobProducerTypeAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(JobProducerTypeAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace Unity::Jobs::LowLevel::Unsafe {
class JobProducerTypeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute);
// Dependencies System.Attribute
namespace Unity::Jobs::LowLevel::Unsafe {
// Is value type: false
// CS Name: Unity.Jobs.LowLevel.Unsafe.JobProducerTypeAttribute
class CORDL_TYPE JobProducerTypeAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <ProducerType>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ProducerType_k__BackingField, put = __cordl_internal_set__ProducerType_k__BackingField)) ::System::Type* _ProducerType_k__BackingField;

  static inline ::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute* New_ctor(::System::Type* producerType);

  constexpr ::System::Type* const& __cordl_internal_get__ProducerType_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__ProducerType_k__BackingField();

  constexpr void __cordl_internal_set__ProducerType_k__BackingField(::System::Type* value);

  /// @brief Method .ctor, addr 0x485fef4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* producerType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JobProducerTypeAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JobProducerTypeAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JobProducerTypeAttribute(JobProducerTypeAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JobProducerTypeAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JobProducerTypeAttribute(JobProducerTypeAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10554 };

  /// @brief Field <ProducerType>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____ProducerType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute, ____ProducerType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute, 0x18>, "Size mismatch!");

} // namespace Unity::Jobs::LowLevel::Unsafe
NEED_NO_BOX(::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute*, "Unity.Jobs.LowLevel.Unsafe", "JobProducerTypeAttribute");
