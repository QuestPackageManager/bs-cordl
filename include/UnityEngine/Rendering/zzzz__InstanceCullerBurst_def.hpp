#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceCullerBurst.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InstanceCullerBurst)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
struct BatchCullingContext;
}
namespace UnityEngine::Rendering {
struct FrustumPlaneCuller;
}
namespace UnityEngine::Rendering {
class InstanceCullerBurst_SetupCullingJobInput_0000014D$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class InstanceCullerBurst_SetupCullingJobInput_0000014D$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
struct ReceiverPlanes;
}
namespace UnityEngine::Rendering {
struct ReceiverSphereCuller;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class InstanceCullerBurst;
}
namespace UnityEngine::Rendering {
class InstanceCullerBurst_SetupCullingJobInput_0000014D$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class InstanceCullerBurst_SetupCullingJobInput_0000014D$PostfixBurstDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::InstanceCullerBurst*);
MARK_REF_T(::UnityEngine::Rendering::InstanceCullerBurst_SetupCullingJobInput_0000014D$BurstDirectCall*);
MARK_REF_T(::UnityEngine::Rendering::InstanceCullerBurst_SetupCullingJobInput_0000014D$PostfixBurstDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceCullerBurst*, "UnityEngine.Rendering", "InstanceCullerBurst");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceCullerBurst_SetupCullingJobInput_0000014D$BurstDirectCall*, "UnityEngine.Rendering",
                    "InstanceCullerBurst/SetupCullingJobInput_0000014D$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceCullerBurst_SetupCullingJobInput_0000014D$PostfixBurstDelegate*, "UnityEngine.Rendering",
                    "InstanceCullerBurst/SetupCullingJobInput_0000014D$PostfixBurstDelegate");
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceCullerBurst/SetupCullingJobInput_0000014D$PostfixBurstDelegate
class CORDL_TYPE InstanceCullerBurst_SetupCullingJobInput_0000014D$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6c4e9c0, size 0xac, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(float_t lodBias, float_t meshLodThreshold, ::UnityEngine::Rendering::BatchCullingContext* context,
                                             ::UnityEngine::Rendering::ReceiverPlanes* receiverPlanes, ::UnityEngine::Rendering::ReceiverSphereCuller* receiverSphereCuller,
                                             ::UnityEngine::Rendering::FrustumPlaneCuller* frustumPlaneCuller, float_t* screenRelativeMetric, float_t* meshLodConstant,
                                             ::System::AsyncCallback* _cordl_fixed_empty_name_whitespace, ::System::Object* _cordl_fixed_empty_name_whitespace_param_9);

  /// @brief Method EndInvoke, addr 0x6c4ea6c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x6c4e9ac, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(float_t lodBias, float_t meshLodThreshold, ::UnityEngine::Rendering::BatchCullingContext* context, ::UnityEngine::Rendering::ReceiverPlanes* receiverPlanes,
                     ::UnityEngine::Rendering::ReceiverSphereCuller* receiverSphereCuller, ::UnityEngine::Rendering::FrustumPlaneCuller* frustumPlaneCuller, float_t* screenRelativeMetric,
                     float_t* meshLodConstant);

  static inline ::UnityEngine::Rendering::InstanceCullerBurst_SetupCullingJobInput_0000014D$PostfixBurstDelegate* New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                                           ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

  /// @brief Method .ctor, addr 0x6c4e940, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* _cordl_fixed_empty_name_whitespace, ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceCullerBurst_SetupCullingJobInput_0000014D$PostfixBurstDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstanceCullerBurst_SetupCullingJobInput_0000014D$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstanceCullerBurst_SetupCullingJobInput_0000014D$PostfixBurstDelegate(InstanceCullerBurst_SetupCullingJobInput_0000014D$PostfixBurstDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstanceCullerBurst_SetupCullingJobInput_0000014D$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstanceCullerBurst_SetupCullingJobInput_0000014D$PostfixBurstDelegate(InstanceCullerBurst_SetupCullingJobInput_0000014D$PostfixBurstDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18179 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceCullerBurst_SetupCullingJobInput_0000014D$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceCullerBurst/SetupCullingJobInput_0000014D$BurstDirectCall
class CORDL_TYPE InstanceCullerBurst_SetupCullingJobInput_0000014D$BurstDirectCall : public ::System::Object {
public:
  // Declarations
  /// @brief Field Pointer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Pointer, put = setStaticF_Pointer)) ::System::IntPtr Pointer;

  /// @brief Method GetFunctionPointer, addr 0x6c4eb84, size 0x18, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFunctionPointer();

  /// [BurstDiscard]
  /// @brief Method GetFunctionPointerDiscard, addr 0x6c4ea78, size 0x10c, virtual false, abstract: false, final false
  static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr> _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x6c4e6f4, size 0x110, virtual false, abstract: false, final false
  static inline void Invoke(float_t lodBias, float_t meshLodThreshold, ::UnityEngine::Rendering::BatchCullingContext* context, ::UnityEngine::Rendering::ReceiverPlanes* receiverPlanes,
                            ::UnityEngine::Rendering::ReceiverSphereCuller* receiverSphereCuller, ::UnityEngine::Rendering::FrustumPlaneCuller* frustumPlaneCuller, float_t* screenRelativeMetric,
                            float_t* meshLodConstant);

  static inline ::System::IntPtr getStaticF_Pointer();

  static inline void setStaticF_Pointer(::System::IntPtr value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceCullerBurst_SetupCullingJobInput_0000014D$BurstDirectCall();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstanceCullerBurst_SetupCullingJobInput_0000014D$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstanceCullerBurst_SetupCullingJobInput_0000014D$BurstDirectCall(InstanceCullerBurst_SetupCullingJobInput_0000014D$BurstDirectCall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstanceCullerBurst_SetupCullingJobInput_0000014D$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstanceCullerBurst_SetupCullingJobInput_0000014D$BurstDirectCall(InstanceCullerBurst_SetupCullingJobInput_0000014D$BurstDirectCall const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18180 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceCullerBurst_SetupCullingJobInput_0000014D$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
// [BurstCompile]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceCullerBurst
class CORDL_TYPE InstanceCullerBurst : public ::System::Object {
public:
  // Declarations
  using SetupCullingJobInput_0000014D$BurstDirectCall = ::UnityEngine::Rendering::InstanceCullerBurst_SetupCullingJobInput_0000014D$BurstDirectCall;

  using SetupCullingJobInput_0000014D$PostfixBurstDelegate = ::UnityEngine::Rendering::InstanceCullerBurst_SetupCullingJobInput_0000014D$PostfixBurstDelegate;

  /// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
  /// [MonoPInvokeCallback(typeof(UnityEngine.Rendering.UnityEngine.Rendering.InstanceCullerBurst::SetupCullingJobInput_0000014D$PostfixBurstDelegate))]
  /// @brief Method SetupCullingJobInput, addr 0x6c4e6f0, size 0x4, virtual false, abstract: false, final false
  static inline void SetupCullingJobInput(float_t lodBias, float_t meshLodThreshold, ::UnityEngine::Rendering::BatchCullingContext* context, ::UnityEngine::Rendering::ReceiverPlanes* receiverPlanes,
                                          ::UnityEngine::Rendering::ReceiverSphereCuller* receiverSphereCuller, ::UnityEngine::Rendering::FrustumPlaneCuller* frustumPlaneCuller,
                                          float_t* screenRelativeMetric, float_t* meshLodConstant);

  /// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
  /// @brief Method SetupCullingJobInput$BurstManaged, addr 0x6c4e804, size 0x13c, virtual false, abstract: false, final false
  static inline void SetupCullingJobInput$BurstManaged(float_t lodBias, float_t meshLodThreshold, ::UnityEngine::Rendering::BatchCullingContext* context,
                                                       ::UnityEngine::Rendering::ReceiverPlanes* receiverPlanes, ::UnityEngine::Rendering::ReceiverSphereCuller* receiverSphereCuller,
                                                       ::UnityEngine::Rendering::FrustumPlaneCuller* frustumPlaneCuller, float_t* screenRelativeMetric, float_t* meshLodConstant);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceCullerBurst();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstanceCullerBurst", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstanceCullerBurst(InstanceCullerBurst&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstanceCullerBurst", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstanceCullerBurst(InstanceCullerBurst const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18181 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceCullerBurst) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
