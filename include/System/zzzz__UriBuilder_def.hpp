#pragma once
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
// Type: System::UriBuilder
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8866))
// CS Name: ::System::UriBuilder*
class CORDL_TYPE UriBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field _changed, offset 0x10, size 0x1
  __declspec(property(get = __get__changed, put = __set__changed)) bool _changed;

  /// @brief Field _fragment, offset 0x18, size 0x8
  __declspec(property(get = __get__fragment, put = __set__fragment))::StringW _fragment;

  /// @brief Field _host, offset 0x20, size 0x8
  __declspec(property(get = __get__host, put = __set__host))::StringW _host;

  /// @brief Field _password, offset 0x28, size 0x8
  __declspec(property(get = __get__password, put = __set__password))::StringW _password;

  /// @brief Field _path, offset 0x30, size 0x8
  __declspec(property(get = __get__path, put = __set__path))::StringW _path;

  /// @brief Field _port, offset 0x38, size 0x4
  __declspec(property(get = __get__port, put = __set__port)) int32_t _port;

  /// @brief Field _query, offset 0x40, size 0x8
  __declspec(property(get = __get__query, put = __set__query))::StringW _query;

  /// @brief Field _scheme, offset 0x48, size 0x8
  __declspec(property(get = __get__scheme, put = __set__scheme))::StringW _scheme;

  /// @brief Field _schemeDelimiter, offset 0x50, size 0x8
  __declspec(property(get = __get__schemeDelimiter, put = __set__schemeDelimiter))::StringW _schemeDelimiter;

  /// @brief Field _uri, offset 0x58, size 0x8
  __declspec(property(get = __get__uri, put = __set__uri))::System::Uri* _uri;

  /// @brief Field _username, offset 0x60, size 0x8
  __declspec(property(get = __get__username, put = __set__username))::StringW _username;

  __declspec(property(put = set_Host))::StringW Host;

  __declspec(property(put = set_Path))::StringW Path;

  __declspec(property(put = set_Port)) int32_t Port;

  __declspec(property(put = set_Query))::StringW Query;

  __declspec(property(put = set_Scheme))::StringW Scheme;

  __declspec(property(get = get_Uri))::System::Uri* Uri;

  constexpr bool& __get__changed();

  constexpr bool const& __get__changed() const;

  constexpr void __set__changed(bool value);

  constexpr ::StringW& __get__fragment();

  constexpr ::StringW const& __get__fragment() const;

  constexpr void __set__fragment(::StringW value);

  constexpr ::StringW& __get__host();

  constexpr ::StringW const& __get__host() const;

  constexpr void __set__host(::StringW value);

  constexpr ::StringW& __get__password();

  constexpr ::StringW const& __get__password() const;

  constexpr void __set__password(::StringW value);

  constexpr ::StringW& __get__path();

  constexpr ::StringW const& __get__path() const;

  constexpr void __set__path(::StringW value);

  constexpr int32_t& __get__port();

  constexpr int32_t const& __get__port() const;

  constexpr void __set__port(int32_t value);

  constexpr ::StringW& __get__query();

  constexpr ::StringW const& __get__query() const;

  constexpr void __set__query(::StringW value);

  constexpr ::StringW& __get__scheme();

  constexpr ::StringW const& __get__scheme() const;

  constexpr void __set__scheme(::StringW value);

  constexpr ::StringW& __get__schemeDelimiter();

  constexpr ::StringW const& __get__schemeDelimiter() const;

  constexpr void __set__schemeDelimiter(::StringW value);

  constexpr ::System::Uri*& __get__uri();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __get__uri() const;

  constexpr void __set__uri(::System::Uri* value);

  constexpr ::StringW& __get__username();

  constexpr ::StringW const& __get__username() const;

  constexpr void __set__username(::StringW value);

  static inline ::System::UriBuilder* New_ctor();

  /// @brief Method .ctor addr 0x2946b7c size 0x10c virtual false final false
  inline void _ctor();

  static inline ::System::UriBuilder* New_ctor(::StringW uri);

  /// @brief Method .ctor addr 0x2946c88 size 0x1a8 virtual false final false
  inline void _ctor(::StringW uri);

  static inline ::System::UriBuilder* New_ctor(::System::Uri* uri);

  /// @brief Method .ctor addr 0x2946fa4 size 0x174 virtual false final false
  inline void _ctor(::System::Uri* uri);

  /// @brief Method Init addr 0x2946e30 size 0x174 virtual false final false
  inline void Init(::System::Uri* uri);

  /// @brief Method set_Host addr 0x294727c size 0xec virtual false final false
  inline void set_Host(::StringW value);

  /// @brief Method set_Path addr 0x2947368 size 0xb4 virtual false final false
  inline void set_Path(::StringW value);

  /// @brief Method set_Port addr 0x294741c size 0x70 virtual false final false
  inline void set_Port(int32_t value);

  /// @brief Method set_Query addr 0x294748c size 0xb8 virtual false final false
  inline void set_Query(::StringW value);

  /// @brief Method set_Scheme addr 0x2947544 size 0x148 virtual false final false
  inline void set_Scheme(::StringW value);

  /// @brief Method get_Uri addr 0x294768c size 0x98 virtual false final false
  inline ::System::Uri* get_Uri();

  /// @brief Method Equals addr 0x2947724 size 0x5c virtual true final false
  inline bool Equals(::System::Object* rparam);

  /// @brief Method GetHashCode addr 0x2947780 size 0x20 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method SetFieldsFromUri addr 0x2947118 size 0x164 virtual false final false
  inline void SetFieldsFromUri(::System::Uri* uri);

  /// @brief Method ToString addr 0x29477a0 size 0x4cc virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "UriBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UriBuilder(UriBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UriBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UriBuilder(UriBuilder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UriBuilder();

public:
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
static_assert(::cordl_internals::size_check_v<::System::UriBuilder, 0x68>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::UriBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::UriBuilder*, "System", "UriBuilder");
