#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(RenderSettings)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine {
class RenderSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::RenderSettings);
// Type: UnityEngine::RenderSettings
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10128))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10015))
// CS Name: ::UnityEngine::RenderSettings*
class CORDL_TYPE RenderSettings : public ::UnityEngine::Object {
public:
  // Declarations
  /// @brief Method get_fogColor addr 0x2b514b0 size 0x48 virtual false final false
  static inline ::UnityEngine::Color get_fogColor();

  /// @brief Method set_fogColor addr 0x2b51534 size 0x44 virtual false final false
  static inline void set_fogColor(::UnityEngine::Color value);

  /// @brief Method get_fogColor_Injected addr 0x2b514f8 size 0x3c virtual false final false
  static inline void get_fogColor_Injected(ByRef<::UnityEngine::Color> ret);

  /// @brief Method set_fogColor_Injected addr 0x2b51578 size 0x3c virtual false final false
  static inline void set_fogColor_Injected(ByRef<::UnityEngine::Color> value);

  // Ctor Parameters [CppParam { name: "", ty: "RenderSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderSettings(RenderSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderSettings(RenderSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderSettings();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RenderSettings, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::RenderSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RenderSettings*, "UnityEngine", "RenderSettings");
