#pragma once
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
// Type: ::MissionStageLockView
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5552))
// CS Name: ::MissionStageLockView*
class CORDL_TYPE MissionStageLockView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _text, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text))::UnityW<::TMPro::TMP_Text> _text;

  /// @brief Field _rectTransform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__rectTransform, put = __cordl_internal_set__rectTransform))::UnityW<::UnityEngine::RectTransform> _rectTransform;

  /// @brief Field _dstPosY, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__dstPosY, put = __cordl_internal_set__dstPosY)) float_t _dstPosY;

  /// @brief Field _animationDuration, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__animationDuration, put = __cordl_internal_set__animationDuration)) float_t _animationDuration;

  /// @brief Field _startAnimationTime, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__startAnimationTime, put = __cordl_internal_set__startAnimationTime)) float_t _startAnimationTime;

  constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__text();

  constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__text() const;

  constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TMP_Text> value);

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

  constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr float_t& __cordl_internal_get__dstPosY();

  constexpr float_t const& __cordl_internal_get__dstPosY() const;

  constexpr void __cordl_internal_set__dstPosY(float_t value);

  constexpr float_t& __cordl_internal_get__animationDuration();

  constexpr float_t const& __cordl_internal_get__animationDuration() const;

  constexpr void __cordl_internal_set__animationDuration(float_t value);

  constexpr float_t& __cordl_internal_get__startAnimationTime();

  constexpr float_t const& __cordl_internal_get__startAnimationTime() const;

  constexpr void __cordl_internal_set__startAnimationTime(float_t value);

  /// @brief Method UpdateLocalPositionY, addr 0x22a2244, size 0x64, virtual false, abstract: false, final false
  inline void UpdateLocalPositionY(float_t dstPosY, bool animated, float_t animationDuration);

  /// @brief Method Update, addr 0x22a22a8, size 0xd0, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateStageLockText, addr 0x22a2378, size 0x24, virtual false, abstract: false, final false
  inline void UpdateStageLockText(::StringW text);

  static inline ::GlobalNamespace::MissionStageLockView* New_ctor();

  /// @brief Method .ctor, addr 0x22a239c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MissionStageLockView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionStageLockView(MissionStageLockView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionStageLockView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionStageLockView(MissionStageLockView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionStageLockView();

public:
  /// @brief Field _text, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::TMPro::TMP_Text> ____text;

  /// @brief Field _rectTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____rectTransform;

  /// @brief Field _dstPosY, offset: 0x28, size: 0x4, def value: None
  float_t ____dstPosY;

  /// @brief Field _animationDuration, offset: 0x2c, size: 0x4, def value: None
  float_t ____animationDuration;

  /// @brief Field _startAnimationTime, offset: 0x30, size: 0x4, def value: None
  float_t ____startAnimationTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionStageLockView, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionStageLockView, ____text) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionStageLockView, ____rectTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionStageLockView, ____dstPosY) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionStageLockView, ____animationDuration) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionStageLockView, ____startAnimationTime) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionStageLockView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionStageLockView*, "", "MissionStageLockView");
