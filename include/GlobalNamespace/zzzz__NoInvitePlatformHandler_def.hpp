#pragma once
// IWYU pragma private; include "GlobalNamespace/NoInvitePlatformHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NoInvitePlatformHandler)
namespace GlobalNamespace {
class IInvitePlatformHandler;
}
// Forward declare root types
namespace GlobalNamespace {
class NoInvitePlatformHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoInvitePlatformHandler);
// Type: ::NoInvitePlatformHandler
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NoInvitePlatformHandler*
class CORDL_TYPE NoInvitePlatformHandler : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_isSupported)) bool isSupported;

  /// @brief Convert operator to "::GlobalNamespace::IInvitePlatformHandler"
  constexpr operator ::GlobalNamespace::IInvitePlatformHandler*() noexcept;

  static inline ::GlobalNamespace::NoInvitePlatformHandler* New_ctor();

  /// @brief Method OpenInvitePanel, addr 0x14cff74, size 0x40, virtual true, abstract: false, final true
  inline void OpenInvitePanel();

  /// @brief Method .ctor, addr 0x14cffb4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isSupported, addr 0x14cff6c, size 0x8, virtual true, abstract: false, final true
  inline bool get_isSupported();

  /// @brief Convert to "::GlobalNamespace::IInvitePlatformHandler"
  constexpr ::GlobalNamespace::IInvitePlatformHandler* i___GlobalNamespace__IInvitePlatformHandler() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoInvitePlatformHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoInvitePlatformHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoInvitePlatformHandler(NoInvitePlatformHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoInvitePlatformHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoInvitePlatformHandler(NoInvitePlatformHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoInvitePlatformHandler, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoInvitePlatformHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoInvitePlatformHandler*, "", "NoInvitePlatformHandler");
