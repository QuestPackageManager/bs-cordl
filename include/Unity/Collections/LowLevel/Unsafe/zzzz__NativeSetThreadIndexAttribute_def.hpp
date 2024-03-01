#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NativeSetThreadIndexAttribute)
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class NativeSetThreadIndexAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::LowLevel::Unsafe::NativeSetThreadIndexAttribute);
// Type: Unity.Collections.LowLevel.Unsafe::NativeSetThreadIndexAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// CS Name: ::Unity.Collections.LowLevel.Unsafe::NativeSetThreadIndexAttribute*
class CORDL_TYPE NativeSetThreadIndexAttribute : public ::System::Attribute {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeSetThreadIndexAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeSetThreadIndexAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeSetThreadIndexAttribute(NativeSetThreadIndexAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeSetThreadIndexAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeSetThreadIndexAttribute(NativeSetThreadIndexAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::NativeSetThreadIndexAttribute, 0x10>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::NativeSetThreadIndexAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::NativeSetThreadIndexAttribute*, "Unity.Collections.LowLevel.Unsafe", "NativeSetThreadIndexAttribute");
