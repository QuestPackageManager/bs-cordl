#pragma once
// IWYU pragma private; include "GlobalNamespace/RuntimeLightWithIds.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColorMixAndWeightingApproach_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIds_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeLightWithIds)
namespace GlobalNamespace {
struct ColorMixAndWeightingApproach;
}
namespace GlobalNamespace {
class __LightWithIds__LightWithId;
}
namespace GlobalNamespace {
class __RuntimeLightWithIds__LightIntensitiesWithId;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class RuntimeLightWithIds;
}
namespace GlobalNamespace {
class __RuntimeLightWithIds__LightIntensitiesWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RuntimeLightWithIds);
MARK_REF_PTR_T(::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId);
// Type: ::LightIntensitiesWithId
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RuntimeLightWithIds::LightIntensitiesWithId*
class CORDL_TYPE __RuntimeLightWithIds__LightIntensitiesWithId : public ::GlobalNamespace::__LightWithIds__LightWithId {
public:
  // Declarations
  /// @brief Field _intensity, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__intensity, put = __cordl_internal_set__intensity)) float_t _intensity;

  __declspec(property(get = get_intensity, put = set_intensity)) float_t intensity;

  static inline ::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId* New_ctor(int32_t lightId, float_t lightIntensity);

  constexpr float_t const& __cordl_internal_get__intensity() const;

  constexpr float_t& __cordl_internal_get__intensity();

  constexpr void __cordl_internal_set__intensity(float_t value);

  /// @brief Method .ctor, addr 0x250f75c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t lightId, float_t lightIntensity);

  /// @brief Method get_intensity, addr 0x250f74c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_intensity();

  /// @brief Method set_intensity, addr 0x250f754, size 0x8, virtual false, abstract: false, final false
  inline void set_intensity(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RuntimeLightWithIds__LightIntensitiesWithId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RuntimeLightWithIds__LightIntensitiesWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RuntimeLightWithIds__LightIntensitiesWithId(__RuntimeLightWithIds__LightIntensitiesWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RuntimeLightWithIds__LightIntensitiesWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RuntimeLightWithIds__LightIntensitiesWithId(__RuntimeLightWithIds__LightIntensitiesWithId const&) = delete;

  /// @brief Field _intensity, offset: 0x30, size: 0x4, def value: None
  float_t ____intensity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId, ____intensity) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RuntimeLightWithIds
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RuntimeLightWithIds*
class CORDL_TYPE RuntimeLightWithIds : public ::GlobalNamespace::LightWithIds {
public:
  // Declarations
  using LightIntensitiesWithId = ::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId;

  /// @brief Field _intensity, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__intensity, put = __cordl_internal_set__intensity)) float_t _intensity;

  /// @brief Field _lightIntensityData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__lightIntensityData,
                      put = __cordl_internal_set__lightIntensityData))::ArrayW<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*,
                                                                               ::Array<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*>*> _lightIntensityData;

  /// @brief Field _maxIntensity, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__maxIntensity, put = __cordl_internal_set__maxIntensity)) float_t _maxIntensity;

  /// @brief Field _mixType, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__mixType, put = __cordl_internal_set__mixType))::GlobalNamespace::ColorMixAndWeightingApproach _mixType;

  /// @brief Field _multiplyColorByAlpha, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__multiplyColorByAlpha, put = __cordl_internal_set__multiplyColorByAlpha)) bool _multiplyColorByAlpha;

  __declspec(property(get = get_mixType))::GlobalNamespace::ColorMixAndWeightingApproach mixType;

  /// @brief Method ColorWasSet, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  /// @brief Method GetLightWithIds, addr 0x250f744, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>* GetLightWithIds();

  static inline ::GlobalNamespace::RuntimeLightWithIds* New_ctor();

  /// @brief Method ProcessColor, addr 0x250f70c, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Color ProcessColor(::UnityEngine::Color color, float_t intensity);

  /// @brief Method ProcessNewColorData, addr 0x250f598, size 0x174, virtual true, abstract: false, final false
  inline void ProcessNewColorData();

  constexpr float_t const& __cordl_internal_get__intensity() const;

  constexpr float_t& __cordl_internal_get__intensity();

  constexpr ::ArrayW<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*>*> const&
  __cordl_internal_get__lightIntensityData() const;

  constexpr ::ArrayW<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*>*>&
  __cordl_internal_get__lightIntensityData();

  constexpr float_t const& __cordl_internal_get__maxIntensity() const;

  constexpr float_t& __cordl_internal_get__maxIntensity();

  constexpr ::GlobalNamespace::ColorMixAndWeightingApproach const& __cordl_internal_get__mixType() const;

  constexpr ::GlobalNamespace::ColorMixAndWeightingApproach& __cordl_internal_get__mixType();

  constexpr bool const& __cordl_internal_get__multiplyColorByAlpha() const;

  constexpr bool& __cordl_internal_get__multiplyColorByAlpha();

  constexpr void __cordl_internal_set__intensity(float_t value);

  constexpr void __cordl_internal_set__lightIntensityData(
      ::ArrayW<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*>*> value);

  constexpr void __cordl_internal_set__maxIntensity(float_t value);

  constexpr void __cordl_internal_set__mixType(::GlobalNamespace::ColorMixAndWeightingApproach value);

  constexpr void __cordl_internal_set__multiplyColorByAlpha(bool value);

  /// @brief Method .ctor, addr 0x250f544, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_mixType, addr 0x250f594, size 0x4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorMixAndWeightingApproach get_mixType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeLightWithIds();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeLightWithIds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeLightWithIds(RuntimeLightWithIds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeLightWithIds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeLightWithIds(RuntimeLightWithIds const&) = delete;

  /// @brief Field _lightIntensityData, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*>*> ____lightIntensityData;

  /// @brief Field _intensity, offset: 0x38, size: 0x4, def value: None
  float_t ____intensity;

  /// @brief Field _maxIntensity, offset: 0x3c, size: 0x4, def value: None
  float_t ____maxIntensity;

  /// @brief Field _multiplyColorByAlpha, offset: 0x40, size: 0x1, def value: None
  bool ____multiplyColorByAlpha;

  /// @brief Field _mixType, offset: 0x44, size: 0x4, def value: None
  ::GlobalNamespace::ColorMixAndWeightingApproach ____mixType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RuntimeLightWithIds, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RuntimeLightWithIds, ____lightIntensityData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RuntimeLightWithIds, ____intensity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RuntimeLightWithIds, ____maxIntensity) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RuntimeLightWithIds, ____multiplyColorByAlpha) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RuntimeLightWithIds, ____mixType) == 0x44, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RuntimeLightWithIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RuntimeLightWithIds*, "", "RuntimeLightWithIds");
NEED_NO_BOX(::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RuntimeLightWithIds__LightIntensitiesWithId*, "", "RuntimeLightWithIds/LightIntensitiesWithId");
