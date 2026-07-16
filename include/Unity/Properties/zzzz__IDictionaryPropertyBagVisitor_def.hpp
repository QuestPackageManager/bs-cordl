#pragma once
// IWYU pragma private; include "Unity/Properties/IDictionaryPropertyBagVisitor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDictionaryPropertyBagVisitor)
namespace Unity::Properties {
template <typename TDictionary, typename TKey, typename TValue> class IDictionaryPropertyBag_3;
}
// Forward declare root types
namespace Unity::Properties {
class IDictionaryPropertyBagVisitor;
}
// Write type traits
MARK_REF_T(::Unity::Properties::IDictionaryPropertyBagVisitor*);
DEFINE_IL2CPP_CLASS(::Unity::Properties::IDictionaryPropertyBagVisitor*, "Unity.Properties", "IDictionaryPropertyBagVisitor");
// Dependencies
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.IDictionaryPropertyBagVisitor
class CORDL_TYPE IDictionaryPropertyBagVisitor {
public:
  // Declarations
  /// @brief Method Visit, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename TDictionary, typename TKey, typename TValue>
  inline void Visit(::Unity::Properties::IDictionaryPropertyBag_3<TDictionary, TKey, TValue>* properties, ::by_ref<TDictionary> container);

  // Ctor Parameters [CppParam { name: "", ty: "IDictionaryPropertyBagVisitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDictionaryPropertyBagVisitor(IDictionaryPropertyBagVisitor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19652 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
