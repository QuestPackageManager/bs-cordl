#pragma once
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
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7506))
// CS Name: ::OVRDirectComposition*
class CORDL_TYPE OVRDirectComposition : public ::System::Object {
public:
  // Declarations
  static inline ::GlobalNamespace::OVRDirectComposition* New_ctor();

  /// @brief Method .ctor addr 0x270df18 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRDirectComposition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRDirectComposition(OVRDirectComposition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRDirectComposition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRDirectComposition(OVRDirectComposition const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRDirectComposition();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRDirectComposition, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRDirectComposition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDirectComposition*, "", "OVRDirectComposition");
