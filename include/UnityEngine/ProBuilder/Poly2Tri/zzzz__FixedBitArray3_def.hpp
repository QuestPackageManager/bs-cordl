#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Poly2Tri/FixedBitArray3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedBitArray3)
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
class FixedBitArray3__Enumerate_d__10;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class FixedBitArray3__Enumerate_d__10;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
struct FixedBitArray3;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3__Enumerate_d__10);
MARK_VAL_T(::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3);
// Dependencies
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3
struct CORDL_TYPE FixedBitArray3 {
public:
  // Declarations
  using _Enumerate_d__10 = ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3__Enumerate_d__10;

  __declspec(property(get = get_Item, put = set_Item)) bool Item[];

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<bool>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<bool>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Method Clear, addr 0x6491a24, size 0xc, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Clear, addr 0x6493f38, size 0x50, virtual false, abstract: false, final false
  inline void Clear(bool value);

  /// @brief Method Contains, addr 0x6493e78, size 0x74, virtual false, abstract: false, final false
  inline bool Contains(bool value);

  /// @brief Method Enumerate, addr 0x6493f88, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<bool>* Enumerate();

  /// @brief Method GetEnumerator, addr 0x6494024, size 0xac, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<bool>* GetEnumerator();

  /// @brief Method IndexOf, addr 0x6493eec, size 0x4c, virtual false, abstract: false, final false
  inline int32_t IndexOf(bool value);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x64940d0, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method get_Item, addr 0x648de98, size 0x60, virtual false, abstract: false, final false
  inline bool get_Item(int32_t index);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<bool>"
  constexpr ::System::Collections::Generic::IEnumerable_1<bool>* i___System__Collections__Generic__IEnumerable_1_bool_();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  /// @brief Method set_Item, addr 0x648e1c8, size 0x64, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedBitArray3();

  // Ctor Parameters [CppParam { name: "_0", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_1", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_2", ty: "bool",
  // modifiers: "", def_value: None }]
  constexpr FixedBitArray3(bool _0, bool _1, bool _2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21571 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x3 };

  /// @brief Field _0, offset: 0x0, size: 0x1, def value: None
  bool _0;

  /// @brief Field _1, offset: 0x1, size: 0x1, def value: None
  bool _1;

  /// @brief Field _2, offset: 0x2, size: 0x1, def value: None
  bool _2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3, _0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3, _1) == 0x1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3, _2) == 0x2, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3, 0x3>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
// Dependencies System.Object, UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10
class CORDL_TYPE FixedBitArray3__Enumerate_d__10 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Boolean__get_Current)) bool System_Collections_Generic_IEnumerator_System_Boolean__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) bool __2__current;

  /// @brief Field <>3__<>4__this, offset 0x1f, size 0x3
  __declspec(property(get = __cordl_internal_get___3____4__this, put = __cordl_internal_set___3____4__this)) ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 __3____4__this;

  /// @brief Field <>4__this, offset 0x1c, size 0x3
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <i>5__2, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__2, put = __cordl_internal_set__i_5__2)) int32_t _i_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<bool>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<bool>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<bool>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<bool>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x64940d8, size 0x74, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3__Enumerate_d__10* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Boolean>.GetEnumerator, addr 0x64941b0, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<bool>* System_Collections_Generic_IEnumerable_System_Boolean__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Boolean>.get_Current, addr 0x649414c, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_IEnumerator_System_Boolean__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x6494250, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x6494154, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x649418c, size 0x24, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x64940d4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr bool const& __cordl_internal_get___2__current() const;

  constexpr bool& __cordl_internal_get___2__current();

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 const& __cordl_internal_get___3____4__this() const;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3& __cordl_internal_get___3____4__this();

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr int32_t const& __cordl_internal_get__i_5__2() const;

  constexpr int32_t& __cordl_internal_get__i_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(bool value);

  constexpr void __cordl_internal_set___3____4__this(::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 value);

  constexpr void __cordl_internal_set___4__this(::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__i_5__2(int32_t value);

  /// @brief Method .ctor, addr 0x6494004, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<bool>"
  constexpr ::System::Collections::Generic::IEnumerable_1<bool>* i___System__Collections__Generic__IEnumerable_1_bool_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<bool>"
  constexpr ::System::Collections::Generic::IEnumerator_1<bool>* i___System__Collections__Generic__IEnumerator_1_bool_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedBitArray3__Enumerate_d__10();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FixedBitArray3__Enumerate_d__10", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixedBitArray3__Enumerate_d__10(FixedBitArray3__Enumerate_d__10&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixedBitArray3__Enumerate_d__10", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixedBitArray3__Enumerate_d__10(FixedBitArray3__Enumerate_d__10 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21570 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x14, size: 0x1, def value: None
  bool _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x18, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x1c, size: 0x3, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 _____4__this;

  /// @brief Field <>3__<>4__this, offset: 0x1f, size: 0x3, def value: None
  ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 _____3____4__this;

  /// @brief Field <i>5__2, offset: 0x24, size: 0x4, def value: None
  int32_t ____i_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3__Enumerate_d__10, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3__Enumerate_d__10, _____2__current) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3__Enumerate_d__10, _____l__initialThreadId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3__Enumerate_d__10, _____4__this) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3__Enumerate_d__10, _____3____4__this) == 0x1f, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3__Enumerate_d__10, ____i_5__2) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3__Enumerate_d__10, 0x28>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3__Enumerate_d__10);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3__Enumerate_d__10*, "UnityEngine.ProBuilder.Poly2Tri", "FixedBitArray3/<Enumerate>d__10");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3, "UnityEngine.ProBuilder.Poly2Tri", "FixedBitArray3");
