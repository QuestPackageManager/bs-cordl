#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IConstructorStringGenerator)
// Forward declare root types
namespace GlobalNamespace {
class IConstructorStringGenerator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IConstructorStringGenerator);
// Type: ::IConstructorStringGenerator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15847))
// CS Name: ::IConstructorStringGenerator*
class CORDL_TYPE IConstructorStringGenerator {
public:
  // Declarations
  /// @brief Method ToConstructorString addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW ToConstructorString();

  // Ctor Parameters [CppParam { name: "", ty: "IConstructorStringGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IConstructorStringGenerator(IConstructorStringGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IConstructorStringGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IConstructorStringGenerator(IConstructorStringGenerator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IConstructorStringGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IConstructorStringGenerator*, "", "IConstructorStringGenerator");
