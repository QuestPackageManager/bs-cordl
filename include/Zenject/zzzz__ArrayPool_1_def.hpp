#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__StaticMemoryPoolBaseBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Zenject::ArrayPool`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11084), inst: 2805 }), TypeDefinitionIndex(TypeDefinitionIndex(11084))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11094))
// CS Name: ::Zenject::ArrayPool`1<T>*
class CORDL_TYPE ArrayPool_1 : public ::Zenject::StaticMemoryPoolBaseBase_1<::ArrayW<T, ::Array<T>*>> {
public:
  // Declarations
  /// @brief Field _length, offset 0x24, size 0x4
  __declspec(property(get = __get__length, put = __set__length)) int32_t _length;

  /// @brief Field _pools, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__pools, put = setStaticF__pools))::System::Collections::Generic::Dictionary_2<int32_t, ::Zenject::ArrayPool_1<T>*>* _pools;

  constexpr int32_t& __get__length();

  constexpr int32_t const& __get__length() const;

  constexpr void __set__length(int32_t value);

  static inline void setStaticF__pools(::System::Collections::Generic::Dictionary_2<int32_t, ::Zenject::ArrayPool_1<T>*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::Zenject::ArrayPool_1<T>*>* getStaticF__pools();

  static inline ::Zenject::ArrayPool_1<T>* New_ctor(int32_t length);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t length);

  /// @brief Method OnDespawned, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void OnDespawned(::ArrayW<T, ::Array<T>*> arr);

  /// @brief Method Spawn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<T, ::Array<T>*> Spawn();

  /// @brief Method Alloc, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<T, ::Array<T>*> Alloc();

  /// @brief Method GetPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::ArrayPool_1<T>* GetPool(int32_t length);

  // Ctor Parameters [CppParam { name: "", ty: "ArrayPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayPool_1(ArrayPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayPool_1(ArrayPool_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayPool_1();

public:
  /// @brief Field _length, offset: 0x24, size: 0x4, def value: None
  int32_t ____length;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::ArrayPool_1, "Zenject", "ArrayPool`1");
