#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/FrameRateFieldAttribute.hpp"
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
// Dependencies UnityEngine.PropertyAttribute
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.FrameRateFieldAttribute
class CORDL_TYPE FrameRateFieldAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  static inline ::UnityEngine::Timeline::FrameRateFieldAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x67ab394, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FrameRateFieldAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FrameRateFieldAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FrameRateFieldAttribute(FrameRateFieldAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FrameRateFieldAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FrameRateFieldAttribute(FrameRateFieldAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18885 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::FrameRateFieldAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::FrameRateFieldAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::FrameRateFieldAttribute*, "UnityEngine.Timeline", "FrameRateFieldAttribute");
