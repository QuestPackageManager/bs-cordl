#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDirectComposition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OVRDirectComposition)
// Forward declare root types
namespace GlobalNamespace {
class OVRDirectComposition;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRDirectComposition);
// Type: ::OVRDirectComposition
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRDirectComposition*
class CORDL_TYPE OVRDirectComposition : public ::System::Object {
public:
  // Declarations
  static inline ::GlobalNamespace::OVRDirectComposition* New_ctor();

  /// @brief Method .ctor, addr 0x3f371a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDirectComposition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRDirectComposition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRDirectComposition(OVRDirectComposition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRDirectComposition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRDirectComposition(OVRDirectComposition const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7792 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDirectComposition, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRDirectComposition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDirectComposition*, "", "OVRDirectComposition");
