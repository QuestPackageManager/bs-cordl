#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionStageLockView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MissionStageLockView)
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionStageLockView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionStageLockView);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionStageLockView
class CORDL_TYPE MissionStageLockView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _animationDuration, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__animationDuration, put = __cordl_internal_set__animationDuration)) float_t _animationDuration;

  /// @brief Field _dstPosY, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__dstPosY, put = __cordl_internal_set__dstPosY)) float_t _dstPosY;

  /// @brief Field _rectTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__rectTransform, put = __cordl_internal_set__rectTransform)) ::UnityW<::UnityEngine::RectTransform> _rectTransform;

  /// @brief Field _startAnimationTime, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__startAnimationTime, put = __cordl_internal_set__startAnimationTime)) float_t _startAnimationTime;

  /// @brief Field _text, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text)) ::UnityW<::TMPro::TMP_Text> _text;

  static inline ::GlobalNamespace::MissionStageLockView* New_ctor();

  /// @brief Method Update, addr 0x3c0e76c, size 0xd0, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateLocalPositionY, addr 0x3c0e708, size 0x64, virtual false, abstract: false, final false
  inline void UpdateLocalPositionY(float_t dstPosY, bool animated, float_t animationDuration);

  /// @brief Method UpdateStageLockText, addr 0x3c0e83c, size 0x24, virtual false, abstract: false, final false
  inline void UpdateStageLockText(::StringW text);

  constexpr float_t const& __cordl_internal_get__animationDuration() const;

  constexpr float_t& __cordl_internal_get__animationDuration();

  constexpr float_t const& __cordl_internal_get__dstPosY() const;

  constexpr float_t& __cordl_internal_get__dstPosY();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform();

  constexpr float_t const& __cordl_internal_get__startAnimationTime() const;

  constexpr float_t& __cordl_internal_get__startAnimationTime();

  constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__text() const;

  constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__text();

  constexpr void __cordl_internal_set__animationDuration(float_t value);

  constexpr void __cordl_internal_set__dstPosY(float_t value);

  constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__startAnimationTime(float_t value);

  constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TMP_Text> value);

  /// @brief Method .ctor, addr 0x3c0e860, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionStageLockView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionStageLockView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionStageLockView(MissionStageLockView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionStageLockView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionStageLockView(MissionStageLockView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4826 };

  /// @brief Field _text, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_Text> ____text;

  /// @brief Field _rectTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____rectTransform;

  /// @brief Field _dstPosY, offset: 0x30, size: 0x4, def value: None
  float_t ____dstPosY;

  /// @brief Field _animationDuration, offset: 0x34, size: 0x4, def value: None
  float_t ____animationDuration;

  /// @brief Field _startAnimationTime, offset: 0x38, size: 0x4, def value: None
  float_t ____startAnimationTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MissionStageLockView, ____text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionStageLockView, ____rectTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionStageLockView, ____dstPosY) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionStageLockView, ____animationDuration) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionStageLockView, ____startAnimationTime) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionStageLockView, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionStageLockView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionStageLockView*, "", "MissionStageLockView");
