#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5854))
// CS Name: ::BakedReflectionProbe*
class CORDL_TYPE BakedReflectionProbe : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _resolutionBeforeDownsample, offset 0x18, size 0x4
  __declspec(property(get = __get__resolutionBeforeDownsample, put = __set__resolutionBeforeDownsample)) int32_t _resolutionBeforeDownsample;

  /// @brief Field _downsampleByHalfCount, offset 0x1c, size 0x4
  __declspec(property(get = __get__downsampleByHalfCount, put = __set__downsampleByHalfCount)) int32_t _downsampleByHalfCount;

  /// @brief Field _size, offset 0x20, size 0xc
  __declspec(property(get = __get__size, put = __set__size))::UnityEngine::Vector3 _size;

  /// @brief Field _offset, offset 0x2c, size 0xc
  __declspec(property(get = __get__offset, put = __set__offset))::UnityEngine::Vector3 _offset;

  /// @brief Field _reflectionProbeData, offset 0x38, size 0x8
  __declspec(property(get = __get__reflectionProbeData, put = __set__reflectionProbeData))::GlobalNamespace::ReflectionProbeDataSO* _reflectionProbeData;

  /// @brief Field _blackCubemap, offset 0x40, size 0x8
  __declspec(property(get = __get__blackCubemap, put = __set__blackCubemap))::UnityEngine::Cubemap* _blackCubemap;

  /// @brief Field _reflectionProbeBoundsMinPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__reflectionProbeBoundsMinPropertyId, put = setStaticF__reflectionProbeBoundsMinPropertyId)) int32_t _reflectionProbeBoundsMinPropertyId;

  /// @brief Field _reflectionProbeBoundsMaxPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__reflectionProbeBoundsMaxPropertyId, put = setStaticF__reflectionProbeBoundsMaxPropertyId)) int32_t _reflectionProbeBoundsMaxPropertyId;

  /// @brief Field _reflectionProbePositionPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__reflectionProbePositionPropertyId, put = setStaticF__reflectionProbePositionPropertyId)) int32_t _reflectionProbePositionPropertyId;

  /// @brief Field _reflectionProbeTexture1PropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__reflectionProbeTexture1PropertyId, put = setStaticF__reflectionProbeTexture1PropertyId)) int32_t _reflectionProbeTexture1PropertyId;

  /// @brief Field _reflectionProbeTexture2PropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__reflectionProbeTexture2PropertyId, put = setStaticF__reflectionProbeTexture2PropertyId)) int32_t _reflectionProbeTexture2PropertyId;

  __declspec(property(get = get_reflectionProbeData, put = set_reflectionProbeData))::GlobalNamespace::ReflectionProbeDataSO* reflectionProbeData;

  __declspec(property(get = get_position))::UnityEngine::Vector3 position;

  __declspec(property(get = get_resolutionBeforeDownsample)) int32_t resolutionBeforeDownsample;

  __declspec(property(get = get_downsampleByHalfCount)) int32_t downsampleByHalfCount;

  constexpr int32_t& __get__resolutionBeforeDownsample();

  constexpr int32_t const& __get__resolutionBeforeDownsample() const;

  constexpr void __set__resolutionBeforeDownsample(int32_t value);

  constexpr int32_t& __get__downsampleByHalfCount();

  constexpr int32_t const& __get__downsampleByHalfCount() const;

  constexpr void __set__downsampleByHalfCount(int32_t value);

  constexpr ::UnityEngine::Vector3& __get__size();

  constexpr ::UnityEngine::Vector3 const& __get__size() const;

  constexpr void __set__size(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__offset();

  constexpr ::UnityEngine::Vector3 const& __get__offset() const;

  constexpr void __set__offset(::UnityEngine::Vector3 value);

  constexpr ::GlobalNamespace::ReflectionProbeDataSO*& __get__reflectionProbeData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ReflectionProbeDataSO*> const& __get__reflectionProbeData() const;

  constexpr void __set__reflectionProbeData(::GlobalNamespace::ReflectionProbeDataSO* value);

  constexpr ::UnityEngine::Cubemap*& __get__blackCubemap();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Cubemap*> const& __get__blackCubemap() const;

  constexpr void __set__blackCubemap(::UnityEngine::Cubemap* value);

  static inline void setStaticF__reflectionProbeBoundsMinPropertyId(int32_t value);

  static inline int32_t getStaticF__reflectionProbeBoundsMinPropertyId();

  static inline void setStaticF__reflectionProbeBoundsMaxPropertyId(int32_t value);

  static inline int32_t getStaticF__reflectionProbeBoundsMaxPropertyId();

  static inline void setStaticF__reflectionProbePositionPropertyId(int32_t value);

  static inline int32_t getStaticF__reflectionProbePositionPropertyId();

  static inline void setStaticF__reflectionProbeTexture1PropertyId(int32_t value);

  static inline int32_t getStaticF__reflectionProbeTexture1PropertyId();

  static inline void setStaticF__reflectionProbeTexture2PropertyId(int32_t value);

  static inline int32_t getStaticF__reflectionProbeTexture2PropertyId();

  /// @brief Method get_reflectionProbeData, addr 0x22f675c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ReflectionProbeDataSO* get_reflectionProbeData();

  /// @brief Method set_reflectionProbeData, addr 0x22f6764, size 0x8, virtual false, abstract: false, final false
  inline void set_reflectionProbeData(::GlobalNamespace::ReflectionProbeDataSO* value);

  /// @brief Method get_position, addr 0x22f676c, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_resolutionBeforeDownsample, addr 0x22f678c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_resolutionBeforeDownsample();

  /// @brief Method get_downsampleByHalfCount, addr 0x22f6794, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_downsampleByHalfCount();

  /// @brief Method Start, addr 0x22f679c, size 0xb8, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method SendDataToShaders, addr 0x22f6854, size 0x22c, virtual false, abstract: false, final false
  inline void SendDataToShaders();

  static inline ::GlobalNamespace::BakedReflectionProbe* New_ctor();

  /// @brief Method .ctor, addr 0x22f6a80, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BakedReflectionProbe", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BakedReflectionProbe(BakedReflectionProbe&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BakedReflectionProbe", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BakedReflectionProbe(BakedReflectionProbe const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BakedReflectionProbe();

public:
  /// @brief Field _resolutionBeforeDownsample, offset: 0x18, size: 0x4, def value: None
  int32_t ____resolutionBeforeDownsample;

  /// @brief Field _downsampleByHalfCount, offset: 0x1c, size: 0x4, def value: None
  int32_t ____downsampleByHalfCount;

  /// @brief Field _size, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____size;

  /// @brief Field _offset, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____offset;

  /// @brief Field _reflectionProbeData, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::ReflectionProbeDataSO* ____reflectionProbeData;

  /// @brief Field _blackCubemap, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Cubemap* ____blackCubemap;

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
