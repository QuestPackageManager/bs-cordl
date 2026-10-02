#pragma once
// IWYU pragma private; include "UnityEngine/RuntimeTextSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/Text/zzzz__TextSettings_def.hpp"
CORDL_MODULE_EXPORT(RuntimeTextSettings)
// Forward declare root types
namespace UnityEngine {
class RuntimeTextSettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::RuntimeTextSettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::RuntimeTextSettings*, "UnityEngine", "RuntimeTextSettings");
// Dependencies UnityEngine.TextCore.Text.TextSettings
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.RuntimeTextSettings
class CORDL_TYPE RuntimeTextSettings : public ::UnityEngine::TextCore::Text::TextSettings {
public:
  // Declarations
  /// @brief Field s_DefaultTextSettings, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DefaultTextSettings, put = setStaticF_s_DefaultTextSettings)) ::UnityW<::UnityEngine::RuntimeTextSettings> s_DefaultTextSettings;

  static inline ::UnityEngine::RuntimeTextSettings* New_ctor();

  /// @brief Method .ctor, addr 0x6faf738, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::UnityEngine::RuntimeTextSettings> getStaticF_s_DefaultTextSettings();

  /// @brief Method get_defaultTextSettings, addr 0x6fac45c, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RuntimeTextSettings> get_defaultTextSettings();

  static inline void setStaticF_s_DefaultTextSettings(::UnityW<::UnityEngine::RuntimeTextSettings> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeTextSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeTextSettings", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeTextSettings(RuntimeTextSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeTextSettings", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeTextSettings(RuntimeTextSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20071 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::RuntimeTextSettings) == 0xc0, "Size mismatch!");

} // namespace UnityEngine
