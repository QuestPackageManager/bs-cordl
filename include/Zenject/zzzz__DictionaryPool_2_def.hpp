#pragma once
// IWYU pragma private; include "Zenject/DictionaryPool_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__StaticMemoryPool_1_def.hpp"
CORDL_MODULE_EXPORT(DictionaryPool_2)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Zenject {
template <typename TKey, typename TValue> class DictionaryPool_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::DictionaryPool_2);
// Dependencies Zenject.StaticMemoryPool`1<TValue>
namespace Zenject {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: Zenject.DictionaryPool`2<TKey,TValue>
class CORDL_TYPE DictionaryPool_2 : public ::Zenject::StaticMemoryPool_1<::System::Collections::Generic::Dictionary_2<TKey, TValue>*> {
public:
  // Declarations
  /// @brief Field _instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__instance, put = setStaticF__instance)) ::Zenject::DictionaryPool_2<TKey, TValue>* _instance;

  static inline ::Zenject::DictionaryPool_2<TKey, TValue>* New_ctor();

  /// @brief Method OnDespawned, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void OnDespawned(::System::Collections::Generic::Dictionary_2<TKey, TValue>* items);

  /// @brief Method OnSpawned, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void OnSpawned(::System::Collections::Generic::Dictionary_2<TKey, TValue>* items);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::DictionaryPool_2<TKey, TValue>* getStaticF__instance();

  /// @brief Method get_Instance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::DictionaryPool_2<TKey, TValue>* get_Instance();

  static inline void setStaticF__instance(::Zenject::DictionaryPool_2<TKey, TValue>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DictionaryPool_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DictionaryPool_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DictionaryPool_2(DictionaryPool_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DictionaryPool_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DictionaryPool_2(DictionaryPool_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12432 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::DictionaryPool_2, "Zenject", "DictionaryPool`2");
