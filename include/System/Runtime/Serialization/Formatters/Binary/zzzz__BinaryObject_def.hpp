#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/BinaryObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryObject)
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryObject;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::BinaryObject);
// Dependencies System.Object
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: System.Runtime.Serialization.Formatters.Binary.BinaryObject
class CORDL_TYPE BinaryObject : public ::System::Object {
public:
  // Declarations
  /// @brief Field mapId, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_mapId, put = __cordl_internal_set_mapId)) int32_t mapId;

  /// @brief Field objectId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_objectId, put = __cordl_internal_set_objectId)) int32_t objectId;

  /// @brief Method Dump, addr 0x3d00f3c, size 0x4, virtual false, abstract: false, final false
  inline void Dump();

  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryObject* New_ctor();

  /// @brief Method Read, addr 0x3d00ef8, size 0x44, virtual true, abstract: false, final true
  inline void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);

  /// @brief Method Set, addr 0x3d00e80, size 0x8, virtual false, abstract: false, final false
  inline void Set(int32_t objectId, int32_t mapId);

  /// @brief Method Write, addr 0x3d00e88, size 0x70, virtual true, abstract: false, final true
  inline void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);

  constexpr int32_t const& __cordl_internal_get_mapId() const;

  constexpr int32_t& __cordl_internal_get_mapId();

  constexpr int32_t const& __cordl_internal_get_objectId() const;

  constexpr int32_t& __cordl_internal_get_objectId();

  constexpr void __cordl_internal_set_mapId(int32_t value);

  constexpr void __cordl_internal_set_objectId(int32_t value);

  /// @brief Method .ctor, addr 0x3d00e78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BinaryObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryObject(BinaryObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryObject(BinaryObject const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3261 };

  /// @brief Field objectId, offset: 0x10, size: 0x4, def value: None
  int32_t ___objectId;

  /// @brief Field mapId, offset: 0x14, size: 0x4, def value: None
  int32_t ___mapId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryObject, ___objectId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryObject, ___mapId) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::BinaryObject, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::BinaryObject);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryObject*, "System.Runtime.Serialization.Formatters.Binary", "BinaryObject");
