#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SendInvitesResult)
namespace Oculus::Platform::Models {
class ApplicationInviteList;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class SendInvitesResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::SendInvitesResult);
// Type: Oculus.Platform.Models::SendInvitesResult
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13540))
// CS Name: ::Oculus.Platform.Models::SendInvitesResult*
class CORDL_TYPE SendInvitesResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field Invites, offset 0x10, size 0x8
  __declspec(property(get = __get_Invites, put = __set_Invites))::Oculus::Platform::Models::ApplicationInviteList* Invites;

  constexpr ::Oculus::Platform::Models::ApplicationInviteList*& __get_Invites();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::ApplicationInviteList*> const& __get_Invites() const;

  constexpr void __set_Invites(::Oculus::Platform::Models::ApplicationInviteList* value);

  static inline ::Oculus::Platform::Models::SendInvitesResult* New_ctor(void* o);

  /// @brief Method .ctor addr 0x25b7ba4 size 0xb0 virtual false final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "SendInvitesResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SendInvitesResult(SendInvitesResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SendInvitesResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SendInvitesResult(SendInvitesResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SendInvitesResult();

public:
  /// @brief Field Invites, offset: 0x10, size: 0x8, def value: None
  ::Oculus::Platform::Models::ApplicationInviteList* ___Invites;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::SendInvitesResult, 0x18>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::SendInvitesResult, ___Invites) == 0x10, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::SendInvitesResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::SendInvitesResult*, "Oculus.Platform.Models", "SendInvitesResult");
