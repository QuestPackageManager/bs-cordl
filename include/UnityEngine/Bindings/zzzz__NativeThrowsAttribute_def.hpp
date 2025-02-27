#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/NativeThrowsAttribute.hpp"
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
// Dependencies System.Attribute
namespace UnityEngine::Bindings {
// Is value type: false
// CS Name: UnityEngine.Bindings.NativeThrowsAttribute
class CORDL_TYPE NativeThrowsAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(put = set_ThrowsException)) bool ThrowsException;

  /// @brief Field <ThrowsException>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__ThrowsException_k__BackingField, put = __cordl_internal_set__ThrowsException_k__BackingField)) bool _ThrowsException_k__BackingField;

  static inline ::UnityEngine::Bindings::NativeThrowsAttribute* New_ctor();

  constexpr bool const& __cordl_internal_get__ThrowsException_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ThrowsException_k__BackingField();

  constexpr void __cordl_internal_set__ThrowsException_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x4925998, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_ThrowsException, addr 0x492598c, size 0xc, virtual true, abstract: false, final true
  inline void set_ThrowsException(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeThrowsAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeThrowsAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeThrowsAttribute(NativeThrowsAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeThrowsAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeThrowsAttribute(NativeThrowsAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18720 };

  /// @brief Field <ThrowsException>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____ThrowsException_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Bindings::NativeThrowsAttribute, ____ThrowsException_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::NativeThrowsAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Bindings
NEED_NO_BOX(::UnityEngine::Bindings::NativeThrowsAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::NativeThrowsAttribute*, "UnityEngine.Bindings", "NativeThrowsAttribute");
