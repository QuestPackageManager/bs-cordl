#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NativeContainerNeedsThreadIndexAttribute)
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class NativeContainerNeedsThreadIndexAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::LowLevel::Unsafe::NativeContainerNeedsThreadIndexAttribute);
// Type: Unity.Collections.LowLevel.Unsafe::NativeContainerNeedsThreadIndexAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// CS Name: ::Unity.Collections.LowLevel.Unsafe::NativeContainerNeedsThreadIndexAttribute*
class CORDL_TYPE NativeContainerNeedsThreadIndexAttribute : public ::System::Attribute {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeContainerNeedsThreadIndexAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeContainerNeedsThreadIndexAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeContainerNeedsThreadIndexAttribute(NativeContainerNeedsThreadIndexAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeContainerNeedsThreadIndexAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeContainerNeedsThreadIndexAttribute(NativeContainerNeedsThreadIndexAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::NativeContainerNeedsThreadIndexAttribute, 0x10>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::NativeContainerNeedsThreadIndexAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::NativeContainerNeedsThreadIndexAttribute*, "Unity.Collections.LowLevel.Unsafe", "NativeContainerNeedsThreadIndexAttribute");
