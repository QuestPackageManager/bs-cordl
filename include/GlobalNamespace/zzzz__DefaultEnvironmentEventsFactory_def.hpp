#pragma once
// IWYU pragma private; include "GlobalNamespace/DefaultEnvironmentEventsFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DefaultEnvironmentEventsFactory)
namespace GlobalNamespace {
class BeatmapData;
}
// Forward declare root types
namespace GlobalNamespace {
class DefaultEnvironmentEventsFactory;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DefaultEnvironmentEventsFactory);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DefaultEnvironmentEventsFactory
class CORDL_TYPE DefaultEnvironmentEventsFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Method InsertDefaultEvents, addr 0x26b92d0, size 0xac, virtual false, abstract: false, final false
  static inline void InsertDefaultEvents(::GlobalNamespace::BeatmapData* beatmapData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultEnvironmentEventsFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultEnvironmentEventsFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultEnvironmentEventsFactory(DefaultEnvironmentEventsFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultEnvironmentEventsFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultEnvironmentEventsFactory(DefaultEnvironmentEventsFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12889 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DefaultEnvironmentEventsFactory, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DefaultEnvironmentEventsFactory);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DefaultEnvironmentEventsFactory*, "", "DefaultEnvironmentEventsFactory");
