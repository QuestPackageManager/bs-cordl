#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectMapInfo)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectMapInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo);
// Type: System.Runtime.Serialization.Formatters.Binary::ObjectMapInfo
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::ObjectMapInfo*
class CORDL_TYPE ObjectMapInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field memberNames, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_memberNames, put = __cordl_internal_set_memberNames))::ArrayW<::StringW, ::Array<::StringW>*> memberNames;

  /// @brief Field memberTypes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_memberTypes, put = __cordl_internal_set_memberTypes))::ArrayW<::System::Type*, ::Array<::System::Type*>*> memberTypes;

  /// @brief Field numMembers, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_numMembers, put = __cordl_internal_set_numMembers)) int32_t numMembers;

  /// @brief Field objectId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_objectId, put = __cordl_internal_set_objectId)) int32_t objectId;

  static inline ::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo* New_ctor(int32_t objectId, int32_t numMembers, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames,
                                                                                              ::ArrayW<::System::Type*, ::Array<::System::Type*>*> memberTypes);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_memberNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_memberNames();

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __cordl_internal_get_memberTypes() const;

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __cordl_internal_get_memberTypes();

  constexpr int32_t const& __cordl_internal_get_numMembers() const;

  constexpr int32_t& __cordl_internal_get_numMembers();

  constexpr int32_t const& __cordl_internal_get_objectId() const;

  constexpr int32_t& __cordl_internal_get_objectId();

  constexpr void __cordl_internal_set_memberNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_memberTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  constexpr void __cordl_internal_set_numMembers(int32_t value);

  constexpr void __cordl_internal_set_objectId(int32_t value);

  /// @brief Method .ctor, addr 0x2749f24, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(int32_t objectId, int32_t numMembers, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> memberTypes);

  /// @brief Method isCompatible, addr 0x2749f64, size 0x13c, virtual false, abstract: false, final false
  inline bool isCompatible(int32_t numMembers, ::ArrayW<::StringW, ::Array<::StringW>*> memberNames, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> memberTypes);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectMapInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectMapInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectMapInfo(ObjectMapInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectMapInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectMapInfo(ObjectMapInfo const&) = delete;

  /// @brief Field objectId, offset: 0x10, size: 0x4, def value: None
  int32_t ___objectId;

  /// @brief Field numMembers, offset: 0x14, size: 0x4, def value: None
  int32_t ___numMembers;

  /// @brief Field memberNames, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___memberNames;

  /// @brief Field memberTypes, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ___memberTypes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo, ___objectId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo, ___numMembers) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo, ___memberNames) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo, ___memberTypes) == 0x20, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo*, "System.Runtime.Serialization.Formatters.Binary", "ObjectMapInfo");
