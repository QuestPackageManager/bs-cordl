#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OculusXRPlugin)
namespace GlobalNamespace {
struct __OVRPlugin__Bool;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusXRPlugin;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusXRPlugin);
// Type: ::OculusXRPlugin
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8862))
// CS Name: ::OculusXRPlugin*
class CORDL_TYPE OculusXRPlugin : public ::System::Object {
public:
  // Declarations
  /// @brief Method SetColorScale addr 0x262f724 size 0x98 virtual false final false
  static inline void SetColorScale(float_t x, float_t y, float_t z, float_t w);

  /// @brief Method SetColorOffset addr 0x262f7bc size 0x94 virtual false final false
  static inline void SetColorOffset(float_t x, float_t y, float_t z, float_t w);

  /// @brief Method SetSpaceWarp addr 0x262f850 size 0x7c virtual false final false
  static inline void SetSpaceWarp(::GlobalNamespace::__OVRPlugin__Bool on);

  /// @brief Method SetAppSpacePosition addr 0x262f8cc size 0x90 virtual false final false
  static inline void SetAppSpacePosition(float_t x, float_t y, float_t z);

  /// @brief Method SetAppSpaceRotation addr 0x262f95c size 0x98 virtual false final false
  static inline void SetAppSpaceRotation(float_t x, float_t y, float_t z, float_t w);

  // Ctor Parameters [CppParam { name: "", ty: "OculusXRPlugin", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusXRPlugin(OculusXRPlugin&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusXRPlugin", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusXRPlugin(OculusXRPlugin const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusXRPlugin();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusXRPlugin, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusXRPlugin);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusXRPlugin*, "", "OculusXRPlugin");
