#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputControlLayoutAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InputControlLayoutAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayoutAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute);
// Dependencies System.Attribute, System.Nullable`1<T>
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayoutAttribute
class CORDL_TYPE InputControlLayoutAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <commonUsages>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__commonUsages_k__BackingField, put = __cordl_internal_set__commonUsages_k__BackingField)) ::ArrayW<::StringW, ::Array<::StringW>*>
      _commonUsages_k__BackingField;

  /// @brief Field <description>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__description_k__BackingField, put = __cordl_internal_set__description_k__BackingField)) ::StringW _description_k__BackingField;

  /// @brief Field <displayName>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__displayName_k__BackingField, put = __cordl_internal_set__displayName_k__BackingField)) ::StringW _displayName_k__BackingField;

  /// @brief Field <hideInUI>k__BackingField, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__hideInUI_k__BackingField, put = __cordl_internal_set__hideInUI_k__BackingField)) bool _hideInUI_k__BackingField;

  /// @brief Field <isGenericTypeOfDevice>k__BackingField, offset 0x35, size 0x1
  __declspec(property(get = __cordl_internal_get__isGenericTypeOfDevice_k__BackingField,
                      put = __cordl_internal_set__isGenericTypeOfDevice_k__BackingField)) bool _isGenericTypeOfDevice_k__BackingField;

  /// @brief Field <isNoisy>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__isNoisy_k__BackingField, put = __cordl_internal_set__isNoisy_k__BackingField)) bool _isNoisy_k__BackingField;

  /// @brief Field <stateFormat>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__stateFormat_k__BackingField, put = __cordl_internal_set__stateFormat_k__BackingField)) ::StringW _stateFormat_k__BackingField;

  /// @brief Field <stateType>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__stateType_k__BackingField, put = __cordl_internal_set__stateType_k__BackingField)) ::System::Type* _stateType_k__BackingField;

  /// @brief Field <variants>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__variants_k__BackingField, put = __cordl_internal_set__variants_k__BackingField)) ::StringW _variants_k__BackingField;

  __declspec(property(get = get_canRunInBackground, put = set_canRunInBackground)) bool canRunInBackground;

  /// @brief Field canRunInBackgroundInternal, offset 0x31, size 0x2
  __declspec(property(get = __cordl_internal_get_canRunInBackgroundInternal, put = __cordl_internal_set_canRunInBackgroundInternal)) ::System::Nullable_1<bool> canRunInBackgroundInternal;

  __declspec(property(get = get_commonUsages, put = set_commonUsages)) ::ArrayW<::StringW, ::Array<::StringW>*> commonUsages;

  __declspec(property(get = get_description, put = set_description)) ::StringW description;

  __declspec(property(get = get_displayName, put = set_displayName)) ::StringW displayName;

  __declspec(property(get = get_hideInUI, put = set_hideInUI)) bool hideInUI;

  __declspec(property(get = get_isGenericTypeOfDevice, put = set_isGenericTypeOfDevice)) bool isGenericTypeOfDevice;

  __declspec(property(get = get_isNoisy, put = set_isNoisy)) bool isNoisy;

  __declspec(property(get = get_stateFormat, put = set_stateFormat)) ::StringW stateFormat;

  __declspec(property(get = get_stateType, put = set_stateType)) ::System::Type* stateType;

  __declspec(property(get = get_updateBeforeRender, put = set_updateBeforeRender)) bool updateBeforeRender;

  /// @brief Field updateBeforeRenderInternal, offset 0x33, size 0x2
  __declspec(property(get = __cordl_internal_get_updateBeforeRenderInternal, put = __cordl_internal_set_updateBeforeRenderInternal)) ::System::Nullable_1<bool> updateBeforeRenderInternal;

  __declspec(property(get = get_variants, put = set_variants)) ::StringW variants;

  static inline ::UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute* New_ctor();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__commonUsages_k__BackingField() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__commonUsages_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__description_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__description_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__displayName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__displayName_k__BackingField();

  constexpr bool const& __cordl_internal_get__hideInUI_k__BackingField() const;

  constexpr bool& __cordl_internal_get__hideInUI_k__BackingField();

  constexpr bool const& __cordl_internal_get__isGenericTypeOfDevice_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isGenericTypeOfDevice_k__BackingField();

  constexpr bool const& __cordl_internal_get__isNoisy_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isNoisy_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__stateFormat_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__stateFormat_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__stateType_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__stateType_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__variants_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__variants_k__BackingField();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_canRunInBackgroundInternal() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get_canRunInBackgroundInternal();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_updateBeforeRenderInternal() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get_updateBeforeRenderInternal();

  constexpr void __cordl_internal_set__commonUsages_k__BackingField(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__description_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__displayName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__hideInUI_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isGenericTypeOfDevice_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isNoisy_k__BackingField(bool value);

  constexpr void __cordl_internal_set__stateFormat_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__stateType_k__BackingField(::System::Type* value);

  constexpr void __cordl_internal_set__variants_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_canRunInBackgroundInternal(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set_updateBeforeRenderInternal(::System::Nullable_1<bool> value);

  /// @brief Method .ctor, addr 0x6411d28, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_canRunInBackground, addr 0x6411b88, size 0x54, virtual false, abstract: false, final false
  inline bool get_canRunInBackground();

  /// @brief Method get_commonUsages, addr 0x6411b58, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_commonUsages();

  /// @brief Method get_description, addr 0x6411d08, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_description();

  /// @brief Method get_displayName, addr 0x6411cf8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_displayName();

  /// @brief Method get_hideInUI, addr 0x6411d18, size 0x8, virtual false, abstract: false, final false
  inline bool get_hideInUI();

  /// @brief Method get_isGenericTypeOfDevice, addr 0x6411ce8, size 0x8, virtual false, abstract: false, final false
  inline bool get_isGenericTypeOfDevice();

  /// @brief Method get_isNoisy, addr 0x6411b78, size 0x8, virtual false, abstract: false, final false
  inline bool get_isNoisy();

  /// @brief Method get_stateFormat, addr 0x6411b48, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_stateFormat();

  /// @brief Method get_stateType, addr 0x6411b38, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_stateType();

  /// @brief Method get_updateBeforeRender, addr 0x6411c38, size 0x54, virtual false, abstract: false, final false
  inline bool get_updateBeforeRender();

  /// @brief Method get_variants, addr 0x6411b68, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_variants();

  /// @brief Method set_canRunInBackground, addr 0x6411bdc, size 0x5c, virtual false, abstract: false, final false
  inline void set_canRunInBackground(bool value);

  /// @brief Method set_commonUsages, addr 0x6411b60, size 0x8, virtual false, abstract: false, final false
  inline void set_commonUsages(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method set_description, addr 0x6411d10, size 0x8, virtual false, abstract: false, final false
  inline void set_description(::StringW value);

  /// @brief Method set_displayName, addr 0x6411d00, size 0x8, virtual false, abstract: false, final false
  inline void set_displayName(::StringW value);

  /// @brief Method set_hideInUI, addr 0x6411d20, size 0x8, virtual false, abstract: false, final false
  inline void set_hideInUI(bool value);

  /// @brief Method set_isGenericTypeOfDevice, addr 0x6411cf0, size 0x8, virtual false, abstract: false, final false
  inline void set_isGenericTypeOfDevice(bool value);

  /// @brief Method set_isNoisy, addr 0x6411b80, size 0x8, virtual false, abstract: false, final false
  inline void set_isNoisy(bool value);

  /// @brief Method set_stateFormat, addr 0x6411b50, size 0x8, virtual false, abstract: false, final false
  inline void set_stateFormat(::StringW value);

  /// @brief Method set_stateType, addr 0x6411b40, size 0x8, virtual false, abstract: false, final false
  inline void set_stateType(::System::Type* value);

  /// @brief Method set_updateBeforeRender, addr 0x6411c8c, size 0x5c, virtual false, abstract: false, final false
  inline void set_updateBeforeRender(bool value);

  /// @brief Method set_variants, addr 0x6411b70, size 0x8, virtual false, abstract: false, final false
  inline void set_variants(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputControlLayoutAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputControlLayoutAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputControlLayoutAttribute(InputControlLayoutAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputControlLayoutAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputControlLayoutAttribute(InputControlLayoutAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9088 };

  /// @brief Field <stateType>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____stateType_k__BackingField;

  /// @brief Field <stateFormat>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____stateFormat_k__BackingField;

  /// @brief Field <commonUsages>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____commonUsages_k__BackingField;

  /// @brief Field <variants>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::StringW ____variants_k__BackingField;

  /// @brief Field <isNoisy>k__BackingField, offset: 0x30, size: 0x1, def value: None
  bool ____isNoisy_k__BackingField;

  /// @brief Field canRunInBackgroundInternal, offset: 0x31, size: 0x2, def value: None
  ::System::Nullable_1<bool> ___canRunInBackgroundInternal;

  /// @brief Field updateBeforeRenderInternal, offset: 0x33, size: 0x2, def value: None
  ::System::Nullable_1<bool> ___updateBeforeRenderInternal;

  /// @brief Field <isGenericTypeOfDevice>k__BackingField, offset: 0x35, size: 0x1, def value: None
  bool ____isGenericTypeOfDevice_k__BackingField;

  /// @brief Field <displayName>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::StringW ____displayName_k__BackingField;

  /// @brief Field <description>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::StringW ____description_k__BackingField;

  /// @brief Field <hideInUI>k__BackingField, offset: 0x48, size: 0x1, def value: None
  bool ____hideInUI_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute, ____stateType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute, ____stateFormat_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute, ____commonUsages_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute, ____variants_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute, ____isNoisy_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute, ___canRunInBackgroundInternal) == 0x31, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute, ___updateBeforeRenderInternal) == 0x33, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute, ____isGenericTypeOfDevice_k__BackingField) == 0x35, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute, ____displayName_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute, ____description_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute, ____hideInUI_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute, 0x50>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
NEED_NO_BOX(::UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute*, "UnityEngine.InputSystem.Layouts", "InputControlLayoutAttribute");
