#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LivestreamingStatus)
// Forward declare root types
namespace Oculus::Platform::Models {
class LivestreamingStatus;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::LivestreamingStatus);
// Type: Oculus.Platform.Models::LivestreamingStatus
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13455))
// CS Name: ::Oculus.Platform.Models::LivestreamingStatus*
class CORDL_TYPE LivestreamingStatus : public ::System::Object {
public:
  // Declarations
  /// @brief Field CommentsVisible, offset 0x10, size 0x1
  __declspec(property(get = __get_CommentsVisible, put = __set_CommentsVisible)) bool CommentsVisible;

  /// @brief Field IsPaused, offset 0x11, size 0x1
  __declspec(property(get = __get_IsPaused, put = __set_IsPaused)) bool IsPaused;

  /// @brief Field LivestreamingEnabled, offset 0x12, size 0x1
  __declspec(property(get = __get_LivestreamingEnabled, put = __set_LivestreamingEnabled)) bool LivestreamingEnabled;

  /// @brief Field LivestreamingType, offset 0x14, size 0x4
  __declspec(property(get = __get_LivestreamingType, put = __set_LivestreamingType)) int32_t LivestreamingType;

  /// @brief Field MicEnabled, offset 0x18, size 0x1
  __declspec(property(get = __get_MicEnabled, put = __set_MicEnabled)) bool MicEnabled;

  constexpr bool& __get_CommentsVisible();

  constexpr bool const& __get_CommentsVisible() const;

  constexpr void __set_CommentsVisible(bool value);

  constexpr bool& __get_IsPaused();

  constexpr bool const& __get_IsPaused() const;

  constexpr void __set_IsPaused(bool value);

  constexpr bool& __get_LivestreamingEnabled();

  constexpr bool const& __get_LivestreamingEnabled() const;

  constexpr void __set_LivestreamingEnabled(bool value);

  constexpr int32_t& __get_LivestreamingType();

  constexpr int32_t const& __get_LivestreamingType() const;

  constexpr void __set_LivestreamingType(int32_t value);

  constexpr bool& __get_MicEnabled();

  constexpr bool const& __get_MicEnabled() const;

  constexpr void __set_MicEnabled(bool value);

  static inline ::Oculus::Platform::Models::LivestreamingStatus* New_ctor(void* o);

  /// @brief Method .ctor, addr 0x2707304, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "LivestreamingStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LivestreamingStatus(LivestreamingStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LivestreamingStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LivestreamingStatus(LivestreamingStatus const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LivestreamingStatus();

public:
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
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::LivestreamingStatus, 0x20>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LivestreamingStatus, ___CommentsVisible) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LivestreamingStatus, ___IsPaused) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LivestreamingStatus, ___LivestreamingEnabled) == 0x12, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LivestreamingStatus, ___LivestreamingType) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::LivestreamingStatus, ___MicEnabled) == 0x18, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::LivestreamingStatus);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LivestreamingStatus*, "Oculus.Platform.Models", "LivestreamingStatus");
