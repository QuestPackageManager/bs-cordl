#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Observer_1)
namespace System {
class Exception;
}
namespace System {
template <typename T> class IObserver_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> class Observer_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::Utilities::Observer_1);
// Type: UnityEngine.InputSystem.Utilities::Observer`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template <typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6689))
// CS Name: ::UnityEngine.InputSystem.Utilities::Observer`1<TValue>*
class CORDL_TYPE Observer_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_OnNext, offset 0x10, size 0x8
  __declspec(property(get = __get_m_OnNext, put = __set_m_OnNext))::System::Action_1<TValue>* m_OnNext;

  /// @brief Field m_OnCompleted, offset 0x18, size 0x8
  __declspec(property(get = __get_m_OnCompleted, put = __set_m_OnCompleted))::System::Action* m_OnCompleted;

  /// @brief Convert operator to "::System::IObserver_1<TValue>"
  constexpr operator ::System::IObserver_1<TValue>*() noexcept;

  constexpr ::System::Action_1<TValue>*& __get_m_OnNext();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<TValue>*> const& __get_m_OnNext() const;

  constexpr void __set_m_OnNext(::System::Action_1<TValue>* value);

  constexpr ::System::Action*& __get_m_OnCompleted();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_m_OnCompleted() const;

  constexpr void __set_m_OnCompleted(::System::Action* value);

  static inline ::UnityEngine::InputSystem::Utilities::Observer_1<TValue>* New_ctor(::System::Action_1<TValue>* onNext, ::System::Action* onCompleted);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::Action_1<TValue>* onNext, ::System::Action* onCompleted);

  /// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void OnCompleted();

  /// @brief Method OnError addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void OnError(::System::Exception* error);

  /// @brief Method OnNext addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void OnNext(TValue evt);

  // Ctor Parameters [CppParam { name: "", ty: "Observer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Observer_1(Observer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Observer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Observer_1(Observer_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Observer_1();

public:
  /// @brief Field m_OnNext, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<TValue>* ___m_OnNext;

  /// @brief Field m_OnCompleted, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___m_OnCompleted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::Observer_1, "UnityEngine.InputSystem.Utilities", "Observer`1");
