#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OVRSceneVolume)
namespace GlobalNamespace {
class IOVRSceneComponent;
}
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
// Type: ::OVRSceneVolume
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRSceneVolume*
class CORDL_TYPE OVRSceneVolume : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_Depth, put = set_Depth)) float_t Depth;

  __declspec(property(get = get_Dimensions))::UnityEngine::Vector3 Dimensions;

  __declspec(property(get = get_Height, put = set_Height)) float_t Height;

  __declspec(property(get = get_Offset, put = set_Offset))::UnityEngine::Vector3 Offset;

  __declspec(property(get = get_OffsetChildren, put = set_OffsetChildren)) bool OffsetChildren;

  __declspec(property(get = get_ScaleChildren, put = set_ScaleChildren)) bool ScaleChildren;

  __declspec(property(get = get_Width, put = set_Width)) float_t Width;

  /// @brief Field <Depth>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__Depth_k__BackingField, put = __cordl_internal_set__Depth_k__BackingField)) float_t _Depth_k__BackingField;

  /// @brief Field <Height>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__Height_k__BackingField, put = __cordl_internal_set__Height_k__BackingField)) float_t _Height_k__BackingField;

  /// @brief Field <Offset>k__BackingField, offset 0x24, size 0xc
  __declspec(property(get = __cordl_internal_get__Offset_k__BackingField, put = __cordl_internal_set__Offset_k__BackingField))::UnityEngine::Vector3 _Offset_k__BackingField;

  /// @brief Field <Width>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__Width_k__BackingField, put = __cordl_internal_set__Width_k__BackingField)) float_t _Width_k__BackingField;

  /// @brief Field _offsetChildren, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get__offsetChildren, put = __cordl_internal_set__offsetChildren)) bool _offsetChildren;

  /// @brief Field _scaleChildren, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__scaleChildren, put = __cordl_internal_set__scaleChildren)) bool _scaleChildren;

  /// @brief Field _sceneAnchor, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneAnchor, put = __cordl_internal_set__sceneAnchor))::UnityW<::GlobalNamespace::OVRSceneAnchor> _sceneAnchor;

  /// @brief Convert operator to "::GlobalNamespace::IOVRSceneComponent"
  constexpr operator ::GlobalNamespace::IOVRSceneComponent*() noexcept;

  /// @brief Method Awake, addr 0x2a62b40, size 0xd4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method IOVRSceneComponent.Initialize, addr 0x2a62c14, size 0x4, virtual true, abstract: false, final true
  inline void IOVRSceneComponent_Initialize();

  static inline ::GlobalNamespace::OVRSceneVolume* New_ctor();

  /// @brief Method SetChildOffset, addr 0x2a62a60, size 0xe0, virtual false, abstract: false, final false
  inline void SetChildOffset();

  /// @brief Method SetChildScale, addr 0x2a62944, size 0xe0, virtual false, abstract: false, final false
  inline void SetChildScale();

  /// @brief Method UpdateTransform, addr 0x2a5bb5c, size 0x1d8, virtual false, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x2a62c18, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Depth, addr 0x2a628d4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Depth();

  /// @brief Method get_Dimensions, addr 0x2a628e4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_Dimensions();

  /// @brief Method get_Height, addr 0x2a628c4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Height();

  /// @brief Method get_Offset, addr 0x2a628f0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_Offset();

  /// @brief Method get_OffsetChildren, addr 0x2a62a24, size 0x8, virtual false, abstract: false, final false
  inline bool get_OffsetChildren();

  /// @brief Method get_ScaleChildren, addr 0x2a62908, size 0x8, virtual false, abstract: false, final false
  inline bool get_ScaleChildren();

  /// @brief Method get_Width, addr 0x2a628b4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Width();

  /// @brief Convert to "::GlobalNamespace::IOVRSceneComponent"
  constexpr ::GlobalNamespace::IOVRSceneComponent* i___GlobalNamespace__IOVRSceneComponent() noexcept;

  /// @brief Method set_Depth, addr 0x2a628dc, size 0x8, virtual false, abstract: false, final false
  inline void set_Depth(float_t value);

  /// @brief Method set_Height, addr 0x2a628cc, size 0x8, virtual false, abstract: false, final false
  inline void set_Height(float_t value);

  /// @brief Method set_Offset, addr 0x2a628fc, size 0xc, virtual false, abstract: false, final false
  inline void set_Offset(::UnityEngine::Vector3 value);

  /// @brief Method set_OffsetChildren, addr 0x2a62a2c, size 0x34, virtual false, abstract: false, final false
  inline void set_OffsetChildren(bool value);

  /// @brief Method set_ScaleChildren, addr 0x2a62910, size 0x34, virtual false, abstract: false, final false
  inline void set_ScaleChildren(bool value);

  /// @brief Method set_Width, addr 0x2a628bc, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field <Width>k__BackingField, offset: 0x18, size: 0x4, def value: None
  float_t ____Width_k__BackingField;

  /// @brief Field <Height>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  float_t ____Height_k__BackingField;

  /// @brief Field <Depth>k__BackingField, offset: 0x20, size: 0x4, def value: None
  float_t ____Depth_k__BackingField;

  /// @brief Field <Offset>k__BackingField, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____Offset_k__BackingField;

  /// @brief Field _scaleChildren, offset: 0x30, size: 0x1, def value: None
  bool ____scaleChildren;

  /// @brief Field _offsetChildren, offset: 0x31, size: 0x1, def value: None
  bool ____offsetChildren;

  /// @brief Field _sceneAnchor, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSceneAnchor> ____sceneAnchor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneVolume, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneVolume, ____Width_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneVolume, ____Height_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneVolume, ____Depth_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneVolume, ____Offset_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneVolume, ____scaleChildren) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneVolume, ____offsetChildren) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneVolume, ____sceneAnchor) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSceneVolume);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneVolume*, "", "OVRSceneVolume");
