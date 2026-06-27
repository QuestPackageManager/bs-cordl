#pragma once
// IWYU pragma private; include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::UnityEngine::MonoBehaviour);
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.MonoBehaviour
class CORDL_TYPE MonoBehaviour : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(get=get_destroyCancellationToken)) ::System::Threading::CancellationToken  destroyCancellationToken;

 __declspec(property(get=get_didAwake)) bool  didAwake;

 __declspec(property(get=get_didStart)) bool  didStart;

/// @brief Field m_CancellationTokenSource, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CancellationTokenSource, put=__cordl_internal_set_m_CancellationTokenSource)) ::System::Threading::CancellationTokenSource*  m_CancellationTokenSource;

 __declspec(property(get=get_useGUILayout, put=set_useGUILayout)) bool  useGUILayout;

/// @brief Method CancelInvoke, addr 0x698e180, size 0x4, virtual false, abstract: false, final false
inline void CancelInvoke() ;

/// @brief Method CancelInvoke, addr 0x698e4b8, size 0x4, virtual false, abstract: false, final false
inline void CancelInvoke(::StringW  methodName) ;

/// @brief Method CancelInvoke, addr 0x698e4bc, size 0x194, virtual false, abstract: false, final false
static inline void CancelInvoke(::UnityEngine::MonoBehaviour*  self, ::StringW  methodName) ;

/// @brief Method CancelInvoke_Injected, addr 0x698f538, size 0x44, virtual false, abstract: false, final false
static inline void CancelInvoke_Injected(::System::IntPtr  self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  methodName) ;

/// @brief Method GetScriptClassName, addr 0x698f71c, size 0x134, virtual false, abstract: false, final false
inline ::StringW GetScriptClassName() ;

/// @brief Method GetScriptClassName_Injected, addr 0x698f850, size 0x44, virtual false, abstract: false, final false
static inline void GetScriptClassName_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method Internal_CancelInvokeAll, addr 0x698e184, size 0xa4, virtual false, abstract: false, final false
static inline void Internal_CancelInvokeAll(::UnityEngine::MonoBehaviour*  self) ;

/// @brief Method Internal_CancelInvokeAll_Injected, addr 0x698f464, size 0x3c, virtual false, abstract: false, final false
static inline void Internal_CancelInvokeAll_Injected(::System::IntPtr  self) ;

/// @brief Method Internal_IsInvokingAll, addr 0x698e0dc, size 0xa4, virtual false, abstract: false, final false
static inline bool Internal_IsInvokingAll(::UnityEngine::MonoBehaviour*  self) ;

/// @brief Method Internal_IsInvokingAll_Injected, addr 0x698f4a0, size 0x3c, virtual false, abstract: false, final false
static inline bool Internal_IsInvokingAll_Injected(::System::IntPtr  self) ;

/// @brief Method Invoke, addr 0x698e228, size 0x8, virtual false, abstract: false, final false
inline void Invoke(::StringW  methodName, float_t  time) ;

/// @brief Method InvokeDelayed, addr 0x698e230, size 0x1ac, virtual false, abstract: false, final false
static inline void InvokeDelayed(::UnityEngine::MonoBehaviour*  self, ::StringW  methodName, float_t  time, float_t  repeatRate) ;

/// @brief Method InvokeDelayed_Injected, addr 0x698f4dc, size 0x5c, virtual false, abstract: false, final false
static inline void InvokeDelayed_Injected(::System::IntPtr  self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  methodName, float_t  time, float_t  repeatRate) ;

/// @brief Method InvokeRepeating, addr 0x698e3dc, size 0x64, virtual false, abstract: false, final false
inline void InvokeRepeating(::StringW  methodName, float_t  time, float_t  repeatRate) ;

/// @brief Method IsInvoking, addr 0x698e0d8, size 0x4, virtual false, abstract: false, final false
inline bool IsInvoking() ;

/// @brief Method IsInvoking, addr 0x698e650, size 0x4, virtual false, abstract: false, final false
inline bool IsInvoking(::StringW  methodName) ;

/// @brief Method IsInvoking, addr 0x698e654, size 0x1a0, virtual false, abstract: false, final false
static inline bool IsInvoking(::UnityEngine::MonoBehaviour*  self, ::StringW  methodName) ;

/// @brief Method IsInvoking_Injected, addr 0x698f57c, size 0x44, virtual false, abstract: false, final false
static inline bool IsInvoking_Injected(::System::IntPtr  self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  methodName) ;

/// @brief Method IsObjectMonoBehaviour, addr 0x698e8b8, size 0xa4, virtual false, abstract: false, final false
static inline bool IsObjectMonoBehaviour(::UnityEngine::Object*  obj) ;

/// @brief Method IsObjectMonoBehaviour_Injected, addr 0x698f5c0, size 0x3c, virtual false, abstract: false, final false
static inline bool IsObjectMonoBehaviour_Injected(::System::IntPtr  obj) ;

static inline ::UnityEngine::MonoBehaviour* New_ctor() ;

/// @brief Method OnCancellationTokenCreated, addr 0x698e02c, size 0x80, virtual false, abstract: false, final false
inline void OnCancellationTokenCreated() ;

/// @brief Method OnCancellationTokenCreated_Injected, addr 0x698f894, size 0x3c, virtual false, abstract: false, final false
static inline void OnCancellationTokenCreated_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method RaiseCancellation, addr 0x698e0ac, size 0x2c, virtual false, abstract: false, final false
inline void RaiseCancellation() ;

/// @brief Method StartCoroutine, addr 0x698e7f4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Coroutine* StartCoroutine(::StringW  methodName) ;

/// @brief Method StartCoroutine, addr 0x698e7fc, size 0xbc, virtual false, abstract: false, final false
inline ::UnityEngine::Coroutine* StartCoroutine(::StringW  methodName, ::System::Object*  value) ;

/// @brief Method StartCoroutine, addr 0x698ead8, size 0xac, virtual false, abstract: false, final false
inline ::UnityEngine::Coroutine* StartCoroutine(::System::Collections::IEnumerator*  routine) ;

/// @brief Method StartCoroutineManaged, addr 0x698e95c, size 0x17c, virtual false, abstract: false, final false
inline ::UnityEngine::Coroutine* StartCoroutineManaged(::StringW  methodName, ::System::Object*  value) ;

/// @brief Method StartCoroutineManaged2, addr 0x698eb84, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::Coroutine* StartCoroutineManaged2(::System::Collections::IEnumerator*  enumerator) ;

/// @brief Method StartCoroutineManaged2_Injected, addr 0x698f650, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::Coroutine* StartCoroutineManaged2_Injected(::System::IntPtr  _unity_self, ::System::Collections::IEnumerator*  enumerator) ;

/// @brief Method StartCoroutineManaged_Injected, addr 0x698f5fc, size 0x54, virtual false, abstract: false, final false
static inline ::UnityEngine::Coroutine* StartCoroutineManaged_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  methodName, ::System::Object*  value) ;

/// @brief Method StartCoroutine_Auto, addr 0x698ec14, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Coroutine* StartCoroutine_Auto(::System::Collections::IEnumerator*  routine) ;

/// @brief Method StopAllCoroutines, addr 0x698f044, size 0x80, virtual false, abstract: false, final false
inline void StopAllCoroutines() ;

/// @brief Method StopAllCoroutines_Injected, addr 0x698f0c4, size 0x3c, virtual false, abstract: false, final false
static inline void StopAllCoroutines_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method StopCoroutine, addr 0x698ee98, size 0x168, virtual false, abstract: false, final false
inline void StopCoroutine(::StringW  methodName) ;

/// @brief Method StopCoroutine, addr 0x698ec18, size 0xac, virtual false, abstract: false, final false
inline void StopCoroutine(::System::Collections::IEnumerator*  routine) ;

/// @brief Method StopCoroutine, addr 0x698ed54, size 0xac, virtual false, abstract: false, final false
inline void StopCoroutine(::UnityEngine::Coroutine*  routine) ;

/// @brief Method StopCoroutineFromEnumeratorManaged, addr 0x698ecc4, size 0x90, virtual false, abstract: false, final false
inline void StopCoroutineFromEnumeratorManaged(::System::Collections::IEnumerator*  routine) ;

/// @brief Method StopCoroutineFromEnumeratorManaged_Injected, addr 0x698f6d8, size 0x44, virtual false, abstract: false, final false
static inline void StopCoroutineFromEnumeratorManaged_Injected(::System::IntPtr  _unity_self, ::System::Collections::IEnumerator*  routine) ;

/// @brief Method StopCoroutineManaged, addr 0x698ee00, size 0x98, virtual false, abstract: false, final false
inline void StopCoroutineManaged(::UnityEngine::Coroutine*  routine) ;

/// @brief Method StopCoroutineManaged_Injected, addr 0x698f694, size 0x44, virtual false, abstract: false, final false
static inline void StopCoroutineManaged_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  routine) ;

/// @brief Method StopCoroutine_Injected, addr 0x698f000, size 0x44, virtual false, abstract: false, final false
static inline void StopCoroutine_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  methodName) ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get_m_CancellationTokenSource() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get_m_CancellationTokenSource() ;

constexpr void __cordl_internal_set_m_CancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

/// @brief Method .ctor, addr 0x698f8d0, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_destroyCancellationToken, addr 0x698de40, size 0x10c, virtual false, abstract: false, final false
inline ::System::Threading::CancellationToken get_destroyCancellationToken() ;

/// @brief Method get_didAwake, addr 0x698f34c, size 0x80, virtual false, abstract: false, final false
inline bool get_didAwake() ;

/// @brief Method get_didAwake_Injected, addr 0x698f3cc, size 0x3c, virtual false, abstract: false, final false
static inline bool get_didAwake_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_didStart, addr 0x698f290, size 0x80, virtual false, abstract: false, final false
inline bool get_didStart() ;

/// @brief Method get_didStart_Injected, addr 0x698f310, size 0x3c, virtual false, abstract: false, final false
static inline bool get_didStart_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_useGUILayout, addr 0x698f100, size 0x80, virtual false, abstract: false, final false
inline bool get_useGUILayout() ;

/// @brief Method get_useGUILayout_Injected, addr 0x698f180, size 0x3c, virtual false, abstract: false, final false
static inline bool get_useGUILayout_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method print, addr 0x698f408, size 0x5c, virtual false, abstract: false, final false
static inline void print(::System::Object*  message) ;

/// @brief Method set_useGUILayout, addr 0x698f1bc, size 0x90, virtual false, abstract: false, final false
inline void set_useGUILayout(bool  value) ;

/// @brief Method set_useGUILayout_Injected, addr 0x698f24c, size 0x44, virtual false, abstract: false, final false
static inline void set_useGUILayout_Injected(::System::IntPtr  _unity_self, bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBehaviour(MonoBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBehaviour(MonoBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10344};

/// @brief Field m_CancellationTokenSource, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ___m_CancellationTokenSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::MonoBehaviour, ___m_CancellationTokenSource) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::MonoBehaviour, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::MonoBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MonoBehaviour*, "UnityEngine", "MonoBehaviour");
