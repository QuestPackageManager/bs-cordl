#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NativeAsStructAttribute)
// Forward declare root types
namespace UnityEngine::Bindings {
class NativeAsStructAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Bindings::NativeAsStructAttribute);
// Type: UnityEngine.Bindings::NativeAsStructAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Bindings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2545))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15885))
// CS Name: ::UnityEngine.Bindings::NativeAsStructAttribute*
class CORDL_TYPE NativeAsStructAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::Bindings::NativeAsStructAttribute* New_ctor();

  /// @brief Method .ctor addr 0x2bb132c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NativeAsStructAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeAsStructAttribute(NativeAsStructAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeAsStructAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeAsStructAttribute(NativeAsStructAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeAsStructAttribute();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::NativeAsStructAttribute, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Bindings
NEED_NO_BOX(::UnityEngine::Bindings::NativeAsStructAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::NativeAsStructAttribute*, "UnityEngine.Bindings", "NativeAsStructAttribute");
