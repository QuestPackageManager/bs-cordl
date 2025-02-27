#pragma once
// IWYU pragma private; include "System/Xml/Linq/NamespaceResolver.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NamespaceResolver)
namespace System::Xml::Linq {
class NamespaceResolver_NamespaceDeclaration;
}
namespace System::Xml::Linq {
class XNamespace;
}
// Forward declare root types
namespace System::Xml::Linq {
class NamespaceResolver_NamespaceDeclaration;
}
namespace System::Xml::Linq {
struct NamespaceResolver;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Linq::NamespaceResolver_NamespaceDeclaration);
MARK_VAL_T(::System::Xml::Linq::NamespaceResolver);
// Dependencies System.Object
namespace System::Xml::Linq {
// Is value type: false
// CS Name: System.Xml.Linq.NamespaceResolver/NamespaceDeclaration
class CORDL_TYPE NamespaceResolver_NamespaceDeclaration : public ::System::Object {
public:
  // Declarations
  /// @brief Field ns, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ns, put = __cordl_internal_set_ns)) ::System::Xml::Linq::XNamespace* ns;

  /// @brief Field prefix, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_prefix, put = __cordl_internal_set_prefix)) ::StringW prefix;

  /// @brief Field prev, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_prev, put = __cordl_internal_set_prev)) ::System::Xml::Linq::NamespaceResolver_NamespaceDeclaration* prev;

  /// @brief Field scope, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_scope, put = __cordl_internal_set_scope)) int32_t scope;

  static inline ::System::Xml::Linq::NamespaceResolver_NamespaceDeclaration* New_ctor();

  constexpr ::System::Xml::Linq::XNamespace* const& __cordl_internal_get_ns() const;

  constexpr ::System::Xml::Linq::XNamespace*& __cordl_internal_get_ns();

  constexpr ::StringW const& __cordl_internal_get_prefix() const;

  constexpr ::StringW& __cordl_internal_get_prefix();

  constexpr ::System::Xml::Linq::NamespaceResolver_NamespaceDeclaration* const& __cordl_internal_get_prev() const;

  constexpr ::System::Xml::Linq::NamespaceResolver_NamespaceDeclaration*& __cordl_internal_get_prev();

  constexpr int32_t const& __cordl_internal_get_scope() const;

  constexpr int32_t& __cordl_internal_get_scope();

  constexpr void __cordl_internal_set_ns(::System::Xml::Linq::XNamespace* value);

  constexpr void __cordl_internal_set_prefix(::StringW value);

  constexpr void __cordl_internal_set_prev(::System::Xml::Linq::NamespaceResolver_NamespaceDeclaration* value);

  constexpr void __cordl_internal_set_scope(int32_t value);

  /// @brief Method .ctor, addr 0x425a500, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NamespaceResolver_NamespaceDeclaration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NamespaceResolver_NamespaceDeclaration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NamespaceResolver_NamespaceDeclaration(NamespaceResolver_NamespaceDeclaration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NamespaceResolver_NamespaceDeclaration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NamespaceResolver_NamespaceDeclaration(NamespaceResolver_NamespaceDeclaration const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17973 };

  /// @brief Field prefix, offset: 0x10, size: 0x8, def value: None
  ::StringW ___prefix;

  /// @brief Field ns, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Linq::XNamespace* ___ns;

  /// @brief Field scope, offset: 0x20, size: 0x4, def value: None
  int32_t ___scope;

  /// @brief Field prev, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Linq::NamespaceResolver_NamespaceDeclaration* ___prev;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Linq::NamespaceResolver_NamespaceDeclaration, ___prefix) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::NamespaceResolver_NamespaceDeclaration, ___ns) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::NamespaceResolver_NamespaceDeclaration, ___scope) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::NamespaceResolver_NamespaceDeclaration, ___prev) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::NamespaceResolver_NamespaceDeclaration, 0x30>, "Size mismatch!");

} // namespace System::Xml::Linq
// Dependencies
namespace System::Xml::Linq {
// Is value type: true
// CS Name: System.Xml.Linq.NamespaceResolver
struct CORDL_TYPE NamespaceResolver {
public:
  // Declarations
  using NamespaceDeclaration = ::System::Xml::Linq::NamespaceResolver_NamespaceDeclaration;

  /// @brief Method Add, addr 0x425a404, size 0x9c, virtual false, abstract: false, final false
  inline void Add(::StringW prefix, ::System::Xml::Linq::XNamespace* ns);

  /// @brief Method AddFirst, addr 0x425a288, size 0x98, virtual false, abstract: false, final false
  inline void AddFirst(::StringW prefix, ::System::Xml::Linq::XNamespace* ns);

  /// @brief Method GetPrefixOfNamespace, addr 0x425a1ac, size 0xdc, virtual false, abstract: false, final false
  inline ::StringW GetPrefixOfNamespace(::System::Xml::Linq::XNamespace* ns, bool allowDefaultNamespace);

  /// @brief Method PopScope, addr 0x425a4a0, size 0x60, virtual false, abstract: false, final false
  inline void PopScope();

  /// @brief Method PushScope, addr 0x425a3f4, size 0x10, virtual false, abstract: false, final false
  inline void PushScope();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NamespaceResolver();

  // Ctor Parameters [CppParam { name: "_scope", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_declaration", ty: "::System::Xml::Linq::NamespaceResolver_NamespaceDeclaration*",
  // modifiers: "", def_value: None }, CppParam { name: "_rover", ty: "::System::Xml::Linq::NamespaceResolver_NamespaceDeclaration*", modifiers: "", def_value: None }]
  constexpr NamespaceResolver(int32_t _scope, ::System::Xml::Linq::NamespaceResolver_NamespaceDeclaration* _declaration, ::System::Xml::Linq::NamespaceResolver_NamespaceDeclaration* _rover) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17974 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field _scope, offset: 0x0, size: 0x4, def value: None
  int32_t _scope;

  /// @brief Field _declaration, offset: 0x8, size: 0x8, def value: None
  ::System::Xml::Linq::NamespaceResolver_NamespaceDeclaration* _declaration;

  /// @brief Field _rover, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Linq::NamespaceResolver_NamespaceDeclaration* _rover;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Linq::NamespaceResolver, _scope) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::NamespaceResolver, _declaration) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::NamespaceResolver, _rover) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::NamespaceResolver, 0x18>, "Size mismatch!");

} // namespace System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::NamespaceResolver_NamespaceDeclaration);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::NamespaceResolver_NamespaceDeclaration*, "System.Xml.Linq", "NamespaceResolver/NamespaceDeclaration");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::NamespaceResolver, "System.Xml.Linq", "NamespaceResolver");
