#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/Defines.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Defines)
// Forward declare root types
namespace OculusStudios::Platform::Core {
class Defines;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::Platform::Core::Defines);
// Dependencies System.Object
namespace OculusStudios::Platform::Core {
// Is value type: false
// CS Name: OculusStudios.Platform.Core.Defines
class CORDL_TYPE Defines : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Defines();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Defines", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Defines(Defines&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Defines", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Defines(Defines const&) = delete;

  /// @brief Field TIMEOUT_WEBREQUEST_SECONDS offset 0xffffffff size 0x4
  static constexpr uint32_t TIMEOUT_WEBREQUEST_SECONDS{ static_cast<uint32_t>(0x14u) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22152 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OculusStudios::Platform::Core::Defines, 0x10>, "Size mismatch!");

} // namespace OculusStudios::Platform::Core
NEED_NO_BOX(::OculusStudios::Platform::Core::Defines);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Core::Defines*, "OculusStudios.Platform.Core", "Defines");
