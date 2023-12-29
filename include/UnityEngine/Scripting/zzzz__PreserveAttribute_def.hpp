#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(PreserveAttribute)
// Forward declare root types
namespace UnityEngine::Scripting {
class PreserveAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Scripting::PreserveAttribute);
// Type: UnityEngine.Scripting::PreserveAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Scripting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2545))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10239))
// CS Name: ::UnityEngine.Scripting::PreserveAttribute*
class CORDL_TYPE PreserveAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::Scripting::PreserveAttribute* New_ctor();

  /// @brief Method .ctor addr 0x2b8283c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PreserveAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PreserveAttribute(PreserveAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PreserveAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PreserveAttribute(PreserveAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PreserveAttribute();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Scripting::PreserveAttribute, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Scripting
NEED_NO_BOX(::UnityEngine::Scripting::PreserveAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Scripting::PreserveAttribute*, "UnityEngine.Scripting", "PreserveAttribute");
