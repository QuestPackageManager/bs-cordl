#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SavedStructState_1)
namespace System {
class Action;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::Utilities {
class ISavedState;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename T> class __SavedStructState_1__TypedRestore;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
template <typename T> class SavedStructState_1;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename T> class __SavedStructState_1__TypedRestore;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::Utilities::SavedStructState_1);
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore);
// Type: ::TypedRestore
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::SavedStructState`1::TypedRestore<T>*
class CORDL_TYPE __SavedStructState_1__TypedRestore : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<T> state, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void EndInvoke(ByRef<T> state, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(ByRef<T> state);

  static inline ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<T>* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SavedStructState_1__TypedRestore();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SavedStructState_1__TypedRestore", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SavedStructState_1__TypedRestore(__SavedStructState_1__TypedRestore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SavedStructState_1__TypedRestore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SavedStructState_1__TypedRestore(__SavedStructState_1__TypedRestore const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::SavedStructState`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Utilities::SavedStructState`1<T>*
class CORDL_TYPE SavedStructState_1 : public ::System::Object {
public:
  // Declarations
  using TypedRestore = ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<T>;

  /// @brief Field m_RestoreAction, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RestoreAction,
                      put = __cordl_internal_set_m_RestoreAction))::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<T>* m_RestoreAction;

  /// @brief Field m_State, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_State, put = __cordl_internal_set_m_State)) T m_State;

  /// @brief Field m_StaticDisposeCurrentState, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StaticDisposeCurrentState, put = __cordl_internal_set_m_StaticDisposeCurrentState))::System::Action* m_StaticDisposeCurrentState;

  /// @brief Convert operator to "::UnityEngine::InputSystem::Utilities::ISavedState"
  constexpr operator ::UnityEngine::InputSystem::Utilities::ISavedState*() noexcept;

  static inline ::UnityEngine::InputSystem::Utilities::SavedStructState_1<T>* New_ctor(ByRef<T> state, ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<T>* restoreAction,
                                                                                       ::System::Action* staticDisposeCurrentState);

  /// @brief Method RestoreSavedState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void RestoreSavedState();

  /// @brief Method StaticDisposeCurrentState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void StaticDisposeCurrentState();

  constexpr ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<T>*& __cordl_internal_get_m_RestoreAction();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<T>*> const& __cordl_internal_get_m_RestoreAction() const;

  constexpr T const& __cordl_internal_get_m_State() const;

  constexpr T& __cordl_internal_get_m_State();

  constexpr ::System::Action*& __cordl_internal_get_m_StaticDisposeCurrentState();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_m_StaticDisposeCurrentState() const;

  constexpr void __cordl_internal_set_m_RestoreAction(::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<T>* value);

  constexpr void __cordl_internal_set_m_State(T value);

  constexpr void __cordl_internal_set_m_StaticDisposeCurrentState(::System::Action* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(ByRef<T> state, ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<T>* restoreAction, ::System::Action* staticDisposeCurrentState);

  /// @brief Convert to "::UnityEngine::InputSystem::Utilities::ISavedState"
  constexpr ::UnityEngine::InputSystem::Utilities::ISavedState* i___UnityEngine__InputSystem__Utilities__ISavedState() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SavedStructState_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SavedStructState_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SavedStructState_1(SavedStructState_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SavedStructState_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SavedStructState_1(SavedStructState_1 const&) = delete;

  /// @brief Field m_State, offset: 0x10, size: 0x8, def value: None
  T ___m_State;

  /// @brief Field m_RestoreAction, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<T>* ___m_RestoreAction;

  /// @brief Field m_StaticDisposeCurrentState, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___m_StaticDisposeCurrentState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::SavedStructState_1, "UnityEngine.InputSystem.Utilities", "SavedStructState`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore, "UnityEngine.InputSystem.Utilities", "SavedStructState`1/TypedRestore");
