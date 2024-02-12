#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RoomInviteNotification)
// Forward declare root types
namespace Oculus::Platform::Models {
class RoomInviteNotification;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::RoomInviteNotification);
// Type: Oculus.Platform.Models::RoomInviteNotification
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2368)), TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13429))
// CS Name: ::Oculus.Platform.Models::RoomInviteNotification*
class CORDL_TYPE RoomInviteNotification : public ::System::Object {
public:
  // Declarations
  /// @brief Field ID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__cordl_ID, put = __cordl_internal_set__cordl_ID)) uint64_t _cordl_ID;

  /// @brief Field RoomID, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_RoomID, put = __cordl_internal_set_RoomID)) uint64_t RoomID;

  /// @brief Field SenderID, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_SenderID, put = __cordl_internal_set_SenderID)) uint64_t SenderID;

  /// @brief Field SentTime, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_SentTime, put = __cordl_internal_set_SentTime))::System::DateTime SentTime;

  constexpr uint64_t& __cordl_internal_get__cordl_ID();

  constexpr uint64_t const& __cordl_internal_get__cordl_ID() const;

  constexpr void __cordl_internal_set__cordl_ID(uint64_t value);

  constexpr uint64_t& __cordl_internal_get_RoomID();

  constexpr uint64_t const& __cordl_internal_get_RoomID() const;

  constexpr void __cordl_internal_set_RoomID(uint64_t value);

  constexpr uint64_t& __cordl_internal_get_SenderID();

  constexpr uint64_t const& __cordl_internal_get_SenderID() const;

  constexpr void __cordl_internal_set_SenderID(uint64_t value);

  constexpr ::System::DateTime& __cordl_internal_get_SentTime();

  constexpr ::System::DateTime const& __cordl_internal_get_SentTime() const;

  constexpr void __cordl_internal_set_SentTime(::System::DateTime value);

  static inline ::Oculus::Platform::Models::RoomInviteNotification* New_ctor(void* o);

  /// @brief Method .ctor, addr 0x273ce64, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "RoomInviteNotification", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RoomInviteNotification(RoomInviteNotification&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RoomInviteNotification", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RoomInviteNotification(RoomInviteNotification const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomInviteNotification();

public:
  /// @brief Field ID, offset: 0x10, size: 0x8, def value: None
  uint64_t ____cordl_ID;

  /// @brief Field RoomID, offset: 0x18, size: 0x8, def value: None
  uint64_t ___RoomID;

  /// @brief Field SenderID, offset: 0x20, size: 0x8, def value: None
  uint64_t ___SenderID;

  /// @brief Field SentTime, offset: 0x28, size: 0x8, def value: None
  ::System::DateTime ___SentTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::RoomInviteNotification, 0x30>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::RoomInviteNotification, ____cordl_ID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::RoomInviteNotification, ___RoomID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::RoomInviteNotification, ___SenderID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::RoomInviteNotification, ___SentTime) == 0x28, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::RoomInviteNotification);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::RoomInviteNotification*, "Oculus.Platform.Models", "RoomInviteNotification");
