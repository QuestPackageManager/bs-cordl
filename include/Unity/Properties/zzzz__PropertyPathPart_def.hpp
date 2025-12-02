#pragma once
// IWYU pragma private; include "Unity/Properties/PropertyPathPart.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__PropertyPathPartKind_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyPathPart)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Properties {
struct PropertyPathPartKind;
}
// Forward declare root types
namespace Unity::Properties {
struct PropertyPathPart;
}
// Write type traits
MARK_VAL_T(::Unity::Properties::PropertyPathPart);
// Dependencies Unity.Properties.PropertyPathPartKind
namespace Unity::Properties {
// Is value type: true
// CS Name: Unity.Properties.PropertyPathPart
struct CORDL_TYPE PropertyPathPart {
public:
  // Declarations
  __declspec(property(get = get_Index)) int32_t Index;

  __declspec(property(get = get_IsIndex)) bool IsIndex;

  __declspec(property(get = get_IsName)) bool IsName;

  __declspec(property(get = get_Key)) ::System::Object* Key;

  __declspec(property(get = get_Kind)) ::Unity::Properties::PropertyPathPartKind Kind;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Properties::PropertyPathPart>"
  constexpr operator ::System::IEquatable_1<::Unity::Properties::PropertyPathPart>*();

  /// @brief Method CheckKind, addr 0x696a874, size 0x48, virtual false, abstract: false, final false
  inline void CheckKind(::Unity::Properties::PropertyPathPartKind type);

  /// @brief Method Equals, addr 0x696aa80, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x696a9f4, size 0x8c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Properties::PropertyPathPart other);

  /// @brief Method GetHashCode, addr 0x696ab0c, size 0xa8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x696a8bc, size 0x138, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x696a820, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t index);

  /// @brief Method .ctor, addr 0x696a848, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* key);

  /// @brief Method .ctor, addr 0x696a808, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method get_Index, addr 0x696a770, size 0x4c, virtual false, abstract: false, final false
  inline int32_t get_Index();

  /// @brief Method get_IsIndex, addr 0x696a710, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsIndex();

  /// @brief Method get_IsName, addr 0x696a700, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsName();

  /// @brief Method get_Key, addr 0x696a7bc, size 0x4c, virtual false, abstract: false, final false
  inline ::System::Object* get_Key();

  /// @brief Method get_Kind, addr 0x696a720, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Properties::PropertyPathPartKind get_Kind();

  /// @brief Method get_Name, addr 0x696a728, size 0x48, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Properties::PropertyPathPart>"
  constexpr ::System::IEquatable_1<::Unity::Properties::PropertyPathPart>* i___System__IEquatable_1___Unity__Properties__PropertyPathPart_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyPathPart();

  // Ctor Parameters [CppParam { name: "m_Kind", ty: "::Unity::Properties::PropertyPathPartKind", modifiers: "", def_value: None }, CppParam { name: "m_Name", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Key", ty: "::System::Object*", modifiers: "", def_value: None }]
  constexpr PropertyPathPart(::Unity::Properties::PropertyPathPartKind m_Kind, ::StringW m_Name, int32_t m_Index, ::System::Object* m_Key) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19319 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_Kind, offset: 0x0, size: 0x4, def value: None
  ::Unity::Properties::PropertyPathPartKind m_Kind;

  /// @brief Field m_Name, offset: 0x8, size: 0x8, def value: None
  ::StringW m_Name;

  /// @brief Field m_Index, offset: 0x10, size: 0x4, def value: None
  int32_t m_Index;

  /// @brief Field m_Key, offset: 0x18, size: 0x8, def value: None
  ::System::Object* m_Key;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Properties::PropertyPathPart, m_Kind) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::PropertyPathPart, m_Name) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::PropertyPathPart, m_Index) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::PropertyPathPart, m_Key) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Properties::PropertyPathPart, 0x20>, "Size mismatch!");

} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::PropertyPathPart, "Unity.Properties", "PropertyPathPart");
