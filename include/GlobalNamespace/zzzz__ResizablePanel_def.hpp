#pragma once
// IWYU pragma private; include "GlobalNamespace/ResizablePanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ResizablePanel)
namespace Tweening {
class TimeTweeningManager;
}
namespace Tweening {
class Vector2Tween;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class ResizablePanel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ResizablePanel);
// Type: ::ResizablePanel
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ResizablePanel*
class CORDL_TYPE ResizablePanel : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _rectTransform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__rectTransform, put = __cordl_internal_set__rectTransform)) ::UnityW<::UnityEngine::RectTransform> _rectTransform;

  /// @brief Field _resizeTween, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__resizeTween, put = __cordl_internal_set__resizeTween)) ::Tweening::Vector2Tween* _resizeTween;

  /// @brief Field _tweeningManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManager, put = __cordl_internal_set__tweeningManager)) ::UnityW<::Tweening::TimeTweeningManager> _tweeningManager;

  static inline ::GlobalNamespace::ResizablePanel* New_ctor();

  /// @brief Method OnDestroy, addr 0x397d79c, size 0x88, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Resize, addr 0x397d824, size 0x1a0, virtual false, abstract: false, final false
  inline void Resize(::UnityEngine::Vector2 size, float_t duration);

  /// @brief Method SetSize, addr 0x397d9c4, size 0x1c, virtual false, abstract: false, final false
  inline void SetSize(::UnityEngine::Vector2 size);

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform();

  constexpr ::Tweening::Vector2Tween*& __cordl_internal_get__resizeTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::Vector2Tween*> const& __cordl_internal_get__resizeTween() const;

  constexpr ::UnityW<::Tweening::TimeTweeningManager> const& __cordl_internal_get__tweeningManager() const;

  constexpr ::UnityW<::Tweening::TimeTweeningManager>& __cordl_internal_get__tweeningManager();

  constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__resizeTween(::Tweening::Vector2Tween* value);

  constexpr void __cordl_internal_set__tweeningManager(::UnityW<::Tweening::TimeTweeningManager> value);

  /// @brief Method .ctor, addr 0x397d9e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResizablePanel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResizablePanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResizablePanel(ResizablePanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResizablePanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResizablePanel(ResizablePanel const&) = delete;

  /// @brief Field _rectTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____rectTransform;

  /// @brief Field _tweeningManager, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::Tweening::TimeTweeningManager> ____tweeningManager;

  /// @brief Field _resizeTween, offset: 0x30, size: 0x8, def value: None
  ::Tweening::Vector2Tween* ____resizeTween;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15956 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ResizablePanel, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ResizablePanel, ____rectTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResizablePanel, ____tweeningManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResizablePanel, ____resizeTween) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ResizablePanel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ResizablePanel*, "", "ResizablePanel");
