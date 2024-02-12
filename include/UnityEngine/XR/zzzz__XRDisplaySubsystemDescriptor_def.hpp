#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__IntegratedSubsystemDescriptor_1_def.hpp"
CORDL_MODULE_EXPORT(XRDisplaySubsystemDescriptor)
// Forward declare root types
namespace UnityEngine::XR {
class XRDisplaySubsystemDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::XRDisplaySubsystemDescriptor);
// Type: UnityEngine.XR::XRDisplaySubsystemDescriptor
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(16083)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(16083), inst: 3896 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15771))
// CS Name: ::UnityEngine.XR::XRDisplaySubsystemDescriptor*
class CORDL_TYPE XRDisplaySubsystemDescriptor : public ::UnityEngine::IntegratedSubsystemDescriptor_1<Il2CppObject*> {
public:
  // Declarations
  static inline ::UnityEngine::XR::XRDisplaySubsystemDescriptor* New_ctor();

  /// @brief Method .ctor, addr 0x2eceff0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "XRDisplaySubsystemDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRDisplaySubsystemDescriptor(XRDisplaySubsystemDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRDisplaySubsystemDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRDisplaySubsystemDescriptor(XRDisplaySubsystemDescriptor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRDisplaySubsystemDescriptor();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::XRDisplaySubsystemDescriptor, 0x18>, "Size mismatch!");

} // namespace UnityEngine::XR
NEED_NO_BOX(::UnityEngine::XR::XRDisplaySubsystemDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRDisplaySubsystemDescriptor*, "UnityEngine.XR", "XRDisplaySubsystemDescriptor");
