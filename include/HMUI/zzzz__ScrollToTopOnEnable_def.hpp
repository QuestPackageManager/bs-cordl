#pragma once
// IWYU pragma private; include "HMUI/ScrollToTopOnEnable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ScrollToTopOnEnable)
namespace HMUI {
class ScrollView;
}
// Forward declare root types
namespace HMUI {
class ScrollToTopOnEnable;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ScrollToTopOnEnable);
// Dependencies UnityEngine.MonoBehaviour
namespace HMUI {
// Is value type: false
// CS Name: HMUI.ScrollToTopOnEnable
class CORDL_TYPE ScrollToTopOnEnable : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _scrollView, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__scrollView, put = __cordl_internal_set__scrollView)) ::UnityW<::HMUI::ScrollView> _scrollView;

  static inline ::HMUI::ScrollToTopOnEnable* New_ctor();

  /// @brief Method OnEnable, addr 0x39fa68c, size 0x20, virtual false, abstract: false, final false
  inline void OnEnable();

  constexpr ::UnityW<::HMUI::ScrollView> const& __cordl_internal_get__scrollView() const;

  constexpr ::UnityW<::HMUI::ScrollView>& __cordl_internal_get__scrollView();

  constexpr void __cordl_internal_set__scrollView(::UnityW<::HMUI::ScrollView> value);

  /// @brief Method .ctor, addr 0x39fa770, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScrollToTopOnEnable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScrollToTopOnEnable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScrollToTopOnEnable(ScrollToTopOnEnable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScrollToTopOnEnable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScrollToTopOnEnable(ScrollToTopOnEnable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16085 };

  /// @brief Field _scrollView, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::ScrollView> ____scrollView;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::ScrollToTopOnEnable, ____scrollView) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::ScrollToTopOnEnable, 0x28>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ScrollToTopOnEnable);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ScrollToTopOnEnable*, "HMUI", "ScrollToTopOnEnable");
