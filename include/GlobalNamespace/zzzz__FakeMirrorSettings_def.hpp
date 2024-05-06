#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FakeMirrorSettings)
// Forward declare root types
namespace GlobalNamespace {
class FakeMirrorSettings;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FakeMirrorSettings);
// Type: ::FakeMirrorSettings
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FakeMirrorSettings*
class CORDL_TYPE FakeMirrorSettings : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _fakeMirrorTransparency, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__fakeMirrorTransparency, put = __cordl_internal_set__fakeMirrorTransparency)) float_t _fakeMirrorTransparency;

  /// @brief Field _fakeMirrorTransparencyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__fakeMirrorTransparencyId, put = setStaticF__fakeMirrorTransparencyId)) int32_t _fakeMirrorTransparencyId;

  /// @brief Field _useVertexDistortion, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get__useVertexDistortion, put = __cordl_internal_set__useVertexDistortion)) bool _useVertexDistortion;

  /// @brief Field _vertexDistortionDirectionality, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get__vertexDistortionDirectionality, put = __cordl_internal_set__vertexDistortionDirectionality))::UnityEngine::Vector3 _vertexDistortionDirectionality;

  /// @brief Field _vertexDistortionDirectionalityId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__vertexDistortionDirectionalityId, put = setStaticF__vertexDistortionDirectionalityId)) int32_t _vertexDistortionDirectionalityId;

  /// @brief Field _vertexDistortionNoiseScale, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__vertexDistortionNoiseScale, put = __cordl_internal_set__vertexDistortionNoiseScale)) float_t _vertexDistortionNoiseScale;

  /// @brief Field _vertexDistortionNoiseScaleId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__vertexDistortionNoiseScaleId, put = setStaticF__vertexDistortionNoiseScaleId)) int32_t _vertexDistortionNoiseScaleId;

  /// @brief Field _vertexDistortionStrength, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__vertexDistortionStrength, put = __cordl_internal_set__vertexDistortionStrength)) float_t _vertexDistortionStrength;

  /// @brief Field _vertexDistortionStrengthId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__vertexDistortionStrengthId, put = setStaticF__vertexDistortionStrengthId)) int32_t _vertexDistortionStrengthId;

  /// @brief Field _vertexDistortionZposMultiplier, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__vertexDistortionZposMultiplier, put = __cordl_internal_set__vertexDistortionZposMultiplier)) float_t _vertexDistortionZposMultiplier;

  /// @brief Field _vertexDistortionZposMultiplierId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__vertexDistortionZposMultiplierId, put = setStaticF__vertexDistortionZposMultiplierId)) int32_t _vertexDistortionZposMultiplierId;

  __declspec(property(get = get_fakeMirrorTransparency, put = set_fakeMirrorTransparency)) float_t fakeMirrorTransparency;

  static inline ::GlobalNamespace::FakeMirrorSettings* New_ctor();

  /// @brief Method OnEnable, addr 0x2bd3e5c, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x2bd3e60, size 0x4, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method SetGlobalParameters, addr 0x2bd3d4c, size 0x110, virtual false, abstract: false, final false
  inline void SetGlobalParameters();

  /// @brief Method Start, addr 0x2bd3d48, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  constexpr float_t const& __cordl_internal_get__fakeMirrorTransparency() const;

  constexpr float_t& __cordl_internal_get__fakeMirrorTransparency();

  constexpr bool const& __cordl_internal_get__useVertexDistortion() const;

  constexpr bool& __cordl_internal_get__useVertexDistortion();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__vertexDistortionDirectionality() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__vertexDistortionDirectionality();

  constexpr float_t const& __cordl_internal_get__vertexDistortionNoiseScale() const;

  constexpr float_t& __cordl_internal_get__vertexDistortionNoiseScale();

  constexpr float_t const& __cordl_internal_get__vertexDistortionStrength() const;

  constexpr float_t& __cordl_internal_get__vertexDistortionStrength();

  constexpr float_t const& __cordl_internal_get__vertexDistortionZposMultiplier() const;

  constexpr float_t& __cordl_internal_get__vertexDistortionZposMultiplier();

  constexpr void __cordl_internal_set__fakeMirrorTransparency(float_t value);

  constexpr void __cordl_internal_set__useVertexDistortion(bool value);

  constexpr void __cordl_internal_set__vertexDistortionDirectionality(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__vertexDistortionNoiseScale(float_t value);

  constexpr void __cordl_internal_set__vertexDistortionStrength(float_t value);

  constexpr void __cordl_internal_set__vertexDistortionZposMultiplier(float_t value);

  /// @brief Method .ctor, addr 0x2bd3e64, size 0x30, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__fakeMirrorTransparencyId();

  static inline int32_t getStaticF__vertexDistortionDirectionalityId();

  static inline int32_t getStaticF__vertexDistortionNoiseScaleId();

  static inline int32_t getStaticF__vertexDistortionStrengthId();

  static inline int32_t getStaticF__vertexDistortionZposMultiplierId();

  /// @brief Method get_fakeMirrorTransparency, addr 0x2bd3d38, size 0x8, virtual false, abstract: false, final false
  inline float_t get_fakeMirrorTransparency();

  static inline void setStaticF__fakeMirrorTransparencyId(int32_t value);

  static inline void setStaticF__vertexDistortionDirectionalityId(int32_t value);

  static inline void setStaticF__vertexDistortionNoiseScaleId(int32_t value);

  static inline void setStaticF__vertexDistortionStrengthId(int32_t value);

  static inline void setStaticF__vertexDistortionZposMultiplierId(int32_t value);

  /// @brief Method set_fakeMirrorTransparency, addr 0x2bd3d40, size 0x8, virtual false, abstract: false, final false
  inline void set_fakeMirrorTransparency(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FakeMirrorSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FakeMirrorSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FakeMirrorSettings(FakeMirrorSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FakeMirrorSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FakeMirrorSettings(FakeMirrorSettings const&) = delete;

  /// @brief Field _fakeMirrorTransparency, offset: 0x18, size: 0x4, def value: None
  float_t ____fakeMirrorTransparency;

  /// @brief Field _useVertexDistortion, offset: 0x1c, size: 0x1, def value: None
  bool ____useVertexDistortion;

  /// @brief Field _vertexDistortionNoiseScale, offset: 0x20, size: 0x4, def value: None
  float_t ____vertexDistortionNoiseScale;

  /// @brief Field _vertexDistortionStrength, offset: 0x24, size: 0x4, def value: None
  float_t ____vertexDistortionStrength;

  /// @brief Field _vertexDistortionDirectionality, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____vertexDistortionDirectionality;

  /// @brief Field _vertexDistortionZposMultiplier, offset: 0x34, size: 0x4, def value: None
  float_t ____vertexDistortionZposMultiplier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FakeMirrorSettings, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FakeMirrorSettings, ____fakeMirrorTransparency) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FakeMirrorSettings, ____useVertexDistortion) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FakeMirrorSettings, ____vertexDistortionNoiseScale) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FakeMirrorSettings, ____vertexDistortionStrength) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FakeMirrorSettings, ____vertexDistortionDirectionality) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FakeMirrorSettings, ____vertexDistortionZposMultiplier) == 0x34, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FakeMirrorSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FakeMirrorSettings*, "", "FakeMirrorSettings");
