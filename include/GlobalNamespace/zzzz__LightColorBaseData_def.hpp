#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventTransitionType_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightColorBaseData)
namespace GlobalNamespace {
struct EnvironmentColorType;
}
namespace GlobalNamespace {
struct BeatmapEventTransitionType;
}
// Forward declare root types
namespace GlobalNamespace {
class LightColorBaseData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightColorBaseData);
// Type: ::LightColorBaseData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14754)), TypeDefinitionIndex(TypeDefinitionIndex(14728))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4321))
// CS Name: ::LightColorBaseData*
class CORDL_TYPE LightColorBaseData : public ::System::Object {
public:
  // Declarations
  /// @brief Field beat, offset 0x10, size 0x4
  __declspec(property(get = __get_beat, put = __set_beat)) float_t beat;

  /// @brief Field transitionType, offset 0x14, size 0x4
  __declspec(property(get = __get_transitionType, put = __set_transitionType))::GlobalNamespace::BeatmapEventTransitionType transitionType;

  /// @brief Field colorType, offset 0x18, size 0x4
  __declspec(property(get = __get_colorType, put = __set_colorType))::GlobalNamespace::EnvironmentColorType colorType;

  /// @brief Field brightness, offset 0x1c, size 0x4
  __declspec(property(get = __get_brightness, put = __set_brightness)) float_t brightness;

  /// @brief Field strobeBeatFrequency, offset 0x20, size 0x4
  __declspec(property(get = __get_strobeBeatFrequency, put = __set_strobeBeatFrequency)) int32_t strobeBeatFrequency;

  /// @brief Field strobeBrightness, offset 0x24, size 0x4
  __declspec(property(get = __get_strobeBrightness, put = __set_strobeBrightness)) float_t strobeBrightness;

  /// @brief Field strobeFade, offset 0x28, size 0x1
  __declspec(property(get = __get_strobeFade, put = __set_strobeFade)) bool strobeFade;

  constexpr float_t& __get_beat();

  constexpr float_t const& __get_beat() const;

  constexpr void __set_beat(float_t value);

  constexpr ::GlobalNamespace::BeatmapEventTransitionType& __get_transitionType();

  constexpr ::GlobalNamespace::BeatmapEventTransitionType const& __get_transitionType() const;

  constexpr void __set_transitionType(::GlobalNamespace::BeatmapEventTransitionType value);

  constexpr ::GlobalNamespace::EnvironmentColorType& __get_colorType();

  constexpr ::GlobalNamespace::EnvironmentColorType const& __get_colorType() const;

  constexpr void __set_colorType(::GlobalNamespace::EnvironmentColorType value);

  constexpr float_t& __get_brightness();

  constexpr float_t const& __get_brightness() const;

  constexpr void __set_brightness(float_t value);

  constexpr int32_t& __get_strobeBeatFrequency();

  constexpr int32_t const& __get_strobeBeatFrequency() const;

  constexpr void __set_strobeBeatFrequency(int32_t value);

  constexpr float_t& __get_strobeBrightness();

  constexpr float_t const& __get_strobeBrightness() const;

  constexpr void __set_strobeBrightness(float_t value);

  constexpr bool& __get_strobeFade();

  constexpr bool const& __get_strobeFade() const;

  constexpr void __set_strobeFade(bool value);

  static inline ::GlobalNamespace::LightColorBaseData* New_ctor(float_t beat, ::GlobalNamespace::BeatmapEventTransitionType transitionType, ::GlobalNamespace::EnvironmentColorType colorType,
                                                                float_t brightness, int32_t strobeBeatFrequency, float_t strobeBrightness, bool strobeFade);

  /// @brief Method .ctor addr 0x233cd24 size 0x6c virtual false final false
  inline void _ctor(float_t beat, ::GlobalNamespace::BeatmapEventTransitionType transitionType, ::GlobalNamespace::EnvironmentColorType colorType, float_t brightness, int32_t strobeBeatFrequency,
                    float_t strobeBrightness, bool strobeFade);

  // Ctor Parameters [CppParam { name: "", ty: "LightColorBaseData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightColorBaseData(LightColorBaseData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightColorBaseData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightColorBaseData(LightColorBaseData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightColorBaseData();

public:
  /// @brief Field beat, offset: 0x10, size: 0x4, def value: None
  float_t ___beat;

  /// @brief Field transitionType, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapEventTransitionType ___transitionType;

  /// @brief Field colorType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentColorType ___colorType;

  /// @brief Field brightness, offset: 0x1c, size: 0x4, def value: None
  float_t ___brightness;

  /// @brief Field strobeBeatFrequency, offset: 0x20, size: 0x4, def value: None
  int32_t ___strobeBeatFrequency;

  /// @brief Field strobeBrightness, offset: 0x24, size: 0x4, def value: None
  float_t ___strobeBrightness;

  /// @brief Field strobeFade, offset: 0x28, size: 0x1, def value: None
  bool ___strobeFade;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightColorBaseData, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightColorBaseData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightColorBaseData*, "", "LightColorBaseData");
