#pragma once
// IWYU pragma private; include "System/Collections/Generic/TreeSet_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__SortedSet_1_def.hpp"
CORDL_MODULE_EXPORT(TreeSet_1)
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Collections::Generic {
template <typename T> class TreeSet_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::TreeSet_1);
// Dependencies System.Collections.Generic.SortedSet`1<T>
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Collections.Generic.TreeSet`1<T>
class CORDL_TYPE TreeSet_1 : public ::System::Collections::Generic::SortedSet_1<T> {
public:
  // Declarations
  /// @brief Method AddIfNotPresent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool AddIfNotPresent(T item);

  static inline ::System::Collections::Generic::TreeSet_1<T>* New_ctor();

  static inline ::System::Collections::Generic::TreeSet_1<T>* New_ctor(::System::Collections::Generic::IComparer_1<T>* comparer);

  static inline ::System::Collections::Generic::TreeSet_1<T>* New_ctor(::System::Runtime::Serialization::SerializationInfo* siInfo, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IComparer_1<T>* comparer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* siInfo, ::System::Runtime::Serialization::StreamingContext context);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TreeSet_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TreeSet_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TreeSet_1(TreeSet_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TreeSet_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TreeSet_1(TreeSet_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11384 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::TreeSet_1, "System.Collections.Generic", "TreeSet`1");
