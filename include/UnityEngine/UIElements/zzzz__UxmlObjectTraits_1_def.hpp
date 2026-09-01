#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UxmlObjectTraits_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseUxmlTraits_def.hpp"
CORDL_MODULE_EXPORT(UxmlObjectTraits_1)
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class UxmlObjectTraits_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::UIElements::UxmlObjectTraits_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::UIElements::UxmlObjectTraits_1, "UnityEngine.UIElements", "UxmlObjectTraits`1");
// Dependencies UnityEngine.UIElements.BaseUxmlTraits
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlObjectTraits`1<T>
class CORDL_TYPE UxmlObjectTraits_1 : public ::UnityEngine::UIElements::BaseUxmlTraits {
public:
  // Declarations
  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init(::by_ref<T> obj, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::UxmlObjectTraits_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlObjectTraits_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlObjectTraits_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlObjectTraits_1(UxmlObjectTraits_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlObjectTraits_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlObjectTraits_1(UxmlObjectTraits_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5178 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
