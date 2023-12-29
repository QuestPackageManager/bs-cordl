#pragma once
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
// Type: UnityEngine::NativeClassAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2545))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15872))
// CS Name: ::UnityEngine::NativeClassAttribute*
class CORDL_TYPE NativeClassAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <QualifiedNativeName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__QualifiedNativeName_k__BackingField, put = __set__QualifiedNativeName_k__BackingField))::StringW _QualifiedNativeName_k__BackingField;

  /// @brief Field <Declaration>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__Declaration_k__BackingField, put = __set__Declaration_k__BackingField))::StringW _Declaration_k__BackingField;

  __declspec(property(put = set_QualifiedNativeName))::StringW QualifiedNativeName;

  __declspec(property(put = set_Declaration))::StringW Declaration;

  constexpr ::StringW& __get__QualifiedNativeName_k__BackingField();

  constexpr ::StringW const& __get__QualifiedNativeName_k__BackingField() const;

  constexpr void __set__QualifiedNativeName_k__BackingField(::StringW value);

  constexpr ::StringW& __get__Declaration_k__BackingField();

  constexpr ::StringW const& __get__Declaration_k__BackingField() const;

  constexpr void __set__Declaration_k__BackingField(::StringW value);

  /// @brief Method set_QualifiedNativeName addr 0x2bb0cb0 size 0x8 virtual false final false
  inline void set_QualifiedNativeName(::StringW value);

  /// @brief Method set_Declaration addr 0x2bb0cb8 size 0x8 virtual false final false
  inline void set_Declaration(::StringW value);

  static inline ::UnityEngine::NativeClassAttribute* New_ctor(::StringW qualifiedCppName);

  /// @brief Method .ctor addr 0x2bb0cc0 size 0x70 virtual false final false
  inline void _ctor(::StringW qualifiedCppName);

  static inline ::UnityEngine::NativeClassAttribute* New_ctor(::StringW qualifiedCppName, ::StringW declaration);

  /// @brief Method .ctor addr 0x2bb0d30 size 0x2c virtual false final false
  inline void _ctor(::StringW qualifiedCppName, ::StringW declaration);

  // Ctor Parameters [CppParam { name: "", ty: "NativeClassAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeClassAttribute(NativeClassAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeClassAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeClassAttribute(NativeClassAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeClassAttribute();

public:
  /// @brief Field <QualifiedNativeName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____QualifiedNativeName_k__BackingField;

  /// @brief Field <Declaration>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Declaration_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::NativeClassAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::NativeClassAttribute, ____QualifiedNativeName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::NativeClassAttribute, ____Declaration_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::NativeClassAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::NativeClassAttribute*, "UnityEngine", "NativeClassAttribute");
