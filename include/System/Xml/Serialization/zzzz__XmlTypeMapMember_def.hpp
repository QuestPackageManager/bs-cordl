#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlTypeMapMember.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlTypeMapMember)
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Xml::Serialization {
class TypeData;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlTypeMapMember;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlTypeMapMember);
// Type: System.Xml.Serialization::XmlTypeMapMember
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::XmlTypeMapMember*
class CORDL_TYPE XmlTypeMapMember : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_DefaultValue, put = set_DefaultValue))::System::Object* DefaultValue;

  __declspec(property(get = get_GlobalIndex, put = set_GlobalIndex)) int32_t GlobalIndex;

  __declspec(property(get = get_Index, put = set_Index)) int32_t Index;

  __declspec(property(get = get_IsOptionalValueType, put = set_IsOptionalValueType)) bool IsOptionalValueType;

  __declspec(property(get = get_IsReturnValue, put = set_IsReturnValue)) bool IsReturnValue;

  __declspec(property(get = get_Name, put = set_Name))::StringW Name;

  __declspec(property(get = get_TypeData, put = set_TypeData))::System::Xml::Serialization::TypeData* TypeData;

  /// @brief Field _defaultValue, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultValue, put = __cordl_internal_set__defaultValue))::System::Object* _defaultValue;

  /// @brief Field _flags, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__flags, put = __cordl_internal_set__flags)) int32_t _flags;

  /// @brief Field _globalIndex, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__globalIndex, put = __cordl_internal_set__globalIndex)) int32_t _globalIndex;

  /// @brief Field _index, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) int32_t _index;

  /// @brief Field _member, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__member, put = __cordl_internal_set__member))::System::Reflection::MemberInfo* _member;

  /// @brief Field _name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name))::StringW _name;

  /// @brief Field _shouldSerialize, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__shouldSerialize, put = __cordl_internal_set__shouldSerialize))::System::Reflection::MethodInfo* _shouldSerialize;

  /// @brief Field _specifiedGlobalIndex, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__specifiedGlobalIndex, put = __cordl_internal_set__specifiedGlobalIndex)) int32_t _specifiedGlobalIndex;

  /// @brief Field _specifiedMember, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__specifiedMember, put = __cordl_internal_set__specifiedMember))::System::Reflection::MemberInfo* _specifiedMember;

  /// @brief Field _typeData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__typeData, put = __cordl_internal_set__typeData))::System::Xml::Serialization::TypeData* _typeData;

  /// @brief Method CheckOptionalValueType, addr 0x2f0eb08, size 0x80, virtual false, abstract: false, final false
  inline void CheckOptionalValueType(::System::Type* type);

  /// @brief Method GetValue, addr 0x2f07534, size 0x138, virtual false, abstract: false, final false
  inline ::System::Object* GetValue(::System::Object* ob);

  /// @brief Method GetValue, addr 0x2f0e678, size 0x144, virtual false, abstract: false, final false
  static inline ::System::Object* GetValue(::System::Object* ob, ::StringW name);

  /// @brief Method GetValueSpecified, addr 0x2f0aad4, size 0x258, virtual false, abstract: false, final false
  inline bool GetValueSpecified(::System::Object* ob);

  /// @brief Method InitMember, addr 0x2f0e43c, size 0x23c, virtual false, abstract: false, final false
  inline void InitMember(::System::Type* type);

  /// @brief Method IsReadOnly, addr 0x2f0e388, size 0xb4, virtual false, abstract: false, final false
  inline bool IsReadOnly(::System::Type* type);

  static inline ::System::Xml::Serialization::XmlTypeMapMember* New_ctor();

  /// @brief Method SetValue, addr 0x2f0e91c, size 0x158, virtual false, abstract: false, final false
  static inline void SetValue(::System::Object* ob, ::StringW name, ::System::Object* value);

  /// @brief Method SetValue, addr 0x2f0e7bc, size 0x160, virtual false, abstract: false, final false
  inline void SetValue(::System::Object* ob, ::System::Object* value);

  /// @brief Method SetValueSpecified, addr 0x2f0eb88, size 0x29c, virtual false, abstract: false, final false
  inline void SetValueSpecified(::System::Object* ob, bool value);

  constexpr ::System::Object*& __cordl_internal_get__defaultValue();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__defaultValue() const;

  constexpr int32_t const& __cordl_internal_get__flags() const;

  constexpr int32_t& __cordl_internal_get__flags();

  constexpr int32_t const& __cordl_internal_get__globalIndex() const;

  constexpr int32_t& __cordl_internal_get__globalIndex();

  constexpr int32_t const& __cordl_internal_get__index() const;

  constexpr int32_t& __cordl_internal_get__index();

  constexpr ::System::Reflection::MemberInfo*& __cordl_internal_get__member();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MemberInfo*> const& __cordl_internal_get__member() const;

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get__shouldSerialize();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> const& __cordl_internal_get__shouldSerialize() const;

  constexpr int32_t const& __cordl_internal_get__specifiedGlobalIndex() const;

  constexpr int32_t& __cordl_internal_get__specifiedGlobalIndex();

  constexpr ::System::Reflection::MemberInfo*& __cordl_internal_get__specifiedMember();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MemberInfo*> const& __cordl_internal_get__specifiedMember() const;

  constexpr ::System::Xml::Serialization::TypeData*& __cordl_internal_get__typeData();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::TypeData*> const& __cordl_internal_get__typeData() const;

  constexpr void __cordl_internal_set__defaultValue(::System::Object* value);

  constexpr void __cordl_internal_set__flags(int32_t value);

  constexpr void __cordl_internal_set__globalIndex(int32_t value);

  constexpr void __cordl_internal_set__index(int32_t value);

  constexpr void __cordl_internal_set__member(::System::Reflection::MemberInfo* value);

  constexpr void __cordl_internal_set__name(::StringW value);

  constexpr void __cordl_internal_set__shouldSerialize(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set__specifiedGlobalIndex(int32_t value);

  constexpr void __cordl_internal_set__specifiedMember(::System::Reflection::MemberInfo* value);

  constexpr void __cordl_internal_set__typeData(::System::Xml::Serialization::TypeData* value);

  /// @brief Method .ctor, addr 0x2f0e2f8, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DefaultValue, addr 0x2f0e378, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_DefaultValue();

  /// @brief Method get_GlobalIndex, addr 0x2f0ea94, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_GlobalIndex();

  /// @brief Method get_Index, addr 0x2f0ea84, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Index();

  /// @brief Method get_IsOptionalValueType, addr 0x2f0aac8, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsOptionalValueType();

  /// @brief Method get_IsReturnValue, addr 0x2f0ead0, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsReturnValue();

  /// @brief Method get_Name, addr 0x2f0e368, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_TypeData, addr 0x2f0ea74, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::TypeData* get_TypeData();

  /// @brief Method set_DefaultValue, addr 0x2f0e380, size 0x8, virtual false, abstract: false, final false
  inline void set_DefaultValue(::System::Object* value);

  /// @brief Method set_GlobalIndex, addr 0x2f0ea9c, size 0x8, virtual false, abstract: false, final false
  inline void set_GlobalIndex(int32_t value);

  /// @brief Method set_Index, addr 0x2f0ea8c, size 0x8, virtual false, abstract: false, final false
  inline void set_Index(int32_t value);

  /// @brief Method set_IsOptionalValueType, addr 0x2f0eaa4, size 0x2c, virtual false, abstract: false, final false
  inline void set_IsOptionalValueType(bool value);

  /// @brief Method set_IsReturnValue, addr 0x2f0eadc, size 0x2c, virtual false, abstract: false, final false
  inline void set_IsReturnValue(bool value);

  /// @brief Method set_Name, addr 0x2f0e370, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_TypeData, addr 0x2f0ea7c, size 0x8, virtual false, abstract: false, final false
  inline void set_TypeData(::System::Xml::Serialization::TypeData* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlTypeMapMember();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlTypeMapMember", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlTypeMapMember(XmlTypeMapMember&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlTypeMapMember", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlTypeMapMember(XmlTypeMapMember const&) = delete;

  /// @brief Field _name, offset: 0x10, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _index, offset: 0x18, size: 0x4, def value: None
  int32_t ____index;

  /// @brief Field _globalIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t ____globalIndex;

  /// @brief Field _specifiedGlobalIndex, offset: 0x20, size: 0x4, def value: None
  int32_t ____specifiedGlobalIndex;

  /// @brief Field _typeData, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Serialization::TypeData* ____typeData;

  /// @brief Field _member, offset: 0x30, size: 0x8, def value: None
  ::System::Reflection::MemberInfo* ____member;

  /// @brief Field _specifiedMember, offset: 0x38, size: 0x8, def value: None
  ::System::Reflection::MemberInfo* ____specifiedMember;

  /// @brief Field _shouldSerialize, offset: 0x40, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ____shouldSerialize;

  /// @brief Field _defaultValue, offset: 0x48, size: 0x8, def value: None
  ::System::Object* ____defaultValue;

  /// @brief Field _flags, offset: 0x50, size: 0x4, def value: None
  int32_t ____flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlTypeMapMember, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapMember, ____name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapMember, ____index) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapMember, ____globalIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapMember, ____specifiedGlobalIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapMember, ____typeData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapMember, ____member) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapMember, ____specifiedMember) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapMember, ____shouldSerialize) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapMember, ____defaultValue) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTypeMapMember, ____flags) == 0x50, "Offset mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlTypeMapMember);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlTypeMapMember*, "System.Xml.Serialization", "XmlTypeMapMember");
