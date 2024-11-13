#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/Store/X509CollectionStore.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(X509CollectionStore)
namespace Org::BouncyCastle::X509::Store {
class IX509Selector;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
namespace System::Collections {
class ICollection;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Store {
class X509CollectionStore;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::Store::X509CollectionStore);
// Type: Org.BouncyCastle.X509.Store::X509CollectionStore
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509::Store {
// Is value type: false
// CS Name: ::Org.BouncyCastle.X509.Store::X509CollectionStore*
class CORDL_TYPE X509CollectionStore : public ::System::Object {
public:
  // Declarations
  /// @brief Field _local, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__local, put = __cordl_internal_set__local)) ::System::Collections::ICollection* _local;

  /// @brief Convert operator to "::Org::BouncyCastle::X509::Store::IX509Store"
  constexpr operator ::Org::BouncyCastle::X509::Store::IX509Store*() noexcept;

  /// @brief Method GetMatches, addr 0x25b61ac, size 0x448, virtual true, abstract: false, final true
  inline ::System::Collections::ICollection* GetMatches(::Org::BouncyCastle::X509::Store::IX509Selector* selector);

  static inline ::Org::BouncyCastle::X509::Store::X509CollectionStore* New_ctor(::System::Collections::ICollection* collection);

  constexpr ::System::Collections::ICollection*& __cordl_internal_get__local();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ICollection*> const& __cordl_internal_get__local() const;

  constexpr void __cordl_internal_set__local(::System::Collections::ICollection* value);

  /// @brief Method .ctor, addr 0x25b6138, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::ICollection* collection);

  /// @brief Convert to "::Org::BouncyCastle::X509::Store::IX509Store"
  constexpr ::Org::BouncyCastle::X509::Store::IX509Store* i___Org__BouncyCastle__X509__Store__IX509Store() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509CollectionStore();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509CollectionStore", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509CollectionStore(X509CollectionStore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509CollectionStore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509CollectionStore(X509CollectionStore const&) = delete;

  /// @brief Field _local, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ICollection* ____local;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1848 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::Store::X509CollectionStore, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509CollectionStore, ____local) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::X509::Store
NEED_NO_BOX(::Org::BouncyCastle::X509::Store::X509CollectionStore);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::Store::X509CollectionStore*, "Org.BouncyCastle.X509.Store", "X509CollectionStore");
