#pragma once
// IWYU pragma private; include "GlobalNamespace/CutoutEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CutoutEffect)
namespace GlobalNamespace {
class BoolSO;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CutoutEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CutoutEffect);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: CutoutEffect
class CORDL_TYPE CutoutEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _cutout, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__cutout, put = __cordl_internal_set__cutout)) float_t _cutout;

  /// @brief Field _cutoutOffset, offset 0x30, size 0xc
  __declspec(property(get = __cordl_internal_get__cutoutOffset, put = __cordl_internal_set__cutoutOffset)) ::UnityEngine::Vector3 _cutoutOffset;

  /// @brief Field _cutoutPropertyID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__cutoutPropertyID, put = setStaticF__cutoutPropertyID)) int32_t _cutoutPropertyID;

  /// @brief Field _cutoutTexOffsetPropertyID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__cutoutTexOffsetPropertyID, put = setStaticF__cutoutTexOffsetPropertyID)) int32_t _cutoutTexOffsetPropertyID;

  /// @brief Field _materialPropertyBlockController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlockController,
                      put = __cordl_internal_set__materialPropertyBlockController)) ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>
      _materialPropertyBlockController;

  /// @brief Field _randomNoiseTexOffset, offset 0x3c, size 0xc
  __declspec(property(get = __cordl_internal_get__randomNoiseTexOffset, put = __cordl_internal_set__randomNoiseTexOffset)) ::UnityEngine::Vector3 _randomNoiseTexOffset;

  /// @brief Field _useRandomCutoutOffset, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__useRandomCutoutOffset, put = __cordl_internal_set__useRandomCutoutOffset)) ::UnityW<::GlobalNamespace::BoolSO> _useRandomCutoutOffset;

  __declspec(property(get = get_useRandomCutoutOffset)) bool useRandomCutoutOffset;

  static inline ::GlobalNamespace::CutoutEffect* New_ctor();

  /// @brief Method SetCutout, addr 0x3b804ac, size 0xc4, virtual false, abstract: false, final false
  inline void SetCutout(float_t cutout);

  /// @brief Method SetCutout, addr 0x3b807b8, size 0xe4, virtual false, abstract: false, final false
  inline void SetCutout(float_t cutout, ::UnityEngine::Vector3 cutoutOffset);

  /// @brief Method Start, addr 0x3b8077c, size 0x3c, virtual false, abstract: false, final false
  inline void Start();

  constexpr float_t const& __cordl_internal_get__cutout() const;

  constexpr float_t& __cordl_internal_get__cutout();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__cutoutOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__cutoutOffset();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& __cordl_internal_get__materialPropertyBlockController() const;

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& __cordl_internal_get__materialPropertyBlockController();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__randomNoiseTexOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__randomNoiseTexOffset();

  constexpr ::UnityW<::GlobalNamespace::BoolSO> const& __cordl_internal_get__useRandomCutoutOffset() const;

  constexpr ::UnityW<::GlobalNamespace::BoolSO>& __cordl_internal_get__useRandomCutoutOffset();

  constexpr void __cordl_internal_set__cutout(float_t value);

  constexpr void __cordl_internal_set__cutoutOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value);

  constexpr void __cordl_internal_set__randomNoiseTexOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__useRandomCutoutOffset(::UnityW<::GlobalNamespace::BoolSO> value);

  /// @brief Method .ctor, addr 0x3b8089c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__cutoutPropertyID();

  static inline int32_t getStaticF__cutoutTexOffsetPropertyID();

  /// @brief Method get_useRandomCutoutOffset, addr 0x3b806e8, size 0x94, virtual false, abstract: false, final false
  inline bool get_useRandomCutoutOffset();

  static inline void setStaticF__cutoutPropertyID(int32_t value);

  static inline void setStaticF__cutoutTexOffsetPropertyID(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CutoutEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CutoutEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CutoutEffect(CutoutEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CutoutEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CutoutEffect(CutoutEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4203 };

  /// @brief Field _materialPropertyBlockController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> ____materialPropertyBlockController;

  /// @brief Field _useRandomCutoutOffset, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BoolSO> ____useRandomCutoutOffset;

  /// @brief Field _cutoutOffset, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____cutoutOffset;

  /// @brief Field _randomNoiseTexOffset, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____randomNoiseTexOffset;

  /// @brief Field _cutout, offset: 0x48, size: 0x4, def value: None
  float_t ____cutout;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CutoutEffect, ____materialPropertyBlockController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CutoutEffect, ____useRandomCutoutOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CutoutEffect, ____cutoutOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CutoutEffect, ____randomNoiseTexOffset) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CutoutEffect, ____cutout) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CutoutEffect, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CutoutEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CutoutEffect*, "", "CutoutEffect");
