#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__OidGroup_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Oid)
namespace System::Security::Cryptography {
struct OidGroup;
}
// Forward declare root types
namespace System::Security::Cryptography {
class Oid;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::Oid);
// Type: System.Security.Cryptography::Oid
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::Oid*
class CORDL_TYPE Oid : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_FriendlyName))::StringW FriendlyName;

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  /// @brief Field _friendlyName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__friendlyName, put = __cordl_internal_set__friendlyName))::StringW _friendlyName;

  /// @brief Field _group, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__group, put = __cordl_internal_set__group))::System::Security::Cryptography::OidGroup _group;

  /// @brief Field _value, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value))::StringW _value;

  /// @brief Method FromOidValue, addr 0x2faade0, size 0x13c, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::Oid* FromOidValue(::StringW oidValue, ::System::Security::Cryptography::OidGroup group);

  static inline ::System::Security::Cryptography::Oid* New_ctor();

  static inline ::System::Security::Cryptography::Oid* New_ctor(::StringW oid);

  static inline ::System::Security::Cryptography::Oid* New_ctor(::System::Security::Cryptography::Oid* oid);

  static inline ::System::Security::Cryptography::Oid* New_ctor(::StringW value, ::StringW friendlyName);

  static inline ::System::Security::Cryptography::Oid* New_ctor(::StringW value, ::StringW friendlyName, ::System::Security::Cryptography::OidGroup group);

  constexpr ::StringW const& __cordl_internal_get__friendlyName() const;

  constexpr ::StringW& __cordl_internal_get__friendlyName();

  constexpr ::System::Security::Cryptography::OidGroup const& __cordl_internal_get__group() const;

  constexpr ::System::Security::Cryptography::OidGroup& __cordl_internal_get__group();

  constexpr ::StringW const& __cordl_internal_get__value() const;

  constexpr ::StringW& __cordl_internal_get__value();

  constexpr void __cordl_internal_set__friendlyName(::StringW value);

  constexpr void __cordl_internal_set__group(::System::Security::Cryptography::OidGroup value);

  constexpr void __cordl_internal_set__value(::StringW value);

  /// @brief Method .ctor, addr 0x2faac9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2faaca4, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::StringW oid);

  /// @brief Method .ctor, addr 0x2faad5c, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::Oid* oid);

  /// @brief Method .ctor, addr 0x2faad30, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW value, ::StringW friendlyName);

  /// @brief Method .ctor, addr 0x2faaf1c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW value, ::StringW friendlyName, ::System::Security::Cryptography::OidGroup group);

  /// @brief Method get_FriendlyName, addr 0x2faaf68, size 0x84, virtual false, abstract: false, final false
  inline ::StringW get_FriendlyName();

  /// @brief Method get_Value, addr 0x2faaf58, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_Value, addr 0x2faaf60, size 0x8, virtual false, abstract: false, final false
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Oid();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Oid", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Oid(Oid&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Oid", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Oid(Oid const&) = delete;

  /// @brief Field _value, offset: 0x10, size: 0x8, def value: None
  ::StringW ____value;

  /// @brief Field _friendlyName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____friendlyName;

  /// @brief Field _group, offset: 0x20, size: 0x4, def value: None
  ::System::Security::Cryptography::OidGroup ____group;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::Oid, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::Oid, ____value) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::Oid, ____friendlyName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::Oid, ____group) == 0x20, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::Oid);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::Oid*, "System.Security.Cryptography", "Oid");
