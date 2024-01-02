#pragma once
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
// Type: Mono.Security.X509::X509Stores
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13760))
// CS Name: ::Mono.Security.X509::X509Stores*
class CORDL_TYPE X509Stores : public ::System::Object {
public:
  // Declarations
  /// @brief Field _storePath, offset 0x10, size 0x8
  __declspec(property(get = __get__storePath, put = __set__storePath))::StringW _storePath;

  /// @brief Field _newFormat, offset 0x18, size 0x1
  __declspec(property(get = __get__newFormat, put = __set__newFormat)) bool _newFormat;

  /// @brief Field _trusted, offset 0x20, size 0x8
  __declspec(property(get = __get__trusted, put = __set__trusted))::Mono::Security::X509::X509Store* _trusted;

  __declspec(property(get = get_TrustedRoot))::Mono::Security::X509::X509Store* TrustedRoot;

  constexpr ::StringW& __get__storePath();

  constexpr ::StringW const& __get__storePath() const;

  constexpr void __set__storePath(::StringW value);

  constexpr bool& __get__newFormat();

  constexpr bool const& __get__newFormat() const;

  constexpr void __set__newFormat(bool value);

  constexpr ::Mono::Security::X509::X509Store*& __get__trusted();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509Store*> const& __get__trusted() const;

  constexpr void __set__trusted(::Mono::Security::X509::X509Store* value);

  static inline ::Mono::Security::X509::X509Stores* New_ctor(::StringW path, bool newFormat);

  /// @brief Method .ctor, addr 0x23fe044, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW path, bool newFormat);

  /// @brief Method get_TrustedRoot, addr 0x23fe114, size 0xdc, virtual false, abstract: false, final false
  inline ::Mono::Security::X509::X509Store* get_TrustedRoot();

  /// @brief Method Open, addr 0x23fe1f0, size 0x120, virtual false, abstract: false, final false
  inline ::Mono::Security::X509::X509Store* Open(::StringW storeName, bool create);

  // Ctor Parameters [CppParam { name: "", ty: "X509Stores", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Stores(X509Stores&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Stores", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Stores(X509Stores const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Stores();

public:
  /// @brief Field _storePath, offset: 0x10, size: 0x8, def value: None
  ::StringW ____storePath;

  /// @brief Field _newFormat, offset: 0x18, size: 0x1, def value: None
  bool ____newFormat;

  /// @brief Field _trusted, offset: 0x20, size: 0x8, def value: None
  ::Mono::Security::X509::X509Store* ____trusted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::X509::X509Stores, 0x28>, "Size mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Stores, ____storePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Stores, ____newFormat) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Stores, ____trusted) == 0x20, "Offset mismatch!");

} // namespace Mono::Security::X509
NEED_NO_BOX(::Mono::Security::X509::X509Stores);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X509Stores*, "Mono.Security.X509", "X509Stores");
