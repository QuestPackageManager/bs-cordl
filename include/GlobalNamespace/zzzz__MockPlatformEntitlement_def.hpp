#pragma once
// IWYU pragma private; include "GlobalNamespace/MockPlatformEntitlement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MockPlatformEntitlement)
namespace GlobalNamespace {
struct EntitlementStatus;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlatformEntitlement;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockPlatformEntitlement);
// Dependencies EntitlementStatus, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MockPlatformEntitlement
class CORDL_TYPE MockPlatformEntitlement : public ::System::Object {
public:
  // Declarations
  /// @brief Field _id, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__id, put = __cordl_internal_set__id)) ::StringW _id;

  /// @brief Field _status, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__status, put = __cordl_internal_set__status)) ::GlobalNamespace::EntitlementStatus _status;

  __declspec(property(get = get_id)) ::StringW id;

  __declspec(property(get = get_status)) ::GlobalNamespace::EntitlementStatus status;

  /// @brief Method GetIt, addr 0x26a177c, size 0xc, virtual false, abstract: false, final false
  inline void GetIt();

  static inline ::GlobalNamespace::MockPlatformEntitlement* New_ctor(::StringW id, ::GlobalNamespace::EntitlementStatus status);

  constexpr ::StringW const& __cordl_internal_get__id() const;

  constexpr ::StringW& __cordl_internal_get__id();

  constexpr ::GlobalNamespace::EntitlementStatus const& __cordl_internal_get__status() const;

  constexpr ::GlobalNamespace::EntitlementStatus& __cordl_internal_get__status();

  constexpr void __cordl_internal_set__id(::StringW value);

  constexpr void __cordl_internal_set__status(::GlobalNamespace::EntitlementStatus value);

  /// @brief Method .ctor, addr 0x26a1788, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW id, ::GlobalNamespace::EntitlementStatus status);

  /// @brief Method get_id, addr 0x26a28a8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_id();

  /// @brief Method get_status, addr 0x26a28b0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EntitlementStatus get_status();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlatformEntitlement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockPlatformEntitlement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPlatformEntitlement(MockPlatformEntitlement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPlatformEntitlement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPlatformEntitlement(MockPlatformEntitlement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12770 };

  /// @brief Field _id, offset: 0x10, size: 0x8, def value: None
  ::StringW ____id;

  /// @brief Field _status, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::EntitlementStatus ____status;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockPlatformEntitlement, ____id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformEntitlement, ____status) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlatformEntitlement, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlatformEntitlement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlatformEntitlement*, "", "MockPlatformEntitlement");
