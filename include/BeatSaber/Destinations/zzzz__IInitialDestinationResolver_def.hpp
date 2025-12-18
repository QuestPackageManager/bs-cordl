#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/IInitialDestinationResolver.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInitialDestinationResolver)
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace BeatSaber::Destinations {
class IInitialDestinationResolver;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Destinations::IInitialDestinationResolver);
// Dependencies
namespace BeatSaber::Destinations {
// Is value type: false
// CS Name: BeatSaber.Destinations.IInitialDestinationResolver
class CORDL_TYPE IInitialDestinationResolver {
public:
  // Declarations
  /// @brief Method InitializeScenesAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* InitializeScenesAsync();

  // Ctor Parameters [CppParam { name: "", ty: "IInitialDestinationResolver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInitialDestinationResolver(IInitialDestinationResolver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22749 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BeatSaber::Destinations
NEED_NO_BOX(::BeatSaber::Destinations::IInitialDestinationResolver);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Destinations::IInitialDestinationResolver*, "BeatSaber.Destinations", "IInitialDestinationResolver");
