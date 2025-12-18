#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/LivestreamingStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LivestreamingStatus)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class LivestreamingStatus;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::LivestreamingStatus);
// Dependencies System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.LivestreamingStatus
class CORDL_TYPE LivestreamingStatus : public ::System::Object {
public:
  // Declarations
  /// @brief Field CommentsVisible, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_CommentsVisible, put = __cordl_internal_set_CommentsVisible)) bool CommentsVisible;

  /// @brief Field IsPaused, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_IsPaused, put = __cordl_internal_set_IsPaused)) bool IsPaused;

  /// @brief Field LivestreamingEnabled, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get_LivestreamingEnabled, put = __cordl_internal_set_LivestreamingEnabled)) bool LivestreamingEnabled;

  /// @brief Field LivestreamingType, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_LivestreamingType, put = __cordl_internal_set_LivestreamingType)) int32_t LivestreamingType;

  /// @brief Field MicEnabled, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_MicEnabled, put = __cordl_internal_set_MicEnabled)) bool MicEnabled;

  static inline ::Oculus::Platform::Models::LivestreamingStatus* New_ctor(::System::IntPtr o);

  constexpr bool const& __cordl_internal_get_CommentsVisible() const;

  constexpr bool& __cordl_internal_get_CommentsVisible();

  constexpr bool const& __cordl_internal_get_IsPaused() const;

  constexpr bool& __cordl_internal_get_IsPaused();

  constexpr bool const& __cordl_internal_get_LivestreamingEnabled() const;

  constexpr bool& __cordl_internal_get_LivestreamingEnabled();

  constexpr int32_t const& __cordl_internal_get_LivestreamingType() const;

  constexpr int32_t& __cordl_internal_get_LivestreamingType();

  constexpr bool const& __cordl_internal_get_MicEnabled() const;

  constexpr bool& __cordl_internal_get_MicEnabled();

  constexpr void __cordl_internal_set_CommentsVisible(bool value);

  constexpr void __cordl_internal_set_IsPaused(bool value);

  constexpr void __cordl_internal_set_LivestreamingEnabled(bool value);

  constexpr void __cordl_internal_set_LivestreamingType(int32_t value);

  constexpr void __cordl_internal_set_MicEnabled(bool value);

  /// @brief Method .ctor, addr 0x5c426d8, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LivestreamingStatus();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LivestreamingStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LivestreamingStatus(LivestreamingStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LivestreamingStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LivestreamingStatus(LivestreamingStatus const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18032 };

  /// @brief Field CommentsVisible, offset: 0x10, size: 0x1, def value: None
  bool ___CommentsVisible;

  /// @brief Field IsPaused, offset: 0x11, size: 0x1, def value: None
  bool ___IsPaused;

  /// @brief Field LivestreamingEnabled, offset: 0x12, size: 0x1, def value: None
  bool ___LivestreamingEnabled;

  /// @brief Field LivestreamingType, offset: 0x14, size: 0x4, def value: None
  int32_t ___LivestreamingType;

  /// @brief Field MicEnabled, offset: 0x18, size: 0x1, def value: None
  bool ___MicEnabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::LivestreamingStatus, ___CommentsVisible) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LivestreamingStatus, ___IsPaused) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LivestreamingStatus, ___LivestreamingEnabled) == 0x12, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LivestreamingStatus, ___LivestreamingType) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LivestreamingStatus, ___MicEnabled) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::LivestreamingStatus, 0x20>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::LivestreamingStatus);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LivestreamingStatus*, "Oculus.Platform.Models", "LivestreamingStatus");
