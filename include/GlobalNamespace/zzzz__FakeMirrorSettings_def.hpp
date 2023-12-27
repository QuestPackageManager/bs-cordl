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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15286))
// CS Name: ::FakeMirrorSettings*
class CORDL_TYPE FakeMirrorSettings : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _fakeMirrorTransparency, offset 0x18, size 0x4
  __declspec(property(get = __get__fakeMirrorTransparency, put = __set__fakeMirrorTransparency)) float_t _fakeMirrorTransparency;

  /// @brief Field _useVertexDistortion, offset 0x1c, size 0x1
  __declspec(property(get = __get__useVertexDistortion, put = __set__useVertexDistortion)) bool _useVertexDistortion;

  /// @brief Field _vertexDistortionNoiseScale, offset 0x20, size 0x4
  __declspec(property(get = __get__vertexDistortionNoiseScale, put = __set__vertexDistortionNoiseScale)) float_t _vertexDistortionNoiseScale;

  /// @brief Field _vertexDistortionStrength, offset 0x24, size 0x4
  __declspec(property(get = __get__vertexDistortionStrength, put = __set__vertexDistortionStrength)) float_t _vertexDistortionStrength;

  /// @brief Field _vertexDistortionDirectionality, offset 0x28, size 0xc
  __declspec(property(get = __get__vertexDistortionDirectionality, put = __set__vertexDistortionDirectionality))::UnityEngine::Vector3 _vertexDistortionDirectionality;

  /// @brief Field _vertexDistortionZposMultiplier, offset 0x34, size 0x4
  __declspec(property(get = __get__vertexDistortionZposMultiplier, put = __set__vertexDistortionZposMultiplier)) float_t _vertexDistortionZposMultiplier;

  /// @brief Field _fakeMirrorTransparencyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__fakeMirrorTransparencyId, put = setStaticF__fakeMirrorTransparencyId)) int32_t _fakeMirrorTransparencyId;

  /// @brief Field _vertexDistortionNoiseScaleId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__vertexDistortionNoiseScaleId, put = setStaticF__vertexDistortionNoiseScaleId)) int32_t _vertexDistortionNoiseScaleId;

  /// @brief Field _vertexDistortionStrengthId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__vertexDistortionStrengthId, put = setStaticF__vertexDistortionStrengthId)) int32_t _vertexDistortionStrengthId;

  /// @brief Field _vertexDistortionDirectionalityId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__vertexDistortionDirectionalityId, put = setStaticF__vertexDistortionDirectionalityId)) int32_t _vertexDistortionDirectionalityId;

  /// @brief Field _vertexDistortionZposMultiplierId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__vertexDistortionZposMultiplierId, put = setStaticF__vertexDistortionZposMultiplierId)) int32_t _vertexDistortionZposMultiplierId;

  __declspec(property(get = get_fakeMirrorTransparency, put = set_fakeMirrorTransparency)) float_t fakeMirrorTransparency;

  constexpr float_t& __get__fakeMirrorTransparency();

  constexpr float_t const& __get__fakeMirrorTransparency() const;

  constexpr void __set__fakeMirrorTransparency(float_t value);

  constexpr bool& __get__useVertexDistortion();

  constexpr bool const& __get__useVertexDistortion() const;

  constexpr void __set__useVertexDistortion(bool value);

  constexpr float_t& __get__vertexDistortionNoiseScale();

  constexpr float_t const& __get__vertexDistortionNoiseScale() const;

  constexpr void __set__vertexDistortionNoiseScale(float_t value);

  constexpr float_t& __get__vertexDistortionStrength();

  constexpr float_t const& __get__vertexDistortionStrength() const;

  constexpr void __set__vertexDistortionStrength(float_t value);

  constexpr ::UnityEngine::Vector3& __get__vertexDistortionDirectionality();

  constexpr ::UnityEngine::Vector3 const& __get__vertexDistortionDirectionality() const;

  constexpr void __set__vertexDistortionDirectionality(::UnityEngine::Vector3 value);

  constexpr float_t& __get__vertexDistortionZposMultiplier();

  constexpr float_t const& __get__vertexDistortionZposMultiplier() const;

  constexpr void __set__vertexDistortionZposMultiplier(float_t value);

  static inline void setStaticF__fakeMirrorTransparencyId(int32_t value);

  static inline int32_t getStaticF__fakeMirrorTransparencyId();

  static inline void setStaticF__vertexDistortionNoiseScaleId(int32_t value);

  static inline int32_t getStaticF__vertexDistortionNoiseScaleId();

  static inline void setStaticF__vertexDistortionStrengthId(int32_t value);

  static inline int32_t getStaticF__vertexDistortionStrengthId();

  static inline void setStaticF__vertexDistortionDirectionalityId(int32_t value);

  static inline int32_t getStaticF__vertexDistortionDirectionalityId();

  static inline void setStaticF__vertexDistortionZposMultiplierId(int32_t value);

  static inline int32_t getStaticF__vertexDistortionZposMultiplierId();

  /// @brief Method get_fakeMirrorTransparency addr 0x28079e8 size 0x8 virtual false final false
  inline float_t get_fakeMirrorTransparency();

  /// @brief Method set_fakeMirrorTransparency addr 0x28079f0 size 0x8 virtual false final false
  inline void set_fakeMirrorTransparency(float_t value);

  /// @brief Method Start addr 0x28079f8 size 0x4 virtual false final false
  inline void Start();

  /// @brief Method OnEnable addr 0x2807b0c size 0x4 virtual false final false
  inline void OnEnable();

  /// @brief Method OnValidate addr 0x2807b10 size 0x4 virtual false final false
  inline void OnValidate();

  /// @brief Method SetGlobalParameters addr 0x28079fc size 0x110 virtual false final false
  inline void SetGlobalParameters();

  static inline ::GlobalNamespace::FakeMirrorSettings* New_ctor();

  /// @brief Method .ctor addr 0x2807b14 size 0x30 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FakeMirrorSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FakeMirrorSettings(FakeMirrorSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FakeMirrorSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FakeMirrorSettings(FakeMirrorSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FakeMirrorSettings();

public:
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

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FakeMirrorSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FakeMirrorSettings*, "", "FakeMirrorSettings");
