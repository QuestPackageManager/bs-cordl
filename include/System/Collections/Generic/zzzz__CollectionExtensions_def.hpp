#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CollectionExtensions)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IReadOnlyDictionary_2;
}
// Forward declare root types
namespace System::Collections::Generic {
class CollectionExtensions;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::Generic::CollectionExtensions);
// Type: System.Collections.Generic::CollectionExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3851))
// CS Name: ::System.Collections.Generic::CollectionExtensions*
class CORDL_TYPE CollectionExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetValueOrDefault, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue> static inline TValue GetValueOrDefault(::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>* dictionary, TKey key);

  /// @brief Method GetValueOrDefault, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue> static inline TValue GetValueOrDefault(::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>* dictionary, TKey key, TValue defaultValue);

  // Ctor Parameters [CppParam { name: "", ty: "CollectionExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionExtensions(CollectionExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionExtensions(CollectionExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Generic::CollectionExtensions, 0x10>, "Size mismatch!");

} // namespace System::Collections::Generic
NEED_NO_BOX(::System::Collections::Generic::CollectionExtensions);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Generic::CollectionExtensions*, "System.Collections.Generic", "CollectionExtensions");
