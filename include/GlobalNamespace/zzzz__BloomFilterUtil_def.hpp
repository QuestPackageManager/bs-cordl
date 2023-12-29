#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BloomFilterUtil)
namespace GlobalNamespace {
template <typename T> class __BloomFilterUtil____c__DisplayClass2_0_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomFilterUtil;
}
namespace GlobalNamespace {
template <typename T> class __BloomFilterUtil____c__DisplayClass2_0_1;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomFilterUtil);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1);
// Type: ::<>c__DisplayClass2_0`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15142))
// CS Name: ::BloomFilterUtil::<>c__DisplayClass2_0`1<T>*
class CORDL_TYPE __BloomFilterUtil____c__DisplayClass2_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field hashCount, offset 0x10, size 0x4
  __declspec(property(get = __get_hashCount, put = __set_hashCount)) int32_t hashCount;

  /// @brief Field hashBits, offset 0x14, size 0x4
  __declspec(property(get = __get_hashBits, put = __set_hashBits)) int32_t hashBits;

  constexpr int32_t& __get_hashCount();

  constexpr int32_t const& __get_hashCount() const;

  constexpr void __set_hashCount(int32_t value);

  constexpr int32_t& __get_hashBits();

  constexpr int32_t const& __get_hashBits() const;

  constexpr void __set_hashBits(int32_t value);

  static inline ::GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <ToBloomFilter>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline T _ToBloomFilter_b__0(T bloomFilter, ::StringW str);

  // Ctor Parameters [CppParam { name: "", ty: "__BloomFilterUtil____c__DisplayClass2_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BloomFilterUtil____c__DisplayClass2_0_1(__BloomFilterUtil____c__DisplayClass2_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BloomFilterUtil____c__DisplayClass2_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BloomFilterUtil____c__DisplayClass2_0_1(__BloomFilterUtil____c__DisplayClass2_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BloomFilterUtil____c__DisplayClass2_0_1();

public:
  /// @brief Field hashCount, offset: 0x10, size: 0x4, def value: None
  int32_t ___hashCount;

  /// @brief Field hashBits, offset: 0x14, size: 0x4, def value: None
  int32_t ___hashBits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::BloomFilterUtil
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15143))
// CS Name: ::BloomFilterUtil*
class CORDL_TYPE BloomFilterUtil : public ::System::Object {
public:
  // Declarations
  template <typename T> using __c__DisplayClass2_0_1 = ::GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<T>;

  /// @brief Method MurmurHash2 addr 0x122fd7c size 0x174 virtual false final false
  static inline uint32_t MurmurHash2(::StringW key);

  /// @brief Method ToBloomFilter addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T ToBloomFilter(::StringW value, int32_t hashCount, int32_t hashBits);

  /// @brief Method ToBloomFilter addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T ToBloomFilter(::System::Collections::Generic::IEnumerable_1<::StringW>* strings, int32_t hashCount, int32_t hashBits);

  /// @brief Method AddBloomFilterEntry addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T AddBloomFilterEntry(T bitMask, ::StringW value, int32_t hashCount, int32_t hashBits);

  /// @brief Method ContainsBloomFilterEntry addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline bool ContainsBloomFilterEntry(T bitMask, ::StringW value, int32_t hashCount, int32_t hashBits);

  // Ctor Parameters [CppParam { name: "", ty: "BloomFilterUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomFilterUtil(BloomFilterUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomFilterUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomFilterUtil(BloomFilterUtil const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomFilterUtil();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomFilterUtil, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomFilterUtil);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomFilterUtil*, "", "BloomFilterUtil");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1, "", "BloomFilterUtil/<>c__DisplayClass2_0`1");
