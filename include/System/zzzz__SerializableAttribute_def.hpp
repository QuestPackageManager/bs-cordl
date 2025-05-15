#pragma once
// IWYU pragma private; include "System/SerializableAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(SerializableAttribute)
// Forward declare root types
namespace System {
class SerializableAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::SerializableAttribute);
// Dependencies System.Attribute
namespace System {
// Is value type: false
// CS Name: System.SerializableAttribute
class CORDL_TYPE SerializableAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::SerializableAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x3dfda38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializableAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializableAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializableAttribute(SerializableAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializableAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializableAttribute(SerializableAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2467 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::SerializableAttribute, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::SerializableAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::SerializableAttribute*, "System", "SerializableAttribute");
