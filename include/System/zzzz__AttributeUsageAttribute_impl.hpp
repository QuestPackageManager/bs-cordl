#pragma once
#include "System/zzzz__AttributeTargets_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__AttributeUsageAttribute_def.hpp"
#include "System/zzzz__AttributeTargets_def.hpp"
//  Writing Method size for method: ::System::AttributeUsageAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::AttributeUsageAttribute::*)(::System::AttributeTargets)>(&::System::AttributeUsageAttribute::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2611150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AttributeUsageAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AttributeTargets>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AttributeUsageAttribute.get_AllowMultiple
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::AttributeUsageAttribute::*)()>(&::System::AttributeUsageAttribute::get_AllowMultiple)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2611188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AttributeUsageAttribute*>::get(), "get_AllowMultiple",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AttributeUsageAttribute.set_AllowMultiple
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::AttributeUsageAttribute::*)(bool)>(&::System::AttributeUsageAttribute::set_AllowMultiple)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2611190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AttributeUsageAttribute*>::get(), "set_AllowMultiple",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AttributeUsageAttribute.get_Inherited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::AttributeUsageAttribute::*)()>(&::System::AttributeUsageAttribute::get_Inherited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x261119c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AttributeUsageAttribute*>::get(), "get_Inherited",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AttributeUsageAttribute.set_Inherited
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::AttributeUsageAttribute::*)(bool)>(&::System::AttributeUsageAttribute::set_Inherited)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26111a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AttributeUsageAttribute*>::get(), "set_Inherited",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::AttributeTargets& System::AttributeUsageAttribute::__cordl_internal_get__attributeTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributeTarget;
}
constexpr ::System::AttributeTargets const& System::AttributeUsageAttribute::__cordl_internal_get__attributeTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributeTarget;
}
constexpr void System::AttributeUsageAttribute::__cordl_internal_set__attributeTarget(::System::AttributeTargets value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____attributeTarget = value;
}
constexpr bool& System::AttributeUsageAttribute::__cordl_internal_get__allowMultiple() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowMultiple;
}
constexpr bool const& System::AttributeUsageAttribute::__cordl_internal_get__allowMultiple() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowMultiple;
}
constexpr void System::AttributeUsageAttribute::__cordl_internal_set__allowMultiple(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowMultiple = value;
}
constexpr bool& System::AttributeUsageAttribute::__cordl_internal_get__inherited() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inherited;
}
constexpr bool const& System::AttributeUsageAttribute::__cordl_internal_get__inherited() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inherited;
}
constexpr void System::AttributeUsageAttribute::__cordl_internal_set__inherited(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inherited = value;
}
inline void System::AttributeUsageAttribute::setStaticF_Default(::System::AttributeUsageAttribute* value) {
  ::cordl_internals::setStaticField<::System::AttributeUsageAttribute*, "Default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AttributeUsageAttribute*>::get>(
      std::forward<::System::AttributeUsageAttribute*>(value));
}
inline ::System::AttributeUsageAttribute* System::AttributeUsageAttribute::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::System::AttributeUsageAttribute*, "Default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AttributeUsageAttribute*>::get>();
}
inline ::System::AttributeUsageAttribute* System::AttributeUsageAttribute::New_ctor(::System::AttributeTargets validOn) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::AttributeUsageAttribute*>(validOn));
}
inline void System::AttributeUsageAttribute::_ctor(::System::AttributeTargets validOn) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AttributeUsageAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AttributeTargets>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, validOn);
}
inline bool System::AttributeUsageAttribute::get_AllowMultiple() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AttributeUsageAttribute*>::get(), "get_AllowMultiple",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::AttributeUsageAttribute::set_AllowMultiple(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AttributeUsageAttribute*>::get(), "set_AllowMultiple",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::AttributeUsageAttribute::get_Inherited() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AttributeUsageAttribute*>::get(), "get_Inherited",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::AttributeUsageAttribute::set_Inherited(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AttributeUsageAttribute*>::get(), "set_Inherited",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::AttributeUsageAttribute::AttributeUsageAttribute() {}
