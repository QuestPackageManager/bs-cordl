#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(FrameRateFieldAttribute)
// Forward declare root types
namespace UnityEngine::Timeline {
class FrameRateFieldAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::FrameRateFieldAttribute);
// Type: UnityEngine.Timeline::FrameRateFieldAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10098))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14194))
// CS Name: ::UnityEngine.Timeline::FrameRateFieldAttribute*
class CORDL_TYPE FrameRateFieldAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  static inline ::UnityEngine::Timeline::FrameRateFieldAttribute* New_ctor();

  /// @brief Method .ctor addr 0x2aeaa3c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FrameRateFieldAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FrameRateFieldAttribute(FrameRateFieldAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FrameRateFieldAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FrameRateFieldAttribute(FrameRateFieldAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FrameRateFieldAttribute();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::FrameRateFieldAttribute, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::FrameRateFieldAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::FrameRateFieldAttribute*, "UnityEngine.Timeline", "FrameRateFieldAttribute");
