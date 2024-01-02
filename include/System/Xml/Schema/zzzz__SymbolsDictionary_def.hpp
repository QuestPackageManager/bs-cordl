#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SymbolsDictionary)
namespace System::Collections {
class Hashtable;
}
namespace System {
class Object;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Collections {
class ICollection;
}
namespace System::Xml::Schema {
class NamespaceList;
}
// Forward declare root types
namespace System::Xml::Schema {
class SymbolsDictionary;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::SymbolsDictionary);
// Type: System.Xml.Schema::SymbolsDictionary
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11596))
// CS Name: ::System.Xml.Schema::SymbolsDictionary*
class CORDL_TYPE SymbolsDictionary : public ::System::Object {
public:
  // Declarations
  /// @brief Field last, offset 0x10, size 0x4
  __declspec(property(get = __get_last, put = __set_last)) int32_t last;

  /// @brief Field names, offset 0x18, size 0x8
  __declspec(property(get = __get_names, put = __set_names))::System::Collections::Hashtable* names;

  /// @brief Field wildcards, offset 0x20, size 0x8
  __declspec(property(get = __get_wildcards, put = __set_wildcards))::System::Collections::Hashtable* wildcards;

  /// @brief Field particles, offset 0x28, size 0x8
  __declspec(property(get = __get_particles, put = __set_particles))::System::Collections::ArrayList* particles;

  /// @brief Field particleLast, offset 0x30, size 0x8
  __declspec(property(get = __get_particleLast, put = __set_particleLast))::System::Object* particleLast;

  /// @brief Field isUpaEnforced, offset 0x38, size 0x1
  __declspec(property(get = __get_isUpaEnforced, put = __set_isUpaEnforced)) bool isUpaEnforced;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsUpaEnforced, put = set_IsUpaEnforced)) bool IsUpaEnforced;

  constexpr int32_t& __get_last();

  constexpr int32_t const& __get_last() const;

  constexpr void __set_last(int32_t value);

  constexpr ::System::Collections::Hashtable*& __get_names();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __get_names() const;

  constexpr void __set_names(::System::Collections::Hashtable* value);

  constexpr ::System::Collections::Hashtable*& __get_wildcards();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __get_wildcards() const;

  constexpr void __set_wildcards(::System::Collections::Hashtable* value);

  constexpr ::System::Collections::ArrayList*& __get_particles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __get_particles() const;

  constexpr void __set_particles(::System::Collections::ArrayList* value);

  constexpr ::System::Object*& __get_particleLast();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_particleLast() const;

  constexpr void __set_particleLast(::System::Object* value);

  constexpr bool& __get_isUpaEnforced();

  constexpr bool const& __get_isUpaEnforced() const;

  constexpr void __set_isUpaEnforced(bool value);

  static inline ::System::Xml::Schema::SymbolsDictionary* New_ctor();

  /// @brief Method .ctor, addr 0x28acb20, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0x28acbc4, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsUpaEnforced, addr 0x28acbd0, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsUpaEnforced();

  /// @brief Method set_IsUpaEnforced, addr 0x28acbd8, size 0xc, virtual false, abstract: false, final false
  inline void set_IsUpaEnforced(bool value);

  /// @brief Method AddName, addr 0x28acbe4, size 0x134, virtual false, abstract: false, final false
  inline int32_t AddName(::System::Xml::XmlQualifiedName* name, ::System::Object* particle);

  /// @brief Method AddNamespaceList, addr 0x28acd18, size 0x39c, virtual false, abstract: false, final false
  inline void AddNamespaceList(::System::Xml::Schema::NamespaceList* list, ::System::Object* particle, bool allowLocal);

  /// @brief Method AddWildcard, addr 0x28ad0b4, size 0x168, virtual false, abstract: false, final false
  inline void AddWildcard(::StringW wildcard, ::System::Object* particle);

  /// @brief Method GetNamespaceListSymbols, addr 0x28ad21c, size 0x78c, virtual false, abstract: false, final false
  inline ::System::Collections::ICollection* GetNamespaceListSymbols(::System::Xml::Schema::NamespaceList* list);

  /// @brief Method Exists, addr 0x28ad9a8, size 0x30, virtual false, abstract: false, final false
  inline bool Exists(::System::Xml::XmlQualifiedName* name);

  /// @brief Method GetParticle, addr 0x28ad9d8, size 0x3c, virtual false, abstract: false, final false
  inline ::System::Object* GetParticle(int32_t symbol);

  // Ctor Parameters [CppParam { name: "", ty: "SymbolsDictionary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SymbolsDictionary(SymbolsDictionary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SymbolsDictionary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SymbolsDictionary(SymbolsDictionary const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SymbolsDictionary();

public:
  /// @brief Field last, offset: 0x10, size: 0x4, def value: None
  int32_t ___last;

  /// @brief Field names, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___names;

  /// @brief Field wildcards, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___wildcards;

  /// @brief Field particles, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___particles;

  /// @brief Field particleLast, offset: 0x30, size: 0x8, def value: None
  ::System::Object* ___particleLast;

  /// @brief Field isUpaEnforced, offset: 0x38, size: 0x1, def value: None
  bool ___isUpaEnforced;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::SymbolsDictionary, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::SymbolsDictionary, ___last) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SymbolsDictionary, ___names) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SymbolsDictionary, ___wildcards) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SymbolsDictionary, ___particles) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SymbolsDictionary, ___particleLast) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SymbolsDictionary, ___isUpaEnforced) == 0x38, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::SymbolsDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SymbolsDictionary*, "System.Xml.Schema", "SymbolsDictionary");
