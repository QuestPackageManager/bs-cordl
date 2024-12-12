#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/SdkAccount.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__SdkAccountType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SdkAccount)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class SdkAccount;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::SdkAccount);
// Dependencies Oculus.Platform.SdkAccountType, System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.SdkAccount
class CORDL_TYPE SdkAccount : public ::System::Object {
public:
  // Declarations
  /// @brief Field AccountType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_AccountType, put = __cordl_internal_set_AccountType)) ::Oculus::Platform::SdkAccountType AccountType;

  /// @brief Field UserId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_UserId, put = __cordl_internal_set_UserId)) uint64_t UserId;

  static inline ::Oculus::Platform::Models::SdkAccount* New_ctor(::System::IntPtr o);

  constexpr ::Oculus::Platform::SdkAccountType const& __cordl_internal_get_AccountType() const;

  constexpr ::Oculus::Platform::SdkAccountType& __cordl_internal_get_AccountType();

  constexpr uint64_t const& __cordl_internal_get_UserId() const;

  constexpr uint64_t& __cordl_internal_get_UserId();

  constexpr void __cordl_internal_set_AccountType(::Oculus::Platform::SdkAccountType value);

  constexpr void __cordl_internal_set_UserId(uint64_t value);

  /// @brief Method .ctor, addr 0x3f922b4, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SdkAccount();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SdkAccount", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SdkAccount(SdkAccount&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SdkAccount", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SdkAccount(SdkAccount const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15560 };

  /// @brief Field AccountType, offset: 0x10, size: 0x4, def value: None
  ::Oculus::Platform::SdkAccountType ___AccountType;

  /// @brief Field UserId, offset: 0x18, size: 0x8, def value: None
  uint64_t ___UserId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::SdkAccount, ___AccountType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::SdkAccount, ___UserId) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::SdkAccount, 0x20>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::SdkAccount);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::SdkAccount*, "Oculus.Platform.Models", "SdkAccount");
