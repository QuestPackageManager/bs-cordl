#pragma once
// IWYU pragma private; include "System/Xml/Linq/XHashtable_1.hpp"
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
namespace GlobalNamespace {
template <typename TValue> struct __XHashtable_1__XHashtableState__Entry;
}
namespace System::Xml::Linq {
template <typename TValue> class __XHashtable_1__ExtractKeyDelegate;
}
namespace System::Xml::Linq {
template <typename TValue> class __XHashtable_1__XHashtableState;
}
namespace System {
class Object;
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
// CS Name: ::XHashtable`1::ExtractKeyDelegate<TValue>*
class CORDL_TYPE __XHashtable_1__ExtractKeyDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW Invoke(TValue value);

  static inline ::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XHashtable_1__ExtractKeyDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XHashtable_1__ExtractKeyDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XHashtable_1__ExtractKeyDelegate(__XHashtable_1__ExtractKeyDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XHashtable_1__ExtractKeyDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XHashtable_1__ExtractKeyDelegate(__XHashtable_1__ExtractKeyDelegate const&) = delete;

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
// CS Name: ::XHashtable`1::XHashtableState::Entry<TValue>
struct CORDL_TYPE __XHashtable_1__XHashtableState__Entry {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XHashtable_1__XHashtableState__Entry();

  // Ctor Parameters [CppParam { name: "Value", ty: "TValue", modifiers: "", def_value: None }, CppParam { name: "HashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Next",
  // ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XHashtable_1__XHashtableState__Entry(TValue Value, int32_t HashCode, int32_t Next) noexcept;

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
// CS Name: ::XHashtable`1::XHashtableState<TValue>*
class CORDL_TYPE __XHashtable_1__XHashtableState : public ::System::Object {
public:
  // Declarations
  using Entry = ::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>;

  /// @brief Field _buckets, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__buckets, put = __cordl_internal_set__buckets))::ArrayW<int32_t, ::Array<int32_t>*> _buckets;

  /// @brief Field _entries, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__entries, put = __cordl_internal_set__entries))::ArrayW<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>,
                                                                                                         ::Array<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>>*> _entries;

  /// @brief Field _extractKey, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__extractKey, put = __cordl_internal_set__extractKey))::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>* _extractKey;

  /// @brief Field _numEntries, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__numEntries, put = __cordl_internal_set__numEntries)) int32_t _numEntries;

  /// @brief Method ComputeHashCode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline int32_t ComputeHashCode(::StringW key, int32_t index, int32_t count);

  /// @brief Method FindEntry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool FindEntry(int32_t hashCode, ::StringW key, int32_t index, int32_t count, ByRef<int32_t> entryIndex);

  static inline ::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>* New_ctor(::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>* extractKey, int32_t capacity);

  /// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>* Resize();

  /// @brief Method TryAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryAdd(TValue value, ByRef<TValue> newValue);

  /// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryGetValue(::StringW key, int32_t index, int32_t count, ByRef<TValue> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__buckets() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__buckets();

  constexpr ::ArrayW<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>, ::Array<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>>*> const&
  __cordl_internal_get__entries() const;

  constexpr ::ArrayW<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>, ::Array<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>>*>& __cordl_internal_get__entries();

  constexpr ::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>*& __cordl_internal_get__extractKey();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>*> const& __cordl_internal_get__extractKey() const;

  constexpr int32_t const& __cordl_internal_get__numEntries() const;

  constexpr int32_t& __cordl_internal_get__numEntries();

  constexpr void __cordl_internal_set__buckets(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void
  __cordl_internal_set__entries(::ArrayW<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>, ::Array<::GlobalNamespace::__XHashtable_1__XHashtableState__Entry<TValue>>*> value);

  constexpr void __cordl_internal_set__extractKey(::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>* value);

  constexpr void __cordl_internal_set__numEntries(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>* extractKey, int32_t capacity);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XHashtable_1__XHashtableState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XHashtable_1__XHashtableState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XHashtable_1__XHashtableState(__XHashtable_1__XHashtableState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XHashtable_1__XHashtableState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XHashtable_1__XHashtableState(__XHashtable_1__XHashtableState const&) = delete;

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
// CS Name: ::System.Xml.Linq::XHashtable`1<TValue>*
class CORDL_TYPE XHashtable_1 : public ::System::Object {
public:
  // Declarations
  using ExtractKeyDelegate = ::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>;

  using XHashtableState = ::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>;

  /// @brief Field _state, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state))::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>* _state;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue Add(TValue value);

  static inline ::System::Xml::Linq::XHashtable_1<TValue>* New_ctor(::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>* extractKey, int32_t capacity);

  /// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryGetValue(::StringW key, int32_t index, int32_t count, ByRef<TValue> value);

  constexpr ::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>*& __cordl_internal_get__state();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>*> const& __cordl_internal_get__state() const;

  constexpr void __cordl_internal_set__state(::System::Xml::Linq::__XHashtable_1__XHashtableState<TValue>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::__XHashtable_1__ExtractKeyDelegate<TValue>* extractKey, int32_t capacity);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XHashtable_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XHashtable_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XHashtable_1(XHashtable_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XHashtable_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XHashtable_1(XHashtable_1 const&) = delete;

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
