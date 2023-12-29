#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayHelpers)
// Forward declare root types
namespace GlobalNamespace {
class ArrayHelpers;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ArrayHelpers);
// Type: ::ArrayHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13834))
// CS Name: ::ArrayHelpers*
class CORDL_TYPE ArrayHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateOrEnlargeArray addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> CreateOrEnlargeArray(::ArrayW<T, ::Array<T>*> array, int32_t minimumCapacity);

  // Ctor Parameters [CppParam { name: "", ty: "ArrayHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayHelpers(ArrayHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayHelpers(ArrayHelpers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayHelpers();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ArrayHelpers, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ArrayHelpers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ArrayHelpers*, "", "ArrayHelpers");
