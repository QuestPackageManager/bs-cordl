#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Profiling/ProfilerFrameData_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProfilerFrameData_2)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::ResourceManagement::Profiling {
template <typename T1, typename T2> class ProfilerFrameData_2__Enumerate_d__17;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Profiling {
template <typename T1, typename T2> class ProfilerFrameData_2;
}
namespace UnityEngine::ResourceManagement::Profiling {
template <typename T1, typename T2> class ProfilerFrameData_2__Enumerate_d__17;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2);
MARK_GEN_REF_PTR_T(::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2__Enumerate_d__17);
// Dependencies System.Collections.Generic.Dictionary`2::Enumerator<TKey, TValue>, System.Collections.Generic.KeyValuePair`2<TKey, TValue>, System.Object
namespace UnityEngine::ResourceManagement::Profiling {
// cpp template
template <typename T1, typename T2>
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Profiling.ProfilerFrameData`2/<Enumerate>d__17<T1,T2>
class CORDL_TYPE ProfilerFrameData_2__Enumerate_d__17 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_T1_T2___get_Current)) ::System::Collections::Generic::KeyValuePair_2<T1, T2>
      System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_T1_T2___Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Collections::Generic::KeyValuePair_2<T1, T2> __2__current;

  /// @brief Field <>4__this, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<T1, T2>* __4__this;

  /// @brief Field <>7__wrap1, offset 0x38, size 0x28
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1)) ::System::Collections::Generic::Dictionary_2_Enumerator<T1, T2> __7__wrap1;

  /// @brief Field <>l__initialThreadId, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<T1,T2>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<T1, T2>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<T1,T2>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<T1, T2>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2__Enumerate_d__17<T1, T2>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<T1,T2>>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<T1, T2>>*
  System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_T1_T2___GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<T1,T2>>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::KeyValuePair_2<T1, T2> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_T1_T2___get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Collections::Generic::KeyValuePair_2<T1, T2> const& __cordl_internal_get___2__current() const;

  constexpr ::System::Collections::Generic::KeyValuePair_2<T1, T2>& __cordl_internal_get___2__current();

  constexpr ::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<T1, T2>* const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<T1, T2>*& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::Dictionary_2_Enumerator<T1, T2> const& __cordl_internal_get___7__wrap1() const;

  constexpr ::System::Collections::Generic::Dictionary_2_Enumerator<T1, T2>& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Collections::Generic::KeyValuePair_2<T1, T2> value);

  constexpr void __cordl_internal_set___4__this(::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<T1, T2>* value);

  constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::Dictionary_2_Enumerator<T1, T2> value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  /// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<T1,T2>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<T1, T2>>*
  i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_T1_T2__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<T1,T2>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<T1, T2>>*
  i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2_T1_T2__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilerFrameData_2__Enumerate_d__17();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProfilerFrameData_2__Enumerate_d__17", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProfilerFrameData_2__Enumerate_d__17(ProfilerFrameData_2__Enumerate_d__17&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProfilerFrameData_2__Enumerate_d__17", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProfilerFrameData_2__Enumerate_d__17(ProfilerFrameData_2__Enumerate_d__17 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18775 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
  ::System::Collections::Generic::KeyValuePair_2<T1, T2> _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x28, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<T1, T2>* _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x28, def value: None
  ::System::Collections::Generic::Dictionary_2_Enumerator<T1, T2> _____7__wrap1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::Profiling
// Dependencies System.Object
namespace UnityEngine::ResourceManagement::Profiling {
// cpp template
template <typename T1, typename T2>
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Profiling.ProfilerFrameData`2<T1,T2>
class CORDL_TYPE ProfilerFrameData_2 : public ::System::Object {
public:
  // Declarations
  using _Enumerate_d__17 = ::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2__Enumerate_d__17<T1, T2>;

  __declspec(property(get = get_Data)) ::System::Collections::Generic::Dictionary_2<T1, T2>* Data;

  __declspec(property(get = get_Item, put = set_Item)) T2 Item[];

  __declspec(property(get = get_Values)) ::ArrayW<T2, ::Array<T2>*> Values;

  /// @brief Field m_Array, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Array, put = __cordl_internal_set_m_Array)) ::ArrayW<T2, ::Array<T2>*> m_Array;

  /// @brief Field m_ArrayVersion, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ArrayVersion, put = __cordl_internal_set_m_ArrayVersion)) uint32_t m_ArrayVersion;

  /// @brief Field m_Data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Data, put = __cordl_internal_set_m_Data)) ::System::Collections::Generic::Dictionary_2<T1, T2>* m_Data;

  /// @brief Field m_Version, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) uint32_t m_Version;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Add(T1 key, T2 value);

  /// @brief Method ContainsKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool ContainsKey(T1 key);

  /// @brief Method Enumerate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<T1, T2>>* Enumerate();

  static inline ::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<T1, T2>* New_ctor();

  static inline ::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2<T1, T2>* New_ctor(int32_t count);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Remove(T1 key);

  /// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryGetValue(T1 key, ::ByRef<T2> value);

  constexpr ::ArrayW<T2, ::Array<T2>*> const& __cordl_internal_get_m_Array() const;

  constexpr ::ArrayW<T2, ::Array<T2>*>& __cordl_internal_get_m_Array();

  constexpr uint32_t const& __cordl_internal_get_m_ArrayVersion() const;

  constexpr uint32_t& __cordl_internal_get_m_ArrayVersion();

  constexpr ::System::Collections::Generic::Dictionary_2<T1, T2>* const& __cordl_internal_get_m_Data() const;

  constexpr ::System::Collections::Generic::Dictionary_2<T1, T2>*& __cordl_internal_get_m_Data();

  constexpr uint32_t const& __cordl_internal_get_m_Version() const;

  constexpr uint32_t& __cordl_internal_get_m_Version();

  constexpr void __cordl_internal_set_m_Array(::ArrayW<T2, ::Array<T2>*> value);

  constexpr void __cordl_internal_set_m_ArrayVersion(uint32_t value);

  constexpr void __cordl_internal_set_m_Data(::System::Collections::Generic::Dictionary_2<T1, T2>* value);

  constexpr void __cordl_internal_set_m_Version(uint32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t count);

  /// @brief Method get_Data, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<T1, T2>* get_Data();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T2 get_Item(T1 key);

  /// @brief Method get_Values, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<T2, ::Array<T2>*> get_Values();

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Item(T1 key, T2 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilerFrameData_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProfilerFrameData_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProfilerFrameData_2(ProfilerFrameData_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProfilerFrameData_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProfilerFrameData_2(ProfilerFrameData_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18776 };

  /// @brief Field m_Data, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<T1, T2>* ___m_Data;

  /// @brief Field m_Array, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<T2, ::Array<T2>*> ___m_Array;

  /// @brief Field m_Version, offset: 0x20, size: 0x4, def value: None
  uint32_t ___m_Version;

  /// @brief Field m_ArrayVersion, offset: 0x24, size: 0x4, def value: None
  uint32_t ___m_ArrayVersion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::Profiling
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2, "UnityEngine.ResourceManagement.Profiling", "ProfilerFrameData`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ResourceManagement::Profiling::ProfilerFrameData_2__Enumerate_d__17, "UnityEngine.ResourceManagement.Profiling",
                                     "ProfilerFrameData`2/<Enumerate>d__17");
