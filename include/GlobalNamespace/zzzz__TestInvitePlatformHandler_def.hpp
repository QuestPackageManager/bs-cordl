#pragma once
// IWYU pragma private; include "GlobalNamespace/TestInvitePlatformHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TestInvitePlatformHandler)
namespace GlobalNamespace {
class IInvitePlatformHandler;
}
// Forward declare root types
namespace GlobalNamespace {
class TestInvitePlatformHandler;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TestInvitePlatformHandler*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TestInvitePlatformHandler*, "", "TestInvitePlatformHandler");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TestInvitePlatformHandler
class CORDL_TYPE TestInvitePlatformHandler : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_isSupported)) bool isSupported;

  /// @brief Convert operator to "::GlobalNamespace::IInvitePlatformHandler"
  constexpr operator ::GlobalNamespace::IInvitePlatformHandler*() noexcept;

  static inline ::GlobalNamespace::TestInvitePlatformHandler* New_ctor();

  /// @brief Method OpenInvitePanel, addr 0x3732664, size 0x70, virtual true, abstract: false, final true
  inline void OpenInvitePanel();

  /// @brief Method .ctor, addr 0x37326d4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isSupported, addr 0x373265c, size 0x8, virtual true, abstract: false, final true
  inline bool get_isSupported();

  /// @brief Convert to "::GlobalNamespace::IInvitePlatformHandler"
  constexpr ::GlobalNamespace::IInvitePlatformHandler* i___GlobalNamespace__IInvitePlatformHandler() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TestInvitePlatformHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TestInvitePlatformHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TestInvitePlatformHandler(TestInvitePlatformHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TestInvitePlatformHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TestInvitePlatformHandler(TestInvitePlatformHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15068 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::TestInvitePlatformHandler) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
