#pragma once
// IWYU pragma private; include "GlobalNamespace/SaberTypeExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SaberTypeExtensions)
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
struct SaberType;
}
namespace UnityEngine::XR {
struct XRNode;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberTypeExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SaberTypeExtensions);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SaberTypeExtensions
class CORDL_TYPE SaberTypeExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method MainSaber, addr 0x2724590, size 0xc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::SaberType MainSaber(bool leftHanded);

  /// @brief Method MatchesColorType, addr 0x2721e08, size 0x28, virtual false, abstract: false, final false
  static inline bool MatchesColorType(::GlobalNamespace::SaberType saberType, ::GlobalNamespace::ColorType colorType);

  /// @brief Method Node, addr 0x2724580, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::XRNode Node(::GlobalNamespace::SaberType saberType);

  /// @brief Method ToColorType, addr 0x2724620, size 0x84, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::ColorType ToColorType(::GlobalNamespace::SaberType saberType);

  /// @brief Method ToSaberType, addr 0x272459c, size 0x84, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::SaberType ToSaberType(::GlobalNamespace::ColorType colorType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaberTypeExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SaberTypeExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaberTypeExtensions(SaberTypeExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaberTypeExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaberTypeExtensions(SaberTypeExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17015 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberTypeExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberTypeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberTypeExtensions*, "", "SaberTypeExtensions");
