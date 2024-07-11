#pragma once
// IWYU pragma private; include "UnityEngine/Internal/DefaultValueAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultValueAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Internal {
class DefaultValueAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Internal::DefaultValueAttribute);
// Type: UnityEngine.Internal::DefaultValueAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Internal {
// Is value type: false
// CS Name: ::UnityEngine.Internal::DefaultValueAttribute*
class CORDL_TYPE DefaultValueAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field DefaultValue, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_DefaultValue, put = __cordl_internal_set_DefaultValue))::System::Object* DefaultValue;

  __declspec(property(get = get_Value))::System::Object* Value;

  /// @brief Method Equals, addr 0x3460e50, size 0xb8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x3460f08, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::Internal::DefaultValueAttribute* New_ctor(::StringW value);

  constexpr ::System::Object*& __cordl_internal_get_DefaultValue();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_DefaultValue() const;

  constexpr void __cordl_internal_set_DefaultValue(::System::Object* value);

  /// @brief Method .ctor, addr 0x3460e20, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  /// @brief Method get_Value, addr 0x3460e48, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultValueAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultValueAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultValueAttribute(DefaultValueAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultValueAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultValueAttribute(DefaultValueAttribute const&) = delete;

  /// @brief Field DefaultValue, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___DefaultValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Internal::DefaultValueAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Internal::DefaultValueAttribute, ___DefaultValue) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Internal
NEED_NO_BOX(::UnityEngine::Internal::DefaultValueAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Internal::DefaultValueAttribute*, "UnityEngine.Internal", "DefaultValueAttribute");
