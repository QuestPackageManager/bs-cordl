#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRDisplaySubsystemDescriptor.hpp"
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
// Dependencies UnityEngine.IntegratedSubsystemDescriptor`1<TSubsystem>
namespace UnityEngine::XR {
// Is value type: false
// CS Name: UnityEngine.XR.XRDisplaySubsystemDescriptor
class CORDL_TYPE XRDisplaySubsystemDescriptor : public ::UnityEngine::IntegratedSubsystemDescriptor_1<Il2CppObject*> {
public:
  // Declarations
  static inline ::UnityEngine::XR::XRDisplaySubsystemDescriptor* New_ctor();

  /// @brief Method .ctor, addr 0x4aeba30, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRDisplaySubsystemDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRDisplaySubsystemDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRDisplaySubsystemDescriptor(XRDisplaySubsystemDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRDisplaySubsystemDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRDisplaySubsystemDescriptor(XRDisplaySubsystemDescriptor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18292 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::XRDisplaySubsystemDescriptor, 0x18>, "Size mismatch!");

} // namespace UnityEngine::XR
NEED_NO_BOX(::UnityEngine::XR::XRDisplaySubsystemDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRDisplaySubsystemDescriptor*, "UnityEngine.XR", "XRDisplaySubsystemDescriptor");
