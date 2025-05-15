#pragma once
// IWYU pragma private; include "Oculus/Platform/AdvancedAbuseReportOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AdvancedAbuseReportOptions)
namespace Oculus::Platform {
struct AbuseReportType;
}
namespace Oculus::Platform {
struct AbuseReportVideoMode;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class AdvancedAbuseReportOptions;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::AdvancedAbuseReportOptions);
// Dependencies System.IntPtr, System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.AdvancedAbuseReportOptions
class CORDL_TYPE AdvancedAbuseReportOptions : public ::System::Object {
public:
  // Declarations
  /// @brief Field Handle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Handle, put = __cordl_internal_set_Handle)) ::System::IntPtr Handle;

  /// @brief Method AddSuggestedUser, addr 0x3f5b76c, size 0x68, virtual false, abstract: false, final false
  inline void AddSuggestedUser(uint64_t userID);

  /// @brief Method ClearDeveloperDefinedContext, addr 0x3f5b4a4, size 0x58, virtual false, abstract: false, final false
  inline void ClearDeveloperDefinedContext();

  /// @brief Method ClearSuggestedUsers, addr 0x3f5b858, size 0x58, virtual false, abstract: false, final false
  inline void ClearSuggestedUsers();

  /// @brief Method Finalize, addr 0x3f5ba24, size 0xd4, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Oculus::Platform::AdvancedAbuseReportOptions* New_ctor();

  /// @brief Method SetDeveloperDefinedContext, addr 0x3f5b374, size 0x70, virtual false, abstract: false, final false
  inline void SetDeveloperDefinedContext(::StringW key, ::StringW value);

  /// @brief Method SetObjectType, addr 0x3f5b578, size 0x68, virtual false, abstract: false, final false
  inline void SetObjectType(::StringW value);

  /// @brief Method SetReportType, addr 0x3f5b680, size 0x68, virtual false, abstract: false, final false
  inline void SetReportType(::Oculus::Platform::AbuseReportType value);

  /// @brief Method SetVideoMode, addr 0x3f5b92c, size 0x68, virtual false, abstract: false, final false
  inline void SetVideoMode(::Oculus::Platform::AbuseReportVideoMode value);

  constexpr ::System::IntPtr const& __cordl_internal_get_Handle() const;

  constexpr ::System::IntPtr& __cordl_internal_get_Handle();

  constexpr void __cordl_internal_set_Handle(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x3f5b2a8, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method op_Explicit, addr 0x3f5ba18, size 0xc, virtual false, abstract: false, final false
  static inline ::System::IntPtr op_Explicit___System__IntPtr(::Oculus::Platform::AdvancedAbuseReportOptions* options);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AdvancedAbuseReportOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AdvancedAbuseReportOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AdvancedAbuseReportOptions(AdvancedAbuseReportOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AdvancedAbuseReportOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AdvancedAbuseReportOptions(AdvancedAbuseReportOptions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15317 };

  /// @brief Field Handle, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::AdvancedAbuseReportOptions, ___Handle) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::AdvancedAbuseReportOptions, 0x18>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::AdvancedAbuseReportOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::AdvancedAbuseReportOptions*, "Oculus.Platform", "AdvancedAbuseReportOptions");
