#pragma once
// IWYU pragma private; include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MonoBehaviour)
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class MonoBehaviour;
}
// Write type traits
MARK_REF_T(::UnityEngine::MonoBehaviour*);
DEFINE_IL2CPP_CLASS(::UnityEngine::MonoBehaviour*, "UnityEngine", "MonoBehaviour");
// [RequiredByNativeCode]
// [NativeHeader("Runtime/Mono/MonoBehaviour.h")]
// [NativeHeader("Runtime/Scripting/DelayedCallUtility.h")]
// [ExtensionOfNativeClass]
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.MonoBehaviour
class CORDL_TYPE MonoBehaviour : public ::UnityEngine::Behaviour {
public:
  // Declarations
  __declspec(property(get = get_destroyCancellationToken)) ::System::Threading::CancellationToken destroyCancellationToken;

  __declspec(property(get = get_didAwake)) bool didAwake;

  __declspec(property(get = get_didStart)) bool didStart;

  /// @brief Field m_CancellationTokenSource, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CancellationTokenSource,
                      put = __cordl_internal_set_m_CancellationTokenSource)) ::System::Threading::CancellationTokenSource* m_CancellationTokenSource;

  __declspec(property(get = get_useGUILayout, put = set_useGUILayout)) bool useGUILayout;

  /// @brief Method CancelInvoke, addr 0x6f7cd40, size 0x4, virtual false, abstract: false, final false
  inline void CancelInvoke();

  /// @brief Method CancelInvoke, addr 0x6f7d078, size 0x4, virtual false, abstract: false, final false
  inline void CancelInvoke(::StringW methodName);

  /// [FreeFunction]
  /// @brief Method CancelInvoke, addr 0x6f7d07c, size 0x194, virtual false, abstract: false, final false
  static inline void CancelInvoke(/* [NotNull] */ ::UnityEngine::MonoBehaviour* self, ::StringW methodName);

  /// @brief Method CancelInvoke_Injected, addr 0x6f7e0f8, size 0x44, virtual false, abstract: false, final false
  static inline void CancelInvoke_Injected(::System::IntPtr self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> methodName);

  /// @brief Method GetScriptClassName, addr 0x6f7e2dc, size 0x134, virtual false, abstract: false, final false
  inline ::StringW GetScriptClassName();

  /// @brief Method GetScriptClassName_Injected, addr 0x6f7e410, size 0x44, virtual false, abstract: false, final false
  static inline void GetScriptClassName_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// [FreeFunction("CancelInvoke")]
  /// @brief Method Internal_CancelInvokeAll, addr 0x6f7cd44, size 0xa4, virtual false, abstract: false, final false
  static inline void Internal_CancelInvokeAll(/* [NotNull] */ ::UnityEngine::MonoBehaviour* self);

  /// @brief Method Internal_CancelInvokeAll_Injected, addr 0x6f7e024, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_CancelInvokeAll_Injected(::System::IntPtr self);

  /// [FreeFunction("IsInvoking")]
  /// @brief Method Internal_IsInvokingAll, addr 0x6f7cc9c, size 0xa4, virtual false, abstract: false, final false
  static inline bool Internal_IsInvokingAll(/* [NotNull] */ ::UnityEngine::MonoBehaviour* self);

  /// @brief Method Internal_IsInvokingAll_Injected, addr 0x6f7e060, size 0x3c, virtual false, abstract: false, final false
  static inline bool Internal_IsInvokingAll_Injected(::System::IntPtr self);

  /// @brief Method Invoke, addr 0x6f7cde8, size 0x8, virtual false, abstract: false, final false
  inline void Invoke(::StringW methodName, float_t time);

  /// [FreeFunction]
  /// @brief Method InvokeDelayed, addr 0x6f7cdf0, size 0x1ac, virtual false, abstract: false, final false
  static inline void InvokeDelayed(/* [NotNull] */ ::UnityEngine::MonoBehaviour* self, ::StringW methodName, float_t time, float_t repeatRate);

  /// @brief Method InvokeDelayed_Injected, addr 0x6f7e09c, size 0x5c, virtual false, abstract: false, final false
  static inline void InvokeDelayed_Injected(::System::IntPtr self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> methodName, float_t time, float_t repeatRate);

  /// @brief Method InvokeRepeating, addr 0x6f7cf9c, size 0x64, virtual false, abstract: false, final false
  inline void InvokeRepeating(::StringW methodName, float_t time, float_t repeatRate);

  /// @brief Method IsInvoking, addr 0x6f7cc98, size 0x4, virtual false, abstract: false, final false
  inline bool IsInvoking();

  /// @brief Method IsInvoking, addr 0x6f7d210, size 0x4, virtual false, abstract: false, final false
  inline bool IsInvoking(::StringW methodName);

  /// [FreeFunction]
  /// @brief Method IsInvoking, addr 0x6f7d214, size 0x1a0, virtual false, abstract: false, final false
  static inline bool IsInvoking(/* [NotNull] */ ::UnityEngine::MonoBehaviour* self, ::StringW methodName);

  /// @brief Method IsInvoking_Injected, addr 0x6f7e13c, size 0x44, virtual false, abstract: false, final false
  static inline bool IsInvoking_Injected(::System::IntPtr self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> methodName);

  /// [FreeFunction]
  /// @brief Method IsObjectMonoBehaviour, addr 0x6f7d478, size 0xa4, virtual false, abstract: false, final false
  static inline bool IsObjectMonoBehaviour(/* [NotNull] */ ::UnityEngine::Object* obj);

  /// @brief Method IsObjectMonoBehaviour_Injected, addr 0x6f7e180, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsObjectMonoBehaviour_Injected(::System::IntPtr obj);

  static inline ::UnityEngine::MonoBehaviour* New_ctor();

  /// @brief Method OnCancellationTokenCreated, addr 0x6f7cbec, size 0x80, virtual false, abstract: false, final false
  inline void OnCancellationTokenCreated();

  /// @brief Method OnCancellationTokenCreated_Injected, addr 0x6f7e454, size 0x3c, virtual false, abstract: false, final false
  static inline void OnCancellationTokenCreated_Injected(::System::IntPtr _unity_self);

  /// [RequiredByNativeCode]
  /// @brief Method RaiseCancellation, addr 0x6f7cc6c, size 0x2c, virtual false, abstract: false, final false
  inline void RaiseCancellation();

  /// [ExcludeFromDocs]
  /// @brief Method StartCoroutine, addr 0x6f7d3b4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Coroutine* StartCoroutine(::StringW methodName);

  /// @brief Method StartCoroutine, addr 0x6f7d3bc, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::Coroutine* StartCoroutine(::StringW methodName, /* [DefaultValue("null")] */ ::System::Object* value);

  /// @brief Method StartCoroutine, addr 0x6f7d698, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Coroutine* StartCoroutine(::System::Collections::IEnumerator* routine);

  /// @brief Method StartCoroutineManaged, addr 0x6f7d51c, size 0x17c, virtual false, abstract: false, final false
  inline ::UnityEngine::Coroutine* StartCoroutineManaged(::StringW methodName, ::System::Object* value);

  /// @brief Method StartCoroutineManaged2, addr 0x6f7d744, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Coroutine* StartCoroutineManaged2(::System::Collections::IEnumerator* enumerator);

  /// @brief Method StartCoroutineManaged2_Injected, addr 0x6f7e210, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Coroutine* StartCoroutineManaged2_Injected(::System::IntPtr _unity_self, ::System::Collections::IEnumerator* enumerator);

  /// @brief Method StartCoroutineManaged_Injected, addr 0x6f7e1bc, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::Coroutine* StartCoroutineManaged_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> methodName, ::System::Object* value);

  /// [Obsolete("StartCoroutine_Auto has been deprecated. Use StartCoroutine instead (UnityUpgradable) -> StartCoroutine([mscorlib] System.Collections.IEnumerator)", false)]
  /// @brief Method StartCoroutine_Auto, addr 0x6f7d7d4, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Coroutine* StartCoroutine_Auto(::System::Collections::IEnumerator* routine);

  /// @brief Method StopAllCoroutines, addr 0x6f7dc04, size 0x80, virtual false, abstract: false, final false
  inline void StopAllCoroutines();

  /// @brief Method StopAllCoroutines_Injected, addr 0x6f7dc84, size 0x3c, virtual false, abstract: false, final false
  static inline void StopAllCoroutines_Injected(::System::IntPtr _unity_self);

  /// @brief Method StopCoroutine, addr 0x6f7da58, size 0x168, virtual false, abstract: false, final false
  inline void StopCoroutine(::StringW methodName);

  /// @brief Method StopCoroutine, addr 0x6f7d7d8, size 0xac, virtual false, abstract: false, final false
  inline void StopCoroutine(::System::Collections::IEnumerator* routine);

  /// @brief Method StopCoroutine, addr 0x6f7d914, size 0xac, virtual false, abstract: false, final false
  inline void StopCoroutine(::UnityEngine::Coroutine* routine);

  /// @brief Method StopCoroutineFromEnumeratorManaged, addr 0x6f7d884, size 0x90, virtual false, abstract: false, final false
  inline void StopCoroutineFromEnumeratorManaged(::System::Collections::IEnumerator* routine);

  /// @brief Method StopCoroutineFromEnumeratorManaged_Injected, addr 0x6f7e298, size 0x44, virtual false, abstract: false, final false
  static inline void StopCoroutineFromEnumeratorManaged_Injected(::System::IntPtr _unity_self, ::System::Collections::IEnumerator* routine);

  /// @brief Method StopCoroutineManaged, addr 0x6f7d9c0, size 0x98, virtual false, abstract: false, final false
  inline void StopCoroutineManaged(::UnityEngine::Coroutine* routine);

  /// @brief Method StopCoroutineManaged_Injected, addr 0x6f7e254, size 0x44, virtual false, abstract: false, final false
  static inline void StopCoroutineManaged_Injected(::System::IntPtr _unity_self, ::System::IntPtr routine);

  /// @brief Method StopCoroutine_Injected, addr 0x6f7dbc0, size 0x44, virtual false, abstract: false, final false
  static inline void StopCoroutine_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> methodName);

  constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get_m_CancellationTokenSource() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get_m_CancellationTokenSource();

  constexpr void __cordl_internal_set_m_CancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  /// @brief Method .ctor, addr 0x6f7e490, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_destroyCancellationToken, addr 0x6f7ca64, size 0x110, virtual false, abstract: false, final false
  inline ::System::Threading::CancellationToken get_destroyCancellationToken();

  /// @brief Method get_didAwake, addr 0x6f7df0c, size 0x80, virtual false, abstract: false, final false
  inline bool get_didAwake();

  /// @brief Method get_didAwake_Injected, addr 0x6f7df8c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_didAwake_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_didStart, addr 0x6f7de50, size 0x80, virtual false, abstract: false, final false
  inline bool get_didStart();

  /// @brief Method get_didStart_Injected, addr 0x6f7ded0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_didStart_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_useGUILayout, addr 0x6f7dcc0, size 0x80, virtual false, abstract: false, final false
  inline bool get_useGUILayout();

  /// @brief Method get_useGUILayout_Injected, addr 0x6f7dd40, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_useGUILayout_Injected(::System::IntPtr _unity_self);

  /// @brief Method print, addr 0x6f7dfc8, size 0x5c, virtual false, abstract: false, final false
  static inline void print(::System::Object* message);

  /// @brief Method set_useGUILayout, addr 0x6f7dd7c, size 0x90, virtual false, abstract: false, final false
  inline void set_useGUILayout(bool value);

  /// @brief Method set_useGUILayout_Injected, addr 0x6f7de0c, size 0x44, virtual false, abstract: false, final false
  static inline void set_useGUILayout_Injected(::System::IntPtr _unity_self, bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoBehaviour();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoBehaviour", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoBehaviour(MonoBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoBehaviour", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoBehaviour(MonoBehaviour const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9947 };

  /// @brief Field m_CancellationTokenSource, offset: 0x18, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ___m_CancellationTokenSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::MonoBehaviour, ___m_CancellationTokenSource) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::MonoBehaviour) == 0x20, "Size mismatch!");

} // namespace UnityEngine
