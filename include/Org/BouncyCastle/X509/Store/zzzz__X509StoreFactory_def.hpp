#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(X509StoreFactory)
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
namespace Org::BouncyCastle::X509::Store {
class IX509StoreParameters;
}
namespace System::Collections {
class ICollection;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Store {
class X509StoreFactory;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::Store::X509StoreFactory);
// Type: Org.BouncyCastle.X509.Store::X509StoreFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509::Store {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1851))
// CS Name: ::Org.BouncyCastle.X509.Store::X509StoreFactory*
class CORDL_TYPE X509StoreFactory : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::X509::Store::X509StoreFactory* New_ctor();

  /// @brief Method .ctor addr 0x11024b0 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method Create addr 0x11024b8 size 0x3b8 virtual false final false
  static inline ::Org::BouncyCastle::X509::Store::IX509Store* Create(::StringW type, ::Org::BouncyCastle::X509::Store::IX509StoreParameters* parameters);

  /// @brief Method checkCorrectType addr 0x1102870 size 0x380 virtual false final false
  static inline void checkCorrectType(::System::Collections::ICollection* coll, ::System::Type* t);

  // Ctor Parameters [CppParam { name: "", ty: "X509StoreFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509StoreFactory(X509StoreFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509StoreFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509StoreFactory(X509StoreFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509StoreFactory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::Store::X509StoreFactory, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::X509::Store
NEED_NO_BOX(::Org::BouncyCastle::X509::Store::X509StoreFactory);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::Store::X509StoreFactory*, "Org.BouncyCastle.X509.Store", "X509StoreFactory");
