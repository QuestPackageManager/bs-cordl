#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(IgnoreAttribute)
// Forward declare root types
namespace UnityEngine::Bindings {
class IgnoreAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Bindings::IgnoreAttribute);
// Type: UnityEngine.Bindings::IgnoreAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::Bindings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2545))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15894))
// CS Name: ::UnityEngine.Bindings::IgnoreAttribute*
class CORDL_TYPE IgnoreAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <DoesNotContributeToSize>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __get__DoesNotContributeToSize_k__BackingField, put = __set__DoesNotContributeToSize_k__BackingField)) bool _DoesNotContributeToSize_k__BackingField;

  __declspec(property(put = set_DoesNotContributeToSize)) bool DoesNotContributeToSize;

  constexpr bool& __get__DoesNotContributeToSize_k__BackingField();

  constexpr bool const& __get__DoesNotContributeToSize_k__BackingField() const;

  constexpr void __set__DoesNotContributeToSize_k__BackingField(bool value);

  /// @brief Method set_DoesNotContributeToSize addr 0x2bb1620 size 0xc virtual false final false
  inline void set_DoesNotContributeToSize(bool value);

  static inline ::UnityEngine::Bindings::IgnoreAttribute* New_ctor();

  /// @brief Method .ctor addr 0x2bb162c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "IgnoreAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IgnoreAttribute(IgnoreAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IgnoreAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IgnoreAttribute(IgnoreAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IgnoreAttribute();

public:
  /// @brief Field <DoesNotContributeToSize>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____DoesNotContributeToSize_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::IgnoreAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Bindings::IgnoreAttribute, ____DoesNotContributeToSize_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Bindings
NEED_NO_BOX(::UnityEngine::Bindings::IgnoreAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::IgnoreAttribute*, "UnityEngine.Bindings", "IgnoreAttribute");
