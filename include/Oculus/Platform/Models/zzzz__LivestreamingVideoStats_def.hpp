#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LivestreamingVideoStats)
// Forward declare root types
namespace Oculus::Platform::Models {
class LivestreamingVideoStats;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::LivestreamingVideoStats);
// Type: Oculus.Platform.Models::LivestreamingVideoStats
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: ::Oculus.Platform.Models::LivestreamingVideoStats*
class CORDL_TYPE LivestreamingVideoStats : public ::System::Object {
public:
  // Declarations
  /// @brief Field CommentCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_CommentCount, put = __cordl_internal_set_CommentCount)) int32_t CommentCount;

  /// @brief Field ReactionCount, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_ReactionCount, put = __cordl_internal_set_ReactionCount)) int32_t ReactionCount;

  /// @brief Field TotalViews, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_TotalViews, put = __cordl_internal_set_TotalViews))::StringW TotalViews;

  static inline ::Oculus::Platform::Models::LivestreamingVideoStats* New_ctor(void* o);

  constexpr int32_t const& __cordl_internal_get_CommentCount() const;

  constexpr int32_t& __cordl_internal_get_CommentCount();

  constexpr int32_t const& __cordl_internal_get_ReactionCount() const;

  constexpr int32_t& __cordl_internal_get_ReactionCount();

  constexpr ::StringW const& __cordl_internal_get_TotalViews() const;

  constexpr ::StringW& __cordl_internal_get_TotalViews();

  constexpr void __cordl_internal_set_CommentCount(int32_t value);

  constexpr void __cordl_internal_set_ReactionCount(int32_t value);

  constexpr void __cordl_internal_set_TotalViews(::StringW value);

  /// @brief Method .ctor, addr 0x285b6f0, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(void* o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LivestreamingVideoStats();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LivestreamingVideoStats", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LivestreamingVideoStats(LivestreamingVideoStats&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LivestreamingVideoStats", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LivestreamingVideoStats(LivestreamingVideoStats const&) = delete;

  /// @brief Field CommentCount, offset: 0x10, size: 0x4, def value: None
  int32_t ___CommentCount;

  /// @brief Field ReactionCount, offset: 0x14, size: 0x4, def value: None
  int32_t ___ReactionCount;

  /// @brief Field TotalViews, offset: 0x18, size: 0x8, def value: None
  ::StringW ___TotalViews;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::LivestreamingVideoStats, 0x20>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LivestreamingVideoStats, ___CommentCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LivestreamingVideoStats, ___ReactionCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LivestreamingVideoStats, ___TotalViews) == 0x18, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::LivestreamingVideoStats);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LivestreamingVideoStats*, "Oculus.Platform.Models", "LivestreamingVideoStats");
