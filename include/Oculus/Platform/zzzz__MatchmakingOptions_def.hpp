#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MatchmakingOptions)
namespace Oculus::Platform {
struct RoomJoinPolicy;
}
// Forward declare root types
namespace Oculus::Platform {
class MatchmakingOptions;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MatchmakingOptions);
// Type: Oculus.Platform::MatchmakingOptions
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2603)), TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13158))
// CS Name: ::Oculus.Platform::MatchmakingOptions*
class CORDL_TYPE MatchmakingOptions : public ::System::Object {
public:
  // Declarations
  /// @brief Field Handle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Handle, put = __cordl_internal_set_Handle)) void* Handle;

  constexpr void*& __cordl_internal_get_Handle();

  constexpr void* const& __cordl_internal_get_Handle() const;

  constexpr void __cordl_internal_set_Handle(void* value);

  static inline ::Oculus::Platform::MatchmakingOptions* New_ctor();

  /// @brief Method .ctor, addr 0x27152cc, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method SetCreateRoomDataStore, addr 0x2715330, size 0x70, virtual false, abstract: false, final false
  inline void SetCreateRoomDataStore(::StringW key, ::StringW value);

  /// @brief Method ClearCreateRoomDataStore, addr 0x27153a0, size 0x58, virtual false, abstract: false, final false
  inline void ClearCreateRoomDataStore();

  /// @brief Method SetCreateRoomJoinPolicy, addr 0x27153f8, size 0x68, virtual false, abstract: false, final false
  inline void SetCreateRoomJoinPolicy(::Oculus::Platform::RoomJoinPolicy value);

  /// @brief Method SetCreateRoomMaxUsers, addr 0x2715460, size 0x68, virtual false, abstract: false, final false
  inline void SetCreateRoomMaxUsers(uint32_t value);

  /// @brief Method AddEnqueueAdditionalUser, addr 0x27154c8, size 0x68, virtual false, abstract: false, final false
  inline void AddEnqueueAdditionalUser(uint64_t userID);

  /// @brief Method ClearEnqueueAdditionalUsers, addr 0x2715530, size 0x58, virtual false, abstract: false, final false
  inline void ClearEnqueueAdditionalUsers();

  /// @brief Method SetEnqueueDataSettings, addr 0x2715588, size 0x70, virtual false, abstract: false, final false
  inline void SetEnqueueDataSettings(::StringW key, int32_t value);

  /// @brief Method SetEnqueueDataSettings, addr 0x27155f8, size 0x78, virtual false, abstract: false, final false
  inline void SetEnqueueDataSettings(::StringW key, double_t value);

  /// @brief Method SetEnqueueDataSettings, addr 0x2715670, size 0x70, virtual false, abstract: false, final false
  inline void SetEnqueueDataSettings(::StringW key, ::StringW value);

  /// @brief Method ClearEnqueueDataSettings, addr 0x27156e0, size 0x58, virtual false, abstract: false, final false
  inline void ClearEnqueueDataSettings();

  /// @brief Method SetEnqueueIsDebug, addr 0x2715738, size 0x68, virtual false, abstract: false, final false
  inline void SetEnqueueIsDebug(bool value);

  /// @brief Method SetEnqueueQueryKey, addr 0x27157a0, size 0x68, virtual false, abstract: false, final false
  inline void SetEnqueueQueryKey(::StringW value);

  /// @brief Method op_Explicit, addr 0x2715808, size 0x58, virtual false, abstract: false, final false
  static inline void* op_Explicit_void_(::Oculus::Platform::MatchmakingOptions* options);

  /// @brief Method Finalize, addr 0x2715860, size 0xd4, virtual true, abstract: false, final false
  inline void Finalize();

  // Ctor Parameters [CppParam { name: "", ty: "MatchmakingOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MatchmakingOptions(MatchmakingOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MatchmakingOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MatchmakingOptions(MatchmakingOptions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MatchmakingOptions();

public:
  /// @brief Field Handle, offset: 0x10, size: 0x8, def value: None
  void* ___Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MatchmakingOptions, 0x18>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::MatchmakingOptions, ___Handle) == 0x10, "Offset mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MatchmakingOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MatchmakingOptions*, "Oculus.Platform", "MatchmakingOptions");
