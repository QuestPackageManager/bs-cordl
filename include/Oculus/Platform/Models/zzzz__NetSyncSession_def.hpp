#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetSyncSession)
// Forward declare root types
namespace Oculus::Platform::Models {
class NetSyncSession;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::NetSyncSession);
// Type: Oculus.Platform.Models::NetSyncSession
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13514))
// CS Name: ::Oculus.Platform.Models::NetSyncSession*
class CORDL_TYPE NetSyncSession : public ::System::Object {
public:
  // Declarations
  /// @brief Field ConnectionId, offset 0x10, size 0x8
  __declspec(property(get = __get_ConnectionId, put = __set_ConnectionId)) int64_t ConnectionId;

  /// @brief Field Muted, offset 0x18, size 0x1
  __declspec(property(get = __get_Muted, put = __set_Muted)) bool Muted;

  /// @brief Field SessionId, offset 0x20, size 0x8
  __declspec(property(get = __get_SessionId, put = __set_SessionId)) uint64_t SessionId;

  /// @brief Field UserId, offset 0x28, size 0x8
  __declspec(property(get = __get_UserId, put = __set_UserId)) uint64_t UserId;

  /// @brief Field VoipGroup, offset 0x30, size 0x8
  __declspec(property(get = __get_VoipGroup, put = __set_VoipGroup))::StringW VoipGroup;

  constexpr int64_t& __get_ConnectionId();

  constexpr int64_t const& __get_ConnectionId() const;

  constexpr void __set_ConnectionId(int64_t value);

  constexpr bool& __get_Muted();

  constexpr bool const& __get_Muted() const;

  constexpr void __set_Muted(bool value);

  constexpr uint64_t& __get_SessionId();

  constexpr uint64_t const& __get_SessionId() const;

  constexpr void __set_SessionId(uint64_t value);

  constexpr uint64_t& __get_UserId();

  constexpr uint64_t const& __get_UserId() const;

  constexpr void __set_UserId(uint64_t value);

  constexpr ::StringW& __get_VoipGroup();

  constexpr ::StringW const& __get_VoipGroup() const;

  constexpr void __set_VoipGroup(::StringW value);

  static inline ::Oculus::Platform::Models::NetSyncSession* New_ctor(void* o);

  /// @brief Method .ctor addr 0x25b5d1c size 0xbc virtual false final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "NetSyncSession", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetSyncSession(NetSyncSession&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetSyncSession", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetSyncSession(NetSyncSession const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetSyncSession();

public:
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
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::NetSyncSession, 0x38>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::NetSyncSession, ___ConnectionId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::NetSyncSession, ___Muted) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::NetSyncSession, ___SessionId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::NetSyncSession, ___UserId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::NetSyncSession, ___VoipGroup) == 0x30, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::NetSyncSession);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::NetSyncSession*, "Oculus.Platform.Models", "NetSyncSession");
