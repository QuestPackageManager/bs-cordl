#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/ShareMediaResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__ShareMediaStatus_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ShareMediaResult)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class ShareMediaResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::ShareMediaResult);
// Dependencies Oculus.Platform.ShareMediaStatus, System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.ShareMediaResult
class CORDL_TYPE ShareMediaResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field Status, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_Status, put = __cordl_internal_set_Status)) ::Oculus::Platform::ShareMediaStatus Status;

  static inline ::Oculus::Platform::Models::ShareMediaResult* New_ctor(::System::IntPtr o);

  constexpr ::Oculus::Platform::ShareMediaStatus const& __cordl_internal_get_Status() const;

  constexpr ::Oculus::Platform::ShareMediaStatus& __cordl_internal_get_Status();

  constexpr void __cordl_internal_set_Status(::Oculus::Platform::ShareMediaStatus value);

  /// @brief Method .ctor, addr 0x3f925d4, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShareMediaResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShareMediaResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShareMediaResult(ShareMediaResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShareMediaResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShareMediaResult(ShareMediaResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15563 };

  /// @brief Field Status, offset: 0x10, size: 0x4, def value: None
  ::Oculus::Platform::ShareMediaStatus ___Status;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::ShareMediaResult, ___Status) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::ShareMediaResult, 0x18>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::ShareMediaResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::ShareMediaResult*, "Oculus.Platform.Models", "ShareMediaResult");
