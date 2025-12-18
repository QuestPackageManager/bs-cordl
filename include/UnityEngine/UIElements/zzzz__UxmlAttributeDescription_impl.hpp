#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlAttributeDescription.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlAttributeDescription_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__TemplateAsset_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlTypeRestriction_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeAsset_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UxmlAttributeDescription_Use::UxmlAttributeDescription_Use(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlAttributeDescription_Use::UxmlAttributeDescription_Use() {}
constexpr ::UnityEngine::UIElements::UxmlAttributeDescription_Use UnityEngine::UIElements::UxmlAttributeDescription_Use::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::UxmlAttributeDescription_Use UnityEngine::UIElements::UxmlAttributeDescription_Use::Optional{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::UxmlAttributeDescription_Use UnityEngine::UIElements::UxmlAttributeDescription_Use::Prohibited{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UIElements::UxmlAttributeDescription_Use UnityEngine::UIElements::UxmlAttributeDescription_Use::Required{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UxmlAttributeDescription::*)()>(
    &::UnityEngine::UIElements::UxmlAttributeDescription::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6af1ce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription.get_name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::UxmlAttributeDescription::*)()>(
    &::UnityEngine::UIElements::UxmlAttributeDescription::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6af1cf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(),
                                                                               "get_name", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription.set_name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UxmlAttributeDescription::*)(::StringW)>(
    &::UnityEngine::UIElements::UxmlAttributeDescription::set_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6af1d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(), "set_name",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription.set_obsoleteNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UxmlAttributeDescription::*)(
    ::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&::UnityEngine::UIElements::UxmlAttributeDescription::set_obsoleteNames)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6af1d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(), "set_obsoleteNames", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription.set_type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UxmlAttributeDescription::*)(::StringW)>(
    &::UnityEngine::UIElements::UxmlAttributeDescription::set_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6af1d90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(), "set_type",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription.set_typeNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UxmlAttributeDescription::*)(::StringW)>(
    &::UnityEngine::UIElements::UxmlAttributeDescription::set_typeNamespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6af1d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(), "set_typeNamespace",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription.set_use
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UxmlAttributeDescription::*)(
    ::UnityEngine::UIElements::UxmlAttributeDescription_Use)>(&::UnityEngine::UIElements::UxmlAttributeDescription::set_use)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6af1da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(), "set_use", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UxmlAttributeDescription_Use>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription.set_restriction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UxmlAttributeDescription::*)(::UnityEngine::UIElements::UxmlTypeRestriction*)>(
    &::UnityEngine::UIElements::UxmlAttributeDescription::set_restriction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6af1da8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(), "set_restriction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UxmlTypeRestriction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription.TryFindValueInAttributeOverrides
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UxmlAttributeDescription::*)(
    ::StringW, ::UnityEngine::UIElements::CreationContext, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>*, ::ByRef<::StringW>)>(
    &::UnityEngine::UIElements::UxmlAttributeDescription::TryFindValueInAttributeOverrides)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x6af1db0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(), "TryFindValueInAttributeOverrides",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription.TryGetValueFromBagAsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UxmlAttributeDescription::*)(
    ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext, ::ByRef<::StringW>)>(&::UnityEngine::UIElements::UxmlAttributeDescription::TryGetValueFromBagAsString)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6af2038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(), "TryGetValueFromBagAsString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription.TryGetAttributeOverrideValueFromBagAsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UxmlAttributeDescription::*)(
    ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext, ::ByRef<::StringW>, ::ByRef<::UnityEngine::UIElements::VisualTreeAsset*>)>(
    &::UnityEngine::UIElements::UxmlAttributeDescription::TryGetAttributeOverrideValueFromBagAsString)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x6af23b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(), "TryGetAttributeOverrideValueFromBagAsString",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::VisualTreeAsset*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription.ValidateName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UxmlAttributeDescription::*)()>(
    &::UnityEngine::UIElements::UxmlAttributeDescription::ValidateName)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6af25fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(),
                                                                               "ValidateName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeDescription.TryGetValueFromBagAsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UxmlAttributeDescription::*)(
    ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext, ::ByRef<::StringW>, ::ByRef<::UnityEngine::UIElements::VisualTreeAsset*>)>(
    &::UnityEngine::UIElements::UxmlAttributeDescription::TryGetValueFromBagAsString)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x6af2074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(), "TryGetValueFromBagAsString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::VisualTreeAsset*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_get__name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_get__name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name_k__BackingField;
}
constexpr void UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_set__name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____name_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_get_m_ObsoleteNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ObsoleteNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_get_m_ObsoleteNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ObsoleteNames;
}
constexpr void UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_set_m_ObsoleteNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ObsoleteNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_get__type_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type_k__BackingField;
}
constexpr ::StringW const& UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_get__type_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type_k__BackingField;
}
constexpr void UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_set__type_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____type_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_get__typeNamespace_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeNamespace_k__BackingField;
}
constexpr ::StringW const& UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_get__typeNamespace_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeNamespace_k__BackingField;
}
constexpr void UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_set__typeNamespace_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____typeNamespace_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlAttributeDescription_Use& UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_get__use_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____use_k__BackingField;
}
constexpr ::UnityEngine::UIElements::UxmlAttributeDescription_Use const& UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_get__use_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____use_k__BackingField;
}
constexpr void UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_set__use_k__BackingField(::UnityEngine::UIElements::UxmlAttributeDescription_Use value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____use_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::UxmlTypeRestriction*& UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_get__restriction_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____restriction_k__BackingField;
}
constexpr ::UnityEngine::UIElements::UxmlTypeRestriction* const& UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_get__restriction_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____restriction_k__BackingField;
}
constexpr void UnityEngine::UIElements::UxmlAttributeDescription::__cordl_internal_set__restriction_k__BackingField(::UnityEngine::UIElements::UxmlTypeRestriction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____restriction_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::UxmlAttributeDescription::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::UxmlAttributeDescription::get_name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(),
                                                                             "get_name", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UxmlAttributeDescription::set_name(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(), "set_name",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UxmlAttributeDescription::set_obsoleteNames(::System::Collections::Generic::IEnumerable_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(), "set_obsoleteNames", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UxmlAttributeDescription::set_type(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(), "set_type",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UxmlAttributeDescription::set_typeNamespace(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(), "set_typeNamespace",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UxmlAttributeDescription::set_use(::UnityEngine::UIElements::UxmlAttributeDescription_Use value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(), "set_use", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UxmlAttributeDescription_Use>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UxmlAttributeDescription::set_restriction(::UnityEngine::UIElements::UxmlTypeRestriction* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(), "set_restriction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UxmlTypeRestriction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::UxmlAttributeDescription::TryFindValueInAttributeOverrides(
    ::StringW elementName, ::UnityEngine::UIElements::CreationContext cc, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>* attributeOverrides,
    ::ByRef<::StringW> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(), "TryFindValueInAttributeOverrides", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TemplateAsset_AttributeOverride>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, elementName, cc, attributeOverrides, value);
}
inline bool UnityEngine::UIElements::UxmlAttributeDescription::TryGetValueFromBagAsString(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc,
                                                                                          ::ByRef<::StringW> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(), "TryGetValueFromBagAsString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bag, cc, value);
}
inline bool UnityEngine::UIElements::UxmlAttributeDescription::TryGetAttributeOverrideValueFromBagAsString(::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                                                           ::UnityEngine::UIElements::CreationContext cc, ::ByRef<::StringW> value,
                                                                                                           ::ByRef<::UnityEngine::UIElements::VisualTreeAsset*> sourceAsset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(), "TryGetAttributeOverrideValueFromBagAsString",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::VisualTreeAsset*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bag, cc, value, sourceAsset);
}
inline bool UnityEngine::UIElements::UxmlAttributeDescription::ValidateName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(),
                                                                             "ValidateName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UxmlAttributeDescription::TryGetValueFromBagAsString(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc,
                                                                                          ::ByRef<::StringW> value, ::ByRef<::UnityEngine::UIElements::VisualTreeAsset*> sourceAsset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(), "TryGetValueFromBagAsString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::VisualTreeAsset*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bag, cc, value, sourceAsset);
}
template <typename T>
inline bool UnityEngine::UIElements::UxmlAttributeDescription::TryGetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc,
                                                                                  ::System::Func_3<::StringW, T, T>* converterFunc, T defaultValue, ::ByRef<T> value) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(), "TryGetValueFromBag",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<::StringW, T, T>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bag, cc, converterFunc, defaultValue, value);
}
template <typename T>
inline T UnityEngine::UIElements::UxmlAttributeDescription::GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc,
                                                                            ::System::Func_3<::StringW, T, T>* converterFunc, T defaultValue) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlAttributeDescription*>::get(), "GetValueFromBag",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<::StringW, T, T>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, bag, cc, converterFunc, defaultValue);
}
inline ::UnityEngine::UIElements::UxmlAttributeDescription* UnityEngine::UIElements::UxmlAttributeDescription::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UxmlAttributeDescription*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlAttributeDescription::UxmlAttributeDescription() {}
