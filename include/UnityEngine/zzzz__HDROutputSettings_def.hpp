#pragma once
// IWYU pragma private; include "UnityEngine/HDROutputSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HDROutputSettings)
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine {
struct ColorGamut;
}
// Forward declare root types
namespace UnityEngine {
class HDROutputSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::HDROutputSettings);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.HDROutputSettings
class CORDL_TYPE HDROutputSettings : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_HDRModeChangeRequested)) bool HDRModeChangeRequested;

  /// @brief Field _mainDisplay, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__mainDisplay, put = setStaticF__mainDisplay)) ::UnityEngine::HDROutputSettings* _mainDisplay;

  __declspec(property(get = get_active)) bool active;

  __declspec(property(get = get_automaticHDRTonemapping, put = set_automaticHDRTonemapping)) bool automaticHDRTonemapping;

  __declspec(property(get = get_available)) bool available;

  __declspec(property(get = get_displayColorGamut)) ::UnityEngine::ColorGamut displayColorGamut;

  /// @brief Field displays, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_displays, put = setStaticF_displays)) ::ArrayW<::UnityEngine::HDROutputSettings*, ::Array<::UnityEngine::HDROutputSettings*>*> displays;

  __declspec(property(get = get_graphicsFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat graphicsFormat;

  /// @brief Field m_DisplayIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DisplayIndex, put = __cordl_internal_set_m_DisplayIndex)) int32_t m_DisplayIndex;

  __declspec(property(get = get_maxFullFrameToneMapLuminance)) int32_t maxFullFrameToneMapLuminance;

  __declspec(property(get = get_maxToneMapLuminance)) int32_t maxToneMapLuminance;

  __declspec(property(get = get_minToneMapLuminance)) int32_t minToneMapLuminance;

  __declspec(property(get = get_paperWhiteNits)) float_t paperWhiteNits;

  /// @brief Method GetActive, addr 0x68be90c, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetActive(int32_t displayIndex);

  /// @brief Method GetAutomaticHDRTonemapping, addr 0x68bea7c, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetAutomaticHDRTonemapping(int32_t displayIndex);

  /// @brief Method GetAvailable, addr 0x68be9c4, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetAvailable(int32_t displayIndex);

  /// @brief Method GetDisplayColorGamut, addr 0x68bec04, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ColorGamut GetDisplayColorGamut(int32_t displayIndex);

  /// @brief Method GetGraphicsFormat, addr 0x68becbc, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(int32_t displayIndex);

  /// @brief Method GetHDRModeChangeRequested, addr 0x68bf054, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetHDRModeChangeRequested(int32_t displayIndex);

  /// @brief Method GetMaxFullFrameToneMapLuminance, addr 0x68bee2c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetMaxFullFrameToneMapLuminance(int32_t displayIndex);

  /// @brief Method GetMaxToneMapLuminance, addr 0x68beee4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetMaxToneMapLuminance(int32_t displayIndex);

  /// @brief Method GetMinToneMapLuminance, addr 0x68bef9c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetMinToneMapLuminance(int32_t displayIndex);

  /// @brief Method GetPaperWhiteNits, addr 0x68bed74, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetPaperWhiteNits(int32_t displayIndex);

  static inline ::UnityEngine::HDROutputSettings* New_ctor();

  static inline ::UnityEngine::HDROutputSettings* New_ctor(int32_t displayIndex);

  /// @brief Method RequestHDRModeChange, addr 0x68bf090, size 0x8c, virtual false, abstract: false, final false
  inline void RequestHDRModeChange(bool enabled);

  /// @brief Method RequestHDRModeChangeInternal, addr 0x68bf11c, size 0x44, virtual false, abstract: false, final false
  static inline void RequestHDRModeChangeInternal(int32_t displayIndex, bool enabled);

  /// @brief Method SetAutomaticHDRTonemapping, addr 0x68beb44, size 0x44, virtual false, abstract: false, final false
  static inline void SetAutomaticHDRTonemapping(int32_t displayIndex, bool scripted);

  constexpr int32_t const& __cordl_internal_get_m_DisplayIndex() const;

  constexpr int32_t& __cordl_internal_get_m_DisplayIndex();

  constexpr void __cordl_internal_set_m_DisplayIndex(int32_t value);

  /// @brief Method .ctor, addr 0x68be824, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x68be82c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t displayIndex);

  static inline ::UnityEngine::HDROutputSettings* getStaticF__mainDisplay();

  static inline ::ArrayW<::UnityEngine::HDROutputSettings*, ::Array<::UnityEngine::HDROutputSettings*>*> getStaticF_displays();

  /// @brief Method get_HDRModeChangeRequested, addr 0x68befd8, size 0x7c, virtual false, abstract: false, final false
  inline bool get_HDRModeChangeRequested();

  /// @brief Method get_active, addr 0x68be890, size 0x7c, virtual false, abstract: false, final false
  inline bool get_active();

  /// @brief Method get_automaticHDRTonemapping, addr 0x68bea00, size 0x7c, virtual false, abstract: false, final false
  inline bool get_automaticHDRTonemapping();

  /// @brief Method get_available, addr 0x68be948, size 0x7c, virtual false, abstract: false, final false
  inline bool get_available();

  /// @brief Method get_displayColorGamut, addr 0x68beb88, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::ColorGamut get_displayColorGamut();

  /// @brief Method get_graphicsFormat, addr 0x68bec40, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_graphicsFormat();

  /// @brief Method get_main, addr 0x68be834, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::HDROutputSettings* get_main();

  /// @brief Method get_maxFullFrameToneMapLuminance, addr 0x68bedb0, size 0x7c, virtual false, abstract: false, final false
  inline int32_t get_maxFullFrameToneMapLuminance();

  /// @brief Method get_maxToneMapLuminance, addr 0x68bee68, size 0x7c, virtual false, abstract: false, final false
  inline int32_t get_maxToneMapLuminance();

  /// @brief Method get_minToneMapLuminance, addr 0x68bef20, size 0x7c, virtual false, abstract: false, final false
  inline int32_t get_minToneMapLuminance();

  /// @brief Method get_paperWhiteNits, addr 0x68becf8, size 0x7c, virtual false, abstract: false, final false
  inline float_t get_paperWhiteNits();

  static inline void setStaticF__mainDisplay(::UnityEngine::HDROutputSettings* value);

  static inline void setStaticF_displays(::ArrayW<::UnityEngine::HDROutputSettings*, ::Array<::UnityEngine::HDROutputSettings*>*> value);

  /// @brief Method set_automaticHDRTonemapping, addr 0x68beab8, size 0x8c, virtual false, abstract: false, final false
  inline void set_automaticHDRTonemapping(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HDROutputSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HDROutputSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HDROutputSettings(HDROutputSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HDROutputSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HDROutputSettings(HDROutputSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10125 };

  /// @brief Field m_DisplayIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_DisplayIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::HDROutputSettings, ___m_DisplayIndex) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::HDROutputSettings, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::HDROutputSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HDROutputSettings*, "UnityEngine", "HDROutputSettings");
