#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/UnicastIPAddressInformationCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnicastIPAddressInformationCollection)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::ObjectModel {
template <typename T> class Collection_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Net::NetworkInformation {
class UnicastIPAddressInformation;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class UnicastIPAddressInformationCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::UnicastIPAddressInformationCollection);
// Dependencies System.Collections.Generic.ICollection`1<T>, System.Collections.Generic.IEnumerable`1<T>, System.Collections.IEnumerable, System.Object
namespace System::Net::NetworkInformation {
// Is value type: false
// CS Name: System.Net.NetworkInformation.UnicastIPAddressInformationCollection
class CORDL_TYPE UnicastIPAddressInformationCollection : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  /// @brief Field addresses, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_addresses,
                      put = __cordl_internal_set_addresses)) ::System::Collections::ObjectModel::Collection_1<::System::Net::NetworkInformation::UnicastIPAddressInformation*>* addresses;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Net::NetworkInformation::UnicastIPAddressInformation*>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::System::Net::NetworkInformation::UnicastIPAddressInformation*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Net::NetworkInformation::UnicastIPAddressInformation*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Net::NetworkInformation::UnicastIPAddressInformation*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x43e52b0, size 0x58, virtual true, abstract: false, final false
  inline void Add(::System::Net::NetworkInformation::UnicastIPAddressInformation* address);

  /// @brief Method Clear, addr 0x43e5470, size 0x58, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Contains, addr 0x43e5360, size 0x58, virtual true, abstract: false, final false
  inline bool Contains(::System::Net::NetworkInformation::UnicastIPAddressInformation* address);

  /// @brief Method CopyTo, addr 0x43e51f0, size 0x68, virtual true, abstract: false, final false
  inline void CopyTo(::ArrayW<::System::Net::NetworkInformation::UnicastIPAddressInformation*, ::Array<::System::Net::NetworkInformation::UnicastIPAddressInformation*>*> array, int32_t offset);

  /// @brief Method GetEnumerator, addr 0x43e53c8, size 0x50, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerator_1<::System::Net::NetworkInformation::UnicastIPAddressInformation*>* GetEnumerator();

  /// @brief Method InternalAdd, addr 0x43e5308, size 0x58, virtual false, abstract: false, final false
  inline void InternalAdd(::System::Net::NetworkInformation::UnicastIPAddressInformation* address);

  static inline ::System::Net::NetworkInformation::UnicastIPAddressInformationCollection* New_ctor();

  /// @brief Method Remove, addr 0x43e5418, size 0x58, virtual true, abstract: false, final false
  inline bool Remove(::System::Net::NetworkInformation::UnicastIPAddressInformation* address);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x43e53b8, size 0x10, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::System::Collections::ObjectModel::Collection_1<::System::Net::NetworkInformation::UnicastIPAddressInformation*>* const& __cordl_internal_get_addresses() const;

  constexpr ::System::Collections::ObjectModel::Collection_1<::System::Net::NetworkInformation::UnicastIPAddressInformation*>*& __cordl_internal_get_addresses();

  constexpr void __cordl_internal_set_addresses(::System::Collections::ObjectModel::Collection_1<::System::Net::NetworkInformation::UnicastIPAddressInformation*>* value);

  /// @brief Method .ctor, addr 0x43e5174, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0x43e5258, size 0x50, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly, addr 0x43e52a8, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Net::NetworkInformation::UnicastIPAddressInformation*>"
  constexpr ::System::Collections::Generic::ICollection_1<::System::Net::NetworkInformation::UnicastIPAddressInformation*>*
  i___System__Collections__Generic__ICollection_1___System__Net__NetworkInformation__UnicastIPAddressInformation__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Net::NetworkInformation::UnicastIPAddressInformation*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Net::NetworkInformation::UnicastIPAddressInformation*>*
  i___System__Collections__Generic__IEnumerable_1___System__Net__NetworkInformation__UnicastIPAddressInformation__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnicastIPAddressInformationCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnicastIPAddressInformationCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnicastIPAddressInformationCollection(UnicastIPAddressInformationCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnicastIPAddressInformationCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnicastIPAddressInformationCollection(UnicastIPAddressInformationCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9778 };

  /// @brief Field addresses, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ObjectModel::Collection_1<::System::Net::NetworkInformation::UnicastIPAddressInformation*>* ___addresses;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::NetworkInformation::UnicastIPAddressInformationCollection, ___addresses) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::UnicastIPAddressInformationCollection, 0x18>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::UnicastIPAddressInformationCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::UnicastIPAddressInformationCollection*, "System.Net.NetworkInformation", "UnicastIPAddressInformationCollection");
