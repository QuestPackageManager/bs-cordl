#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/MemberPrimitiveUnTyped.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalPrimitiveTypeE_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MemberPrimitiveUnTyped)
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalPrimitiveTypeE;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class MemberPrimitiveUnTyped;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped);
// Dependencies System.Object, System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveUnTyped
class CORDL_TYPE MemberPrimitiveUnTyped : public ::System::Object {
public:
  // Declarations
  /// @brief Field typeInformation, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_typeInformation,
                      put = __cordl_internal_set_typeInformation)) ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE typeInformation;

  /// @brief Field value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::System::Object* value;

  /// @brief Method Dump, addr 0x3d01f6c, size 0x4, virtual false, abstract: false, final false
  inline void Dump();

  static inline ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped* New_ctor();

  /// @brief Method Read, addr 0x3d01f3c, size 0x30, virtual true, abstract: false, final true
  inline void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);

  /// @brief Method Set, addr 0x3d01f10, size 0x8, virtual false, abstract: false, final false
  inline void Set(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE typeInformation);

  /// @brief Method Set, addr 0x3d01f04, size 0xc, virtual false, abstract: false, final false
  inline void Set(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE typeInformation, ::System::Object* value);

  /// @brief Method Write, addr 0x3d01f18, size 0x24, virtual true, abstract: false, final true
  inline void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const& __cordl_internal_get_typeInformation() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& __cordl_internal_get_typeInformation();

  constexpr ::System::Object* const& __cordl_internal_get_value() const;

  constexpr ::System::Object*& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_typeInformation(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value);

  constexpr void __cordl_internal_set_value(::System::Object* value);

  /// @brief Method .ctor, addr 0x3d01efc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemberPrimitiveUnTyped();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MemberPrimitiveUnTyped", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemberPrimitiveUnTyped(MemberPrimitiveUnTyped&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemberPrimitiveUnTyped", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemberPrimitiveUnTyped(MemberPrimitiveUnTyped const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3271 };

  /// @brief Field typeInformation, offset: 0x10, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ___typeInformation;

  /// @brief Field value, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped, ___typeInformation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped, ___value) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped, 0x20>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped*, "System.Runtime.Serialization.Formatters.Binary", "MemberPrimitiveUnTyped");
