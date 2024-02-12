#pragma once
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
// Type: Oculus.Platform::RichPresence
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13296))
// CS Name: ::Oculus.Platform::RichPresence*
class CORDL_TYPE RichPresence : public ::System::Object {
public:
  // Declarations
  /// @brief Method Clear, addr 0x2730d58, size 0x148, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request* Clear();

  /// @brief Method GetDestinations, addr 0x2730ea0, size 0x15c, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::DestinationList*>* GetDestinations();

  /// @brief Method Set, addr 0x2730ffc, size 0x190, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request* Set(::Oculus::Platform::RichPresenceOptions* richPresenceOptions);

  /// @brief Method GetNextDestinationListPage, addr 0x27311e4, size 0x1e0, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::DestinationList*>* GetNextDestinationListPage(::Oculus::Platform::Models::DestinationList* list);

  // Ctor Parameters [CppParam { name: "", ty: "RichPresence", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RichPresence(RichPresence&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RichPresence", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RichPresence(RichPresence const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RichPresence();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::RichPresence, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::RichPresence);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::RichPresence*, "Oculus.Platform", "RichPresence");
