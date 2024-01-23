#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "IgnoranceThirdparty/zzzz__Volatile_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RingBuffer_1)
// Forward declare root types
namespace IgnoranceThirdparty {
template <typename T> class RingBuffer_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::IgnoranceThirdparty::RingBuffer_1);
// Type: IgnoranceThirdparty::RingBuffer`1
// SizeInfo { instance_size: 288, native_size: 288, calculated_instance_size: 288, calculated_native_size: 288, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace IgnoranceThirdparty {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(15211))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15210))
// CS Name: ::IgnoranceThirdparty::RingBuffer`1<T>*
class CORDL_TYPE RingBuffer_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _entries, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__entries, put = __cordl_internal_set__entries))::ArrayW<T, ::Array<T>*> _entries;

  /// @brief Field _modMask, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__modMask, put = __cordl_internal_set__modMask)) int32_t _modMask;

  /// @brief Field _consumerCursor, offset 0x20, size 0x80
  __declspec(property(get = __cordl_internal_get__consumerCursor, put = __cordl_internal_set__consumerCursor))::IgnoranceThirdparty::__Volatile__PaddedLong _consumerCursor;

  /// @brief Field _producerCursor, offset 0xa0, size 0x80
  __declspec(property(get = __cordl_internal_get__producerCursor, put = __cordl_internal_set__producerCursor))::IgnoranceThirdparty::__Volatile__PaddedLong _producerCursor;

  __declspec(property(get = get_Capacity)) int32_t Capacity;

  __declspec(property(get = get_Item, put = set_Item)) T Item[];

  __declspec(property(get = get_Count)) int32_t Count;

  constexpr ::ArrayW<T, ::Array<T>*>& __cordl_internal_get__entries();

  constexpr ::ArrayW<T, ::Array<T>*> const& __cordl_internal_get__entries() const;

  constexpr void __cordl_internal_set__entries(::ArrayW<T, ::Array<T>*> value);

  constexpr int32_t& __cordl_internal_get__modMask();

  constexpr int32_t const& __cordl_internal_get__modMask() const;

  constexpr void __cordl_internal_set__modMask(int32_t value);

  constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong& __cordl_internal_get__consumerCursor();

  constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong const& __cordl_internal_get__consumerCursor() const;

  constexpr void __cordl_internal_set__consumerCursor(::IgnoranceThirdparty::__Volatile__PaddedLong value);

  constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong& __cordl_internal_get__producerCursor();

  constexpr ::IgnoranceThirdparty::__Volatile__PaddedLong const& __cordl_internal_get__producerCursor() const;

  constexpr void __cordl_internal_set__producerCursor(::IgnoranceThirdparty::__Volatile__PaddedLong value);

  static inline ::IgnoranceThirdparty::RingBuffer_1<T>* New_ctor(int32_t capacity);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  /// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Capacity();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Item(int64_t index);

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Item(int64_t index, T value);

  /// @brief Method Dequeue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Dequeue();

  /// @brief Method TryDequeue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryDequeue(ByRef<T> obj);

  /// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Enqueue(T item);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method NextPowerOfTwo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline int32_t NextPowerOfTwo(int32_t x);

  // Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RingBuffer_1(RingBuffer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RingBuffer_1(RingBuffer_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RingBuffer_1();

public:
  /// @brief Field _entries, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> ____entries;

  /// @brief Field _modMask, offset: 0x18, size: 0x4, def value: None
  int32_t ____modMask;

  /// @brief Field _consumerCursor, offset: 0x20, size: 0x80, def value: None
  ::IgnoranceThirdparty::__Volatile__PaddedLong ____consumerCursor;

  /// @brief Field _producerCursor, offset: 0xa0, size: 0x80, def value: None
  ::IgnoranceThirdparty::__Volatile__PaddedLong ____producerCursor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace IgnoranceThirdparty
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::IgnoranceThirdparty::RingBuffer_1, "IgnoranceThirdparty", "RingBuffer`1");
