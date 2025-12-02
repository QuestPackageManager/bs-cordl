#pragma once
// IWYU pragma private; include "System/Tuple_3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Tuple_3)
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace System::Collections {
class IStructuralComparable;
}
namespace System::Collections {
class IStructuralEquatable;
}
namespace System::Runtime::CompilerServices {
class ITuple;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class IComparable;
}
namespace System {
class ITupleInternal;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
template <typename T1, typename T2, typename T3> class Tuple_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Tuple_3);
// Dependencies System.Object
namespace System {
// cpp template
template <typename T1, typename T2, typename T3>
// Is value type: false
// CS Name: System.Tuple`3<T1,T2,T3>
class CORDL_TYPE Tuple_3 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Item1)) T1 Item1;

  __declspec(property(get = get_Item2)) T2 Item2;

  __declspec(property(get = get_Item3)) T3 Item3;

  __declspec(property(get = System_Runtime_CompilerServices_ITuple_get_Length)) int32_t System_Runtime_CompilerServices_ITuple_Length;

  /// @brief Field m_Item1, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Item1, put = __cordl_internal_set_m_Item1)) T1 m_Item1;

  /// @brief Field m_Item2, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Item2, put = __cordl_internal_set_m_Item2)) T2 m_Item2;

  /// @brief Field m_Item3, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Item3, put = __cordl_internal_set_m_Item3)) T3 m_Item3;

  /// @brief Convert operator to "::System::Collections::IStructuralComparable"
  constexpr operator ::System::Collections::IStructuralComparable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IStructuralEquatable"
  constexpr operator ::System::Collections::IStructuralEquatable*() noexcept;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*() noexcept;

  /// @brief Convert operator to "::System::ITupleInternal"
  constexpr operator ::System::ITupleInternal*() noexcept;

  /// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
  constexpr operator ::System::Runtime::CompilerServices::ITuple*() noexcept;

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Tuple_3<T1, T2, T3>* New_ctor(T1 item1, T2 item2, T3 item3);

  /// @brief Method System.Collections.IStructuralComparable.CompareTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t System_Collections_IStructuralComparable_CompareTo(::System::Object* other, ::System::Collections::IComparer* comparer);

  /// @brief Method System.Collections.IStructuralEquatable.Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_IStructuralEquatable_Equals(::System::Object* other, ::System::Collections::IEqualityComparer* comparer);

  /// @brief Method System.Collections.IStructuralEquatable.GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer* comparer);

  /// @brief Method System.IComparable.CompareTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t System_IComparable_CompareTo(::System::Object* obj);

  /// @brief Method System.ITupleInternal.ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::StringW System_ITupleInternal_ToString(::System::Text::StringBuilder* sb);

  /// @brief Method System.Runtime.CompilerServices.ITuple.get_Length, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t System_Runtime_CompilerServices_ITuple_get_Length();

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr T1 const& __cordl_internal_get_m_Item1() const;

  constexpr T1& __cordl_internal_get_m_Item1();

  constexpr T2 const& __cordl_internal_get_m_Item2() const;

  constexpr T2& __cordl_internal_get_m_Item2();

  constexpr T3 const& __cordl_internal_get_m_Item3() const;

  constexpr T3& __cordl_internal_get_m_Item3();

  constexpr void __cordl_internal_set_m_Item1(T1 value);

  constexpr void __cordl_internal_set_m_Item2(T2 value);

  constexpr void __cordl_internal_set_m_Item3(T3 value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T1 item1, T2 item2, T3 item3);

  /// @brief Method get_Item1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T1 get_Item1();

  /// @brief Method get_Item2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T2 get_Item2();

  /// @brief Method get_Item3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T3 get_Item3();

  /// @brief Convert to "::System::Collections::IStructuralComparable"
  constexpr ::System::Collections::IStructuralComparable* i___System__Collections__IStructuralComparable() noexcept;

  /// @brief Convert to "::System::Collections::IStructuralEquatable"
  constexpr ::System::Collections::IStructuralEquatable* i___System__Collections__IStructuralEquatable() noexcept;

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable() noexcept;

  /// @brief Convert to "::System::ITupleInternal"
  constexpr ::System::ITupleInternal* i___System__ITupleInternal() noexcept;

  /// @brief Convert to "::System::Runtime::CompilerServices::ITuple"
  constexpr ::System::Runtime::CompilerServices::ITuple* i___System__Runtime__CompilerServices__ITuple() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tuple_3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Tuple_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tuple_3(Tuple_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tuple_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tuple_3(Tuple_3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2496 };

  /// @brief Field m_Item1, offset: 0x10, size: 0x8, def value: None
  T1 ___m_Item1;

  /// @brief Field m_Item2, offset: 0x18, size: 0x8, def value: None
  T2 ___m_Item2;

  /// @brief Field m_Item3, offset: 0x20, size: 0x8, def value: None
  T3 ___m_Item3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Tuple_3, "System", "Tuple`3");
