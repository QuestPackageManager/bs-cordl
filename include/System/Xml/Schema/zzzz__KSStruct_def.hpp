#pragma once
// IWYU pragma private; include "System/Xml/Schema/KSStruct.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KSStruct)
namespace System::Xml::Schema {
class KeySequence;
}
namespace System::Xml::Schema {
class LocatedActiveAxis;
}
// Forward declare root types
namespace System::Xml::Schema {
class KSStruct;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::KSStruct);
// Dependencies System.Object
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.KSStruct
class CORDL_TYPE KSStruct : public ::System::Object {
public:
  // Declarations
  /// @brief Field depth, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_depth, put = __cordl_internal_set_depth)) int32_t depth;

  /// @brief Field fields, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_fields, put = __cordl_internal_set_fields)) ::ArrayW<::System::Xml::Schema::LocatedActiveAxis*, ::Array<::System::Xml::Schema::LocatedActiveAxis*>*>
      fields;

  /// @brief Field ks, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ks, put = __cordl_internal_set_ks)) ::System::Xml::Schema::KeySequence* ks;

  static inline ::System::Xml::Schema::KSStruct* New_ctor(::System::Xml::Schema::KeySequence* ks, int32_t dim);

  constexpr int32_t const& __cordl_internal_get_depth() const;

  constexpr int32_t& __cordl_internal_get_depth();

  constexpr ::ArrayW<::System::Xml::Schema::LocatedActiveAxis*, ::Array<::System::Xml::Schema::LocatedActiveAxis*>*> const& __cordl_internal_get_fields() const;

  constexpr ::ArrayW<::System::Xml::Schema::LocatedActiveAxis*, ::Array<::System::Xml::Schema::LocatedActiveAxis*>*>& __cordl_internal_get_fields();

  constexpr ::System::Xml::Schema::KeySequence* const& __cordl_internal_get_ks() const;

  constexpr ::System::Xml::Schema::KeySequence*& __cordl_internal_get_ks();

  constexpr void __cordl_internal_set_depth(int32_t value);

  constexpr void __cordl_internal_set_fields(::ArrayW<::System::Xml::Schema::LocatedActiveAxis*, ::Array<::System::Xml::Schema::LocatedActiveAxis*>*> value);

  constexpr void __cordl_internal_set_ks(::System::Xml::Schema::KeySequence* value);

  /// @brief Method .ctor, addr 0x43995b8, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::KeySequence* ks, int32_t dim);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KSStruct();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KSStruct", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KSStruct(KSStruct&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KSStruct", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KSStruct(KSStruct const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7491 };

  /// @brief Field depth, offset: 0x10, size: 0x4, def value: None
  int32_t ___depth;

  /// @brief Field ks, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Schema::KeySequence* ___ks;

  /// @brief Field fields, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Xml::Schema::LocatedActiveAxis*, ::Array<::System::Xml::Schema::LocatedActiveAxis*>*> ___fields;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::KSStruct, ___depth) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::KSStruct, ___ks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::KSStruct, ___fields) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::KSStruct, 0x28>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::KSStruct);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::KSStruct*, "System.Xml.Schema", "KSStruct");
