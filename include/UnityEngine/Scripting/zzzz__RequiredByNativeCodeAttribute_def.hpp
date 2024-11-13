#pragma once
// IWYU pragma private; include "UnityEngine/Scripting/RequiredByNativeCodeAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RequiredByNativeCodeAttribute)
// Forward declare root types
namespace UnityEngine::Scripting {
class RequiredByNativeCodeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Scripting::RequiredByNativeCodeAttribute);
// Type: UnityEngine.Scripting::RequiredByNativeCodeAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 26, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Scripting {
// Is value type: false
// CS Name: ::UnityEngine.Scripting::RequiredByNativeCodeAttribute*
class CORDL_TYPE RequiredByNativeCodeAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(put = set_GenerateProxy)) bool GenerateProxy;

  __declspec(property(put = set_Name)) ::StringW Name;

  __declspec(property(put = set_Optional)) bool Optional;

  /// @brief Field <GenerateProxy>k__BackingField, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get__GenerateProxy_k__BackingField, put = __cordl_internal_set__GenerateProxy_k__BackingField)) bool _GenerateProxy_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Field <Optional>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__Optional_k__BackingField, put = __cordl_internal_set__Optional_k__BackingField)) bool _Optional_k__BackingField;

  static inline ::UnityEngine::Scripting::RequiredByNativeCodeAttribute* New_ctor();

  static inline ::UnityEngine::Scripting::RequiredByNativeCodeAttribute* New_ctor(::StringW name);

  constexpr bool const& __cordl_internal_get__GenerateProxy_k__BackingField() const;

  constexpr bool& __cordl_internal_get__GenerateProxy_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr bool const& __cordl_internal_get__Optional_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Optional_k__BackingField();

  constexpr void __cordl_internal_set__GenerateProxy_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Optional_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x48b24c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x48b24c8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method set_GenerateProxy, addr 0x48b2504, size 0xc, virtual false, abstract: false, final false
  inline void set_GenerateProxy(bool value);

  /// @brief Method set_Name, addr 0x48b24f0, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_Optional, addr 0x48b24f8, size 0xc, virtual false, abstract: false, final false
  inline void set_Optional(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RequiredByNativeCodeAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RequiredByNativeCodeAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RequiredByNativeCodeAttribute(RequiredByNativeCodeAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RequiredByNativeCodeAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RequiredByNativeCodeAttribute(RequiredByNativeCodeAttribute const&) = delete;

  /// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// @brief Field <Optional>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____Optional_k__BackingField;

  /// @brief Field <GenerateProxy>k__BackingField, offset: 0x19, size: 0x1, def value: None
  bool ____GenerateProxy_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18635 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Scripting::RequiredByNativeCodeAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Scripting::RequiredByNativeCodeAttribute, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Scripting::RequiredByNativeCodeAttribute, ____Optional_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Scripting::RequiredByNativeCodeAttribute, ____GenerateProxy_k__BackingField) == 0x19, "Offset mismatch!");

} // namespace UnityEngine::Scripting
NEED_NO_BOX(::UnityEngine::Scripting::RequiredByNativeCodeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Scripting::RequiredByNativeCodeAttribute*, "UnityEngine.Scripting", "RequiredByNativeCodeAttribute");
