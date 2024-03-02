#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(SelectionBaseAttribute)
// Forward declare root types
namespace UnityEngine {
class SelectionBaseAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SelectionBaseAttribute);
// Type: UnityEngine::SelectionBaseAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::SelectionBaseAttribute*
class CORDL_TYPE SelectionBaseAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::SelectionBaseAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x2dbf9bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectionBaseAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelectionBaseAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectionBaseAttribute(SelectionBaseAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectionBaseAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectionBaseAttribute(SelectionBaseAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SelectionBaseAttribute, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::SelectionBaseAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SelectionBaseAttribute*, "UnityEngine", "SelectionBaseAttribute");
