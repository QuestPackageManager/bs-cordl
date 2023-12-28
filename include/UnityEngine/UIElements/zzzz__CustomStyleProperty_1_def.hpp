#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomStyleProperty_1)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> struct CustomStyleProperty_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::UIElements::CustomStyleProperty_1);
// Type: UnityEngine.UIElements::CustomStyleProperty`1
// SizeInfo { instance_size: 8, native_size: 24, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7306))
// CS Name: ::UnityEngine.UIElements::CustomStyleProperty`1<T>
struct CORDL_TYPE CustomStyleProperty_1 {
public:
  // Declarations
  __declspec(property(get = get_name, put = set_name))::StringW name;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::CustomStyleProperty_1<T>>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::CustomStyleProperty_1<T>>*();

  /// @brief Method get_name addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::StringW get_name();

  /// @brief Method set_name addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_name(::StringW value);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::StringW propertyName);

  /// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool Equals(::UnityEngine::UIElements::CustomStyleProperty_1<T> other);

  /// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "_name_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr CustomStyleProperty_1(::StringW _name_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomStyleProperty_1();

  /// @brief Field <name>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::StringW _name_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::CustomStyleProperty_1, "UnityEngine.UIElements", "CustomStyleProperty`1");
