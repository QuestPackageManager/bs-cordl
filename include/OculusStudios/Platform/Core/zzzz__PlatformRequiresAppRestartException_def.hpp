#pragma once
// IWYU pragma private; include "OculusStudios\Platform\Core\PlatformRequiresAppRestartException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlatformRequiresAppRestartException)
namespace System {
class Exception;
}
// Forward declare root types
namespace OculusStudios::Platform::Core {
class PlatformRequiresAppRestartException;
}
// Write type traits
MARK_REF_T(::OculusStudios::Platform::Core::PlatformRequiresAppRestartException*);
DEFINE_IL2CPP_CLASS(::OculusStudios::Platform::Core::PlatformRequiresAppRestartException*, "OculusStudios.Platform.Core", "PlatformRequiresAppRestartException");
// Dependencies System.Exception
namespace OculusStudios::Platform::Core {
// Is value type: false
// CS Name: OculusStudios.Platform.Core.PlatformRequiresAppRestartException
class CORDL_TYPE PlatformRequiresAppRestartException : public ::System::Exception {
public:
  // Declarations
  static inline ::OculusStudios::Platform::Core::PlatformRequiresAppRestartException* New_ctor();

  static inline ::OculusStudios::Platform::Core::PlatformRequiresAppRestartException* New_ctor(::StringW message);

  static inline ::OculusStudios::Platform::Core::PlatformRequiresAppRestartException* New_ctor(::StringW message, ::System::Exception* inner);

  /// @brief Method .ctor, addr 0x5f2e8a4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5f2e8fc, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x5f2e968, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* inner);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformRequiresAppRestartException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformRequiresAppRestartException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformRequiresAppRestartException(PlatformRequiresAppRestartException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformRequiresAppRestartException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformRequiresAppRestartException(PlatformRequiresAppRestartException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22453 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OculusStudios::Platform::Core::PlatformRequiresAppRestartException) == 0x90, "Size mismatch!");

} // namespace OculusStudios::Platform::Core
