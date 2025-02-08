#pragma once
// IWYU pragma private; include "Unity/Collections/WriteOnlyAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(WriteOnlyAttribute)
// Forward declare root types
namespace Unity::Collections {
class WriteOnlyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::WriteOnlyAttribute);
// Dependencies System.Attribute
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.WriteOnlyAttribute
class CORDL_TYPE WriteOnlyAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Unity::Collections::WriteOnlyAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x4864f2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WriteOnlyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WriteOnlyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WriteOnlyAttribute(WriteOnlyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WriteOnlyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WriteOnlyAttribute(WriteOnlyAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10592 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::WriteOnlyAttribute, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::WriteOnlyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::WriteOnlyAttribute*, "Unity.Collections", "WriteOnlyAttribute");
