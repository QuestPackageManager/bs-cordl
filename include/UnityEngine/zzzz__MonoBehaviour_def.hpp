#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10187))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10225))
// CS Name: ::UnityEngine::MonoBehaviour*
class CORDL_TYPE MonoBehaviour : public ::UnityEngine::Behaviour {
public:
  // Declarations
  __declspec(property(get = get_useGUILayout, put = set_useGUILayout)) bool useGUILayout;

  /// @brief Method IsInvoking, addr 0x2cd2998, size 0x3c, virtual false, abstract: false, final false
  inline bool IsInvoking();

  /// @brief Method CancelInvoke, addr 0x2cd2a10, size 0x3c, virtual false, abstract: false, final false
  inline void CancelInvoke();

  /// @brief Method Invoke, addr 0x2cd2a88, size 0x58, virtual false, abstract: false, final false
  inline void Invoke(::StringW methodName, float_t time);

  /// @brief Method InvokeRepeating, addr 0x2cd2b3c, size 0xbc, virtual false, abstract: false, final false
  inline void InvokeRepeating(::StringW methodName, float_t time, float_t repeatRate);

  /// @brief Method CancelInvoke, addr 0x2cd2bf8, size 0x44, virtual false, abstract: false, final false
  inline void CancelInvoke(::StringW methodName);

  /// @brief Method IsInvoking, addr 0x2cd2c80, size 0x44, virtual false, abstract: false, final false
  inline bool IsInvoking(::StringW methodName);

  /// @brief Method StartCoroutine, addr 0x2cd2d08, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Coroutine* StartCoroutine(::StringW methodName);

  /// @brief Method StartCoroutine, addr 0x2cd2d10, size 0x114, virtual false, abstract: false, final false
  inline ::UnityEngine::Coroutine* StartCoroutine(::StringW methodName, ::System::Object* value);

  /// @brief Method StartCoroutine, addr 0x2cd2eb4, size 0xf8, virtual false, abstract: false, final false
  inline ::UnityEngine::Coroutine* StartCoroutine(::System::Collections::IEnumerator* routine);

  /// @brief Method StartCoroutine_Auto, addr 0x2cd2ff0, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Coroutine* StartCoroutine_Auto(::System::Collections::IEnumerator* routine);

  /// @brief Method StopCoroutine, addr 0x2cd2ff4, size 0xf8, virtual false, abstract: false, final false
  inline void StopCoroutine(::System::Collections::IEnumerator* routine);

  /// @brief Method StopCoroutine, addr 0x2cd3130, size 0xf8, virtual false, abstract: false, final false
  inline void StopCoroutine(::UnityEngine::Coroutine* routine);

  /// @brief Method StopCoroutine, addr 0x2cd326c, size 0x44, virtual false, abstract: false, final false
  inline void StopCoroutine(::StringW methodName);

  /// @brief Method StopAllCoroutines, addr 0x2cd32b0, size 0x3c, virtual false, abstract: false, final false
  inline void StopAllCoroutines();

  /// @brief Method get_useGUILayout, addr 0x2cd32ec, size 0x3c, virtual false, abstract: false, final false
  inline bool get_useGUILayout();

  /// @brief Method set_useGUILayout, addr 0x2cd3328, size 0x44, virtual false, abstract: false, final false
  inline void set_useGUILayout(bool value);

  /// @brief Method print, addr 0x2cd336c, size 0x58, virtual false, abstract: false, final false
  static inline void print(::System::Object* message);

  /// @brief Method Internal_CancelInvokeAll, addr 0x2cd2a4c, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_CancelInvokeAll(::UnityEngine::MonoBehaviour* self);

  /// @brief Method Internal_IsInvokingAll, addr 0x2cd29d4, size 0x3c, virtual false, abstract: false, final false
  static inline bool Internal_IsInvokingAll(::UnityEngine::MonoBehaviour* self);

  /// @brief Method InvokeDelayed, addr 0x2cd2ae0, size 0x5c, virtual false, abstract: false, final false
  static inline void InvokeDelayed(::UnityEngine::MonoBehaviour* self, ::StringW methodName, float_t time, float_t repeatRate);

  /// @brief Method CancelInvoke, addr 0x2cd2c3c, size 0x44, virtual false, abstract: false, final false
  static inline void CancelInvoke(::UnityEngine::MonoBehaviour* self, ::StringW methodName);

  /// @brief Method IsInvoking, addr 0x2cd2cc4, size 0x44, virtual false, abstract: false, final false
  static inline bool IsInvoking(::UnityEngine::MonoBehaviour* self, ::StringW methodName);

  /// @brief Method IsObjectMonoBehaviour, addr 0x2cd2e24, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsObjectMonoBehaviour(::UnityEngine::Object* obj);

  /// @brief Method StartCoroutineManaged, addr 0x2cd2e60, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Coroutine* StartCoroutineManaged(::StringW methodName, ::System::Object* value);

  /// @brief Method StartCoroutineManaged2, addr 0x2cd2fac, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Coroutine* StartCoroutineManaged2(::System::Collections::IEnumerator* enumerator);

  /// @brief Method StopCoroutineManaged, addr 0x2cd3228, size 0x44, virtual false, abstract: false, final false
  inline void StopCoroutineManaged(::UnityEngine::Coroutine* routine);

  /// @brief Method StopCoroutineFromEnumeratorManaged, addr 0x2cd30ec, size 0x44, virtual false, abstract: false, final false
  inline void StopCoroutineFromEnumeratorManaged(::System::Collections::IEnumerator* routine);

  /// @brief Method GetScriptClassName, addr 0x2cd33c4, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW GetScriptClassName();

  static inline ::UnityEngine::MonoBehaviour* New_ctor();

  /// @brief Method .ctor, addr 0x2cd3400, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MonoBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoBehaviour(MonoBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoBehaviour(MonoBehaviour const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoBehaviour();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::MonoBehaviour, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::MonoBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MonoBehaviour*, "UnityEngine", "MonoBehaviour");
