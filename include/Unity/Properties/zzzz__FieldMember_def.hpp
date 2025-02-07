#pragma once
// IWYU pragma private; include "Unity/Properties/FieldMember.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__IMemberInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(FieldMember)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System {
class Attribute;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Unity::Properties {
struct FieldMember;
}
// Write type traits
MARK_VAL_T(::Unity::Properties::FieldMember);
// Dependencies Unity.Properties.IMemberInfo
namespace Unity::Properties {
// Is value type: true
// CS Name: Unity.Properties.FieldMember
struct CORDL_TYPE FieldMember {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ValueType)) ::System::Type* ValueType;

  /// @brief Convert operator to "::Unity::Properties::IMemberInfo"
  constexpr operator ::Unity::Properties::IMemberInfo*();

  /// @brief Method GetCustomAttributes, addr 0x4916d50, size 0xc, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* GetCustomAttributes();

  /// @brief Method .ctor, addr 0x4916be0, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::FieldInfo* fieldInfo);

  /// @brief Method get_IsReadOnly, addr 0x4916d10, size 0x1c, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x4916d08, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_Name();

  /// @brief Method get_ValueType, addr 0x4916d2c, size 0x24, virtual true, abstract: false, final true
  inline ::System::Type* get_ValueType();

  /// @brief Convert to "::Unity::Properties::IMemberInfo"
  constexpr ::Unity::Properties::IMemberInfo* i___Unity__Properties__IMemberInfo();

  // Ctor Parameters []
  // @brief default ctor
  constexpr FieldMember();

  // Ctor Parameters [CppParam { name: "m_FieldInfo", ty: "::System::Reflection::FieldInfo*", modifiers: "", def_value: None }, CppParam { name: "_Name_k__BackingField", ty: "::StringW", modifiers:
  // "", def_value: None }]
  constexpr FieldMember(::System::Reflection::FieldInfo* m_FieldInfo, ::StringW _Name_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17449 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_FieldInfo, offset: 0x0, size: 0x8, def value: None
  ::System::Reflection::FieldInfo* m_FieldInfo;

  /// @brief Field <Name>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::StringW _Name_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Properties::FieldMember, m_FieldInfo) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::FieldMember, _Name_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Properties::FieldMember, 0x10>, "Size mismatch!");

} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::FieldMember, "Unity.Properties", "FieldMember");
