#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NativeContainerIsAtomicWriteOnlyAttribute)
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class NativeContainerIsAtomicWriteOnlyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::LowLevel::Unsafe::NativeContainerIsAtomicWriteOnlyAttribute);
// Type: Unity.Collections.LowLevel.Unsafe::NativeContainerIsAtomicWriteOnlyAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10016))
// CS Name: ::Unity.Collections.LowLevel.Unsafe::NativeContainerIsAtomicWriteOnlyAttribute*
class CORDL_TYPE NativeContainerIsAtomicWriteOnlyAttribute : public ::System::Attribute {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "NativeContainerIsAtomicWriteOnlyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeContainerIsAtomicWriteOnlyAttribute(NativeContainerIsAtomicWriteOnlyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeContainerIsAtomicWriteOnlyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeContainerIsAtomicWriteOnlyAttribute(NativeContainerIsAtomicWriteOnlyAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeContainerIsAtomicWriteOnlyAttribute();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::NativeContainerIsAtomicWriteOnlyAttribute, 0x10>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::NativeContainerIsAtomicWriteOnlyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::NativeContainerIsAtomicWriteOnlyAttribute*, "Unity.Collections.LowLevel.Unsafe", "NativeContainerIsAtomicWriteOnlyAttribute");
