#pragma once
// IWYU pragma private; include "System/ValueTuple.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueTuple)
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
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
class IComparable;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class IValueTupleInternal;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
struct ValueTuple;
}
// Write type traits
MARK_VAL_T(::System::ValueTuple);
// Type: System::ValueTuple
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace System {
// Is value type: true
// CS Name: ::System::ValueTuple
#pragma pack(push, 0)
struct CORDL_TYPE ValueTuple {
public:
  // Declarations
  __declspec(property(get = System_Runtime_CompilerServices_ITuple_get_Length)) int32_t System_Runtime_CompilerServices_ITuple_Length;

  /// @brief Convert operator to "::System::Collections::IStructuralComparable"
  constexpr operator ::System::Collections::IStructuralComparable*();

  /// @brief Convert operator to "::System::Collections::IStructuralEquatable"
  constexpr operator ::System::Collections::IStructuralEquatable*();

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple>"
  constexpr operator ::System::IComparable_1<::System::ValueTuple>*();

  /// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple>"
  constexpr operator ::System::IEquatable_1<::System::ValueTuple>*();

  /// @brief Convert operator to "::System::IValueTupleInternal"
  constexpr operator ::System::IValueTupleInternal*();

  /// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
  constexpr operator ::System::Runtime::CompilerServices::ITuple*();

  /// @brief Method CombineHashCodes, addr 0x295332c, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t CombineHashCodes(int32_t h1, int32_t h2);

  /// @brief Method CombineHashCodes, addr 0x29533a8, size 0x80, virtual false, abstract: false, final false
  static inline int32_t CombineHashCodes(int32_t h1, int32_t h2, int32_t h3);

  /// @brief Method CombineHashCodes, addr 0x2953428, size 0x90, virtual false, abstract: false, final false
  static inline int32_t CombineHashCodes(int32_t h1, int32_t h2, int32_t h3, int32_t h4);

  /// @brief Method CombineHashCodes, addr 0x29534b8, size 0x98, virtual false, abstract: false, final false
  static inline int32_t CombineHashCodes(int32_t h1, int32_t h2, int32_t h3, int32_t h4, int32_t h5);

  /// @brief Method CombineHashCodes, addr 0x2953550, size 0xa8, virtual false, abstract: false, final false
  static inline int32_t CombineHashCodes(int32_t h1, int32_t h2, int32_t h3, int32_t h4, int32_t h5, int32_t h6);

  /// @brief Method CombineHashCodes, addr 0x29535f8, size 0xb0, virtual false, abstract: false, final false
  static inline int32_t CombineHashCodes(int32_t h1, int32_t h2, int32_t h3, int32_t h4, int32_t h5, int32_t h6, int32_t h7);

  /// @brief Method CombineHashCodes, addr 0x29536a8, size 0xc0, virtual false, abstract: false, final false
  static inline int32_t CombineHashCodes(int32_t h1, int32_t h2, int32_t h3, int32_t h4, int32_t h5, int32_t h6, int32_t h7, int32_t h8);

  /// @brief Method CompareTo, addr 0x295316c, size 0x8, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::ValueTuple other);

  /// @brief Method Equals, addr 0x2952f94, size 0x5c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2952ff0, size 0x8, virtual true, abstract: false, final true
  inline bool Equals(::System::ValueTuple other);

  /// @brief Method GetHashCode, addr 0x295328c, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method System.Collections.IStructuralComparable.CompareTo, addr 0x2953174, size 0x118, virtual true, abstract: false, final true
  inline int32_t System_Collections_IStructuralComparable_CompareTo(::System::Object* other, ::System::Collections::IComparer* comparer);

  /// @brief Method System.Collections.IStructuralEquatable.Equals, addr 0x2952ff8, size 0x5c, virtual true, abstract: false, final true
  inline bool System_Collections_IStructuralEquatable_Equals(::System::Object* other, ::System::Collections::IEqualityComparer* comparer);

  /// @brief Method System.Collections.IStructuralEquatable.GetHashCode, addr 0x2953294, size 0x8, virtual true, abstract: false, final true
  inline int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer* comparer);

  /// @brief Method System.IComparable.CompareTo, addr 0x2953054, size 0x118, virtual true, abstract: false, final true
  inline int32_t System_IComparable_CompareTo(::System::Object* other);

  /// @brief Method System.IValueTupleInternal.GetHashCode, addr 0x295329c, size 0x8, virtual true, abstract: false, final true
  inline int32_t System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer* comparer);

  /// @brief Method System.IValueTupleInternal.ToStringEnd, addr 0x29532e4, size 0x40, virtual true, abstract: false, final true
  inline ::StringW System_IValueTupleInternal_ToStringEnd();

  /// @brief Method System.Runtime.CompilerServices.ITuple.get_Length, addr 0x2953324, size 0x8, virtual true, abstract: false, final true
  inline int32_t System_Runtime_CompilerServices_ITuple_get_Length();

  /// @brief Method ToString, addr 0x29532a4, size 0x40, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Convert to "::System::Collections::IStructuralComparable"
  constexpr ::System::Collections::IStructuralComparable* i___System__Collections__IStructuralComparable();

  /// @brief Convert to "::System::Collections::IStructuralEquatable"
  constexpr ::System::Collections::IStructuralEquatable* i___System__Collections__IStructuralEquatable();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert to "::System::IComparable_1<::System::ValueTuple>"
  constexpr ::System::IComparable_1<::System::ValueTuple>* i___System__IComparable_1___System__ValueTuple_();

  /// @brief Convert to "::System::IEquatable_1<::System::ValueTuple>"
  constexpr ::System::IEquatable_1<::System::ValueTuple>* i___System__IEquatable_1___System__ValueTuple_();

  /// @brief Convert to "::System::IValueTupleInternal"
  constexpr ::System::IValueTupleInternal* i___System__IValueTupleInternal();

  /// @brief Convert to "::System::Runtime::CompilerServices::ITuple"
  constexpr ::System::Runtime::CompilerServices::ITuple* i___System__Runtime__CompilerServices__ITuple();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueTuple();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ValueTuple, 0x1>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::ValueTuple, "System", "ValueTuple");
