#pragma once
// IWYU pragma private; include "GlobalNamespace/LightGroupRotationYTransform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LightGroupRotationYTransform)
// Forward declare root types
namespace GlobalNamespace {
class LightGroupRotationYTransform;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightGroupRotationYTransform);
// Type: ::LightGroupRotationYTransform
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightGroupRotationYTransform*
class CORDL_TYPE LightGroupRotationYTransform : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::LightGroupRotationYTransform* New_ctor();

  /// @brief Method .ctor, addr 0x26ca34c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightGroupRotationYTransform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightGroupRotationYTransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightGroupRotationYTransform(LightGroupRotationYTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightGroupRotationYTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightGroupRotationYTransform(LightGroupRotationYTransform const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightGroupRotationYTransform, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightGroupRotationYTransform);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroupRotationYTransform*, "", "LightGroupRotationYTransform");
