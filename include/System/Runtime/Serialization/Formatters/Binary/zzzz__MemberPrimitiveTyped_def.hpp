#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalPrimitiveTypeE_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MemberPrimitiveTyped)
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
class MemberPrimitiveTyped;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped);
// Type: System.Runtime.Serialization.Formatters.Binary::MemberPrimitiveTyped
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::MemberPrimitiveTyped*
class CORDL_TYPE MemberPrimitiveTyped : public ::System::Object {
public:
  // Declarations
  /// @brief Field primitiveTypeEnum, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_primitiveTypeEnum,
                      put = __cordl_internal_set_primitiveTypeEnum))::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE primitiveTypeEnum;

  /// @brief Field value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value))::System::Object* value;

  /// @brief Method Dump, addr 0x273ebf0, size 0x4, virtual false, abstract: false, final false
  inline void Dump();

  static inline ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped* New_ctor();

  /// @brief Method Read, addr 0x273eba8, size 0x48, virtual true, abstract: false, final true
  inline void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);

  /// @brief Method Set, addr 0x273eb3c, size 0xc, virtual false, abstract: false, final false
  inline void Set(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE primitiveTypeEnum, ::System::Object* value);

  /// @brief Method Write, addr 0x273eb48, size 0x60, virtual true, abstract: false, final true
  inline void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const& __cordl_internal_get_primitiveTypeEnum() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& __cordl_internal_get_primitiveTypeEnum();

  constexpr ::System::Object*& __cordl_internal_get_value();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_value() const;

  constexpr void __cordl_internal_set_primitiveTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE value);

  constexpr void __cordl_internal_set_value(::System::Object* value);

  /// @brief Method .ctor, addr 0x273eb34, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemberPrimitiveTyped();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MemberPrimitiveTyped", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemberPrimitiveTyped(MemberPrimitiveTyped&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemberPrimitiveTyped", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemberPrimitiveTyped(MemberPrimitiveTyped const&) = delete;

  /// @brief Field primitiveTypeEnum, offset: 0x10, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ___primitiveTypeEnum;

  /// @brief Field value, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped, ___primitiveTypeEnum) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped, ___value) == 0x18, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*, "System.Runtime.Serialization.Formatters.Binary", "MemberPrimitiveTyped");
