#pragma once
// IWYU pragma private; include "GlobalNamespace/LightColorBaseData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightColorBaseData)
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
struct EnvironmentColorType;
}
// Forward declare root types
namespace GlobalNamespace {
class LightColorBaseData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightColorBaseData);
// Dependencies EaseType, EnvironmentColorType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightColorBaseData
class CORDL_TYPE LightColorBaseData : public ::System::Object {
public:
  // Declarations
  /// @brief Field beat, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_beat, put = __cordl_internal_set_beat)) float_t beat;

  /// @brief Field brightness, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_brightness, put = __cordl_internal_set_brightness)) float_t brightness;

  /// @brief Field colorType, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_colorType, put = __cordl_internal_set_colorType)) ::GlobalNamespace::EnvironmentColorType colorType;

  /// @brief Field easeType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_easeType, put = __cordl_internal_set_easeType)) ::GlobalNamespace::EaseType easeType;

  /// @brief Field strobeBeatFrequency, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_strobeBeatFrequency, put = __cordl_internal_set_strobeBeatFrequency)) int32_t strobeBeatFrequency;

  /// @brief Field strobeBrightness, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_strobeBrightness, put = __cordl_internal_set_strobeBrightness)) float_t strobeBrightness;

  /// @brief Field strobeFade, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_strobeFade, put = __cordl_internal_set_strobeFade)) bool strobeFade;

  /// @brief Field usePreviousValue, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_usePreviousValue, put = __cordl_internal_set_usePreviousValue)) bool usePreviousValue;

  static inline ::GlobalNamespace::LightColorBaseData* New_ctor(float_t beat, bool usePreviousValue, ::GlobalNamespace::EaseType easeType, ::GlobalNamespace::EnvironmentColorType colorType,
                                                                float_t brightness, int32_t strobeBeatFrequency, float_t strobeBrightness, bool strobeFade);

  constexpr float_t const& __cordl_internal_get_beat() const;

  constexpr float_t& __cordl_internal_get_beat();

  constexpr float_t const& __cordl_internal_get_brightness() const;

  constexpr float_t& __cordl_internal_get_brightness();

  constexpr ::GlobalNamespace::EnvironmentColorType const& __cordl_internal_get_colorType() const;

  constexpr ::GlobalNamespace::EnvironmentColorType& __cordl_internal_get_colorType();

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get_easeType() const;

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get_easeType();

  constexpr int32_t const& __cordl_internal_get_strobeBeatFrequency() const;

  constexpr int32_t& __cordl_internal_get_strobeBeatFrequency();

  constexpr float_t const& __cordl_internal_get_strobeBrightness() const;

  constexpr float_t& __cordl_internal_get_strobeBrightness();

  constexpr bool const& __cordl_internal_get_strobeFade() const;

  constexpr bool& __cordl_internal_get_strobeFade();

  constexpr bool const& __cordl_internal_get_usePreviousValue() const;

  constexpr bool& __cordl_internal_get_usePreviousValue();

  constexpr void __cordl_internal_set_beat(float_t value);

  constexpr void __cordl_internal_set_brightness(float_t value);

  constexpr void __cordl_internal_set_colorType(::GlobalNamespace::EnvironmentColorType value);

  constexpr void __cordl_internal_set_easeType(::GlobalNamespace::EaseType value);

  constexpr void __cordl_internal_set_strobeBeatFrequency(int32_t value);

  constexpr void __cordl_internal_set_strobeBrightness(float_t value);

  constexpr void __cordl_internal_set_strobeFade(bool value);

  constexpr void __cordl_internal_set_usePreviousValue(bool value);

  /// @brief Method .ctor, addr 0x26bf7bc, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(float_t beat, bool usePreviousValue, ::GlobalNamespace::EaseType easeType, ::GlobalNamespace::EnvironmentColorType colorType, float_t brightness, int32_t strobeBeatFrequency,
                    float_t strobeBrightness, bool strobeFade);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightColorBaseData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightColorBaseData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightColorBaseData(LightColorBaseData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightColorBaseData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightColorBaseData(LightColorBaseData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12916 };

  /// @brief Field beat, offset: 0x10, size: 0x4, def value: None
  float_t ___beat;

  /// @brief Field usePreviousValue, offset: 0x14, size: 0x1, def value: None
  bool ___usePreviousValue;

  /// @brief Field easeType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ___easeType;

  /// @brief Field colorType, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentColorType ___colorType;

  /// @brief Field brightness, offset: 0x20, size: 0x4, def value: None
  float_t ___brightness;

  /// @brief Field strobeBeatFrequency, offset: 0x24, size: 0x4, def value: None
  int32_t ___strobeBeatFrequency;

  /// @brief Field strobeBrightness, offset: 0x28, size: 0x4, def value: None
  float_t ___strobeBrightness;

  /// @brief Field strobeFade, offset: 0x2c, size: 0x1, def value: None
  bool ___strobeFade;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightColorBaseData, ___beat) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorBaseData, ___usePreviousValue) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorBaseData, ___easeType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorBaseData, ___colorType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorBaseData, ___brightness) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorBaseData, ___strobeBeatFrequency) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorBaseData, ___strobeBrightness) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightColorBaseData, ___strobeFade) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightColorBaseData, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightColorBaseData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightColorBaseData*, "", "LightColorBaseData");
