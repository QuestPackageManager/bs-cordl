#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XR/XRSupport.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRSupport)
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
class XRSupport;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::XR::XRSupport);
// Dependencies System.Object
namespace UnityEngine::InputSystem::XR {
// Is value type: false
// CS Name: UnityEngine.InputSystem.XR.XRSupport
class CORDL_TYPE XRSupport : public ::System::Object {
public:
  // Declarations
  /// @brief Method Initialize, addr 0x45e7fcc, size 0x858, virtual false, abstract: false, final false
  static inline void Initialize();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRSupport();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRSupport", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRSupport(XRSupport&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRSupport", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRSupport(XRSupport const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6750 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::XRSupport, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::XR
NEED_NO_BOX(::UnityEngine::InputSystem::XR::XRSupport);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::XRSupport*, "UnityEngine.InputSystem.XR", "XRSupport");
