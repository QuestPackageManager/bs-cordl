#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/PushNotificationResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PushNotificationResult)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class PushNotificationResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::PushNotificationResult);
// Dependencies System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.PushNotificationResult
class CORDL_TYPE PushNotificationResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field Id, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Id, put = __cordl_internal_set_Id)) ::StringW Id;

  static inline ::Oculus::Platform::Models::PushNotificationResult* New_ctor(::System::IntPtr o);

  constexpr ::StringW const& __cordl_internal_get_Id() const;

  constexpr ::StringW& __cordl_internal_get_Id();

  constexpr void __cordl_internal_set_Id(::StringW value);

  /// @brief Method .ctor, addr 0x5bdd394, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PushNotificationResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PushNotificationResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PushNotificationResult(PushNotificationResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PushNotificationResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PushNotificationResult(PushNotificationResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18043 };

  /// @brief Field Id, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Id;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::PushNotificationResult, ___Id) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::PushNotificationResult, 0x18>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::PushNotificationResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::PushNotificationResult*, "Oculus.Platform.Models", "PushNotificationResult");
