#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryAssembly)
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryAssembly;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly);
// Type: System.Runtime.Serialization.Formatters.Binary::BinaryAssembly
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::BinaryAssembly*
class CORDL_TYPE BinaryAssembly : public ::System::Object {
public:
  // Declarations
  /// @brief Field assemId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_assemId, put = __cordl_internal_set_assemId)) int32_t assemId;

  /// @brief Field assemblyString, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_assemblyString, put = __cordl_internal_set_assemblyString))::StringW assemblyString;

  /// @brief Method Dump, addr 0x2744564, size 0x4, virtual false, abstract: false, final false
  inline void Dump();

  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly* New_ctor();

  /// @brief Method Read, addr 0x2744520, size 0x44, virtual true, abstract: false, final true
  inline void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);

  /// @brief Method Set, addr 0x27444a4, size 0xc, virtual false, abstract: false, final false
  inline void Set(int32_t assemId, ::StringW assemblyString);

  /// @brief Method Write, addr 0x27444b0, size 0x70, virtual true, abstract: false, final true
  inline void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);

  constexpr int32_t const& __cordl_internal_get_assemId() const;

  constexpr int32_t& __cordl_internal_get_assemId();

  constexpr ::StringW const& __cordl_internal_get_assemblyString() const;

  constexpr ::StringW& __cordl_internal_get_assemblyString();

  constexpr void __cordl_internal_set_assemId(int32_t value);

  constexpr void __cordl_internal_set_assemblyString(::StringW value);

  /// @brief Method .ctor, addr 0x274449c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryAssembly();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BinaryAssembly", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryAssembly(BinaryAssembly&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryAssembly", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryAssembly(BinaryAssembly const&) = delete;

  /// @brief Field assemId, offset: 0x10, size: 0x4, def value: None
  int32_t ___assemId;

  /// @brief Field assemblyString, offset: 0x18, size: 0x8, def value: None
  ::StringW ___assemblyString;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly, ___assemId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly, ___assemblyString) == 0x18, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly*, "System.Runtime.Serialization.Formatters.Binary", "BinaryAssembly");
