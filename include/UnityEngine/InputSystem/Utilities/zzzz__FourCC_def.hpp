#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/FourCC.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FourCC)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Utilities::FourCC);
// Dependencies System.IEquatable`1<T>
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Utilities.FourCC
struct CORDL_TYPE FourCC {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::FourCC>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::FourCC>*();

  /// @brief Method Equals, addr 0x4568b0c, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4568afc, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::InputSystem::Utilities::FourCC other);

  /// @brief Method FromInt32, addr 0x4568ba4, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC FromInt32(int32_t i);

  /// @brief Method GetHashCode, addr 0x4568b84, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToInt32, addr 0x4568bac, size 0x4, virtual false, abstract: false, final false
  static inline int32_t ToInt32(::UnityEngine::InputSystem::Utilities::FourCC fourCC);

  /// @brief Method ToString, addr 0x456894c, size 0x1b0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x4563e50, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(char16_t a, char16_t b, char16_t c, char16_t d);

  /// @brief Method .ctor, addr 0x45687d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t code);

  /// @brief Method .ctor, addr 0x45687d8, size 0x168, virtual false, abstract: false, final false
  inline void _ctor(::StringW str);

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::FourCC>"
  constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::FourCC>* i___System__IEquatable_1___UnityEngine__InputSystem__Utilities__FourCC_();

  /// @brief Method op_Equality, addr 0x4568b8c, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::InputSystem::Utilities::FourCC left, ::UnityEngine::InputSystem::Utilities::FourCC right);

  /// @brief Method op_Implicit, addr 0x4568944, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC op_Implicit___UnityEngine__InputSystem__Utilities__FourCC(int32_t i);

  /// @brief Method op_Implicit, addr 0x4568940, size 0x4, virtual false, abstract: false, final false
  static inline int32_t op_Implicit_int32_t(::UnityEngine::InputSystem::Utilities::FourCC fourCC);

  /// @brief Method op_Inequality, addr 0x4568b98, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::InputSystem::Utilities::FourCC left, ::UnityEngine::InputSystem::Utilities::FourCC right);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FourCC();

  // Ctor Parameters [CppParam { name: "m_Code", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FourCC(int32_t m_Code) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7077 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field m_Code, offset: 0x0, size: 0x4, def value: None
  int32_t m_Code;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Utilities::FourCC, m_Code) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::FourCC, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::FourCC, "UnityEngine.InputSystem.Utilities", "FourCC");
