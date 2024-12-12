#pragma once
// IWYU pragma private; include "Zenject/ArrayPool_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__StaticMemoryPoolBaseBase_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayPool_1)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Zenject {
template <typename T> class ArrayPool_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::ArrayPool_1);
// Dependencies Zenject.StaticMemoryPoolBaseBase`1<TValue>
namespace Zenject {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Zenject.ArrayPool`1<T>
class CORDL_TYPE ArrayPool_1 : public ::Zenject::StaticMemoryPoolBaseBase_1<::ArrayW<T, ::Array<T>*>> {
public:
  // Declarations
  /// @brief Field _length, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__length, put = __cordl_internal_set__length)) int32_t _length;

  /// @brief Field _pools, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__pools, put = setStaticF__pools)) ::System::Collections::Generic::Dictionary_2<int32_t, ::Zenject::ArrayPool_1<T>*>* _pools;

  /// @brief Method Alloc, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<T, ::Array<T>*> Alloc();

  /// @brief Method GetPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::ArrayPool_1<T>* GetPool(int32_t length);

  static inline ::Zenject::ArrayPool_1<T>* New_ctor(int32_t length);

  /// @brief Method OnDespawned, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void OnDespawned(::ArrayW<T, ::Array<T>*> arr);

  /// @brief Method Spawn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<T, ::Array<T>*> Spawn();

  constexpr int32_t const& __cordl_internal_get__length() const;

  constexpr int32_t& __cordl_internal_get__length();

  constexpr void __cordl_internal_set__length(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t length);

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::Zenject::ArrayPool_1<T>*>* getStaticF__pools();

  static inline void setStaticF__pools(::System::Collections::Generic::Dictionary_2<int32_t, ::Zenject::ArrayPool_1<T>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayPool_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArrayPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayPool_1(ArrayPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayPool_1(ArrayPool_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12431 };

  /// @brief Field _length, offset: 0x24, size: 0x4, def value: None
  int32_t ____length;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::ArrayPool_1, "Zenject", "ArrayPool`1");
