#pragma once
// IWYU pragma private; include "UnityEngine/ExcludeFromPresetAttribute.hpp"
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
// Dependencies System.Attribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ExcludeFromPresetAttribute
class CORDL_TYPE ExcludeFromPresetAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::ExcludeFromPresetAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x48b544c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExcludeFromPresetAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExcludeFromPresetAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExcludeFromPresetAttribute(ExcludeFromPresetAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExcludeFromPresetAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExcludeFromPresetAttribute(ExcludeFromPresetAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10871 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ExcludeFromPresetAttribute, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ExcludeFromPresetAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ExcludeFromPresetAttribute*, "UnityEngine", "ExcludeFromPresetAttribute");
