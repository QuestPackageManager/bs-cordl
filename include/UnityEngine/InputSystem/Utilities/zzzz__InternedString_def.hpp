#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InternedString)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Utilities::InternedString);
// Type: UnityEngine.InputSystem.Utilities::InternedString
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6671))
// CS Name: ::UnityEngine.InputSystem.Utilities::InternedString
struct CORDL_TYPE InternedString {
public:
  // Declarations
  __declspec(property(get = get_length)) int32_t length;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::InternedString>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::InternedString>*();

  /// @brief Convert operator to "::System::IComparable_1<::UnityEngine::InputSystem::Utilities::InternedString>"
  constexpr operator ::System::IComparable_1<::UnityEngine::InputSystem::Utilities::InternedString>*();

  /// @brief Method get_length, addr 0x2b0fec4, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_length();

  /// @brief Method .ctor, addr 0x2b0fedc, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::StringW text);

  /// @brief Method IsEmpty, addr 0x2b0ff84, size 0x10, virtual false, abstract: false, final false
  inline bool IsEmpty();

  /// @brief Method ToLower, addr 0x2b0ff94, size 0x8, virtual false, abstract: false, final false
  inline ::StringW ToLower();

  /// @brief Method Equals, addr 0x2b0ff9c, size 0x114, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2b100b0, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::InputSystem::Utilities::InternedString other);

  /// @brief Method CompareTo, addr 0x2b100c0, size 0x14, virtual true, abstract: false, final true
  inline int32_t CompareTo(::UnityEngine::InputSystem::Utilities::InternedString other);

  /// @brief Method GetHashCode, addr 0x2b100d4, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x2b096fc, size 0x54, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method op_Equality, addr 0x2b0920c, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::InputSystem::Utilities::InternedString a, ::UnityEngine::InputSystem::Utilities::InternedString b);

  /// @brief Method op_Inequality, addr 0x2b100ec, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::InputSystem::Utilities::InternedString a, ::UnityEngine::InputSystem::Utilities::InternedString b);

  /// @brief Method op_Equality, addr 0x2b100f8, size 0x98, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::InputSystem::Utilities::InternedString a, ::StringW b);

  /// @brief Method op_Inequality, addr 0x2b10190, size 0x98, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::InputSystem::Utilities::InternedString a, ::StringW b);

  /// @brief Method op_Equality, addr 0x2b10228, size 0x94, virtual false, abstract: false, final false
  static inline bool op_Equality(::StringW a, ::UnityEngine::InputSystem::Utilities::InternedString b);

  /// @brief Method op_Inequality, addr 0x2b102bc, size 0x94, virtual false, abstract: false, final false
  static inline bool op_Inequality(::StringW a, ::UnityEngine::InputSystem::Utilities::InternedString b);

  /// @brief Method op_LessThan, addr 0x2b10350, size 0x24, virtual false, abstract: false, final false
  static inline bool op_LessThan(::UnityEngine::InputSystem::Utilities::InternedString left, ::UnityEngine::InputSystem::Utilities::InternedString right);

  /// @brief Method op_GreaterThan, addr 0x2b10374, size 0x28, virtual false, abstract: false, final false
  static inline bool op_GreaterThan(::UnityEngine::InputSystem::Utilities::InternedString left, ::UnityEngine::InputSystem::Utilities::InternedString right);

  /// @brief Method op_Implicit, addr 0x2b09218, size 0x54, virtual false, abstract: false, final false
  static inline ::StringW op_Implicit___StringW(::UnityEngine::InputSystem::Utilities::InternedString str);

  // Ctor Parameters [CppParam { name: "m_StringOriginalCase", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_StringLowerCase", ty: "::StringW", modifiers: "", def_value: None
  // }]
  constexpr InternedString(::StringW m_StringOriginalCase, ::StringW m_StringLowerCase) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr InternedString();

  /// @brief Field m_StringOriginalCase, offset: 0x0, size: 0x8, def value: None
  ::StringW m_StringOriginalCase;

  /// @brief Field m_StringLowerCase, offset: 0x8, size: 0x8, def value: None
  ::StringW m_StringLowerCase;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::InternedString, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::InternedString, m_StringOriginalCase) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::InternedString, m_StringLowerCase) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::InternedString, "UnityEngine.InputSystem.Utilities", "InternedString");
