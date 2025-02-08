#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/Substring.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Substring)
namespace System {
class Object;
}
namespace System {
struct StringComparison;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
struct Substring;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Utilities::Substring);
// Dependencies System.IComparable`1<T>, System.IEquatable`1<T>
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Utilities.Substring
struct CORDL_TYPE Substring {
public:
  // Declarations
  __declspec(property(get = get_Item)) char16_t Item[];

  __declspec(property(get = get_index)) int32_t index;

  __declspec(property(get = get_isEmpty)) bool isEmpty;

  __declspec(property(get = get_length)) int32_t length;

  /// @brief Convert operator to "::System::IComparable_1<::UnityEngine::InputSystem::Utilities::Substring>"
  constexpr operator ::System::IComparable_1<::UnityEngine::InputSystem::Utilities::Substring>*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::Substring>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::Substring>*();

  /// @brief Method Compare, addr 0x45762a4, size 0x28, virtual false, abstract: false, final false
  static inline int32_t Compare(::UnityEngine::InputSystem::Utilities::Substring left, ::UnityEngine::InputSystem::Utilities::Substring right, ::System::StringComparison comparison);

  /// @brief Method CompareTo, addr 0x4576208, size 0x1c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::UnityEngine::InputSystem::Utilities::Substring other);

  /// @brief Method Equals, addr 0x457605c, size 0xb4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4576140, size 0xc8, virtual false, abstract: false, final false
  inline bool Equals(::StringW other);

  /// @brief Method Equals, addr 0x4576224, size 0x80, virtual false, abstract: false, final false
  inline bool Equals(::UnityEngine::InputSystem::Utilities::InternedString other);

  /// @brief Method Equals, addr 0x4576110, size 0x30, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::InputSystem::Utilities::Substring other);

  /// @brief Method GetHashCode, addr 0x4576408, size 0x50, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method StartsWith, addr 0x45762cc, size 0xa0, virtual false, abstract: false, final false
  inline bool StartsWith(::StringW str);

  /// @brief Method Substr, addr 0x457636c, size 0x34, virtual false, abstract: false, final false
  inline ::StringW Substr(int32_t index, int32_t length);

  /// @brief Method ToString, addr 0x45763a0, size 0x68, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x4576014, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::StringW str);

  /// @brief Method .ctor, addr 0x4576034, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW str, int32_t index);

  /// @brief Method .ctor, addr 0x4575eb8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW str, int32_t index, int32_t length);

  /// @brief Method get_Item, addr 0x4576578, size 0x80, virtual false, abstract: false, final false
  inline char16_t get_Item(int32_t index);

  /// @brief Method get_index, addr 0x4576570, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_index();

  /// @brief Method get_isEmpty, addr 0x4576004, size 0x10, virtual false, abstract: false, final false
  inline bool get_isEmpty();

  /// @brief Method get_length, addr 0x4576568, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_length();

  /// @brief Convert to "::System::IComparable_1<::UnityEngine::InputSystem::Utilities::Substring>"
  constexpr ::System::IComparable_1<::UnityEngine::InputSystem::Utilities::Substring>* i___System__IComparable_1___UnityEngine__InputSystem__Utilities__Substring_();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::Substring>"
  constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::Substring>* i___System__IEquatable_1___UnityEngine__InputSystem__Utilities__Substring_();

  /// @brief Method op_Equality, addr 0x45764ec, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::InputSystem::Utilities::InternedString a, ::UnityEngine::InputSystem::Utilities::Substring b);

  /// @brief Method op_Equality, addr 0x4576490, size 0x2c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::InputSystem::Utilities::Substring a, ::UnityEngine::InputSystem::Utilities::InternedString b);

  /// @brief Method op_Equality, addr 0x4576458, size 0x1c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::InputSystem::Utilities::Substring a, ::UnityEngine::InputSystem::Utilities::Substring b);

  /// @brief Method op_Implicit, addr 0x4576550, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::Substring op_Implicit___UnityEngine__InputSystem__Utilities__Substring(::StringW s);

  /// @brief Method op_Inequality, addr 0x457651c, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::InputSystem::Utilities::InternedString a, ::UnityEngine::InputSystem::Utilities::Substring b);

  /// @brief Method op_Inequality, addr 0x45764bc, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::InputSystem::Utilities::Substring a, ::UnityEngine::InputSystem::Utilities::InternedString b);

  /// @brief Method op_Inequality, addr 0x4576474, size 0x1c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::InputSystem::Utilities::Substring a, ::UnityEngine::InputSystem::Utilities::Substring b);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Substring();

  // Ctor Parameters [CppParam { name: "m_String", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Substring(::StringW m_String, int32_t m_Index, int32_t m_Length) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7119 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_String, offset: 0x0, size: 0x8, def value: None
  ::StringW m_String;

  /// @brief Field m_Index, offset: 0x8, size: 0x4, def value: None
  int32_t m_Index;

  /// @brief Field m_Length, offset: 0xc, size: 0x4, def value: None
  int32_t m_Length;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Utilities::Substring, m_String) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::Substring, m_Index) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::Substring, m_Length) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::Substring, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::Substring, "UnityEngine.InputSystem.Utilities", "Substring");
