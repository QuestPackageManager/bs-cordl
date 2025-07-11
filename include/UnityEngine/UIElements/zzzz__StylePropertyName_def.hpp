#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StylePropertyName.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StylePropertyName)
namespace System {
class Object;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StylePropertyName);
// Dependencies System.IEquatable`1<T>, UnityEngine.UIElements.StyleSheets.StylePropertyId
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.StylePropertyName
struct CORDL_TYPE StylePropertyName {
public:
  // Declarations
  __declspec(property(get = get_id)) ::UnityEngine::UIElements::StyleSheets::StylePropertyId id;

  __declspec(property(get = get_name)) ::StringW name;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StylePropertyName>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::StylePropertyName>*();

  /// @brief Method Equals, addr 0x4a8c828, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x4a8c8a0, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::StylePropertyName other);

  /// @brief Method GetHashCode, addr 0x4a8c820, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method StylePropertyIdFromString, addr 0x4a8c664, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleSheets::StylePropertyId StylePropertyIdFromString(::StringW name);

  /// @brief Method ToString, addr 0x4a8c8b0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x4a8c7b0, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method .ctor, addr 0x4a8c704, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::StyleSheets::StylePropertyId stylePropertyId);

  /// @brief Method get_id, addr 0x4a8c654, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::StyleSheets::StylePropertyId get_id();

  /// @brief Method get_name, addr 0x4a8c65c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StylePropertyName>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StylePropertyName>* i___System__IEquatable_1___UnityEngine__UIElements__StylePropertyName_();

  /// @brief Method op_Equality, addr 0x4a8c7e4, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::StylePropertyName lhs, ::UnityEngine::UIElements::StylePropertyName rhs);

  /// @brief Method op_Implicit, addr 0x4a8c7fc, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StylePropertyName op_Implicit___UnityEngine__UIElements__StylePropertyName(::StringW name);

  /// @brief Method op_Inequality, addr 0x4a8c7f0, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::StylePropertyName lhs, ::UnityEngine::UIElements::StylePropertyName rhs);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyName();

  // Ctor Parameters [CppParam { name: "_id_k__BackingField", ty: "::UnityEngine::UIElements::StyleSheets::StylePropertyId", modifiers: "", def_value: None }, CppParam { name: "_name_k__BackingField",
  // ty: "::StringW", modifiers: "", def_value: None }]
  constexpr StylePropertyName(::UnityEngine::UIElements::StyleSheets::StylePropertyId _id_k__BackingField, ::StringW _name_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6166 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field <id>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleSheets::StylePropertyId _id_k__BackingField;

  /// @brief Field <name>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::StringW _name_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StylePropertyName, _id_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StylePropertyName, _name_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StylePropertyName, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StylePropertyName, "UnityEngine.UIElements", "StylePropertyName");
