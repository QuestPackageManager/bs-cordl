#pragma once
// IWYU pragma private; include "Unity/Properties/PropertyPath.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__PropertyPathPart_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyPath)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Properties {
class IProperty;
}
namespace Unity::Properties {
struct PropertyPathPart;
}
namespace Unity::Properties {
struct PropertyPath___c__DisplayClass36_0;
}
// Forward declare root types
namespace Unity::Properties {
struct PropertyPath;
}
namespace Unity::Properties {
struct PropertyPath___c__DisplayClass36_0;
}
// Write type traits
MARK_VAL_T(::Unity::Properties::PropertyPath);
MARK_VAL_T(::Unity::Properties::PropertyPath___c__DisplayClass36_0);
// Dependencies
namespace Unity::Properties {
// Is value type: true
// CS Name: Unity.Properties.PropertyPath/<>c__DisplayClass36_0
struct CORDL_TYPE PropertyPath___c__DisplayClass36_0 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyPath___c__DisplayClass36_0();

  // Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "path",
  // ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "state", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PropertyPath___c__DisplayClass36_0(int32_t index, int32_t length, ::StringW path, int32_t state) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19346 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field index, offset: 0x0, size: 0x4, def value: None
  int32_t index;

  /// @brief Field length, offset: 0x4, size: 0x4, def value: None
  int32_t length;

  /// @brief Field path, offset: 0x8, size: 0x8, def value: None
  ::StringW path;

  /// @brief Field state, offset: 0x10, size: 0x4, def value: None
  int32_t state;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Properties::PropertyPath___c__DisplayClass36_0, index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::PropertyPath___c__DisplayClass36_0, length) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::PropertyPath___c__DisplayClass36_0, path) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::PropertyPath___c__DisplayClass36_0, state) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Properties::PropertyPath___c__DisplayClass36_0, 0x18>, "Size mismatch!");

} // namespace Unity::Properties
// Dependencies Unity.Properties.PropertyPathPart
namespace Unity::Properties {
// Is value type: true
// CS Name: Unity.Properties.PropertyPath
struct CORDL_TYPE PropertyPath {
public:
  // Declarations
  using __c__DisplayClass36_0 = ::Unity::Properties::PropertyPath___c__DisplayClass36_0;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_Item)) ::Unity::Properties::PropertyPathPart Item[];

  __declspec(property(get = get_Length)) int32_t Length;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Properties::PropertyPath>"
  constexpr operator ::System::IEquatable_1<::Unity::Properties::PropertyPath>*();

  /// @brief Method AppendIndex, addr 0x69d57a0, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Properties::PropertyPath AppendIndex(::ByRef<::Unity::Properties::PropertyPath> path, int32_t index);

  /// @brief Method AppendPart, addr 0x69d5424, size 0x37c, virtual false, abstract: false, final false
  static inline ::Unity::Properties::PropertyPath AppendPart(::ByRef<::Unity::Properties::PropertyPath> path, ::ByRef<::Unity::Properties::PropertyPathPart> part);

  /// @brief Method AppendProperty, addr 0x69d57fc, size 0x2bc, virtual false, abstract: false, final false
  static inline ::Unity::Properties::PropertyPath AppendProperty(::ByRef<::Unity::Properties::PropertyPath> path, ::Unity::Properties::IProperty* property);

  /// @brief Method AppendToBuilder, addr 0x69d6148, size 0xb0, virtual false, abstract: false, final false
  static inline void AppendToBuilder(::ByRef<::Unity::Properties::PropertyPathPart> part, ::System::Text::StringBuilder* builder);

  /// @brief Method Combine, addr 0x69d4fa4, size 0x394, virtual false, abstract: false, final false
  static inline ::Unity::Properties::PropertyPath Combine(::ByRef<::Unity::Properties::PropertyPath> path, ::ByRef<::Unity::Properties::PropertyPath> pathToAppend);

  /// @brief Method ConstructFromPath, addr 0x69d3ba8, size 0x10fc, virtual false, abstract: false, final false
  static inline ::Unity::Properties::PropertyPath ConstructFromPath(::StringW path);

  /// @brief Method Equals, addr 0x69d64c0, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x69d63d0, size 0x9c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Properties::PropertyPath other);

  /// @brief Method FromIndex, addr 0x69d4f50, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Properties::PropertyPath FromIndex(int32_t index);

  /// @brief Method GetHashCode, addr 0x69d6554, size 0xf0, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetParts, addr 0x69d5338, size 0xec, virtual false, abstract: false, final false
  static inline void GetParts(::ByRef<::Unity::Properties::PropertyPath> path, ::System::Collections::Generic::List_1<::Unity::Properties::PropertyPathPart>* parts);

  /// @brief Method Pop, addr 0x69d5ab8, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::Properties::PropertyPath Pop(::ByRef<::Unity::Properties::PropertyPath> path);

  /// @brief Method SubPath, addr 0x69d5af4, size 0x4c4, virtual false, abstract: false, final false
  static inline ::Unity::Properties::PropertyPath SubPath(::ByRef<::Unity::Properties::PropertyPath> path, int32_t startIndex, int32_t length);

  /// @brief Method ToString, addr 0x69d5fb8, size 0x190, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method <ConstructFromPath>g__ReadNext|36_1, addr 0x69d6254, size 0x148, virtual false, abstract: false, final false
  static inline void _ConstructFromPath_g__ReadNext_36_1(::ByRef<::Unity::Properties::PropertyPath___c__DisplayClass36_0> _cordl_fixed_empty_name_whitespace);

  /// @brief Method <ConstructFromPath>g__TrimStart|36_0, addr 0x69d61f8, size 0x5c, virtual false, abstract: false, final false
  static inline void _ConstructFromPath_g__TrimStart_36_0(::ByRef<::Unity::Properties::PropertyPath___c__DisplayClass36_0> _cordl_fixed_empty_name_whitespace);

  /// @brief Method .ctor, addr 0x69d4ca4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::Unity::Properties::PropertyPathPart> part);

  /// @brief Method .ctor, addr 0x69d4ccc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::Unity::Properties::PropertyPathPart> part0, ::ByRef<::Unity::Properties::PropertyPathPart> part1);

  /// @brief Method .ctor, addr 0x69d4cf8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::Unity::Properties::PropertyPathPart> part0, ::ByRef<::Unity::Properties::PropertyPathPart> part1, ::ByRef<::Unity::Properties::PropertyPathPart> part2);

  /// @brief Method .ctor, addr 0x69d4d28, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::Unity::Properties::PropertyPathPart> part0, ::ByRef<::Unity::Properties::PropertyPathPart> part1, ::ByRef<::Unity::Properties::PropertyPathPart> part2,
                    ::ByRef<::Unity::Properties::PropertyPathPart> part3);

  /// @brief Method .ctor, addr 0x69d4d58, size 0x1f8, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::Unity::Properties::PropertyPathPart>* parts);

  /// @brief Method .ctor, addr 0x69d3b3c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::StringW path);

  /// @brief Method get_IsEmpty, addr 0x69d3a40, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Method get_Item, addr 0x69d3a50, size 0xec, virtual false, abstract: false, final false
  inline ::Unity::Properties::PropertyPathPart get_Item(int32_t index);

  /// @brief Method get_Length, addr 0x69d3a38, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Properties::PropertyPath>"
  constexpr ::System::IEquatable_1<::Unity::Properties::PropertyPath>* i___System__IEquatable_1___Unity__Properties__PropertyPath_();

  /// @brief Method op_Equality, addr 0x69d639c, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Equality(::Unity::Properties::PropertyPath lhs, ::Unity::Properties::PropertyPath rhs);

  /// @brief Method op_Inequality, addr 0x69d646c, size 0x54, virtual false, abstract: false, final false
  static inline bool op_Inequality(::Unity::Properties::PropertyPath lhs, ::Unity::Properties::PropertyPath rhs);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyPath();

  // Ctor Parameters [CppParam { name: "m_Part0", ty: "::Unity::Properties::PropertyPathPart", modifiers: "", def_value: None }, CppParam { name: "m_Part1", ty:
  // "::Unity::Properties::PropertyPathPart", modifiers: "", def_value: None }, CppParam { name: "m_Part2", ty: "::Unity::Properties::PropertyPathPart", modifiers: "", def_value: None }, CppParam {
  // name: "m_Part3", ty: "::Unity::Properties::PropertyPathPart", modifiers: "", def_value: None }, CppParam { name: "m_AdditionalParts", ty:
  // "::ArrayW<::Unity::Properties::PropertyPathPart,::Array<::Unity::Properties::PropertyPathPart>*>", modifiers: "", def_value: None }, CppParam { name: "_Length_k__BackingField", ty: "int32_t",
  // modifiers: "", def_value: None }]
  constexpr PropertyPath(::Unity::Properties::PropertyPathPart m_Part0, ::Unity::Properties::PropertyPathPart m_Part1, ::Unity::Properties::PropertyPathPart m_Part2,
                         ::Unity::Properties::PropertyPathPart m_Part3, ::ArrayW<::Unity::Properties::PropertyPathPart, ::Array<::Unity::Properties::PropertyPathPart>*> m_AdditionalParts,
                         int32_t _Length_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19347 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x90 };

  /// @brief Field k_InlineCount offset 0xffffffff size 0x4
  static constexpr int32_t k_InlineCount{ static_cast<int32_t>(0x4) };

  /// @brief Field m_Part0, offset: 0x0, size: 0x20, def value: None
  ::Unity::Properties::PropertyPathPart m_Part0;

  /// @brief Field m_Part1, offset: 0x20, size: 0x20, def value: None
  ::Unity::Properties::PropertyPathPart m_Part1;

  /// @brief Field m_Part2, offset: 0x40, size: 0x20, def value: None
  ::Unity::Properties::PropertyPathPart m_Part2;

  /// @brief Field m_Part3, offset: 0x60, size: 0x20, def value: None
  ::Unity::Properties::PropertyPathPart m_Part3;

  /// @brief Field m_AdditionalParts, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::Unity::Properties::PropertyPathPart, ::Array<::Unity::Properties::PropertyPathPart>*> m_AdditionalParts;

  /// @brief Field <Length>k__BackingField, offset: 0x88, size: 0x4, def value: None
  int32_t _Length_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Properties::PropertyPath, m_Part0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::PropertyPath, m_Part1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::PropertyPath, m_Part2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::PropertyPath, m_Part3) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::PropertyPath, m_AdditionalParts) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::PropertyPath, _Length_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Properties::PropertyPath, 0x90>, "Size mismatch!");

} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::PropertyPath, "Unity.Properties", "PropertyPath");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::PropertyPath___c__DisplayClass36_0, "Unity.Properties", "PropertyPath/<>c__DisplayClass36_0");
