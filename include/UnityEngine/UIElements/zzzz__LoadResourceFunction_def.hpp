#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/LoadResourceFunction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LoadResourceFunction)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class LoadResourceFunction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::LoadResourceFunction);
// Dependencies System.MulticastDelegate
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.LoadResourceFunction
class CORDL_TYPE LoadResourceFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x6bed0b8, size 0x14, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> Invoke(::StringW pathName, ::System::Type* type, float_t dpiScaling);

  static inline ::UnityEngine::UIElements::LoadResourceFunction* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6bed038, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LoadResourceFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LoadResourceFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LoadResourceFunction(LoadResourceFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LoadResourceFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LoadResourceFunction(LoadResourceFunction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4644 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::LoadResourceFunction, 0x80>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::LoadResourceFunction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::LoadResourceFunction*, "UnityEngine.UIElements", "LoadResourceFunction");
