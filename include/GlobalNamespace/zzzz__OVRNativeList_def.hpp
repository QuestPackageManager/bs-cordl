#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRNativeList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRNativeList)
namespace GlobalNamespace {
template <typename T> struct OVREnumerable_1;
}
namespace GlobalNamespace {
template <typename T> struct OVRNativeList_1;
}
namespace GlobalNamespace {
struct OVRNativeList_CapacityHelper;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace Unity::Collections {
struct Allocator;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRNativeList;
}
namespace GlobalNamespace {
struct OVRNativeList_CapacityHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRNativeList);
MARK_VAL_T(::GlobalNamespace::OVRNativeList_CapacityHelper);
// Dependencies System.Nullable`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRNativeList/CapacityHelper
struct CORDL_TYPE OVRNativeList_CapacityHelper {
public:
  // Declarations
  /// @brief Method AllocateEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::GlobalNamespace::OVRNativeList_1<T> AllocateEmpty(::Unity::Collections::Allocator allocator);

  /// @brief Method .ctor, addr 0x5cefee8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Nullable_1<int32_t> count);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRNativeList_CapacityHelper();

  // Ctor Parameters [CppParam { name: "_count", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }]
  constexpr OVRNativeList_CapacityHelper(::System::Nullable_1<int32_t> _count) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7923 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field _count, offset: 0x0, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> _count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRNativeList_CapacityHelper, _count) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRNativeList_CapacityHelper, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRNativeList
class CORDL_TYPE OVRNativeList : public ::System::Object {
public:
  // Declarations
  using CapacityHelper = ::GlobalNamespace::OVRNativeList_CapacityHelper;

  /// @brief Method ToNativeList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::GlobalNamespace::OVRNativeList_1<T> ToNativeList(::System::Collections::Generic::IEnumerable_1<T>* collection, ::Unity::Collections::Allocator allocator);

  /// @brief Method WithSuggestedCapacityFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::GlobalNamespace::OVRNativeList_CapacityHelper WithSuggestedCapacityFrom(::System::Collections::Generic::IEnumerable_1<T>* collection);

  /// @brief Method WithSuggestedCapacityFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::GlobalNamespace::OVRNativeList_CapacityHelper WithSuggestedCapacityFrom(::System::Collections::Generic::IEnumerable_1<T>* collection,
                                                                                          ::ByRef<::GlobalNamespace::OVREnumerable_1<T>> nonAllocatingEnumerable);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRNativeList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRNativeList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRNativeList(OVRNativeList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRNativeList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRNativeList(OVRNativeList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7924 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRNativeList, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRNativeList);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRNativeList*, "", "OVRNativeList");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRNativeList_CapacityHelper, "", "OVRNativeList/CapacityHelper");
