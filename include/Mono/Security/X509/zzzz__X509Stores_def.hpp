#pragma once
// IWYU pragma private; include "Mono/Security/X509/X509Stores.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(X509Stores)
namespace Mono::Security::X509 {
class X509Store;
}
// Forward declare root types
namespace Mono::Security::X509 {
class X509Stores;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::X509::X509Stores);
// Dependencies System.Object
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.X509Stores
class CORDL_TYPE X509Stores : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_TrustedRoot)) ::Mono::Security::X509::X509Store* TrustedRoot;

  /// @brief Field _newFormat, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__newFormat, put = __cordl_internal_set__newFormat)) bool _newFormat;

  /// @brief Field _storePath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__storePath, put = __cordl_internal_set__storePath)) ::StringW _storePath;

  /// @brief Field _trusted, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__trusted, put = __cordl_internal_set__trusted)) ::Mono::Security::X509::X509Store* _trusted;

  static inline ::Mono::Security::X509::X509Stores* New_ctor(::StringW path, bool newFormat);

  /// @brief Method Open, addr 0x3c40128, size 0x114, virtual false, abstract: false, final false
  inline ::Mono::Security::X509::X509Store* Open(::StringW storeName, bool create);

  constexpr bool const& __cordl_internal_get__newFormat() const;

  constexpr bool& __cordl_internal_get__newFormat();

  constexpr ::StringW const& __cordl_internal_get__storePath() const;

  constexpr ::StringW& __cordl_internal_get__storePath();

  constexpr ::Mono::Security::X509::X509Store* const& __cordl_internal_get__trusted() const;

  constexpr ::Mono::Security::X509::X509Store*& __cordl_internal_get__trusted();

  constexpr void __cordl_internal_set__newFormat(bool value);

  constexpr void __cordl_internal_set__storePath(::StringW value);

  constexpr void __cordl_internal_set__trusted(::Mono::Security::X509::X509Store* value);

  /// @brief Method .ctor, addr 0x3c3ff8c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW path, bool newFormat);

  /// @brief Method get_TrustedRoot, addr 0x3c40054, size 0xd4, virtual false, abstract: false, final false
  inline ::Mono::Security::X509::X509Store* get_TrustedRoot();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Stores();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509Stores", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Stores(X509Stores&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Stores", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Stores(X509Stores const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15931 };

  /// @brief Field _storePath, offset: 0x10, size: 0x8, def value: None
  ::StringW ____storePath;

  /// @brief Field _newFormat, offset: 0x18, size: 0x1, def value: None
  bool ____newFormat;

  /// @brief Field _trusted, offset: 0x20, size: 0x8, def value: None
  ::Mono::Security::X509::X509Store* ____trusted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::X509::X509Stores, ____storePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Stores, ____newFormat) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Stores, ____trusted) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Security::X509::X509Stores, 0x28>, "Size mismatch!");

} // namespace Mono::Security::X509
NEED_NO_BOX(::Mono::Security::X509::X509Stores);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X509Stores*, "Mono.Security.X509", "X509Stores");
