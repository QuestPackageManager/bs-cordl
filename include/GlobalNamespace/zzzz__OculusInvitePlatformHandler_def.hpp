#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusInvitePlatformHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OculusInvitePlatformHandler)
namespace GlobalNamespace {
class IInvitePlatformHandler;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusInvitePlatformHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusInvitePlatformHandler);
// Type: ::OculusInvitePlatformHandler
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OculusInvitePlatformHandler*
class CORDL_TYPE OculusInvitePlatformHandler : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_isSupported)) bool isSupported;

  /// @brief Convert operator to "::GlobalNamespace::IInvitePlatformHandler"
  constexpr operator ::GlobalNamespace::IInvitePlatformHandler*() noexcept;

  static inline ::GlobalNamespace::OculusInvitePlatformHandler* New_ctor();

  /// @brief Method OpenInvitePanel, addr 0x2699328, size 0x58, virtual true, abstract: false, final true
  inline void OpenInvitePanel();

  /// @brief Method .ctor, addr 0x2699380, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isSupported, addr 0x2699320, size 0x8, virtual true, abstract: false, final true
  inline bool get_isSupported();

  /// @brief Convert to "::GlobalNamespace::IInvitePlatformHandler"
  constexpr ::GlobalNamespace::IInvitePlatformHandler* i___GlobalNamespace__IInvitePlatformHandler() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusInvitePlatformHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusInvitePlatformHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusInvitePlatformHandler(OculusInvitePlatformHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusInvitePlatformHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusInvitePlatformHandler(OculusInvitePlatformHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13051 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusInvitePlatformHandler, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusInvitePlatformHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusInvitePlatformHandler*, "", "OculusInvitePlatformHandler");
