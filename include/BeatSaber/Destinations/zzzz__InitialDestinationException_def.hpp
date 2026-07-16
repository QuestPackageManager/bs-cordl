#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/InitialDestinationException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
CORDL_MODULE_EXPORT(InitialDestinationException)
// Forward declare root types
namespace BeatSaber::Destinations {
class InitialDestinationException;
}
// Write type traits
MARK_REF_T(::BeatSaber::Destinations::InitialDestinationException*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Destinations::InitialDestinationException*, "BeatSaber.Destinations", "InitialDestinationException");
// Dependencies System.Exception
namespace BeatSaber::Destinations {
// Is value type: false
// CS Name: BeatSaber.Destinations.InitialDestinationException
class CORDL_TYPE InitialDestinationException : public ::System::Exception {
public:
  // Declarations
  static inline ::BeatSaber::Destinations::InitialDestinationException* New_ctor();

  /// @brief Method .ctor, addr 0x3280a44, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InitialDestinationException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InitialDestinationException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InitialDestinationException(InitialDestinationException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InitialDestinationException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InitialDestinationException(InitialDestinationException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23070 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BeatSaber::Destinations::InitialDestinationException) == 0x90, "Size mismatch!");

} // namespace BeatSaber::Destinations
