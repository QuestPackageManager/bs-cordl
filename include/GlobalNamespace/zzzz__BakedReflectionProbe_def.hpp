#pragma once
// IWYU pragma private; include "GlobalNamespace/BakedReflectionProbe.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BakedReflectionProbe)
namespace GlobalNamespace {
class ReflectionProbeDataSO;
}
namespace UnityEngine {
class Cubemap;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BakedReflectionProbe;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BakedReflectionProbe);
// Type: ::BakedReflectionProbe
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BakedReflectionProbe*
class CORDL_TYPE BakedReflectionProbe : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _blackCubemap, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__blackCubemap, put = __cordl_internal_set__blackCubemap))::UnityW<::UnityEngine::Cubemap> _blackCubemap;

  /// @brief Field _downsampleByHalfCount, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__downsampleByHalfCount, put = __cordl_internal_set__downsampleByHalfCount)) int32_t _downsampleByHalfCount;

  /// @brief Field _offset, offset 0x2c, size 0xc
  __declspec(property(get = __cordl_internal_get__offset, put = __cordl_internal_set__offset))::UnityEngine::Vector3 _offset;

  /// @brief Field _reflectionProbeBoundsMaxPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__reflectionProbeBoundsMaxPropertyId, put = setStaticF__reflectionProbeBoundsMaxPropertyId)) int32_t _reflectionProbeBoundsMaxPropertyId;

  /// @brief Field _reflectionProbeBoundsMinPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__reflectionProbeBoundsMinPropertyId, put = setStaticF__reflectionProbeBoundsMinPropertyId)) int32_t _reflectionProbeBoundsMinPropertyId;

  /// @brief Field _reflectionProbeData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__reflectionProbeData, put = __cordl_internal_set__reflectionProbeData))::UnityW<::GlobalNamespace::ReflectionProbeDataSO> _reflectionProbeData;

  /// @brief Field _reflectionProbePositionPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__reflectionProbePositionPropertyId, put = setStaticF__reflectionProbePositionPropertyId)) int32_t _reflectionProbePositionPropertyId;

  /// @brief Field _reflectionProbeTexture1PropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__reflectionProbeTexture1PropertyId, put = setStaticF__reflectionProbeTexture1PropertyId)) int32_t _reflectionProbeTexture1PropertyId;

  /// @brief Field _reflectionProbeTexture2PropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__reflectionProbeTexture2PropertyId, put = setStaticF__reflectionProbeTexture2PropertyId)) int32_t _reflectionProbeTexture2PropertyId;

  /// @brief Field _resolutionBeforeDownsample, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__resolutionBeforeDownsample, put = __cordl_internal_set__resolutionBeforeDownsample)) int32_t _resolutionBeforeDownsample;

  /// @brief Field _size, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get__size, put = __cordl_internal_set__size))::UnityEngine::Vector3 _size;

  __declspec(property(get = get_downsampleByHalfCount)) int32_t downsampleByHalfCount;

  __declspec(property(get = get_position))::UnityEngine::Vector3 position;

  __declspec(property(get = get_reflectionProbeData, put = set_reflectionProbeData))::UnityW<::GlobalNamespace::ReflectionProbeDataSO> reflectionProbeData;

  __declspec(property(get = get_resolutionBeforeDownsample)) int32_t resolutionBeforeDownsample;

  static inline ::GlobalNamespace::BakedReflectionProbe* New_ctor();

  /// @brief Method SendDataToShaders, addr 0x26808d8, size 0x22c, virtual false, abstract: false, final false
  inline void SendDataToShaders();

  /// @brief Method Start, addr 0x2680820, size 0xb8, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::UnityEngine::Cubemap> const& __cordl_internal_get__blackCubemap() const;

  constexpr ::UnityW<::UnityEngine::Cubemap>& __cordl_internal_get__blackCubemap();

  constexpr int32_t const& __cordl_internal_get__downsampleByHalfCount() const;

  constexpr int32_t& __cordl_internal_get__downsampleByHalfCount();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__offset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__offset();

  constexpr ::UnityW<::GlobalNamespace::ReflectionProbeDataSO> const& __cordl_internal_get__reflectionProbeData() const;

  constexpr ::UnityW<::GlobalNamespace::ReflectionProbeDataSO>& __cordl_internal_get__reflectionProbeData();

  constexpr int32_t const& __cordl_internal_get__resolutionBeforeDownsample() const;

  constexpr int32_t& __cordl_internal_get__resolutionBeforeDownsample();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__size() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__size();

  constexpr void __cordl_internal_set__blackCubemap(::UnityW<::UnityEngine::Cubemap> value);

  constexpr void __cordl_internal_set__downsampleByHalfCount(int32_t value);

  constexpr void __cordl_internal_set__offset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__reflectionProbeData(::UnityW<::GlobalNamespace::ReflectionProbeDataSO> value);

  constexpr void __cordl_internal_set__resolutionBeforeDownsample(int32_t value);

  constexpr void __cordl_internal_set__size(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x2680b04, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__reflectionProbeBoundsMaxPropertyId();

  static inline int32_t getStaticF__reflectionProbeBoundsMinPropertyId();

  static inline int32_t getStaticF__reflectionProbePositionPropertyId();

  static inline int32_t getStaticF__reflectionProbeTexture1PropertyId();

  static inline int32_t getStaticF__reflectionProbeTexture2PropertyId();

  /// @brief Method get_downsampleByHalfCount, addr 0x2680818, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_downsampleByHalfCount();

  /// @brief Method get_position, addr 0x26807f0, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_reflectionProbeData, addr 0x26807e0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::ReflectionProbeDataSO> get_reflectionProbeData();

  /// @brief Method get_resolutionBeforeDownsample, addr 0x2680810, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_resolutionBeforeDownsample();

  static inline void setStaticF__reflectionProbeBoundsMaxPropertyId(int32_t value);

  static inline void setStaticF__reflectionProbeBoundsMinPropertyId(int32_t value);

  static inline void setStaticF__reflectionProbePositionPropertyId(int32_t value);

  static inline void setStaticF__reflectionProbeTexture1PropertyId(int32_t value);

  static inline void setStaticF__reflectionProbeTexture2PropertyId(int32_t value);

  /// @brief Method set_reflectionProbeData, addr 0x26807e8, size 0x8, virtual false, abstract: false, final false
  inline void set_reflectionProbeData(::GlobalNamespace::ReflectionProbeDataSO* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BakedReflectionProbe();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BakedReflectionProbe", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BakedReflectionProbe(BakedReflectionProbe&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BakedReflectionProbe", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BakedReflectionProbe(BakedReflectionProbe const&) = delete;

  /// @brief Field _resolutionBeforeDownsample, offset: 0x18, size: 0x4, def value: None
  int32_t ____resolutionBeforeDownsample;

  /// @brief Field _downsampleByHalfCount, offset: 0x1c, size: 0x4, def value: None
  int32_t ____downsampleByHalfCount;

  /// @brief Field _size, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____size;

  /// @brief Field _offset, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____offset;

  /// @brief Field _reflectionProbeData, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ReflectionProbeDataSO> ____reflectionProbeData;

  /// @brief Field _blackCubemap, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Cubemap> ____blackCubemap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BakedReflectionProbe, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BakedReflectionProbe, ____resolutionBeforeDownsample) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakedReflectionProbe, ____downsampleByHalfCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakedReflectionProbe, ____size) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakedReflectionProbe, ____offset) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakedReflectionProbe, ____reflectionProbeData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BakedReflectionProbe, ____blackCubemap) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BakedReflectionProbe);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BakedReflectionProbe*, "", "BakedReflectionProbe");
