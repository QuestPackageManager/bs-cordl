#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__ToolboxItemAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ToolboxItemAttribute.IsDefaultAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::ToolboxItemAttribute::*)()>(
    &::System::ComponentModel::ToolboxItemAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2f3d000;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ToolboxItemAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ToolboxItemAttribute*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ToolboxItemAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ToolboxItemAttribute::*)(bool)>(
    &::System::ComponentModel::ToolboxItemAttribute::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2f3d068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ToolboxItemAttribute*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ToolboxItemAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ToolboxItemAttribute::*)(::StringW)>(
    &::System::ComponentModel::ToolboxItemAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2f3d0c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ToolboxItemAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ToolboxItemAttribute.get_ToolboxItemTypeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::ToolboxItemAttribute::*)()>(
    &::System::ComponentModel::ToolboxItemAttribute::get_ToolboxItemTypeName)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f3d150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ToolboxItemAttribute*>::get(),
                                                                               "get_ToolboxItemTypeName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ToolboxItemAttribute.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::ToolboxItemAttribute::*)(::System::Object*)>(
    &::System::ComponentModel::ToolboxItemAttribute::Equals)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2f3d1a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ToolboxItemAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ToolboxItemAttribute*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ToolboxItemAttribute.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::ToolboxItemAttribute::*)()>(
    &::System::ComponentModel::ToolboxItemAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2f3d298;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ToolboxItemAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ToolboxItemAttribute*>::get(), 2));
    return ___internal_method;
  }
};
constexpr ::StringW& System::ComponentModel::ToolboxItemAttribute::__cordl_internal_get__toolboxItemTypeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toolboxItemTypeName;
}
constexpr ::StringW const& System::ComponentModel::ToolboxItemAttribute::__cordl_internal_get__toolboxItemTypeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toolboxItemTypeName;
}
constexpr void System::ComponentModel::ToolboxItemAttribute::__cordl_internal_set__toolboxItemTypeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____toolboxItemTypeName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::ComponentModel::ToolboxItemAttribute::setStaticF_Default(::System::ComponentModel::ToolboxItemAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::ToolboxItemAttribute*, "Default",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ToolboxItemAttribute*>::get>(
      std::forward<::System::ComponentModel::ToolboxItemAttribute*>(value));
}
inline ::System::ComponentModel::ToolboxItemAttribute* System::ComponentModel::ToolboxItemAttribute::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::ToolboxItemAttribute*, "Default",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ToolboxItemAttribute*>::get>();
}
inline void System::ComponentModel::ToolboxItemAttribute::setStaticF_None(::System::ComponentModel::ToolboxItemAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::ToolboxItemAttribute*, "None",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ToolboxItemAttribute*>::get>(
      std::forward<::System::ComponentModel::ToolboxItemAttribute*>(value));
}
inline ::System::ComponentModel::ToolboxItemAttribute* System::ComponentModel::ToolboxItemAttribute::getStaticF_None() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::ToolboxItemAttribute*, "None",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ToolboxItemAttribute*>::get>();
}
inline bool System::ComponentModel::ToolboxItemAttribute::IsDefaultAttribute() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ToolboxItemAttribute*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::ComponentModel::ToolboxItemAttribute* System::ComponentModel::ToolboxItemAttribute::New_ctor(bool defaultType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::ToolboxItemAttribute*>(defaultType));
}
inline void System::ComponentModel::ToolboxItemAttribute::_ctor(bool defaultType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ToolboxItemAttribute*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, defaultType);
}
inline ::System::ComponentModel::ToolboxItemAttribute* System::ComponentModel::ToolboxItemAttribute::New_ctor(::StringW toolboxItemTypeName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::ToolboxItemAttribute*>(toolboxItemTypeName));
}
inline void System::ComponentModel::ToolboxItemAttribute::_ctor(::StringW toolboxItemTypeName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ToolboxItemAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, toolboxItemTypeName);
}
inline ::StringW System::ComponentModel::ToolboxItemAttribute::get_ToolboxItemTypeName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ToolboxItemAttribute*>::get(),
                                                                             "get_ToolboxItemTypeName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::ComponentModel::ToolboxItemAttribute::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ToolboxItemAttribute*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::ToolboxItemAttribute::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ToolboxItemAttribute*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ToolboxItemAttribute::ToolboxItemAttribute() {}
