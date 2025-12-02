#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/SerObjectInfoCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SerObjectInfoCache)
namespace System::Reflection {
class MemberInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class SerObjectInfoCache;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache);
// Dependencies System.Object
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: System.Runtime.Serialization.Formatters.Binary.SerObjectInfoCache
class CORDL_TYPE SerObjectInfoCache : public ::System::Object {
public:
  // Declarations
  /// @brief Field assemblyString, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_assemblyString, put = __cordl_internal_set_assemblyString)) ::StringW assemblyString;

  /// @brief Field fullTypeName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_fullTypeName, put = __cordl_internal_set_fullTypeName)) ::StringW fullTypeName;

  /// @brief Field hasTypeForwardedFrom, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_hasTypeForwardedFrom, put = __cordl_internal_set_hasTypeForwardedFrom)) bool hasTypeForwardedFrom;

  /// @brief Field memberInfos, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_memberInfos, put = __cordl_internal_set_memberInfos)) ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>
      memberInfos;

  /// @brief Field memberNames, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_memberNames, put = __cordl_internal_set_memberNames)) ::ArrayW<::StringW, ::Array<::StringW>*> memberNames;

  /// @brief Field memberTypes, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_memberTypes, put = __cordl_internal_set_memberTypes)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> memberTypes;

  static inline ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* New_ctor(::System::Type* type);

  static inline ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* New_ctor(::StringW typeName, ::StringW assemblyName, bool hasTypeForwardedFrom);

  constexpr ::StringW const& __cordl_internal_get_assemblyString() const;

  constexpr ::StringW& __cordl_internal_get_assemblyString();

  constexpr ::StringW const& __cordl_internal_get_fullTypeName() const;

  constexpr ::StringW& __cordl_internal_get_fullTypeName();

  constexpr bool const& __cordl_internal_get_hasTypeForwardedFrom() const;

  constexpr bool& __cordl_internal_get_hasTypeForwardedFrom();

  constexpr ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> const& __cordl_internal_get_memberInfos() const;

  constexpr ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>& __cordl_internal_get_memberInfos();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_memberNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_memberNames();

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __cordl_internal_get_memberTypes() const;

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __cordl_internal_get_memberTypes();

  constexpr void __cordl_internal_set_assemblyString(::StringW value);

  constexpr void __cordl_internal_set_fullTypeName(::StringW value);

  constexpr void __cordl_internal_set_hasTypeForwardedFrom(bool value);

  constexpr void __cordl_internal_set_memberInfos(::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> value);

  constexpr void __cordl_internal_set_memberNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_memberTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  /// @brief Method .ctor, addr 0x5948764, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  /// @brief Method .ctor, addr 0x59487e8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW typeName, ::StringW assemblyName, bool hasTypeForwardedFrom);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerObjectInfoCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerObjectInfoCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerObjectInfoCache(SerObjectInfoCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerObjectInfoCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerObjectInfoCache(SerObjectInfoCache const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3297 };

  /// @brief Field fullTypeName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___fullTypeName;

  /// @brief Field assemblyString, offset: 0x18, size: 0x8, def value: None
  ::StringW ___assemblyString;

  /// @brief Field hasTypeForwardedFrom, offset: 0x20, size: 0x1, def value: None
  bool ___hasTypeForwardedFrom;

  /// @brief Field memberInfos, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> ___memberInfos;

  /// @brief Field memberNames, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___memberNames;

  /// @brief Field memberTypes, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ___memberTypes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache, ___fullTypeName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache, ___assemblyString) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache, ___hasTypeForwardedFrom) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache, ___memberInfos) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache, ___memberNames) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache, ___memberTypes) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache, 0x40>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*, "System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoCache");
