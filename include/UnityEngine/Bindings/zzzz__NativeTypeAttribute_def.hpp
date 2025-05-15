#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/NativeTypeAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "UnityEngine/Bindings/zzzz__CodegenOptions_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NativeTypeAttribute)
namespace UnityEngine::Bindings {
struct CodegenOptions;
}
// Forward declare root types
namespace UnityEngine::Bindings {
class NativeTypeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Bindings::NativeTypeAttribute);
// Dependencies System.Attribute, UnityEngine.Bindings.CodegenOptions
namespace UnityEngine::Bindings {
// Is value type: false
// CS Name: UnityEngine.Bindings.NativeTypeAttribute
class CORDL_TYPE NativeTypeAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(put = set_CodegenOptions)) ::UnityEngine::Bindings::CodegenOptions CodegenOptions;

  __declspec(property(put = set_Header)) ::StringW Header;

  __declspec(property(put = set_IntermediateScriptingStructName)) ::StringW IntermediateScriptingStructName;

  /// @brief Field <CodegenOptions>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__CodegenOptions_k__BackingField,
                      put = __cordl_internal_set__CodegenOptions_k__BackingField)) ::UnityEngine::Bindings::CodegenOptions _CodegenOptions_k__BackingField;

  /// @brief Field <Header>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Header_k__BackingField, put = __cordl_internal_set__Header_k__BackingField)) ::StringW _Header_k__BackingField;

  /// @brief Field <IntermediateScriptingStructName>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__IntermediateScriptingStructName_k__BackingField,
                      put = __cordl_internal_set__IntermediateScriptingStructName_k__BackingField)) ::StringW _IntermediateScriptingStructName_k__BackingField;

  static inline ::UnityEngine::Bindings::NativeTypeAttribute* New_ctor();

  static inline ::UnityEngine::Bindings::NativeTypeAttribute* New_ctor(::UnityEngine::Bindings::CodegenOptions codegenOptions);

  static inline ::UnityEngine::Bindings::NativeTypeAttribute* New_ctor(::UnityEngine::Bindings::CodegenOptions codegenOptions, ::StringW intermediateStructName);

  static inline ::UnityEngine::Bindings::NativeTypeAttribute* New_ctor(::StringW header);

  constexpr ::UnityEngine::Bindings::CodegenOptions const& __cordl_internal_get__CodegenOptions_k__BackingField() const;

  constexpr ::UnityEngine::Bindings::CodegenOptions& __cordl_internal_get__CodegenOptions_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Header_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Header_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__IntermediateScriptingStructName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__IntermediateScriptingStructName_k__BackingField();

  constexpr void __cordl_internal_set__CodegenOptions_k__BackingField(::UnityEngine::Bindings::CodegenOptions value);

  constexpr void __cordl_internal_set__Header_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__IntermediateScriptingStructName_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x491932c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4919348, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Bindings::CodegenOptions codegenOptions);

  /// @brief Method .ctor, addr 0x4919470, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Bindings::CodegenOptions codegenOptions, ::StringW intermediateStructName);

  /// @brief Method .ctor, addr 0x4919370, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::StringW header);

  /// @brief Method set_CodegenOptions, addr 0x4919324, size 0x8, virtual true, abstract: false, final true
  inline void set_CodegenOptions(::UnityEngine::Bindings::CodegenOptions value);

  /// @brief Method set_Header, addr 0x4919314, size 0x8, virtual true, abstract: false, final true
  inline void set_Header(::StringW value);

  /// @brief Method set_IntermediateScriptingStructName, addr 0x491931c, size 0x8, virtual false, abstract: false, final false
  inline void set_IntermediateScriptingStructName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeTypeAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeTypeAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeTypeAttribute(NativeTypeAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeTypeAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeTypeAttribute(NativeTypeAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18716 };

  /// @brief Field <Header>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Header_k__BackingField;

  /// @brief Field <IntermediateScriptingStructName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____IntermediateScriptingStructName_k__BackingField;

  /// @brief Field <CodegenOptions>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::Bindings::CodegenOptions ____CodegenOptions_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Bindings::NativeTypeAttribute, ____Header_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Bindings::NativeTypeAttribute, ____IntermediateScriptingStructName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Bindings::NativeTypeAttribute, ____CodegenOptions_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::NativeTypeAttribute, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Bindings
NEED_NO_BOX(::UnityEngine::Bindings::NativeTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::NativeTypeAttribute*, "UnityEngine.Bindings", "NativeTypeAttribute");
