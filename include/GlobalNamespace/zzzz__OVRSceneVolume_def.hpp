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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7982))
// CS Name: ::OVRSceneVolume*
class CORDL_TYPE OVRSceneVolume : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field <Width>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __get__Width_k__BackingField, put = __set__Width_k__BackingField)) float_t _Width_k__BackingField;

  /// @brief Field <Height>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __get__Height_k__BackingField, put = __set__Height_k__BackingField)) float_t _Height_k__BackingField;

  /// @brief Field <Depth>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __get__Depth_k__BackingField, put = __set__Depth_k__BackingField)) float_t _Depth_k__BackingField;

  /// @brief Field <Offset>k__BackingField, offset 0x24, size 0xc
  __declspec(property(get = __get__Offset_k__BackingField, put = __set__Offset_k__BackingField))::UnityEngine::Vector3 _Offset_k__BackingField;

  /// @brief Field _scaleChildren, offset 0x30, size 0x1
  __declspec(property(get = __get__scaleChildren, put = __set__scaleChildren)) bool _scaleChildren;

  /// @brief Field _offsetChildren, offset 0x31, size 0x1
  __declspec(property(get = __get__offsetChildren, put = __set__offsetChildren)) bool _offsetChildren;

  /// @brief Field _sceneAnchor, offset 0x38, size 0x8
  __declspec(property(get = __get__sceneAnchor, put = __set__sceneAnchor))::GlobalNamespace::OVRSceneAnchor* _sceneAnchor;

  __declspec(property(get = get_Width, put = set_Width)) float_t Width;

  __declspec(property(get = get_Height, put = set_Height)) float_t Height;

  __declspec(property(get = get_Depth, put = set_Depth)) float_t Depth;

  __declspec(property(get = get_Dimensions))::UnityEngine::Vector3 Dimensions;

  __declspec(property(get = get_Offset, put = set_Offset))::UnityEngine::Vector3 Offset;

  __declspec(property(get = get_ScaleChildren, put = set_ScaleChildren)) bool ScaleChildren;

  __declspec(property(get = get_OffsetChildren, put = set_OffsetChildren)) bool OffsetChildren;

  /// @brief Convert operator to "::GlobalNamespace::IOVRSceneComponent"
  constexpr operator ::GlobalNamespace::IOVRSceneComponent*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IOVRSceneComponent"
  constexpr ::GlobalNamespace::IOVRSceneComponent* i___GlobalNamespace__IOVRSceneComponent() noexcept;

  constexpr float_t& __get__Width_k__BackingField();

  constexpr float_t const& __get__Width_k__BackingField() const;

  constexpr void __set__Width_k__BackingField(float_t value);

  constexpr float_t& __get__Height_k__BackingField();

  constexpr float_t const& __get__Height_k__BackingField() const;

  constexpr void __set__Height_k__BackingField(float_t value);

  constexpr float_t& __get__Depth_k__BackingField();

  constexpr float_t const& __get__Depth_k__BackingField() const;

  constexpr void __set__Depth_k__BackingField(float_t value);

  constexpr ::UnityEngine::Vector3& __get__Offset_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __get__Offset_k__BackingField() const;

  constexpr void __set__Offset_k__BackingField(::UnityEngine::Vector3 value);

  constexpr bool& __get__scaleChildren();

  constexpr bool const& __get__scaleChildren() const;

  constexpr void __set__scaleChildren(bool value);

  constexpr bool& __get__offsetChildren();

  constexpr bool const& __get__offsetChildren() const;

  constexpr void __set__offsetChildren(bool value);

  constexpr ::GlobalNamespace::OVRSceneAnchor*& __get__sceneAnchor();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRSceneAnchor*> const& __get__sceneAnchor() const;

  constexpr void __set__sceneAnchor(::GlobalNamespace::OVRSceneAnchor* value);

  /// @brief Method get_Width, addr 0x278b194, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Width();

  /// @brief Method set_Width, addr 0x278b19c, size 0x8, virtual false, abstract: false, final false
  inline void set_Width(float_t value);

  /// @brief Method get_Height, addr 0x278b1a4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Height();

  /// @brief Method set_Height, addr 0x278b1ac, size 0x8, virtual false, abstract: false, final false
  inline void set_Height(float_t value);

  /// @brief Method get_Depth, addr 0x278b1b4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Depth();

  /// @brief Method set_Depth, addr 0x278b1bc, size 0x8, virtual false, abstract: false, final false
  inline void set_Depth(float_t value);

  /// @brief Method get_Dimensions, addr 0x278b1c4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_Dimensions();

  /// @brief Method get_Offset, addr 0x278b1d0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_Offset();

  /// @brief Method set_Offset, addr 0x278b1dc, size 0xc, virtual false, abstract: false, final false
  inline void set_Offset(::UnityEngine::Vector3 value);

  /// @brief Method get_ScaleChildren, addr 0x278b1e8, size 0x8, virtual false, abstract: false, final false
  inline bool get_ScaleChildren();

  /// @brief Method set_ScaleChildren, addr 0x278b1f0, size 0x34, virtual false, abstract: false, final false
  inline void set_ScaleChildren(bool value);

  /// @brief Method get_OffsetChildren, addr 0x278b304, size 0x8, virtual false, abstract: false, final false
  inline bool get_OffsetChildren();

  /// @brief Method set_OffsetChildren, addr 0x278b30c, size 0x34, virtual false, abstract: false, final false
  inline void set_OffsetChildren(bool value);

  /// @brief Method Awake, addr 0x278b420, size 0xd4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method IOVRSceneComponent.Initialize, addr 0x278b4f4, size 0x4, virtual true, abstract: false, final true
  inline void IOVRSceneComponent_Initialize();

  /// @brief Method SetChildScale, addr 0x278b224, size 0xe0, virtual false, abstract: false, final false
  inline void SetChildScale();

  /// @brief Method SetChildOffset, addr 0x278b340, size 0xe0, virtual false, abstract: false, final false
  inline void SetChildOffset();

  /// @brief Method UpdateTransform, addr 0x278443c, size 0x1d8, virtual false, abstract: false, final false
  inline void UpdateTransform();

  static inline ::GlobalNamespace::OVRSceneVolume* New_ctor();

  /// @brief Method .ctor, addr 0x278b4f8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneVolume", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSceneVolume(OVRSceneVolume&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneVolume", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSceneVolume(OVRSceneVolume const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneVolume();

public:
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
  ::GlobalNamespace::OVRSceneAnchor* ____sceneAnchor;

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
