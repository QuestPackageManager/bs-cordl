#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IJumpOffsetYProvider)
// Forward declare root types
namespace GlobalNamespace {
class IJumpOffsetYProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IJumpOffsetYProvider);
// Type: ::IJumpOffsetYProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4799))
// CS Name: ::IJumpOffsetYProvider*
class CORDL_TYPE IJumpOffsetYProvider {
public:
  // Declarations
  __declspec(property(get = get_jumpOffsetY)) float_t jumpOffsetY;

  /// @brief Method get_jumpOffsetY addr 0x0 size 0xffffffffffffffff virtual true final false
  inline float_t get_jumpOffsetY();

  // Ctor Parameters [CppParam { name: "", ty: "IJumpOffsetYProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IJumpOffsetYProvider(IJumpOffsetYProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IJumpOffsetYProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IJumpOffsetYProvider(IJumpOffsetYProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IJumpOffsetYProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IJumpOffsetYProvider*, "", "IJumpOffsetYProvider");
