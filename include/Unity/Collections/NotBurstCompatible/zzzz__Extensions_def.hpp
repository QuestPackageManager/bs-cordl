#pragma once
// IWYU pragma private; include "Unity/Collections/NotBurstCompatible/Extensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Extensions)
namespace Unity::Collections {
template <typename T> struct NativeHashSet_1;
}
namespace Unity::Collections {
template <typename T> struct NativeList_1;
}
namespace Unity::Collections {
template <typename T> struct NativeParallelHashSet_1;
}
// Forward declare root types
namespace Unity::Collections::NotBurstCompatible {
class Extensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::NotBurstCompatible::Extensions);
// Dependencies System.Object
namespace Unity::Collections::NotBurstCompatible {
// Is value type: false
// CS Name: Unity.Collections.NotBurstCompatible.Extensions
class CORDL_TYPE Extensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method CopyFromNBC, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void CopyFromNBC(::Unity::Collections::NativeList_1<T> list, ::ArrayW<T, ::Array<T>*> array);

  /// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> ToArray(::Unity::Collections::NativeHashSet_1<T> set);

  /// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> ToArray(::Unity::Collections::NativeParallelHashSet_1<T> set);

  /// @brief Method ToArrayNBC, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> ToArrayNBC(::Unity::Collections::NativeList_1<T> list);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Extensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Extensions(Extensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Extensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Extensions(Extensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15706 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::NotBurstCompatible::Extensions, 0x10>, "Size mismatch!");

} // namespace Unity::Collections::NotBurstCompatible
NEED_NO_BOX(::Unity::Collections::NotBurstCompatible::Extensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NotBurstCompatible::Extensions*, "Unity.Collections.NotBurstCompatible", "Extensions");
