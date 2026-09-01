#pragma once
// IWYU pragma private; include "GlobalNamespace\CompositeElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CompositeElement)
// Forward declare root types
namespace GlobalNamespace {
class CompositeElement;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CompositeElement*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CompositeElement*, "", "CompositeElement");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CompositeElement
class CORDL_TYPE CompositeElement : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::CompositeElement* New_ctor();

  /// @brief Method .ctor, addr 0x598db00, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompositeElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompositeElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompositeElement(CompositeElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompositeElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompositeElement(CompositeElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5820 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CompositeElement) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
