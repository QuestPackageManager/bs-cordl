#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ThreadSafeStore_2)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
template <typename TKey, typename TValue> class ThreadSafeStore_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Utilities::ThreadSafeStore_2);
// Type: Newtonsoft.Json.Utilities::ThreadSafeStore`2
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11868))
// CS Name: ::Newtonsoft.Json.Utilities::ThreadSafeStore`2<TKey,TValue>*
class CORDL_TYPE ThreadSafeStore_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _lock, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__lock, put = __cordl_internal_set__lock))::System::Object* _lock;

  /// @brief Field _store, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__store, put = __cordl_internal_set__store))::System::Collections::Generic::Dictionary_2<TKey, TValue>* _store;

  /// @brief Field _creator, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__creator, put = __cordl_internal_set__creator))::System::Func_2<TKey, TValue>* _creator;

  constexpr ::System::Object*& __cordl_internal_get__lock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__lock() const;

  constexpr void __cordl_internal_set__lock(::System::Object* value);

  constexpr ::System::Collections::Generic::Dictionary_2<TKey, TValue>*& __cordl_internal_get__store();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TKey, TValue>*> const& __cordl_internal_get__store() const;

  constexpr void __cordl_internal_set__store(::System::Collections::Generic::Dictionary_2<TKey, TValue>* value);

  constexpr ::System::Func_2<TKey, TValue>*& __cordl_internal_get__creator();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TKey, TValue>*> const& __cordl_internal_get__creator() const;

  constexpr void __cordl_internal_set__creator(::System::Func_2<TKey, TValue>* value);

  static inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey, TValue>* New_ctor(::System::Func_2<TKey, TValue>* creator);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_2<TKey, TValue>* creator);

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue Get(TKey key);

  /// @brief Method AddValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue AddValue(TKey key);

  // Ctor Parameters [CppParam { name: "", ty: "ThreadSafeStore_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThreadSafeStore_2(ThreadSafeStore_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThreadSafeStore_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThreadSafeStore_2(ThreadSafeStore_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThreadSafeStore_2();

public:
  /// @brief Field _lock, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____lock;

  /// @brief Field _store, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<TKey, TValue>* ____store;

  /// @brief Field _creator, offset: 0x20, size: 0x8, def value: None
  ::System::Func_2<TKey, TValue>* ____creator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::ThreadSafeStore_2, "Newtonsoft.Json.Utilities", "ThreadSafeStore`2");
