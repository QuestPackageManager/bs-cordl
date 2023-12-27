#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System.Runtime.Serialization.Formatters.Binary::SerObjectInfoCache
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3284))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::SerObjectInfoCache*
class CORDL_TYPE SerObjectInfoCache : public ::System::Object {
public:
  // Declarations
  /// @brief Field fullTypeName, offset 0x10, size 0x8
  __declspec(property(get = __get_fullTypeName, put = __set_fullTypeName))::StringW fullTypeName;

  /// @brief Field assemblyString, offset 0x18, size 0x8
  __declspec(property(get = __get_assemblyString, put = __set_assemblyString))::StringW assemblyString;

  /// @brief Field hasTypeForwardedFrom, offset 0x20, size 0x1
  __declspec(property(get = __get_hasTypeForwardedFrom, put = __set_hasTypeForwardedFrom)) bool hasTypeForwardedFrom;

  /// @brief Field memberInfos, offset 0x28, size 0x8
  __declspec(property(get = __get_memberInfos, put = __set_memberInfos))::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> memberInfos;

  /// @brief Field memberNames, offset 0x30, size 0x8
  __declspec(property(get = __get_memberNames, put = __set_memberNames))::ArrayW<::StringW, ::Array<::StringW>*> memberNames;

  /// @brief Field memberTypes, offset 0x38, size 0x8
  __declspec(property(get = __get_memberTypes, put = __set_memberTypes))::ArrayW<::System::Type*, ::Array<::System::Type*>*> memberTypes;

  constexpr ::StringW& __get_fullTypeName();

  constexpr ::StringW const& __get_fullTypeName() const;

  constexpr void __set_fullTypeName(::StringW value);

  constexpr ::StringW& __get_assemblyString();

  constexpr ::StringW const& __get_assemblyString() const;

  constexpr void __set_assemblyString(::StringW value);

  constexpr bool& __get_hasTypeForwardedFrom();

  constexpr bool const& __get_hasTypeForwardedFrom() const;

  constexpr void __set_hasTypeForwardedFrom(bool value);

  constexpr ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>& __get_memberInfos();

  constexpr ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> const& __get_memberInfos() const;

  constexpr void __set_memberInfos(::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get_memberNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get_memberNames() const;

  constexpr void __set_memberNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __get_memberTypes();

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __get_memberTypes() const;

  constexpr void __set_memberTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  static inline ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* New_ctor(::StringW typeName, ::StringW assemblyName, bool hasTypeForwardedFrom);

  /// @brief Method .ctor addr 0x24cb308 size 0x3c virtual false final false
  inline void _ctor(::StringW typeName, ::StringW assemblyName, bool hasTypeForwardedFrom);

  static inline ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* New_ctor(::System::Type* type);

  /// @brief Method .ctor addr 0x24cb344 size 0x8c virtual false final false
  inline void _ctor(::System::Type* type);

  // Ctor Parameters [CppParam { name: "", ty: "SerObjectInfoCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerObjectInfoCache(SerObjectInfoCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerObjectInfoCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerObjectInfoCache(SerObjectInfoCache const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerObjectInfoCache();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache, 0x40>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*, "System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoCache");
