#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/UserDataStoreUpdateResponse.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UserDataStoreUpdateResponse)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class UserDataStoreUpdateResponse;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::UserDataStoreUpdateResponse);
// Dependencies System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.UserDataStoreUpdateResponse
class CORDL_TYPE UserDataStoreUpdateResponse : public ::System::Object {
public:
  // Declarations
  /// @brief Field Success, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_Success, put = __cordl_internal_set_Success)) bool Success;

  static inline ::Oculus::Platform::Models::UserDataStoreUpdateResponse* New_ctor(::System::IntPtr o);

  constexpr bool const& __cordl_internal_get_Success() const;

  constexpr bool& __cordl_internal_get_Success();

  constexpr void __cordl_internal_set_Success(bool value);

  /// @brief Method .ctor, addr 0x3f94010, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UserDataStoreUpdateResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UserDataStoreUpdateResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UserDataStoreUpdateResponse(UserDataStoreUpdateResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UserDataStoreUpdateResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UserDataStoreUpdateResponse(UserDataStoreUpdateResponse const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15580 };

  /// @brief Field Success, offset: 0x10, size: 0x1, def value: None
  bool ___Success;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::UserDataStoreUpdateResponse, ___Success) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::UserDataStoreUpdateResponse, 0x18>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::UserDataStoreUpdateResponse);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::UserDataStoreUpdateResponse*, "Oculus.Platform.Models", "UserDataStoreUpdateResponse");
