#pragma once
// IWYU pragma private; include "GlobalNamespace/GlobalShaderColorLightWithIds.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIds_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GlobalShaderColorLightWithIds)
namespace GlobalNamespace {
class GlobalShaderColorLightWithIds_LightIntensitiesWithId;
}
namespace GlobalNamespace {
class LightWithIds_LightWithId;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalShaderColorLightWithIds;
}
namespace GlobalNamespace {
class GlobalShaderColorLightWithIds_LightIntensitiesWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GlobalShaderColorLightWithIds);
MARK_REF_PTR_T(::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId);
// Dependencies LightWithIds::LightWithId
namespace GlobalNamespace {
// Is value type: false
// CS Name: GlobalShaderColorLightWithIds/LightIntensitiesWithId
class CORDL_TYPE GlobalShaderColorLightWithIds_LightIntensitiesWithId : public ::GlobalNamespace::LightWithIds_LightWithId {
public:
  // Declarations
  /// @brief Field _intensity, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__intensity, put = __cordl_internal_set__intensity)) float_t _intensity;

  __declspec(property(get = get_intensity, put = set_intensity)) float_t intensity;

  static inline ::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId* New_ctor(int32_t lightId, float_t lightIntensity);

  constexpr float_t const& __cordl_internal_get__intensity() const;

  constexpr float_t& __cordl_internal_get__intensity();

  constexpr void __cordl_internal_set__intensity(float_t value);

  /// @brief Method .ctor, addr 0x39e6fd4, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(int32_t lightId, float_t lightIntensity);

  /// @brief Method get_intensity, addr 0x39e6fc4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_intensity();

  /// @brief Method set_intensity, addr 0x39e6fcc, size 0x8, virtual false, abstract: false, final false
  inline void set_intensity(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GlobalShaderColorLightWithIds_LightIntensitiesWithId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GlobalShaderColorLightWithIds_LightIntensitiesWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GlobalShaderColorLightWithIds_LightIntensitiesWithId(GlobalShaderColorLightWithIds_LightIntensitiesWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GlobalShaderColorLightWithIds_LightIntensitiesWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GlobalShaderColorLightWithIds_LightIntensitiesWithId(GlobalShaderColorLightWithIds_LightIntensitiesWithId const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16313 };

  /// @brief Field _intensity, offset: 0x30, size: 0x4, def value: None
  float_t ____intensity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId, ____intensity) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies LightWithIds
namespace GlobalNamespace {
// Is value type: false
// CS Name: GlobalShaderColorLightWithIds
class CORDL_TYPE GlobalShaderColorLightWithIds : public ::GlobalNamespace::LightWithIds {
public:
  // Declarations
  using LightIntensitiesWithId = ::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId;

  /// @brief Field _globalLightTintColorPropertyId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__globalLightTintColorPropertyId, put = setStaticF__globalLightTintColorPropertyId)) int32_t _globalLightTintColorPropertyId;

  /// @brief Field _lightIntensityData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__lightIntensityData,
                      put = __cordl_internal_set__lightIntensityData)) ::ArrayW<::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId*,
                                                                                ::Array<::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId*>*>
      _lightIntensityData;

  /// @brief Field _overrideSaturation, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__overrideSaturation, put = __cordl_internal_set__overrideSaturation)) bool _overrideSaturation;

  /// @brief Field _saturation, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__saturation, put = __cordl_internal_set__saturation)) float_t _saturation;

  /// @brief Method GetLightWithIds, addr 0x39e6f44, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LightWithIds_LightWithId*>* GetLightWithIds();

  static inline ::GlobalNamespace::GlobalShaderColorLightWithIds* New_ctor();

  /// @brief Method ProcessNewColorData, addr 0x39e6df8, size 0x14c, virtual true, abstract: false, final false
  inline void ProcessNewColorData();

  constexpr ::ArrayW<::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId*, ::Array<::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId*>*> const&
  __cordl_internal_get__lightIntensityData() const;

  constexpr ::ArrayW<::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId*, ::Array<::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId*>*>&
  __cordl_internal_get__lightIntensityData();

  constexpr bool const& __cordl_internal_get__overrideSaturation() const;

  constexpr bool& __cordl_internal_get__overrideSaturation();

  constexpr float_t const& __cordl_internal_get__saturation() const;

  constexpr float_t& __cordl_internal_get__saturation();

  constexpr void __cordl_internal_set__lightIntensityData(
      ::ArrayW<::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId*, ::Array<::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId*>*> value);

  constexpr void __cordl_internal_set__overrideSaturation(bool value);

  constexpr void __cordl_internal_set__saturation(float_t value);

  /// @brief Method .ctor, addr 0x39e6f4c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__globalLightTintColorPropertyId();

  static inline void setStaticF__globalLightTintColorPropertyId(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GlobalShaderColorLightWithIds();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GlobalShaderColorLightWithIds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GlobalShaderColorLightWithIds(GlobalShaderColorLightWithIds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GlobalShaderColorLightWithIds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GlobalShaderColorLightWithIds(GlobalShaderColorLightWithIds const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16314 };

  /// @brief Field _lightIntensityData, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId*, ::Array<::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId*>*> ____lightIntensityData;

  /// @brief Field _overrideSaturation, offset: 0x40, size: 0x1, def value: None
  bool ____overrideSaturation;

  /// @brief Field _saturation, offset: 0x44, size: 0x4, def value: None
  float_t ____saturation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GlobalShaderColorLightWithIds, ____lightIntensityData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalShaderColorLightWithIds, ____overrideSaturation) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalShaderColorLightWithIds, ____saturation) == 0x44, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GlobalShaderColorLightWithIds, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GlobalShaderColorLightWithIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GlobalShaderColorLightWithIds*, "", "GlobalShaderColorLightWithIds");
NEED_NO_BOX(::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GlobalShaderColorLightWithIds_LightIntensitiesWithId*, "", "GlobalShaderColorLightWithIds/LightIntensitiesWithId");
