#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeSliceExtensions)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Collections {
template <typename T> struct NativeSlice_1;
}
// Forward declare root types
namespace Unity::Collections {
class NativeSliceExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::NativeSliceExtensions);
// Type: Unity.Collections::NativeSliceExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9992))
// CS Name: ::Unity.Collections::NativeSliceExtensions*
class CORDL_TYPE NativeSliceExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method Slice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::NativeSlice_1<T> Slice(::Unity::Collections::NativeArray_1<T> thisArray, int32_t start, int32_t length);

  /// @brief Method Slice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::NativeSlice_1<T> Slice(::Unity::Collections::NativeSlice_1<T> thisSlice, int32_t start, int32_t length);

  // Ctor Parameters [CppParam { name: "", ty: "NativeSliceExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeSliceExtensions(NativeSliceExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeSliceExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeSliceExtensions(NativeSliceExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeSliceExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeSliceExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::NativeSliceExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeSliceExtensions*, "Unity.Collections", "NativeSliceExtensions");
