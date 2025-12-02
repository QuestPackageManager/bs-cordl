#pragma once
// IWYU pragma private; include "Oculus/Platform/ChallengeOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ChallengeOptions)
namespace Oculus::Platform {
struct ChallengeViewerFilter;
}
namespace Oculus::Platform {
struct ChallengeVisibility;
}
namespace System {
struct DateTime;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class ChallengeOptions;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::ChallengeOptions);
// Dependencies System.IntPtr, System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.ChallengeOptions
class CORDL_TYPE ChallengeOptions : public ::System::Object {
public:
  // Declarations
  /// @brief Field Handle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Handle, put = __cordl_internal_set_Handle)) ::System::IntPtr Handle;

  /// @brief Method Finalize, addr 0x5bbfb40, size 0x94, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Oculus::Platform::ChallengeOptions* New_ctor();

  /// @brief Method SetDescription, addr 0x5bbf6fc, size 0x6c, virtual false, abstract: false, final false
  inline void SetDescription(::StringW value);

  /// @brief Method SetEndDate, addr 0x5bbf768, size 0x6c, virtual false, abstract: false, final false
  inline void SetEndDate(::System::DateTime value);

  /// @brief Method SetIncludeActiveChallenges, addr 0x5bbf7d4, size 0x6c, virtual false, abstract: false, final false
  inline void SetIncludeActiveChallenges(bool value);

  /// @brief Method SetIncludeFutureChallenges, addr 0x5bbf840, size 0x6c, virtual false, abstract: false, final false
  inline void SetIncludeFutureChallenges(bool value);

  /// @brief Method SetIncludePastChallenges, addr 0x5bbf8ac, size 0x6c, virtual false, abstract: false, final false
  inline void SetIncludePastChallenges(bool value);

  /// @brief Method SetLeaderboardName, addr 0x5bbf918, size 0x6c, virtual false, abstract: false, final false
  inline void SetLeaderboardName(::StringW value);

  /// @brief Method SetStartDate, addr 0x5bbf984, size 0x6c, virtual false, abstract: false, final false
  inline void SetStartDate(::System::DateTime value);

  /// @brief Method SetTitle, addr 0x5bbf9f0, size 0x6c, virtual false, abstract: false, final false
  inline void SetTitle(::StringW value);

  /// @brief Method SetViewerFilter, addr 0x5bbfa5c, size 0x6c, virtual false, abstract: false, final false
  inline void SetViewerFilter(::Oculus::Platform::ChallengeViewerFilter value);

  /// @brief Method SetVisibility, addr 0x5bbfac8, size 0x6c, virtual false, abstract: false, final false
  inline void SetVisibility(::Oculus::Platform::ChallengeVisibility value);

  constexpr ::System::IntPtr const& __cordl_internal_get_Handle() const;

  constexpr ::System::IntPtr& __cordl_internal_get_Handle();

  constexpr void __cordl_internal_set_Handle(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x5bbf6a0, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method op_Explicit, addr 0x5bbfb34, size 0xc, virtual false, abstract: false, final false
  static inline ::System::IntPtr op_Explicit___System__IntPtr(::Oculus::Platform::ChallengeOptions* options);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChallengeOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChallengeOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChallengeOptions(ChallengeOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChallengeOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChallengeOptions(ChallengeOptions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17789 };

  /// @brief Field Handle, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::ChallengeOptions, ___Handle) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::ChallengeOptions, 0x18>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::ChallengeOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::ChallengeOptions*, "Oculus.Platform", "ChallengeOptions");
