#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PanelAnimationSO)
namespace System {
class Action;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace HMUI {
class PanelAnimationSO;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::PanelAnimationSO);
// Type: HMUI::PanelAnimationSO
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::PanelAnimationSO*
class CORDL_TYPE PanelAnimationSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _alphaAnimationCurve, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__alphaAnimationCurve, put = __cordl_internal_set__alphaAnimationCurve))::UnityEngine::AnimationCurve* _alphaAnimationCurve;

  /// @brief Field _duration, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__duration, put = __cordl_internal_set__duration)) float_t _duration;

  /// @brief Field _parentAlphaAnimationCurve, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__parentAlphaAnimationCurve, put = __cordl_internal_set__parentAlphaAnimationCurve))::UnityEngine::AnimationCurve* _parentAlphaAnimationCurve;

  /// @brief Field _scaleXAnimationCurve, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__scaleXAnimationCurve, put = __cordl_internal_set__scaleXAnimationCurve))::UnityEngine::AnimationCurve* _scaleXAnimationCurve;

  /// @brief Field _scaleYAnimationCurve, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__scaleYAnimationCurve, put = __cordl_internal_set__scaleYAnimationCurve))::UnityEngine::AnimationCurve* _scaleYAnimationCurve;

  /// @brief Method ExecuteAnimation, addr 0x227a144, size 0x10, virtual false, abstract: false, final false
  inline void ExecuteAnimation(::UnityEngine::GameObject* go);

  /// @brief Method ExecuteAnimation, addr 0x227a220, size 0x10, virtual false, abstract: false, final false
  inline void ExecuteAnimation(::UnityEngine::GameObject* go, ::System::Action* finishedCallback);

  /// @brief Method ExecuteAnimation, addr 0x227a230, size 0xc, virtual false, abstract: false, final false
  inline void ExecuteAnimation(::UnityEngine::GameObject* go, ::UnityEngine::CanvasGroup* parentCanvasGroup, ::System::Action* finishedCallback);

  /// @brief Method ExecuteAnimation, addr 0x227a154, size 0xcc, virtual false, abstract: false, final false
  inline void ExecuteAnimation(::UnityEngine::GameObject* go, ::UnityEngine::CanvasGroup* parentCanvasGroup, bool instant, ::System::Action* finishedCallback);

  static inline ::HMUI::PanelAnimationSO* New_ctor();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__alphaAnimationCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get__alphaAnimationCurve() const;

  constexpr float_t const& __cordl_internal_get__duration() const;

  constexpr float_t& __cordl_internal_get__duration();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__parentAlphaAnimationCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get__parentAlphaAnimationCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__scaleXAnimationCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get__scaleXAnimationCurve() const;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__scaleYAnimationCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get__scaleYAnimationCurve() const;

  constexpr void __cordl_internal_set__alphaAnimationCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__duration(float_t value);

  constexpr void __cordl_internal_set__parentAlphaAnimationCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__scaleXAnimationCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__scaleYAnimationCurve(::UnityEngine::AnimationCurve* value);

  /// @brief Method .ctor, addr 0x227a23c, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PanelAnimationSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PanelAnimationSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PanelAnimationSO(PanelAnimationSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PanelAnimationSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PanelAnimationSO(PanelAnimationSO const&) = delete;

  /// @brief Field _duration, offset: 0x18, size: 0x4, def value: None
  float_t ____duration;

  /// @brief Field _scaleXAnimationCurve, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____scaleXAnimationCurve;

  /// @brief Field _scaleYAnimationCurve, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____scaleYAnimationCurve;

  /// @brief Field _alphaAnimationCurve, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____alphaAnimationCurve;

  /// @brief Field _parentAlphaAnimationCurve, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____parentAlphaAnimationCurve;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::PanelAnimationSO, 0x40>, "Size mismatch!");

static_assert(offsetof(::HMUI::PanelAnimationSO, ____duration) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::PanelAnimationSO, ____scaleXAnimationCurve) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::PanelAnimationSO, ____scaleYAnimationCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::PanelAnimationSO, ____alphaAnimationCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::PanelAnimationSO, ____parentAlphaAnimationCurve) == 0x38, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::PanelAnimationSO);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::PanelAnimationSO*, "HMUI", "PanelAnimationSO");
