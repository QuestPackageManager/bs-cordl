#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusXRPlugin.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OculusXRPlugin)
namespace GlobalNamespace {
struct OVRPlugin_Bool;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusXRPlugin;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusXRPlugin);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusXRPlugin
class CORDL_TYPE OculusXRPlugin : public ::System::Object {
public:
  // Declarations
  /// @brief Method SetAppSpacePosition, addr 0x402d0e4, size 0x90, virtual false, abstract: false, final false
  static inline void SetAppSpacePosition(float_t x, float_t y, float_t z);

  /// @brief Method SetAppSpaceRotation, addr 0x402d174, size 0x98, virtual false, abstract: false, final false
  static inline void SetAppSpaceRotation(float_t x, float_t y, float_t z, float_t w);

  /// @brief Method SetColorOffset, addr 0x402cfd4, size 0x94, virtual false, abstract: false, final false
  static inline void SetColorOffset(float_t x, float_t y, float_t z, float_t w);

  /// @brief Method SetColorScale, addr 0x402cf3c, size 0x98, virtual false, abstract: false, final false
  static inline void SetColorScale(float_t x, float_t y, float_t z, float_t w);

  /// @brief Method SetDepthSubmission, addr 0x402d20c, size 0x7c, virtual false, abstract: false, final false
  static inline void SetDepthSubmission(bool enable);

  /// @brief Method SetSpaceWarp, addr 0x402d068, size 0x7c, virtual false, abstract: false, final false
  static inline void SetSpaceWarp(::GlobalNamespace::OVRPlugin_Bool on);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusXRPlugin();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusXRPlugin", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusXRPlugin(OculusXRPlugin&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusXRPlugin", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusXRPlugin(OculusXRPlugin const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8379 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusXRPlugin, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusXRPlugin);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusXRPlugin*, "", "OculusXRPlugin");
