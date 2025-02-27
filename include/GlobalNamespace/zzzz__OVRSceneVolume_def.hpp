#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneVolume.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IOVRSceneComponent_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OVRSceneVolume)
namespace GlobalNamespace {
class OVRSceneAnchor;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRSceneVolume;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneVolume);
// Dependencies IOVRSceneComponent, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSceneVolume
class CORDL_TYPE OVRSceneVolume : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_Depth, put = set_Depth)) float_t Depth;

  __declspec(property(get = get_Dimensions)) ::UnityEngine::Vector3 Dimensions;

  __declspec(property(get = get_Height, put = set_Height)) float_t Height;

  __declspec(property(get = get_Offset, put = set_Offset)) ::UnityEngine::Vector3 Offset;

  __declspec(property(get = get_OffsetChildren, put = set_OffsetChildren)) bool OffsetChildren;

  __declspec(property(get = get_ScaleChildren, put = set_ScaleChildren)) bool ScaleChildren;

  __declspec(property(get = get_Width, put = set_Width)) float_t Width;

  /// @brief Field <Depth>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__Depth_k__BackingField, put = __cordl_internal_set__Depth_k__BackingField)) float_t _Depth_k__BackingField;

  /// @brief Field <Height>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__Height_k__BackingField, put = __cordl_internal_set__Height_k__BackingField)) float_t _Height_k__BackingField;

  /// @brief Field <Offset>k__BackingField, offset 0x2c, size 0xc
  __declspec(property(get = __cordl_internal_get__Offset_k__BackingField, put = __cordl_internal_set__Offset_k__BackingField)) ::UnityEngine::Vector3 _Offset_k__BackingField;

  /// @brief Field <Width>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__Width_k__BackingField, put = __cordl_internal_set__Width_k__BackingField)) float_t _Width_k__BackingField;

  /// @brief Field _offsetChildren, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get__offsetChildren, put = __cordl_internal_set__offsetChildren)) bool _offsetChildren;

  /// @brief Field _scaleChildren, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__scaleChildren, put = __cordl_internal_set__scaleChildren)) bool _scaleChildren;

  /// @brief Field _sceneAnchor, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneAnchor, put = __cordl_internal_set__sceneAnchor)) ::UnityW<::GlobalNamespace::OVRSceneAnchor> _sceneAnchor;

  /// @brief Convert operator to "::GlobalNamespace::IOVRSceneComponent"
  constexpr operator ::GlobalNamespace::IOVRSceneComponent*() noexcept;

  /// @brief Method Awake, addr 0x402054c, size 0xd4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method IOVRSceneComponent.Initialize, addr 0x4020620, size 0x4, virtual true, abstract: false, final true
  inline void IOVRSceneComponent_Initialize();

  static inline ::GlobalNamespace::OVRSceneVolume* New_ctor();

  /// @brief Method SetChildOffset, addr 0x402046c, size 0xe0, virtual false, abstract: false, final false
  inline void SetChildOffset();

  /// @brief Method SetChildScale, addr 0x4020350, size 0xe0, virtual false, abstract: false, final false
  inline void SetChildScale();

  /// @brief Method UpdateTransform, addr 0x401960c, size 0x1d8, virtual false, abstract: false, final false
  inline void UpdateTransform();

  constexpr float_t const& __cordl_internal_get__Depth_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__Depth_k__BackingField();

  constexpr float_t const& __cordl_internal_get__Height_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__Height_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__Offset_k__BackingField() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__Offset_k__BackingField();

  constexpr float_t const& __cordl_internal_get__Width_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__Width_k__BackingField();

  constexpr bool const& __cordl_internal_get__offsetChildren() const;

  constexpr bool& __cordl_internal_get__offsetChildren();

  constexpr bool const& __cordl_internal_get__scaleChildren() const;

  constexpr bool& __cordl_internal_get__scaleChildren();

  constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor> const& __cordl_internal_get__sceneAnchor() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor>& __cordl_internal_get__sceneAnchor();

  constexpr void __cordl_internal_set__Depth_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__Height_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__Offset_k__BackingField(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__Width_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__offsetChildren(bool value);

  constexpr void __cordl_internal_set__scaleChildren(bool value);

  constexpr void __cordl_internal_set__sceneAnchor(::UnityW<::GlobalNamespace::OVRSceneAnchor> value);

  /// @brief Method .ctor, addr 0x4020624, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Depth, addr 0x40202e0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Depth();

  /// @brief Method get_Dimensions, addr 0x40202f0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_Dimensions();

  /// @brief Method get_Height, addr 0x40202d0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Height();

  /// @brief Method get_Offset, addr 0x40202fc, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_Offset();

  /// @brief Method get_OffsetChildren, addr 0x4020430, size 0x8, virtual false, abstract: false, final false
  inline bool get_OffsetChildren();

  /// @brief Method get_ScaleChildren, addr 0x4020314, size 0x8, virtual false, abstract: false, final false
  inline bool get_ScaleChildren();

  /// @brief Method get_Width, addr 0x40202c0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Width();

  /// @brief Convert to "::GlobalNamespace::IOVRSceneComponent"
  constexpr ::GlobalNamespace::IOVRSceneComponent* i___GlobalNamespace__IOVRSceneComponent() noexcept;

  /// @brief Method set_Depth, addr 0x40202e8, size 0x8, virtual false, abstract: false, final false
  inline void set_Depth(float_t value);

  /// @brief Method set_Height, addr 0x40202d8, size 0x8, virtual false, abstract: false, final false
  inline void set_Height(float_t value);

  /// @brief Method set_Offset, addr 0x4020308, size 0xc, virtual false, abstract: false, final false
  inline void set_Offset(::UnityEngine::Vector3 value);

  /// @brief Method set_OffsetChildren, addr 0x4020438, size 0x34, virtual false, abstract: false, final false
  inline void set_OffsetChildren(bool value);

  /// @brief Method set_ScaleChildren, addr 0x402031c, size 0x34, virtual false, abstract: false, final false
  inline void set_ScaleChildren(bool value);

  /// @brief Method set_Width, addr 0x40202c8, size 0x8, virtual false, abstract: false, final false
  inline void set_Width(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneVolume();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneVolume", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSceneVolume(OVRSceneVolume&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneVolume", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSceneVolume(OVRSceneVolume const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8298 };

  /// @brief Field <Width>k__BackingField, offset: 0x20, size: 0x4, def value: None
  float_t ____Width_k__BackingField;

  /// @brief Field <Height>k__BackingField, offset: 0x24, size: 0x4, def value: None
  float_t ____Height_k__BackingField;

  /// @brief Field <Depth>k__BackingField, offset: 0x28, size: 0x4, def value: None
  float_t ____Depth_k__BackingField;

  /// @brief Field <Offset>k__BackingField, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____Offset_k__BackingField;

  /// @brief Field _scaleChildren, offset: 0x38, size: 0x1, def value: None
  bool ____scaleChildren;

  /// @brief Field _offsetChildren, offset: 0x39, size: 0x1, def value: None
  bool ____offsetChildren;

  /// @brief Field _sceneAnchor, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSceneAnchor> ____sceneAnchor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneVolume, ____Width_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneVolume, ____Height_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneVolume, ____Depth_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneVolume, ____Offset_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneVolume, ____scaleChildren) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneVolume, ____offsetChildren) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneVolume, ____sceneAnchor) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneVolume, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSceneVolume);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneVolume*, "", "OVRSceneVolume");
