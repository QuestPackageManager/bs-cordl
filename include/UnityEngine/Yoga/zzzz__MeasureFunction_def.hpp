#pragma once
// IWYU pragma private; include "UnityEngine/Yoga/MeasureFunction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MeasureFunction)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Yoga {
struct YogaMeasureMode;
}
namespace UnityEngine::Yoga {
class YogaNode;
}
namespace UnityEngine::Yoga {
struct YogaSize;
}
// Forward declare root types
namespace UnityEngine::Yoga {
class MeasureFunction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Yoga::MeasureFunction);
// Dependencies System.MulticastDelegate
namespace UnityEngine::Yoga {
// Is value type: false
// CS Name: UnityEngine.Yoga.MeasureFunction
class CORDL_TYPE MeasureFunction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x496bff0, size 0x14, virtual true, abstract: false, final false
  inline ::UnityEngine::Yoga::YogaSize Invoke(::UnityEngine::Yoga::YogaNode* node, float_t width, ::UnityEngine::Yoga::YogaMeasureMode widthMode, float_t height,
                                              ::UnityEngine::Yoga::YogaMeasureMode heightMode);

  static inline ::UnityEngine::Yoga::MeasureFunction* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x496beec, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeasureFunction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeasureFunction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeasureFunction(MeasureFunction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeasureFunction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeasureFunction(MeasureFunction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5428 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::MeasureFunction, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Yoga
NEED_NO_BOX(::UnityEngine::Yoga::MeasureFunction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::MeasureFunction*, "UnityEngine.Yoga", "MeasureFunction");
