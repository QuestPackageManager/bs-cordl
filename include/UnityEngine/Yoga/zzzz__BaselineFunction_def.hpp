#pragma once
// IWYU pragma private; include "UnityEngine/Yoga/BaselineFunction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BaselineFunction)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Yoga {
class YogaNode;
}
// Forward declare root types
namespace UnityEngine::Yoga {
class BaselineFunction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Yoga::BaselineFunction);
// Dependencies System.MulticastDelegate
namespace UnityEngine::Yoga {
// Is value type: false
// CS Name: UnityEngine.Yoga.BaselineFunction
class CORDL_TYPE BaselineFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x4969674, size 0x14, virtual true, abstract: false, final false
  inline float_t Invoke(::UnityEngine::Yoga::YogaNode* node, float_t width, float_t height);

  static inline ::UnityEngine::Yoga::BaselineFunction* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4969570, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaselineFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaselineFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaselineFunction(BaselineFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaselineFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaselineFunction(BaselineFunction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5421 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::BaselineFunction, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Yoga
NEED_NO_BOX(::UnityEngine::Yoga::BaselineFunction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::BaselineFunction*, "UnityEngine.Yoga", "BaselineFunction");
