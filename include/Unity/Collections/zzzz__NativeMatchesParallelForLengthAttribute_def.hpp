#pragma once
// IWYU pragma private; include "Unity/Collections/NativeMatchesParallelForLengthAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NativeMatchesParallelForLengthAttribute)
// Forward declare root types
namespace Unity::Collections {
class NativeMatchesParallelForLengthAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::NativeMatchesParallelForLengthAttribute);
// Dependencies System.Attribute
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.NativeMatchesParallelForLengthAttribute
class CORDL_TYPE NativeMatchesParallelForLengthAttribute : public ::System::Attribute {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeMatchesParallelForLengthAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeMatchesParallelForLengthAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeMatchesParallelForLengthAttribute(NativeMatchesParallelForLengthAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeMatchesParallelForLengthAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeMatchesParallelForLengthAttribute(NativeMatchesParallelForLengthAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10591 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeMatchesParallelForLengthAttribute, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::NativeMatchesParallelForLengthAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeMatchesParallelForLengthAttribute*, "Unity.Collections", "NativeMatchesParallelForLengthAttribute");
