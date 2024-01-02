#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayExtension)
namespace System {
class Array;
}
// Forward declare root types
namespace GlobalNamespace {
class ArrayExtension;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ArrayExtension);
// Type: ::ArrayExtension
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15813))
// CS Name: ::ArrayExtension*
class CORDL_TYPE ArrayExtension : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsValidIndex, addr 0xe24bb8, size 0x34, virtual false, abstract: false, final false
  static inline bool IsValidIndex(::System::Array* array, int32_t index);

  // Ctor Parameters [CppParam { name: "", ty: "ArrayExtension", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayExtension(ArrayExtension&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayExtension", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayExtension(ArrayExtension const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayExtension();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ArrayExtension, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ArrayExtension);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ArrayExtension*, "", "ArrayExtension");
