#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRCursor_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRGazePointer)
namespace GlobalNamespace {
class OVRProgressIndicator;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRGazePointer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRGazePointer);
// Type: ::OVRGazePointer
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8048))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8065))
// CS Name: ::OVRGazePointer*
class CORDL_TYPE OVRGazePointer : public ::GlobalNamespace::OVRCursor {
public:
  // Declarations
  /// @brief Field gazeIcon, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_gazeIcon, put = __cordl_internal_set_gazeIcon))::UnityW<::UnityEngine::Transform> gazeIcon;

  /// @brief Field hideByDefault, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_hideByDefault, put = __cordl_internal_set_hideByDefault)) bool hideByDefault;

  /// @brief Field showTimeoutPeriod, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_showTimeoutPeriod, put = __cordl_internal_set_showTimeoutPeriod)) float_t showTimeoutPeriod;

  /// @brief Field hideTimeoutPeriod, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_hideTimeoutPeriod, put = __cordl_internal_set_hideTimeoutPeriod)) float_t hideTimeoutPeriod;

  /// @brief Field dimOnHideRequest, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_dimOnHideRequest, put = __cordl_internal_set_dimOnHideRequest)) bool dimOnHideRequest;

  /// @brief Field depthScaleMultiplier, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_depthScaleMultiplier, put = __cordl_internal_set_depthScaleMultiplier)) float_t depthScaleMultiplier;

  /// @brief Field matchNormalOnPhysicsColliders, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_matchNormalOnPhysicsColliders, put = __cordl_internal_set_matchNormalOnPhysicsColliders)) bool matchNormalOnPhysicsColliders;

  /// @brief Field rayTransform, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_rayTransform, put = __cordl_internal_set_rayTransform))::UnityW<::UnityEngine::Transform> rayTransform;

  /// @brief Field <hidden>k__BackingField, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__hidden_k__BackingField, put = __cordl_internal_set__hidden_k__BackingField)) bool _hidden_k__BackingField;

  /// @brief Field <currentScale>k__BackingField, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__currentScale_k__BackingField, put = __cordl_internal_set__currentScale_k__BackingField)) float_t _currentScale_k__BackingField;

  /// @brief Field depth, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_depth, put = __cordl_internal_set_depth)) float_t depth;

  /// @brief Field hideUntilTime, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_hideUntilTime, put = __cordl_internal_set_hideUntilTime)) float_t hideUntilTime;

  /// @brief Field positionSetsThisFrame, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_positionSetsThisFrame, put = __cordl_internal_set_positionSetsThisFrame)) int32_t positionSetsThisFrame;

  /// @brief Field lastShowRequestTime, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_lastShowRequestTime, put = __cordl_internal_set_lastShowRequestTime)) float_t lastShowRequestTime;

  /// @brief Field lastHideRequestTime, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_lastHideRequestTime, put = __cordl_internal_set_lastHideRequestTime)) float_t lastHideRequestTime;

  /// @brief Field progressIndicator, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_progressIndicator, put = __cordl_internal_set_progressIndicator))::UnityW<::GlobalNamespace::OVRProgressIndicator> progressIndicator;

  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance, put = setStaticF__instance))::UnityW<::GlobalNamespace::OVRGazePointer> _instance;

  __declspec(property(get = get_hidden, put = set_hidden)) bool hidden;

  __declspec(property(get = get_currentScale, put = set_currentScale)) float_t currentScale;

  __declspec(property(get = get_visibilityStrength)) float_t visibilityStrength;

  __declspec(property(get = get_SelectionProgress, put = set_SelectionProgress)) float_t SelectionProgress;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_gazeIcon();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_gazeIcon() const;

  constexpr void __cordl_internal_set_gazeIcon(::UnityW<::UnityEngine::Transform> value);

  constexpr bool& __cordl_internal_get_hideByDefault();

  constexpr bool const& __cordl_internal_get_hideByDefault() const;

  constexpr void __cordl_internal_set_hideByDefault(bool value);

  constexpr float_t& __cordl_internal_get_showTimeoutPeriod();

  constexpr float_t const& __cordl_internal_get_showTimeoutPeriod() const;

  constexpr void __cordl_internal_set_showTimeoutPeriod(float_t value);

  constexpr float_t& __cordl_internal_get_hideTimeoutPeriod();

  constexpr float_t const& __cordl_internal_get_hideTimeoutPeriod() const;

  constexpr void __cordl_internal_set_hideTimeoutPeriod(float_t value);

  constexpr bool& __cordl_internal_get_dimOnHideRequest();

  constexpr bool const& __cordl_internal_get_dimOnHideRequest() const;

  constexpr void __cordl_internal_set_dimOnHideRequest(bool value);

  constexpr float_t& __cordl_internal_get_depthScaleMultiplier();

  constexpr float_t const& __cordl_internal_get_depthScaleMultiplier() const;

  constexpr void __cordl_internal_set_depthScaleMultiplier(float_t value);

  constexpr bool& __cordl_internal_get_matchNormalOnPhysicsColliders();

  constexpr bool const& __cordl_internal_get_matchNormalOnPhysicsColliders() const;

  constexpr void __cordl_internal_set_matchNormalOnPhysicsColliders(bool value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rayTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rayTransform() const;

  constexpr void __cordl_internal_set_rayTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr bool& __cordl_internal_get__hidden_k__BackingField();

  constexpr bool const& __cordl_internal_get__hidden_k__BackingField() const;

  constexpr void __cordl_internal_set__hidden_k__BackingField(bool value);

  constexpr float_t& __cordl_internal_get__currentScale_k__BackingField();

  constexpr float_t const& __cordl_internal_get__currentScale_k__BackingField() const;

  constexpr void __cordl_internal_set__currentScale_k__BackingField(float_t value);

  constexpr float_t& __cordl_internal_get_depth();

  constexpr float_t const& __cordl_internal_get_depth() const;

  constexpr void __cordl_internal_set_depth(float_t value);

  constexpr float_t& __cordl_internal_get_hideUntilTime();

  constexpr float_t const& __cordl_internal_get_hideUntilTime() const;

  constexpr void __cordl_internal_set_hideUntilTime(float_t value);

  constexpr int32_t& __cordl_internal_get_positionSetsThisFrame();

  constexpr int32_t const& __cordl_internal_get_positionSetsThisFrame() const;

  constexpr void __cordl_internal_set_positionSetsThisFrame(int32_t value);

  constexpr float_t& __cordl_internal_get_lastShowRequestTime();

  constexpr float_t const& __cordl_internal_get_lastShowRequestTime() const;

  constexpr void __cordl_internal_set_lastShowRequestTime(float_t value);

  constexpr float_t& __cordl_internal_get_lastHideRequestTime();

  constexpr float_t const& __cordl_internal_get_lastHideRequestTime() const;

  constexpr void __cordl_internal_set_lastHideRequestTime(float_t value);

  constexpr ::UnityW<::GlobalNamespace::OVRProgressIndicator>& __cordl_internal_get_progressIndicator();

  constexpr ::UnityW<::GlobalNamespace::OVRProgressIndicator> const& __cordl_internal_get_progressIndicator() const;

  constexpr void __cordl_internal_set_progressIndicator(::UnityW<::GlobalNamespace::OVRProgressIndicator> value);

  static inline void setStaticF__instance(::UnityW<::GlobalNamespace::OVRGazePointer> value);

  static inline ::UnityW<::GlobalNamespace::OVRGazePointer> getStaticF__instance();

  /// @brief Method get_hidden, addr 0x27bc58c, size 0x8, virtual false, abstract: false, final false
  inline bool get_hidden();

  /// @brief Method set_hidden, addr 0x27bc594, size 0xc, virtual false, abstract: false, final false
  inline void set_hidden(bool value);

  /// @brief Method get_currentScale, addr 0x27bc5a0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_currentScale();

  /// @brief Method set_currentScale, addr 0x27bc5a8, size 0x8, virtual false, abstract: false, final false
  inline void set_currentScale(float_t value);

  /// @brief Method get_instance, addr 0x27bc5b0, size 0x214, virtual false, abstract: false, final false
  static inline ::UnityW<::GlobalNamespace::OVRGazePointer> get_instance();

  /// @brief Method get_visibilityStrength, addr 0x27bc7c4, size 0x9c, virtual false, abstract: false, final false
  inline float_t get_visibilityStrength();

  /// @brief Method get_SelectionProgress, addr 0x27bc860, size 0x78, virtual false, abstract: false, final false
  inline float_t get_SelectionProgress();

  /// @brief Method set_SelectionProgress, addr 0x27bc8d8, size 0x80, virtual false, abstract: false, final false
  inline void set_SelectionProgress(float_t value);

  /// @brief Method Awake, addr 0x27bc958, size 0x170, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Update, addr 0x27bcac8, size 0x194, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method SetCursorStartDest, addr 0x27bce90, size 0x1e0, virtual true, abstract: false, final false
  inline void SetCursorStartDest(::UnityEngine::Vector3 _, ::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 normal);

  /// @brief Method SetCursorRay, addr 0x27bd090, size 0x4, virtual true, abstract: false, final false
  inline void SetCursorRay(::UnityEngine::Transform* ray);

  /// @brief Method LateUpdate, addr 0x27bd094, size 0x178, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method RequestHide, addr 0x27bd20c, size 0x2c, virtual false, abstract: false, final false
  inline void RequestHide();

  /// @brief Method RequestShow, addr 0x27bd070, size 0x20, virtual false, abstract: false, final false
  inline void RequestShow();

  /// @brief Method Hide, addr 0x27bcc5c, size 0x11c, virtual false, abstract: false, final false
  inline void Hide();

  /// @brief Method Show, addr 0x27bcd78, size 0x118, virtual false, abstract: false, final false
  inline void Show();

  static inline ::GlobalNamespace::OVRGazePointer* New_ctor();

  /// @brief Method .ctor, addr 0x27bd238, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRGazePointer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRGazePointer(OVRGazePointer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRGazePointer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRGazePointer(OVRGazePointer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRGazePointer();

public:
  /// @brief Field gazeIcon, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___gazeIcon;

  /// @brief Field hideByDefault, offset: 0x20, size: 0x1, def value: None
  bool ___hideByDefault;

  /// @brief Field showTimeoutPeriod, offset: 0x24, size: 0x4, def value: None
  float_t ___showTimeoutPeriod;

  /// @brief Field hideTimeoutPeriod, offset: 0x28, size: 0x4, def value: None
  float_t ___hideTimeoutPeriod;

  /// @brief Field dimOnHideRequest, offset: 0x2c, size: 0x1, def value: None
  bool ___dimOnHideRequest;

  /// @brief Field depthScaleMultiplier, offset: 0x30, size: 0x4, def value: None
  float_t ___depthScaleMultiplier;

  /// @brief Field matchNormalOnPhysicsColliders, offset: 0x34, size: 0x1, def value: None
  bool ___matchNormalOnPhysicsColliders;

  /// @brief Field rayTransform, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rayTransform;

  /// @brief Field <hidden>k__BackingField, offset: 0x40, size: 0x1, def value: None
  bool ____hidden_k__BackingField;

  /// @brief Field <currentScale>k__BackingField, offset: 0x44, size: 0x4, def value: None
  float_t ____currentScale_k__BackingField;

  /// @brief Field depth, offset: 0x48, size: 0x4, def value: None
  float_t ___depth;

  /// @brief Field hideUntilTime, offset: 0x4c, size: 0x4, def value: None
  float_t ___hideUntilTime;

  /// @brief Field positionSetsThisFrame, offset: 0x50, size: 0x4, def value: None
  int32_t ___positionSetsThisFrame;

  /// @brief Field lastShowRequestTime, offset: 0x54, size: 0x4, def value: None
  float_t ___lastShowRequestTime;

  /// @brief Field lastHideRequestTime, offset: 0x58, size: 0x4, def value: None
  float_t ___lastHideRequestTime;

  /// @brief Field progressIndicator, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRProgressIndicator> ___progressIndicator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGazePointer, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGazePointer, ___gazeIcon) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGazePointer, ___hideByDefault) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGazePointer, ___showTimeoutPeriod) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGazePointer, ___hideTimeoutPeriod) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGazePointer, ___dimOnHideRequest) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGazePointer, ___depthScaleMultiplier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGazePointer, ___matchNormalOnPhysicsColliders) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGazePointer, ___rayTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGazePointer, ____hidden_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGazePointer, ____currentScale_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGazePointer, ___depth) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGazePointer, ___hideUntilTime) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGazePointer, ___positionSetsThisFrame) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGazePointer, ___lastShowRequestTime) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGazePointer, ___lastHideRequestTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGazePointer, ___progressIndicator) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRGazePointer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGazePointer*, "", "OVRGazePointer");
