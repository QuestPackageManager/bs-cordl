#pragma once
// IWYU pragma private; include "System/Xml/Schema/KeySequence.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KeySequence)
namespace System::Xml::Schema {
class TypedObject;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class KeySequence;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::KeySequence);
// Dependencies System.Object
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.KeySequence
class CORDL_TYPE KeySequence : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item)) ::System::Object* Item[];

  __declspec(property(get = get_PosCol)) int32_t PosCol;

  __declspec(property(get = get_PosLine)) int32_t PosLine;

  /// @brief Field dim, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_dim, put = __cordl_internal_set_dim)) int32_t dim;

  /// @brief Field hashcode, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_hashcode, put = __cordl_internal_set_hashcode)) int32_t hashcode;

  /// @brief Field ks, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ks, put = __cordl_internal_set_ks)) ::ArrayW<::System::Xml::Schema::TypedObject*, ::Array<::System::Xml::Schema::TypedObject*>*> ks;

  /// @brief Field poscol, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_poscol, put = __cordl_internal_set_poscol)) int32_t poscol;

  /// @brief Field posline, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_posline, put = __cordl_internal_set_posline)) int32_t posline;

  /// @brief Method Equals, addr 0x439bca8, size 0xf0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method GetHashCode, addr 0x439b934, size 0x374, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsQualified, addr 0x439b8d4, size 0x60, virtual false, abstract: false, final false
  inline bool IsQualified();

  static inline ::System::Xml::Schema::KeySequence* New_ctor(int32_t dim, int32_t line, int32_t col);

  /// @brief Method ToString, addr 0x439bd98, size 0x12c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr int32_t const& __cordl_internal_get_dim() const;

  constexpr int32_t& __cordl_internal_get_dim();

  constexpr int32_t const& __cordl_internal_get_hashcode() const;

  constexpr int32_t& __cordl_internal_get_hashcode();

  constexpr ::ArrayW<::System::Xml::Schema::TypedObject*, ::Array<::System::Xml::Schema::TypedObject*>*> const& __cordl_internal_get_ks() const;

  constexpr ::ArrayW<::System::Xml::Schema::TypedObject*, ::Array<::System::Xml::Schema::TypedObject*>*>& __cordl_internal_get_ks();

  constexpr int32_t const& __cordl_internal_get_poscol() const;

  constexpr int32_t& __cordl_internal_get_poscol();

  constexpr int32_t const& __cordl_internal_get_posline() const;

  constexpr int32_t& __cordl_internal_get_posline();

  constexpr void __cordl_internal_set_dim(int32_t value);

  constexpr void __cordl_internal_set_hashcode(int32_t value);

  constexpr void __cordl_internal_set_ks(::ArrayW<::System::Xml::Schema::TypedObject*, ::Array<::System::Xml::Schema::TypedObject*>*> value);

  constexpr void __cordl_internal_set_poscol(int32_t value);

  constexpr void __cordl_internal_set_posline(int32_t value);

  /// @brief Method .ctor, addr 0x439ad74, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(int32_t dim, int32_t line, int32_t col);

  /// @brief Method get_Item, addr 0x439b7ac, size 0x30, virtual false, abstract: false, final false
  inline ::System::Object* get_Item(int32_t index);

  /// @brief Method get_PosCol, addr 0x439b7a4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_PosCol();

  /// @brief Method get_PosLine, addr 0x439b79c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_PosLine();

  /// @brief Method set_Item, addr 0x439b7dc, size 0xf8, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, ::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeySequence();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeySequence", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeySequence(KeySequence&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeySequence", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeySequence(KeySequence const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7492 };

  /// @brief Field ks, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Xml::Schema::TypedObject*, ::Array<::System::Xml::Schema::TypedObject*>*> ___ks;

  /// @brief Field dim, offset: 0x18, size: 0x4, def value: None
  int32_t ___dim;

  /// @brief Field hashcode, offset: 0x1c, size: 0x4, def value: None
  int32_t ___hashcode;

  /// @brief Field posline, offset: 0x20, size: 0x4, def value: None
  int32_t ___posline;

  /// @brief Field poscol, offset: 0x24, size: 0x4, def value: None
  int32_t ___poscol;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::KeySequence, ___ks) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::KeySequence, ___dim) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::KeySequence, ___hashcode) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::KeySequence, ___posline) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::KeySequence, ___poscol) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::KeySequence, 0x28>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::KeySequence);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::KeySequence*, "System.Xml.Schema", "KeySequence");
