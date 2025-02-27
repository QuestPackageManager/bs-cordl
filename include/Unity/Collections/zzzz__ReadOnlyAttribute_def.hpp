#pragma once
// IWYU pragma private; include "Unity/Collections/ReadOnlyAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ReadOnlyAttribute)
// Forward declare root types
namespace Unity::Collections {
class ReadOnlyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::ReadOnlyAttribute);
// Dependencies System.Attribute
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.ReadOnlyAttribute
class CORDL_TYPE ReadOnlyAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Unity::Collections::ReadOnlyAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x486df54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReadOnlyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReadOnlyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReadOnlyAttribute(ReadOnlyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReadOnlyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReadOnlyAttribute(ReadOnlyAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10592 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::ReadOnlyAttribute, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::ReadOnlyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::ReadOnlyAttribute*, "Unity.Collections", "ReadOnlyAttribute");
