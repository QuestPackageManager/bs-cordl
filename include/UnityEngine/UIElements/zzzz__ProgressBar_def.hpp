#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__AbstractProgressBar_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
CORDL_MODULE_EXPORT(ProgressBar)
namespace UnityEngine::UIElements {
class __AbstractProgressBar__UxmlTraits;
}
namespace UnityEngine::UIElements {
class __ProgressBar__UxmlFactory;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ProgressBar;
}
namespace UnityEngine::UIElements {
class __ProgressBar__UxmlFactory;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ProgressBar);
MARK_REF_PTR_T(::UnityEngine::UIElements::__ProgressBar__UxmlFactory);
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::ProgressBar::UxmlFactory*
class CORDL_TYPE __ProgressBar__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::ProgressBar*, ::UnityEngine::UIElements::__AbstractProgressBar__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__ProgressBar__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x3385960, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProgressBar__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ProgressBar__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ProgressBar__UxmlFactory(__ProgressBar__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ProgressBar__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ProgressBar__UxmlFactory(__ProgressBar__UxmlFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__ProgressBar__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::ProgressBar
// SizeInfo { instance_size: 1000, native_size: -1, calculated_instance_size: 1000, calculated_native_size: 996, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::ProgressBar*
class CORDL_TYPE ProgressBar : public ::UnityEngine::UIElements::AbstractProgressBar {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::__ProgressBar__UxmlFactory;

  static inline ::UnityEngine::UIElements::ProgressBar* New_ctor();

  /// @brief Method .ctor, addr 0x338590c, size 0x54, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ProgressBar, 0x3e8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ProgressBar);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ProgressBar*, "UnityEngine.UIElements", "ProgressBar");
NEED_NO_BOX(::UnityEngine::UIElements::__ProgressBar__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__ProgressBar__UxmlFactory*, "UnityEngine.UIElements", "ProgressBar/UxmlFactory");
