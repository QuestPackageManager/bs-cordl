#pragma once
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
// Type: ::XPlatformAuthFeatureFlag
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12999))
// CS Name: ::XPlatformAuthFeatureFlag*
class CORDL_TYPE XPlatformAuthFeatureFlag : public ::System::Object {
public:
  // Declarations
  /// @brief Field <UseXPlatformAuth>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __get__UseXPlatformAuth_k__BackingField, put = __set__UseXPlatformAuth_k__BackingField)) bool _UseXPlatformAuth_k__BackingField;

  __declspec(property(get = get_UseXPlatformAuth, put = set_UseXPlatformAuth)) bool UseXPlatformAuth;

  constexpr bool& __get__UseXPlatformAuth_k__BackingField();

  constexpr bool const& __get__UseXPlatformAuth_k__BackingField() const;

  constexpr void __set__UseXPlatformAuth_k__BackingField(bool value);

  /// @brief Method get_UseXPlatformAuth, addr 0xe5df24, size 0x8, virtual false, abstract: false, final false
  inline bool get_UseXPlatformAuth();

  /// @brief Method set_UseXPlatformAuth, addr 0xe5df2c, size 0xc, virtual false, abstract: false, final false
  inline void set_UseXPlatformAuth(bool value);

  static inline ::GlobalNamespace::XPlatformAuthFeatureFlag* New_ctor();

  /// @brief Method .ctor, addr 0xe5df38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "XPlatformAuthFeatureFlag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XPlatformAuthFeatureFlag(XPlatformAuthFeatureFlag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XPlatformAuthFeatureFlag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XPlatformAuthFeatureFlag(XPlatformAuthFeatureFlag const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XPlatformAuthFeatureFlag();

public:
  /// @brief Field <UseXPlatformAuth>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____UseXPlatformAuth_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::XPlatformAuthFeatureFlag, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::XPlatformAuthFeatureFlag, ____UseXPlatformAuth_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::XPlatformAuthFeatureFlag);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::XPlatformAuthFeatureFlag*, "", "XPlatformAuthFeatureFlag");
