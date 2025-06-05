#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/NetSyncSession.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetSyncSession)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class NetSyncSession;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::NetSyncSession);
// Dependencies System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.NetSyncSession
class CORDL_TYPE NetSyncSession : public ::System::Object {
public:
  // Declarations
  /// @brief Field ConnectionId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ConnectionId, put = __cordl_internal_set_ConnectionId)) int64_t ConnectionId;

  /// @brief Field Muted, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_Muted, put = __cordl_internal_set_Muted)) bool Muted;

  /// @brief Field SessionId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_SessionId, put = __cordl_internal_set_SessionId)) uint64_t SessionId;

  /// @brief Field UserId, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_UserId, put = __cordl_internal_set_UserId)) uint64_t UserId;

  /// @brief Field VoipGroup, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_VoipGroup, put = __cordl_internal_set_VoipGroup)) ::StringW VoipGroup;

  static inline ::Oculus::Platform::Models::NetSyncSession* New_ctor(::System::IntPtr o);

  constexpr int64_t const& __cordl_internal_get_ConnectionId() const;

  constexpr int64_t& __cordl_internal_get_ConnectionId();

  constexpr bool const& __cordl_internal_get_Muted() const;

  constexpr bool& __cordl_internal_get_Muted();

  constexpr uint64_t const& __cordl_internal_get_SessionId() const;

  constexpr uint64_t& __cordl_internal_get_SessionId();

  constexpr uint64_t const& __cordl_internal_get_UserId() const;

  constexpr uint64_t& __cordl_internal_get_UserId();

  constexpr ::StringW const& __cordl_internal_get_VoipGroup() const;

  constexpr ::StringW& __cordl_internal_get_VoipGroup();

  constexpr void __cordl_internal_set_ConnectionId(int64_t value);

  constexpr void __cordl_internal_set_Muted(bool value);

  constexpr void __cordl_internal_set_SessionId(uint64_t value);

  constexpr void __cordl_internal_set_UserId(uint64_t value);

  constexpr void __cordl_internal_set_VoipGroup(::StringW value);

  /// @brief Method .ctor, addr 0x3f92844, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetSyncSession();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetSyncSession", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetSyncSession(NetSyncSession&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetSyncSession", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetSyncSession(NetSyncSession const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15550 };

  /// @brief Field ConnectionId, offset: 0x10, size: 0x8, def value: None
  int64_t ___ConnectionId;

  /// @brief Field Muted, offset: 0x18, size: 0x1, def value: None
  bool ___Muted;

  /// @brief Field SessionId, offset: 0x20, size: 0x8, def value: None
  uint64_t ___SessionId;

  /// @brief Field UserId, offset: 0x28, size: 0x8, def value: None
  uint64_t ___UserId;

  /// @brief Field VoipGroup, offset: 0x30, size: 0x8, def value: None
  ::StringW ___VoipGroup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::NetSyncSession, ___ConnectionId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::NetSyncSession, ___Muted) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::NetSyncSession, ___SessionId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::NetSyncSession, ___UserId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::NetSyncSession, ___VoipGroup) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::NetSyncSession, 0x38>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::NetSyncSession);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::NetSyncSession*, "Oculus.Platform.Models", "NetSyncSession");
