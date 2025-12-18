#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScreenSpaceAmbientOcclusionSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenSpaceAmbientOcclusionSettings)
namespace UnityEngine::Rendering::Universal {
struct ScreenSpaceAmbientOcclusionSettings_AOMethodOptions;
}
namespace UnityEngine::Rendering::Universal {
struct ScreenSpaceAmbientOcclusionSettings_AOSampleOption;
}
namespace UnityEngine::Rendering::Universal {
struct ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions;
}
namespace UnityEngine::Rendering::Universal {
struct ScreenSpaceAmbientOcclusionSettings_DepthSource;
}
namespace UnityEngine::Rendering::Universal {
struct ScreenSpaceAmbientOcclusionSettings_NormalQuality;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct ScreenSpaceAmbientOcclusionSettings_AOMethodOptions;
}
namespace UnityEngine::Rendering::Universal {
struct ScreenSpaceAmbientOcclusionSettings_AOSampleOption;
}
namespace UnityEngine::Rendering::Universal {
struct ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions;
}
namespace UnityEngine::Rendering::Universal {
struct ScreenSpaceAmbientOcclusionSettings_DepthSource;
}
namespace UnityEngine::Rendering::Universal {
struct ScreenSpaceAmbientOcclusionSettings_NormalQuality;
}
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceAmbientOcclusionSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_AOMethodOptions);
MARK_VAL_T(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_AOSampleOption);
MARK_VAL_T(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions);
MARK_VAL_T(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_DepthSource);
MARK_VAL_T(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_NormalQuality);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/DepthSource
struct CORDL_TYPE ScreenSpaceAmbientOcclusionSettings_DepthSource {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ScreenSpaceAmbientOcclusionSettings_DepthSource_Unwrapped
  enum struct __ScreenSpaceAmbientOcclusionSettings_DepthSource_Unwrapped : int32_t {
    __E_Depth = static_cast<int32_t>(0x0),
    __E_DepthNormals = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ScreenSpaceAmbientOcclusionSettings_DepthSource_Unwrapped() const noexcept {
    return static_cast<__ScreenSpaceAmbientOcclusionSettings_DepthSource_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenSpaceAmbientOcclusionSettings_DepthSource();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ScreenSpaceAmbientOcclusionSettings_DepthSource(int32_t value__) noexcept;

  /// @brief Field Depth value: I32(0)
  static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_DepthSource const Depth;

  /// @brief Field DepthNormals value: I32(1)
  static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_DepthSource const DepthNormals;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12893 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_DepthSource, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_DepthSource, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/NormalQuality
struct CORDL_TYPE ScreenSpaceAmbientOcclusionSettings_NormalQuality {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ScreenSpaceAmbientOcclusionSettings_NormalQuality_Unwrapped
  enum struct __ScreenSpaceAmbientOcclusionSettings_NormalQuality_Unwrapped : int32_t {
    __E_Low = static_cast<int32_t>(0x0),
    __E_Medium = static_cast<int32_t>(0x1),
    __E_High = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ScreenSpaceAmbientOcclusionSettings_NormalQuality_Unwrapped() const noexcept {
    return static_cast<__ScreenSpaceAmbientOcclusionSettings_NormalQuality_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenSpaceAmbientOcclusionSettings_NormalQuality();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ScreenSpaceAmbientOcclusionSettings_NormalQuality(int32_t value__) noexcept;

  /// @brief Field High value: I32(2)
  static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_NormalQuality const High;

  /// @brief Field Low value: I32(0)
  static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_NormalQuality const Low;

  /// @brief Field Medium value: I32(1)
  static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_NormalQuality const Medium;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12894 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_NormalQuality, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_NormalQuality, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/AOSampleOption
struct CORDL_TYPE ScreenSpaceAmbientOcclusionSettings_AOSampleOption {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ScreenSpaceAmbientOcclusionSettings_AOSampleOption_Unwrapped
  enum struct __ScreenSpaceAmbientOcclusionSettings_AOSampleOption_Unwrapped : int32_t {
    __E_High = static_cast<int32_t>(0x0),
    __E_Medium = static_cast<int32_t>(0x1),
    __E_Low = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ScreenSpaceAmbientOcclusionSettings_AOSampleOption_Unwrapped() const noexcept {
    return static_cast<__ScreenSpaceAmbientOcclusionSettings_AOSampleOption_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenSpaceAmbientOcclusionSettings_AOSampleOption();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ScreenSpaceAmbientOcclusionSettings_AOSampleOption(int32_t value__) noexcept;

  /// @brief Field High value: I32(0)
  static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_AOSampleOption const High;

  /// @brief Field Low value: I32(2)
  static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_AOSampleOption const Low;

  /// @brief Field Medium value: I32(1)
  static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_AOSampleOption const Medium;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12895 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_AOSampleOption, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_AOSampleOption, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/AOMethodOptions
struct CORDL_TYPE ScreenSpaceAmbientOcclusionSettings_AOMethodOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ScreenSpaceAmbientOcclusionSettings_AOMethodOptions_Unwrapped
  enum struct __ScreenSpaceAmbientOcclusionSettings_AOMethodOptions_Unwrapped : int32_t {
    __E_BlueNoise = static_cast<int32_t>(0x0),
    __E_InterleavedGradient = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ScreenSpaceAmbientOcclusionSettings_AOMethodOptions_Unwrapped() const noexcept {
    return static_cast<__ScreenSpaceAmbientOcclusionSettings_AOMethodOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenSpaceAmbientOcclusionSettings_AOMethodOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ScreenSpaceAmbientOcclusionSettings_AOMethodOptions(int32_t value__) noexcept;

  /// @brief Field BlueNoise value: I32(0)
  static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_AOMethodOptions const BlueNoise;

  /// @brief Field InterleavedGradient value: I32(1)
  static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_AOMethodOptions const InterleavedGradient;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12896 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_AOMethodOptions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_AOMethodOptions, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings/BlurQualityOptions
struct CORDL_TYPE ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions_Unwrapped
  enum struct __ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions_Unwrapped : int32_t {
    __E_High = static_cast<int32_t>(0x0),
    __E_Medium = static_cast<int32_t>(0x1),
    __E_Low = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions_Unwrapped() const noexcept {
    return static_cast<__ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions(int32_t value__) noexcept;

  /// @brief Field High value: I32(0)
  static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions const High;

  /// @brief Field Low value: I32(2)
  static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions const Low;

  /// @brief Field Medium value: I32(1)
  static ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions const Medium;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12897 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings::AOMethodOptions,
// UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings::AOSampleOption, UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings::BlurQualityOptions,
// UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings::DepthSource, UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings::NormalQuality
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings
class CORDL_TYPE ScreenSpaceAmbientOcclusionSettings : public ::System::Object {
public:
  // Declarations
  using AOMethodOptions = ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_AOMethodOptions;

  using AOSampleOption = ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_AOSampleOption;

  using BlurQualityOptions = ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions;

  using DepthSource = ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_DepthSource;

  using NormalQuality = ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_NormalQuality;

  /// @brief Field AOMethod, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_AOMethod, put = __cordl_internal_set_AOMethod)) ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_AOMethodOptions AOMethod;

  /// @brief Field AfterOpaque, offset 0x15, size 0x1
  __declspec(property(get = __cordl_internal_get_AfterOpaque, put = __cordl_internal_set_AfterOpaque)) bool AfterOpaque;

  /// @brief Field BlurQuality, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_BlurQuality,
                      put = __cordl_internal_set_BlurQuality)) ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions BlurQuality;

  /// @brief Field DirectLightingStrength, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_DirectLightingStrength, put = __cordl_internal_set_DirectLightingStrength)) float_t DirectLightingStrength;

  /// @brief Field Downsample, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_Downsample, put = __cordl_internal_set_Downsample)) bool Downsample;

  /// @brief Field Falloff, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_Falloff, put = __cordl_internal_set_Falloff)) float_t Falloff;

  /// @brief Field Intensity, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_Intensity, put = __cordl_internal_set_Intensity)) float_t Intensity;

  /// @brief Field NormalSamples, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_NormalSamples,
                      put = __cordl_internal_set_NormalSamples)) ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_NormalQuality NormalSamples;

  /// @brief Field Radius, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_Radius, put = __cordl_internal_set_Radius)) float_t Radius;

  /// @brief Field SampleCount, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_SampleCount, put = __cordl_internal_set_SampleCount)) int32_t SampleCount;

  /// @brief Field Samples, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_Samples, put = __cordl_internal_set_Samples)) ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_AOSampleOption Samples;

  /// @brief Field Source, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Source, put = __cordl_internal_set_Source)) ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_DepthSource Source;

  static inline ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_AOMethodOptions const& __cordl_internal_get_AOMethod() const;

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_AOMethodOptions& __cordl_internal_get_AOMethod();

  constexpr bool const& __cordl_internal_get_AfterOpaque() const;

  constexpr bool& __cordl_internal_get_AfterOpaque();

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions const& __cordl_internal_get_BlurQuality() const;

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions& __cordl_internal_get_BlurQuality();

  constexpr float_t const& __cordl_internal_get_DirectLightingStrength() const;

  constexpr float_t& __cordl_internal_get_DirectLightingStrength();

  constexpr bool const& __cordl_internal_get_Downsample() const;

  constexpr bool& __cordl_internal_get_Downsample();

  constexpr float_t const& __cordl_internal_get_Falloff() const;

  constexpr float_t& __cordl_internal_get_Falloff();

  constexpr float_t const& __cordl_internal_get_Intensity() const;

  constexpr float_t& __cordl_internal_get_Intensity();

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_NormalQuality const& __cordl_internal_get_NormalSamples() const;

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_NormalQuality& __cordl_internal_get_NormalSamples();

  constexpr float_t const& __cordl_internal_get_Radius() const;

  constexpr float_t& __cordl_internal_get_Radius();

  constexpr int32_t const& __cordl_internal_get_SampleCount() const;

  constexpr int32_t& __cordl_internal_get_SampleCount();

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_AOSampleOption const& __cordl_internal_get_Samples() const;

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_AOSampleOption& __cordl_internal_get_Samples();

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_DepthSource const& __cordl_internal_get_Source() const;

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_DepthSource& __cordl_internal_get_Source();

  constexpr void __cordl_internal_set_AOMethod(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_AOMethodOptions value);

  constexpr void __cordl_internal_set_AfterOpaque(bool value);

  constexpr void __cordl_internal_set_BlurQuality(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions value);

  constexpr void __cordl_internal_set_DirectLightingStrength(float_t value);

  constexpr void __cordl_internal_set_Downsample(bool value);

  constexpr void __cordl_internal_set_Falloff(float_t value);

  constexpr void __cordl_internal_set_Intensity(float_t value);

  constexpr void __cordl_internal_set_NormalSamples(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_NormalQuality value);

  constexpr void __cordl_internal_set_Radius(float_t value);

  constexpr void __cordl_internal_set_SampleCount(int32_t value);

  constexpr void __cordl_internal_set_Samples(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_AOSampleOption value);

  constexpr void __cordl_internal_set_Source(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_DepthSource value);

  /// @brief Method .ctor, addr 0x66ecc40, size 0x30, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenSpaceAmbientOcclusionSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceAmbientOcclusionSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenSpaceAmbientOcclusionSettings(ScreenSpaceAmbientOcclusionSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceAmbientOcclusionSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenSpaceAmbientOcclusionSettings(ScreenSpaceAmbientOcclusionSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12898 };

  /// @brief Field AOMethod, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_AOMethodOptions ___AOMethod;

  /// @brief Field Downsample, offset: 0x14, size: 0x1, def value: None
  bool ___Downsample;

  /// @brief Field AfterOpaque, offset: 0x15, size: 0x1, def value: None
  bool ___AfterOpaque;

  /// @brief Field Source, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_DepthSource ___Source;

  /// @brief Field NormalSamples, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_NormalQuality ___NormalSamples;

  /// @brief Field Intensity, offset: 0x20, size: 0x4, def value: None
  float_t ___Intensity;

  /// @brief Field DirectLightingStrength, offset: 0x24, size: 0x4, def value: None
  float_t ___DirectLightingStrength;

  /// @brief Field Radius, offset: 0x28, size: 0x4, def value: None
  float_t ___Radius;

  /// @brief Field Samples, offset: 0x2c, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_AOSampleOption ___Samples;

  /// @brief Field BlurQuality, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions ___BlurQuality;

  /// @brief Field Falloff, offset: 0x34, size: 0x4, def value: None
  float_t ___Falloff;

  /// @brief Field SampleCount, offset: 0x38, size: 0x4, def value: None
  int32_t ___SampleCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, ___AOMethod) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, ___Downsample) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, ___AfterOpaque) == 0x15, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, ___Source) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, ___NormalSamples) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, ___Intensity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, ___DirectLightingStrength) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, ___Radius) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, ___Samples) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, ___BlurQuality) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, ___Falloff) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, ___SampleCount) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_AOMethodOptions, "UnityEngine.Rendering.Universal",
                       "ScreenSpaceAmbientOcclusionSettings/AOMethodOptions");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_AOSampleOption, "UnityEngine.Rendering.Universal",
                       "ScreenSpaceAmbientOcclusionSettings/AOSampleOption");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions, "UnityEngine.Rendering.Universal",
                       "ScreenSpaceAmbientOcclusionSettings/BlurQualityOptions");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_DepthSource, "UnityEngine.Rendering.Universal", "ScreenSpaceAmbientOcclusionSettings/DepthSource");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_NormalQuality, "UnityEngine.Rendering.Universal", "ScreenSpaceAmbientOcclusionSettings/NormalQuality");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*, "UnityEngine.Rendering.Universal", "ScreenSpaceAmbientOcclusionSettings");
