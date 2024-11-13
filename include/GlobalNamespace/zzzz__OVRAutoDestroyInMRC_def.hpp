#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAutoDestroyInMRC.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRAutoDestroyInMRC)
// Forward declare root types
namespace GlobalNamespace {
class OVRAutoDestroyInMRC;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRAutoDestroyInMRC);
// Type: ::OVRAutoDestroyInMRC
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRAutoDestroyInMRC*
class CORDL_TYPE OVRAutoDestroyInMRC : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::OVRAutoDestroyInMRC* New_ctor();

  /// @brief Method Start, addr 0x3fc8370, size 0x118, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3fc8488, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method .ctor, addr 0x3fc848c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRAutoDestroyInMRC();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRAutoDestroyInMRC", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRAutoDestroyInMRC(OVRAutoDestroyInMRC&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRAutoDestroyInMRC", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRAutoDestroyInMRC(OVRAutoDestroyInMRC const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8363 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRAutoDestroyInMRC, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRAutoDestroyInMRC);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRAutoDestroyInMRC*, "", "OVRAutoDestroyInMRC");
