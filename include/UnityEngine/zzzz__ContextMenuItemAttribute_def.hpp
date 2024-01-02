#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ContextMenuItemAttribute)
// Forward declare root types
namespace UnityEngine {
class ContextMenuItemAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ContextMenuItemAttribute);
// Type: UnityEngine::ContextMenuItemAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10171))
// CS Name: ::UnityEngine::ContextMenuItemAttribute*
class CORDL_TYPE ContextMenuItemAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::StringW name;

  /// @brief Field function, offset 0x18, size 0x8
  __declspec(property(get = __get_function, put = __set_function))::StringW function;

  constexpr ::StringW& __get_name();

  constexpr ::StringW const& __get_name() const;

  constexpr void __set_name(::StringW value);

  constexpr ::StringW& __get_function();

  constexpr ::StringW const& __get_function() const;

  constexpr void __set_function(::StringW value);

  static inline ::UnityEngine::ContextMenuItemAttribute* New_ctor(::StringW name, ::StringW function);

  /// @brief Method .ctor, addr 0x2ccc0cc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::StringW function);

  // Ctor Parameters [CppParam { name: "", ty: "ContextMenuItemAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContextMenuItemAttribute(ContextMenuItemAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContextMenuItemAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContextMenuItemAttribute(ContextMenuItemAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContextMenuItemAttribute();

public:
  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field function, offset: 0x18, size: 0x8, def value: None
  ::StringW ___function;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ContextMenuItemAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ContextMenuItemAttribute, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ContextMenuItemAttribute, ___function) == 0x18, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ContextMenuItemAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ContextMenuItemAttribute*, "UnityEngine", "ContextMenuItemAttribute");
