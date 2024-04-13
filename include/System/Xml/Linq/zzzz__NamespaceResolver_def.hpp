#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NamespaceResolver)
namespace System::Xml::Linq {
class XNamespace;
}
namespace System::Xml::Linq {
class __NamespaceResolver__NamespaceDeclaration;
}
// Forward declare root types
namespace System::Xml::Linq {
class __NamespaceResolver__NamespaceDeclaration;
}
namespace System::Xml::Linq {
struct NamespaceResolver;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration);
MARK_VAL_T(::System::Xml::Linq::NamespaceResolver);
// Type: ::NamespaceDeclaration
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Linq {
// Is value type: false
// CS Name: ::NamespaceResolver::NamespaceDeclaration*
class CORDL_TYPE __NamespaceResolver__NamespaceDeclaration : public ::System::Object {
public:
  // Declarations
  /// @brief Field ns, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ns, put = __cordl_internal_set_ns))::System::Xml::Linq::XNamespace* ns;

  /// @brief Field prefix, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_prefix, put = __cordl_internal_set_prefix))::StringW prefix;

  /// @brief Field prev, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_prev, put = __cordl_internal_set_prev))::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration* prev;

  /// @brief Field scope, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_scope, put = __cordl_internal_set_scope)) int32_t scope;

  static inline ::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration* New_ctor();

  constexpr ::System::Xml::Linq::XNamespace*& __cordl_internal_get_ns();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::XNamespace*> const& __cordl_internal_get_ns() const;

  constexpr ::StringW const& __cordl_internal_get_prefix() const;

  constexpr ::StringW& __cordl_internal_get_prefix();

  constexpr ::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration*& __cordl_internal_get_prev();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration*> const& __cordl_internal_get_prev() const;

  constexpr int32_t const& __cordl_internal_get_scope() const;

  constexpr int32_t& __cordl_internal_get_scope();

  constexpr void __cordl_internal_set_ns(::System::Xml::Linq::XNamespace* value);

  constexpr void __cordl_internal_set_prefix(::StringW value);

  constexpr void __cordl_internal_set_prev(::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration* value);

  constexpr void __cordl_internal_set_scope(int32_t value);

  /// @brief Method .ctor, addr 0x2ca02b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NamespaceResolver__NamespaceDeclaration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NamespaceResolver__NamespaceDeclaration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NamespaceResolver__NamespaceDeclaration(__NamespaceResolver__NamespaceDeclaration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NamespaceResolver__NamespaceDeclaration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NamespaceResolver__NamespaceDeclaration(__NamespaceResolver__NamespaceDeclaration const&) = delete;

  /// @brief Field prefix, offset: 0x10, size: 0x8, def value: None
  ::StringW ___prefix;

  /// @brief Field ns, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Linq::XNamespace* ___ns;

  /// @brief Field scope, offset: 0x20, size: 0x4, def value: None
  int32_t ___scope;

  /// @brief Field prev, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration* ___prev;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration, ___prefix) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration, ___ns) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration, ___scope) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration, ___prev) == 0x28, "Offset mismatch!");

} // namespace System::Xml::Linq
// Type: System.Xml.Linq::NamespaceResolver
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Linq {
// Is value type: true
// CS Name: ::System.Xml.Linq::NamespaceResolver
struct CORDL_TYPE NamespaceResolver {
public:
  // Declarations
  using NamespaceDeclaration = ::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration;

  /// @brief Method Add, addr 0x2ca01a4, size 0x9c, virtual false, abstract: false, final false
  inline void Add(::StringW prefix, ::System::Xml::Linq::XNamespace* ns);

  /// @brief Method AddFirst, addr 0x2ca0028, size 0x98, virtual false, abstract: false, final false
  inline void AddFirst(::StringW prefix, ::System::Xml::Linq::XNamespace* ns);

  /// @brief Method GetPrefixOfNamespace, addr 0x2c9ff4c, size 0xdc, virtual false, abstract: false, final false
  inline ::StringW GetPrefixOfNamespace(::System::Xml::Linq::XNamespace* ns, bool allowDefaultNamespace);

  /// @brief Method PopScope, addr 0x2ca0240, size 0x78, virtual false, abstract: false, final false
  inline void PopScope();

  /// @brief Method PushScope, addr 0x2ca0194, size 0x10, virtual false, abstract: false, final false
  inline void PushScope();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NamespaceResolver();

  // Ctor Parameters [CppParam { name: "_scope", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_declaration", ty:
  // "::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration*", modifiers: "", def_value: None }, CppParam { name: "_rover", ty:
  // "::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration*", modifiers: "", def_value: None }]
  constexpr NamespaceResolver(int32_t _scope, ::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration* _declaration,
                              ::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration* _rover) noexcept;

  /// @brief Field _scope, offset: 0x0, size: 0x4, def value: None
  int32_t _scope;

  /// @brief Field _declaration, offset: 0x8, size: 0x8, def value: None
  ::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration* _declaration;

  /// @brief Field _rover, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration* _rover;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::NamespaceResolver, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Linq::NamespaceResolver, _scope) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::NamespaceResolver, _declaration) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::NamespaceResolver, _rover) == 0x10, "Offset mismatch!");

} // namespace System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration*, "System.Xml.Linq", "NamespaceResolver/NamespaceDeclaration");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::NamespaceResolver, "System.Xml.Linq", "NamespaceResolver");
