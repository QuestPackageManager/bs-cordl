#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryCrossAppDomainAssembly)
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryCrossAppDomainAssembly;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly);
// Type: System.Runtime.Serialization.Formatters.Binary::BinaryCrossAppDomainAssembly
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::BinaryCrossAppDomainAssembly*
class CORDL_TYPE BinaryCrossAppDomainAssembly : public ::System::Object {
public:
  // Declarations
  /// @brief Field assemId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_assemId, put = __cordl_internal_set_assemId)) int32_t assemId;

  /// @brief Field assemblyIndex, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_assemblyIndex, put = __cordl_internal_set_assemblyIndex)) int32_t assemblyIndex;

  /// @brief Method Dump, addr 0x25b3c4c, size 0x4, virtual false, abstract: false, final false
  inline void Dump();

  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly* New_ctor();

  /// @brief Method Read, addr 0x25b3c08, size 0x44, virtual true, abstract: false, final true
  inline void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);

  constexpr int32_t const& __cordl_internal_get_assemId() const;

  constexpr int32_t& __cordl_internal_get_assemId();

  constexpr int32_t const& __cordl_internal_get_assemblyIndex() const;

  constexpr int32_t& __cordl_internal_get_assemblyIndex();

  constexpr void __cordl_internal_set_assemId(int32_t value);

  constexpr void __cordl_internal_set_assemblyIndex(int32_t value);

  /// @brief Method .ctor, addr 0x25b3c00, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryCrossAppDomainAssembly();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BinaryCrossAppDomainAssembly", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryCrossAppDomainAssembly(BinaryCrossAppDomainAssembly&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryCrossAppDomainAssembly", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryCrossAppDomainAssembly(BinaryCrossAppDomainAssembly const&) = delete;

  /// @brief Field assemId, offset: 0x10, size: 0x4, def value: None
  int32_t ___assemId;

  /// @brief Field assemblyIndex, offset: 0x14, size: 0x4, def value: None
  int32_t ___assemblyIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly, ___assemId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly, ___assemblyIndex) == 0x14, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainAssembly*, "System.Runtime.Serialization.Formatters.Binary", "BinaryCrossAppDomainAssembly");
