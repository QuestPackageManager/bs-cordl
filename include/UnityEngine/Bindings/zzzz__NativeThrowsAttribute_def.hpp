#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NativeThrowsAttribute)
// Forward declare root types
namespace UnityEngine::Bindings {
class NativeThrowsAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Bindings::NativeThrowsAttribute);
// Type: UnityEngine.Bindings::NativeThrowsAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::Bindings {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2547))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16124))
// CS Name: ::UnityEngine.Bindings::NativeThrowsAttribute*
class CORDL_TYPE NativeThrowsAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <ThrowsException>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__ThrowsException_k__BackingField, put = __cordl_internal_set__ThrowsException_k__BackingField)) bool _ThrowsException_k__BackingField;

  __declspec(property(put = set_ThrowsException)) bool ThrowsException;

  constexpr bool& __cordl_internal_get__ThrowsException_k__BackingField();

  constexpr bool const& __cordl_internal_get__ThrowsException_k__BackingField() const;

  constexpr void __cordl_internal_set__ThrowsException_k__BackingField(bool value);

  /// @brief Method set_ThrowsException, addr 0x2d3944c, size 0xc, virtual true, abstract: false, final true
  inline void set_ThrowsException(bool value);

  static inline ::UnityEngine::Bindings::NativeThrowsAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x2d39458, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NativeThrowsAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeThrowsAttribute(NativeThrowsAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeThrowsAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeThrowsAttribute(NativeThrowsAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeThrowsAttribute();

public:
  /// @brief Field <ThrowsException>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____ThrowsException_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::NativeThrowsAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Bindings::NativeThrowsAttribute, ____ThrowsException_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Bindings
NEED_NO_BOX(::UnityEngine::Bindings::NativeThrowsAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::NativeThrowsAttribute*, "UnityEngine.Bindings", "NativeThrowsAttribute");
