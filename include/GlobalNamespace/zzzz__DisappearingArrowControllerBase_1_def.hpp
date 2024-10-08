#pragma once
// IWYU pragma private; include "GlobalNamespace/DisappearingArrowControllerBase_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DisappearingArrowControllerBase_1)
namespace GlobalNamespace {
class CutoutEffect;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class DisappearingArrowControllerBase_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::DisappearingArrowControllerBase_1);
// Type: ::DisappearingArrowControllerBase`1
// SizeInfo { instance_size: 88, native_size: 86, calculated_instance_size: 88, calculated_native_size: 86, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::DisappearingArrowControllerBase`1<T>*
class CORDL_TYPE DisappearingArrowControllerBase_1 : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _arrowCutoutEffect, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__arrowCutoutEffect, put = __cordl_internal_set__arrowCutoutEffect)) ::UnityW<::GlobalNamespace::CutoutEffect> _arrowCutoutEffect;

  /// @brief Field _colorId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__colorId, put = setStaticF__colorId)) int32_t _colorId;

  /// @brief Field _cubeMeshRenderer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__cubeMeshRenderer, put = __cordl_internal_set__cubeMeshRenderer)) ::UnityW<::UnityEngine::MeshRenderer> _cubeMeshRenderer;

  /// @brief Field _disappearingGhostEnd, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__disappearingGhostEnd, put = __cordl_internal_set__disappearingGhostEnd)) float_t _disappearingGhostEnd;

  /// @brief Field _disappearingGhostStart, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__disappearingGhostStart, put = __cordl_internal_set__disappearingGhostStart)) float_t _disappearingGhostStart;

  /// @brief Field _disappearingNormalEnd, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__disappearingNormalEnd, put = __cordl_internal_set__disappearingNormalEnd)) float_t _disappearingNormalEnd;

  /// @brief Field _disappearingNormalStart, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__disappearingNormalStart, put = __cordl_internal_set__disappearingNormalStart)) float_t _disappearingNormalStart;

  /// @brief Field _fadeArrow, offset 0x55, size 0x1
  __declspec(property(get = __cordl_internal_get__fadeArrow, put = __cordl_internal_set__fadeArrow)) bool _fadeArrow;

  /// @brief Field _hideMesh, offset 0x54, size 0x1
  __declspec(property(get = __cordl_internal_get__hideMesh, put = __cordl_internal_set__hideMesh)) bool _hideMesh;

  /// @brief Field _maxDistance, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__maxDistance, put = __cordl_internal_set__maxDistance)) float_t _maxDistance;

  /// @brief Field _minDistance, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__minDistance, put = __cordl_internal_set__minDistance)) float_t _minDistance;

  /// @brief Field _prevArrowTransparency, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__prevArrowTransparency, put = __cordl_internal_set__prevArrowTransparency)) float_t _prevArrowTransparency;

  /// @brief Field _transparentObjectMaterialPropertyBlocks, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__transparentObjectMaterialPropertyBlocks,
                      put = __cordl_internal_set__transparentObjectMaterialPropertyBlocks)) ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>,
                                                                                                     ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*>
      _transparentObjectMaterialPropertyBlocks;

  __declspec(property(get = get_gameNoteController)) T gameNoteController;

  /// @brief Method Awake, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CalculateMinMaxDistance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CalculateMinMaxDistance();

  /// @brief Method HandleCubeNoteControllerDidInit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandleCubeNoteControllerDidInit(T gameNoteController);

  /// @brief Method HandleNoteMovementNoteDidMoveInJumpPhase, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void HandleNoteMovementNoteDidMoveInJumpPhase();

  static inline ::GlobalNamespace::DisappearingArrowControllerBase_1<T>* New_ctor();

  /// @brief Method OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetArrowTransparency, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetArrowTransparency(float_t arrowTransparency);

  constexpr ::UnityW<::GlobalNamespace::CutoutEffect> const& __cordl_internal_get__arrowCutoutEffect() const;

  constexpr ::UnityW<::GlobalNamespace::CutoutEffect>& __cordl_internal_get__arrowCutoutEffect();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__cubeMeshRenderer() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__cubeMeshRenderer();

  constexpr float_t const& __cordl_internal_get__disappearingGhostEnd() const;

  constexpr float_t& __cordl_internal_get__disappearingGhostEnd();

  constexpr float_t const& __cordl_internal_get__disappearingGhostStart() const;

  constexpr float_t& __cordl_internal_get__disappearingGhostStart();

  constexpr float_t const& __cordl_internal_get__disappearingNormalEnd() const;

  constexpr float_t& __cordl_internal_get__disappearingNormalEnd();

  constexpr float_t const& __cordl_internal_get__disappearingNormalStart() const;

  constexpr float_t& __cordl_internal_get__disappearingNormalStart();

  constexpr bool const& __cordl_internal_get__fadeArrow() const;

  constexpr bool& __cordl_internal_get__fadeArrow();

  constexpr bool const& __cordl_internal_get__hideMesh() const;

  constexpr bool& __cordl_internal_get__hideMesh();

  constexpr float_t const& __cordl_internal_get__maxDistance() const;

  constexpr float_t& __cordl_internal_get__maxDistance();

  constexpr float_t const& __cordl_internal_get__minDistance() const;

  constexpr float_t& __cordl_internal_get__minDistance();

  constexpr float_t const& __cordl_internal_get__prevArrowTransparency() const;

  constexpr float_t& __cordl_internal_get__prevArrowTransparency();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*> const&
  __cordl_internal_get__transparentObjectMaterialPropertyBlocks() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*>&
  __cordl_internal_get__transparentObjectMaterialPropertyBlocks();

  constexpr void __cordl_internal_set__arrowCutoutEffect(::UnityW<::GlobalNamespace::CutoutEffect> value);

  constexpr void __cordl_internal_set__cubeMeshRenderer(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void __cordl_internal_set__disappearingGhostEnd(float_t value);

  constexpr void __cordl_internal_set__disappearingGhostStart(float_t value);

  constexpr void __cordl_internal_set__disappearingNormalEnd(float_t value);

  constexpr void __cordl_internal_set__disappearingNormalStart(float_t value);

  constexpr void __cordl_internal_set__fadeArrow(bool value);

  constexpr void __cordl_internal_set__hideMesh(bool value);

  constexpr void __cordl_internal_set__maxDistance(float_t value);

  constexpr void __cordl_internal_set__minDistance(float_t value);

  constexpr void __cordl_internal_set__prevArrowTransparency(float_t value);

  constexpr void __cordl_internal_set__transparentObjectMaterialPropertyBlocks(
      ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__colorId();

  /// @brief Method get_gameNoteController, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T get_gameNoteController();

  static inline void setStaticF__colorId(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisappearingArrowControllerBase_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisappearingArrowControllerBase_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisappearingArrowControllerBase_1(DisappearingArrowControllerBase_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisappearingArrowControllerBase_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisappearingArrowControllerBase_1(DisappearingArrowControllerBase_1 const&) = delete;

  /// @brief Field _transparentObjectMaterialPropertyBlocks, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>, ::Array<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>*> ____transparentObjectMaterialPropertyBlocks;

  /// @brief Field _cubeMeshRenderer, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ____cubeMeshRenderer;

  /// @brief Field _arrowCutoutEffect, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CutoutEffect> ____arrowCutoutEffect;

  /// @brief Field _disappearingNormalStart, offset: 0x38, size: 0x4, def value: None
  float_t ____disappearingNormalStart;

  /// @brief Field _disappearingNormalEnd, offset: 0x3c, size: 0x4, def value: None
  float_t ____disappearingNormalEnd;

  /// @brief Field _disappearingGhostStart, offset: 0x40, size: 0x4, def value: None
  float_t ____disappearingGhostStart;

  /// @brief Field _disappearingGhostEnd, offset: 0x44, size: 0x4, def value: None
  float_t ____disappearingGhostEnd;

  /// @brief Field _prevArrowTransparency, offset: 0x48, size: 0x4, def value: None
  float_t ____prevArrowTransparency;

  /// @brief Field _minDistance, offset: 0x4c, size: 0x4, def value: None
  float_t ____minDistance;

  /// @brief Field _maxDistance, offset: 0x50, size: 0x4, def value: None
  float_t ____maxDistance;

  /// @brief Field _hideMesh, offset: 0x54, size: 0x1, def value: None
  bool ____hideMesh;

  /// @brief Field _fadeArrow, offset: 0x55, size: 0x1, def value: None
  bool ____fadeArrow;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4080 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::DisappearingArrowControllerBase_1, "", "DisappearingArrowControllerBase`1");
