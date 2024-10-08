#pragma once
// IWYU pragma private; include "UnityEngine/PropertyAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(PropertyAttribute)
// Forward declare root types
namespace UnityEngine {
class PropertyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::PropertyAttribute);
// Type: UnityEngine::PropertyAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::PropertyAttribute*
class CORDL_TYPE PropertyAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::PropertyAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x482f03c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyAttribute(PropertyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyAttribute(PropertyAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10795 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PropertyAttribute, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::PropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PropertyAttribute*, "UnityEngine", "PropertyAttribute");
