#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/WriteAccessRequiredAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(WriteAccessRequiredAttribute)
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class WriteAccessRequiredAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::LowLevel::Unsafe::WriteAccessRequiredAttribute);
// Type: Unity.Collections.LowLevel.Unsafe::WriteAccessRequiredAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// CS Name: ::Unity.Collections.LowLevel.Unsafe::WriteAccessRequiredAttribute*
class CORDL_TYPE WriteAccessRequiredAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Unity::Collections::LowLevel::Unsafe::WriteAccessRequiredAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x340e360, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WriteAccessRequiredAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WriteAccessRequiredAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WriteAccessRequiredAttribute(WriteAccessRequiredAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WriteAccessRequiredAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WriteAccessRequiredAttribute(WriteAccessRequiredAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::WriteAccessRequiredAttribute, 0x10>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::WriteAccessRequiredAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::WriteAccessRequiredAttribute*, "Unity.Collections.LowLevel.Unsafe", "WriteAccessRequiredAttribute");
