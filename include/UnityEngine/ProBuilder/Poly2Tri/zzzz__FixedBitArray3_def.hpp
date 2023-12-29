#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__FixedBitArray3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedBitArray3)
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class __FixedBitArray3___Enumerate_d__10;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class __FixedBitArray3___Enumerate_d__10;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
struct FixedBitArray3;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::__FixedBitArray3___Enumerate_d__10);
MARK_VAL_T(::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3);
// Type: UnityEngine.ProBuilder.Poly2Tri::FixedBitArray3
// SizeInfo { instance_size: 3, native_size: 12, calculated_instance_size: 3, calculated_native_size: 19, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15381))
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::FixedBitArray3
struct CORDL_TYPE FixedBitArray3 {
public:
  // Declarations
  using _Enumerate_d__10 = ::UnityEngine::ProBuilder::Poly2Tri::__FixedBitArray3___Enumerate_d__10;

  __declspec(property(get = get_Item, put = set_Item)) bool Item[];

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<bool>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<bool>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Method get_Item addr 0x29ae3dc size 0x6c virtual false final false
  inline bool get_Item(int32_t index);

  /// @brief Method set_Item addr 0x29ae794 size 0x70 virtual false final false
  inline void set_Item(int32_t index, bool value);

  /// @brief Method Contains addr 0x29b4584 size 0x4c virtual false final false
  inline bool Contains(bool value);

  /// @brief Method IndexOf addr 0x29b45d0 size 0x48 virtual false final false
  inline int32_t IndexOf(bool value);

  /// @brief Method Clear addr 0x29b204c size 0xc virtual false final false
  inline void Clear();

  /// @brief Method Clear addr 0x29b4618 size 0x50 virtual false final false
  inline void Clear(bool value);

  /// @brief Method Enumerate addr 0x29b4668 size 0x84 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<bool>* Enumerate();

  /// @brief Method GetEnumerator addr 0x29b4720 size 0xa8 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<bool>* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x29b47c8 size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "_0", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_1", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_2", ty: "bool",
  // modifiers: "", def_value: None }]
  constexpr FixedBitArray3(bool _0, bool _1, bool _2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedBitArray3();

  /// @brief Field _0, offset: 0x0, size: 0x1, def value: None
  bool _0;

  /// @brief Field _1, offset: 0x1, size: 0x1, def value: None
  bool _1;

  /// @brief Field _2, offset: 0x2, size: 0x1, def value: None
  bool _2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x3 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3, 0x3>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3, _0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3, _1) == 0x1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3, _2) == 0x2, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
// Type: ::<Enumerate>d__10
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(15381))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15380))
// CS Name: ::FixedBitArray3::<Enumerate>d__10*
class CORDL_TYPE __FixedBitArray3___Enumerate_d__10 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x14, size 0x1
  __declspec(property(get = __get___2__current, put = __set___2__current)) bool __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x18, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>4__this, offset 0x1c, size 0x3
  __declspec(property(get = __get___4__this, put = __set___4__this))::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 __4__this;

  /// @brief Field <>3__<>4__this, offset 0x1f, size 0x3
  __declspec(property(get = __get___3____4__this, put = __set___3____4__this))::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 __3____4__this;

  /// @brief Field <i>5__2, offset 0x24, size 0x4
  __declspec(property(get = __get__i_5__2, put = __set__i_5__2)) int32_t _i_5__2;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Boolean__get_Current)) bool System_Collections_Generic_IEnumerator_System_Boolean__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<bool>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<bool>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<bool>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<bool>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr bool& __get___2__current();

  constexpr bool const& __get___2__current() const;

  constexpr void __set___2__current(bool value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3& __get___4__this();

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 const& __get___4__this() const;

  constexpr void __set___4__this(::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 value);

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3& __get___3____4__this();

  constexpr ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 const& __get___3____4__this() const;

  constexpr void __set___3____4__this(::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 value);

  constexpr int32_t& __get__i_5__2();

  constexpr int32_t const& __get__i_5__2() const;

  constexpr void __set__i_5__2(int32_t value);

  static inline ::UnityEngine::ProBuilder::Poly2Tri::__FixedBitArray3___Enumerate_d__10* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x29b46ec size 0x34 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x29b47cc size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x29b47d0 size 0x70 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Boolean>.get_Current addr 0x29b4840 size 0x8 virtual true final true
  inline bool System_Collections_Generic_IEnumerator_System_Boolean__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x29b4848 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x29b4888 size 0x5c virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<System.Boolean>.GetEnumerator addr 0x29b48e4 size 0xc0 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<bool>* System_Collections_Generic_IEnumerable_System_Boolean__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x29b49a4 size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__FixedBitArray3___Enumerate_d__10", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FixedBitArray3___Enumerate_d__10(__FixedBitArray3___Enumerate_d__10&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FixedBitArray3___Enumerate_d__10", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FixedBitArray3___Enumerate_d__10(__FixedBitArray3___Enumerate_d__10 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FixedBitArray3___Enumerate_d__10();

public:
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
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::__FixedBitArray3___Enumerate_d__10, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::__FixedBitArray3___Enumerate_d__10, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::__FixedBitArray3___Enumerate_d__10, _____2__current) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::__FixedBitArray3___Enumerate_d__10, _____l__initialThreadId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::__FixedBitArray3___Enumerate_d__10, _____4__this) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::__FixedBitArray3___Enumerate_d__10, _____3____4__this) == 0x1f, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Poly2Tri::__FixedBitArray3___Enumerate_d__10, ____i_5__2) == 0x24, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::__FixedBitArray3___Enumerate_d__10);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::__FixedBitArray3___Enumerate_d__10*, "UnityEngine.ProBuilder.Poly2Tri", "FixedBitArray3/<Enumerate>d__10");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3, "UnityEngine.ProBuilder.Poly2Tri", "FixedBitArray3");
