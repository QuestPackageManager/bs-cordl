#pragma once
// IWYU pragma private; include "Unity/Properties/ListPropertyBag_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__IndexedCollectionPropertyBag_2_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListPropertyBag_1)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Unity::Properties {
struct InstantiationKind;
}
// Forward declare root types
namespace Unity::Properties {
template <typename TElement> class ListPropertyBag_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Properties::ListPropertyBag_1);
// Dependencies Unity.Properties.IndexedCollectionPropertyBag`2<TList, TElement>
namespace Unity::Properties {
// cpp template
template <typename TElement>
// Is value type: false
// CS Name: Unity.Properties.ListPropertyBag`1<TElement>
class CORDL_TYPE ListPropertyBag_1 : public ::Unity::Properties::IndexedCollectionPropertyBag_2<::System::Collections::Generic::List_1<TElement>*, TElement> {
public:
  // Declarations
  __declspec(property(get = get_InstantiationKind)) ::Unity::Properties::InstantiationKind InstantiationKind;

  /// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<TElement>* Instantiate();

  /// @brief Method InstantiateWithCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<TElement>* InstantiateWithCount(int32_t count);

  static inline ::Unity::Properties::ListPropertyBag_1<TElement>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_InstantiationKind, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Unity::Properties::InstantiationKind get_InstantiationKind();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListPropertyBag_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListPropertyBag_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListPropertyBag_1(ListPropertyBag_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListPropertyBag_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListPropertyBag_1(ListPropertyBag_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17475 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::ListPropertyBag_1, "Unity.Properties", "ListPropertyBag`1");
