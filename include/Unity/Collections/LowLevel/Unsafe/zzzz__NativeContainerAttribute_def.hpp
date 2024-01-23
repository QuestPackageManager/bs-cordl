#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NativeContainerAttribute)
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class NativeContainerAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::LowLevel::Unsafe::NativeContainerAttribute);
// Type: Unity.Collections.LowLevel.Unsafe::NativeContainerAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2547))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10014))
// CS Name: ::Unity.Collections.LowLevel.Unsafe::NativeContainerAttribute*
class CORDL_TYPE NativeContainerAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Unity::Collections::LowLevel::Unsafe::NativeContainerAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x2c9e5f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NativeContainerAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeContainerAttribute(NativeContainerAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeContainerAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeContainerAttribute(NativeContainerAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeContainerAttribute();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::NativeContainerAttribute, 0x10>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::NativeContainerAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::NativeContainerAttribute*, "Unity.Collections.LowLevel.Unsafe", "NativeContainerAttribute");
