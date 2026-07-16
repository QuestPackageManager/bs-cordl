#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXAudioSpectrumBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/Utility/zzzz__VFXBinderBase_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__FFTWindow_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VFXAudioSpectrumBinder)
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
namespace UnityEngine::VFX::Utility {
struct VFXAudioSpectrumBinder_AudioSourceMode;
}
namespace UnityEngine::VFX {
class VisualEffect;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::VFX::Utility {
struct VFXAudioSpectrumBinder_AudioSourceMode;
}
namespace UnityEngine::VFX::Utility {
class VFXAudioSpectrumBinder;
}
// Write type traits
MARK_VAL_T(::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder_AudioSourceMode);
MARK_REF_T(::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder_AudioSourceMode, "UnityEngine.VFX.Utility", "VFXAudioSpectrumBinder/AudioSourceMode");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder*, "UnityEngine.VFX.Utility", "VFXAudioSpectrumBinder");
// Dependencies
namespace UnityEngine::VFX::Utility {
// Is value type: true
// CS Name: UnityEngine.VFX.Utility.VFXAudioSpectrumBinder/AudioSourceMode
struct CORDL_TYPE VFXAudioSpectrumBinder_AudioSourceMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VFXAudioSpectrumBinder_AudioSourceMode_Unwrapped
  enum struct __VFXAudioSpectrumBinder_AudioSourceMode_Unwrapped : int32_t {
    __E_AudioSource = static_cast<int32_t>(0x0),
    __E_AudioListener = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VFXAudioSpectrumBinder_AudioSourceMode_Unwrapped() const noexcept {
    return static_cast<__VFXAudioSpectrumBinder_AudioSourceMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXAudioSpectrumBinder_AudioSourceMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VFXAudioSpectrumBinder_AudioSourceMode(int32_t value__) noexcept;

  /// @brief Field AudioListener value: I32(1)
  static ::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder_AudioSourceMode const AudioListener;

  /// @brief Field AudioSource value: I32(0)
  static ::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder_AudioSourceMode const AudioSource;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19952 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder_AudioSourceMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder_AudioSourceMode) == 0x4, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
// Dependencies UnityEngine.Color, UnityEngine.FFTWindow, UnityEngine.VFX.Utility.VFXAudioSpectrumBinder::AudioSourceMode, UnityEngine.VFX.Utility.VFXBinderBase
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXAudioSpectrumBinder
class CORDL_TYPE VFXAudioSpectrumBinder : public ::UnityEngine::VFX::Utility::VFXBinderBase {
public:
  // Declarations
  using AudioSourceMode = ::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder_AudioSourceMode;

  /// @brief Field AudioSource, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_AudioSource, put = __cordl_internal_set_AudioSource)) ::UnityW<::UnityEngine::AudioSource> AudioSource;

  __declspec(property(get = get_CountProperty, put = set_CountProperty)) ::StringW CountProperty;

  /// @brief Field FFTWindow, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_FFTWindow, put = __cordl_internal_set_FFTWindow)) ::UnityEngine::FFTWindow FFTWindow;

  /// @brief Field Mode, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_Mode, put = __cordl_internal_set_Mode)) ::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder_AudioSourceMode Mode;

  /// @brief Field Samples, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_Samples, put = __cordl_internal_set_Samples)) uint32_t Samples;

  __declspec(property(get = get_TextureProperty, put = set_TextureProperty)) ::StringW TextureProperty;

  /// @brief Field m_AudioCache, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AudioCache, put = __cordl_internal_set_m_AudioCache)) ::ArrayW<float_t> m_AudioCache;

  /// @brief Field m_ColorCache, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColorCache, put = __cordl_internal_set_m_ColorCache)) ::ArrayW<::UnityEngine::Color> m_ColorCache;

  /// @brief Field m_CountProperty, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CountProperty, put = __cordl_internal_set_m_CountProperty)) ::UnityEngine::VFX::Utility::ExposedProperty* m_CountProperty;

  /// @brief Field m_Texture, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Texture, put = __cordl_internal_set_m_Texture)) ::UnityW<::UnityEngine::Texture2D> m_Texture;

  /// @brief Field m_TextureProperty, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextureProperty, put = __cordl_internal_set_m_TextureProperty)) ::UnityEngine::VFX::Utility::ExposedProperty* m_TextureProperty;

  /// @brief Method IsValid, addr 0x69dcb38, size 0xe0, virtual true, abstract: false, final false
  inline bool IsValid(::UnityEngine::VFX::VisualEffect* component);

  static inline ::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder* New_ctor();

  /// @brief Method ToString, addr 0x69dcf0c, size 0xd0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UpdateBinding, addr 0x69dce98, size 0x74, virtual true, abstract: false, final false
  inline void UpdateBinding(::UnityEngine::VFX::VisualEffect* component);

  /// @brief Method UpdateTexture, addr 0x69dcc18, size 0x280, virtual false, abstract: false, final false
  inline void UpdateTexture();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_AudioSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_AudioSource();

  constexpr ::UnityEngine::FFTWindow const& __cordl_internal_get_FFTWindow() const;

  constexpr ::UnityEngine::FFTWindow& __cordl_internal_get_FFTWindow();

  constexpr ::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder_AudioSourceMode const& __cordl_internal_get_Mode() const;

  constexpr ::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder_AudioSourceMode& __cordl_internal_get_Mode();

  constexpr uint32_t const& __cordl_internal_get_Samples() const;

  constexpr uint32_t& __cordl_internal_get_Samples();

  constexpr ::ArrayW<float_t> const& __cordl_internal_get_m_AudioCache() const;

  constexpr ::ArrayW<float_t>& __cordl_internal_get_m_AudioCache();

  constexpr ::ArrayW<::UnityEngine::Color> const& __cordl_internal_get_m_ColorCache() const;

  constexpr ::ArrayW<::UnityEngine::Color>& __cordl_internal_get_m_ColorCache();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_CountProperty() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_CountProperty();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_m_Texture() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_m_Texture();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_TextureProperty() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_TextureProperty();

  constexpr void __cordl_internal_set_AudioSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set_FFTWindow(::UnityEngine::FFTWindow value);

  constexpr void __cordl_internal_set_Mode(::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder_AudioSourceMode value);

  constexpr void __cordl_internal_set_Samples(uint32_t value);

  constexpr void __cordl_internal_set_m_AudioCache(::ArrayW<float_t> value);

  constexpr void __cordl_internal_set_m_ColorCache(::ArrayW<::UnityEngine::Color> value);

  constexpr void __cordl_internal_set_m_CountProperty(::UnityEngine::VFX::Utility::ExposedProperty* value);

  constexpr void __cordl_internal_set_m_Texture(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_m_TextureProperty(::UnityEngine::VFX::Utility::ExposedProperty* value);

  /// @brief Method .ctor, addr 0x69dcfdc, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CountProperty, addr 0x69dcad0, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_CountProperty();

  /// @brief Method get_TextureProperty, addr 0x69dcb04, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_TextureProperty();

  /// @brief Method set_CountProperty, addr 0x69dcae8, size 0x1c, virtual false, abstract: false, final false
  inline void set_CountProperty(::StringW value);

  /// @brief Method set_TextureProperty, addr 0x69dcb1c, size 0x1c, virtual false, abstract: false, final false
  inline void set_TextureProperty(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXAudioSpectrumBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXAudioSpectrumBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXAudioSpectrumBinder(VFXAudioSpectrumBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXAudioSpectrumBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXAudioSpectrumBinder(VFXAudioSpectrumBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19953 };

  /// @brief Field m_CountProperty, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_CountProperty;

  /// @brief Field m_TextureProperty, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_TextureProperty;

  /// @brief Field FFTWindow, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::FFTWindow ___FFTWindow;

  /// @brief Field Samples, offset: 0x3c, size: 0x4, def value: None
  uint32_t ___Samples;

  /// @brief Field Mode, offset: 0x40, size: 0x4, def value: None
  ::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder_AudioSourceMode ___Mode;

  /// @brief Field AudioSource, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ___AudioSource;

  /// @brief Field m_Texture, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___m_Texture;

  /// @brief Field m_AudioCache, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<float_t> ___m_AudioCache;

  /// @brief Field m_ColorCache, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Color> ___m_ColorCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder, ___m_CountProperty) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder, ___m_TextureProperty) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder, ___FFTWindow) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder, ___Samples) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder, ___Mode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder, ___AudioSource) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder, ___m_Texture) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder, ___m_AudioCache) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder, ___m_ColorCache) == 0x60, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder) == 0x68, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
