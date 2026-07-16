#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/NotKeyableAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NotKeyableAttribute)
// Forward declare root types
namespace UnityEngine::Timeline {
class NotKeyableAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::Timeline::NotKeyableAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Timeline::NotKeyableAttribute*, "UnityEngine.Timeline", "NotKeyableAttribute");
// Dependencies System.Attribute
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.NotKeyableAttribute
class CORDL_TYPE NotKeyableAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::Timeline::NotKeyableAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x69c5bf0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NotKeyableAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NotKeyableAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NotKeyableAttribute(NotKeyableAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NotKeyableAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NotKeyableAttribute(NotKeyableAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19066 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Timeline::NotKeyableAttribute) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Timeline
