#pragma once
// IWYU pragma private; include "GlobalNamespace\IInvitePlatformHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInvitePlatformHandler)
// Forward declare root types
namespace GlobalNamespace {
class IInvitePlatformHandler;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IInvitePlatformHandler*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IInvitePlatformHandler*, "", "IInvitePlatformHandler");
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IInvitePlatformHandler
class CORDL_TYPE IInvitePlatformHandler {
public:
  // Declarations
  __declspec(property(get = get_isSupported)) bool isSupported;

  /// @brief Method OpenInvitePanel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OpenInvitePanel();

  /// @brief Method get_isSupported, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_isSupported();

  // Ctor Parameters [CppParam { name: "", ty: "IInvitePlatformHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInvitePlatformHandler(IInvitePlatformHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15096 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
