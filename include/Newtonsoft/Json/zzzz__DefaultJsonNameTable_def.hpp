#pragma once
// IWYU pragma private; include "Newtonsoft/Json/DefaultJsonNameTable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonNameTable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultJsonNameTable)
namespace Newtonsoft::Json {
class __DefaultJsonNameTable__Entry;
}
// Forward declare root types
namespace Newtonsoft::Json {
class DefaultJsonNameTable;
}
namespace Newtonsoft::Json {
class __DefaultJsonNameTable__Entry;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::DefaultJsonNameTable);
MARK_REF_PTR_T(::Newtonsoft::Json::__DefaultJsonNameTable__Entry);
// Type: ::Entry
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: ::DefaultJsonNameTable::Entry*
class CORDL_TYPE __DefaultJsonNameTable__Entry : public ::System::Object {
public:
  // Declarations
  /// @brief Field HashCode, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_HashCode, put = __cordl_internal_set_HashCode)) int32_t HashCode;

  /// @brief Field Next, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Next, put = __cordl_internal_set_Next))::Newtonsoft::Json::__DefaultJsonNameTable__Entry* Next;

  /// @brief Field Value, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Value, put = __cordl_internal_set_Value))::StringW Value;

  static inline ::Newtonsoft::Json::__DefaultJsonNameTable__Entry* New_ctor(::StringW value, int32_t hashCode, ::Newtonsoft::Json::__DefaultJsonNameTable__Entry* next);

  constexpr int32_t const& __cordl_internal_get_HashCode() const;

  constexpr int32_t& __cordl_internal_get_HashCode();

  constexpr ::Newtonsoft::Json::__DefaultJsonNameTable__Entry*& __cordl_internal_get_Next();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::__DefaultJsonNameTable__Entry*> const& __cordl_internal_get_Next() const;

  constexpr ::StringW const& __cordl_internal_get_Value() const;

  constexpr ::StringW& __cordl_internal_get_Value();

  constexpr void __cordl_internal_set_HashCode(int32_t value);

  constexpr void __cordl_internal_set_Next(::Newtonsoft::Json::__DefaultJsonNameTable__Entry* value);

  constexpr void __cordl_internal_set_Value(::StringW value);

  /// @brief Method .ctor, addr 0x29c20e4, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::StringW value, int32_t hashCode, ::Newtonsoft::Json::__DefaultJsonNameTable__Entry* next);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DefaultJsonNameTable__Entry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DefaultJsonNameTable__Entry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DefaultJsonNameTable__Entry(__DefaultJsonNameTable__Entry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultJsonNameTable__Entry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DefaultJsonNameTable__Entry(__DefaultJsonNameTable__Entry const&) = delete;

  /// @brief Field Value, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Value;

  /// @brief Field HashCode, offset: 0x18, size: 0x4, def value: None
  int32_t ___HashCode;

  /// @brief Field Next, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::__DefaultJsonNameTable__Entry* ___Next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::__DefaultJsonNameTable__Entry, 0x28>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__DefaultJsonNameTable__Entry, ___Value) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__DefaultJsonNameTable__Entry, ___HashCode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::__DefaultJsonNameTable__Entry, ___Next) == 0x20, "Offset mismatch!");

} // namespace Newtonsoft::Json
// Type: Newtonsoft.Json::DefaultJsonNameTable
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: false
// CS Name: ::Newtonsoft.Json::DefaultJsonNameTable*
class CORDL_TYPE DefaultJsonNameTable : public ::Newtonsoft::Json::JsonNameTable {
public:
  // Declarations
  using Entry = ::Newtonsoft::Json::__DefaultJsonNameTable__Entry;

  /// @brief Field HashCodeRandomizer, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_HashCodeRandomizer, put = setStaticF_HashCodeRandomizer)) int32_t HashCodeRandomizer;

  /// @brief Field _count, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__count, put = __cordl_internal_set__count)) int32_t _count;

  /// @brief Field _entries, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__entries,
                      put = __cordl_internal_set__entries))::ArrayW<::Newtonsoft::Json::__DefaultJsonNameTable__Entry*, ::Array<::Newtonsoft::Json::__DefaultJsonNameTable__Entry*>*> _entries;

  /// @brief Field _mask, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__mask, put = __cordl_internal_set__mask)) int32_t _mask;

  /// @brief Method Add, addr 0x29c1e20, size 0x1b8, virtual false, abstract: false, final false
  inline ::StringW Add(::StringW key);

  /// @brief Method AddEntry, addr 0x29c1fd8, size 0x10c, virtual false, abstract: false, final false
  inline ::StringW AddEntry(::StringW str, int32_t hashCode);

  /// @brief Method Get, addr 0x29c1be4, size 0x18c, virtual true, abstract: false, final false
  inline ::StringW Get(::ArrayW<char16_t, ::Array<char16_t>*> key, int32_t start, int32_t length);

  /// @brief Method Grow, addr 0x29c2124, size 0x128, virtual false, abstract: false, final false
  inline void Grow();

  static inline ::Newtonsoft::Json::DefaultJsonNameTable* New_ctor();

  /// @brief Method TextEquals, addr 0x29c1d70, size 0xb0, virtual false, abstract: false, final false
  static inline bool TextEquals(::StringW str1, ::ArrayW<char16_t, ::Array<char16_t>*> str2, int32_t str2Start, int32_t str2Length);

  constexpr int32_t const& __cordl_internal_get__count() const;

  constexpr int32_t& __cordl_internal_get__count();

  constexpr ::ArrayW<::Newtonsoft::Json::__DefaultJsonNameTable__Entry*, ::Array<::Newtonsoft::Json::__DefaultJsonNameTable__Entry*>*> const& __cordl_internal_get__entries() const;

  constexpr ::ArrayW<::Newtonsoft::Json::__DefaultJsonNameTable__Entry*, ::Array<::Newtonsoft::Json::__DefaultJsonNameTable__Entry*>*>& __cordl_internal_get__entries();

  constexpr int32_t const& __cordl_internal_get__mask() const;

  constexpr int32_t& __cordl_internal_get__mask();

  constexpr void __cordl_internal_set__count(int32_t value);

  constexpr void __cordl_internal_set__entries(::ArrayW<::Newtonsoft::Json::__DefaultJsonNameTable__Entry*, ::Array<::Newtonsoft::Json::__DefaultJsonNameTable__Entry*>*> value);

  constexpr void __cordl_internal_set__mask(int32_t value);

  /// @brief Method .ctor, addr 0x29c1b74, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_HashCodeRandomizer();

  static inline void setStaticF_HashCodeRandomizer(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultJsonNameTable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultJsonNameTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultJsonNameTable(DefaultJsonNameTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultJsonNameTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultJsonNameTable(DefaultJsonNameTable const&) = delete;

  /// @brief Field _count, offset: 0x10, size: 0x4, def value: None
  int32_t ____count;

  /// @brief Field _entries, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::Newtonsoft::Json::__DefaultJsonNameTable__Entry*, ::Array<::Newtonsoft::Json::__DefaultJsonNameTable__Entry*>*> ____entries;

  /// @brief Field _mask, offset: 0x20, size: 0x4, def value: None
  int32_t ____mask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::DefaultJsonNameTable, 0x28>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::DefaultJsonNameTable, ____count) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::DefaultJsonNameTable, ____entries) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::DefaultJsonNameTable, ____mask) == 0x20, "Offset mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::DefaultJsonNameTable);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::DefaultJsonNameTable*, "Newtonsoft.Json", "DefaultJsonNameTable");
NEED_NO_BOX(::Newtonsoft::Json::__DefaultJsonNameTable__Entry);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::__DefaultJsonNameTable__Entry*, "Newtonsoft.Json", "DefaultJsonNameTable/Entry");
