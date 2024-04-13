#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryHeaderEnum_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryObjectWithMapTyped)
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryHeaderEnum;
}
namespace System::Runtime::Serialization::Formatters::Binary {
struct BinaryTypeEnum;
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
class BinaryObjectWithMapTyped;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped);
// Type: System.Runtime.Serialization.Formatters.Binary::BinaryObjectWithMapTyped
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::BinaryObjectWithMapTyped*
class CORDL_TYPE BinaryObjectWithMapTyped : public ::System::Object {
public:
  // Declarations
  /// @brief Field assemId, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_assemId, put = __cordl_internal_set_assemId)) int32_t assemId;

  /// @brief Field binaryHeaderEnum, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_binaryHeaderEnum, put = __cordl_internal_set_binaryHeaderEnum))::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum;

  /// @brief Field binaryTypeEnumA, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_binaryTypeEnumA,
                      put = __cordl_internal_set_binaryTypeEnumA))::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum,
                                                                           ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*> binaryTypeEnumA;

  /// @brief Field memberAssemIds, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_memberAssemIds, put = __cordl_internal_set_memberAssemIds))::ArrayW<int32_t, ::Array<int32_t>*> memberAssemIds;

  /// @brief Field memberNames, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_memberNames, put = __cordl_internal_set_memberNames))::ArrayW<::StringW, ::Array<::StringW>*> memberNames;

  /// @brief Field name, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  /// @brief Field numMembers, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_numMembers, put = __cordl_internal_set_numMembers)) int32_t numMembers;

  /// @brief Field objectId, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_objectId, put = __cordl_internal_set_objectId)) int32_t objectId;

  /// @brief Field typeInformationA, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_typeInformationA, put = __cordl_internal_set_typeInformationA))::ArrayW<::System::Object*, ::Array<::System::Object*>*> typeInformationA;

  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* New_ctor();

  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* New_ctor(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);

  /// @brief Method Read, addr 0x27450cc, size 0x2a4, virtual true, abstract: false, final true
  inline void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);

  /// @brief Method Set, addr 0x2744ec8, size 0x2c, virtual false, abstract: false, final false
  inline void Set(int32_t objectId, ::StringW name, int32_t numMembers, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames,
                  ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*> binaryTypeEnumA,
                  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> typeInformationA, ::ArrayW<int32_t, ::Array<int32_t>*> memberAssemIds, int32_t assemId);

  /// @brief Method Write, addr 0x2744ef4, size 0x1d8, virtual true, abstract: false, final true
  inline void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);

  constexpr int32_t const& __cordl_internal_get_assemId() const;

  constexpr int32_t& __cordl_internal_get_assemId();

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const& __cordl_internal_get_binaryHeaderEnum() const;

  constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum& __cordl_internal_get_binaryHeaderEnum();

  constexpr ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*> const&
  __cordl_internal_get_binaryTypeEnumA() const;

  constexpr ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*>&
  __cordl_internal_get_binaryTypeEnumA();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_memberAssemIds() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_memberAssemIds();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_memberNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_memberNames();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr int32_t const& __cordl_internal_get_numMembers() const;

  constexpr int32_t& __cordl_internal_get_numMembers();

  constexpr int32_t const& __cordl_internal_get_objectId() const;

  constexpr int32_t& __cordl_internal_get_objectId();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_typeInformationA() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_typeInformationA();

  constexpr void __cordl_internal_set_assemId(int32_t value);

  constexpr void __cordl_internal_set_binaryHeaderEnum(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value);

  constexpr void __cordl_internal_set_binaryTypeEnumA(
      ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*> value);

  constexpr void __cordl_internal_set_memberAssemIds(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_memberNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_numMembers(int32_t value);

  constexpr void __cordl_internal_set_objectId(int32_t value);

  constexpr void __cordl_internal_set_typeInformationA(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  /// @brief Method .ctor, addr 0x2744e98, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2744ea0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryObjectWithMapTyped();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BinaryObjectWithMapTyped", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryObjectWithMapTyped(BinaryObjectWithMapTyped&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryObjectWithMapTyped", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryObjectWithMapTyped(BinaryObjectWithMapTyped const&) = delete;

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

  /// @brief Field binaryTypeEnumA, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*> ___binaryTypeEnumA;

  /// @brief Field typeInformationA, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___typeInformationA;

  /// @brief Field memberAssemIds, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___memberAssemIds;

  /// @brief Field assemId, offset: 0x48, size: 0x4, def value: None
  int32_t ___assemId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped, 0x50>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped, ___binaryHeaderEnum) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped, ___objectId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped, ___name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped, ___numMembers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped, ___memberNames) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped, ___binaryTypeEnumA) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped, ___typeInformationA) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped, ___memberAssemIds) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped, ___assemId) == 0x48, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*, "System.Runtime.Serialization.Formatters.Binary", "BinaryObjectWithMapTyped");
