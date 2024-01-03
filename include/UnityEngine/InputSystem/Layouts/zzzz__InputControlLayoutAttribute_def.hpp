#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: UnityEngine.InputSystem.Layouts::InputControlLayoutAttribute
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 73, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 105 }), TypeDefinitionIndex(TypeDefinitionIndex(2448)),
// TypeDefinitionIndex(TypeDefinitionIndex(2547))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6616)) CS Name: ::UnityEngine.InputSystem.Layouts::InputControlLayoutAttribute*
class CORDL_TYPE InputControlLayoutAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <stateType>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__stateType_k__BackingField, put = __set__stateType_k__BackingField))::System::Type* _stateType_k__BackingField;

  /// @brief Field <stateFormat>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__stateFormat_k__BackingField, put = __set__stateFormat_k__BackingField))::StringW _stateFormat_k__BackingField;

  /// @brief Field <commonUsages>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__commonUsages_k__BackingField, put = __set__commonUsages_k__BackingField))::ArrayW<::StringW, ::Array<::StringW>*> _commonUsages_k__BackingField;

  /// @brief Field <variants>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __get__variants_k__BackingField, put = __set__variants_k__BackingField))::StringW _variants_k__BackingField;

  /// @brief Field <isNoisy>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __get__isNoisy_k__BackingField, put = __set__isNoisy_k__BackingField)) bool _isNoisy_k__BackingField;

  /// @brief Field canRunInBackgroundInternal, offset 0x31, size 0x2
  __declspec(property(get = __get_canRunInBackgroundInternal, put = __set_canRunInBackgroundInternal))::System::Nullable_1<bool> canRunInBackgroundInternal;

  /// @brief Field updateBeforeRenderInternal, offset 0x33, size 0x2
  __declspec(property(get = __get_updateBeforeRenderInternal, put = __set_updateBeforeRenderInternal))::System::Nullable_1<bool> updateBeforeRenderInternal;

  /// @brief Field <isGenericTypeOfDevice>k__BackingField, offset 0x35, size 0x1
  __declspec(property(get = __get__isGenericTypeOfDevice_k__BackingField, put = __set__isGenericTypeOfDevice_k__BackingField)) bool _isGenericTypeOfDevice_k__BackingField;

  /// @brief Field <displayName>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __get__displayName_k__BackingField, put = __set__displayName_k__BackingField))::StringW _displayName_k__BackingField;

  /// @brief Field <description>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __get__description_k__BackingField, put = __set__description_k__BackingField))::StringW _description_k__BackingField;

  /// @brief Field <hideInUI>k__BackingField, offset 0x48, size 0x1
  __declspec(property(get = __get__hideInUI_k__BackingField, put = __set__hideInUI_k__BackingField)) bool _hideInUI_k__BackingField;

  __declspec(property(get = get_stateType, put = set_stateType))::System::Type* stateType;

  __declspec(property(get = get_stateFormat, put = set_stateFormat))::StringW stateFormat;

  __declspec(property(get = get_commonUsages, put = set_commonUsages))::ArrayW<::StringW, ::Array<::StringW>*> commonUsages;

  __declspec(property(get = get_variants, put = set_variants))::StringW variants;

  __declspec(property(get = get_isNoisy, put = set_isNoisy)) bool isNoisy;

  __declspec(property(get = get_canRunInBackground, put = set_canRunInBackground)) bool canRunInBackground;

  __declspec(property(get = get_updateBeforeRender, put = set_updateBeforeRender)) bool updateBeforeRender;

  __declspec(property(get = get_isGenericTypeOfDevice, put = set_isGenericTypeOfDevice)) bool isGenericTypeOfDevice;

  __declspec(property(get = get_displayName, put = set_displayName))::StringW displayName;

  __declspec(property(get = get_description, put = set_description))::StringW description;

  __declspec(property(get = get_hideInUI, put = set_hideInUI)) bool hideInUI;

  constexpr ::System::Type*& __get__stateType_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__stateType_k__BackingField() const;

  constexpr void __set__stateType_k__BackingField(::System::Type* value);

  constexpr ::StringW& __get__stateFormat_k__BackingField();

  constexpr ::StringW const& __get__stateFormat_k__BackingField() const;

  constexpr void __set__stateFormat_k__BackingField(::StringW value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get__commonUsages_k__BackingField();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get__commonUsages_k__BackingField() const;

  constexpr void __set__commonUsages_k__BackingField(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::StringW& __get__variants_k__BackingField();

  constexpr ::StringW const& __get__variants_k__BackingField() const;

  constexpr void __set__variants_k__BackingField(::StringW value);

  constexpr bool& __get__isNoisy_k__BackingField();

  constexpr bool const& __get__isNoisy_k__BackingField() const;

  constexpr void __set__isNoisy_k__BackingField(bool value);

  constexpr ::System::Nullable_1<bool>& __get_canRunInBackgroundInternal();

  constexpr ::System::Nullable_1<bool> const& __get_canRunInBackgroundInternal() const;

  constexpr void __set_canRunInBackgroundInternal(::System::Nullable_1<bool> value);

  constexpr ::System::Nullable_1<bool>& __get_updateBeforeRenderInternal();

  constexpr ::System::Nullable_1<bool> const& __get_updateBeforeRenderInternal() const;

  constexpr void __set_updateBeforeRenderInternal(::System::Nullable_1<bool> value);

  constexpr bool& __get__isGenericTypeOfDevice_k__BackingField();

  constexpr bool const& __get__isGenericTypeOfDevice_k__BackingField() const;

  constexpr void __set__isGenericTypeOfDevice_k__BackingField(bool value);

  constexpr ::StringW& __get__displayName_k__BackingField();

  constexpr ::StringW const& __get__displayName_k__BackingField() const;

  constexpr void __set__displayName_k__BackingField(::StringW value);

  constexpr ::StringW& __get__description_k__BackingField();

  constexpr ::StringW const& __get__description_k__BackingField() const;

  constexpr void __set__description_k__BackingField(::StringW value);

  constexpr bool& __get__hideInUI_k__BackingField();

  constexpr bool const& __get__hideInUI_k__BackingField() const;

  constexpr void __set__hideInUI_k__BackingField(bool value);

  /// @brief Method get_stateType, addr 0x2b035e4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_stateType();

  /// @brief Method set_stateType, addr 0x2b035ec, size 0x8, virtual false, abstract: false, final false
  inline void set_stateType(::System::Type* value);

  /// @brief Method get_stateFormat, addr 0x2b035f4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_stateFormat();

  /// @brief Method set_stateFormat, addr 0x2b035fc, size 0x8, virtual false, abstract: false, final false
  inline void set_stateFormat(::StringW value);

  /// @brief Method get_commonUsages, addr 0x2b03604, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_commonUsages();

  /// @brief Method set_commonUsages, addr 0x2b0360c, size 0x8, virtual false, abstract: false, final false
  inline void set_commonUsages(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method get_variants, addr 0x2b03614, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_variants();

  /// @brief Method set_variants, addr 0x2b0361c, size 0x8, virtual false, abstract: false, final false
  inline void set_variants(::StringW value);

  /// @brief Method get_isNoisy, addr 0x2b03624, size 0x8, virtual false, abstract: false, final false
  inline bool get_isNoisy();

  /// @brief Method set_isNoisy, addr 0x2b0362c, size 0xc, virtual false, abstract: false, final false
  inline void set_isNoisy(bool value);

  /// @brief Method get_canRunInBackground, addr 0x2b03638, size 0x48, virtual false, abstract: false, final false
  inline bool get_canRunInBackground();

  /// @brief Method set_canRunInBackground, addr 0x2b03680, size 0x68, virtual false, abstract: false, final false
  inline void set_canRunInBackground(bool value);

  /// @brief Method get_updateBeforeRender, addr 0x2b036e8, size 0x48, virtual false, abstract: false, final false
  inline bool get_updateBeforeRender();

  /// @brief Method set_updateBeforeRender, addr 0x2b03730, size 0x68, virtual false, abstract: false, final false
  inline void set_updateBeforeRender(bool value);

  /// @brief Method get_isGenericTypeOfDevice, addr 0x2b03798, size 0x8, virtual false, abstract: false, final false
  inline bool get_isGenericTypeOfDevice();

  /// @brief Method set_isGenericTypeOfDevice, addr 0x2b037a0, size 0xc, virtual false, abstract: false, final false
  inline void set_isGenericTypeOfDevice(bool value);

  /// @brief Method get_displayName, addr 0x2b037ac, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_displayName();

  /// @brief Method set_displayName, addr 0x2b037b4, size 0x8, virtual false, abstract: false, final false
  inline void set_displayName(::StringW value);

  /// @brief Method get_description, addr 0x2b037bc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_description();

  /// @brief Method set_description, addr 0x2b037c4, size 0x8, virtual false, abstract: false, final false
  inline void set_description(::StringW value);

  /// @brief Method get_hideInUI, addr 0x2b037cc, size 0x8, virtual false, abstract: false, final false
  inline bool get_hideInUI();

  /// @brief Method set_hideInUI, addr 0x2b037d4, size 0xc, virtual false, abstract: false, final false
  inline void set_hideInUI(bool value);

  static inline ::UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x2b037e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "InputControlLayoutAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputControlLayoutAttribute(InputControlLayoutAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputControlLayoutAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputControlLayoutAttribute(InputControlLayoutAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputControlLayoutAttribute();

public:
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
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute, 0x50>, "Size mismatch!");

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

} // namespace UnityEngine::InputSystem::Layouts
NEED_NO_BOX(::UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute*, "UnityEngine.InputSystem.Layouts", "InputControlLayoutAttribute");
