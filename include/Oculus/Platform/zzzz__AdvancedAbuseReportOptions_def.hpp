#pragma once
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
// Forward declare root types
namespace Oculus::Platform {
class AdvancedAbuseReportOptions;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::AdvancedAbuseReportOptions);
// Type: Oculus.Platform::AdvancedAbuseReportOptions
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13226))
// CS Name: ::Oculus.Platform::AdvancedAbuseReportOptions*
class CORDL_TYPE AdvancedAbuseReportOptions : public ::System::Object {
public:
  // Declarations
  /// @brief Field Handle, offset 0x10, size 0x8
  __declspec(property(get = __get_Handle, put = __set_Handle)) void* Handle;

  constexpr void*& __get_Handle();

  constexpr void* const& __get_Handle() const;

  constexpr void __set_Handle(void* value);

  static inline ::Oculus::Platform::AdvancedAbuseReportOptions* New_ctor();

  /// @brief Method .ctor, addr 0x26cdb90, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method SetDeveloperDefinedContext, addr 0x26cdc5c, size 0x70, virtual false, abstract: false, final false
  inline void SetDeveloperDefinedContext(::StringW key, ::StringW value);

  /// @brief Method ClearDeveloperDefinedContext, addr 0x26cdd8c, size 0x58, virtual false, abstract: false, final false
  inline void ClearDeveloperDefinedContext();

  /// @brief Method SetObjectType, addr 0x26cde60, size 0x68, virtual false, abstract: false, final false
  inline void SetObjectType(::StringW value);

  /// @brief Method SetReportType, addr 0x26cdf68, size 0x68, virtual false, abstract: false, final false
  inline void SetReportType(::Oculus::Platform::AbuseReportType value);

  /// @brief Method AddSuggestedUser, addr 0x26ce054, size 0x68, virtual false, abstract: false, final false
  inline void AddSuggestedUser(uint64_t userID);

  /// @brief Method ClearSuggestedUsers, addr 0x26ce140, size 0x58, virtual false, abstract: false, final false
  inline void ClearSuggestedUsers();

  /// @brief Method SetVideoMode, addr 0x26ce214, size 0x68, virtual false, abstract: false, final false
  inline void SetVideoMode(::Oculus::Platform::AbuseReportVideoMode value);

  /// @brief Method op_Explicit, addr 0x26ce300, size 0x58, virtual false, abstract: false, final false
  static inline void* op_Explicit_void_(::Oculus::Platform::AdvancedAbuseReportOptions* options);

  /// @brief Method Finalize, addr 0x26ce358, size 0xd4, virtual true, abstract: false, final false
  inline void Finalize();

  // Ctor Parameters [CppParam { name: "", ty: "AdvancedAbuseReportOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AdvancedAbuseReportOptions(AdvancedAbuseReportOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AdvancedAbuseReportOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AdvancedAbuseReportOptions(AdvancedAbuseReportOptions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AdvancedAbuseReportOptions();

public:
  /// @brief Field Handle, offset: 0x10, size: 0x8, def value: None
  void* ___Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::AdvancedAbuseReportOptions, 0x18>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::AdvancedAbuseReportOptions, ___Handle) == 0x10, "Offset mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::AdvancedAbuseReportOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::AdvancedAbuseReportOptions*, "Oculus.Platform", "AdvancedAbuseReportOptions");
