#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XRConfigurationDataAttribute)
// Forward declare root types
namespace UnityEngine::XR::Management {
class XRConfigurationDataAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Management::XRConfigurationDataAttribute);
// Type: UnityEngine.XR.Management::XRConfigurationDataAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Management {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16033))
// CS Name: ::UnityEngine.XR.Management::XRConfigurationDataAttribute*
class CORDL_TYPE XRConfigurationDataAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <displayName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__displayName_k__BackingField, put = __set__displayName_k__BackingField))::StringW _displayName_k__BackingField;

  /// @brief Field <buildSettingsKey>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__buildSettingsKey_k__BackingField, put = __set__buildSettingsKey_k__BackingField))::StringW _buildSettingsKey_k__BackingField;

  __declspec(property(get = get_displayName, put = set_displayName))::StringW displayName;

  __declspec(property(get = get_buildSettingsKey, put = set_buildSettingsKey))::StringW buildSettingsKey;

  constexpr ::StringW& __get__displayName_k__BackingField();

  constexpr ::StringW const& __get__displayName_k__BackingField() const;

  constexpr void __set__displayName_k__BackingField(::StringW value);

  constexpr ::StringW& __get__buildSettingsKey_k__BackingField();

  constexpr ::StringW const& __get__buildSettingsKey_k__BackingField() const;

  constexpr void __set__buildSettingsKey_k__BackingField(::StringW value);

  /// @brief Method get_displayName, addr 0x2c755fc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_displayName();

  /// @brief Method set_displayName, addr 0x2c75604, size 0x8, virtual false, abstract: false, final false
  inline void set_displayName(::StringW value);

  /// @brief Method get_buildSettingsKey, addr 0x2c7560c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_buildSettingsKey();

  /// @brief Method set_buildSettingsKey, addr 0x2c75614, size 0x8, virtual false, abstract: false, final false
  inline void set_buildSettingsKey(::StringW value);

  static inline ::UnityEngine::XR::Management::XRConfigurationDataAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x2c7561c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::XR::Management::XRConfigurationDataAttribute* New_ctor(::StringW displayName, ::StringW buildSettingsKey);

  /// @brief Method .ctor, addr 0x2c75624, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW displayName, ::StringW buildSettingsKey);

  // Ctor Parameters [CppParam { name: "", ty: "XRConfigurationDataAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRConfigurationDataAttribute(XRConfigurationDataAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRConfigurationDataAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRConfigurationDataAttribute(XRConfigurationDataAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRConfigurationDataAttribute();

public:
  /// @brief Field <displayName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____displayName_k__BackingField;

  /// @brief Field <buildSettingsKey>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____buildSettingsKey_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Management::XRConfigurationDataAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::XRConfigurationDataAttribute, ____displayName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::XRConfigurationDataAttribute, ____buildSettingsKey_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::XR::Management
NEED_NO_BOX(::UnityEngine::XR::Management::XRConfigurationDataAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Management::XRConfigurationDataAttribute*, "UnityEngine.XR.Management", "XRConfigurationDataAttribute");
