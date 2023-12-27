#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ChallengeOptions)
namespace System {
struct DateTime;
}
namespace Oculus::Platform {
struct ChallengeViewerFilter;
}
namespace Oculus::Platform {
struct ChallengeVisibility;
}
// Forward declare root types
namespace Oculus::Platform {
class ChallengeOptions;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::ChallengeOptions);
// Type: Oculus.Platform::ChallengeOptions
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13242))
// CS Name: ::Oculus.Platform::ChallengeOptions*
class CORDL_TYPE ChallengeOptions : public ::System::Object {
public:
  // Declarations
  /// @brief Field Handle, offset 0x10, size 0x8
  __declspec(property(get = __get_Handle, put = __set_Handle)) void* Handle;

  constexpr void*& __get_Handle();

  constexpr void* const& __get_Handle() const;

  constexpr void __set_Handle(void* value);

  static inline ::Oculus::Platform::ChallengeOptions* New_ctor();

  /// @brief Method .ctor addr 0x26ec26c size 0x64 virtual false final false
  inline void _ctor();

  /// @brief Method SetDescription addr 0x26ec2d0 size 0x68 virtual false final false
  inline void SetDescription(::StringW value);

  /// @brief Method SetEndDate addr 0x26ec338 size 0x68 virtual false final false
  inline void SetEndDate(::System::DateTime value);

  /// @brief Method SetIncludeActiveChallenges addr 0x26ec3a0 size 0x68 virtual false final false
  inline void SetIncludeActiveChallenges(bool value);

  /// @brief Method SetIncludeFutureChallenges addr 0x26ec408 size 0x68 virtual false final false
  inline void SetIncludeFutureChallenges(bool value);

  /// @brief Method SetIncludePastChallenges addr 0x26ec470 size 0x68 virtual false final false
  inline void SetIncludePastChallenges(bool value);

  /// @brief Method SetLeaderboardName addr 0x26ec4d8 size 0x68 virtual false final false
  inline void SetLeaderboardName(::StringW value);

  /// @brief Method SetStartDate addr 0x26ec540 size 0x68 virtual false final false
  inline void SetStartDate(::System::DateTime value);

  /// @brief Method SetTitle addr 0x26ec5a8 size 0x68 virtual false final false
  inline void SetTitle(::StringW value);

  /// @brief Method SetViewerFilter addr 0x26ec610 size 0x68 virtual false final false
  inline void SetViewerFilter(::Oculus::Platform::ChallengeViewerFilter value);

  /// @brief Method SetVisibility addr 0x26ec678 size 0x68 virtual false final false
  inline void SetVisibility(::Oculus::Platform::ChallengeVisibility value);

  /// @brief Method op_Explicit addr 0x26ec6e0 size 0x58 virtual false final false
  static inline void* op_Explicit_void_(::Oculus::Platform::ChallengeOptions* options);

  /// @brief Method Finalize addr 0x26ec738 size 0xd4 virtual true final false
  inline void Finalize();

  // Ctor Parameters [CppParam { name: "", ty: "ChallengeOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChallengeOptions(ChallengeOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChallengeOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChallengeOptions(ChallengeOptions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChallengeOptions();

public:
  /// @brief Field Handle, offset: 0x10, size: 0x8, def value: None
  void* ___Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::ChallengeOptions, 0x18>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::ChallengeOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::ChallengeOptions*, "Oculus.Platform", "ChallengeOptions");
