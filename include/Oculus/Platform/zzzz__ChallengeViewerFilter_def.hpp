#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChallengeViewerFilter)
// Forward declare root types
namespace Oculus::Platform {
struct ChallengeViewerFilter;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::ChallengeViewerFilter);
// Type: Oculus.Platform::ChallengeViewerFilter
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13243))
// CS Name: ::Oculus.Platform::ChallengeViewerFilter
struct CORDL_TYPE ChallengeViewerFilter {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ChallengeViewerFilter_Unwrapped
  enum struct __ChallengeViewerFilter_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_AllVisible = static_cast<int32_t>(0x1),
    __E_Participating = static_cast<int32_t>(0x2),
    __E_Invited = static_cast<int32_t>(0x3),
    __E_ParticipatingOrInvited = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ChallengeViewerFilter_Unwrapped() const noexcept {
    return static_cast<__ChallengeViewerFilter_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ChallengeViewerFilter(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ChallengeViewerFilter();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::Oculus::Platform::ChallengeViewerFilter const Unknown;

  /// @brief Field AllVisible value: static_cast<int32_t>(0x1)
  static ::Oculus::Platform::ChallengeViewerFilter const AllVisible;

  /// @brief Field Participating value: static_cast<int32_t>(0x2)
  static ::Oculus::Platform::ChallengeViewerFilter const Participating;

  /// @brief Field Invited value: static_cast<int32_t>(0x3)
  static ::Oculus::Platform::ChallengeViewerFilter const Invited;

  /// @brief Field ParticipatingOrInvited value: static_cast<int32_t>(0x4)
  static ::Oculus::Platform::ChallengeViewerFilter const ParticipatingOrInvited;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::ChallengeViewerFilter, 0x4>, "Size mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::ChallengeViewerFilter, "Oculus.Platform", "ChallengeViewerFilter");
