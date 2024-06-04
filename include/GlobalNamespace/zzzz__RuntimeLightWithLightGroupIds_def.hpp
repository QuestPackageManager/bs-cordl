#pragma once
// IWYU pragma private; include "GlobalNamespace/RuntimeLightWithLightGroupIds.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIds_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeLightWithLightGroupIds)
namespace GlobalNamespace {
class LightGroup;
}
namespace GlobalNamespace {
class __LightWithIds__LightWithId;
}
namespace GlobalNamespace {
class __RuntimeLightWithLightGroupIds__LightIntensitiesWithId;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class RuntimeLightWithLightGroupIds;
}
namespace GlobalNamespace {
class __RuntimeLightWithLightGroupIds__LightIntensitiesWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RuntimeLightWithLightGroupIds);
MARK_REF_PTR_T(::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId);
// Type: ::LightIntensitiesWithId
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RuntimeLightWithLightGroupIds::LightIntensitiesWithId*
class CORDL_TYPE __RuntimeLightWithLightGroupIds__LightIntensitiesWithId : public ::GlobalNamespace::__LightWithIds__LightWithId {
public:
  // Declarations
  /// @brief Field _intensity, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__intensity, put = __cordl_internal_set__intensity)) float_t _intensity;

  __declspec(property(get = get_intensity, put = set_intensity)) float_t intensity;

  static inline ::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId* New_ctor(int32_t lightId, float_t intensity);

  constexpr float_t const& __cordl_internal_get__intensity() const;

  constexpr float_t& __cordl_internal_get__intensity();

  constexpr void __cordl_internal_set__intensity(float_t value);

  /// @brief Method .ctor, addr 0x250f944, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t lightId, float_t intensity);

  /// @brief Method get_intensity, addr 0x250fae8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_intensity();

  /// @brief Method set_intensity, addr 0x250faf0, size 0x8, virtual false, abstract: false, final false
  inline void set_intensity(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RuntimeLightWithLightGroupIds__LightIntensitiesWithId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RuntimeLightWithLightGroupIds__LightIntensitiesWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RuntimeLightWithLightGroupIds__LightIntensitiesWithId(__RuntimeLightWithLightGroupIds__LightIntensitiesWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RuntimeLightWithLightGroupIds__LightIntensitiesWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RuntimeLightWithLightGroupIds__LightIntensitiesWithId(__RuntimeLightWithLightGroupIds__LightIntensitiesWithId const&) = delete;

  /// @brief Field _intensity, offset: 0x30, size: 0x4, def value: None
  float_t ____intensity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId, ____intensity) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RuntimeLightWithLightGroupIds
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RuntimeLightWithLightGroupIds*
class CORDL_TYPE RuntimeLightWithLightGroupIds : public ::GlobalNamespace::LightWithIds {
public:
  // Declarations
  using LightIntensitiesWithId = ::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId;

  /// @brief Field _intensity, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__intensity, put = __cordl_internal_set__intensity)) float_t _intensity;

  /// @brief Field _lightGroupList, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__lightGroupList,
                      put = __cordl_internal_set__lightGroupList))::ArrayW<::UnityW<::GlobalNamespace::LightGroup>, ::Array<::UnityW<::GlobalNamespace::LightGroup>>*> _lightGroupList;

  /// @brief Field _lightIntensityData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__lightIntensityData,
                      put = __cordl_internal_set__lightIntensityData))::ArrayW<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*,
                                                                               ::Array<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*>*> _lightIntensityData;

  /// @brief Field _maxIntensity, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__maxIntensity, put = __cordl_internal_set__maxIntensity)) float_t _maxIntensity;

  /// @brief Field _multiplyColorByAlpha, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__multiplyColorByAlpha, put = __cordl_internal_set__multiplyColorByAlpha)) bool _multiplyColorByAlpha;

  /// @brief Method Awake, addr 0x250f784, size 0x1c0, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method ColorWasSet, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  /// @brief Method GetLightWithIds, addr 0x250fac8, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>* GetLightWithIds();

  static inline ::GlobalNamespace::RuntimeLightWithLightGroupIds* New_ctor();

  /// @brief Method ProcessColor, addr 0x250faa8, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Color ProcessColor(::UnityEngine::Color color, float_t intensity);

  /// @brief Method ProcessNewColorData, addr 0x250f96c, size 0x13c, virtual true, abstract: false, final false
  inline void ProcessNewColorData();

  constexpr float_t const& __cordl_internal_get__intensity() const;

  constexpr float_t& __cordl_internal_get__intensity();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroup>, ::Array<::UnityW<::GlobalNamespace::LightGroup>>*> const& __cordl_internal_get__lightGroupList() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroup>, ::Array<::UnityW<::GlobalNamespace::LightGroup>>*>& __cordl_internal_get__lightGroupList();

  constexpr ::ArrayW<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*>*> const&
  __cordl_internal_get__lightIntensityData() const;

  constexpr ::ArrayW<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*>*>&
  __cordl_internal_get__lightIntensityData();

  constexpr float_t const& __cordl_internal_get__maxIntensity() const;

  constexpr float_t& __cordl_internal_get__maxIntensity();

  constexpr bool const& __cordl_internal_get__multiplyColorByAlpha() const;

  constexpr bool& __cordl_internal_get__multiplyColorByAlpha();

  constexpr void __cordl_internal_set__intensity(float_t value);

  constexpr void __cordl_internal_set__lightGroupList(::ArrayW<::UnityW<::GlobalNamespace::LightGroup>, ::Array<::UnityW<::GlobalNamespace::LightGroup>>*> value);

  constexpr void __cordl_internal_set__lightIntensityData(
      ::ArrayW<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*>*> value);

  constexpr void __cordl_internal_set__maxIntensity(float_t value);

  constexpr void __cordl_internal_set__multiplyColorByAlpha(bool value);

  /// @brief Method .ctor, addr 0x250fad0, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeLightWithLightGroupIds();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeLightWithLightGroupIds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeLightWithLightGroupIds(RuntimeLightWithLightGroupIds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeLightWithLightGroupIds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeLightWithLightGroupIds(RuntimeLightWithLightGroupIds const&) = delete;

  /// @brief Field _lightGroupList, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::LightGroup>, ::Array<::UnityW<::GlobalNamespace::LightGroup>>*> ____lightGroupList;

  /// @brief Field _intensity, offset: 0x38, size: 0x4, def value: None
  float_t ____intensity;

  /// @brief Field _maxIntensity, offset: 0x3c, size: 0x4, def value: None
  float_t ____maxIntensity;

  /// @brief Field _multiplyColorByAlpha, offset: 0x40, size: 0x1, def value: None
  bool ____multiplyColorByAlpha;

  /// @brief Field _lightIntensityData, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*>*> ____lightIntensityData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RuntimeLightWithLightGroupIds, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RuntimeLightWithLightGroupIds, ____lightGroupList) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RuntimeLightWithLightGroupIds, ____intensity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RuntimeLightWithLightGroupIds, ____maxIntensity) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RuntimeLightWithLightGroupIds, ____multiplyColorByAlpha) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RuntimeLightWithLightGroupIds, ____lightIntensityData) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RuntimeLightWithLightGroupIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RuntimeLightWithLightGroupIds*, "", "RuntimeLightWithLightGroupIds");
NEED_NO_BOX(::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*, "", "RuntimeLightWithLightGroupIds/LightIntensitiesWithId");
