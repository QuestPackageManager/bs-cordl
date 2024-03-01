#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OVRSandwichComposition)
// Forward declare root types
namespace GlobalNamespace {
class OVRSandwichComposition;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRSandwichComposition);
// Type: ::OVRSandwichComposition
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRSandwichComposition*
class CORDL_TYPE OVRSandwichComposition : public ::System::Object {
public:
  // Declarations
  static inline ::GlobalNamespace::OVRSandwichComposition* New_ctor();

  /// @brief Method .ctor, addr 0x28037b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSandwichComposition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSandwichComposition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSandwichComposition(OVRSandwichComposition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSandwichComposition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSandwichComposition(OVRSandwichComposition const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSandwichComposition, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSandwichComposition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSandwichComposition*, "", "OVRSandwichComposition");
