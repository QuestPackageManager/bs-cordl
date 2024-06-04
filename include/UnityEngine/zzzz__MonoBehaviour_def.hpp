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
namespace System {
class Object;
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
// Type: UnityEngine::MonoBehaviour
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::MonoBehaviour*
class CORDL_TYPE MonoBehaviour : public ::UnityEngine::Behaviour {
public:
  // Declarations
  __declspec(property(get = get_useGUILayout, put = set_useGUILayout)) bool useGUILayout;

  /// @brief Method CancelInvoke, addr 0x3439e38, size 0x3c, virtual false, abstract: false, final false
  inline void CancelInvoke();

  /// @brief Method CancelInvoke, addr 0x343a020, size 0x44, virtual false, abstract: false, final false
  inline void CancelInvoke(::StringW methodName);

  /// @brief Method CancelInvoke, addr 0x343a064, size 0x44, virtual false, abstract: false, final false
  static inline void CancelInvoke(::UnityEngine::MonoBehaviour* self, ::StringW methodName);

  /// @brief Method GetScriptClassName, addr 0x343a7ec, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW GetScriptClassName();

  /// @brief Method Internal_CancelInvokeAll, addr 0x3439e74, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_CancelInvokeAll(::UnityEngine::MonoBehaviour* self);

  /// @brief Method Internal_IsInvokingAll, addr 0x3439dfc, size 0x3c, virtual false, abstract: false, final false
  static inline bool Internal_IsInvokingAll(::UnityEngine::MonoBehaviour* self);

  /// @brief Method Invoke, addr 0x3439eb0, size 0x58, virtual false, abstract: false, final false
  inline void Invoke(::StringW methodName, float_t time);

  /// @brief Method InvokeDelayed, addr 0x3439f08, size 0x5c, virtual false, abstract: false, final false
  static inline void InvokeDelayed(::UnityEngine::MonoBehaviour* self, ::StringW methodName, float_t time, float_t repeatRate);

  /// @brief Method InvokeRepeating, addr 0x3439f64, size 0xbc, virtual false, abstract: false, final false
  inline void InvokeRepeating(::StringW methodName, float_t time, float_t repeatRate);

  /// @brief Method IsInvoking, addr 0x3439dc0, size 0x3c, virtual false, abstract: false, final false
  inline bool IsInvoking();

  /// @brief Method IsInvoking, addr 0x343a0a8, size 0x44, virtual false, abstract: false, final false
  inline bool IsInvoking(::StringW methodName);

  /// @brief Method IsInvoking, addr 0x343a0ec, size 0x44, virtual false, abstract: false, final false
  static inline bool IsInvoking(::UnityEngine::MonoBehaviour* self, ::StringW methodName);

  /// @brief Method IsObjectMonoBehaviour, addr 0x343a24c, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsObjectMonoBehaviour(::UnityEngine::Object* obj);

  static inline ::UnityEngine::MonoBehaviour* New_ctor();

  /// @brief Method StartCoroutine, addr 0x343a130, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Coroutine* StartCoroutine(::StringW methodName);

  /// @brief Method StartCoroutine, addr 0x343a138, size 0x114, virtual false, abstract: false, final false
  inline ::UnityEngine::Coroutine* StartCoroutine(::StringW methodName, ::System::Object* value);

  /// @brief Method StartCoroutine, addr 0x343a2dc, size 0xf8, virtual false, abstract: false, final false
  inline ::UnityEngine::Coroutine* StartCoroutine(::System::Collections::IEnumerator* routine);

  /// @brief Method StartCoroutineManaged, addr 0x343a288, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Coroutine* StartCoroutineManaged(::StringW methodName, ::System::Object* value);

  /// @brief Method StartCoroutineManaged2, addr 0x343a3d4, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Coroutine* StartCoroutineManaged2(::System::Collections::IEnumerator* enumerator);

  /// @brief Method StartCoroutine_Auto, addr 0x343a418, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Coroutine* StartCoroutine_Auto(::System::Collections::IEnumerator* routine);

  /// @brief Method StopAllCoroutines, addr 0x343a6d8, size 0x3c, virtual false, abstract: false, final false
  inline void StopAllCoroutines();

  /// @brief Method StopCoroutine, addr 0x343a694, size 0x44, virtual false, abstract: false, final false
  inline void StopCoroutine(::StringW methodName);

  /// @brief Method StopCoroutine, addr 0x343a41c, size 0xf8, virtual false, abstract: false, final false
  inline void StopCoroutine(::System::Collections::IEnumerator* routine);

  /// @brief Method StopCoroutine, addr 0x343a558, size 0xf8, virtual false, abstract: false, final false
  inline void StopCoroutine(::UnityEngine::Coroutine* routine);

  /// @brief Method StopCoroutineFromEnumeratorManaged, addr 0x343a514, size 0x44, virtual false, abstract: false, final false
  inline void StopCoroutineFromEnumeratorManaged(::System::Collections::IEnumerator* routine);

  /// @brief Method StopCoroutineManaged, addr 0x343a650, size 0x44, virtual false, abstract: false, final false
  inline void StopCoroutineManaged(::UnityEngine::Coroutine* routine);

  /// @brief Method .ctor, addr 0x343a828, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_useGUILayout, addr 0x343a714, size 0x3c, virtual false, abstract: false, final false
  inline bool get_useGUILayout();

  /// @brief Method print, addr 0x343a794, size 0x58, virtual false, abstract: false, final false
  static inline void print(::System::Object* message);

  /// @brief Method set_useGUILayout, addr 0x343a750, size 0x44, virtual false, abstract: false, final false
  inline void set_useGUILayout(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoBehaviour();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoBehaviour(MonoBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoBehaviour(MonoBehaviour const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::MonoBehaviour, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::MonoBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MonoBehaviour*, "UnityEngine", "MonoBehaviour");
