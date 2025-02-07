#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/LaunchFriendRequestFlowResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LaunchFriendRequestFlowResult)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class LaunchFriendRequestFlowResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::LaunchFriendRequestFlowResult);
// Dependencies System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.LaunchFriendRequestFlowResult
class CORDL_TYPE LaunchFriendRequestFlowResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field DidCancel, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_DidCancel, put = __cordl_internal_set_DidCancel)) bool DidCancel;

  /// @brief Field DidSendRequest, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_DidSendRequest, put = __cordl_internal_set_DidSendRequest)) bool DidSendRequest;

  static inline ::Oculus::Platform::Models::LaunchFriendRequestFlowResult* New_ctor(::System::IntPtr o);

  constexpr bool const& __cordl_internal_get_DidCancel() const;

  constexpr bool& __cordl_internal_get_DidCancel();

  constexpr bool const& __cordl_internal_get_DidSendRequest() const;

  constexpr bool& __cordl_internal_get_DidSendRequest();

  constexpr void __cordl_internal_set_DidCancel(bool value);

  constexpr void __cordl_internal_set_DidSendRequest(bool value);

  /// @brief Method .ctor, addr 0x3f95eec, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LaunchFriendRequestFlowResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LaunchFriendRequestFlowResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LaunchFriendRequestFlowResult(LaunchFriendRequestFlowResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LaunchFriendRequestFlowResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LaunchFriendRequestFlowResult(LaunchFriendRequestFlowResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15529 };

  /// @brief Field DidCancel, offset: 0x10, size: 0x1, def value: None
  bool ___DidCancel;

  /// @brief Field DidSendRequest, offset: 0x11, size: 0x1, def value: None
  bool ___DidSendRequest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::LaunchFriendRequestFlowResult, ___DidCancel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LaunchFriendRequestFlowResult, ___DidSendRequest) == 0x11, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::LaunchFriendRequestFlowResult, 0x18>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::LaunchFriendRequestFlowResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LaunchFriendRequestFlowResult*, "Oculus.Platform.Models", "LaunchFriendRequestFlowResult");
