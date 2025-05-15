#pragma once
// IWYU pragma private; include "GlobalNamespace/XPlatformAuthFeatureFlag.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XPlatformAuthFeatureFlag)
// Forward declare root types
namespace GlobalNamespace {
class XPlatformAuthFeatureFlag;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::XPlatformAuthFeatureFlag);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: XPlatformAuthFeatureFlag
class CORDL_TYPE XPlatformAuthFeatureFlag : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_UseXPlatformAuth, put = set_UseXPlatformAuth)) bool UseXPlatformAuth;

  /// @brief Field <UseXPlatformAuth>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__UseXPlatformAuth_k__BackingField, put = __cordl_internal_set__UseXPlatformAuth_k__BackingField)) bool _UseXPlatformAuth_k__BackingField;

  static inline ::GlobalNamespace::XPlatformAuthFeatureFlag* New_ctor();

  constexpr bool const& __cordl_internal_get__UseXPlatformAuth_k__BackingField() const;

  constexpr bool& __cordl_internal_get__UseXPlatformAuth_k__BackingField();

  constexpr void __cordl_internal_set__UseXPlatformAuth_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x22ed27c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_UseXPlatformAuth, addr 0x22ed268, size 0x8, virtual false, abstract: false, final false
  inline bool get_UseXPlatformAuth();

  /// @brief Method set_UseXPlatformAuth, addr 0x22ed270, size 0xc, virtual false, abstract: false, final false
  inline void set_UseXPlatformAuth(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XPlatformAuthFeatureFlag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XPlatformAuthFeatureFlag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XPlatformAuthFeatureFlag(XPlatformAuthFeatureFlag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XPlatformAuthFeatureFlag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XPlatformAuthFeatureFlag(XPlatformAuthFeatureFlag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15007 };

  /// @brief Field <UseXPlatformAuth>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____UseXPlatformAuth_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XPlatformAuthFeatureFlag, ____UseXPlatformAuth_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::XPlatformAuthFeatureFlag, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::XPlatformAuthFeatureFlag);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::XPlatformAuthFeatureFlag*, "", "XPlatformAuthFeatureFlag");
