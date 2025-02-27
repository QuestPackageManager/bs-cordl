#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/BinaryObjectWithMap.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryHeaderEnum_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryObjectWithMap)
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryHeaderEnum;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryObjectWithMap;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap);
// Dependencies System.Object, System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMap
class CORDL_TYPE BinaryObjectWithMap : public ::System::Object {
public:
  // Declarations
  /// @brief Field assemId, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_assemId, put = __cordl_internal_set_assemId)) int32_t assemId;

  /// @brief Field binaryHeaderEnum, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_binaryHeaderEnum,
                      put = __cordl_internal_set_binaryHeaderEnum)) ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum;

  /// @brief Field memberNames, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_memberNames, put = __cordl_internal_set_memberNames)) ::ArrayW<::StringW, ::Array<::StringW>*> memberNames;

  /// @brief Field name, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  /// @brief Field numMembers, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_numMembers, put = __cordl_internal_set_numMembers)) int32_t numMembers;

  /// @brief Field objectId, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_objectId, put = __cordl_internal_set_objectId)) int32_t objectId;

  /// @brief Method Dump, addr 0x3d0ed30, size 0x4, virtual false, abstract: false, final false
  inline void Dump();

  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* New_ctor();

  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* New_ctor(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);

  /// @brief Method Read, addr 0x3d0ec20, size 0x110, virtual true, abstract: false, final true
  inline void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);

  /// @brief Method Set, addr 0x3d0eae8, size 0x24, virtual false, abstract: false, final false
  inline void Set(int32_t objectId, ::StringW name, int32_t numMembers, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames, int32_t assemId);

  /// @brief Method Write, addr 0x3d0eb0c, size 0x114, virtual true, abstract: false, final true
  inline void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);

  constexpr int32_t const& __cordl_internal_get_assemId() const;

  constexpr int32_t& __cordl_internal_get_assemId();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const& __cordl_internal_get_binaryHeaderEnum() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum& __cordl_internal_get_binaryHeaderEnum();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_memberNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_memberNames();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr int32_t const& __cordl_internal_get_numMembers() const;

  constexpr int32_t& __cordl_internal_get_numMembers();

  constexpr int32_t const& __cordl_internal_get_objectId() const;

  constexpr int32_t& __cordl_internal_get_objectId();

  constexpr void __cordl_internal_set_assemId(int32_t value);

  constexpr void __cordl_internal_set_binaryHeaderEnum(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value);

  constexpr void __cordl_internal_set_memberNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_numMembers(int32_t value);

  constexpr void __cordl_internal_set_objectId(int32_t value);

  /// @brief Method .ctor, addr 0x3d0eab8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3d0eac0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryObjectWithMap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BinaryObjectWithMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryObjectWithMap(BinaryObjectWithMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryObjectWithMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryObjectWithMap(BinaryObjectWithMap const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3268 };

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
static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap, ___binaryHeaderEnum) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap, ___objectId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap, ___name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap, ___numMembers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap, ___memberNames) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap, ___assemId) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap, 0x38>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*, "System.Runtime.Serialization.Formatters.Binary", "BinaryObjectWithMap");
