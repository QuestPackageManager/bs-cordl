#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryHeaderEnum_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryObjectWithMap)
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryHeaderEnum;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryObjectWithMap;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap);
// Type: System.Runtime.Serialization.Formatters.Binary::BinaryObjectWithMap
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(3242))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3267))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::BinaryObjectWithMap*
class CORDL_TYPE BinaryObjectWithMap : public ::System::Object {
public:
  // Declarations
  /// @brief Field binaryHeaderEnum, offset 0x10, size 0x4
  __declspec(property(get = __get_binaryHeaderEnum, put = __set_binaryHeaderEnum))::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum;

  /// @brief Field objectId, offset 0x14, size 0x4
  __declspec(property(get = __get_objectId, put = __set_objectId)) int32_t objectId;

  /// @brief Field name, offset 0x18, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::StringW name;

  /// @brief Field numMembers, offset 0x20, size 0x4
  __declspec(property(get = __get_numMembers, put = __set_numMembers)) int32_t numMembers;

  /// @brief Field memberNames, offset 0x28, size 0x8
  __declspec(property(get = __get_memberNames, put = __set_memberNames))::ArrayW<::StringW, ::Array<::StringW>*> memberNames;

  /// @brief Field assemId, offset 0x30, size 0x4
  __declspec(property(get = __get_assemId, put = __set_assemId)) int32_t assemId;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum& __get_binaryHeaderEnum();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const& __get_binaryHeaderEnum() const;

  constexpr void __set_binaryHeaderEnum(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value);

  constexpr int32_t& __get_objectId();

  constexpr int32_t const& __get_objectId() const;

  constexpr void __set_objectId(int32_t value);

  constexpr ::StringW& __get_name();

  constexpr ::StringW const& __get_name() const;

  constexpr void __set_name(::StringW value);

  constexpr int32_t& __get_numMembers();

  constexpr int32_t const& __get_numMembers() const;

  constexpr void __set_numMembers(int32_t value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_memberNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_memberNames() const;

  constexpr void __set_memberNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr int32_t& __get_assemId();

  constexpr int32_t const& __get_assemId() const;

  constexpr void __set_assemId(int32_t value);

  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* New_ctor();

  /// @brief Method .ctor addr 0x2369a28 size 0x8 virtual false final false
  inline void _ctor();

  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* New_ctor(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);

  /// @brief Method .ctor addr 0x2369a30 size 0x28 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);

  /// @brief Method Set addr 0x2369a58 size 0x24 virtual false final false
  inline void Set(int32_t objectId, ::StringW name, int32_t numMembers, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames, int32_t assemId);

  /// @brief Method Write addr 0x2369a7c size 0x114 virtual true final true
  inline void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);

  /// @brief Method Read addr 0x2369b90 size 0x13c virtual true final true
  inline void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);

  /// @brief Method Dump addr 0x2369ccc size 0x4 virtual false final false
  inline void Dump();

  // Ctor Parameters [CppParam { name: "", ty: "BinaryObjectWithMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryObjectWithMap(BinaryObjectWithMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryObjectWithMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryObjectWithMap(BinaryObjectWithMap const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryObjectWithMap();

public:
  /// @brief Field binaryHeaderEnum, offset: 0x10, size: 0x4, def value: None
  ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum ___binaryHeaderEnum;

  /// @brief Field objectId, offset: 0x14, size: 0x4, def value: None
  int32_t ___objectId;

  /// @brief Field name, offset: 0x18, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field numMembers, offset: 0x20, size: 0x4, def value: None
  int32_t ___numMembers;

  /// @brief Field memberNames, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___memberNames;

  /// @brief Field assemId, offset: 0x30, size: 0x4, def value: None
  int32_t ___assemId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap, ___binaryHeaderEnum) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap, ___objectId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap, ___name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap, ___numMembers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap, ___memberNames) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap, ___assemId) == 0x30, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*, "System.Runtime.Serialization.Formatters.Binary", "BinaryObjectWithMap");
