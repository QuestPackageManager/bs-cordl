#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XHashtable_1)
namespace System::Xml::Linq {
template <typename TValue> class __XHashtable_1__ExtractKeyDelegate;
}
namespace System::Xml::Linq {
template <typename TValue> class __XHashtable_1__XHashtableState;
}
namespace System {
class Object;
}
namespace GlobalNamespace {
template <typename TValue> struct __XHashtable_1__XHashtableState__Entry;
}
// Forward declare root types
namespace System::Xml::Linq {
template <typename TValue> class XHashtable_1;
}
namespace System::Xml::Linq {
template <typename TValue> class __XHashtable_1__ExtractKeyDelegate;
}
namespace System::Xml::Linq {
template <typename TValue> class __XHashtable_1__XHashtableState;
}
namespace GlobalNamespace {
template <typename TValue> struct __XHashtable_1__XHashtableState__Entry;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Xml::Linq::XHashtable_1);
MARK_GEN_REF_PTR_T(::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate);
MARK_GEN_REF_PTR_T(::System::Xml::Linq::__XHashtable_1__XHashtableState);
MARK_GEN_VAL_T(::GlobalNamespace::__XHashtable_1__XHashtableState__Entry);
// Type: ::ExtractKeyDelegate
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Linq {
// cpp template
template <typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15442))
// CS Name: ::XHashtable`1::ExtractKeyDelegate<TValue>*
class CORDL_TYPE __XHashtable_1__ExtractKeyDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW Invoke(TValue value);

  // Ctor Parameters [CppParam { name: "", ty: "__XHashtable_1__ExtractKeyDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XHashtable_1__ExtractKeyDelegate(__XHashtable_1__ExtractKeyDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XHashtable_1__ExtractKeyDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XHashtable_1__ExtractKeyDelegate(__XHashtable_1__ExtractKeyDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XHashtable_1__ExtractKeyDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Xml::Linq
// Type: ::Entry
// SizeInfo { instance_size: 16, native_size: 32, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename TValue>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15443))
// CS Name: ::XHashtable`1::XHashtableState::Entry<TValue>
struct CORDL_TYPE __XHashtable_1__XHashtableState__Entry {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "Value", ty: "TValue", modifiers: "", def_value: None }, CppParam { name: "HashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Next",
  // ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XHashtable_1__XHashtableState__Entry(TValue Value, int32_t HashCode, int32_t Next) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XHashtable_1__XHashtableState__Entry();

  /// @brief Field Value, offset: 0x0, size: 0x8, def value: None
  TValue Value;

  /// @brief Field HashCode, offset: 0x8, size: 0x4, def value: None
  int32_t HashCode;

  /// @brief Field Next, offset: 0xc, size: 0x4, def value: None
  int32_t Next;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::XHashtableState
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Linq {
// cpp template
template <typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15444))
// CS Name: ::XHashtable`1::XHashtableState<TValue>*
class CORDL_TYPE __XHashtable_1__XHashtableState : public ::System::Object {
public:
  // Declarations
  using Entry = ::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>;

  /// @brief Field _buckets, offset 0x10, size 0x8
  __declspec(property(get = __get__buckets, put = __set__buckets))::ArrayW<int32_t, ::Array<int32_t>*> _buckets;

  /// @brief Field _entries, offset 0x18, size 0x8
  __declspec(
      property(get = __get__entries,
               put = __set__entries))::ArrayW<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>, ::Array<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>>*> _entries;

  /// @brief Field _numEntries, offset 0x20, size 0x4
  __declspec(property(get = __get__numEntries, put = __set__numEntries)) int32_t _numEntries;

  /// @brief Field _extractKey, offset 0x28, size 0x8
  __declspec(property(get = __get__extractKey, put = __set__extractKey))::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>* _extractKey;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get__buckets();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get__buckets() const;

  constexpr void __set__buckets(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>, ::Array<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>>*>& __get__entries();

  constexpr ::ArrayW<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>, ::Array<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>>*> const& __get__entries() const;

  constexpr void __set__entries(::ArrayW<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>, ::Array<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>>*> value);

  constexpr int32_t& __get__numEntries();

  constexpr int32_t const& __get__numEntries() const;

  constexpr void __set__numEntries(int32_t value);

  constexpr ::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>*& __get__extractKey();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>*> const& __get__extractKey() const;

  constexpr void __set__extractKey(::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>* value);

  static inline ::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>* New_ctor(::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>* extractKey, int32_t capacity);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>* extractKey, int32_t capacity);

  /// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>* Resize();

  /// @brief Method TryGetValue addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool TryGetValue(::StringW key, int32_t index, int32_t count, ByRef<TValue> value);

  /// @brief Method TryAdd addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool TryAdd(TValue value, ByRef<TValue> newValue);

  /// @brief Method FindEntry addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool FindEntry(int32_t hashCode, ::StringW key, int32_t index, int32_t count, ByRef<int32_t> entryIndex);

  /// @brief Method ComputeHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline int32_t ComputeHashCode(::StringW key, int32_t index, int32_t count);

  // Ctor Parameters [CppParam { name: "", ty: "__XHashtable_1__XHashtableState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XHashtable_1__XHashtableState(__XHashtable_1__XHashtableState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XHashtable_1__XHashtableState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XHashtable_1__XHashtableState(__XHashtable_1__XHashtableState const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XHashtable_1__XHashtableState();

public:
  /// @brief Field _buckets, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____buckets;

  /// @brief Field _entries, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>, ::Array<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>>*> ____entries;

  /// @brief Field _numEntries, offset: 0x20, size: 0x4, def value: None
  int32_t ____numEntries;

  /// @brief Field _extractKey, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>* ____extractKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Xml::Linq
// Type: System.Xml.Linq::XHashtable`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Linq {
// cpp template
template <typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15445))
// CS Name: ::System.Xml.Linq::XHashtable`1<TValue>*
class CORDL_TYPE XHashtable_1 : public ::System::Object {
public:
  // Declarations
  using XHashtableState = ::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>;

  using ExtractKeyDelegate = ::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>;

  /// @brief Field _state, offset 0x10, size 0x8
  __declspec(property(get = __get__state, put = __set__state))::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>* _state;

  constexpr ::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>*& __get__state();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>*> const& __get__state() const;

  constexpr void __set__state(::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>* value);

  static inline ::System::Xml::Linq::XHashtable_1<TValue>* New_ctor(::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>* extractKey, int32_t capacity);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>* extractKey, int32_t capacity);

  /// @brief Method TryGetValue addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool TryGetValue(::StringW key, int32_t index, int32_t count, ByRef<TValue> value);

  /// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TValue Add(TValue value);

  // Ctor Parameters [CppParam { name: "", ty: "XHashtable_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XHashtable_1(XHashtable_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XHashtable_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XHashtable_1(XHashtable_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XHashtable_1();

public:
  /// @brief Field _state, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>* ____state;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Xml::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Xml::Linq::XHashtable_1, "System.Xml.Linq", "XHashtable`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate, "System.Xml.Linq", "XHashtable`1/ExtractKeyDelegate");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Xml::Linq::__XHashtable_1__XHashtableState, "System.Xml.Linq", "XHashtable`1/XHashtableState");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__XHashtable_1__XHashtableState__Entry, "System.Xml.Linq", "XHashtable`1/XHashtableState/Entry");
