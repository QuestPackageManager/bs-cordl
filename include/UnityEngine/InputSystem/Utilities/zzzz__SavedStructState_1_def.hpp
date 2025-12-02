#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/SavedStructState_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
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
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::Utilities {
class ISavedState;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename T> class SavedStructState_1_TypedRestore;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
template <typename T> class SavedStructState_1;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename T> class SavedStructState_1_TypedRestore;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::Utilities::SavedStructState_1);
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore);
// Dependencies System.MulticastDelegate
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.InputSystem.Utilities.SavedStructState`1/TypedRestore<T>
class CORDL_TYPE SavedStructState_1_TypedRestore : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<T> state, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void EndInvoke(::ByRef<T> state, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(::ByRef<T> state);

  static inline ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SavedStructState_1_TypedRestore();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SavedStructState_1_TypedRestore", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SavedStructState_1_TypedRestore(SavedStructState_1_TypedRestore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SavedStructState_1_TypedRestore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SavedStructState_1_TypedRestore(SavedStructState_1_TypedRestore const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9172 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Utilities
// Dependencies System.Object
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.InputSystem.Utilities.SavedStructState`1<T>
class CORDL_TYPE SavedStructState_1 : public ::System::Object {
public:
  // Declarations
  using TypedRestore = ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>;

  /// @brief Field m_RestoreAction, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RestoreAction,
                      put = __cordl_internal_set_m_RestoreAction)) ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>* m_RestoreAction;

  /// @brief Field m_State, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_State, put = __cordl_internal_set_m_State)) T m_State;

  /// @brief Field m_StaticDisposeCurrentState, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StaticDisposeCurrentState, put = __cordl_internal_set_m_StaticDisposeCurrentState)) ::System::Action* m_StaticDisposeCurrentState;

  /// @brief Convert operator to "::UnityEngine::InputSystem::Utilities::ISavedState"
  constexpr operator ::UnityEngine::InputSystem::Utilities::ISavedState*() noexcept;

  static inline ::UnityEngine::InputSystem::Utilities::SavedStructState_1<T>* New_ctor(::ByRef<T> state, ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>* restoreAction,
                                                                                       ::System::Action* staticDisposeCurrentState);

  /// @brief Method RestoreSavedState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void RestoreSavedState();

  /// @brief Method StaticDisposeCurrentState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void StaticDisposeCurrentState();

  constexpr ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>* const& __cordl_internal_get_m_RestoreAction() const;

  constexpr ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>*& __cordl_internal_get_m_RestoreAction();

  constexpr T const& __cordl_internal_get_m_State() const;

  constexpr T& __cordl_internal_get_m_State();

  constexpr ::System::Action* const& __cordl_internal_get_m_StaticDisposeCurrentState() const;

  constexpr ::System::Action*& __cordl_internal_get_m_StaticDisposeCurrentState();

  constexpr void __cordl_internal_set_m_RestoreAction(::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>* value);

  constexpr void __cordl_internal_set_m_State(T value);

  constexpr void __cordl_internal_set_m_StaticDisposeCurrentState(::System::Action* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<T> state, ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>* restoreAction, ::System::Action* staticDisposeCurrentState);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9173 };

  /// @brief Field m_State, offset: 0x10, size: 0x8, def value: None
  T ___m_State;

  /// @brief Field m_RestoreAction, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<T>* ___m_RestoreAction;

  /// @brief Field m_StaticDisposeCurrentState, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___m_StaticDisposeCurrentState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::SavedStructState_1, "UnityEngine.InputSystem.Utilities", "SavedStructState`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore, "UnityEngine.InputSystem.Utilities", "SavedStructState`1/TypedRestore");
