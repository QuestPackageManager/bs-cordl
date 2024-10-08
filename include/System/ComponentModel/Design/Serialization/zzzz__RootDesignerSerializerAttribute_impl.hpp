#pragma once
// IWYU pragma private; include "System/ComponentModel/Design/Serialization/RootDesignerSerializerAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/Design/Serialization/zzzz__RootDesignerSerializerAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::*)(
    ::StringW, ::StringW, bool)>(&::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4408908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute.get_SerializerBaseTypeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::*)()>(
    &::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::get_SerializerBaseTypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4408944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute*>::get(),
                                                 "get_SerializerBaseTypeName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute.get_TypeId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::*)()>(
    &::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::get_TypeId)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x440894c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::__cordl_internal_get__typeId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeId;
}
constexpr ::StringW const& System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::__cordl_internal_get__typeId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeId;
}
constexpr void System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::__cordl_internal_set__typeId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____typeId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::__cordl_internal_get__Reloadable_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Reloadable_k__BackingField;
}
constexpr bool const& System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::__cordl_internal_get__Reloadable_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Reloadable_k__BackingField;
}
constexpr void System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::__cordl_internal_set__Reloadable_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Reloadable_k__BackingField = value;
}
constexpr ::StringW& System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::__cordl_internal_get__SerializerTypeName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SerializerTypeName_k__BackingField;
}
constexpr ::StringW const& System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::__cordl_internal_get__SerializerTypeName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SerializerTypeName_k__BackingField;
}
constexpr void System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::__cordl_internal_set__SerializerTypeName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SerializerTypeName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::__cordl_internal_get__SerializerBaseTypeName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SerializerBaseTypeName_k__BackingField;
}
constexpr ::StringW const& System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::__cordl_internal_get__SerializerBaseTypeName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SerializerBaseTypeName_k__BackingField;
}
constexpr void System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::__cordl_internal_set__SerializerBaseTypeName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SerializerBaseTypeName_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute*
System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::New_ctor(::StringW serializerTypeName, ::StringW baseSerializerTypeName, bool reloadable) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute*>(serializerTypeName, baseSerializerTypeName, reloadable));
}
inline void System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::_ctor(::StringW serializerTypeName, ::StringW baseSerializerTypeName, bool reloadable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializerTypeName, baseSerializerTypeName, reloadable);
}
inline ::StringW System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::get_SerializerBaseTypeName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute*>::get(),
                                               "get_SerializerBaseTypeName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::get_TypeId() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute::RootDesignerSerializerAttribute() {}
