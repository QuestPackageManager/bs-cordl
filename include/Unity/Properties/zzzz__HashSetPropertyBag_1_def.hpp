#pragma once
// IWYU pragma private; include "Unity/Properties/HashSetPropertyBag_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__SetPropertyBagBase_2_def.hpp"
CORDL_MODULE_EXPORT(HashSetPropertyBag_1)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace Unity::Properties {
struct InstantiationKind;
}
// Forward declare root types
namespace Unity::Properties {
template <typename TElement> class HashSetPropertyBag_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Properties::HashSetPropertyBag_1);
// Dependencies Unity.Properties.SetPropertyBagBase`2<TSet, TElement>
namespace Unity::Properties {
// cpp template
template <typename TElement>
// Is value type: false
// CS Name: Unity.Properties.HashSetPropertyBag`1<TElement>
class CORDL_TYPE HashSetPropertyBag_1 : public ::Unity::Properties::SetPropertyBagBase_2<::System::Collections::Generic::HashSet_1<TElement>*, TElement> {
public:
  // Declarations
  __declspec(property(get = get_InstantiationKind)) ::Unity::Properties::InstantiationKind InstantiationKind;

  /// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<TElement>* Instantiate();

  static inline ::Unity::Properties::HashSetPropertyBag_1<TElement>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_InstantiationKind, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Unity::Properties::InstantiationKind get_InstantiationKind();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HashSetPropertyBag_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HashSetPropertyBag_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HashSetPropertyBag_1(HashSetPropertyBag_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HashSetPropertyBag_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HashSetPropertyBag_1(HashSetPropertyBag_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17464 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::HashSetPropertyBag_1, "Unity.Properties", "HashSetPropertyBag`1");
