#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/Store/X509StoreException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(X509StoreException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Store {
class X509StoreException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::Store::X509StoreException);
// Type: Org.BouncyCastle.X509.Store::X509StoreException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509::Store {
// Is value type: false
// CS Name: ::Org.BouncyCastle.X509.Store::X509StoreException*
class CORDL_TYPE X509StoreException : public ::System::Exception {
public:
  // Declarations
  static inline ::Org::BouncyCastle::X509::Store::X509StoreException* New_ctor();

  static inline ::Org::BouncyCastle::X509::Store::X509StoreException* New_ctor(::StringW message);

  static inline ::Org::BouncyCastle::X509::Store::X509StoreException* New_ctor(::StringW message, ::System::Exception* e);

  /// @brief Method .ctor, addr 0x25a9b34, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x25a9b8c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x25a9bf4, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* e);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509StoreException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509StoreException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509StoreException(X509StoreException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509StoreException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509StoreException(X509StoreException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1844 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::Store::X509StoreException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::X509::Store
NEED_NO_BOX(::Org::BouncyCastle::X509::Store::X509StoreException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::Store::X509StoreException*, "Org.BouncyCastle.X509.Store", "X509StoreException");
