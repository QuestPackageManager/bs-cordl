#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/LinkedAccount.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__ServiceProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LinkedAccount)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class LinkedAccount;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::LinkedAccount);
// Dependencies Oculus.Platform.ServiceProvider, System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.LinkedAccount
class CORDL_TYPE LinkedAccount : public ::System::Object {
public:
  // Declarations
  /// @brief Field AccessToken, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_AccessToken, put = __cordl_internal_set_AccessToken)) ::StringW AccessToken;

  /// @brief Field ServiceProvider, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_ServiceProvider, put = __cordl_internal_set_ServiceProvider)) ::Oculus::Platform::ServiceProvider ServiceProvider;

  /// @brief Field UserId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_UserId, put = __cordl_internal_set_UserId)) ::StringW UserId;

  static inline ::Oculus::Platform::Models::LinkedAccount* New_ctor(::System::IntPtr o);

  constexpr ::StringW const& __cordl_internal_get_AccessToken() const;

  constexpr ::StringW& __cordl_internal_get_AccessToken();

  constexpr ::Oculus::Platform::ServiceProvider const& __cordl_internal_get_ServiceProvider() const;

  constexpr ::Oculus::Platform::ServiceProvider& __cordl_internal_get_ServiceProvider();

  constexpr ::StringW const& __cordl_internal_get_UserId() const;

  constexpr ::StringW& __cordl_internal_get_UserId();

  constexpr void __cordl_internal_set_AccessToken(::StringW value);

  constexpr void __cordl_internal_set_ServiceProvider(::Oculus::Platform::ServiceProvider value);

  constexpr void __cordl_internal_set_UserId(::StringW value);

  /// @brief Method .ctor, addr 0x3f92234, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LinkedAccount();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LinkedAccount", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LinkedAccount(LinkedAccount&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LinkedAccount", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LinkedAccount(LinkedAccount const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15542 };

  /// @brief Field AccessToken, offset: 0x10, size: 0x8, def value: None
  ::StringW ___AccessToken;

  /// @brief Field ServiceProvider, offset: 0x18, size: 0x4, def value: None
  ::Oculus::Platform::ServiceProvider ___ServiceProvider;

  /// @brief Field UserId, offset: 0x20, size: 0x8, def value: None
  ::StringW ___UserId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::LinkedAccount, ___AccessToken) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LinkedAccount, ___ServiceProvider) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LinkedAccount, ___UserId) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::LinkedAccount, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::LinkedAccount);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LinkedAccount*, "Oculus.Platform.Models", "LinkedAccount");
