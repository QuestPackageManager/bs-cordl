#pragma once
// IWYU pragma private; include "HMUI/VerticalScrollIndicator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VerticalScrollIndicator)
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace HMUI {
class VerticalScrollIndicator;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::VerticalScrollIndicator);
// Type: HMUI::VerticalScrollIndicator
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::VerticalScrollIndicator*
class CORDL_TYPE VerticalScrollIndicator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _disabledAnimationClip, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__disabledAnimationClip, put = __cordl_internal_set__disabledAnimationClip))::UnityW<::UnityEngine::AnimationClip> _disabledAnimationClip;

  /// @brief Field _handle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__handle, put = __cordl_internal_set__handle))::UnityW<::UnityEngine::RectTransform> _handle;

  /// @brief Field _normalAnimationClip, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__normalAnimationClip, put = __cordl_internal_set__normalAnimationClip))::UnityW<::UnityEngine::AnimationClip> _normalAnimationClip;

  /// @brief Field _normalizedPageHeight, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__normalizedPageHeight, put = __cordl_internal_set__normalizedPageHeight)) float_t _normalizedPageHeight;

  /// @brief Field _padding, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__padding, put = __cordl_internal_set__padding)) float_t _padding;

  /// @brief Field _progress, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__progress, put = __cordl_internal_set__progress)) float_t _progress;

  __declspec(property(put = set_disabled)) bool disabled;

  __declspec(property(get = get_normalizedPageHeight, put = set_normalizedPageHeight)) float_t normalizedPageHeight;

  __declspec(property(get = get_progress, put = set_progress)) float_t progress;

  static inline ::HMUI::VerticalScrollIndicator* New_ctor();

  /// @brief Method OnEnable, addr 0x252eb50, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method RefreshHandle, addr 0x252ea10, size 0xf0, virtual false, abstract: false, final false
  inline void RefreshHandle();

  constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__disabledAnimationClip() const;

  constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__disabledAnimationClip();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__handle() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__handle();

  constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__normalAnimationClip() const;

  constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__normalAnimationClip();

  constexpr float_t const& __cordl_internal_get__normalizedPageHeight() const;

  constexpr float_t& __cordl_internal_get__normalizedPageHeight();

  constexpr float_t const& __cordl_internal_get__padding() const;

  constexpr float_t& __cordl_internal_get__padding();

  constexpr float_t const& __cordl_internal_get__progress() const;

  constexpr float_t& __cordl_internal_get__progress();

  constexpr void __cordl_internal_set__disabledAnimationClip(::UnityW<::UnityEngine::AnimationClip> value);

  constexpr void __cordl_internal_set__handle(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__normalAnimationClip(::UnityW<::UnityEngine::AnimationClip> value);

  constexpr void __cordl_internal_set__normalizedPageHeight(float_t value);

  constexpr void __cordl_internal_set__padding(float_t value);

  constexpr void __cordl_internal_set__progress(float_t value);

  /// @brief Method .ctor, addr 0x252eb54, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_normalizedPageHeight, addr 0x252eb08, size 0x8, virtual false, abstract: false, final false
  inline float_t get_normalizedPageHeight();

  /// @brief Method get_progress, addr 0x252eb00, size 0x8, virtual false, abstract: false, final false
  inline float_t get_progress();

  /// @brief Method set_disabled, addr 0x252eb10, size 0x40, virtual false, abstract: false, final false
  inline void set_disabled(bool value);

  /// @brief Method set_normalizedPageHeight, addr 0x25282c0, size 0x2c, virtual false, abstract: false, final false
  inline void set_normalizedPageHeight(float_t value);

  /// @brief Method set_progress, addr 0x2528528, size 0x2c, virtual false, abstract: false, final false
  inline void set_progress(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VerticalScrollIndicator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VerticalScrollIndicator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VerticalScrollIndicator(VerticalScrollIndicator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VerticalScrollIndicator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VerticalScrollIndicator(VerticalScrollIndicator const&) = delete;

  /// @brief Field _handle, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____handle;

  /// @brief Field _normalAnimationClip, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ____normalAnimationClip;

  /// @brief Field _disabledAnimationClip, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ____disabledAnimationClip;

  /// @brief Field _padding, offset: 0x30, size: 0x4, def value: None
  float_t ____padding;

  /// @brief Field _progress, offset: 0x34, size: 0x4, def value: None
  float_t ____progress;

  /// @brief Field _normalizedPageHeight, offset: 0x38, size: 0x4, def value: None
  float_t ____normalizedPageHeight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::VerticalScrollIndicator, 0x40>, "Size mismatch!");

static_assert(offsetof(::HMUI::VerticalScrollIndicator, ____handle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::VerticalScrollIndicator, ____normalAnimationClip) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::VerticalScrollIndicator, ____disabledAnimationClip) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::VerticalScrollIndicator, ____padding) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::VerticalScrollIndicator, ____progress) == 0x34, "Offset mismatch!");

static_assert(offsetof(::HMUI::VerticalScrollIndicator, ____normalizedPageHeight) == 0x38, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::VerticalScrollIndicator);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::VerticalScrollIndicator*, "HMUI", "VerticalScrollIndicator");
