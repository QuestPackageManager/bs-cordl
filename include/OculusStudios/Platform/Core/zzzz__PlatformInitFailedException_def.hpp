#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/PlatformInitFailedException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlatformInitFailedException)
namespace System {
class Exception;
}
// Forward declare root types
namespace OculusStudios::Platform::Core {
class PlatformInitFailedException;
}
// Write type traits
MARK_REF_T(::OculusStudios::Platform::Core::PlatformInitFailedException*);
DEFINE_IL2CPP_CLASS(::OculusStudios::Platform::Core::PlatformInitFailedException*, "OculusStudios.Platform.Core", "PlatformInitFailedException");
// Dependencies System.Exception
namespace OculusStudios::Platform::Core {
// Is value type: false
// CS Name: OculusStudios.Platform.Core.PlatformInitFailedException
class CORDL_TYPE PlatformInitFailedException : public ::System::Exception {
public:
  // Declarations
  static inline ::OculusStudios::Platform::Core::PlatformInitFailedException* New_ctor();

  static inline ::OculusStudios::Platform::Core::PlatformInitFailedException* New_ctor(::StringW message);

  static inline ::OculusStudios::Platform::Core::PlatformInitFailedException* New_ctor(::StringW message, ::System::Exception* inner);

  /// @brief Method .ctor, addr 0x5f2c2d0, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5f2c328, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x5f2c394, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* inner);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformInitFailedException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformInitFailedException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformInitFailedException(PlatformInitFailedException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformInitFailedException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformInitFailedException(PlatformInitFailedException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22401 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OculusStudios::Platform::Core::PlatformInitFailedException) == 0x90, "Size mismatch!");

} // namespace OculusStudios::Platform::Core
