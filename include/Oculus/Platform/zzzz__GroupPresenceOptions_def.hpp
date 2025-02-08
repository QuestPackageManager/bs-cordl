#pragma once
// IWYU pragma private; include "Oculus/Platform/GroupPresenceOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GroupPresenceOptions)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class GroupPresenceOptions;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::GroupPresenceOptions);
// Dependencies System.IntPtr, System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.GroupPresenceOptions
class CORDL_TYPE GroupPresenceOptions : public ::System::Object {
public:
  // Declarations
  /// @brief Field Handle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Handle, put = __cordl_internal_set_Handle)) ::System::IntPtr Handle;

  /// @brief Method Finalize, addr 0x3f7e228, size 0xd4, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Oculus::Platform::GroupPresenceOptions* New_ctor();

  /// @brief Method SetDeeplinkMessageOverride, addr 0x3f7e1b4, size 0x68, virtual false, abstract: false, final false
  inline void SetDeeplinkMessageOverride(::StringW value);

  /// @brief Method SetDestinationApiName, addr 0x3f5c194, size 0x68, virtual false, abstract: false, final false
  inline void SetDestinationApiName(::StringW value);

  /// @brief Method SetIsJoinable, addr 0x3f5c2cc, size 0x68, virtual false, abstract: false, final false
  inline void SetIsJoinable(bool value);

  /// @brief Method SetLobbySessionId, addr 0x3f5c264, size 0x68, virtual false, abstract: false, final false
  inline void SetLobbySessionId(::StringW value);

  /// @brief Method SetMatchSessionId, addr 0x3f5c1fc, size 0x68, virtual false, abstract: false, final false
  inline void SetMatchSessionId(::StringW value);

  constexpr ::System::IntPtr const& __cordl_internal_get_Handle() const;

  constexpr ::System::IntPtr& __cordl_internal_get_Handle();

  constexpr void __cordl_internal_set_Handle(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x3f5c130, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method op_Explicit, addr 0x3f7e21c, size 0xc, virtual false, abstract: false, final false
  static inline ::System::IntPtr op_Explicit___System__IntPtr(::Oculus::Platform::GroupPresenceOptions* options);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GroupPresenceOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GroupPresenceOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GroupPresenceOptions(GroupPresenceOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GroupPresenceOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GroupPresenceOptions(GroupPresenceOptions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15331 };

  /// @brief Field Handle, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::GroupPresenceOptions, ___Handle) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::GroupPresenceOptions, 0x18>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::GroupPresenceOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::GroupPresenceOptions*, "Oculus.Platform", "GroupPresenceOptions");
