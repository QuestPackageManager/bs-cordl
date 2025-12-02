#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/PartyUpdateNotification.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__PartyUpdateAction_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PartyUpdateNotification)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class PartyUpdateNotification;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::PartyUpdateNotification);
// Dependencies Oculus.Platform.PartyUpdateAction, System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.PartyUpdateNotification
class CORDL_TYPE PartyUpdateNotification : public ::System::Object {
public:
  // Declarations
  /// @brief Field Action, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_Action, put = __cordl_internal_set_Action)) ::Oculus::Platform::PartyUpdateAction Action;

  /// @brief Field PartyId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_PartyId, put = __cordl_internal_set_PartyId)) uint64_t PartyId;

  /// @brief Field SenderId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_SenderId, put = __cordl_internal_set_SenderId)) uint64_t SenderId;

  /// @brief Field UpdateTimestamp, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_UpdateTimestamp, put = __cordl_internal_set_UpdateTimestamp)) ::StringW UpdateTimestamp;

  /// @brief Field UserAlias, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_UserAlias, put = __cordl_internal_set_UserAlias)) ::StringW UserAlias;

  /// @brief Field UserId, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_UserId, put = __cordl_internal_set_UserId)) uint64_t UserId;

  /// @brief Field UserName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_UserName, put = __cordl_internal_set_UserName)) ::StringW UserName;

  static inline ::Oculus::Platform::Models::PartyUpdateNotification* New_ctor(::System::IntPtr o);

  constexpr ::Oculus::Platform::PartyUpdateAction const& __cordl_internal_get_Action() const;

  constexpr ::Oculus::Platform::PartyUpdateAction& __cordl_internal_get_Action();

  constexpr uint64_t const& __cordl_internal_get_PartyId() const;

  constexpr uint64_t& __cordl_internal_get_PartyId();

  constexpr uint64_t const& __cordl_internal_get_SenderId() const;

  constexpr uint64_t& __cordl_internal_get_SenderId();

  constexpr ::StringW const& __cordl_internal_get_UpdateTimestamp() const;

  constexpr ::StringW& __cordl_internal_get_UpdateTimestamp();

  constexpr ::StringW const& __cordl_internal_get_UserAlias() const;

  constexpr ::StringW& __cordl_internal_get_UserAlias();

  constexpr uint64_t const& __cordl_internal_get_UserId() const;

  constexpr uint64_t& __cordl_internal_get_UserId();

  constexpr ::StringW const& __cordl_internal_get_UserName() const;

  constexpr ::StringW& __cordl_internal_get_UserName();

  constexpr void __cordl_internal_set_Action(::Oculus::Platform::PartyUpdateAction value);

  constexpr void __cordl_internal_set_PartyId(uint64_t value);

  constexpr void __cordl_internal_set_SenderId(uint64_t value);

  constexpr void __cordl_internal_set_UpdateTimestamp(::StringW value);

  constexpr void __cordl_internal_set_UserAlias(::StringW value);

  constexpr void __cordl_internal_set_UserId(uint64_t value);

  constexpr void __cordl_internal_set_UserName(::StringW value);

  /// @brief Method .ctor, addr 0x5bdc88c, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PartyUpdateNotification();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PartyUpdateNotification", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PartyUpdateNotification(PartyUpdateNotification&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PartyUpdateNotification", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PartyUpdateNotification(PartyUpdateNotification const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18033 };

  /// @brief Field Action, offset: 0x10, size: 0x4, def value: None
  ::Oculus::Platform::PartyUpdateAction ___Action;

  /// @brief Field PartyId, offset: 0x18, size: 0x8, def value: None
  uint64_t ___PartyId;

  /// @brief Field SenderId, offset: 0x20, size: 0x8, def value: None
  uint64_t ___SenderId;

  /// @brief Field UpdateTimestamp, offset: 0x28, size: 0x8, def value: None
  ::StringW ___UpdateTimestamp;

  /// @brief Field UserAlias, offset: 0x30, size: 0x8, def value: None
  ::StringW ___UserAlias;

  /// @brief Field UserId, offset: 0x38, size: 0x8, def value: None
  uint64_t ___UserId;

  /// @brief Field UserName, offset: 0x40, size: 0x8, def value: None
  ::StringW ___UserName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::PartyUpdateNotification, ___Action) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::PartyUpdateNotification, ___PartyId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::PartyUpdateNotification, ___SenderId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::PartyUpdateNotification, ___UpdateTimestamp) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::PartyUpdateNotification, ___UserAlias) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::PartyUpdateNotification, ___UserId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::PartyUpdateNotification, ___UserName) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::PartyUpdateNotification, 0x48>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::PartyUpdateNotification);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::PartyUpdateNotification*, "Oculus.Platform.Models", "PartyUpdateNotification");
