#pragma once
// IWYU pragma private; include "UnityEngine/NativeClassAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NativeClassAttribute)
// Forward declare root types
namespace UnityEngine {
class NativeClassAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::NativeClassAttribute);
// Dependencies System.Attribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.NativeClassAttribute
class CORDL_TYPE NativeClassAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(put = set_Declaration)) ::StringW Declaration;

  __declspec(property(put = set_QualifiedNativeName)) ::StringW QualifiedNativeName;

  /// @brief Field <Declaration>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Declaration_k__BackingField, put = __cordl_internal_set__Declaration_k__BackingField)) ::StringW _Declaration_k__BackingField;

  /// @brief Field <QualifiedNativeName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__QualifiedNativeName_k__BackingField, put = __cordl_internal_set__QualifiedNativeName_k__BackingField)) ::StringW _QualifiedNativeName_k__BackingField;

  static inline ::UnityEngine::NativeClassAttribute* New_ctor(::StringW qualifiedCppName);

  static inline ::UnityEngine::NativeClassAttribute* New_ctor(::StringW qualifiedCppName, ::StringW declaration);

  constexpr ::StringW const& __cordl_internal_get__Declaration_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Declaration_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__QualifiedNativeName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__QualifiedNativeName_k__BackingField();

  constexpr void __cordl_internal_set__Declaration_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__QualifiedNativeName_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x4919478, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW qualifiedCppName);

  /// @brief Method .ctor, addr 0x49194e8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW qualifiedCppName, ::StringW declaration);

  /// @brief Method set_Declaration, addr 0x4919470, size 0x8, virtual false, abstract: false, final false
  inline void set_Declaration(::StringW value);

  /// @brief Method set_QualifiedNativeName, addr 0x4919468, size 0x8, virtual false, abstract: false, final false
  inline void set_QualifiedNativeName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeClassAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeClassAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeClassAttribute(NativeClassAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeClassAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeClassAttribute(NativeClassAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18696 };

  /// @brief Field <QualifiedNativeName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____QualifiedNativeName_k__BackingField;

  /// @brief Field <Declaration>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Declaration_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::NativeClassAttribute, ____QualifiedNativeName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::NativeClassAttribute, ____Declaration_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::NativeClassAttribute, 0x20>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::NativeClassAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::NativeClassAttribute*, "UnityEngine", "NativeClassAttribute");
