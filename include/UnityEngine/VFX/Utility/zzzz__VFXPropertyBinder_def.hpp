#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXPropertyBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VFXPropertyBinder)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::VFX::Utility {
class VFXBinderBase;
}
namespace UnityEngine::VFX::Utility {
template <typename T> class VFXPropertyBinder__GetPropertyBinders_d__17_1;
}
namespace UnityEngine::VFX {
class VisualEffect;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::VFX::Utility {
class VFXPropertyBinder;
}
namespace UnityEngine::VFX::Utility {
template <typename T> class VFXPropertyBinder__GetPropertyBinders_d__17_1;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::Utility::VFXPropertyBinder*);
MARK_GEN_REF_T_PTR(::UnityEngine::VFX::Utility::VFXPropertyBinder__GetPropertyBinders_d__17_1);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXPropertyBinder*, "UnityEngine.VFX.Utility", "VFXPropertyBinder");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::VFX::Utility::VFXPropertyBinder__GetPropertyBinders_d__17_1, "UnityEngine.VFX.Utility", "VFXPropertyBinder/<GetPropertyBinders>d__17`1");
// Dependencies System.Collections.Generic.List`1::Enumerator<T>, System.Object
namespace UnityEngine::VFX::Utility {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXPropertyBinder/<GetPropertyBinders>d__17`1<T>
class CORDL_TYPE VFXPropertyBinder__GetPropertyBinders_d__17_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_T__get_Current)) T System_Collections_Generic_IEnumerator_T__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) T __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::UnityEngine::VFX::Utility::VFXPropertyBinder> __4__this;

  /// @brief Field <>7__wrap1, offset 0x30, size 0x18
  __declspec(property(get = __cordl_internal_get___7__wrap1,
                      put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::List_1_Enumerator<::UnityW<::UnityEngine::VFX::Utility::VFXBinderBase>>
      __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::VFX::Utility::VFXPropertyBinder__GetPropertyBinders_d__17_1<T>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T System_Collections_Generic_IEnumerator_T__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr T const& __cordl_internal_get___2__current() const;

  constexpr T& __cordl_internal_get___2__current();

  constexpr ::UnityW<::UnityEngine::VFX::Utility::VFXPropertyBinder> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::UnityEngine::VFX::Utility::VFXPropertyBinder>& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::List_1_Enumerator<::UnityW<::UnityEngine::VFX::Utility::VFXBinderBase>> const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::List_1_Enumerator<::UnityW<::UnityEngine::VFX::Utility::VFXBinderBase>>& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(T value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::VFX::Utility::VFXPropertyBinder> value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::List_1_Enumerator<::UnityW<::UnityEngine::VFX::Utility::VFXBinderBase>> value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  /// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXPropertyBinder__GetPropertyBinders_d__17_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXPropertyBinder__GetPropertyBinders_d__17_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXPropertyBinder__GetPropertyBinders_d__17_1(VFXPropertyBinder__GetPropertyBinders_d__17_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXPropertyBinder__GetPropertyBinders_d__17_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXPropertyBinder__GetPropertyBinders_d__17_1(VFXPropertyBinder__GetPropertyBinders_d__17_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19983 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  T _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::VFX::Utility::VFXPropertyBinder> _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x18, def value: None
  ::System::Collections::Generic::List_1_Enumerator<::UnityW<::UnityEngine::VFX::Utility::VFXBinderBase>> _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::VFX::Utility
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXPropertyBinder
class CORDL_TYPE VFXPropertyBinder : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  template <typename T> using _GetPropertyBinders_d__17_1 = ::UnityEngine::VFX::Utility::VFXPropertyBinder__GetPropertyBinders_d__17_1<T>;

  /// @brief Field m_Bindings, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Bindings,
                      put = __cordl_internal_set_m_Bindings)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::VFX::Utility::VFXBinderBase>>* m_Bindings;

  /// @brief Field m_ExecuteInEditor, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ExecuteInEditor, put = __cordl_internal_set_m_ExecuteInEditor)) bool m_ExecuteInEditor;

  /// @brief Field m_VisualEffect, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VisualEffect, put = __cordl_internal_set_m_VisualEffect)) ::UnityW<::UnityEngine::VFX::VisualEffect> m_VisualEffect;

  /// @brief Method AddParameterBinder, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T AddParameterBinder();

  /// @brief Method AddPropertyBinder, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T AddPropertyBinder();

  /// @brief Method ClearParameterBinders, addr 0x69e3f08, size 0x4, virtual false, abstract: false, final false
  inline void ClearParameterBinders();

  /// @brief Method ClearPropertyBinders, addr 0x69e3c64, size 0x98, virtual false, abstract: false, final false
  inline void ClearPropertyBinders();

  /// @brief Method GetParameterBinders, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* GetParameterBinders();

  /// @brief Method GetPropertyBinders, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* GetPropertyBinders();

  /// @brief Method LateUpdate, addr 0x69e3cfc, size 0x20c, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::UnityEngine::VFX::Utility::VFXPropertyBinder* New_ctor();

  /// @brief Method OnEnable, addr 0x69e3adc, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x69e3bec, size 0x4, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method Reload, addr 0x69e3ae0, size 0x10c, virtual false, abstract: false, final false
  inline void Reload();

  /// @brief Method RemoveParameterBinder, addr 0x69e3fc0, size 0x4, virtual false, abstract: false, final false
  inline void RemoveParameterBinder(::UnityEngine::VFX::Utility::VFXBinderBase* binder);

  /// @brief Method RemoveParameterBinders, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void RemoveParameterBinders();

  /// @brief Method RemovePropertyBinder, addr 0x69e3f0c, size 0xb4, virtual false, abstract: false, final false
  inline void RemovePropertyBinder(::UnityEngine::VFX::Utility::VFXBinderBase* binder);

  /// @brief Method RemovePropertyBinders, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void RemovePropertyBinders();

  /// @brief Method Reset, addr 0x69e3c4c, size 0x18, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SafeDestroy, addr 0x69e3bf0, size 0x5c, virtual false, abstract: false, final false
  static inline void SafeDestroy(::UnityEngine::Object* toDelete);

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::VFX::Utility::VFXBinderBase>>* const& __cordl_internal_get_m_Bindings() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::VFX::Utility::VFXBinderBase>>*& __cordl_internal_get_m_Bindings();

  constexpr bool const& __cordl_internal_get_m_ExecuteInEditor() const;

  constexpr bool& __cordl_internal_get_m_ExecuteInEditor();

  constexpr ::UnityW<::UnityEngine::VFX::VisualEffect> const& __cordl_internal_get_m_VisualEffect() const;

  constexpr ::UnityW<::UnityEngine::VFX::VisualEffect>& __cordl_internal_get_m_VisualEffect();

  constexpr void __cordl_internal_set_m_Bindings(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::VFX::Utility::VFXBinderBase>>* value);

  constexpr void __cordl_internal_set_m_ExecuteInEditor(bool value);

  constexpr void __cordl_internal_set_m_VisualEffect(::UnityW<::UnityEngine::VFX::VisualEffect> value);

  /// @brief Method .ctor, addr 0x69e3fc4, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXPropertyBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXPropertyBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXPropertyBinder(VFXPropertyBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXPropertyBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXPropertyBinder(VFXPropertyBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19984 };

  /// @brief Field m_ExecuteInEditor, offset: 0x20, size: 0x1, def value: None
  bool ___m_ExecuteInEditor;

  /// @brief Field m_Bindings, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::VFX::Utility::VFXBinderBase>>* ___m_Bindings;

  /// @brief Field m_VisualEffect, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::VFX::VisualEffect> ___m_VisualEffect;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXPropertyBinder, ___m_ExecuteInEditor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXPropertyBinder, ___m_Bindings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXPropertyBinder, ___m_VisualEffect) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXPropertyBinder) == 0x38, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
