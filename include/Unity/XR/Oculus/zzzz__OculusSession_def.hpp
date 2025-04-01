#pragma once
// IWYU pragma private; include "Unity/XR/Oculus/OculusSession.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OculusSession)
// Forward declare root types
namespace Unity::XR::Oculus {
class OculusSession;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::Oculus::OculusSession);
// Dependencies System.Object
namespace Unity::XR::Oculus {
// Is value type: false
// CS Name: Unity.XR.Oculus.OculusSession
class CORDL_TYPE OculusSession : public ::System::Object {
public:
  // Declarations
  /// @brief Method Update, addr 0x4832ae4, size 0x60, virtual false, abstract: false, final false
  static inline void Update();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusSession();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusSession", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusSession(OculusSession&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusSession", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusSession(OculusSession const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17416 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::OculusSession, 0x10>, "Size mismatch!");

} // namespace Unity::XR::Oculus
NEED_NO_BOX(::Unity::XR::Oculus::OculusSession);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::OculusSession*, "Unity.XR.Oculus", "OculusSession");
