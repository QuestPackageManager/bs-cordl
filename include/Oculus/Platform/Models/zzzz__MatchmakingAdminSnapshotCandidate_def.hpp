#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MatchmakingAdminSnapshotCandidate)
// Forward declare root types
namespace Oculus::Platform::Models {
class MatchmakingAdminSnapshotCandidate;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate);
// Type: Oculus.Platform.Models::MatchmakingAdminSnapshotCandidate
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13504))
// CS Name: ::Oculus.Platform.Models::MatchmakingAdminSnapshotCandidate*
class CORDL_TYPE MatchmakingAdminSnapshotCandidate : public ::System::Object {
public:
  // Declarations
  /// @brief Field CanMatch, offset 0x10, size 0x1
  __declspec(property(get = __get_CanMatch, put = __set_CanMatch)) bool CanMatch;

  /// @brief Field MyTotalScore, offset 0x18, size 0x8
  __declspec(property(get = __get_MyTotalScore, put = __set_MyTotalScore)) double_t MyTotalScore;

  /// @brief Field TheirCurrentThreshold, offset 0x20, size 0x8
  __declspec(property(get = __get_TheirCurrentThreshold, put = __set_TheirCurrentThreshold)) double_t TheirCurrentThreshold;

  /// @brief Field TheirTotalScore, offset 0x28, size 0x8
  __declspec(property(get = __get_TheirTotalScore, put = __set_TheirTotalScore)) double_t TheirTotalScore;

  /// @brief Field TraceId, offset 0x30, size 0x8
  __declspec(property(get = __get_TraceId, put = __set_TraceId))::StringW TraceId;

  constexpr bool& __get_CanMatch();

  constexpr bool const& __get_CanMatch() const;

  constexpr void __set_CanMatch(bool value);

  constexpr double_t& __get_MyTotalScore();

  constexpr double_t const& __get_MyTotalScore() const;

  constexpr void __set_MyTotalScore(double_t value);

  constexpr double_t& __get_TheirCurrentThreshold();

  constexpr double_t const& __get_TheirCurrentThreshold() const;

  constexpr void __set_TheirCurrentThreshold(double_t value);

  constexpr double_t& __get_TheirTotalScore();

  constexpr double_t const& __get_TheirTotalScore() const;

  constexpr void __set_TheirTotalScore(double_t value);

  constexpr ::StringW& __get_TraceId();

  constexpr ::StringW const& __get_TraceId() const;

  constexpr void __set_TraceId(::StringW value);

  static inline ::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate* New_ctor(void* o);

  /// @brief Method .ctor addr 0x25b4dc4 size 0xbc virtual false final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "MatchmakingAdminSnapshotCandidate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MatchmakingAdminSnapshotCandidate(MatchmakingAdminSnapshotCandidate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MatchmakingAdminSnapshotCandidate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MatchmakingAdminSnapshotCandidate(MatchmakingAdminSnapshotCandidate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MatchmakingAdminSnapshotCandidate();

public:
  /// @brief Field CanMatch, offset: 0x10, size: 0x1, def value: None
  bool ___CanMatch;

  /// @brief Field MyTotalScore, offset: 0x18, size: 0x8, def value: None
  double_t ___MyTotalScore;

  /// @brief Field TheirCurrentThreshold, offset: 0x20, size: 0x8, def value: None
  double_t ___TheirCurrentThreshold;

  /// @brief Field TheirTotalScore, offset: 0x28, size: 0x8, def value: None
  double_t ___TheirTotalScore;

  /// @brief Field TraceId, offset: 0x30, size: 0x8, def value: None
  ::StringW ___TraceId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate, 0x38>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate, ___CanMatch) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate, ___MyTotalScore) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate, ___TheirCurrentThreshold) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate, ___TheirTotalScore) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate, ___TraceId) == 0x30, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate*, "Oculus.Platform.Models", "MatchmakingAdminSnapshotCandidate");
