#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlFactory_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
CORDL_MODULE_EXPORT(UxmlFactory_1)
namespace UnityEngine::UIElements {
class VisualElement_UxmlTraits;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename TCreatedType> class UxmlFactory_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::UxmlFactory_1);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// cpp template
template <typename TCreatedType>
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlFactory`1<TCreatedType>
class CORDL_TYPE UxmlFactory_1 : public ::UnityEngine::UIElements::UxmlFactory_2<TCreatedType, ::UnityEngine::UIElements::VisualElement_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::UxmlFactory_1<TCreatedType>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlFactory_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlFactory_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlFactory_1(UxmlFactory_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlFactory_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlFactory_1(UxmlFactory_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5186 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UxmlFactory_1, "UnityEngine.UIElements", "UxmlFactory`1");
