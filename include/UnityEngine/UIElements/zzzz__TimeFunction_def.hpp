#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TimeFunction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TimeFunction)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TimeFunction;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::TimeFunction*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::TimeFunction*, "UnityEngine.UIElements", "TimeFunction");
// Dependencies System.MulticastDelegate
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TimeFunction
class CORDL_TYPE TimeFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x726c9b0, size 0x14, virtual true, abstract: false, final false
  inline double_t Invoke();

  static inline ::UnityEngine::UIElements::TimeFunction* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x726c948, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeFunction", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeFunction(TimeFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeFunction", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeFunction(TimeFunction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4690 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::TimeFunction) == 0x80, "Size mismatch!");

} // namespace UnityEngine::UIElements
