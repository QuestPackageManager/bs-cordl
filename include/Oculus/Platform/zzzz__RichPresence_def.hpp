#pragma once
// IWYU pragma private; include "Oculus/Platform/RichPresence.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RichPresence)
namespace Oculus::Platform::Models {
class DestinationList;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
}
namespace Oculus::Platform {
class Request;
}
namespace Oculus::Platform {
class RichPresenceOptions;
}
// Forward declare root types
namespace Oculus::Platform {
class RichPresence;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::RichPresence);
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.RichPresence
class CORDL_TYPE RichPresence : public ::System::Object {
public:
  // Declarations
  /// @brief Method Clear, addr 0x3f8b7cc, size 0x13c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request* Clear();

  /// @brief Method GetDestinations, addr 0x3f597dc, size 0x150, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::DestinationList*>* GetDestinations();

  /// @brief Method GetNextDestinationListPage, addr 0x3f8ba60, size 0x1d8, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::DestinationList*>* GetNextDestinationListPage(::Oculus::Platform::Models::DestinationList* list);

  /// @brief Method Set, addr 0x3f8b908, size 0x14c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request* Set(::Oculus::Platform::RichPresenceOptions* richPresenceOptions);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RichPresence();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RichPresence", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RichPresence(RichPresence&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RichPresence", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RichPresence(RichPresence const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15460 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::RichPresence, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::RichPresence);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::RichPresence*, "Oculus.Platform", "RichPresence");
