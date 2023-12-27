#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10323))
// CS Name: ::UnityEngine.Internal::DefaultValueAttribute*
class CORDL_TYPE DefaultValueAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field DefaultValue, offset 0x10, size 0x8
  __declspec(property(get = __get_DefaultValue, put = __set_DefaultValue))::System::Object* DefaultValue;

  __declspec(property(get = get_Value))::System::Object* Value;

  constexpr ::System::Object*& __get_DefaultValue();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_DefaultValue() const;

  constexpr void __set_DefaultValue(::System::Object* value);

  static inline ::UnityEngine::Internal::DefaultValueAttribute* New_ctor(::StringW value);

  /// @brief Method .ctor addr 0x2ce9e8c size 0x28 virtual false final false
  inline void _ctor(::StringW value);

  /// @brief Method get_Value addr 0x2ce9eb4 size 0x8 virtual false final false
  inline ::System::Object* get_Value();

  /// @brief Method Equals addr 0x2ce9ebc size 0xb8 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2ce9f74 size 0x24 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "DefaultValueAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultValueAttribute(DefaultValueAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultValueAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultValueAttribute(DefaultValueAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultValueAttribute();

public:
  /// @brief Field DefaultValue, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___DefaultValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Internal::DefaultValueAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Internal
NEED_NO_BOX(::UnityEngine::Internal::DefaultValueAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Internal::DefaultValueAttribute*, "UnityEngine.Internal", "DefaultValueAttribute");
