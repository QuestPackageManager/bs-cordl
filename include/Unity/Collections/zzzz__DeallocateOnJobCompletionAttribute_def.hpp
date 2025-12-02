#pragma once
// IWYU pragma private; include "Unity/Collections/DeallocateOnJobCompletionAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(DeallocateOnJobCompletionAttribute)
// Forward declare root types
namespace Unity::Collections {
class DeallocateOnJobCompletionAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::DeallocateOnJobCompletionAttribute);
// Dependencies System.Attribute
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.DeallocateOnJobCompletionAttribute
class CORDL_TYPE DeallocateOnJobCompletionAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Unity::Collections::DeallocateOnJobCompletionAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x682b2a8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeallocateOnJobCompletionAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeallocateOnJobCompletionAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeallocateOnJobCompletionAttribute(DeallocateOnJobCompletionAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeallocateOnJobCompletionAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeallocateOnJobCompletionAttribute(DeallocateOnJobCompletionAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9960 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::DeallocateOnJobCompletionAttribute, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::DeallocateOnJobCompletionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::DeallocateOnJobCompletionAttribute*, "Unity.Collections", "DeallocateOnJobCompletionAttribute");
