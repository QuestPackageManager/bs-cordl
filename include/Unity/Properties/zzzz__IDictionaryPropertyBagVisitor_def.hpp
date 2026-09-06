#pragma once
// IWYU pragma private; include "Unity/Properties/IDictionaryPropertyBagVisitor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
CORDL_MODULE_EXPORT(IDictionaryPropertyBagVisitor)
namespace Unity::Properties {
template <typename TDictionary, typename TKey, typename TValue>
  requires(::cordl_internals::type_constraint<TDictionary, ::System::Collections::Generic::IDictionary_2<TKey, TValue>*>)
class IDictionaryPropertyBag_3;
}
// Forward declare root types
namespace Unity::Properties {
class IDictionaryPropertyBagVisitor;
}
// Write type traits
MARK_REF_T(::Unity::Properties::IDictionaryPropertyBagVisitor*);
DEFINE_IL2CPP_CLASS(::Unity::Properties::IDictionaryPropertyBagVisitor*, "Unity.Properties", "IDictionaryPropertyBagVisitor");
// Dependencies System.Collections.Generic.IDictionary`2<TKey, TValue>
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.IDictionaryPropertyBagVisitor
class CORDL_TYPE IDictionaryPropertyBagVisitor {
public:
  // Declarations
  /// @brief Method Visit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename TDictionary, typename TKey, typename TValue>
    requires(::cordl_internals::type_constraint<TDictionary, ::System::Collections::Generic::IDictionary_2<TKey, TValue>*>)
  inline void Visit(::Unity::Properties::IDictionaryPropertyBag_3<TDictionary, TKey, TValue>* properties, ::by_ref<TDictionary> container);

  // Ctor Parameters [CppParam { name: "", ty: "IDictionaryPropertyBagVisitor", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDictionaryPropertyBagVisitor(IDictionaryPropertyBagVisitorconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19685 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
