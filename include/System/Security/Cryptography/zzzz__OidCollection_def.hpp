#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OidCollection)
namespace System::Security::Cryptography {
class Oid;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Security::Cryptography {
class OidEnumerator;
}
namespace System::Collections {
class ICollection;
}
namespace System {
class Array;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security::Cryptography {
class OidCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::OidCollection);
// Type: System.Security.Cryptography::OidCollection
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8973))
// CS Name: ::System.Security.Cryptography::OidCollection*
class CORDL_TYPE OidCollection : public ::System::Object {
public:
  // Declarations
  /// @brief Field _list, offset 0x10, size 0x8
  __declspec(property(get = __get__list, put = __set__list))::System::Collections::Generic::List_1<::System::Security::Cryptography::Oid*>* _list;

  __declspec(property(get = get_Item))::System::Security::Cryptography::Oid* Item[];

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr ::System::Collections::Generic::List_1<::System::Security::Cryptography::Oid*>*& __get__list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Security::Cryptography::Oid*>*> const& __get__list() const;

  constexpr void __set__list(::System::Collections::Generic::List_1<::System::Security::Cryptography::Oid*>* value);

  static inline ::System::Security::Cryptography::OidCollection* New_ctor();

  /// @brief Method .ctor addr 0x2975e90 size 0x80 virtual false final false
  inline void _ctor();

  /// @brief Method Add addr 0x2975f10 size 0xb4 virtual false final false
  inline int32_t Add(::System::Security::Cryptography::Oid* oid);

  /// @brief Method get_Item addr 0x2975fc4 size 0x58 virtual false final false
  inline ::System::Security::Cryptography::Oid* get_Item(int32_t index);

  /// @brief Method get_Count addr 0x297601c size 0x48 virtual true final true
  inline int32_t get_Count();

  /// @brief Method GetEnumerator addr 0x2976064 size 0x6c virtual false final false
  inline ::System::Security::Cryptography::OidEnumerator* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2976100 size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.ICollection.CopyTo addr 0x2976104 size 0x1bc virtual true final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method get_IsSynchronized addr 0x29762c0 size 0x8 virtual true final true
  inline bool get_IsSynchronized();

  /// @brief Method get_SyncRoot addr 0x29762c8 size 0x4 virtual true final true
  inline ::System::Object* get_SyncRoot();

  // Ctor Parameters [CppParam { name: "", ty: "OidCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OidCollection(OidCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OidCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OidCollection(OidCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OidCollection();

public:
  /// @brief Field _list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Security::Cryptography::Oid*>* ____list;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::OidCollection, 0x18>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::OidCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::OidCollection*, "System.Security.Cryptography", "OidCollection");
