#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListenerPrefix)
namespace System::Net {
class HttpListener;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class ListenerPrefix;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::ListenerPrefix);
// Type: System.Net::ListenerPrefix
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7200))
// CS Name: ::System.Net::ListenerPrefix*
class CORDL_TYPE ListenerPrefix : public ::System::Object {
public:
  // Declarations
  /// @brief Field original, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_original, put = __cordl_internal_set_original))::StringW original;

  /// @brief Field host, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_host, put = __cordl_internal_set_host))::StringW host;

  /// @brief Field port, offset 0x20, size 0x2
  __declspec(property(get = __cordl_internal_get_port, put = __cordl_internal_set_port)) uint16_t port;

  /// @brief Field path, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_path, put = __cordl_internal_set_path))::StringW path;

  /// @brief Field secure, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_secure, put = __cordl_internal_set_secure)) bool secure;

  /// @brief Field Listener, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_Listener, put = __cordl_internal_set_Listener))::System::Net::HttpListener* Listener;

  __declspec(property(get = get_Secure)) bool Secure;

  __declspec(property(get = get_Host))::StringW Host;

  __declspec(property(get = get_Port)) int32_t Port;

  __declspec(property(get = get_Path))::StringW Path;

  constexpr ::StringW& __cordl_internal_get_original();

  constexpr ::StringW const& __cordl_internal_get_original() const;

  constexpr void __cordl_internal_set_original(::StringW value);

  constexpr ::StringW& __cordl_internal_get_host();

  constexpr ::StringW const& __cordl_internal_get_host() const;

  constexpr void __cordl_internal_set_host(::StringW value);

  constexpr uint16_t& __cordl_internal_get_port();

  constexpr uint16_t const& __cordl_internal_get_port() const;

  constexpr void __cordl_internal_set_port(uint16_t value);

  constexpr ::StringW& __cordl_internal_get_path();

  constexpr ::StringW const& __cordl_internal_get_path() const;

  constexpr void __cordl_internal_set_path(::StringW value);

  constexpr bool& __cordl_internal_get_secure();

  constexpr bool const& __cordl_internal_get_secure() const;

  constexpr void __cordl_internal_set_secure(bool value);

  constexpr ::System::Net::HttpListener*& __cordl_internal_get_Listener();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpListener*> const& __cordl_internal_get_Listener() const;

  constexpr void __cordl_internal_set_Listener(::System::Net::HttpListener* value);

  static inline ::System::Net::ListenerPrefix* New_ctor(::StringW prefix);

  /// @brief Method .ctor, addr 0x29d7d58, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW prefix);

  /// @brief Method ToString, addr 0x29d8078, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_Secure, addr 0x29d8080, size 0x8, virtual false, abstract: false, final false
  inline bool get_Secure();

  /// @brief Method get_Host, addr 0x29d8088, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Host();

  /// @brief Method get_Port, addr 0x29d8090, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Port();

  /// @brief Method get_Path, addr 0x29d8098, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Path();

  /// @brief Method Equals, addr 0x29d80a0, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method GetHashCode, addr 0x29d8120, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Parse, addr 0x29d7d88, size 0x2f0, virtual false, abstract: false, final false
  inline void Parse(::StringW uri);

  /// @brief Method CheckUri, addr 0x29d8140, size 0x350, virtual false, abstract: false, final false
  static inline void CheckUri(::StringW uri);

  // Ctor Parameters [CppParam { name: "", ty: "ListenerPrefix", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListenerPrefix(ListenerPrefix&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListenerPrefix", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListenerPrefix(ListenerPrefix const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListenerPrefix();

public:
  /// @brief Field original, offset: 0x10, size: 0x8, def value: None
  ::StringW ___original;

  /// @brief Field host, offset: 0x18, size: 0x8, def value: None
  ::StringW ___host;

  /// @brief Field port, offset: 0x20, size: 0x2, def value: None
  uint16_t ___port;

  /// @brief Field path, offset: 0x28, size: 0x8, def value: None
  ::StringW ___path;

  /// @brief Field secure, offset: 0x30, size: 0x1, def value: None
  bool ___secure;

  /// @brief Field Listener, offset: 0x38, size: 0x8, def value: None
  ::System::Net::HttpListener* ___Listener;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::ListenerPrefix, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Net::ListenerPrefix, ___original) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::ListenerPrefix, ___host) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::ListenerPrefix, ___port) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::ListenerPrefix, ___path) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::ListenerPrefix, ___secure) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::ListenerPrefix, ___Listener) == 0x38, "Offset mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::ListenerPrefix);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ListenerPrefix*, "System.Net", "ListenerPrefix");
