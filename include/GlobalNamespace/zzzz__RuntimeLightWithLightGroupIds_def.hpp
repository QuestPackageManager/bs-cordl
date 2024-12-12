#pragma once
// IWYU pragma private; include "GlobalNamespace/RuntimeLightWithLightGroupIds.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIds_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeLightWithLightGroupIds)
namespace GlobalNamespace {
class LightGroup;
}
namespace GlobalNamespace {
class LightWithIds_LightWithId;
}
namespace GlobalNamespace {
class RuntimeLightWithLightGroupIds_LightIntensitiesWithId;
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
class RuntimeLightWithLightGroupIds_LightIntensitiesWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RuntimeLightWithLightGroupIds);
MARK_REF_PTR_T(::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId);
// Dependencies LightWithIds::LightWithId
namespace GlobalNamespace {
// Is value type: false
// CS Name: RuntimeLightWithLightGroupIds/LightIntensitiesWithId
class CORDL_TYPE RuntimeLightWithLightGroupIds_LightIntensitiesWithId : public ::GlobalNamespace::LightWithIds_LightWithId {
public:
  // Declarations
  /// @brief Field _intensity, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__intensity, put = __cordl_internal_set__intensity)) float_t _intensity;

  __declspec(property(get = get_intensity, put = set_intensity)) float_t intensity;

  static inline ::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId* New_ctor(int32_t lightId, float_t intensity);

  constexpr float_t const& __cordl_internal_get__intensity() const;

  constexpr float_t& __cordl_internal_get__intensity();

  constexpr void __cordl_internal_set__intensity(float_t value);

  /// @brief Method .ctor, addr 0x39e5674, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t lightId, float_t intensity);

  /// @brief Method get_intensity, addr 0x39e5818, size 0x8, virtual false, abstract: false, final false
  inline float_t get_intensity();

  /// @brief Method set_intensity, addr 0x39e5820, size 0x8, virtual false, abstract: false, final false
  inline void set_intensity(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeLightWithLightGroupIds_LightIntensitiesWithId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeLightWithLightGroupIds_LightIntensitiesWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeLightWithLightGroupIds_LightIntensitiesWithId(RuntimeLightWithLightGroupIds_LightIntensitiesWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeLightWithLightGroupIds_LightIntensitiesWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeLightWithLightGroupIds_LightIntensitiesWithId(RuntimeLightWithLightGroupIds_LightIntensitiesWithId const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16334 };

  /// @brief Field _intensity, offset: 0x30, size: 0x4, def value: None
  float_t ____intensity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId, ____intensity) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies LightWithIds
namespace GlobalNamespace {
// Is value type: false
// CS Name: RuntimeLightWithLightGroupIds
class CORDL_TYPE RuntimeLightWithLightGroupIds : public ::GlobalNamespace::LightWithIds {
public:
  // Declarations
  using LightIntensitiesWithId = ::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId;

  /// @brief Field _intensity, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__intensity, put = __cordl_internal_set__intensity)) float_t _intensity;

  /// @brief Field _lightGroupList, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__lightGroupList,
                      put = __cordl_internal_set__lightGroupList)) ::ArrayW<::UnityW<::GlobalNamespace::LightGroup>, ::Array<::UnityW<::GlobalNamespace::LightGroup>>*>
      _lightGroupList;

  /// @brief Field _lightIntensityData, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__lightIntensityData,
                      put = __cordl_internal_set__lightIntensityData)) ::ArrayW<::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId*,
                                                                                ::Array<::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId*>*>
      _lightIntensityData;

  /// @brief Field _maxIntensity, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__maxIntensity, put = __cordl_internal_set__maxIntensity)) float_t _maxIntensity;

  /// @brief Field _multiplyColorByAlpha, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__multiplyColorByAlpha, put = __cordl_internal_set__multiplyColorByAlpha)) bool _multiplyColorByAlpha;

  /// @brief Method Awake, addr 0x39e54b0, size 0x1c4, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method ColorWasSet, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  /// @brief Method GetLightWithIds, addr 0x39e57f8, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LightWithIds_LightWithId*>* GetLightWithIds();

  static inline ::GlobalNamespace::RuntimeLightWithLightGroupIds* New_ctor();

  /// @brief Method ProcessColor, addr 0x39e57d8, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Color ProcessColor(::UnityEngine::Color color, float_t intensity);

  /// @brief Method ProcessNewColorData, addr 0x39e569c, size 0x13c, virtual true, abstract: false, final false
  inline void ProcessNewColorData();

  constexpr float_t const& __cordl_internal_get__intensity() const;

  constexpr float_t& __cordl_internal_get__intensity();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroup>, ::Array<::UnityW<::GlobalNamespace::LightGroup>>*> const& __cordl_internal_get__lightGroupList() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroup>, ::Array<::UnityW<::GlobalNamespace::LightGroup>>*>& __cordl_internal_get__lightGroupList();

  constexpr ::ArrayW<::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId*, ::Array<::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId*>*> const&
  __cordl_internal_get__lightIntensityData() const;

  constexpr ::ArrayW<::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId*, ::Array<::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId*>*>&
  __cordl_internal_get__lightIntensityData();

  constexpr float_t const& __cordl_internal_get__maxIntensity() const;

  constexpr float_t& __cordl_internal_get__maxIntensity();

  constexpr bool const& __cordl_internal_get__multiplyColorByAlpha() const;

  constexpr bool& __cordl_internal_get__multiplyColorByAlpha();

  constexpr void __cordl_internal_set__intensity(float_t value);

  constexpr void __cordl_internal_set__lightGroupList(::ArrayW<::UnityW<::GlobalNamespace::LightGroup>, ::Array<::UnityW<::GlobalNamespace::LightGroup>>*> value);

  constexpr void __cordl_internal_set__lightIntensityData(
      ::ArrayW<::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId*, ::Array<::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId*>*> value);

  constexpr void __cordl_internal_set__maxIntensity(float_t value);

  constexpr void __cordl_internal_set__multiplyColorByAlpha(bool value);

  /// @brief Method .ctor, addr 0x39e5800, size 0x18, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16335 };

  /// @brief Field _lightGroupList, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::LightGroup>, ::Array<::UnityW<::GlobalNamespace::LightGroup>>*> ____lightGroupList;

  /// @brief Field _intensity, offset: 0x40, size: 0x4, def value: None
  float_t ____intensity;

  /// @brief Field _maxIntensity, offset: 0x44, size: 0x4, def value: None
  float_t ____maxIntensity;

  /// @brief Field _multiplyColorByAlpha, offset: 0x48, size: 0x1, def value: None
  bool ____multiplyColorByAlpha;

  /// @brief Field _lightIntensityData, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId*, ::Array<::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId*>*> ____lightIntensityData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RuntimeLightWithLightGroupIds, ____lightGroupList) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RuntimeLightWithLightGroupIds, ____intensity) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RuntimeLightWithLightGroupIds, ____maxIntensity) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RuntimeLightWithLightGroupIds, ____multiplyColorByAlpha) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RuntimeLightWithLightGroupIds, ____lightIntensityData) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RuntimeLightWithLightGroupIds, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RuntimeLightWithLightGroupIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RuntimeLightWithLightGroupIds*, "", "RuntimeLightWithLightGroupIds");
NEED_NO_BOX(::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RuntimeLightWithLightGroupIds_LightIntensitiesWithId*, "", "RuntimeLightWithLightGroupIds/LightIntensitiesWithId");
