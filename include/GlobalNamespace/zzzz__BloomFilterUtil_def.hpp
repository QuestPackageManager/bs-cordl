#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomFilterUtil.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BloomFilterUtil)
namespace GlobalNamespace {
template <typename T> class BloomFilterUtil___c__DisplayClass1_0_1;
}
namespace GlobalNamespace {
template <typename T> class BloomFilterUtil___c__DisplayClass2_0_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomFilterUtil;
}
namespace GlobalNamespace {
template <typename T> class BloomFilterUtil___c__DisplayClass1_0_1;
}
namespace GlobalNamespace {
template <typename T> class BloomFilterUtil___c__DisplayClass2_0_1;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomFilterUtil);
MARK_GEN_REF_PTR_T(::GlobalNamespace::BloomFilterUtil___c__DisplayClass1_0_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::BloomFilterUtil___c__DisplayClass2_0_1);
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: BloomFilterUtil/<>c__DisplayClass1_0`1<T>
class CORDL_TYPE BloomFilterUtil___c__DisplayClass1_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field hashBits, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_hashBits, put = __cordl_internal_set_hashBits)) int32_t hashBits;

  /// @brief Field hashCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_hashCount, put = __cordl_internal_set_hashCount)) int32_t hashCount;

  static inline ::GlobalNamespace::BloomFilterUtil___c__DisplayClass1_0_1<T>* New_ctor();

  /// @brief Method <ToBloomFilter>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T _ToBloomFilter_b__0(T bloomFilter, ::StringW str);

  constexpr int32_t const& __cordl_internal_get_hashBits() const;

  constexpr int32_t& __cordl_internal_get_hashBits();

  constexpr int32_t const& __cordl_internal_get_hashCount() const;

  constexpr int32_t& __cordl_internal_get_hashCount();

  constexpr void __cordl_internal_set_hashBits(int32_t value);

  constexpr void __cordl_internal_set_hashCount(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomFilterUtil___c__DisplayClass1_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomFilterUtil___c__DisplayClass1_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomFilterUtil___c__DisplayClass1_0_1(BloomFilterUtil___c__DisplayClass1_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomFilterUtil___c__DisplayClass1_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomFilterUtil___c__DisplayClass1_0_1(BloomFilterUtil___c__DisplayClass1_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16977 };

  /// @brief Field hashCount, offset: 0x10, size: 0x4, def value: None
  int32_t ___hashCount;

  /// @brief Field hashBits, offset: 0x14, size: 0x4, def value: None
  int32_t ___hashBits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: BloomFilterUtil/<>c__DisplayClass2_0`1<T>
class CORDL_TYPE BloomFilterUtil___c__DisplayClass2_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field hashBits, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_hashBits, put = __cordl_internal_set_hashBits)) int32_t hashBits;

  /// @brief Field hashCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_hashCount, put = __cordl_internal_set_hashCount)) int32_t hashCount;

  static inline ::GlobalNamespace::BloomFilterUtil___c__DisplayClass2_0_1<T>* New_ctor();

  /// @brief Method <ToBloomFilter>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T _ToBloomFilter_b__0(T bloomFilter, uint32_t hash);

  constexpr int32_t const& __cordl_internal_get_hashBits() const;

  constexpr int32_t& __cordl_internal_get_hashBits();

  constexpr int32_t const& __cordl_internal_get_hashCount() const;

  constexpr int32_t& __cordl_internal_get_hashCount();

  constexpr void __cordl_internal_set_hashBits(int32_t value);

  constexpr void __cordl_internal_set_hashCount(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomFilterUtil___c__DisplayClass2_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomFilterUtil___c__DisplayClass2_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomFilterUtil___c__DisplayClass2_0_1(BloomFilterUtil___c__DisplayClass2_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomFilterUtil___c__DisplayClass2_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomFilterUtil___c__DisplayClass2_0_1(BloomFilterUtil___c__DisplayClass2_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16978 };

  /// @brief Field hashCount, offset: 0x10, size: 0x4, def value: None
  int32_t ___hashCount;

  /// @brief Field hashBits, offset: 0x14, size: 0x4, def value: None
  int32_t ___hashBits;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomFilterUtil
class CORDL_TYPE BloomFilterUtil : public ::System::Object {
public:
  // Declarations
  template <typename T> using __c__DisplayClass1_0_1 = ::GlobalNamespace::BloomFilterUtil___c__DisplayClass1_0_1<T>;

  template <typename T> using __c__DisplayClass2_0_1 = ::GlobalNamespace::BloomFilterUtil___c__DisplayClass2_0_1<T>;

  /// @brief Method AddBloomFilterEntry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T AddBloomFilterEntry(T bitMask, ::StringW value, int32_t hashCount, int32_t hashBits);

  /// @brief Method AddBloomFilterEntryHash, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T AddBloomFilterEntryHash(T bitMask, uint32_t hash, int32_t hashCount, int32_t hashBits);

  /// @brief Method ContainsBloomFilterEntry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool ContainsBloomFilterEntry(T bitMask, ::StringW value, int32_t hashCount, int32_t hashBits);

  /// @brief Method ContainsBloomFilterEntryHash, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool ContainsBloomFilterEntryHash(T bitMask, uint32_t hash, int32_t hashCount, int32_t hashBits);

  /// @brief Method ToBloomFilter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T ToBloomFilter(::System::Collections::Generic::IEnumerable_1<uint32_t>* hashes, int32_t hashCount, int32_t hashBits);

  /// @brief Method ToBloomFilter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T ToBloomFilter(::System::Collections::Generic::IEnumerable_1<::StringW>* strings, int32_t hashCount, int32_t hashBits);

  /// @brief Method ToBloomFilter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T ToBloomFilter(::StringW value, int32_t hashCount, int32_t hashBits);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomFilterUtil();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomFilterUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomFilterUtil(BloomFilterUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomFilterUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomFilterUtil(BloomFilterUtil const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16979 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomFilterUtil, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomFilterUtil);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomFilterUtil*, "", "BloomFilterUtil");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::BloomFilterUtil___c__DisplayClass1_0_1, "", "BloomFilterUtil/<>c__DisplayClass1_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::BloomFilterUtil___c__DisplayClass2_0_1, "", "BloomFilterUtil/<>c__DisplayClass2_0`1");
