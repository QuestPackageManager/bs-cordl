#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Tuple_2)
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IStructuralEquatable;
}
namespace System::Runtime::CompilerServices {
class ITuple;
}
namespace System::Collections {
class IStructuralComparable;
}
namespace System {
class IComparable;
}
namespace System {
class ITupleInternal;
}
namespace System::Collections {
class IEqualityComparer;
}
// Forward declare root types
namespace System {
template <typename T1, typename T2> class Tuple_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Tuple_2);
// Type: System::Tuple`2
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// cpp template
template <typename T1, typename T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2490))
// CS Name: ::System::Tuple`2<T1,T2>*
class CORDL_TYPE Tuple_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Item1, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Item1, put = __set_m_Item1)) T1 m_Item1;

  /// @brief Field m_Item2, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Item2, put = __set_m_Item2)) T2 m_Item2;

  __declspec(property(get = get_Item1)) T1 Item1;

  __declspec(property(get = get_Item2)) T2 Item2;

  __declspec(property(get = System_Runtime_CompilerServices_ITuple_get_Length)) int32_t System_Runtime_CompilerServices_ITuple_Length;

  /// @brief Convert operator to "::System::Collections::IStructuralEquatable"
  constexpr operator ::System::Collections::IStructuralEquatable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IStructuralComparable"
  constexpr operator ::System::Collections::IStructuralComparable*() noexcept;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*() noexcept;

  /// @brief Convert operator to "::System::ITupleInternal"
  constexpr operator ::System::ITupleInternal*() noexcept;

  /// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
  constexpr operator ::System::Runtime::CompilerServices::ITuple*() noexcept;

  constexpr T1& __get_m_Item1();

  constexpr T1 const& __get_m_Item1() const;

  constexpr void __set_m_Item1(T1 value);

  constexpr T2& __get_m_Item2();

  constexpr T2 const& __get_m_Item2() const;

  constexpr void __set_m_Item2(T2 value);

  /// @brief Method get_Item1 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline T1 get_Item1();

  /// @brief Method get_Item2 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline T2 get_Item2();

  static inline ::System::Tuple_2<T1, T2>* New_ctor(T1 item1, T2 item2);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(T1 item1, T2 item2);

  /// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool System_Collections_IStructuralEquatable_Equals(::System::Object* other, ::System::Collections::IEqualityComparer* comparer);

  /// @brief Method System.IComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
  inline int32_t System_IComparable_CompareTo(::System::Object* obj);

  /// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x0 size 0xffffffffffffffff virtual true final true
  inline int32_t System_Collections_IStructuralComparable_CompareTo(::System::Object* other, ::System::Collections::IComparer* comparer);

  /// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final true
  inline int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer* comparer);

  /// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW ToString();

  /// @brief Method System.ITupleInternal.ToString addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::StringW System_ITupleInternal_ToString(::System::Text::StringBuilder* sb);

  /// @brief Method System.Runtime.CompilerServices.ITuple.get_Length addr 0x0 size 0xffffffffffffffff virtual true final true
  inline int32_t System_Runtime_CompilerServices_ITuple_get_Length();

  // Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tuple_2(Tuple_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tuple_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tuple_2(Tuple_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tuple_2();

public:
  /// @brief Field m_Item1, offset: 0x10, size: 0x8, def value: None
  T1 ___m_Item1;

  /// @brief Field m_Item2, offset: 0x18, size: 0x8, def value: None
  T2 ___m_Item2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Tuple_2, "System", "Tuple`2");
