#pragma once
// IWYU pragma private; include "UnityEngine/VFX/EventAttributeColor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/zzzz__EventAttributeVector3_def.hpp"
CORDL_MODULE_EXPORT(EventAttributeColor)
// Forward declare root types
namespace UnityEngine::VFX {
class EventAttributeColor;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::EventAttributeColor*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::EventAttributeColor*, "UnityEngine.VFX", "EventAttributeColor");
// Dependencies UnityEngine.VFX.EventAttributeVector3
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.EventAttributeColor
class CORDL_TYPE EventAttributeColor : public ::UnityEngine::VFX::EventAttributeVector3 {
public:
  // Declarations
  static inline ::UnityEngine::VFX::EventAttributeColor* New_ctor();

  /// @brief Method .ctor, addr 0x69cda38, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventAttributeColor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventAttributeColor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventAttributeColor(EventAttributeColor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventAttributeColor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventAttributeColor(EventAttributeColor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19910 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::VFX::EventAttributeColor) == 0x38, "Size mismatch!");

} // namespace UnityEngine::VFX
