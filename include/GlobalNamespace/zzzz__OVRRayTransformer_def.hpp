#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRRayTransformer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRRayTransformer)
namespace UnityEngine {
struct Ray;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRRayTransformer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRRayTransformer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRRayTransformer*, "", "OVRRayTransformer");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRRayTransformer
class CORDL_TYPE OVRRayTransformer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::OVRRayTransformer* New_ctor();

  /// @brief Method TransformRay, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Ray TransformRay(::UnityEngine::Ray ray);

  /// @brief Method .ctor, addr 0x5f0bf7c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRRayTransformer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRRayTransformer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRRayTransformer(OVRRayTransformer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRRayTransformer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRRayTransformer(OVRRayTransformer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7972 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRRayTransformer) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
