#pragma once
// IWYU pragma private; include "System/UriBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UriBuilder)
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System {
class UriBuilder;
}
// Write type traits
MARK_REF_PTR_T(::System::UriBuilder);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.UriBuilder
class CORDL_TYPE UriBuilder : public ::System::Object {
public:
  // Declarations
  __declspec(property(put = set_Host)) ::StringW Host;

  __declspec(property(put = set_Path)) ::StringW Path;

  __declspec(property(put = set_Port)) int32_t Port;

  __declspec(property(put = set_Query)) ::StringW Query;

  __declspec(property(put = set_Scheme)) ::StringW Scheme;

  __declspec(property(get = get_Uri)) ::System::Uri* Uri;

  /// @brief Field _changed, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__changed, put = __cordl_internal_set__changed)) bool _changed;

  /// @brief Field _fragment, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__fragment, put = __cordl_internal_set__fragment)) ::StringW _fragment;

  /// @brief Field _host, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__host, put = __cordl_internal_set__host)) ::StringW _host;

  /// @brief Field _password, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__password, put = __cordl_internal_set__password)) ::StringW _password;

  /// @brief Field _path, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__path, put = __cordl_internal_set__path)) ::StringW _path;

  /// @brief Field _port, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__port, put = __cordl_internal_set__port)) int32_t _port;

  /// @brief Field _query, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__query, put = __cordl_internal_set__query)) ::StringW _query;

  /// @brief Field _scheme, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__scheme, put = __cordl_internal_set__scheme)) ::StringW _scheme;

  /// @brief Field _schemeDelimiter, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__schemeDelimiter, put = __cordl_internal_set__schemeDelimiter)) ::StringW _schemeDelimiter;

  /// @brief Field _uri, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__uri, put = __cordl_internal_set__uri)) ::System::Uri* _uri;

  /// @brief Field _username, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__username, put = __cordl_internal_set__username)) ::StringW _username;

  /// @brief Method Equals, addr 0x440b74c, size 0x5c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* rparam);

  /// @brief Method GetHashCode, addr 0x440b7a8, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Init, addr 0x440ae6c, size 0x174, virtual false, abstract: false, final false
  inline void Init(::System::Uri* uri);

  static inline ::System::UriBuilder* New_ctor();

  static inline ::System::UriBuilder* New_ctor(::StringW uri);

  static inline ::System::UriBuilder* New_ctor(::System::Uri* uri);

  /// @brief Method SetFieldsFromUri, addr 0x440b150, size 0x164, virtual false, abstract: false, final false
  inline void SetFieldsFromUri(::System::Uri* uri);

  /// @brief Method ToString, addr 0x440b7c8, size 0x428, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr bool const& __cordl_internal_get__changed() const;

  constexpr bool& __cordl_internal_get__changed();

  constexpr ::StringW const& __cordl_internal_get__fragment() const;

  constexpr ::StringW& __cordl_internal_get__fragment();

  constexpr ::StringW const& __cordl_internal_get__host() const;

  constexpr ::StringW& __cordl_internal_get__host();

  constexpr ::StringW const& __cordl_internal_get__password() const;

  constexpr ::StringW& __cordl_internal_get__password();

  constexpr ::StringW const& __cordl_internal_get__path() const;

  constexpr ::StringW& __cordl_internal_get__path();

  constexpr int32_t const& __cordl_internal_get__port() const;

  constexpr int32_t& __cordl_internal_get__port();

  constexpr ::StringW const& __cordl_internal_get__query() const;

  constexpr ::StringW& __cordl_internal_get__query();

  constexpr ::StringW const& __cordl_internal_get__scheme() const;

  constexpr ::StringW& __cordl_internal_get__scheme();

  constexpr ::StringW const& __cordl_internal_get__schemeDelimiter() const;

  constexpr ::StringW& __cordl_internal_get__schemeDelimiter();

  constexpr ::System::Uri* const& __cordl_internal_get__uri() const;

  constexpr ::System::Uri*& __cordl_internal_get__uri();

  constexpr ::StringW const& __cordl_internal_get__username() const;

  constexpr ::StringW& __cordl_internal_get__username();

  constexpr void __cordl_internal_set__changed(bool value);

  constexpr void __cordl_internal_set__fragment(::StringW value);

  constexpr void __cordl_internal_set__host(::StringW value);

  constexpr void __cordl_internal_set__password(::StringW value);

  constexpr void __cordl_internal_set__path(::StringW value);

  constexpr void __cordl_internal_set__port(int32_t value);

  constexpr void __cordl_internal_set__query(::StringW value);

  constexpr void __cordl_internal_set__scheme(::StringW value);

  constexpr void __cordl_internal_set__schemeDelimiter(::StringW value);

  constexpr void __cordl_internal_set__uri(::System::Uri* value);

  constexpr void __cordl_internal_set__username(::StringW value);

  /// @brief Method .ctor, addr 0x440abbc, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x440acc8, size 0x1a4, virtual false, abstract: false, final false
  inline void _ctor(::StringW uri);

  /// @brief Method .ctor, addr 0x440afe0, size 0x170, virtual false, abstract: false, final false
  inline void _ctor(::System::Uri* uri);

  /// @brief Method get_Uri, addr 0x440b6bc, size 0x90, virtual false, abstract: false, final false
  inline ::System::Uri* get_Uri();

  /// @brief Method set_Host, addr 0x440b2b4, size 0xec, virtual false, abstract: false, final false
  inline void set_Host(::StringW value);

  /// @brief Method set_Path, addr 0x440b3a0, size 0xb4, virtual false, abstract: false, final false
  inline void set_Path(::StringW value);

  /// @brief Method set_Port, addr 0x440b454, size 0x6c, virtual false, abstract: false, final false
  inline void set_Port(int32_t value);

  /// @brief Method set_Query, addr 0x440b4c0, size 0xb8, virtual false, abstract: false, final false
  inline void set_Query(::StringW value);

  /// @brief Method set_Scheme, addr 0x440b578, size 0x144, virtual false, abstract: false, final false
  inline void set_Scheme(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UriBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UriBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UriBuilder(UriBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UriBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UriBuilder(UriBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9184 };

  /// @brief Field _changed, offset: 0x10, size: 0x1, def value: None
  bool ____changed;

  /// @brief Field _fragment, offset: 0x18, size: 0x8, def value: None
  ::StringW ____fragment;

  /// @brief Field _host, offset: 0x20, size: 0x8, def value: None
  ::StringW ____host;

  /// @brief Field _password, offset: 0x28, size: 0x8, def value: None
  ::StringW ____password;

  /// @brief Field _path, offset: 0x30, size: 0x8, def value: None
  ::StringW ____path;

  /// @brief Field _port, offset: 0x38, size: 0x4, def value: None
  int32_t ____port;

  /// @brief Field _query, offset: 0x40, size: 0x8, def value: None
  ::StringW ____query;

  /// @brief Field _scheme, offset: 0x48, size: 0x8, def value: None
  ::StringW ____scheme;

  /// @brief Field _schemeDelimiter, offset: 0x50, size: 0x8, def value: None
  ::StringW ____schemeDelimiter;

  /// @brief Field _uri, offset: 0x58, size: 0x8, def value: None
  ::System::Uri* ____uri;

  /// @brief Field _username, offset: 0x60, size: 0x8, def value: None
  ::StringW ____username;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::UriBuilder, ____changed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::UriBuilder, ____fragment) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::UriBuilder, ____host) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::UriBuilder, ____password) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::UriBuilder, ____path) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::UriBuilder, ____port) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::UriBuilder, ____query) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::UriBuilder, ____scheme) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::UriBuilder, ____schemeDelimiter) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::UriBuilder, ____uri) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::UriBuilder, ____username) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::UriBuilder, 0x68>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::UriBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::UriBuilder*, "System", "UriBuilder");
