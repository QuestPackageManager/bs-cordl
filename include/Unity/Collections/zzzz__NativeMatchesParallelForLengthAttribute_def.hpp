#pragma once
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
// Type: Unity.Collections::NativeMatchesParallelForLengthAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Collections {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2547))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8739))
// CS Name: ::Unity.Collections::NativeMatchesParallelForLengthAttribute*
class CORDL_TYPE NativeMatchesParallelForLengthAttribute : public ::System::Attribute {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "NativeMatchesParallelForLengthAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeMatchesParallelForLengthAttribute(NativeMatchesParallelForLengthAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeMatchesParallelForLengthAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeMatchesParallelForLengthAttribute(NativeMatchesParallelForLengthAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeMatchesParallelForLengthAttribute();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeMatchesParallelForLengthAttribute, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::NativeMatchesParallelForLengthAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeMatchesParallelForLengthAttribute*, "Unity.Collections", "NativeMatchesParallelForLengthAttribute");
