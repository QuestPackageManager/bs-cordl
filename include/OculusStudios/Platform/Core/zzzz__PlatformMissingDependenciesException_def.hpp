#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/PlatformMissingDependenciesException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlatformMissingDependenciesException)
namespace System {
class Exception;
}
// Forward declare root types
namespace OculusStudios::Platform::Core {
class PlatformMissingDependenciesException;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::Platform::Core::PlatformMissingDependenciesException);
// Dependencies System.Exception
namespace OculusStudios::Platform::Core {
// Is value type: false
// CS Name: OculusStudios.Platform.Core.PlatformMissingDependenciesException
class CORDL_TYPE PlatformMissingDependenciesException : public ::System::Exception {
public:
  // Declarations
  static inline ::OculusStudios::Platform::Core::PlatformMissingDependenciesException* New_ctor();

  static inline ::OculusStudios::Platform::Core::PlatformMissingDependenciesException* New_ctor(::StringW message);

  static inline ::OculusStudios::Platform::Core::PlatformMissingDependenciesException* New_ctor(::StringW message, ::System::Exception* inner);

  /// @brief Method .ctor, addr 0x5d19604, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5d1965c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x5d196c8, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* inner);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformMissingDependenciesException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformMissingDependenciesException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformMissingDependenciesException(PlatformMissingDependenciesException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformMissingDependenciesException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformMissingDependenciesException(PlatformMissingDependenciesException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22154 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OculusStudios::Platform::Core::PlatformMissingDependenciesException, 0x90>, "Size mismatch!");

} // namespace OculusStudios::Platform::Core
NEED_NO_BOX(::OculusStudios::Platform::Core::PlatformMissingDependenciesException);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Core::PlatformMissingDependenciesException*, "OculusStudios.Platform.Core", "PlatformMissingDependenciesException");
