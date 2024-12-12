#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/TakeNObservable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IObservable_1_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TakeNObservable_1)
namespace System {
class Exception;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> class IObservable_1;
}
namespace System {
template <typename T> class IObserver_1;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> class TakeNObservable_1_Take;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> class TakeNObservable_1;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> class TakeNObservable_1_Take;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::Utilities::TakeNObservable_1);
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take);
// Dependencies System.IObserver`1<T>, System.Object
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: UnityEngine.InputSystem.Utilities.TakeNObservable`1/Take<TValue>
class CORDL_TYPE TakeNObservable_1_Take : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Observer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Observer, put = __cordl_internal_set_m_Observer)) ::System::IObserver_1<TValue>* m_Observer;

  /// @brief Field m_Remaining, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Remaining, put = __cordl_internal_set_m_Remaining)) int32_t m_Remaining;

  /// @brief Convert operator to "::System::IObserver_1<TValue>"
  constexpr operator ::System::IObserver_1<TValue>*() noexcept;

  static inline ::UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>* New_ctor(::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>* observable,
                                                                                                ::System::IObserver_1<TValue>* observer);

  /// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void OnCompleted();

  /// @brief Method OnError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void OnError(::System::Exception* error);

  /// @brief Method OnNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void OnNext(TValue evt);

  constexpr ::System::IObserver_1<TValue>* const& __cordl_internal_get_m_Observer() const;

  constexpr ::System::IObserver_1<TValue>*& __cordl_internal_get_m_Observer();

  constexpr int32_t const& __cordl_internal_get_m_Remaining() const;

  constexpr int32_t& __cordl_internal_get_m_Remaining();

  constexpr void __cordl_internal_set_m_Observer(::System::IObserver_1<TValue>* value);

  constexpr void __cordl_internal_set_m_Remaining(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>* observable, ::System::IObserver_1<TValue>* observer);

  /// @brief Convert to "::System::IObserver_1<TValue>"
  constexpr ::System::IObserver_1<TValue>* i___System__IObserver_1_TValue_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TakeNObservable_1_Take();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TakeNObservable_1_Take", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TakeNObservable_1_Take(TakeNObservable_1_Take&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TakeNObservable_1_Take", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TakeNObservable_1_Take(TakeNObservable_1_Take const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7097 };

  /// @brief Field m_Observer, offset: 0x10, size: 0x8, def value: None
  ::System::IObserver_1<TValue>* ___m_Observer;

  /// @brief Field m_Remaining, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_Remaining;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Utilities
// Dependencies System.IObservable`1<T>, System.Object
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: UnityEngine.InputSystem.Utilities.TakeNObservable`1<TValue>
class CORDL_TYPE TakeNObservable_1 : public ::System::Object {
public:
  // Declarations
  using Take = ::UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>;

  /// @brief Field m_Count, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Count, put = __cordl_internal_set_m_Count)) int32_t m_Count;

  /// @brief Field m_Source, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Source, put = __cordl_internal_set_m_Source)) ::System::IObservable_1<TValue>* m_Source;

  /// @brief Convert operator to "::System::IObservable_1<TValue>"
  constexpr operator ::System::IObservable_1<TValue>*() noexcept;

  static inline ::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>* New_ctor(::System::IObservable_1<TValue>* source, int32_t count);

  /// @brief Method Subscribe, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::IDisposable* Subscribe(::System::IObserver_1<TValue>* observer);

  constexpr int32_t const& __cordl_internal_get_m_Count() const;

  constexpr int32_t& __cordl_internal_get_m_Count();

  constexpr ::System::IObservable_1<TValue>* const& __cordl_internal_get_m_Source() const;

  constexpr ::System::IObservable_1<TValue>*& __cordl_internal_get_m_Source();

  constexpr void __cordl_internal_set_m_Count(int32_t value);

  constexpr void __cordl_internal_set_m_Source(::System::IObservable_1<TValue>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::IObservable_1<TValue>* source, int32_t count);

  /// @brief Convert to "::System::IObservable_1<TValue>"
  constexpr ::System::IObservable_1<TValue>* i___System__IObservable_1_TValue_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TakeNObservable_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TakeNObservable_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TakeNObservable_1(TakeNObservable_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TakeNObservable_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TakeNObservable_1(TakeNObservable_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7098 };

  /// @brief Field m_Source, offset: 0x10, size: 0x8, def value: None
  ::System::IObservable_1<TValue>* ___m_Source;

  /// @brief Field m_Count, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_Count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::TakeNObservable_1, "UnityEngine.InputSystem.Utilities", "TakeNObservable`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take, "UnityEngine.InputSystem.Utilities", "TakeNObservable`1/Take");
