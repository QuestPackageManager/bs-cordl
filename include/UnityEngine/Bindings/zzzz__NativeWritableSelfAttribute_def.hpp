#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NativeWritableSelfAttribute)
// Forward declare root types
namespace UnityEngine::Bindings {
class NativeWritableSelfAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Bindings::NativeWritableSelfAttribute);
// Type: UnityEngine.Bindings::NativeWritableSelfAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::Bindings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16016))
// CS Name: ::UnityEngine.Bindings::NativeWritableSelfAttribute*
class CORDL_TYPE NativeWritableSelfAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <WritableSelf>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __get__WritableSelf_k__BackingField, put = __set__WritableSelf_k__BackingField)) bool _WritableSelf_k__BackingField;

  __declspec(property(put = set_WritableSelf)) bool WritableSelf;

  constexpr bool& __get__WritableSelf_k__BackingField();

  constexpr bool const& __get__WritableSelf_k__BackingField() const;

  constexpr void __set__WritableSelf_k__BackingField(bool value);

  /// @brief Method set_WritableSelf addr 0x2d18488 size 0xc virtual true final true
  inline void set_WritableSelf(bool value);

  static inline ::UnityEngine::Bindings::NativeWritableSelfAttribute* New_ctor();

  /// @brief Method .ctor addr 0x2d18494 size 0x20 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NativeWritableSelfAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeWritableSelfAttribute(NativeWritableSelfAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeWritableSelfAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeWritableSelfAttribute(NativeWritableSelfAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeWritableSelfAttribute();

public:
  /// @brief Field <WritableSelf>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____WritableSelf_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::NativeWritableSelfAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Bindings
NEED_NO_BOX(::UnityEngine::Bindings::NativeWritableSelfAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::NativeWritableSelfAttribute*, "UnityEngine.Bindings", "NativeWritableSelfAttribute");
