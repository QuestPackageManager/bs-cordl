#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/Debouncer_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Debouncer_1)
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace BGLib::UnityExtension {
template <typename T> class Debouncer_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::BGLib::UnityExtension::Debouncer_1);
// Dependencies System.IDisposable, System.Object
namespace BGLib::UnityExtension {
// cpp template
template <typename T>
// Is value type: false
// CS Name: BGLib.UnityExtension.Debouncer`1<T>
class CORDL_TYPE Debouncer_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__callback, put = __cordl_internal_set__callback)) ::System::Action_1<T>* _callback;

  /// @brief Field _debounceDelaySeconds, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__debounceDelaySeconds, put = __cordl_internal_set__debounceDelaySeconds)) float_t _debounceDelaySeconds;

  /// @brief Field _debounceQueue, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__debounceQueue, put = __cordl_internal_set__debounceQueue)) ::System::Collections::Generic::Queue_1<T>* _debounceQueue;

  /// @brief Field _nextCallbackTime, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__nextCallbackTime, put = __cordl_internal_set__nextCallbackTime)) float_t _nextCallbackTime;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Enqueue(T value);

  /// @brief Method GetCurrentTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline float_t GetCurrentTime();

  static inline ::BGLib::UnityExtension::Debouncer_1<T>* New_ctor(::System::Action_1<T>* callback, float_t debounceDelaySeconds);

  /// @brief Method Tick, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Tick();

  constexpr ::System::Action_1<T>* const& __cordl_internal_get__callback() const;

  constexpr ::System::Action_1<T>*& __cordl_internal_get__callback();

  constexpr float_t const& __cordl_internal_get__debounceDelaySeconds() const;

  constexpr float_t& __cordl_internal_get__debounceDelaySeconds();

  constexpr ::System::Collections::Generic::Queue_1<T>* const& __cordl_internal_get__debounceQueue() const;

  constexpr ::System::Collections::Generic::Queue_1<T>*& __cordl_internal_get__debounceQueue();

  constexpr float_t const& __cordl_internal_get__nextCallbackTime() const;

  constexpr float_t& __cordl_internal_get__nextCallbackTime();

  constexpr void __cordl_internal_set__callback(::System::Action_1<T>* value);

  constexpr void __cordl_internal_set__debounceDelaySeconds(float_t value);

  constexpr void __cordl_internal_set__debounceQueue(::System::Collections::Generic::Queue_1<T>* value);

  constexpr void __cordl_internal_set__nextCallbackTime(float_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Action_1<T>* callback, float_t debounceDelaySeconds);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Debouncer_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Debouncer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Debouncer_1(Debouncer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Debouncer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Debouncer_1(Debouncer_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17164 };

  /// @brief Field _callback, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<T>* ____callback;

  /// @brief Field _debounceDelaySeconds, offset: 0x18, size: 0x4, def value: None
  float_t ____debounceDelaySeconds;

  /// @brief Field _debounceQueue, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<T>* ____debounceQueue;

  /// @brief Field _nextCallbackTime, offset: 0x28, size: 0x4, def value: None
  float_t ____nextCallbackTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGLib::UnityExtension
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BGLib::UnityExtension::Debouncer_1, "BGLib.UnityExtension", "Debouncer`1");
