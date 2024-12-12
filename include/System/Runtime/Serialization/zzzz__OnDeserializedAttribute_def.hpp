#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/OnDeserializedAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(OnDeserializedAttribute)
// Forward declare root types
namespace System::Runtime::Serialization {
class OnDeserializedAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::OnDeserializedAttribute);
// Dependencies System.Attribute
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.OnDeserializedAttribute
class CORDL_TYPE OnDeserializedAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Runtime::Serialization::OnDeserializedAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x3cfb82c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OnDeserializedAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OnDeserializedAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OnDeserializedAttribute(OnDeserializedAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OnDeserializedAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OnDeserializedAttribute(OnDeserializedAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3232 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::OnDeserializedAttribute, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::OnDeserializedAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::OnDeserializedAttribute*, "System.Runtime.Serialization", "OnDeserializedAttribute");
