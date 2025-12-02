#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/ThreadSafeStore_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ThreadSafeStore_2)
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class ConcurrentDictionary_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
template <typename TKey, typename TValue> class ThreadSafeStore_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Utilities::ThreadSafeStore_2);
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.ThreadSafeStore`2<TKey,TValue>
class CORDL_TYPE ThreadSafeStore_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _concurrentStore, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__concurrentStore,
                      put = __cordl_internal_set__concurrentStore)) ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>* _concurrentStore;

  /// @brief Field _creator, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__creator, put = __cordl_internal_set__creator)) ::System::Func_2<TKey, TValue>* _creator;

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue Get(TKey key);

  static inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>* New_ctor(::System::Func_2<TKey, TValue>* creator);

  constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>* const& __cordl_internal_get__concurrentStore() const;

  constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*& __cordl_internal_get__concurrentStore();

  constexpr ::System::Func_2<TKey, TValue>* const& __cordl_internal_get__creator() const;

  constexpr ::System::Func_2<TKey, TValue>*& __cordl_internal_get__creator();

  constexpr void __cordl_internal_set__concurrentStore(::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>* value);

  constexpr void __cordl_internal_set__creator(::System::Func_2<TKey, TValue>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_2<TKey, TValue>* creator);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThreadSafeStore_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThreadSafeStore_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThreadSafeStore_2(ThreadSafeStore_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThreadSafeStore_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThreadSafeStore_2(ThreadSafeStore_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13435 };

  /// @brief Field _concurrentStore, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>* ____concurrentStore;

  /// @brief Field _creator, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<TKey, TValue>* ____creator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::ThreadSafeStore_2, "Newtonsoft.Json.Utilities", "ThreadSafeStore`2");
