#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutDelegates.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LayoutDelegates)
namespace System {
struct IntPtr;
}
namespace UnityEngine::UIElements::Layout {
class InvokeBaselineFunctionDelegate;
}
namespace UnityEngine::UIElements::Layout {
class InvokeMeasureFunctionDelegate;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutMeasureMode;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutNode;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutSize;
}
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
class LayoutDelegates;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Layout::LayoutDelegates);
// Dependencies System.IntPtr, System.Object, Unity.Profiling.ProfilerMarker
namespace UnityEngine::UIElements::Layout {
// Is value type: false
// CS Name: UnityEngine.UIElements.Layout.LayoutDelegates
class CORDL_TYPE LayoutDelegates : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_InvokeBaselineDelegate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_InvokeBaselineDelegate,
                      put = setStaticF_s_InvokeBaselineDelegate)) ::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate* s_InvokeBaselineDelegate;

  /// @brief Field s_InvokeBaselineFunction, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_InvokeBaselineFunction, put = setStaticF_s_InvokeBaselineFunction)) ::System::IntPtr s_InvokeBaselineFunction;

  /// @brief Field s_InvokeBaselineFunctionMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_InvokeBaselineFunctionMarker, put = setStaticF_s_InvokeBaselineFunctionMarker)) ::Unity::Profiling::ProfilerMarker s_InvokeBaselineFunctionMarker;

  /// @brief Field s_InvokeMeasureDelegate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_InvokeMeasureDelegate, put = setStaticF_s_InvokeMeasureDelegate)) ::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate* s_InvokeMeasureDelegate;

  /// @brief Field s_InvokeMeasureFunction, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_InvokeMeasureFunction, put = setStaticF_s_InvokeMeasureFunction)) ::System::IntPtr s_InvokeMeasureFunction;

  /// @brief Field s_InvokeMeasureFunctionMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_InvokeMeasureFunctionMarker, put = setStaticF_s_InvokeMeasureFunctionMarker)) ::Unity::Profiling::ProfilerMarker s_InvokeMeasureFunctionMarker;

  /// @brief Method InvokeBaselineFunction, addr 0x6ace1f4, size 0x174, virtual false, abstract: false, final false
  static inline float_t InvokeBaselineFunction(::ByRef<::UnityEngine::UIElements::Layout::LayoutNode> node, float_t width, float_t height);

  /// @brief Method InvokeMeasureFunction, addr 0x6acdf60, size 0x294, virtual false, abstract: false, final false
  static inline void InvokeMeasureFunction(::ByRef<::UnityEngine::UIElements::Layout::LayoutNode> node, float_t width, ::UnityEngine::UIElements::Layout::LayoutMeasureMode widthMode, float_t height,
                                           ::UnityEngine::UIElements::Layout::LayoutMeasureMode heightMode, ::ByRef<::System::IntPtr> exception,
                                           ::ByRef<::UnityEngine::UIElements::Layout::LayoutSize> result);

  static inline ::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate* getStaticF_s_InvokeBaselineDelegate();

  static inline ::System::IntPtr getStaticF_s_InvokeBaselineFunction();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_InvokeBaselineFunctionMarker();

  static inline ::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate* getStaticF_s_InvokeMeasureDelegate();

  static inline ::System::IntPtr getStaticF_s_InvokeMeasureFunction();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_InvokeMeasureFunctionMarker();

  static inline void setStaticF_s_InvokeBaselineDelegate(::UnityEngine::UIElements::Layout::InvokeBaselineFunctionDelegate* value);

  static inline void setStaticF_s_InvokeBaselineFunction(::System::IntPtr value);

  static inline void setStaticF_s_InvokeBaselineFunctionMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_InvokeMeasureDelegate(::UnityEngine::UIElements::Layout::InvokeMeasureFunctionDelegate* value);

  static inline void setStaticF_s_InvokeMeasureFunction(::System::IntPtr value);

  static inline void setStaticF_s_InvokeMeasureFunctionMarker(::Unity::Profiling::ProfilerMarker value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutDelegates();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LayoutDelegates", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LayoutDelegates(LayoutDelegates&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LayoutDelegates", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LayoutDelegates(LayoutDelegates const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5401 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::LayoutDelegates, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
NEED_NO_BOX(::UnityEngine::UIElements::Layout::LayoutDelegates);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::LayoutDelegates*, "UnityEngine.UIElements.Layout", "LayoutDelegates");
