#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/GlobalIllumination/LightmapperUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LightmapperUtils)
namespace UnityEngine::Experimental::GlobalIllumination {
struct Cookie;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct DirectionalLight;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct DiscLight;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct LightMode;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct LinearColor;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct PointLight;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct RectangleLight;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct SpotLight;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
struct LightmapBakeType;
}
// Forward declare root types
namespace UnityEngine::Experimental::GlobalIllumination {
class LightmapperUtils;
}
// Write type traits
MARK_REF_T(::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*, "UnityEngine.Experimental.GlobalIllumination", "LightmapperUtils");
// Dependencies System.Object
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: false
// CS Name: UnityEngine.Experimental.GlobalIllumination.LightmapperUtils
class CORDL_TYPE LightmapperUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method ApplyColorTemperature, addr 0x6fcb130, size 0x48, virtual false, abstract: false, final false
  static inline void ApplyColorTemperature(::UnityEngine::Color cct, ::by_ref<::UnityEngine::Experimental::GlobalIllumination::LinearColor> lightColor);

  /// @brief Method Extract, addr 0x6fcaf78, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::GlobalIllumination::LightMode Extract(::UnityEngine::LightmapBakeType baketype);

  /// @brief Method Extract, addr 0x6fcba0c, size 0x1c4, virtual false, abstract: false, final false
  static inline void Extract(::UnityEngine::Light* l, ::by_ref<::UnityEngine::Experimental::GlobalIllumination::Cookie> cookie);

  /// @brief Method Extract, addr 0x6fcb178, size 0x19c, virtual false, abstract: false, final false
  static inline void Extract(::UnityEngine::Light* l, ::by_ref<::UnityEngine::Experimental::GlobalIllumination::DirectionalLight> dir);

  /// @brief Method Extract, addr 0x6fcb858, size 0x1b4, virtual false, abstract: false, final false
  static inline void Extract(::UnityEngine::Light* l, ::by_ref<::UnityEngine::Experimental::GlobalIllumination::DiscLight> disc);

  /// @brief Method Extract, addr 0x6fcb314, size 0x1b4, virtual false, abstract: false, final false
  static inline void Extract(::UnityEngine::Light* l, ::by_ref<::UnityEngine::Experimental::GlobalIllumination::PointLight> point);

  /// @brief Method Extract, addr 0x6fcb6a4, size 0x1b4, virtual false, abstract: false, final false
  static inline void Extract(::UnityEngine::Light* l, ::by_ref<::UnityEngine::Experimental::GlobalIllumination::RectangleLight> rect);

  /// @brief Method Extract, addr 0x6fcb4c8, size 0x1dc, virtual false, abstract: false, final false
  static inline void Extract(::UnityEngine::Light* l, ::by_ref<::UnityEngine::Experimental::GlobalIllumination::SpotLight> spot);

  /// @brief Method ExtractColorTemperature, addr 0x6fcb05c, size 0xd4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color ExtractColorTemperature(::UnityEngine::Light* l);

  /// @brief Method ExtractIndirect, addr 0x6fcaf90, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::GlobalIllumination::LinearColor ExtractIndirect(::UnityEngine::Light* l);

  /// @brief Method ExtractInnerCone, addr 0x6fcb008, size 0x54, virtual false, abstract: false, final false
  static inline float_t ExtractInnerCone(::UnityEngine::Light* l);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightmapperUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightmapperUtils", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightmapperUtils(LightmapperUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightmapperUtils", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightmapperUtils(LightmapperUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10526 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Experimental::GlobalIllumination
