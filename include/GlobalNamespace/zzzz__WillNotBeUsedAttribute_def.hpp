#pragma once
// IWYU pragma private; include "GlobalNamespace/WillNotBeUsedAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(WillNotBeUsedAttribute)
// Forward declare root types
namespace GlobalNamespace {
class WillNotBeUsedAttribute;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::WillNotBeUsedAttribute);
// Type: ::WillNotBeUsedAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::WillNotBeUsedAttribute*
class CORDL_TYPE WillNotBeUsedAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  static inline ::GlobalNamespace::WillNotBeUsedAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x2269868, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WillNotBeUsedAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WillNotBeUsedAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WillNotBeUsedAttribute(WillNotBeUsedAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WillNotBeUsedAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WillNotBeUsedAttribute(WillNotBeUsedAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19063 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::WillNotBeUsedAttribute, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::WillNotBeUsedAttribute);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WillNotBeUsedAttribute*, "", "WillNotBeUsedAttribute");
