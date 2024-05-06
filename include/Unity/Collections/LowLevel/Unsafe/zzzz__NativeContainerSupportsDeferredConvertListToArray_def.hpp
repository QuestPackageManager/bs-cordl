#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NativeContainerSupportsDeferredConvertListToArray)
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class NativeContainerSupportsDeferredConvertListToArray;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::LowLevel::Unsafe::NativeContainerSupportsDeferredConvertListToArray);
// Type: Unity.Collections.LowLevel.Unsafe::NativeContainerSupportsDeferredConvertListToArray
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// CS Name: ::Unity.Collections.LowLevel.Unsafe::NativeContainerSupportsDeferredConvertListToArray*
class CORDL_TYPE NativeContainerSupportsDeferredConvertListToArray : public ::System::Attribute {
public:
  // Declarations
  static inline ::Unity::Collections::LowLevel::Unsafe::NativeContainerSupportsDeferredConvertListToArray* New_ctor();

  /// @brief Method .ctor, addr 0x33d5fe0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeContainerSupportsDeferredConvertListToArray();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeContainerSupportsDeferredConvertListToArray", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeContainerSupportsDeferredConvertListToArray(NativeContainerSupportsDeferredConvertListToArray&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeContainerSupportsDeferredConvertListToArray", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeContainerSupportsDeferredConvertListToArray(NativeContainerSupportsDeferredConvertListToArray const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::NativeContainerSupportsDeferredConvertListToArray, 0x10>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::NativeContainerSupportsDeferredConvertListToArray);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::NativeContainerSupportsDeferredConvertListToArray*, "Unity.Collections.LowLevel.Unsafe",
                       "NativeContainerSupportsDeferredConvertListToArray");
