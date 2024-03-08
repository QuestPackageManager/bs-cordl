#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InvitePanelResultInfo)
// Forward declare root types
namespace Oculus::Platform::Models {
class InvitePanelResultInfo;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::InvitePanelResultInfo);
// Type: Oculus.Platform.Models::InvitePanelResultInfo
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: ::Oculus.Platform.Models::InvitePanelResultInfo*
class CORDL_TYPE InvitePanelResultInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field InvitesSent, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_InvitesSent, put = __cordl_internal_set_InvitesSent)) bool InvitesSent;

  static inline ::Oculus::Platform::Models::InvitePanelResultInfo* New_ctor(void* o);

  constexpr bool const& __cordl_internal_get_InvitesSent() const;

  constexpr bool& __cordl_internal_get_InvitesSent();

  constexpr void __cordl_internal_set_InvitesSent(bool value);

  /// @brief Method .ctor, addr 0x285a6ac, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(void* o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvitePanelResultInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvitePanelResultInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvitePanelResultInfo(InvitePanelResultInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvitePanelResultInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvitePanelResultInfo(InvitePanelResultInfo const&) = delete;

  /// @brief Field InvitesSent, offset: 0x10, size: 0x1, def value: None
  bool ___InvitesSent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::InvitePanelResultInfo, 0x18>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::InvitePanelResultInfo, ___InvitesSent) == 0x10, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::InvitePanelResultInfo);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::InvitePanelResultInfo*, "Oculus.Platform.Models", "InvitePanelResultInfo");
