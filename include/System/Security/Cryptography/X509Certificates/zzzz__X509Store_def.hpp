#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509Store.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/X509Certificates/zzzz__OpenFlags_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__StoreLocation_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(X509Store)
namespace Mono::Security::X509 {
class X509Store;
}
namespace Mono::Security::X509 {
class X509Stores;
}
namespace System::Security::Cryptography::X509Certificates {
struct OpenFlags;
}
namespace System::Security::Cryptography::X509Certificates {
struct StoreLocation;
}
namespace System::Security::Cryptography::X509Certificates {
struct StoreName;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Collection;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509Store;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509Store);
// Dependencies System.IDisposable, System.Object, System.Security.Cryptography.X509Certificates.OpenFlags, System.Security.Cryptography.X509Certificates.StoreLocation
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// CS Name: System.Security.Cryptography.X509Certificates.X509Store
class CORDL_TYPE X509Store : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Certificates)) ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* Certificates;

  __declspec(property(get = get_Factory)) ::Mono::Security::X509::X509Stores* Factory;

  __declspec(property(get = get_Store)) ::Mono::Security::X509::X509Store* Store;

  /// @brief Field _flags, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__flags, put = __cordl_internal_set__flags)) ::System::Security::Cryptography::X509Certificates::OpenFlags _flags;

  /// @brief Field _location, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__location, put = __cordl_internal_set__location)) ::System::Security::Cryptography::X509Certificates::StoreLocation _location;

  /// @brief Field _name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name)) ::StringW _name;

  /// @brief Field list, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_list, put = __cordl_internal_set_list)) ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* list;

  /// @brief Field store, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_store, put = __cordl_internal_set_store)) ::Mono::Security::X509::X509Store* store;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Close, addr 0x4443784, size 0x1c, virtual false, abstract: false, final false
  inline void Close();

  /// @brief Method Dispose, addr 0x44437a0, size 0x1c, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::System::Security::Cryptography::X509Certificates::X509Store* New_ctor(::System::Security::Cryptography::X509Certificates::StoreName storeName,
                                                                                        ::System::Security::Cryptography::X509Certificates::StoreLocation storeLocation);

  /// @brief Method Open, addr 0x44437bc, size 0x3ec, virtual false, abstract: false, final false
  inline void Open(::System::Security::Cryptography::X509Certificates::OpenFlags flags);

  constexpr ::System::Security::Cryptography::X509Certificates::OpenFlags const& __cordl_internal_get__flags() const;

  constexpr ::System::Security::Cryptography::X509Certificates::OpenFlags& __cordl_internal_get__flags();

  constexpr ::System::Security::Cryptography::X509Certificates::StoreLocation const& __cordl_internal_get__location() const;

  constexpr ::System::Security::Cryptography::X509Certificates::StoreLocation& __cordl_internal_get__location();

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* const& __cordl_internal_get_list() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*& __cordl_internal_get_list();

  constexpr ::Mono::Security::X509::X509Store* const& __cordl_internal_get_store() const;

  constexpr ::Mono::Security::X509::X509Store*& __cordl_internal_get_store();

  constexpr void __cordl_internal_set__flags(::System::Security::Cryptography::X509Certificates::OpenFlags value);

  constexpr void __cordl_internal_set__location(::System::Security::Cryptography::X509Certificates::StoreLocation value);

  constexpr void __cordl_internal_set__name(::StringW value);

  constexpr void __cordl_internal_set_list(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* value);

  constexpr void __cordl_internal_set_store(::Mono::Security::X509::X509Store* value);

  /// @brief Method .ctor, addr 0x44435b4, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::X509Certificates::StoreName storeName, ::System::Security::Cryptography::X509Certificates::StoreLocation storeLocation);

  /// @brief Method get_Certificates, addr 0x44436e0, size 0x80, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* get_Certificates();

  /// @brief Method get_Factory, addr 0x4443760, size 0x1c, virtual false, abstract: false, final false
  inline ::Mono::Security::X509::X509Stores* get_Factory();

  /// @brief Method get_Store, addr 0x444377c, size 0x8, virtual false, abstract: false, final false
  inline ::Mono::Security::X509::X509Store* get_Store();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Store();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509Store", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Store(X509Store&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Store", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Store(X509Store const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9332 };

  /// @brief Field _name, offset: 0x10, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _location, offset: 0x18, size: 0x4, def value: None
  ::System::Security::Cryptography::X509Certificates::StoreLocation ____location;

  /// @brief Field list, offset: 0x20, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* ___list;

  /// @brief Field _flags, offset: 0x28, size: 0x4, def value: None
  ::System::Security::Cryptography::X509Certificates::OpenFlags ____flags;

  /// @brief Field store, offset: 0x30, size: 0x8, def value: None
  ::Mono::Security::X509::X509Store* ___store;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Store, ____name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Store, ____location) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Store, ___list) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Store, ____flags) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Store, ___store) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509Store, 0x38>, "Size mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Store);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Store*, "System.Security.Cryptography.X509Certificates", "X509Store");
