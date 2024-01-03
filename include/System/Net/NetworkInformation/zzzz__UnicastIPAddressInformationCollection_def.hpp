#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnicastIPAddressInformationCollection)
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::ObjectModel {
template <typename T> class Collection_1;
}
namespace System::Collections {
class IEnumerable;
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
// Type: System.Net.NetworkInformation::UnicastIPAddressInformationCollection
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9257))
// CS Name: ::System.Net.NetworkInformation::UnicastIPAddressInformationCollection*
class CORDL_TYPE UnicastIPAddressInformationCollection : public ::System::Object {
public:
  // Declarations
  /// @brief Field addresses, offset 0x10, size 0x8
  __declspec(property(get = __get_addresses, put = __set_addresses))::System::Collections::ObjectModel::Collection_1<::System::Net::NetworkInformation::UnicastIPAddressInformation*>* addresses;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Net::NetworkInformation::UnicastIPAddressInformation*>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::System::Net::NetworkInformation::UnicastIPAddressInformation*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Net::NetworkInformation::UnicastIPAddressInformation*>"
  constexpr ::System::Collections::Generic::ICollection_1<::System::Net::NetworkInformation::UnicastIPAddressInformation*>*
  i___System__Collections__Generic__ICollection_1___System__Net__NetworkInformation__UnicastIPAddressInformation__() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Net::NetworkInformation::UnicastIPAddressInformation*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Net::NetworkInformation::UnicastIPAddressInformation*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Net::NetworkInformation::UnicastIPAddressInformation*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Net::NetworkInformation::UnicastIPAddressInformation*>*
  i___System__Collections__Generic__IEnumerable_1___System__Net__NetworkInformation__UnicastIPAddressInformation__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  constexpr ::System::Collections::ObjectModel::Collection_1<::System::Net::NetworkInformation::UnicastIPAddressInformation*>*& __get_addresses();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ObjectModel::Collection_1<::System::Net::NetworkInformation::UnicastIPAddressInformation*>*> const& __get_addresses() const;

  constexpr void __set_addresses(::System::Collections::ObjectModel::Collection_1<::System::Net::NetworkInformation::UnicastIPAddressInformation*>* value);

  static inline ::System::Net::NetworkInformation::UnicastIPAddressInformationCollection* New_ctor();

  /// @brief Method .ctor, addr 0x29ebcf8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method CopyTo, addr 0x29ebd74, size 0x68, virtual true, abstract: false, final false
  inline void CopyTo(::ArrayW<::System::Net::NetworkInformation::UnicastIPAddressInformation*, ::Array<::System::Net::NetworkInformation::UnicastIPAddressInformation*>*> array, int32_t offset);

  /// @brief Method get_Count, addr 0x29ebddc, size 0x50, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly, addr 0x29ebe2c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method Add, addr 0x29ebe34, size 0x60, virtual true, abstract: false, final false
  inline void Add(::System::Net::NetworkInformation::UnicastIPAddressInformation* address);

  /// @brief Method InternalAdd, addr 0x29ebe94, size 0x58, virtual false, abstract: false, final false
  inline void InternalAdd(::System::Net::NetworkInformation::UnicastIPAddressInformation* address);

  /// @brief Method Contains, addr 0x29ebeec, size 0x58, virtual true, abstract: false, final false
  inline bool Contains(::System::Net::NetworkInformation::UnicastIPAddressInformation* address);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x29ebf44, size 0x10, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method GetEnumerator, addr 0x29ebf54, size 0x50, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerator_1<::System::Net::NetworkInformation::UnicastIPAddressInformation*>* GetEnumerator();

  /// @brief Method Remove, addr 0x29ebfa4, size 0x60, virtual true, abstract: false, final false
  inline bool Remove(::System::Net::NetworkInformation::UnicastIPAddressInformation* address);

  /// @brief Method Clear, addr 0x29ec004, size 0x60, virtual true, abstract: false, final false
  inline void Clear();

  // Ctor Parameters [CppParam { name: "", ty: "UnicastIPAddressInformationCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnicastIPAddressInformationCollection(UnicastIPAddressInformationCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnicastIPAddressInformationCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnicastIPAddressInformationCollection(UnicastIPAddressInformationCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnicastIPAddressInformationCollection();

public:
  /// @brief Field addresses, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ObjectModel::Collection_1<::System::Net::NetworkInformation::UnicastIPAddressInformation*>* ___addresses;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::UnicastIPAddressInformationCollection, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::UnicastIPAddressInformationCollection, ___addresses) == 0x10, "Offset mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::UnicastIPAddressInformationCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::UnicastIPAddressInformationCollection*, "System.Net.NetworkInformation", "UnicastIPAddressInformationCollection");
