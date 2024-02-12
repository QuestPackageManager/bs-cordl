#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MatchmakingEnqueueResult)
namespace Oculus::Platform::Models {
class MatchmakingAdminSnapshot;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class MatchmakingEnqueueResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::MatchmakingEnqueueResult);
// Type: Oculus.Platform.Models::MatchmakingEnqueueResult
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13402))
// CS Name: ::Oculus.Platform.Models::MatchmakingEnqueueResult*
class CORDL_TYPE MatchmakingEnqueueResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field AdminSnapshotOptional, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_AdminSnapshotOptional, put = __cordl_internal_set_AdminSnapshotOptional))::Oculus::Platform::Models::MatchmakingAdminSnapshot* AdminSnapshotOptional;

  /// @brief Field AdminSnapshot, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_AdminSnapshot, put = __cordl_internal_set_AdminSnapshot))::Oculus::Platform::Models::MatchmakingAdminSnapshot* AdminSnapshot;

  /// @brief Field AverageWait, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_AverageWait, put = __cordl_internal_set_AverageWait)) uint32_t AverageWait;

  /// @brief Field MatchesInLastHourCount, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_MatchesInLastHourCount, put = __cordl_internal_set_MatchesInLastHourCount)) uint32_t MatchesInLastHourCount;

  /// @brief Field MaxExpectedWait, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_MaxExpectedWait, put = __cordl_internal_set_MaxExpectedWait)) uint32_t MaxExpectedWait;

  /// @brief Field Pool, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_Pool, put = __cordl_internal_set_Pool))::StringW Pool;

  /// @brief Field RecentMatchPercentage, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_RecentMatchPercentage, put = __cordl_internal_set_RecentMatchPercentage)) uint32_t RecentMatchPercentage;

  /// @brief Field RequestHash, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_RequestHash, put = __cordl_internal_set_RequestHash))::StringW RequestHash;

  constexpr ::Oculus::Platform::Models::MatchmakingAdminSnapshot*& __cordl_internal_get_AdminSnapshotOptional();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::MatchmakingAdminSnapshot*> const& __cordl_internal_get_AdminSnapshotOptional() const;

  constexpr void __cordl_internal_set_AdminSnapshotOptional(::Oculus::Platform::Models::MatchmakingAdminSnapshot* value);

  constexpr ::Oculus::Platform::Models::MatchmakingAdminSnapshot*& __cordl_internal_get_AdminSnapshot();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::MatchmakingAdminSnapshot*> const& __cordl_internal_get_AdminSnapshot() const;

  constexpr void __cordl_internal_set_AdminSnapshot(::Oculus::Platform::Models::MatchmakingAdminSnapshot* value);

  constexpr uint32_t& __cordl_internal_get_AverageWait();

  constexpr uint32_t const& __cordl_internal_get_AverageWait() const;

  constexpr void __cordl_internal_set_AverageWait(uint32_t value);

  constexpr uint32_t& __cordl_internal_get_MatchesInLastHourCount();

  constexpr uint32_t const& __cordl_internal_get_MatchesInLastHourCount() const;

  constexpr void __cordl_internal_set_MatchesInLastHourCount(uint32_t value);

  constexpr uint32_t& __cordl_internal_get_MaxExpectedWait();

  constexpr uint32_t const& __cordl_internal_get_MaxExpectedWait() const;

  constexpr void __cordl_internal_set_MaxExpectedWait(uint32_t value);

  constexpr ::StringW& __cordl_internal_get_Pool();

  constexpr ::StringW const& __cordl_internal_get_Pool() const;

  constexpr void __cordl_internal_set_Pool(::StringW value);

  constexpr uint32_t& __cordl_internal_get_RecentMatchPercentage();

  constexpr uint32_t const& __cordl_internal_get_RecentMatchPercentage() const;

  constexpr void __cordl_internal_set_RecentMatchPercentage(uint32_t value);

  constexpr ::StringW& __cordl_internal_get_RequestHash();

  constexpr ::StringW const& __cordl_internal_get_RequestHash() const;

  constexpr void __cordl_internal_set_RequestHash(::StringW value);

  static inline ::Oculus::Platform::Models::MatchmakingEnqueueResult* New_ctor(void* o);

  /// @brief Method .ctor, addr 0x273a7fc, size 0x168, virtual false, abstract: false, final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "MatchmakingEnqueueResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MatchmakingEnqueueResult(MatchmakingEnqueueResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MatchmakingEnqueueResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MatchmakingEnqueueResult(MatchmakingEnqueueResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MatchmakingEnqueueResult();

public:
  /// @brief Field AdminSnapshotOptional, offset: 0x10, size: 0x8, def value: None
  ::Oculus::Platform::Models::MatchmakingAdminSnapshot* ___AdminSnapshotOptional;

  /// @brief Field AdminSnapshot, offset: 0x18, size: 0x8, def value: None
  ::Oculus::Platform::Models::MatchmakingAdminSnapshot* ___AdminSnapshot;

  /// @brief Field AverageWait, offset: 0x20, size: 0x4, def value: None
  uint32_t ___AverageWait;

  /// @brief Field MatchesInLastHourCount, offset: 0x24, size: 0x4, def value: None
  uint32_t ___MatchesInLastHourCount;

  /// @brief Field MaxExpectedWait, offset: 0x28, size: 0x4, def value: None
  uint32_t ___MaxExpectedWait;

  /// @brief Field Pool, offset: 0x30, size: 0x8, def value: None
  ::StringW ___Pool;

  /// @brief Field RecentMatchPercentage, offset: 0x38, size: 0x4, def value: None
  uint32_t ___RecentMatchPercentage;

  /// @brief Field RequestHash, offset: 0x40, size: 0x8, def value: None
  ::StringW ___RequestHash;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::MatchmakingEnqueueResult, 0x48>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::MatchmakingEnqueueResult, ___AdminSnapshotOptional) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::MatchmakingEnqueueResult, ___AdminSnapshot) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::MatchmakingEnqueueResult, ___AverageWait) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::MatchmakingEnqueueResult, ___MatchesInLastHourCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::MatchmakingEnqueueResult, ___MaxExpectedWait) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::MatchmakingEnqueueResult, ___Pool) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::MatchmakingEnqueueResult, ___RecentMatchPercentage) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::MatchmakingEnqueueResult, ___RequestHash) == 0x40, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::MatchmakingEnqueueResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::MatchmakingEnqueueResult*, "Oculus.Platform.Models", "MatchmakingEnqueueResult");
