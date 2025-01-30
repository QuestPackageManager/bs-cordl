#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/NativeAsStructAttribute.hpp"
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
// Dependencies System.Attribute
namespace UnityEngine::Bindings {
// Is value type: false
// CS Name: UnityEngine.Bindings.NativeAsStructAttribute
class CORDL_TYPE NativeAsStructAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::Bindings::NativeAsStructAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x4919a44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeAsStructAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeAsStructAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeAsStructAttribute(NativeAsStructAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeAsStructAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeAsStructAttribute(NativeAsStructAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18707 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::NativeAsStructAttribute, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Bindings
NEED_NO_BOX(::UnityEngine::Bindings::NativeAsStructAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::NativeAsStructAttribute*, "UnityEngine.Bindings", "NativeAsStructAttribute");
