#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Schema/JsonSchemaNode.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaNode_def.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaNode_def.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchema_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaNode___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaNode___c::*)()>(&::Newtonsoft::Json::Schema::JsonSchemaNode___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d65118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNode___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaNode___c._GetId_b__26_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Schema::JsonSchemaNode___c::*)(::Newtonsoft::Json::Schema::JsonSchema*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaNode___c::_GetId_b__26_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5d6511c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNode___c*>(), { "<GetId>b__26_0", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaNode___c._GetId_b__26_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Schema::JsonSchemaNode___c::*)(::StringW)>(&::Newtonsoft::Json::Schema::JsonSchemaNode___c::_GetId_b__26_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d65130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNode___c*>(), { "<GetId>b__26_1", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Schema::JsonSchemaNode___c::setStaticF___9(::Newtonsoft::Json::Schema::JsonSchemaNode___c* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Schema::JsonSchemaNode___c*, "<>9", ::Newtonsoft::Json::Schema::JsonSchemaNode___c*>(
      std::forward<::Newtonsoft::Json::Schema::JsonSchemaNode___c*>(value));
}
inline ::Newtonsoft::Json::Schema::JsonSchemaNode___c* Newtonsoft::Json::Schema::JsonSchemaNode___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Schema::JsonSchemaNode___c*, "<>9", ::Newtonsoft::Json::Schema::JsonSchemaNode___c*>();
}
inline void Newtonsoft::Json::Schema::JsonSchemaNode___c::setStaticF___9__26_0(::System::Func_2<::Newtonsoft::Json::Schema::JsonSchema*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Newtonsoft::Json::Schema::JsonSchema*, ::StringW>*, "<>9__26_0", ::Newtonsoft::Json::Schema::JsonSchemaNode___c*>(
      std::forward<::System::Func_2<::Newtonsoft::Json::Schema::JsonSchema*, ::StringW>*>(value));
}
inline ::System::Func_2<::Newtonsoft::Json::Schema::JsonSchema*, ::StringW>* Newtonsoft::Json::Schema::JsonSchemaNode___c::getStaticF___9__26_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Newtonsoft::Json::Schema::JsonSchema*, ::StringW>*, "<>9__26_0", ::Newtonsoft::Json::Schema::JsonSchemaNode___c*>();
}
inline void Newtonsoft::Json::Schema::JsonSchemaNode___c::setStaticF___9__26_1(::System::Func_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, ::StringW>*, "<>9__26_1", ::Newtonsoft::Json::Schema::JsonSchemaNode___c*>(
      std::forward<::System::Func_2<::StringW, ::StringW>*>(value));
}
inline ::System::Func_2<::StringW, ::StringW>* Newtonsoft::Json::Schema::JsonSchemaNode___c::getStaticF___9__26_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, ::StringW>*, "<>9__26_1", ::Newtonsoft::Json::Schema::JsonSchemaNode___c*>();
}
inline void Newtonsoft::Json::Schema::JsonSchemaNode___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNode___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Schema::JsonSchemaNode___c::_GetId_b__26_0(::Newtonsoft::Json::Schema::JsonSchema* s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNode___c*>(), { "<GetId>b__26_0", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, s);
}
inline ::StringW Newtonsoft::Json::Schema::JsonSchemaNode___c::_GetId_b__26_1(::StringW id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNode___c*>(), { "<GetId>b__26_1", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, id);
}
inline ::Newtonsoft::Json::Schema::JsonSchemaNode___c* Newtonsoft::Json::Schema::JsonSchemaNode___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Schema::JsonSchemaNode___c*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Schema::JsonSchemaNode___c::JsonSchemaNode___c() {}
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaNode.get_Id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Schema::JsonSchemaNode::*)()>(&::Newtonsoft::Json::Schema::JsonSchemaNode::get_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNode*>(), { "get_Id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaNode.get_Schemas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Newtonsoft::Json::Schema::JsonSchema*>* (
    ::Newtonsoft::Json::Schema::JsonSchemaNode::*)()>(&::Newtonsoft::Json::Schema::JsonSchemaNode::get_Schemas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNode*>(), { "get_Schemas", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaNode.get_Properties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>* (
    ::Newtonsoft::Json::Schema::JsonSchemaNode::*)()>(&::Newtonsoft::Json::Schema::JsonSchemaNode::get_Properties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNode*>(), { "get_Properties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaNode.get_PatternProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>* (
    ::Newtonsoft::Json::Schema::JsonSchemaNode::*)()>(&::Newtonsoft::Json::Schema::JsonSchemaNode::get_PatternProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNode*>(), { "get_PatternProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaNode.get_Items
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Newtonsoft::Json::Schema::JsonSchemaNode*>* (::Newtonsoft::Json::Schema::JsonSchemaNode::*)()>(
    &::Newtonsoft::Json::Schema::JsonSchemaNode::get_Items)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNode*>(), { "get_Items", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaNode.get_AdditionalProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Schema::JsonSchemaNode* (::Newtonsoft::Json::Schema::JsonSchemaNode::*)()>(
    &::Newtonsoft::Json::Schema::JsonSchemaNode::get_AdditionalProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNode*>(), { "get_AdditionalProperties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaNode.set_AdditionalProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaNode::*)(::Newtonsoft::Json::Schema::JsonSchemaNode*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaNode::set_AdditionalProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNode*>(),
                                                                                           { "set_AdditionalProperties", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaNode.get_AdditionalItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Schema::JsonSchemaNode* (::Newtonsoft::Json::Schema::JsonSchemaNode::*)()>(
    &::Newtonsoft::Json::Schema::JsonSchemaNode::get_AdditionalItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNode*>(), { "get_AdditionalItems", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaNode.set_AdditionalItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaNode::*)(::Newtonsoft::Json::Schema::JsonSchemaNode*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaNode::set_AdditionalItems)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d64e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNode*>(),
                                                                                           { "set_AdditionalItems", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaNode::*)(::Newtonsoft::Json::Schema::JsonSchema*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaNode::_ctor)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5d64548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNode*>(), { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaNode::*)(::Newtonsoft::Json::Schema::JsonSchemaNode*, ::Newtonsoft::Json::Schema::JsonSchema*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaNode::_ctor)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5d64e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNode*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaNode*>(), ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaNode.Combine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Schema::JsonSchemaNode* (::Newtonsoft::Json::Schema::JsonSchemaNode::*)(::Newtonsoft::Json::Schema::JsonSchema*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaNode::Combine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d64720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNode*>(), { "Combine", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaNode.GetId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Schema::JsonSchema*>*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaNode::GetId)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5d642e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNode*>(),
                                                             { "GetId", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Schema::JsonSchema*>*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& Newtonsoft::Json::Schema::JsonSchemaNode::__cordl_internal_get__Id_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Id_k__BackingField;
}
constexpr ::StringW const& Newtonsoft::Json::Schema::JsonSchemaNode::__cordl_internal_get__Id_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Id_k__BackingField;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaNode::__cordl_internal_set__Id_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Id_k__BackingField = value;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Newtonsoft::Json::Schema::JsonSchema*>*&
Newtonsoft::Json::Schema::JsonSchemaNode::__cordl_internal_get__Schemas_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Schemas_k__BackingField;
}
constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Newtonsoft::Json::Schema::JsonSchema*>* const&
Newtonsoft::Json::Schema::JsonSchemaNode::__cordl_internal_get__Schemas_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Schemas_k__BackingField;
}
constexpr void
Newtonsoft::Json::Schema::JsonSchemaNode::__cordl_internal_set__Schemas_k__BackingField(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Newtonsoft::Json::Schema::JsonSchema*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Schemas_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>*&
Newtonsoft::Json::Schema::JsonSchemaNode::__cordl_internal_get__Properties_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Properties_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>* const&
Newtonsoft::Json::Schema::JsonSchemaNode::__cordl_internal_get__Properties_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Properties_k__BackingField;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaNode::__cordl_internal_set__Properties_k__BackingField(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Properties_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>*&
Newtonsoft::Json::Schema::JsonSchemaNode::__cordl_internal_get__PatternProperties_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PatternProperties_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>* const&
Newtonsoft::Json::Schema::JsonSchemaNode::__cordl_internal_get__PatternProperties_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PatternProperties_k__BackingField;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaNode::__cordl_internal_set__PatternProperties_k__BackingField(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____PatternProperties_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Schema::JsonSchemaNode*>*& Newtonsoft::Json::Schema::JsonSchemaNode::__cordl_internal_get__Items_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Items_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Schema::JsonSchemaNode*>* const& Newtonsoft::Json::Schema::JsonSchemaNode::__cordl_internal_get__Items_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Items_k__BackingField;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaNode::__cordl_internal_set__Items_k__BackingField(::System::Collections::Generic::List_1<::Newtonsoft::Json::Schema::JsonSchemaNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Items_k__BackingField = value;
}
constexpr ::Newtonsoft::Json::Schema::JsonSchemaNode*& Newtonsoft::Json::Schema::JsonSchemaNode::__cordl_internal_get__AdditionalProperties_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AdditionalProperties_k__BackingField;
}
constexpr ::Newtonsoft::Json::Schema::JsonSchemaNode* const& Newtonsoft::Json::Schema::JsonSchemaNode::__cordl_internal_get__AdditionalProperties_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AdditionalProperties_k__BackingField;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaNode::__cordl_internal_set__AdditionalProperties_k__BackingField(::Newtonsoft::Json::Schema::JsonSchemaNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____AdditionalProperties_k__BackingField = value;
}
constexpr ::Newtonsoft::Json::Schema::JsonSchemaNode*& Newtonsoft::Json::Schema::JsonSchemaNode::__cordl_internal_get__AdditionalItems_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AdditionalItems_k__BackingField;
}
constexpr ::Newtonsoft::Json::Schema::JsonSchemaNode* const& Newtonsoft::Json::Schema::JsonSchemaNode::__cordl_internal_get__AdditionalItems_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AdditionalItems_k__BackingField;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaNode::__cordl_internal_set__AdditionalItems_k__BackingField(::Newtonsoft::Json::Schema::JsonSchemaNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____AdditionalItems_k__BackingField = value;
}
inline ::StringW Newtonsoft::Json::Schema::JsonSchemaNode::get_Id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNode*>(), { "get_Id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Newtonsoft::Json::Schema::JsonSchema*>* Newtonsoft::Json::Schema::JsonSchemaNode::get_Schemas() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNode*>(), { "get_Schemas", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Newtonsoft::Json::Schema::JsonSchema*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>* Newtonsoft::Json::Schema::JsonSchemaNode::get_Properties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNode*>(), { "get_Properties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>* Newtonsoft::Json::Schema::JsonSchemaNode::get_PatternProperties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNode*>(), { "get_PatternProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Newtonsoft::Json::Schema::JsonSchemaNode*>* Newtonsoft::Json::Schema::JsonSchemaNode::get_Items() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNode*>(), { "get_Items", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Newtonsoft::Json::Schema::JsonSchemaNode*>*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Schema::JsonSchemaNode* Newtonsoft::Json::Schema::JsonSchemaNode::get_AdditionalProperties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNode*>(), { "get_AdditionalProperties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Schema::JsonSchemaNode*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Schema::JsonSchemaNode::set_AdditionalProperties(::Newtonsoft::Json::Schema::JsonSchemaNode* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNode*>(),
                                                                                         { "set_AdditionalProperties", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Schema::JsonSchemaNode* Newtonsoft::Json::Schema::JsonSchemaNode::get_AdditionalItems() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNode*>(), { "get_AdditionalItems", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Schema::JsonSchemaNode*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Schema::JsonSchemaNode::set_AdditionalItems(::Newtonsoft::Json::Schema::JsonSchemaNode* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNode*>(),
                                                                                         { "set_AdditionalItems", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Schema::JsonSchemaNode::_ctor(::Newtonsoft::Json::Schema::JsonSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNode*>(), { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schema);
}
inline void Newtonsoft::Json::Schema::JsonSchemaNode::_ctor(::Newtonsoft::Json::Schema::JsonSchemaNode* source, ::Newtonsoft::Json::Schema::JsonSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNode*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchemaNode*>(), ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, schema);
}
inline ::Newtonsoft::Json::Schema::JsonSchemaNode* Newtonsoft::Json::Schema::JsonSchemaNode::Combine(::Newtonsoft::Json::Schema::JsonSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNode*>(), { "Combine", {}, { ::i2c::type_of<::Newtonsoft::Json::Schema::JsonSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Schema::JsonSchemaNode*>(this, ___internal_method, schema);
}
inline ::StringW Newtonsoft::Json::Schema::JsonSchemaNode::GetId(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Schema::JsonSchema*>* schemata) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Schema::JsonSchemaNode*>(),
                                                           { "GetId", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Schema::JsonSchema*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, schemata);
}
inline ::Newtonsoft::Json::Schema::JsonSchemaNode* Newtonsoft::Json::Schema::JsonSchemaNode::New_ctor(::Newtonsoft::Json::Schema::JsonSchema* schema) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Schema::JsonSchemaNode*>(schema));
}
inline ::Newtonsoft::Json::Schema::JsonSchemaNode* Newtonsoft::Json::Schema::JsonSchemaNode::New_ctor(::Newtonsoft::Json::Schema::JsonSchemaNode* source,
                                                                                                      ::Newtonsoft::Json::Schema::JsonSchema* schema) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Schema::JsonSchemaNode*>(source, schema));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Schema::JsonSchemaNode::JsonSchemaNode() {}
