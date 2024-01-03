#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Parties)
namespace Oculus::Platform::Models {
class PartyUpdateNotification;
}
namespace Oculus::Platform::Models {
class Party;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
}
namespace Oculus::Platform {
template <typename T> class __Message_1__Callback;
}
// Forward declare root types
namespace Oculus::Platform {
class Parties;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Parties);
// Type: Oculus.Platform::Parties
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13368))
// CS Name: ::Oculus.Platform::Parties*
class CORDL_TYPE Parties : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetCurrent, addr 0x26feee0, size 0x158, virtual false, abstract: false, final false
  static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Party*>* GetCurrent();

  /// @brief Method SetPartyUpdateNotificationCallback, addr 0x26ff038, size 0x74, virtual false, abstract: false, final false
  static inline void SetPartyUpdateNotificationCallback(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::PartyUpdateNotification*>* callback);

  // Ctor Parameters [CppParam { name: "", ty: "Parties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Parties(Parties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Parties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Parties(Parties const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Parties();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Parties, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Parties);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Parties*, "Oculus.Platform", "Parties");
