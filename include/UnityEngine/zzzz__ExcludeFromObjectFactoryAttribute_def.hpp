#pragma once
// IWYU pragma private; include "UnityEngine/ExcludeFromObjectFactoryAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ExcludeFromObjectFactoryAttribute)
// Forward declare root types
namespace UnityEngine {
class ExcludeFromObjectFactoryAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ExcludeFromObjectFactoryAttribute);
// Type: UnityEngine::ExcludeFromObjectFactoryAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::ExcludeFromObjectFactoryAttribute*
class CORDL_TYPE ExcludeFromObjectFactoryAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::ExcludeFromObjectFactoryAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x4848c68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExcludeFromObjectFactoryAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExcludeFromObjectFactoryAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExcludeFromObjectFactoryAttribute(ExcludeFromObjectFactoryAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExcludeFromObjectFactoryAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExcludeFromObjectFactoryAttribute(ExcludeFromObjectFactoryAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10850 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ExcludeFromObjectFactoryAttribute, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ExcludeFromObjectFactoryAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ExcludeFromObjectFactoryAttribute*, "UnityEngine", "ExcludeFromObjectFactoryAttribute");
