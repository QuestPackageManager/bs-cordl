#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MatchmakingAdminSnapshot)
namespace Oculus::Platform::Models {
class MatchmakingAdminSnapshotCandidateList;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class MatchmakingAdminSnapshot;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::MatchmakingAdminSnapshot);
// Type: Oculus.Platform.Models::MatchmakingAdminSnapshot
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13503))
// CS Name: ::Oculus.Platform.Models::MatchmakingAdminSnapshot*
class CORDL_TYPE MatchmakingAdminSnapshot : public ::System::Object {
public:
  // Declarations
  /// @brief Field Candidates, offset 0x10, size 0x8
  __declspec(property(get = __get_Candidates, put = __set_Candidates))::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList* Candidates;

  /// @brief Field MyCurrentThreshold, offset 0x18, size 0x8
  __declspec(property(get = __get_MyCurrentThreshold, put = __set_MyCurrentThreshold)) double_t MyCurrentThreshold;

  constexpr ::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList*& __get_Candidates();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList*> const& __get_Candidates() const;

  constexpr void __set_Candidates(::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList* value);

  constexpr double_t& __get_MyCurrentThreshold();

  constexpr double_t const& __get_MyCurrentThreshold() const;

  constexpr void __set_MyCurrentThreshold(double_t value);

  static inline ::Oculus::Platform::Models::MatchmakingAdminSnapshot* New_ctor(void* o);

  /// @brief Method .ctor addr 0x25b4ac8 size 0xc0 virtual false final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "MatchmakingAdminSnapshot", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MatchmakingAdminSnapshot(MatchmakingAdminSnapshot&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MatchmakingAdminSnapshot", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MatchmakingAdminSnapshot(MatchmakingAdminSnapshot const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MatchmakingAdminSnapshot();

public:
  /// @brief Field Candidates, offset: 0x10, size: 0x8, def value: None
  ::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList* ___Candidates;

  /// @brief Field MyCurrentThreshold, offset: 0x18, size: 0x8, def value: None
  double_t ___MyCurrentThreshold;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::MatchmakingAdminSnapshot, 0x20>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::MatchmakingAdminSnapshot, ___Candidates) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::MatchmakingAdminSnapshot, ___MyCurrentThreshold) == 0x18, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::MatchmakingAdminSnapshot);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::MatchmakingAdminSnapshot*, "Oculus.Platform.Models", "MatchmakingAdminSnapshot");
