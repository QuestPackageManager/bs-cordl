#pragma once
// IWYU pragma private; include "GlobalNamespace/GlobalShaderColorLightWithIds.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIds_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GlobalShaderColorLightWithIds)
namespace GlobalNamespace {
class __GlobalShaderColorLightWithIds__LightIntensitiesWithId;
}
namespace GlobalNamespace {
class __LightWithIds__LightWithId;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalShaderColorLightWithIds;
}
namespace GlobalNamespace {
class __GlobalShaderColorLightWithIds__LightIntensitiesWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GlobalShaderColorLightWithIds);
MARK_REF_PTR_T(::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId);
// Type: ::LightIntensitiesWithId
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GlobalShaderColorLightWithIds::LightIntensitiesWithId*
class CORDL_TYPE __GlobalShaderColorLightWithIds__LightIntensitiesWithId : public ::GlobalNamespace::__LightWithIds__LightWithId {
public:
  // Declarations
  /// @brief Field _intensity, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__intensity, put = __cordl_internal_set__intensity)) float_t _intensity;

  __declspec(property(get = get_intensity, put = set_intensity)) float_t intensity;

  static inline ::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId* New_ctor(int32_t lightId, float_t lightIntensity);

  constexpr float_t const& __cordl_internal_get__intensity() const;

  constexpr float_t& __cordl_internal_get__intensity();

  constexpr void __cordl_internal_set__intensity(float_t value);

  /// @brief Method .ctor, addr 0x398b914, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(int32_t lightId, float_t lightIntensity);

  /// @brief Method get_intensity, addr 0x398b904, size 0x8, virtual false, abstract: false, final false
  inline float_t get_intensity();

  /// @brief Method set_intensity, addr 0x398b90c, size 0x8, virtual false, abstract: false, final false
  inline void set_intensity(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GlobalShaderColorLightWithIds__LightIntensitiesWithId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GlobalShaderColorLightWithIds__LightIntensitiesWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GlobalShaderColorLightWithIds__LightIntensitiesWithId(__GlobalShaderColorLightWithIds__LightIntensitiesWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GlobalShaderColorLightWithIds__LightIntensitiesWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GlobalShaderColorLightWithIds__LightIntensitiesWithId(__GlobalShaderColorLightWithIds__LightIntensitiesWithId const&) = delete;

  /// @brief Field _intensity, offset: 0x30, size: 0x4, def value: None
  float_t ____intensity;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16274 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId, ____intensity) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GlobalShaderColorLightWithIds
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GlobalShaderColorLightWithIds*
class CORDL_TYPE GlobalShaderColorLightWithIds : public ::GlobalNamespace::LightWithIds {
public:
  // Declarations
  using LightIntensitiesWithId = ::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId;

  /// @brief Field _globalLightTintColorPropertyId, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__globalLightTintColorPropertyId, put = setStaticF__globalLightTintColorPropertyId)) int32_t _globalLightTintColorPropertyId;

  /// @brief Field _lightIntensityData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__lightIntensityData,
                      put = __cordl_internal_set__lightIntensityData)) ::ArrayW<::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId*,
                                                                                ::Array<::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId*>*>
      _lightIntensityData;

  /// @brief Field _overrideSaturation, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__overrideSaturation, put = __cordl_internal_set__overrideSaturation)) bool _overrideSaturation;

  /// @brief Field _saturation, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__saturation, put = __cordl_internal_set__saturation)) float_t _saturation;

  /// @brief Method GetLightWithIds, addr 0x398b884, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>* GetLightWithIds();

  static inline ::GlobalNamespace::GlobalShaderColorLightWithIds* New_ctor();

  /// @brief Method ProcessNewColorData, addr 0x398b738, size 0x14c, virtual true, abstract: false, final false
  inline void ProcessNewColorData();

  constexpr ::ArrayW<::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId*>*> const&
  __cordl_internal_get__lightIntensityData() const;

  constexpr ::ArrayW<::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId*>*>&
  __cordl_internal_get__lightIntensityData();

  constexpr bool const& __cordl_internal_get__overrideSaturation() const;

  constexpr bool& __cordl_internal_get__overrideSaturation();

  constexpr float_t const& __cordl_internal_get__saturation() const;

  constexpr float_t& __cordl_internal_get__saturation();

  constexpr void __cordl_internal_set__lightIntensityData(
      ::ArrayW<::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId*>*> value);

  constexpr void __cordl_internal_set__overrideSaturation(bool value);

  constexpr void __cordl_internal_set__saturation(float_t value);

  /// @brief Method .ctor, addr 0x398b88c, size 0x10, virtual false, abstract: false, final false
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

  /// @brief Field _lightIntensityData, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId*>*> ____lightIntensityData;

  /// @brief Field _overrideSaturation, offset: 0x40, size: 0x1, def value: None
  bool ____overrideSaturation;

  /// @brief Field _saturation, offset: 0x44, size: 0x4, def value: None
  float_t ____saturation;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16275 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GlobalShaderColorLightWithIds, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalShaderColorLightWithIds, ____lightIntensityData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalShaderColorLightWithIds, ____overrideSaturation) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GlobalShaderColorLightWithIds, ____saturation) == 0x44, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GlobalShaderColorLightWithIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GlobalShaderColorLightWithIds*, "", "GlobalShaderColorLightWithIds");
NEED_NO_BOX(::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GlobalShaderColorLightWithIds__LightIntensitiesWithId*, "", "GlobalShaderColorLightWithIds/LightIntensitiesWithId");
