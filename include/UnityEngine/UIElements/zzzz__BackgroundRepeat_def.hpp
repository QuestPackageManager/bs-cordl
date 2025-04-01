#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BackgroundRepeat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__Repeat_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BackgroundRepeat)
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct Repeat;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct BackgroundRepeat;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::BackgroundRepeat);
// Dependencies System.IEquatable`1<T>, UnityEngine.UIElements.Repeat
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.BackgroundRepeat
struct CORDL_TYPE BackgroundRepeat {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::BackgroundRepeat>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::BackgroundRepeat>*();

  /// @brief Method Equals, addr 0x496af78, size 0x88, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x496b000, size 0x28, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::BackgroundRepeat other);

  /// @brief Method GetHashCode, addr 0x496b028, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Initial, addr 0x496af70, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::BackgroundRepeat Initial();

  /// @brief Method ToString, addr 0x496b090, size 0xa0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x496aa70, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Repeat repeatX, ::UnityEngine::UIElements::Repeat repeatY);

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::BackgroundRepeat>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::BackgroundRepeat>* i___System__IEquatable_1___UnityEngine__UIElements__BackgroundRepeat_();

  /// @brief Method op_Equality, addr 0x496af20, size 0x20, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::BackgroundRepeat style1, ::UnityEngine::UIElements::BackgroundRepeat style2);

  /// @brief Method op_Inequality, addr 0x496b070, size 0x20, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::BackgroundRepeat style1, ::UnityEngine::UIElements::BackgroundRepeat style2);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BackgroundRepeat();

  // Ctor Parameters [CppParam { name: "x", ty: "::UnityEngine::UIElements::Repeat", modifiers: "", def_value: None }, CppParam { name: "y", ty: "::UnityEngine::UIElements::Repeat", modifiers: "",
  // def_value: None }]
  constexpr BackgroundRepeat(::UnityEngine::UIElements::Repeat x, ::UnityEngine::UIElements::Repeat y) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5456 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::Repeat x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::UIElements::Repeat y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BackgroundRepeat, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BackgroundRepeat, y) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BackgroundRepeat, 0x8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BackgroundRepeat, "UnityEngine.UIElements", "BackgroundRepeat");
