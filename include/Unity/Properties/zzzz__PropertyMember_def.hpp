#pragma once
// IWYU pragma private; include "Unity/Properties/PropertyMember.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PropertyMember)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
class Attribute;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Unity::Properties {
class IMemberInfo;
}
// Forward declare root types
namespace Unity::Properties {
struct PropertyMember;
}
// Write type traits
MARK_VAL_T(::Unity::Properties::PropertyMember);
// Dependencies
namespace Unity::Properties {
// Is value type: true
// CS Name: Unity.Properties.PropertyMember
struct CORDL_TYPE PropertyMember {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ValueType)) ::System::Type* ValueType;

  /// @brief Convert operator to "::Unity::Properties::IMemberInfo"
  constexpr operator ::Unity::Properties::IMemberInfo*();

  /// @brief Method GetCustomAttributes, addr 0x69d68c4, size 0xc, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* GetCustomAttributes();

  /// @brief Method GetValue, addr 0x69d687c, size 0x24, virtual true, abstract: false, final true
  inline ::System::Object* GetValue(::System::Object* obj);

  /// @brief Method SetValue, addr 0x69d68a0, size 0x24, virtual true, abstract: false, final true
  inline void SetValue(::System::Object* obj, ::System::Object* value);

  /// @brief Method .ctor, addr 0x69d685c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::PropertyInfo* propertyInfo);

  /// @brief Method get_IsReadOnly, addr 0x69d680c, size 0x30, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x69d6804, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_Name();

  /// @brief Method get_ValueType, addr 0x69d683c, size 0x20, virtual true, abstract: false, final true
  inline ::System::Type* get_ValueType();

  /// @brief Convert to "::Unity::Properties::IMemberInfo"
  constexpr ::Unity::Properties::IMemberInfo* i___Unity__Properties__IMemberInfo();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyMember();

  // Ctor Parameters [CppParam { name: "m_PropertyInfo", ty: "::System::Reflection::PropertyInfo*", modifiers: "", def_value: None }, CppParam { name: "_Name_k__BackingField", ty: "::StringW",
  // modifiers: "", def_value: None }]
  constexpr PropertyMember(::System::Reflection::PropertyInfo* m_PropertyInfo, ::StringW _Name_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19350 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_PropertyInfo, offset: 0x0, size: 0x8, def value: None
  ::System::Reflection::PropertyInfo* m_PropertyInfo;

  /// @brief Field <Name>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::StringW _Name_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Properties::PropertyMember, m_PropertyInfo) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::PropertyMember, _Name_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Properties::PropertyMember, 0x10>, "Size mismatch!");

} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::PropertyMember, "Unity.Properties", "PropertyMember");
