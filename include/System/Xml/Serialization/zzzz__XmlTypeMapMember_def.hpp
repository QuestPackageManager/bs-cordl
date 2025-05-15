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
// Dependencies System.Object
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlTypeMapMember
class CORDL_TYPE XmlTypeMapMember : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_DefaultValue, put = set_DefaultValue)) ::System::Object* DefaultValue;

  __declspec(property(get = get_GlobalIndex, put = set_GlobalIndex)) int32_t GlobalIndex;

  __declspec(property(get = get_Index, put = set_Index)) int32_t Index;

  __declspec(property(get = get_IsOptionalValueType, put = set_IsOptionalValueType)) bool IsOptionalValueType;

  __declspec(property(get = get_IsReturnValue, put = set_IsReturnValue)) bool IsReturnValue;

  __declspec(property(get = get_Name, put = set_Name)) ::StringW Name;

  __declspec(property(get = get_TypeData, put = set_TypeData)) ::System::Xml::Serialization::TypeData* TypeData;

  /// @brief Field _defaultValue, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultValue, put = __cordl_internal_set__defaultValue)) ::System::Object* _defaultValue;

  /// @brief Field _flags, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__flags, put = __cordl_internal_set__flags)) int32_t _flags;

  /// @brief Field _globalIndex, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__globalIndex, put = __cordl_internal_set__globalIndex)) int32_t _globalIndex;

  /// @brief Field _index, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) int32_t _index;

  /// @brief Field _member, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__member, put = __cordl_internal_set__member)) ::System::Reflection::MemberInfo* _member;

  /// @brief Field _name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name)) ::StringW _name;

  /// @brief Field _shouldSerialize, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__shouldSerialize, put = __cordl_internal_set__shouldSerialize)) ::System::Reflection::MethodInfo* _shouldSerialize;

  /// @brief Field _specifiedGlobalIndex, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__specifiedGlobalIndex, put = __cordl_internal_set__specifiedGlobalIndex)) int32_t _specifiedGlobalIndex;

  /// @brief Field _specifiedMember, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__specifiedMember, put = __cordl_internal_set__specifiedMember)) ::System::Reflection::MemberInfo* _specifiedMember;

  /// @brief Field _typeData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__typeData, put = __cordl_internal_set__typeData)) ::System::Xml::Serialization::TypeData* _typeData;

  /// @brief Method CheckOptionalValueType, addr 0x4390050, size 0x7c, virtual false, abstract: false, final false
  inline void CheckOptionalValueType(::System::Type* type);

  /// @brief Method GetValue, addr 0x4388ba0, size 0x110, virtual false, abstract: false, final false
  inline ::System::Object* GetValue(::System::Object* ob);

  /// @brief Method GetValue, addr 0x438fc44, size 0x11c, virtual false, abstract: false, final false
  static inline ::System::Object* GetValue(::System::Object* ob, ::StringW name);

  /// @brief Method GetValueSpecified, addr 0x438c134, size 0x238, virtual false, abstract: false, final false
  inline bool GetValueSpecified(::System::Object* ob);

  /// @brief Method InitMember, addr 0x438fa08, size 0x23c, virtual false, abstract: false, final false
  inline void InitMember(::System::Type* type);

  /// @brief Method IsReadOnly, addr 0x438f954, size 0xb4, virtual false, abstract: false, final false
  inline bool IsReadOnly(::System::Type* type);

  static inline ::System::Xml::Serialization::XmlTypeMapMember* New_ctor();

  /// @brief Method SetValue, addr 0x438fe94, size 0x130, virtual false, abstract: false, final false
  static inline void SetValue(::System::Object* ob, ::StringW name, ::System::Object* value);

  /// @brief Method SetValue, addr 0x438fd60, size 0x134, virtual false, abstract: false, final false
  inline void SetValue(::System::Object* ob, ::System::Object* value);

  /// @brief Method SetValueSpecified, addr 0x43900cc, size 0x274, virtual false, abstract: false, final false
  inline void SetValueSpecified(::System::Object* ob, bool value);

  constexpr ::System::Object* const& __cordl_internal_get__defaultValue() const;

  constexpr ::System::Object*& __cordl_internal_get__defaultValue();

  constexpr int32_t const& __cordl_internal_get__flags() const;

  constexpr int32_t& __cordl_internal_get__flags();

  constexpr int32_t const& __cordl_internal_get__globalIndex() const;

  constexpr int32_t& __cordl_internal_get__globalIndex();

  constexpr int32_t const& __cordl_internal_get__index() const;

  constexpr int32_t& __cordl_internal_get__index();

  constexpr ::System::Reflection::MemberInfo* const& __cordl_internal_get__member() const;

  constexpr ::System::Reflection::MemberInfo*& __cordl_internal_get__member();

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get__shouldSerialize() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get__shouldSerialize();

  constexpr int32_t const& __cordl_internal_get__specifiedGlobalIndex() const;

  constexpr int32_t& __cordl_internal_get__specifiedGlobalIndex();

  constexpr ::System::Reflection::MemberInfo* const& __cordl_internal_get__specifiedMember() const;

  constexpr ::System::Reflection::MemberInfo*& __cordl_internal_get__specifiedMember();

  constexpr ::System::Xml::Serialization::TypeData* const& __cordl_internal_get__typeData() const;

  constexpr ::System::Xml::Serialization::TypeData*& __cordl_internal_get__typeData();

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

  /// @brief Method .ctor, addr 0x438f8c4, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DefaultValue, addr 0x438f944, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_DefaultValue();

  /// @brief Method get_GlobalIndex, addr 0x438ffe4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_GlobalIndex();

  /// @brief Method get_Index, addr 0x438ffd4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Index();

  /// @brief Method get_IsOptionalValueType, addr 0x438c128, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsOptionalValueType();

  /// @brief Method get_IsReturnValue, addr 0x4390014, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsReturnValue();

  /// @brief Method get_Name, addr 0x438f934, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_TypeData, addr 0x438ffc4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::TypeData* get_TypeData();

  /// @brief Method set_DefaultValue, addr 0x438f94c, size 0x8, virtual false, abstract: false, final false
  inline void set_DefaultValue(::System::Object* value);

  /// @brief Method set_GlobalIndex, addr 0x438ffec, size 0x8, virtual false, abstract: false, final false
  inline void set_GlobalIndex(int32_t value);

  /// @brief Method set_Index, addr 0x438ffdc, size 0x8, virtual false, abstract: false, final false
  inline void set_Index(int32_t value);

  /// @brief Method set_IsOptionalValueType, addr 0x438fff4, size 0x20, virtual false, abstract: false, final false
  inline void set_IsOptionalValueType(bool value);

  /// @brief Method set_IsReturnValue, addr 0x4390020, size 0x30, virtual false, abstract: false, final false
  inline void set_IsReturnValue(bool value);

  /// @brief Method set_Name, addr 0x438f93c, size 0x8, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_TypeData, addr 0x438ffcc, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7458 };

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

static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlTypeMapMember, 0x58>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlTypeMapMember);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlTypeMapMember*, "System.Xml.Serialization", "XmlTypeMapMember");
