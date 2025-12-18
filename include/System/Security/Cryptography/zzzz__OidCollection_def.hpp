#pragma once
// IWYU pragma private; include "System/Security/Cryptography/OidCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OidCollection)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Security::Cryptography {
class OidEnumerator;
}
namespace System::Security::Cryptography {
class Oid;
}
namespace System {
class Array;
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
// Dependencies System.Object
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.OidCollection
class CORDL_TYPE OidCollection : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item)) ::System::Security::Cryptography::Oid* Item[];

  __declspec(property(get = get_SyncRoot)) ::System::Object* SyncRoot;

  /// @brief Field _list, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__list, put = __cordl_internal_set__list)) ::System::Collections::Generic::List_1<::System::Security::Cryptography::Oid*>* _list;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x61ec8e0, size 0xc4, virtual false, abstract: false, final false
  inline int32_t Add(::System::Security::Cryptography::Oid* oid);

  /// @brief Method GetEnumerator, addr 0x61eca58, size 0x58, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::OidEnumerator* GetEnumerator();

  static inline ::System::Security::Cryptography::OidCollection* New_ctor();

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x61ecac4, size 0x1a4, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x61ecac0, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::System::Collections::Generic::List_1<::System::Security::Cryptography::Oid*>* const& __cordl_internal_get__list() const;

  constexpr ::System::Collections::Generic::List_1<::System::Security::Cryptography::Oid*>*& __cordl_internal_get__list();

  constexpr void __cordl_internal_set__list(::System::Collections::Generic::List_1<::System::Security::Cryptography::Oid*>* value);

  /// @brief Method .ctor, addr 0x61ec86c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0x61eca08, size 0x50, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_IsSynchronized, addr 0x61ecc68, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x61ec9a4, size 0x64, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::Oid* get_Item(int32_t index);

  /// @brief Method get_SyncRoot, addr 0x61ecc70, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* get_SyncRoot();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OidCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OidCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OidCollection(OidCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OidCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OidCollection(OidCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11146 };

  /// @brief Field _list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Security::Cryptography::Oid*>* ____list;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::OidCollection, ____list) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::OidCollection, 0x18>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::OidCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::OidCollection*, "System.Security.Cryptography", "OidCollection");
