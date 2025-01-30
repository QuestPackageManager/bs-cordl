#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/NativeConditionalAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NativeConditionalAttribute)
// Forward declare root types
namespace UnityEngine::Bindings {
class NativeConditionalAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Bindings::NativeConditionalAttribute);
// Dependencies System.Attribute
namespace UnityEngine::Bindings {
// Is value type: false
// CS Name: UnityEngine.Bindings.NativeConditionalAttribute
class CORDL_TYPE NativeConditionalAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(put = set_Condition)) ::StringW Condition;

  __declspec(property(put = set_Enabled)) bool Enabled;

  /// @brief Field <Condition>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Condition_k__BackingField, put = __cordl_internal_set__Condition_k__BackingField)) ::StringW _Condition_k__BackingField;

  /// @brief Field <Enabled>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__Enabled_k__BackingField, put = __cordl_internal_set__Enabled_k__BackingField)) bool _Enabled_k__BackingField;

  static inline ::UnityEngine::Bindings::NativeConditionalAttribute* New_ctor(::StringW condition);

  constexpr ::StringW const& __cordl_internal_get__Condition_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Condition_k__BackingField();

  constexpr bool const& __cordl_internal_get__Enabled_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Enabled_k__BackingField();

  constexpr void __cordl_internal_set__Condition_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Enabled_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x49195c0, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW condition);

  /// @brief Method set_Condition, addr 0x49195ac, size 0x8, virtual false, abstract: false, final false
  inline void set_Condition(::StringW value);

  /// @brief Method set_Enabled, addr 0x49195b4, size 0xc, virtual false, abstract: false, final false
  inline void set_Enabled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeConditionalAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeConditionalAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeConditionalAttribute(NativeConditionalAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeConditionalAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeConditionalAttribute(NativeConditionalAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18699 };

  /// @brief Field <Condition>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Condition_k__BackingField;

  /// @brief Field <Enabled>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____Enabled_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Bindings::NativeConditionalAttribute, ____Condition_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Bindings::NativeConditionalAttribute, ____Enabled_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::NativeConditionalAttribute, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Bindings
NEED_NO_BOX(::UnityEngine::Bindings::NativeConditionalAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::NativeConditionalAttribute*, "UnityEngine.Bindings", "NativeConditionalAttribute");
