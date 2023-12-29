#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IPAddressCollection)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Net {
class IPAddress;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::ObjectModel {
template <typename T> class Collection_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class IPAddressCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::IPAddressCollection);
// Type: System.Net.NetworkInformation::IPAddressCollection
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8084))
// CS Name: ::System.Net.NetworkInformation::IPAddressCollection*
class CORDL_TYPE IPAddressCollection : public ::System::Object {
public:
  // Declarations
  /// @brief Field addresses, offset 0x10, size 0x8
  __declspec(property(get = __get_addresses, put = __set_addresses))::System::Collections::ObjectModel::Collection_1<::System::Net::IPAddress*>* addresses;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Net::IPAddress*>"
  constexpr operator ::System::Collections::Generic::ICollection_1<::System::Net::IPAddress*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Net::IPAddress*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Net::IPAddress*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr ::System::Collections::ObjectModel::Collection_1<::System::Net::IPAddress*>*& __get_addresses();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ObjectModel::Collection_1<::System::Net::IPAddress*>*> const& __get_addresses() const;

  constexpr void __set_addresses(::System::Collections::ObjectModel::Collection_1<::System::Net::IPAddress*>* value);

  static inline ::System::Net::NetworkInformation::IPAddressCollection* New_ctor();

  /// @brief Method .ctor addr 0x286eab4 size 0x7c virtual false final false
  inline void _ctor();

  /// @brief Method CopyTo addr 0x286eb30 size 0x68 virtual true final false
  inline void CopyTo(::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*> array, int32_t offset);

  /// @brief Method get_Count addr 0x286eb98 size 0x50 virtual true final false
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly addr 0x286ebe8 size 0x8 virtual true final false
  inline bool get_IsReadOnly();

  /// @brief Method Add addr 0x286ebf0 size 0x60 virtual true final false
  inline void Add(::System::Net::IPAddress* address);

  /// @brief Method InternalAdd addr 0x286ec50 size 0x58 virtual false final false
  inline void InternalAdd(::System::Net::IPAddress* address);

  /// @brief Method Contains addr 0x286eca8 size 0x58 virtual true final false
  inline bool Contains(::System::Net::IPAddress* address);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x286ed00 size 0x10 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method GetEnumerator addr 0x286ed10 size 0x50 virtual true final false
  inline ::System::Collections::Generic::IEnumerator_1<::System::Net::IPAddress*>* GetEnumerator();

  /// @brief Method Remove addr 0x286ed60 size 0x60 virtual true final false
  inline bool Remove(::System::Net::IPAddress* address);

  /// @brief Method Clear addr 0x286edc0 size 0x60 virtual true final false
  inline void Clear();

  // Ctor Parameters [CppParam { name: "", ty: "IPAddressCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPAddressCollection(IPAddressCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPAddressCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPAddressCollection(IPAddressCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IPAddressCollection();

public:
  /// @brief Field addresses, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ObjectModel::Collection_1<::System::Net::IPAddress*>* ___addresses;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::IPAddressCollection, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::IPAddressCollection, ___addresses) == 0x10, "Offset mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::IPAddressCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::IPAddressCollection*, "System.Net.NetworkInformation", "IPAddressCollection");
