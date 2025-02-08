#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/SerializationInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SerializationInfo)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Runtime::Serialization {
class IFormatterConverter;
}
namespace System::Runtime::Serialization {
class SerializationInfoEnumerator;
}
namespace System {
struct DateTime;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::SerializationInfo);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.SerializationInfo
class CORDL_TYPE SerializationInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AssemblyName)) ::StringW AssemblyName;

  __declspec(property(get = get_FullTypeName)) ::StringW FullTypeName;

  __declspec(property(get = get_IsAssemblyNameSetExplicit)) bool IsAssemblyNameSetExplicit;

  __declspec(property(get = get_IsFullTypeNameSetExplicit)) bool IsFullTypeNameSetExplicit;

  __declspec(property(get = get_MemberCount)) int32_t MemberCount;

  __declspec(property(get = get_ObjectType)) ::System::Type* ObjectType;

  /// @brief Field isAssemblyNameSetExplicit, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get_isAssemblyNameSetExplicit, put = __cordl_internal_set_isAssemblyNameSetExplicit)) bool isAssemblyNameSetExplicit;

  /// @brief Field isFullTypeNameSetExplicit, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_isFullTypeNameSetExplicit, put = __cordl_internal_set_isFullTypeNameSetExplicit)) bool isFullTypeNameSetExplicit;

  /// @brief Field m_assemName, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_assemName, put = __cordl_internal_set_m_assemName)) ::StringW m_assemName;

  /// @brief Field m_converter, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_converter, put = __cordl_internal_set_m_converter)) ::System::Runtime::Serialization::IFormatterConverter* m_converter;

  /// @brief Field m_currMember, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_currMember, put = __cordl_internal_set_m_currMember)) int32_t m_currMember;

  /// @brief Field m_data, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_data, put = __cordl_internal_set_m_data)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> m_data;

  /// @brief Field m_fullTypeName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fullTypeName, put = __cordl_internal_set_m_fullTypeName)) ::StringW m_fullTypeName;

  /// @brief Field m_members, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_members, put = __cordl_internal_set_m_members)) ::ArrayW<::StringW, ::Array<::StringW>*> m_members;

  /// @brief Field m_nameToIndex, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_nameToIndex, put = __cordl_internal_set_m_nameToIndex)) ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* m_nameToIndex;

  /// @brief Field m_types, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_types, put = __cordl_internal_set_m_types)) ::ArrayW<::System::Type*, ::Array<::System::Type*>*> m_types;

  /// @brief Field objectType, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_objectType, put = __cordl_internal_set_objectType)) ::System::Type* objectType;

  /// @brief Field requireSameTokenInPartialTrust, offset 0x5a, size 0x1
  __declspec(property(get = __cordl_internal_get_requireSameTokenInPartialTrust, put = __cordl_internal_set_requireSameTokenInPartialTrust)) bool requireSameTokenInPartialTrust;

  /// @brief Method AddValue, addr 0x3d02454, size 0xd4, virtual false, abstract: false, final false
  inline void AddValue(::StringW name, ::System::DateTime value);

  /// @brief Method AddValue, addr 0x3cf5534, size 0xb8, virtual false, abstract: false, final false
  inline void AddValue(::StringW name, ::System::Object* value);

  /// @brief Method AddValue, addr 0x3d00d04, size 0x7c, virtual false, abstract: false, final false
  inline void AddValue(::StringW name, ::System::Object* value, ::System::Type* type);

  /// @brief Method AddValue, addr 0x3d01f50, size 0xd8, virtual false, abstract: false, final false
  inline void AddValue(::StringW name, bool value);

  /// @brief Method AddValue, addr 0x3d02378, size 0xdc, virtual false, abstract: false, final false
  inline void AddValue(::StringW name, float_t value);

  /// @brief Method AddValue, addr 0x3d020fc, size 0xd4, virtual false, abstract: false, final false
  inline void AddValue(::StringW name, int16_t value);

  /// @brief Method AddValue, addr 0x3cf6534, size 0xd4, virtual false, abstract: false, final false
  inline void AddValue(::StringW name, int32_t value);

  /// @brief Method AddValue, addr 0x3d021d0, size 0xd4, virtual false, abstract: false, final false
  inline void AddValue(::StringW name, int64_t value);

  /// @brief Method AddValue, addr 0x3d022a4, size 0xd4, virtual false, abstract: false, final false
  inline void AddValue(::StringW name, uint64_t value);

  /// @brief Method AddValue, addr 0x3d02028, size 0xd4, virtual false, abstract: false, final false
  inline void AddValue(::StringW name, uint8_t value);

  /// @brief Method AddValueInternal, addr 0x3d01d9c, size 0x1b4, virtual false, abstract: false, final false
  inline void AddValueInternal(::StringW name, ::System::Object* value, ::System::Type* type);

  /// @brief Method Compare, addr 0x3d01aa4, size 0x94, virtual false, abstract: false, final false
  static inline bool Compare(::ArrayW<uint8_t, ::Array<uint8_t>*> a, ::ArrayW<uint8_t, ::Array<uint8_t>*> b);

  /// @brief Method DemandForUnsafeAssemblyNameAssignments, addr 0x3d01aa0, size 0x4, virtual false, abstract: false, final false
  static inline void DemandForUnsafeAssemblyNameAssignments(::StringW originalAssemblyName, ::StringW newAssemblyName);

  /// @brief Method ExpandArrays, addr 0x3d01c8c, size 0x110, virtual false, abstract: false, final false
  inline void ExpandArrays();

  /// @brief Method FindElement, addr 0x3d02528, size 0xc4, virtual false, abstract: false, final false
  inline int32_t FindElement(::StringW name);

  /// @brief Method GetBoolean, addr 0x3d02764, size 0x180, virtual false, abstract: false, final false
  inline bool GetBoolean(::StringW name);

  /// @brief Method GetElement, addr 0x3d025ec, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Object* GetElement(::StringW name, ::ByRef<::System::Type*> foundType);

  /// @brief Method GetElementNoThrow, addr 0x3d026e8, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Object* GetElementNoThrow(::StringW name, ::ByRef<::System::Type*> foundType);

  /// @brief Method GetEnumerator, addr 0x3cf4318, size 0x94, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::SerializationInfoEnumerator* GetEnumerator();

  /// @brief Method GetInt32, addr 0x3d028e4, size 0x174, virtual false, abstract: false, final false
  inline int32_t GetInt32(::StringW name);

  /// @brief Method GetInt64, addr 0x3d02a58, size 0x174, virtual false, abstract: false, final false
  inline int64_t GetInt64(::StringW name);

  /// @brief Method GetSingle, addr 0x3d02bcc, size 0x174, virtual false, abstract: false, final false
  inline float_t GetSingle(::StringW name);

  /// @brief Method GetString, addr 0x3d02d40, size 0x16c, virtual false, abstract: false, final false
  inline ::StringW GetString(::StringW name);

  /// @brief Method GetValue, addr 0x3d00978, size 0x208, virtual false, abstract: false, final false
  inline ::System::Object* GetValue(::StringW name, ::System::Type* type);

  /// @brief Method GetValueNoThrow, addr 0x3d00870, size 0x108, virtual false, abstract: false, final false
  inline ::System::Object* GetValueNoThrow(::StringW name, ::System::Type* type);

  /// @brief Method IsAssemblyNameAssignmentSafe, addr 0x3d01b38, size 0x134, virtual false, abstract: false, final false
  static inline bool IsAssemblyNameAssignmentSafe(::StringW originalAssemblyName, ::StringW newAssemblyName);

  static inline ::System::Runtime::Serialization::SerializationInfo* New_ctor(::System::Type* type, ::System::Runtime::Serialization::IFormatterConverter* converter);

  static inline ::System::Runtime::Serialization::SerializationInfo* New_ctor(::System::Type* type, ::System::Runtime::Serialization::IFormatterConverter* converter,
                                                                              bool requireSameTokenInPartialTrust);

  /// @brief Method SetType, addr 0x3d00d80, size 0x134, virtual false, abstract: false, final false
  inline void SetType(::System::Type* type);

  /// @brief Method UpdateValue, addr 0x3cfe220, size 0xe4, virtual false, abstract: false, final false
  inline void UpdateValue(::StringW name, ::System::Object* value, ::System::Type* type);

  constexpr bool const& __cordl_internal_get_isAssemblyNameSetExplicit() const;

  constexpr bool& __cordl_internal_get_isAssemblyNameSetExplicit();

  constexpr bool const& __cordl_internal_get_isFullTypeNameSetExplicit() const;

  constexpr bool& __cordl_internal_get_isFullTypeNameSetExplicit();

  constexpr ::StringW const& __cordl_internal_get_m_assemName() const;

  constexpr ::StringW& __cordl_internal_get_m_assemName();

  constexpr ::System::Runtime::Serialization::IFormatterConverter* const& __cordl_internal_get_m_converter() const;

  constexpr ::System::Runtime::Serialization::IFormatterConverter*& __cordl_internal_get_m_converter();

  constexpr int32_t const& __cordl_internal_get_m_currMember() const;

  constexpr int32_t& __cordl_internal_get_m_currMember();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_m_data() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_m_data();

  constexpr ::StringW const& __cordl_internal_get_m_fullTypeName() const;

  constexpr ::StringW& __cordl_internal_get_m_fullTypeName();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_m_members() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_m_members();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* const& __cordl_internal_get_m_nameToIndex() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& __cordl_internal_get_m_nameToIndex();

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __cordl_internal_get_m_types() const;

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __cordl_internal_get_m_types();

  constexpr ::System::Type* const& __cordl_internal_get_objectType() const;

  constexpr ::System::Type*& __cordl_internal_get_objectType();

  constexpr bool const& __cordl_internal_get_requireSameTokenInPartialTrust() const;

  constexpr bool& __cordl_internal_get_requireSameTokenInPartialTrust();

  constexpr void __cordl_internal_set_isAssemblyNameSetExplicit(bool value);

  constexpr void __cordl_internal_set_isFullTypeNameSetExplicit(bool value);

  constexpr void __cordl_internal_set_m_assemName(::StringW value);

  constexpr void __cordl_internal_set_m_converter(::System::Runtime::Serialization::IFormatterConverter* value);

  constexpr void __cordl_internal_set_m_currMember(int32_t value);

  constexpr void __cordl_internal_set_m_data(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set_m_fullTypeName(::StringW value);

  constexpr void __cordl_internal_set_m_members(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_m_nameToIndex(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value);

  constexpr void __cordl_internal_set_m_types(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  constexpr void __cordl_internal_set_objectType(::System::Type* value);

  constexpr void __cordl_internal_set_requireSameTokenInPartialTrust(bool value);

  /// @brief Method .ctor, addr 0x3d018ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Runtime::Serialization::IFormatterConverter* converter);

  /// @brief Method .ctor, addr 0x3d018b4, size 0x1dc, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Runtime::Serialization::IFormatterConverter* converter, bool requireSameTokenInPartialTrust);

  /// @brief Method get_AssemblyName, addr 0x3d01a98, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AssemblyName();

  /// @brief Method get_FullTypeName, addr 0x3d01a90, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FullTypeName();

  /// @brief Method get_IsAssemblyNameSetExplicit, addr 0x3d01c84, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsAssemblyNameSetExplicit();

  /// @brief Method get_IsFullTypeNameSetExplicit, addr 0x3d01c7c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsFullTypeNameSetExplicit();

  /// @brief Method get_MemberCount, addr 0x3d01c6c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MemberCount();

  /// @brief Method get_ObjectType, addr 0x3d01c74, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_ObjectType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializationInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializationInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializationInfo(SerializationInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializationInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializationInfo(SerializationInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3234 };

  /// @brief Field defaultSize offset 0xffffffff size 0x4
  static constexpr int32_t defaultSize{ static_cast<int32_t>(0x4) };

  /// @brief Field s_mscorlibAssemblySimpleName offset 0xffffffff size 0x8
  static constexpr ::ConstString s_mscorlibAssemblySimpleName{ u"mscorlib" };

  /// @brief Field s_mscorlibFileName offset 0xffffffff size 0x8
  static constexpr ::ConstString s_mscorlibFileName{ u"mscorlib.dll" };

  /// @brief Field m_members, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_members;

  /// @brief Field m_data, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___m_data;

  /// @brief Field m_types, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ___m_types;

  /// @brief Field m_nameToIndex, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* ___m_nameToIndex;

  /// @brief Field m_currMember, offset: 0x30, size: 0x4, def value: None
  int32_t ___m_currMember;

  /// @brief Field m_converter, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::Serialization::IFormatterConverter* ___m_converter;

  /// @brief Field m_fullTypeName, offset: 0x40, size: 0x8, def value: None
  ::StringW ___m_fullTypeName;

  /// @brief Field m_assemName, offset: 0x48, size: 0x8, def value: None
  ::StringW ___m_assemName;

  /// @brief Field objectType, offset: 0x50, size: 0x8, def value: None
  ::System::Type* ___objectType;

  /// @brief Field isFullTypeNameSetExplicit, offset: 0x58, size: 0x1, def value: None
  bool ___isFullTypeNameSetExplicit;

  /// @brief Field isAssemblyNameSetExplicit, offset: 0x59, size: 0x1, def value: None
  bool ___isAssemblyNameSetExplicit;

  /// @brief Field requireSameTokenInPartialTrust, offset: 0x5a, size: 0x1, def value: None
  bool ___requireSameTokenInPartialTrust;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::SerializationInfo, ___m_members) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SerializationInfo, ___m_data) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SerializationInfo, ___m_types) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SerializationInfo, ___m_nameToIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SerializationInfo, ___m_currMember) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SerializationInfo, ___m_converter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SerializationInfo, ___m_fullTypeName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SerializationInfo, ___m_assemName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SerializationInfo, ___objectType) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SerializationInfo, ___isFullTypeNameSetExplicit) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SerializationInfo, ___isAssemblyNameSetExplicit) == 0x59, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::SerializationInfo, ___requireSameTokenInPartialTrust) == 0x5a, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SerializationInfo, 0x60>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::SerializationInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SerializationInfo*, "System.Runtime.Serialization", "SerializationInfo");
