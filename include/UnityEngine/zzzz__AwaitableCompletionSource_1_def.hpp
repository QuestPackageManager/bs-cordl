#pragma once
// IWYU pragma private; include "UnityEngine/AwaitableCompletionSource_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AwaitableCompletionSource_1)
namespace System {
class Exception;
}
namespace UnityEngine {
template <typename T> class Awaitable_1;
}
// Forward declare root types
namespace UnityEngine {
template <typename T> class AwaitableCompletionSource_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::AwaitableCompletionSource_1);
// Dependencies System.Object
namespace UnityEngine {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.AwaitableCompletionSource`1<T>
class CORDL_TYPE AwaitableCompletionSource_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Awaitable, put = set_Awaitable)) ::UnityEngine::Awaitable_1<T>* Awaitable;

  /// @brief Field <Awaitable>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Awaitable_k__BackingField, put = __cordl_internal_set__Awaitable_k__BackingField)) ::UnityEngine::Awaitable_1<T>* _Awaitable_k__BackingField;

  /// @brief Field _state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state)) int32_t _state;

  /// @brief Method CheckAndAcquireCompletionState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool CheckAndAcquireCompletionState();

  static inline ::UnityEngine::AwaitableCompletionSource_1<T>* New_ctor();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SetException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetException(::System::Exception* exception);

  /// @brief Method SetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetResult(::ByRef<T> value);

  /// @brief Method TrySetException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TrySetException(::System::Exception* exception);

  /// @brief Method TrySetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TrySetResult(::ByRef<T> value);

  constexpr ::UnityEngine::Awaitable_1<T>* const& __cordl_internal_get__Awaitable_k__BackingField() const;

  constexpr ::UnityEngine::Awaitable_1<T>*& __cordl_internal_get__Awaitable_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__state() const;

  constexpr int32_t& __cordl_internal_get__state();

  constexpr void __cordl_internal_set__Awaitable_k__BackingField(::UnityEngine::Awaitable_1<T>* value);

  constexpr void __cordl_internal_set__state(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Awaitable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::Awaitable_1<T>* get_Awaitable();

  /// @brief Method set_Awaitable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Awaitable(::UnityEngine::Awaitable_1<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AwaitableCompletionSource_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AwaitableCompletionSource_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AwaitableCompletionSource_1(AwaitableCompletionSource_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AwaitableCompletionSource_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AwaitableCompletionSource_1(AwaitableCompletionSource_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10304 };

  /// @brief Field _state, offset: 0x10, size: 0x4, def value: None
  int32_t ____state;

  /// @brief Field <Awaitable>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Awaitable_1<T>* ____Awaitable_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::AwaitableCompletionSource_1, "UnityEngine", "AwaitableCompletionSource`1");
