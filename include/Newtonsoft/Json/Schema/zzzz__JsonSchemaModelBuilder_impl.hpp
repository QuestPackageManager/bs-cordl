#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Schema/JsonSchemaModelBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaModelBuilder_def.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaModel_def.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaNodeCollection_def.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaNode_def.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchema_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModelBuilder.Build
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Schema::JsonSchemaModel* (
    ::Newtonsoft::Json::Schema::JsonSchemaModelBuilder::*)(::Newtonsoft::Json::Schema::JsonSchema*)>(&::Newtonsoft::Json::Schema::JsonSchemaModelBuilder::Build)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5b5070c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaModelBuilder*>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchema*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModelBuilder.AddSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Schema::JsonSchemaNode* (
    ::Newtonsoft::Json::Schema::JsonSchemaModelBuilder::*)(::Newtonsoft::Json::Schema::JsonSchemaNode*, ::Newtonsoft::Json::Schema::JsonSchema*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaModelBuilder::AddSchema)> {
  constexpr static std::size_t size = 0x62c;
  constexpr static std::size_t addrs = 0x5b5085c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaModelBuilder*>::get(), "AddSchema", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchemaNode*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchema*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModelBuilder.AddProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaModelBuilder::*)(
    ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>*,
    ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>*)>(&::Newtonsoft::Json::Schema::JsonSchemaModelBuilder::AddProperties)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x5b51a18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaModelBuilder*>::get(), "AddProperties", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModelBuilder.AddProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaModelBuilder::*)(
    ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>*, ::StringW, ::Newtonsoft::Json::Schema::JsonSchema*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaModelBuilder::AddProperty)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5b51eb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaModelBuilder*>::get(), "AddProperty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchema*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModelBuilder.AddItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaModelBuilder::*)(
    ::Newtonsoft::Json::Schema::JsonSchemaNode*, int32_t, ::Newtonsoft::Json::Schema::JsonSchema*)>(&::Newtonsoft::Json::Schema::JsonSchemaModelBuilder::AddItem)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5b51cf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaModelBuilder*>::get(), "AddItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchemaNode*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchema*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModelBuilder.AddAdditionalProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaModelBuilder::*)(
    ::Newtonsoft::Json::Schema::JsonSchemaNode*, ::Newtonsoft::Json::Schema::JsonSchema*)>(&::Newtonsoft::Json::Schema::JsonSchemaModelBuilder::AddAdditionalProperties)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b51e94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaModelBuilder*>::get(), "AddAdditionalProperties", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchemaNode*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchema*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModelBuilder.AddAdditionalItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaModelBuilder::*)(
    ::Newtonsoft::Json::Schema::JsonSchemaNode*, ::Newtonsoft::Json::Schema::JsonSchema*)>(&::Newtonsoft::Json::Schema::JsonSchemaModelBuilder::AddAdditionalItems)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b51e70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaModelBuilder*>::get(), "AddAdditionalItems", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchemaNode*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchema*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModelBuilder.BuildNodeModel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Schema::JsonSchemaModel* (
    ::Newtonsoft::Json::Schema::JsonSchemaModelBuilder::*)(::Newtonsoft::Json::Schema::JsonSchemaNode*)>(&::Newtonsoft::Json::Schema::JsonSchemaModelBuilder::BuildNodeModel)> {
  constexpr static std::size_t size = 0x6e8;
  constexpr static std::size_t addrs = 0x5b50e88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaModelBuilder*>::get(), "BuildNodeModel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchemaNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaModelBuilder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaModelBuilder::*)()>(
    &::Newtonsoft::Json::Schema::JsonSchemaModelBuilder::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5b52000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaModelBuilder*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Schema::JsonSchemaNodeCollection*& Newtonsoft::Json::Schema::JsonSchemaModelBuilder::__cordl_internal_get__nodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodes;
}
constexpr ::Newtonsoft::Json::Schema::JsonSchemaNodeCollection* const& Newtonsoft::Json::Schema::JsonSchemaModelBuilder::__cordl_internal_get__nodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodes;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaModelBuilder::__cordl_internal_set__nodes(::Newtonsoft::Json::Schema::JsonSchemaNodeCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nodes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Schema::JsonSchemaNode*, ::Newtonsoft::Json::Schema::JsonSchemaModel*>*&
Newtonsoft::Json::Schema::JsonSchemaModelBuilder::__cordl_internal_get__nodeModels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeModels;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Schema::JsonSchemaNode*, ::Newtonsoft::Json::Schema::JsonSchemaModel*>* const&
Newtonsoft::Json::Schema::JsonSchemaModelBuilder::__cordl_internal_get__nodeModels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeModels;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaModelBuilder::__cordl_internal_set__nodeModels(
    ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Schema::JsonSchemaNode*, ::Newtonsoft::Json::Schema::JsonSchemaModel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nodeModels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::Schema::JsonSchemaNode*& Newtonsoft::Json::Schema::JsonSchemaModelBuilder::__cordl_internal_get__node() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____node;
}
constexpr ::Newtonsoft::Json::Schema::JsonSchemaNode* const& Newtonsoft::Json::Schema::JsonSchemaModelBuilder::__cordl_internal_get__node() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____node;
}
constexpr void Newtonsoft::Json::Schema::JsonSchemaModelBuilder::__cordl_internal_set__node(::Newtonsoft::Json::Schema::JsonSchemaNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____node)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Newtonsoft::Json::Schema::JsonSchemaModel* Newtonsoft::Json::Schema::JsonSchemaModelBuilder::Build(::Newtonsoft::Json::Schema::JsonSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaModelBuilder*>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchema*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Schema::JsonSchemaModel*, false>(this, ___internal_method, schema);
}
inline ::Newtonsoft::Json::Schema::JsonSchemaNode* Newtonsoft::Json::Schema::JsonSchemaModelBuilder::AddSchema(::Newtonsoft::Json::Schema::JsonSchemaNode* existingNode,
                                                                                                               ::Newtonsoft::Json::Schema::JsonSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaModelBuilder*>::get(), "AddSchema", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchemaNode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchema*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Schema::JsonSchemaNode*, false>(this, ___internal_method, existingNode, schema);
}
inline void Newtonsoft::Json::Schema::JsonSchemaModelBuilder::AddProperties(::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>* source,
                                                                            ::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>* target) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaModelBuilder*>::get(), "AddProperties", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchema*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, target);
}
inline void Newtonsoft::Json::Schema::JsonSchemaModelBuilder::AddProperty(::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>* target,
                                                                          ::StringW propertyName, ::Newtonsoft::Json::Schema::JsonSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaModelBuilder*>::get(), "AddProperty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW, ::Newtonsoft::Json::Schema::JsonSchemaNode*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchema*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target, propertyName, schema);
}
inline void Newtonsoft::Json::Schema::JsonSchemaModelBuilder::AddItem(::Newtonsoft::Json::Schema::JsonSchemaNode* parentNode, int32_t index, ::Newtonsoft::Json::Schema::JsonSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaModelBuilder*>::get(), "AddItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchemaNode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchema*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parentNode, index, schema);
}
inline void Newtonsoft::Json::Schema::JsonSchemaModelBuilder::AddAdditionalProperties(::Newtonsoft::Json::Schema::JsonSchemaNode* parentNode, ::Newtonsoft::Json::Schema::JsonSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaModelBuilder*>::get(), "AddAdditionalProperties", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchemaNode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchema*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parentNode, schema);
}
inline void Newtonsoft::Json::Schema::JsonSchemaModelBuilder::AddAdditionalItems(::Newtonsoft::Json::Schema::JsonSchemaNode* parentNode, ::Newtonsoft::Json::Schema::JsonSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaModelBuilder*>::get(), "AddAdditionalItems", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchemaNode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchema*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parentNode, schema);
}
inline ::Newtonsoft::Json::Schema::JsonSchemaModel* Newtonsoft::Json::Schema::JsonSchemaModelBuilder::BuildNodeModel(::Newtonsoft::Json::Schema::JsonSchemaNode* node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaModelBuilder*>::get(), "BuildNodeModel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Schema::JsonSchemaNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Schema::JsonSchemaModel*, false>(this, ___internal_method, node);
}
inline void Newtonsoft::Json::Schema::JsonSchemaModelBuilder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaModelBuilder*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Schema::JsonSchemaModelBuilder* Newtonsoft::Json::Schema::JsonSchemaModelBuilder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Schema::JsonSchemaModelBuilder*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Schema::JsonSchemaModelBuilder::JsonSchemaModelBuilder() {}
