#pragma once
// IWYU pragma private; include "System/Xml/Linq/XHashtable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XHashtable_1)
namespace System::Xml::Linq {
template <typename TValue> struct XHashtableState_XHashtable_1_Entry;
}
namespace System::Xml::Linq {
template <typename TValue> class XHashtable_1_ExtractKeyDelegate;
}
namespace System::Xml::Linq {
template <typename TValue> class XHashtable_1_XHashtableState;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Linq {
template <typename TValue> class XHashtable_1;
}
namespace System::Xml::Linq {
template <typename TValue> class XHashtable_1_ExtractKeyDelegate;
}
namespace System::Xml::Linq {
template <typename TValue> class XHashtable_1_XHashtableState;
}
namespace System::Xml::Linq {
template <typename TValue> struct XHashtableState_XHashtable_1_Entry;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Xml::Linq::XHashtable_1);
MARK_GEN_REF_PTR_T(::System::Xml::Linq::XHashtable_1_ExtractKeyDelegate);
MARK_GEN_REF_PTR_T(::System::Xml::Linq::XHashtable_1_XHashtableState);
MARK_GEN_VAL_T(::System::Xml::Linq::XHashtableState_XHashtable_1_Entry);
// Dependencies System.MulticastDelegate
namespace System::Xml::Linq {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue>
class CORDL_TYPE XHashtable_1_ExtractKeyDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW Invoke(TValue value);

  static inline ::System::Xml::Linq::XHashtable_1_ExtractKeyDelegate<TValue>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XHashtable_1_ExtractKeyDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XHashtable_1_ExtractKeyDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XHashtable_1_ExtractKeyDelegate(XHashtable_1_ExtractKeyDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XHashtable_1_ExtractKeyDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XHashtable_1_ExtractKeyDelegate(XHashtable_1_ExtractKeyDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21787 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Xml::Linq
// Dependencies
namespace System::Xml::Linq {
// cpp template
template <typename TValue>
// Is value type: true
// CS Name: System.Xml.Linq.XHashtable`1/XHashtableState/Entry<TValue>
struct CORDL_TYPE XHashtableState_XHashtable_1_Entry {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr XHashtableState_XHashtable_1_Entry();

  // Ctor Parameters [CppParam { name: "Value", ty: "TValue", modifiers: "", def_value: None }, CppParam { name: "HashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Next",
  // ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XHashtableState_XHashtable_1_Entry(TValue Value, int32_t HashCode, int32_t Next) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21788 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Value, offset: 0x0, size: 0x8, def value: None
  TValue Value;

  /// @brief Field HashCode, offset: 0x8, size: 0x4, def value: None
  int32_t HashCode;

  /// @brief Field Next, offset: 0xc, size: 0x4, def value: None
  int32_t Next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Xml::Linq
// Dependencies System.Object
namespace System::Xml::Linq {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: System.Xml.Linq.XHashtable`1/XHashtableState<TValue>
class CORDL_TYPE XHashtable_1_XHashtableState : public ::System::Object {
public:
  // Declarations
  using Entry = ::System::Xml::Linq::XHashtableState_XHashtable_1_Entry<TValue>;

  /// @brief Field _buckets, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__buckets, put = __cordl_internal_set__buckets)) ::ArrayW<int32_t, ::Array<int32_t>*> _buckets;

  /// @brief Field _entries, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__entries,
      put = __cordl_internal_set__entries)) ::ArrayW<::System::Xml::Linq::XHashtableState_XHashtable_1_Entry<TValue>, ::Array<::System::Xml::Linq::XHashtableState_XHashtable_1_Entry<TValue>>*>
      _entries;

  /// @brief Field _extractKey, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__extractKey, put = __cordl_internal_set__extractKey)) ::System::Xml::Linq::XHashtable_1_ExtractKeyDelegate<TValue>* _extractKey;

  /// @brief Field _numEntries, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__numEntries, put = __cordl_internal_set__numEntries)) int32_t _numEntries;

  /// @brief Method ComputeHashCode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline int32_t ComputeHashCode(::StringW key, int32_t index, int32_t count);

  /// @brief Method FindEntry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool FindEntry(int32_t hashCode, ::StringW key, int32_t index, int32_t count, ::ByRef<int32_t> entryIndex);

  static inline ::System::Xml::Linq::XHashtable_1_XHashtableState<TValue>* New_ctor(::System::Xml::Linq::XHashtable_1_ExtractKeyDelegate<TValue>* extractKey, int32_t capacity);

  /// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Xml::Linq::XHashtable_1_XHashtableState<TValue>* Resize();

  /// @brief Method TryAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryAdd(TValue value, ::ByRef<TValue> newValue);

  /// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryGetValue(::StringW key, int32_t index, int32_t count, ::ByRef<TValue> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__buckets() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__buckets();

  constexpr ::ArrayW<::System::Xml::Linq::XHashtableState_XHashtable_1_Entry<TValue>, ::Array<::System::Xml::Linq::XHashtableState_XHashtable_1_Entry<TValue>>*> const&
  __cordl_internal_get__entries() const;

  constexpr ::ArrayW<::System::Xml::Linq::XHashtableState_XHashtable_1_Entry<TValue>, ::Array<::System::Xml::Linq::XHashtableState_XHashtable_1_Entry<TValue>>*>& __cordl_internal_get__entries();

  constexpr ::System::Xml::Linq::XHashtable_1_ExtractKeyDelegate<TValue>* const& __cordl_internal_get__extractKey() const;

  constexpr ::System::Xml::Linq::XHashtable_1_ExtractKeyDelegate<TValue>*& __cordl_internal_get__extractKey();

  constexpr int32_t const& __cordl_internal_get__numEntries() const;

  constexpr int32_t& __cordl_internal_get__numEntries();

  constexpr void __cordl_internal_set__buckets(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void
  __cordl_internal_set__entries(::ArrayW<::System::Xml::Linq::XHashtableState_XHashtable_1_Entry<TValue>, ::Array<::System::Xml::Linq::XHashtableState_XHashtable_1_Entry<TValue>>*> value);

  constexpr void __cordl_internal_set__extractKey(::System::Xml::Linq::XHashtable_1_ExtractKeyDelegate<TValue>* value);

  constexpr void __cordl_internal_set__numEntries(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::XHashtable_1_ExtractKeyDelegate<TValue>* extractKey, int32_t capacity);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XHashtable_1_XHashtableState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XHashtable_1_XHashtableState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XHashtable_1_XHashtableState(XHashtable_1_XHashtableState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XHashtable_1_XHashtableState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XHashtable_1_XHashtableState(XHashtable_1_XHashtableState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21789 };

  /// @brief Field _buckets, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____buckets;

  /// @brief Field _entries, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Xml::Linq::XHashtableState_XHashtable_1_Entry<TValue>, ::Array<::System::Xml::Linq::XHashtableState_XHashtable_1_Entry<TValue>>*> ____entries;

  /// @brief Field _numEntries, offset: 0x20, size: 0x4, def value: None
  int32_t ____numEntries;

  /// @brief Field _extractKey, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Linq::XHashtable_1_ExtractKeyDelegate<TValue>* ____extractKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Xml::Linq
// Dependencies System.Object
namespace System::Xml::Linq {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: System.Xml.Linq.XHashtable`1<TValue>
class CORDL_TYPE XHashtable_1 : public ::System::Object {
public:
  // Declarations
  using ExtractKeyDelegate = ::System::Xml::Linq::XHashtable_1_ExtractKeyDelegate<TValue>;

  using XHashtableState = ::System::Xml::Linq::XHashtable_1_XHashtableState<TValue>;

  /// @brief Field _state, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state)) ::System::Xml::Linq::XHashtable_1_XHashtableState<TValue>* _state;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue Add(TValue value);

  static inline ::System::Xml::Linq::XHashtable_1<TValue>* New_ctor(::System::Xml::Linq::XHashtable_1_ExtractKeyDelegate<TValue>* extractKey, int32_t capacity);

  /// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryGetValue(::StringW key, int32_t index, int32_t count, ::ByRef<TValue> value);

  constexpr ::System::Xml::Linq::XHashtable_1_XHashtableState<TValue>* const& __cordl_internal_get__state() const;

  constexpr ::System::Xml::Linq::XHashtable_1_XHashtableState<TValue>*& __cordl_internal_get__state();

  constexpr void __cordl_internal_set__state(::System::Xml::Linq::XHashtable_1_XHashtableState<TValue>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::XHashtable_1_ExtractKeyDelegate<TValue>* extractKey, int32_t capacity);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21790 };

  /// @brief Field _state, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Linq::XHashtable_1_XHashtableState<TValue>* ____state;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Xml::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Xml::Linq::XHashtable_1, "System.Xml.Linq", "XHashtable`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Xml::Linq::XHashtable_1_ExtractKeyDelegate, "System.Xml.Linq", "XHashtable`1/ExtractKeyDelegate");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Xml::Linq::XHashtable_1_XHashtableState, "System.Xml.Linq", "XHashtable`1/XHashtableState");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Xml::Linq::XHashtableState_XHashtable_1_Entry, "System.Xml.Linq", "XHashtable`1/XHashtableState/Entry");
