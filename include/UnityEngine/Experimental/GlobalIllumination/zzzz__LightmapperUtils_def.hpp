#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/GlobalIllumination/LightmapperUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils);
// Dependencies System.Object
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: false
// CS Name: UnityEngine.Experimental.GlobalIllumination.LightmapperUtils
class CORDL_TYPE LightmapperUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method ApplyColorTemperature, addr 0x48cd340, size 0x48, virtual false, abstract: false, final false
  static inline void ApplyColorTemperature(::UnityEngine::Color cct, ::ByRef<::UnityEngine::Experimental::GlobalIllumination::LinearColor> lightColor);

  /// @brief Method Extract, addr 0x48cd1e0, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::GlobalIllumination::LightMode Extract(::UnityEngine::LightmapBakeType baketype);

  /// @brief Method Extract, addr 0x48cdc1c, size 0x144, virtual false, abstract: false, final false
  static inline void Extract(::UnityEngine::Light* l, ::ByRef<::UnityEngine::Experimental::GlobalIllumination::Cookie> cookie);

  /// @brief Method Extract, addr 0x48cd388, size 0x19c, virtual false, abstract: false, final false
  static inline void Extract(::UnityEngine::Light* l, ::ByRef<::UnityEngine::Experimental::GlobalIllumination::DirectionalLight> dir);

  /// @brief Method Extract, addr 0x48cda68, size 0x1b4, virtual false, abstract: false, final false
  static inline void Extract(::UnityEngine::Light* l, ::ByRef<::UnityEngine::Experimental::GlobalIllumination::DiscLight> disc);

  /// @brief Method Extract, addr 0x48cd524, size 0x1b4, virtual false, abstract: false, final false
  static inline void Extract(::UnityEngine::Light* l, ::ByRef<::UnityEngine::Experimental::GlobalIllumination::PointLight> point);

  /// @brief Method Extract, addr 0x48cd8b4, size 0x1b4, virtual false, abstract: false, final false
  static inline void Extract(::UnityEngine::Light* l, ::ByRef<::UnityEngine::Experimental::GlobalIllumination::RectangleLight> rect);

  /// @brief Method Extract, addr 0x48cd6d8, size 0x1dc, virtual false, abstract: false, final false
  static inline void Extract(::UnityEngine::Light* l, ::ByRef<::UnityEngine::Experimental::GlobalIllumination::SpotLight> spot);

  /// @brief Method ExtractColorTemperature, addr 0x48cd2cc, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color ExtractColorTemperature(::UnityEngine::Light* l);

  /// @brief Method ExtractIndirect, addr 0x48cd200, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::GlobalIllumination::LinearColor ExtractIndirect(::UnityEngine::Light* l);

  /// @brief Method ExtractInnerCone, addr 0x48cd278, size 0x54, virtual false, abstract: false, final false
  static inline float_t ExtractInnerCone(::UnityEngine::Light* l);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightmapperUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightmapperUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightmapperUtils(LightmapperUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightmapperUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightmapperUtils(LightmapperUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11302 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Experimental::GlobalIllumination
NEED_NO_BOX(::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::LightmapperUtils*, "UnityEngine.Experimental.GlobalIllumination", "LightmapperUtils");
