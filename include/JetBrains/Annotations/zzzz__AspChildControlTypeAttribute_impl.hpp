#pragma once
// IWYU pragma private; include "JetBrains/Annotations/AspChildControlTypeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__AspChildControlTypeAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::AspChildControlTypeAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::AspChildControlTypeAttribute::*)(::StringW, ::System::Type*)>(
    &::JetBrains::Annotations::AspChildControlTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4afff0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspChildControlTypeAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AspChildControlTypeAttribute.get_TagName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::JetBrains::Annotations::AspChildControlTypeAttribute::*)()>(
    &::JetBrains::Annotations::AspChildControlTypeAttribute::get_TagName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4afff38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspChildControlTypeAttribute*>::get(),
                                                                               "get_TagName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AspChildControlTypeAttribute.set_TagName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::AspChildControlTypeAttribute::*)(::StringW)>(
    &::JetBrains::Annotations::AspChildControlTypeAttribute::set_TagName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4afff40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspChildControlTypeAttribute*>::get(), "set_TagName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AspChildControlTypeAttribute.get_ControlType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::JetBrains::Annotations::AspChildControlTypeAttribute::*)()>(
    &::JetBrains::Annotations::AspChildControlTypeAttribute::get_ControlType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4afff48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspChildControlTypeAttribute*>::get(),
                                                                               "get_ControlType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AspChildControlTypeAttribute.set_ControlType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::AspChildControlTypeAttribute::*)(::System::Type*)>(
    &::JetBrains::Annotations::AspChildControlTypeAttribute::set_ControlType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4afff50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspChildControlTypeAttribute*>::get(), "set_ControlType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& JetBrains::Annotations::AspChildControlTypeAttribute::__cordl_internal_get__TagName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TagName_k__BackingField;
}
constexpr ::StringW const& JetBrains::Annotations::AspChildControlTypeAttribute::__cordl_internal_get__TagName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TagName_k__BackingField;
}
constexpr void JetBrains::Annotations::AspChildControlTypeAttribute::__cordl_internal_set__TagName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TagName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& JetBrains::Annotations::AspChildControlTypeAttribute::__cordl_internal_get__ControlType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ControlType_k__BackingField;
}
constexpr ::System::Type* const& JetBrains::Annotations::AspChildControlTypeAttribute::__cordl_internal_get__ControlType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ControlType_k__BackingField;
}
constexpr void JetBrains::Annotations::AspChildControlTypeAttribute::__cordl_internal_set__ControlType_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ControlType_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void JetBrains::Annotations::AspChildControlTypeAttribute::_ctor(::StringW tagName, ::System::Type* controlType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspChildControlTypeAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tagName, controlType);
}
inline ::StringW JetBrains::Annotations::AspChildControlTypeAttribute::get_TagName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspChildControlTypeAttribute*>::get(),
                                                                             "get_TagName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void JetBrains::Annotations::AspChildControlTypeAttribute::set_TagName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspChildControlTypeAttribute*>::get(), "set_TagName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Type* JetBrains::Annotations::AspChildControlTypeAttribute::get_ControlType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspChildControlTypeAttribute*>::get(),
                                                                             "get_ControlType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline void JetBrains::Annotations::AspChildControlTypeAttribute::set_ControlType(::System::Type* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspChildControlTypeAttribute*>::get(), "set_ControlType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::JetBrains::Annotations::AspChildControlTypeAttribute* JetBrains::Annotations::AspChildControlTypeAttribute::New_ctor(::StringW tagName, ::System::Type* controlType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::JetBrains::Annotations::AspChildControlTypeAttribute*>(tagName, controlType));
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::AspChildControlTypeAttribute::AspChildControlTypeAttribute() {}
