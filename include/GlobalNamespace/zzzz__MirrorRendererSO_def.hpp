#pragma once
// IWYU pragma private; include "GlobalNamespace\MirrorRendererSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MirrorType_def.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MirrorRendererSO)
namespace GlobalNamespace {
struct MirrorType;
}
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace GlobalNamespace {
class MirrorRendererSO;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MirrorRendererSO*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MirrorRendererSO*, "", "MirrorRendererSO");
// Dependencies MirrorType, PersistentScriptableObject, UnityEngine.LayerMask
namespace GlobalNamespace {
// Is value type: false
// CS Name: MirrorRendererSO
class CORDL_TYPE MirrorRendererSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _antialiasing, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__antialiasing, put = __cordl_internal_set__antialiasing)) int32_t _antialiasing;

  /// @brief Field _maxAntiAliasing, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__maxAntiAliasing, put = __cordl_internal_set__maxAntiAliasing)) int32_t _maxAntiAliasing;

  /// @brief Field _mirrorType, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__mirrorType, put = __cordl_internal_set__mirrorType)) ::GlobalNamespace::MirrorType _mirrorType;

  /// @brief Field _monoTextureHeight, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__monoTextureHeight, put = __cordl_internal_set__monoTextureHeight)) int32_t _monoTextureHeight;

  /// @brief Field _monoTextureWidth, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__monoTextureWidth, put = __cordl_internal_set__monoTextureWidth)) int32_t _monoTextureWidth;

  /// @brief Field _reflectLayers, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__reflectLayers, put = __cordl_internal_set__reflectLayers)) ::UnityEngine::LayerMask _reflectLayers;

  /// @brief Field _stereoTextureHeight, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__stereoTextureHeight, put = __cordl_internal_set__stereoTextureHeight)) int32_t _stereoTextureHeight;

  /// @brief Field _stereoTextureWidth, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__stereoTextureWidth, put = __cordl_internal_set__stereoTextureWidth)) int32_t _stereoTextureWidth;

  __declspec(property(get = get_antiAliasing)) int32_t antiAliasing;

  __declspec(property(get = get_mirrorType)) ::GlobalNamespace::MirrorType mirrorType;

  __declspec(property(get = get_monoTextureHeight)) int32_t monoTextureHeight;

  __declspec(property(get = get_monoTextureWidth)) int32_t monoTextureWidth;

  __declspec(property(get = get_reflectLayers)) ::UnityEngine::LayerMask reflectLayers;

  __declspec(property(get = get_stereoTextureHeight)) int32_t stereoTextureHeight;

  __declspec(property(get = get_stereoTextureWidth)) int32_t stereoTextureWidth;

  /// @brief Method Awake, addr 0x5f4b0ac, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Init, addr 0x5f4b0b0, size 0x14, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::MirrorType mirrorType, ::UnityEngine::LayerMask reflectLayers, int32_t stereoTextureWidth, int32_t stereoTextureHeight, int32_t monoTextureWidth,
                   int32_t monoTextureHeight, int32_t maxAntiAliasing);

  static inline ::GlobalNamespace::MirrorRendererSO* New_ctor();

  /// @brief Method OnValidate, addr 0x5f4b010, size 0x4, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method ValidateParams, addr 0x5f4b014, size 0x98, virtual false, abstract: false, final false
  inline void ValidateParams();

  constexpr int32_t const& __cordl_internal_get__antialiasing() const;

  constexpr int32_t& __cordl_internal_get__antialiasing();

  constexpr int32_t const& __cordl_internal_get__maxAntiAliasing() const;

  constexpr int32_t& __cordl_internal_get__maxAntiAliasing();

  constexpr ::GlobalNamespace::MirrorType const& __cordl_internal_get__mirrorType() const;

  constexpr ::GlobalNamespace::MirrorType& __cordl_internal_get__mirrorType();

  constexpr int32_t const& __cordl_internal_get__monoTextureHeight() const;

  constexpr int32_t& __cordl_internal_get__monoTextureHeight();

  constexpr int32_t const& __cordl_internal_get__monoTextureWidth() const;

  constexpr int32_t& __cordl_internal_get__monoTextureWidth();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__reflectLayers() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get__reflectLayers();

  constexpr int32_t const& __cordl_internal_get__stereoTextureHeight() const;

  constexpr int32_t& __cordl_internal_get__stereoTextureHeight();

  constexpr int32_t const& __cordl_internal_get__stereoTextureWidth() const;

  constexpr int32_t& __cordl_internal_get__stereoTextureWidth();

  constexpr void __cordl_internal_set__antialiasing(int32_t value);

  constexpr void __cordl_internal_set__maxAntiAliasing(int32_t value);

  constexpr void __cordl_internal_set__mirrorType(::GlobalNamespace::MirrorType value);

  constexpr void __cordl_internal_set__monoTextureHeight(int32_t value);

  constexpr void __cordl_internal_set__monoTextureWidth(int32_t value);

  constexpr void __cordl_internal_set__reflectLayers(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set__stereoTextureHeight(int32_t value);

  constexpr void __cordl_internal_set__stereoTextureWidth(int32_t value);

  /// @brief Method .ctor, addr 0x5f4b0c4, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_antiAliasing, addr 0x5f4b008, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_antiAliasing();

  /// @brief Method get_mirrorType, addr 0x5f4afd8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MirrorType get_mirrorType();

  /// @brief Method get_monoTextureHeight, addr 0x5f4b000, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_monoTextureHeight();

  /// @brief Method get_monoTextureWidth, addr 0x5f4aff8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_monoTextureWidth();

  /// @brief Method get_reflectLayers, addr 0x5f4afe0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_reflectLayers();

  /// @brief Method get_stereoTextureHeight, addr 0x5f4aff0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_stereoTextureHeight();

  /// @brief Method get_stereoTextureWidth, addr 0x5f4afe8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_stereoTextureWidth();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MirrorRendererSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MirrorRendererSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MirrorRendererSO(MirrorRendererSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MirrorRendererSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MirrorRendererSO(MirrorRendererSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20664 };

  /// @brief Field kWaterLayer offset 0xffffffff size 0x4
  static constexpr int32_t kWaterLayer{ static_cast<int32_t>(0x4) };

  /// @brief Field _reflectLayers, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::LayerMask ____reflectLayers;

  /// @brief Field _stereoTextureWidth, offset: 0x1c, size: 0x4, def value: None
  int32_t ____stereoTextureWidth;

  /// @brief Field _stereoTextureHeight, offset: 0x20, size: 0x4, def value: None
  int32_t ____stereoTextureHeight;

  /// @brief Field _monoTextureWidth, offset: 0x24, size: 0x4, def value: None
  int32_t ____monoTextureWidth;

  /// @brief Field _monoTextureHeight, offset: 0x28, size: 0x4, def value: None
  int32_t ____monoTextureHeight;

  /// @brief Field _maxAntiAliasing, offset: 0x2c, size: 0x4, def value: None
  int32_t ____maxAntiAliasing;

  /// @brief Field _mirrorType, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::MirrorType ____mirrorType;

  /// @brief Field _antialiasing, offset: 0x34, size: 0x4, def value: None
  int32_t ____antialiasing;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MirrorRendererSO, ____reflectLayers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererSO, ____stereoTextureWidth) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererSO, ____stereoTextureHeight) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererSO, ____monoTextureWidth) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererSO, ____monoTextureHeight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererSO, ____maxAntiAliasing) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererSO, ____mirrorType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirrorRendererSO, ____antialiasing) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MirrorRendererSO) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
