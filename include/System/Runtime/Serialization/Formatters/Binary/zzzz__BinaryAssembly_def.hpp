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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3258))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::BinaryAssembly*
class CORDL_TYPE BinaryAssembly : public ::System::Object {
public:
  // Declarations
  /// @brief Field assemId, offset 0x10, size 0x4
  __declspec(property(get = __get_assemId, put = __set_assemId)) int32_t assemId;

  /// @brief Field assemblyString, offset 0x18, size 0x8
  __declspec(property(get = __get_assemblyString, put = __set_assemblyString))::StringW assemblyString;

  constexpr int32_t& __get_assemId();

  constexpr int32_t const& __get_assemId() const;

  constexpr void __set_assemId(int32_t value);

  constexpr ::StringW& __get_assemblyString();

  constexpr ::StringW const& __get_assemblyString() const;

  constexpr void __set_assemblyString(::StringW value);

  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly* New_ctor();

  /// @brief Method .ctor addr 0x23692d4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method Set addr 0x23692dc size 0xc virtual false final false
  inline void Set(int32_t assemId, ::StringW assemblyString);

  /// @brief Method Write addr 0x23692e8 size 0x70 virtual true final true
  inline void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);

  /// @brief Method Read addr 0x2369358 size 0x44 virtual true final true
  inline void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);

  /// @brief Method Dump addr 0x236939c size 0x4 virtual false final false
  inline void Dump();

  // Ctor Parameters [CppParam { name: "", ty: "BinaryAssembly", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryAssembly(BinaryAssembly&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryAssembly", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryAssembly(BinaryAssembly const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryAssembly();

public:
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
