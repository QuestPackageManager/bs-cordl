#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Poly2Tri/FixedArray3_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__FixedArray3_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedArray3_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
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
namespace UnityEngine::ProBuilder::Poly2Tri {
template <typename T> class __FixedArray3_1___Enumerate_d__10;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
template <typename T> class __FixedArray3_1___Enumerate_d__10;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
template <typename T> struct FixedArray3_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10);
MARK_GEN_VAL_T(::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1);
// Type: UnityEngine.ProBuilder.Poly2Tri::FixedArray3`1
// SizeInfo { instance_size: 24, native_size: 40, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Poly2Tri {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::FixedArray3`1<T>
struct CORDL_TYPE FixedArray3_1 {
public:
  // Declarations
  using _Enumerate_d__10 = ::UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>;

  __declspec(property(get = get_Item, put = set_Item)) T Item[];

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear(T value);

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Contains(T value);

  /// @brief Method Enumerate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<T>* Enumerate();

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator();

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t IndexOf(T value);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Item(int32_t index);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, T value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedArray3_1();

  // Ctor Parameters [CppParam { name: "_0", ty: "T", modifiers: "", def_value: None }, CppParam { name: "_1", ty: "T", modifiers: "", def_value: None }, CppParam { name: "_2", ty: "T", modifiers: "",
  // def_value: None }]
  constexpr FixedArray3_1(T _0, T _1, T _2) noexcept;

  /// @brief Field _0, offset: 0x0, size: 0x8, def value: None
  T _0;

  /// @brief Field _1, offset: 0x8, size: 0x8, def value: None
  T _1;

  /// @brief Field _2, offset: 0x10, size: 0x8, def value: None
  T _2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::ProBuilder::Poly2Tri
// Type: ::<Enumerate>d__10
// SizeInfo { instance_size: 96, native_size: 92, calculated_instance_size: 96, calculated_native_size: 92, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Poly2Tri {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::FixedArray3`1::<Enumerate>d__10<T>*
class CORDL_TYPE __FixedArray3_1___Enumerate_d__10 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_T__get_Current)) T System_Collections_Generic_IEnumerator_T__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) T __2__current;

  /// @brief Field <>3__<>4__this, offset 0x40, size 0x18
  __declspec(property(get = __cordl_internal_get___3____4__this, put = __cordl_internal_set___3____4__this))::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T> __3____4__this;

  /// @brief Field <>4__this, offset 0x28, size 0x18
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T> __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <i>5__2, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__2, put = __cordl_internal_set__i_5__2)) int32_t _i_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10<T>* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<T>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T System_Collections_Generic_IEnumerator_T__get_Current();

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

  constexpr T const& __cordl_internal_get___2__current() const;

  constexpr T& __cordl_internal_get___2__current();

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T> const& __cordl_internal_get___3____4__this() const;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>& __cordl_internal_get___3____4__this();

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T>& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr int32_t const& __cordl_internal_get__i_5__2() const;

  constexpr int32_t& __cordl_internal_get__i_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(T value);

  constexpr void __cordl_internal_set___3____4__this(::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T> value);

  constexpr void __cordl_internal_set___4__this(::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T> value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__i_5__2(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FixedArray3_1___Enumerate_d__10();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FixedArray3_1___Enumerate_d__10", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FixedArray3_1___Enumerate_d__10(__FixedArray3_1___Enumerate_d__10&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FixedArray3_1___Enumerate_d__10", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FixedArray3_1___Enumerate_d__10(__FixedArray3_1___Enumerate_d__10 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  T _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x18, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T> _____4__this;

  /// @brief Field <>3__<>4__this, offset: 0x40, size: 0x18, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T> _____3____4__this;

  /// @brief Field <i>5__2, offset: 0x58, size: 0x4, def value: None
  int32_t ____i_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ProBuilder::Poly2Tri
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ProBuilder::Poly2Tri::__FixedArray3_1___Enumerate_d__10, "UnityEngine.ProBuilder.Poly2Tri", "FixedArray3`1/<Enumerate>d__10");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1, "UnityEngine.ProBuilder.Poly2Tri", "FixedArray3`1");
