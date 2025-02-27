#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Schema/JsonSchemaNodeCollection.hpp"
#include "System/Collections/ObjectModel/zzzz__KeyedCollection_2_impl.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaNodeCollection_def.hpp"
#include "Newtonsoft/Json/Schema/zzzz__JsonSchemaNode_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaNodeCollection.GetKeyForItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Schema::JsonSchemaNodeCollection::*)(::Newtonsoft::Json::Schema::JsonSchemaNode*)>(
    &::Newtonsoft::Json::Schema::JsonSchemaNodeCollection::GetKeyForItem)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3f1905c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaNodeCollection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaNodeCollection*>::get(), 39));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Schema::JsonSchemaNodeCollection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Schema::JsonSchemaNodeCollection::*)()>(
    &::Newtonsoft::Json::Schema::JsonSchemaNodeCollection::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3f17570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaNodeCollection*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::StringW Newtonsoft::Json::Schema::JsonSchemaNodeCollection::GetKeyForItem(::Newtonsoft::Json::Schema::JsonSchemaNode* item) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaNodeCollection*>::get(), 39)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, item);
}
inline void Newtonsoft::Json::Schema::JsonSchemaNodeCollection::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Schema::JsonSchemaNodeCollection*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Schema::JsonSchemaNodeCollection* Newtonsoft::Json::Schema::JsonSchemaNodeCollection::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Schema::JsonSchemaNodeCollection*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Schema::JsonSchemaNodeCollection::JsonSchemaNodeCollection() {}
