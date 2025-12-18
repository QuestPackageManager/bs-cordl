#pragma once
// IWYU pragma private; include "UnityEngine/AnimationEventBlittable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__AnimationEventSource_def.hpp"
#include "UnityEngine/zzzz__AnimatorClipInfo_def.hpp"
#include "UnityEngine/zzzz__AnimatorStateInfo_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationEventBlittable)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class AnimationEvent;
}
namespace UnityEngine {
class GCHandlePool;
}
// Forward declare root types
namespace UnityEngine {
struct AnimationEventBlittable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AnimationEventBlittable);
// Dependencies System.IntPtr, UnityEngine.AnimationEventSource, UnityEngine.AnimatorClipInfo, UnityEngine.AnimatorStateInfo
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.AnimationEventBlittable
struct CORDL_TYPE AnimationEventBlittable {
public:
  // Declarations
  /// @brief Field s_handlePool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_handlePool, put = setStaticF_s_handlePool)) ::UnityEngine::GCHandlePool* s_handlePool;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x6868e10, size 0x18c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method DisposeEvents, addr 0x6868db0, size 0x60, virtual false, abstract: false, final false
  static inline void DisposeEvents(::System::IntPtr animationEventBlittableArray, int32_t size);

  /// @brief Method FreeEventsInternal, addr 0x6868f9c, size 0x3c, virtual false, abstract: false, final false
  static inline void FreeEventsInternal(::System::IntPtr value);

  /// @brief Method FromAnimationEvent, addr 0x68685d8, size 0x1f4, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimationEventBlittable FromAnimationEvent(::UnityEngine::AnimationEvent* animationEvent);

  /// @brief Method FromAnimationEvents, addr 0x6868820, size 0x214, virtual false, abstract: false, final false
  static inline void FromAnimationEvents(::ArrayW<::UnityEngine::AnimationEvent*, ::Array<::UnityEngine::AnimationEvent*>*> animationEvents,
                                         ::UnityEngine::AnimationEventBlittable* animationEventBlittables);

  /// @brief Method PointerToAnimationEvent, addr 0x6868a34, size 0x2c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimationEvent* PointerToAnimationEvent(::System::IntPtr animationEventBlittable);

  /// @brief Method PointerToAnimationEvents, addr 0x6868cec, size 0xc4, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::AnimationEvent*, ::Array<::UnityEngine::AnimationEvent*>*> PointerToAnimationEvents(::System::IntPtr animationEventBlittableArray, int32_t size);

  /// @brief Method ToAnimationEvent, addr 0x6868a60, size 0x28c, virtual false, abstract: false, final false
  static inline ::UnityEngine::AnimationEvent* ToAnimationEvent(::UnityEngine::AnimationEventBlittable animationEventBlittable);

  static inline ::UnityEngine::GCHandlePool* getStaticF_s_handlePool();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  static inline void setStaticF_s_handlePool(::UnityEngine::GCHandlePool* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimationEventBlittable();

  // Ctor Parameters [CppParam { name: "m_Time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_FunctionName", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam
  // { name: "m_StringParameter", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_ObjectReferenceParameter", ty: "::System::IntPtr", modifiers: "", def_value: None },
  // CppParam { name: "m_FloatParameter", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_IntParameter", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_MessageOptions", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Source", ty: "::UnityEngine::AnimationEventSource", modifiers: "", def_value: None }, CppParam { name:
  // "m_StateSender", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AnimatorStateInfo", ty: "::UnityEngine::AnimatorStateInfo", modifiers: "", def_value: None },
  // CppParam { name: "m_AnimatorClipInfo", ty: "::UnityEngine::AnimatorClipInfo", modifiers: "", def_value: None }]
  constexpr AnimationEventBlittable(float_t m_Time, ::System::IntPtr m_FunctionName, ::System::IntPtr m_StringParameter, ::System::IntPtr m_ObjectReferenceParameter, float_t m_FloatParameter,
                                    int32_t m_IntParameter, int32_t m_MessageOptions, ::UnityEngine::AnimationEventSource m_Source, ::System::IntPtr m_StateSender,
                                    ::UnityEngine::AnimatorStateInfo m_AnimatorStateInfo, ::UnityEngine::AnimatorClipInfo m_AnimatorClipInfo) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19980 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  /// @brief Field m_Time, offset: 0x0, size: 0x4, def value: None
  float_t m_Time;

  /// @brief Field m_FunctionName, offset: 0x8, size: 0x8, def value: None
  ::System::IntPtr m_FunctionName;

  /// @brief Field m_StringParameter, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr m_StringParameter;

  /// @brief Field m_ObjectReferenceParameter, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr m_ObjectReferenceParameter;

  /// @brief Field m_FloatParameter, offset: 0x20, size: 0x4, def value: None
  float_t m_FloatParameter;

  /// @brief Field m_IntParameter, offset: 0x24, size: 0x4, def value: None
  int32_t m_IntParameter;

  /// @brief Field m_MessageOptions, offset: 0x28, size: 0x4, def value: None
  int32_t m_MessageOptions;

  /// @brief Field m_Source, offset: 0x2c, size: 0x4, def value: None
  ::UnityEngine::AnimationEventSource m_Source;

  /// @brief Field m_StateSender, offset: 0x30, size: 0x8, def value: None
  ::System::IntPtr m_StateSender;

  /// @brief Field m_AnimatorStateInfo, offset: 0x38, size: 0x24, def value: None
  ::UnityEngine::AnimatorStateInfo m_AnimatorStateInfo;

  /// @brief Field m_AnimatorClipInfo, offset: 0x5c, size: 0x8, def value: None
  ::UnityEngine::AnimatorClipInfo m_AnimatorClipInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AnimationEventBlittable, m_Time) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimationEventBlittable, m_FunctionName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimationEventBlittable, m_StringParameter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimationEventBlittable, m_ObjectReferenceParameter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimationEventBlittable, m_FloatParameter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimationEventBlittable, m_IntParameter) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimationEventBlittable, m_MessageOptions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimationEventBlittable, m_Source) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimationEventBlittable, m_StateSender) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimationEventBlittable, m_AnimatorStateInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AnimationEventBlittable, m_AnimatorClipInfo) == 0x5c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AnimationEventBlittable, 0x68>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimationEventBlittable, "UnityEngine", "AnimationEventBlittable");
