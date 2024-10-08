#pragma once
// IWYU pragma private; include "GlobalNamespace/IInvitePlatformHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInvitePlatformHandler)
// Forward declare root types
namespace GlobalNamespace {
class IInvitePlatformHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IInvitePlatformHandler);
// Type: ::IInvitePlatformHandler
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IInvitePlatformHandler*
class CORDL_TYPE IInvitePlatformHandler {
public:
  // Declarations
  __declspec(property(get = get_isSupported)) bool isSupported;

  /// @brief Method OpenInvitePanel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OpenInvitePanel();

  /// @brief Method get_isSupported, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isSupported();

  // Ctor Parameters [CppParam { name: "", ty: "IInvitePlatformHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IInvitePlatformHandler(IInvitePlatformHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IInvitePlatformHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInvitePlatformHandler(IInvitePlatformHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13049 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IInvitePlatformHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IInvitePlatformHandler*, "", "IInvitePlatformHandler");
