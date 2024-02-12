#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(IReadOnlyDictionary_2)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IReadOnlyDictionary_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::IReadOnlyDictionary_2);
// Type: System.Collections.Generic::IReadOnlyDictionary`2
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3836))
// CS Name: ::System.Collections.Generic::IReadOnlyDictionary`2<TKey,TValue>*
class CORDL_TYPE IReadOnlyDictionary_2 {
public:
  // Declarations
  __declspec(property(get = get_Item)) TValue Item[];

  __declspec(property(get = get_Keys))::System::Collections::Generic::IEnumerable_1<TKey>* Keys;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
  i___System__Collections__Generic__IReadOnlyCollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
  i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool TryGetValue(TKey key, ByRef<TValue> value);

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline TValue get_Item(TKey key);

  /// @brief Method get_Keys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IEnumerable_1<TKey>* get_Keys();

  // Ctor Parameters [CppParam { name: "", ty: "IReadOnlyDictionary_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IReadOnlyDictionary_2(IReadOnlyDictionary_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IReadOnlyDictionary_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IReadOnlyDictionary_2(IReadOnlyDictionary_2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::IReadOnlyDictionary_2, "System.Collections.Generic", "IReadOnlyDictionary`2");
