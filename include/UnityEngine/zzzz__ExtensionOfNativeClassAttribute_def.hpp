#pragma once
// IWYU pragma private; include "UnityEngine/ExtensionOfNativeClassAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ExtensionOfNativeClassAttribute)
// Forward declare root types
namespace UnityEngine {
class ExtensionOfNativeClassAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ExtensionOfNativeClassAttribute);
// Dependencies System.Attribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ExtensionOfNativeClassAttribute
class CORDL_TYPE ExtensionOfNativeClassAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::ExtensionOfNativeClassAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x48b888c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExtensionOfNativeClassAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExtensionOfNativeClassAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExtensionOfNativeClassAttribute(ExtensionOfNativeClassAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExtensionOfNativeClassAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExtensionOfNativeClassAttribute(ExtensionOfNativeClassAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10889 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ExtensionOfNativeClassAttribute, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ExtensionOfNativeClassAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ExtensionOfNativeClassAttribute*, "UnityEngine", "ExtensionOfNativeClassAttribute");
