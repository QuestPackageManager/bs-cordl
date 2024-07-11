#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/Store/X509CollectionStoreParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(X509CollectionStoreParameters)
namespace Org::BouncyCastle::X509::Store {
class IX509StoreParameters;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Store {
class X509CollectionStoreParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters);
// Type: Org.BouncyCastle.X509.Store::X509CollectionStoreParameters
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509::Store {
// Is value type: false
// CS Name: ::Org.BouncyCastle.X509.Store::X509CollectionStoreParameters*
class CORDL_TYPE X509CollectionStoreParameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field collection, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_collection, put = __cordl_internal_set_collection))::System::Collections::IList* collection;

  /// @brief Convert operator to "::Org::BouncyCastle::X509::Store::IX509StoreParameters"
  constexpr operator ::Org::BouncyCastle::X509::Store::IX509StoreParameters*() noexcept;

  /// @brief Method GetCollection, addr 0x13e3f3c, size 0x58, virtual false, abstract: false, final false
  inline ::System::Collections::ICollection* GetCollection();

  static inline ::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters* New_ctor(::System::Collections::ICollection* collection);

  /// @brief Method ToString, addr 0x13e3f94, size 0x108, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Collections::IList*& __cordl_internal_get_collection();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get_collection() const;

  constexpr void __cordl_internal_set_collection(::System::Collections::IList* value);

  /// @brief Method .ctor, addr 0x13e3e80, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::ICollection* collection);

  /// @brief Convert to "::Org::BouncyCastle::X509::Store::IX509StoreParameters"
  constexpr ::Org::BouncyCastle::X509::Store::IX509StoreParameters* i___Org__BouncyCastle__X509__Store__IX509StoreParameters() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509CollectionStoreParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509CollectionStoreParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509CollectionStoreParameters(X509CollectionStoreParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509CollectionStoreParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509CollectionStoreParameters(X509CollectionStoreParameters const&) = delete;

  /// @brief Field collection, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___collection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters, ___collection) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::X509::Store
NEED_NO_BOX(::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::Store::X509CollectionStoreParameters*, "Org.BouncyCastle.X509.Store", "X509CollectionStoreParameters");
