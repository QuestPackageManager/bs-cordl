#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialPropertyValuesSetter.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyValuesSetter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyValuesSetter_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyValuesSetter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase.get_propertyId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::*)()>(
    &::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::get_propertyId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x252599c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase*>::get(),
                                                 "get_propertyId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase.set_propertyId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::*)(int32_t)>(
    &::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::set_propertyId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25259a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase*>::get(), "set_propertyId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::*)()>(
    &::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25259ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase.RefreshPropertyId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::*)()>(
    &::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::RefreshPropertyId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2525974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase*>::get(),
                                                 "RefreshPropertyId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::__cordl_internal_get__propertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyName;
}
constexpr ::StringW const& GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::__cordl_internal_get__propertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyName;
}
constexpr void GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::__cordl_internal_set__propertyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____propertyName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::__cordl_internal_get__propertyId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyId_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::__cordl_internal_get__propertyId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyId_k__BackingField;
}
constexpr void GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::__cordl_internal_set__propertyId_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____propertyId_k__BackingField = value;
}
inline int32_t GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::get_propertyId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase*>::get(),
                                               "get_propertyId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::set_propertyId(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase*>::get(), "set_propertyId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase* GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase*>());
}
inline void GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::RefreshPropertyId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase*>::get(),
                                               "RefreshPropertyId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::__MaterialPropertyValuesSetter__PropertyValuePairBase() {}
//  Writing Method size for method: ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair::*)()>(
    &::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25259d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr float_t const& GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair::__cordl_internal_set_value(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
inline ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair* GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*>());
}
inline void GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair() {}
//  Writing Method size for method: ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair::*)()>(
    &::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25259fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr int32_t const& GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair::__cordl_internal_set_value(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
inline ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair* GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*>());
}
inline void GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair::__MaterialPropertyValuesSetter__PropertyNameIntValuePair() {}
//  Writing Method size for method: ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair::*)()>(
    &::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2525a24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector4& GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair::__cordl_internal_get_vector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vector;
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair::__cordl_internal_get_vector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vector;
}
constexpr void GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair::__cordl_internal_set_vector(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vector = value;
}
inline ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair* GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*>());
}
inline void GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair() {}
//  Writing Method size for method: ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair::*)()>(
    &::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2525a4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair::__cordl_internal_get_color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair::__cordl_internal_get_color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___color;
}
constexpr void GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair::__cordl_internal_set_color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___color = value;
}
inline ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair* GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*>());
}
inline void GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair::__MaterialPropertyValuesSetter__PropertyNameColorValuePair() {}
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyValuesSetter.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialPropertyValuesSetter::*)()>(
    &::GlobalNamespace::MaterialPropertyValuesSetter::Start)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x25255c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyValuesSetter*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyValuesSetter.OnValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialPropertyValuesSetter::*)()>(
    &::GlobalNamespace::MaterialPropertyValuesSetter::OnValidate)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x25258dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyValuesSetter*>::get(),
                                                                               "OnValidate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyValuesSetter.RefreshPropertyIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialPropertyValuesSetter::*)()>(
    &::GlobalNamespace::MaterialPropertyValuesSetter::RefreshPropertyIds)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x25255e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyValuesSetter*>::get(),
                                                                               "RefreshPropertyIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyValuesSetter.ApplyParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialPropertyValuesSetter::*)()>(
    &::GlobalNamespace::MaterialPropertyValuesSetter::ApplyParams)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2525738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyValuesSetter*>::get(),
                                                                               "ApplyParams", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyValuesSetter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialPropertyValuesSetter::*)()>(
    &::GlobalNamespace::MaterialPropertyValuesSetter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2525994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyValuesSetter*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& GlobalNamespace::MaterialPropertyValuesSetter::__cordl_internal_get__materialPropertyBlockController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& GlobalNamespace::MaterialPropertyValuesSetter::__cordl_internal_get__materialPropertyBlockController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr void GlobalNamespace::MaterialPropertyValuesSetter::__cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialPropertyBlockController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*>*>&
GlobalNamespace::MaterialPropertyValuesSetter::__cordl_internal_get__floats() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floats;
}
constexpr ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*>*> const&
GlobalNamespace::MaterialPropertyValuesSetter::__cordl_internal_get__floats() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floats;
}
constexpr void GlobalNamespace::MaterialPropertyValuesSetter::__cordl_internal_set__floats(
    ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____floats)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*>*>&
GlobalNamespace::MaterialPropertyValuesSetter::__cordl_internal_get__vectors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vectors;
}
constexpr ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*>*> const&
GlobalNamespace::MaterialPropertyValuesSetter::__cordl_internal_get__vectors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vectors;
}
constexpr void GlobalNamespace::MaterialPropertyValuesSetter::__cordl_internal_set__vectors(
    ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vectors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*>*>&
GlobalNamespace::MaterialPropertyValuesSetter::__cordl_internal_get__colors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*>*> const&
GlobalNamespace::MaterialPropertyValuesSetter::__cordl_internal_get__colors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr void GlobalNamespace::MaterialPropertyValuesSetter::__cordl_internal_set__colors(
    ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*>*>&
GlobalNamespace::MaterialPropertyValuesSetter::__cordl_internal_get__ints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ints;
}
constexpr ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*>*> const&
GlobalNamespace::MaterialPropertyValuesSetter::__cordl_internal_get__ints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ints;
}
constexpr void GlobalNamespace::MaterialPropertyValuesSetter::__cordl_internal_set__ints(
    ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ints)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MaterialPropertyValuesSetter::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyValuesSetter*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyValuesSetter::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyValuesSetter*>::get(),
                                                                             "OnValidate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyValuesSetter::RefreshPropertyIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyValuesSetter*>::get(),
                                                                             "RefreshPropertyIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyValuesSetter::ApplyParams() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyValuesSetter*>::get(),
                                                                             "ApplyParams", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MaterialPropertyValuesSetter* GlobalNamespace::MaterialPropertyValuesSetter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MaterialPropertyValuesSetter*>());
}
inline void GlobalNamespace::MaterialPropertyValuesSetter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyValuesSetter*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialPropertyValuesSetter::MaterialPropertyValuesSetter() {}
