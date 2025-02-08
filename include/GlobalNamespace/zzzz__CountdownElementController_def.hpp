#pragma once
// IWYU pragma private; include "GlobalNamespace/CountdownElementController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CountdownElementController)
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class Animation;
}
// Forward declare root types
namespace GlobalNamespace {
class CountdownElementController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CountdownElementController);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CountdownElementController
class CORDL_TYPE CountdownElementController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _animation, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__animation, put = __cordl_internal_set__animation)) ::UnityW<::UnityEngine::Animation> _animation;

  /// @brief Field _text, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text)) ::UnityW<::TMPro::TextMeshProUGUI> _text;

  static inline ::GlobalNamespace::CountdownElementController* New_ctor();

  /// @brief Method SetTextAndRunAnimation, addr 0x3c119d8, size 0x64, virtual false, abstract: false, final false
  inline void SetTextAndRunAnimation(::StringW text);

  /// @brief Method StopAndHide, addr 0x3c11b30, size 0x24, virtual false, abstract: false, final false
  inline void StopAndHide();

  constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get__animation() const;

  constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get__animation();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__text() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__text();

  constexpr void __cordl_internal_set__animation(::UnityW<::UnityEngine::Animation> value);

  constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x3c11cb8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CountdownElementController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CountdownElementController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CountdownElementController(CountdownElementController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CountdownElementController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CountdownElementController(CountdownElementController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4831 };

  /// @brief Field _text, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____text;

  /// @brief Field _animation, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animation> ____animation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CountdownElementController, ____text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountdownElementController, ____animation) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CountdownElementController, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CountdownElementController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CountdownElementController*, "", "CountdownElementController");
