#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/Observer_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IObserver_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Observer_1)
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> class Observer_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::Utilities::Observer_1);
// Dependencies System.IObserver`1<T>, System.Object
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: UnityEngine.InputSystem.Utilities.Observer`1<TValue>
class CORDL_TYPE Observer_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_OnCompleted, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnCompleted, put = __cordl_internal_set_m_OnCompleted)) ::System::Action* m_OnCompleted;

  /// @brief Field m_OnNext, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnNext, put = __cordl_internal_set_m_OnNext)) ::System::Action_1<TValue>* m_OnNext;

  /// @brief Convert operator to "::System::IObserver_1<TValue>"
  constexpr operator ::System::IObserver_1<TValue>*() noexcept;

  static inline ::UnityEngine::InputSystem::Utilities::Observer_1<TValue>* New_ctor(::System::Action_1<TValue>* onNext, ::System::Action* onCompleted);

  /// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void OnCompleted();

  /// @brief Method OnError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void OnError(::System::Exception* error);

  /// @brief Method OnNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void OnNext(TValue evt);

  constexpr ::System::Action* const& __cordl_internal_get_m_OnCompleted() const;

  constexpr ::System::Action*& __cordl_internal_get_m_OnCompleted();

  constexpr ::System::Action_1<TValue>* const& __cordl_internal_get_m_OnNext() const;

  constexpr ::System::Action_1<TValue>*& __cordl_internal_get_m_OnNext();

  constexpr void __cordl_internal_set_m_OnCompleted(::System::Action* value);

  constexpr void __cordl_internal_set_m_OnNext(::System::Action_1<TValue>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Action_1<TValue>* onNext, ::System::Action* onCompleted);

  /// @brief Convert to "::System::IObserver_1<TValue>"
  constexpr ::System::IObserver_1<TValue>* i___System__IObserver_1_TValue_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Observer_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Observer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Observer_1(Observer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Observer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Observer_1(Observer_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7099 };

  /// @brief Field m_OnNext, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<TValue>* ___m_OnNext;

  /// @brief Field m_OnCompleted, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___m_OnCompleted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::Observer_1, "UnityEngine.InputSystem.Utilities", "Observer`1");
