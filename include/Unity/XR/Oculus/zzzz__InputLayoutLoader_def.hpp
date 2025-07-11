#pragma once
// IWYU pragma private; include "Unity/XR/Oculus/InputLayoutLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InputLayoutLoader)
// Forward declare root types
namespace Unity::XR::Oculus {
class InputLayoutLoader;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::Oculus::InputLayoutLoader);
// Dependencies System.Object
namespace Unity::XR::Oculus {
// Is value type: false
// CS Name: Unity.XR.Oculus.InputLayoutLoader
class CORDL_TYPE InputLayoutLoader : public ::System::Object {
public:
  // Declarations
  /// @brief Method RegisterInputLayouts, addr 0x4833310, size 0x37c, virtual false, abstract: false, final false
  static inline void RegisterInputLayouts();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputLayoutLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputLayoutLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputLayoutLoader(InputLayoutLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputLayoutLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputLayoutLoader(InputLayoutLoader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17403 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::InputLayoutLoader, 0x10>, "Size mismatch!");

} // namespace Unity::XR::Oculus
NEED_NO_BOX(::Unity::XR::Oculus::InputLayoutLoader);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::InputLayoutLoader*, "Unity.XR.Oculus", "InputLayoutLoader");
