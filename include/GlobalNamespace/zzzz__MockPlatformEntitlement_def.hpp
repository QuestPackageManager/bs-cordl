#pragma once
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
// Type: ::MockPlatformEntitlement
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16270)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4106))
// CS Name: ::MockPlatformEntitlement*
class CORDL_TYPE MockPlatformEntitlement : public ::System::Object {
public:
  // Declarations
  /// @brief Field _id, offset 0x10, size 0x8
  __declspec(property(get = __get__id, put = __set__id))::StringW _id;

  /// @brief Field _status, offset 0x18, size 0x4
  __declspec(property(get = __get__status, put = __set__status))::GlobalNamespace::EntitlementStatus _status;

  __declspec(property(get = get_id))::StringW id;

  __declspec(property(get = get_status))::GlobalNamespace::EntitlementStatus status;

  constexpr ::StringW& __get__id();

  constexpr ::StringW const& __get__id() const;

  constexpr void __set__id(::StringW value);

  constexpr ::GlobalNamespace::EntitlementStatus& __get__status();

  constexpr ::GlobalNamespace::EntitlementStatus const& __get__status() const;

  constexpr void __set__status(::GlobalNamespace::EntitlementStatus value);

  /// @brief Method get_id, addr 0x223526c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_id();

  /// @brief Method get_status, addr 0x2235274, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EntitlementStatus get_status();

  static inline ::GlobalNamespace::MockPlatformEntitlement* New_ctor(::StringW id, ::GlobalNamespace::EntitlementStatus status);

  /// @brief Method .ctor, addr 0x2234e64, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW id, ::GlobalNamespace::EntitlementStatus status);

  /// @brief Method GetIt, addr 0x2234e58, size 0xc, virtual false, abstract: false, final false
  inline void GetIt();

  // Ctor Parameters [CppParam { name: "", ty: "MockPlatformEntitlement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPlatformEntitlement(MockPlatformEntitlement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPlatformEntitlement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPlatformEntitlement(MockPlatformEntitlement const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlatformEntitlement();

public:
  /// @brief Field _id, offset: 0x10, size: 0x8, def value: None
  ::StringW ____id;

  /// @brief Field _status, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::EntitlementStatus ____status;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlatformEntitlement, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformEntitlement, ____id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MockPlatformEntitlement, ____status) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlatformEntitlement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlatformEntitlement*, "", "MockPlatformEntitlement");
