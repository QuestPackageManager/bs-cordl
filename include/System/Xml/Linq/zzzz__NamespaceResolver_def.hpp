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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15431))
// CS Name: ::NamespaceResolver::NamespaceDeclaration*
class CORDL_TYPE __NamespaceResolver__NamespaceDeclaration : public ::System::Object {
public:
  // Declarations
  /// @brief Field prefix, offset 0x10, size 0x8
  __declspec(property(get = __get_prefix, put = __set_prefix))::StringW prefix;

  /// @brief Field ns, offset 0x18, size 0x8
  __declspec(property(get = __get_ns, put = __set_ns))::System::Xml::Linq::XNamespace* ns;

  /// @brief Field scope, offset 0x20, size 0x4
  __declspec(property(get = __get_scope, put = __set_scope)) int32_t scope;

  /// @brief Field prev, offset 0x28, size 0x8
  __declspec(property(get = __get_prev, put = __set_prev))::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration* prev;

  constexpr ::StringW& __get_prefix();

  constexpr ::StringW const& __get_prefix() const;

  constexpr void __set_prefix(::StringW value);

  constexpr ::System::Xml::Linq::XNamespace*& __get_ns();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::XNamespace*> const& __get_ns() const;

  constexpr void __set_ns(::System::Xml::Linq::XNamespace* value);

  constexpr int32_t& __get_scope();

  constexpr int32_t const& __get_scope() const;

  constexpr void __set_scope(int32_t value);

  constexpr ::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration*& __get_prev();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration*> const& __get_prev() const;

  constexpr void __set_prev(::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration* value);

  static inline ::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration* New_ctor();

  /// @brief Method .ctor addr 0x26e4020 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__NamespaceResolver__NamespaceDeclaration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NamespaceResolver__NamespaceDeclaration(__NamespaceResolver__NamespaceDeclaration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NamespaceResolver__NamespaceDeclaration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NamespaceResolver__NamespaceDeclaration(__NamespaceResolver__NamespaceDeclaration const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NamespaceResolver__NamespaceDeclaration();

public:
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15432))
// CS Name: ::System.Xml.Linq::NamespaceResolver
struct CORDL_TYPE NamespaceResolver {
public:
  // Declarations
  using NamespaceDeclaration = ::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration;

  /// @brief Method PushScope addr 0x26e3efc size 0x10 virtual false final false
  inline void PushScope();

  /// @brief Method PopScope addr 0x26e3fa8 size 0x78 virtual false final false
  inline void PopScope();

  /// @brief Method Add addr 0x26e3f0c size 0x9c virtual false final false
  inline void Add(::StringW prefix, ::System::Xml::Linq::XNamespace* ns);

  /// @brief Method AddFirst addr 0x26e3d90 size 0x98 virtual false final false
  inline void AddFirst(::StringW prefix, ::System::Xml::Linq::XNamespace* ns);

  /// @brief Method GetPrefixOfNamespace addr 0x26e3c50 size 0xdc virtual false final false
  inline ::StringW GetPrefixOfNamespace(::System::Xml::Linq::XNamespace* ns, bool allowDefaultNamespace);

  // Ctor Parameters [CppParam { name: "_scope", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_declaration", ty:
  // "::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration*", modifiers: "", def_value: None }, CppParam { name: "_rover", ty:
  // "::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration*", modifiers: "", def_value: None }]
  constexpr NamespaceResolver(int32_t _scope, ::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration* _declaration,
                              ::System::Xml::Linq::__NamespaceResolver__NamespaceDeclaration* _rover) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr NamespaceResolver();

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
