#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ProgressBar.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__AbstractProgressBar_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
CORDL_MODULE_EXPORT(ProgressBar)
namespace UnityEngine::UIElements {
class AbstractProgressBar_UxmlTraits;
}
namespace UnityEngine::UIElements {
class ProgressBar_UxmlFactory;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ProgressBar;
}
namespace UnityEngine::UIElements {
class ProgressBar_UxmlFactory;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ProgressBar);
MARK_REF_PTR_T(::UnityEngine::UIElements::ProgressBar_UxmlFactory);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ProgressBar/UxmlFactory
class CORDL_TYPE ProgressBar_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::ProgressBar*, ::UnityEngine::UIElements::AbstractProgressBar_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::ProgressBar_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x4a06038, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProgressBar_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProgressBar_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProgressBar_UxmlFactory(ProgressBar_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProgressBar_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProgressBar_UxmlFactory(ProgressBar_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5672 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ProgressBar_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.AbstractProgressBar
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ProgressBar
class CORDL_TYPE ProgressBar : public ::UnityEngine::UIElements::AbstractProgressBar {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::ProgressBar_UxmlFactory;

  static inline ::UnityEngine::UIElements::ProgressBar* New_ctor();

  /// @brief Method .ctor, addr 0x4a05fe4, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProgressBar();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProgressBar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProgressBar(ProgressBar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProgressBar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProgressBar(ProgressBar const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5673 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ProgressBar, 0x400>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ProgressBar);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ProgressBar*, "UnityEngine.UIElements", "ProgressBar");
NEED_NO_BOX(::UnityEngine::UIElements::ProgressBar_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ProgressBar_UxmlFactory*, "UnityEngine.UIElements", "ProgressBar/UxmlFactory");
