#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIds_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeLightWithLightGroupIds)
namespace GlobalNamespace {
class __RuntimeLightWithLightGroupIds__LightIntensitiesWithId;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class __LightWithIds__LightWithId;
}
namespace GlobalNamespace {
class LightGroup;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14543))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14553))
// CS Name: ::RuntimeLightWithLightGroupIds::LightIntensitiesWithId*
class CORDL_TYPE __RuntimeLightWithLightGroupIds__LightIntensitiesWithId : public ::GlobalNamespace::__LightWithIds__LightWithId {
public:
  // Declarations
  /// @brief Field _intensity, offset 0x30, size 0x4
  __declspec(property(get = __get__intensity, put = __set__intensity)) float_t _intensity;

  __declspec(property(get = get_intensity, put = set_intensity)) float_t intensity;

  constexpr float_t& __get__intensity();

  constexpr float_t const& __get__intensity() const;

  constexpr void __set__intensity(float_t value);

  /// @brief Method get_intensity, addr 0x2113e9c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_intensity();

  /// @brief Method set_intensity, addr 0x2113ea4, size 0x8, virtual false, abstract: false, final false
  inline void set_intensity(float_t value);

  static inline ::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId* New_ctor(int32_t lightId, float_t intensity);

  /// @brief Method .ctor, addr 0x2113cf8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t lightId, float_t intensity);

  // Ctor Parameters [CppParam { name: "", ty: "__RuntimeLightWithLightGroupIds__LightIntensitiesWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RuntimeLightWithLightGroupIds__LightIntensitiesWithId(__RuntimeLightWithLightGroupIds__LightIntensitiesWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RuntimeLightWithLightGroupIds__LightIntensitiesWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RuntimeLightWithLightGroupIds__LightIntensitiesWithId(__RuntimeLightWithLightGroupIds__LightIntensitiesWithId const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RuntimeLightWithLightGroupIds__LightIntensitiesWithId();

public:
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14544))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14554))
// CS Name: ::RuntimeLightWithLightGroupIds*
class CORDL_TYPE RuntimeLightWithLightGroupIds : public ::GlobalNamespace::LightWithIds {
public:
  // Declarations
  using LightIntensitiesWithId = ::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId;

  /// @brief Field _lightGroupList, offset 0x30, size 0x8
  __declspec(property(get = __get__lightGroupList, put = __set__lightGroupList))::ArrayW<::GlobalNamespace::LightGroup*, ::Array<::GlobalNamespace::LightGroup*>*> _lightGroupList;

  /// @brief Field _intensity, offset 0x38, size 0x4
  __declspec(property(get = __get__intensity, put = __set__intensity)) float_t _intensity;

  /// @brief Field _maxIntensity, offset 0x3c, size 0x4
  __declspec(property(get = __get__maxIntensity, put = __set__maxIntensity)) float_t _maxIntensity;

  /// @brief Field _multiplyColorByAlpha, offset 0x40, size 0x1
  __declspec(property(get = __get__multiplyColorByAlpha, put = __set__multiplyColorByAlpha)) bool _multiplyColorByAlpha;

  /// @brief Field _lightIntensityData, offset 0x48, size 0x8
  __declspec(property(get = __get__lightIntensityData,
                      put = __set__lightIntensityData))::ArrayW<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*,
                                                                ::Array<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*>*> _lightIntensityData;

  constexpr ::ArrayW<::GlobalNamespace::LightGroup*, ::Array<::GlobalNamespace::LightGroup*>*>& __get__lightGroupList();

  constexpr ::ArrayW<::GlobalNamespace::LightGroup*, ::Array<::GlobalNamespace::LightGroup*>*> const& __get__lightGroupList() const;

  constexpr void __set__lightGroupList(::ArrayW<::GlobalNamespace::LightGroup*, ::Array<::GlobalNamespace::LightGroup*>*> value);

  constexpr float_t& __get__intensity();

  constexpr float_t const& __get__intensity() const;

  constexpr void __set__intensity(float_t value);

  constexpr float_t& __get__maxIntensity();

  constexpr float_t const& __get__maxIntensity() const;

  constexpr void __set__maxIntensity(float_t value);

  constexpr bool& __get__multiplyColorByAlpha();

  constexpr bool const& __get__multiplyColorByAlpha() const;

  constexpr void __set__multiplyColorByAlpha(bool value);

  constexpr ::ArrayW<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*>*>&
  __get__lightIntensityData();

  constexpr ::ArrayW<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*>*> const&
  __get__lightIntensityData() const;

  constexpr void __set__lightIntensityData(
      ::ArrayW<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*, ::Array<::GlobalNamespace::__RuntimeLightWithLightGroupIds__LightIntensitiesWithId*>*> value);

  /// @brief Method ColorWasSet, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  /// @brief Method Awake, addr 0x2113b38, size 0x1c0, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method ProcessNewColorData, addr 0x2113d20, size 0x13c, virtual true, abstract: false, final false
  inline void ProcessNewColorData();

  /// @brief Method GetLightWithIds, addr 0x2113e7c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>* GetLightWithIds();

  /// @brief Method ProcessColor, addr 0x2113e5c, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Color ProcessColor(::UnityEngine::Color color, float_t intensity);

  static inline ::GlobalNamespace::RuntimeLightWithLightGroupIds* New_ctor();

  /// @brief Method .ctor, addr 0x2113e84, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeLightWithLightGroupIds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeLightWithLightGroupIds(RuntimeLightWithLightGroupIds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeLightWithLightGroupIds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeLightWithLightGroupIds(RuntimeLightWithLightGroupIds const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeLightWithLightGroupIds();

public:
  /// @brief Field _lightGroupList, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::LightGroup*, ::Array<::GlobalNamespace::LightGroup*>*> ____lightGroupList;

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
