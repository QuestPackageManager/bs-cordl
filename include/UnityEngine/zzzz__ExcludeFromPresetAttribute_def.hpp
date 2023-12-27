#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ExcludeFromPresetAttribute)
// Forward declare root types
namespace UnityEngine {
class ExcludeFromPresetAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ExcludeFromPresetAttribute);
// Type: UnityEngine::ExcludeFromPresetAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10224))
// CS Name: ::UnityEngine::ExcludeFromPresetAttribute*
class CORDL_TYPE ExcludeFromPresetAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::ExcludeFromPresetAttribute* New_ctor();

  /// @brief Method .ctor addr 0x2cd2990 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ExcludeFromPresetAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExcludeFromPresetAttribute(ExcludeFromPresetAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExcludeFromPresetAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExcludeFromPresetAttribute(ExcludeFromPresetAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExcludeFromPresetAttribute();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ExcludeFromPresetAttribute, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ExcludeFromPresetAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ExcludeFromPresetAttribute*, "UnityEngine", "ExcludeFromPresetAttribute");
