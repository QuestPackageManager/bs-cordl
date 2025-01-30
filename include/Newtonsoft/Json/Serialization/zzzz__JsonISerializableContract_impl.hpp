#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/JsonISerializableContract.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContainerContract_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonISerializableContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ObjectConstructor_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonISerializableContract.get_ISerializableCreator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* (
    ::Newtonsoft::Json::Serialization::JsonISerializableContract::*)()>(&::Newtonsoft::Json::Serialization::JsonISerializableContract::get_ISerializableCreator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ee96e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonISerializableContract*>::get(),
                                                 "get_ISerializableCreator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonISerializableContract.set_ISerializableCreator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonISerializableContract::*)(
    ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*)>(&::Newtonsoft::Json::Serialization::JsonISerializableContract::set_ISerializableCreator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ee96ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonISerializableContract*>::get(), "set_ISerializableCreator",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonISerializableContract._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::JsonISerializableContract::*)(::System::Type*)>(
    &::Newtonsoft::Json::Serialization::JsonISerializableContract::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3ee2d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonISerializableContract*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*&
Newtonsoft::Json::Serialization::JsonISerializableContract::__cordl_internal_get__ISerializableCreator_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ISerializableCreator_k__BackingField;
}
constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* const&
Newtonsoft::Json::Serialization::JsonISerializableContract::__cordl_internal_get__ISerializableCreator_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ISerializableCreator_k__BackingField;
}
constexpr void Newtonsoft::Json::Serialization::JsonISerializableContract::__cordl_internal_set__ISerializableCreator_k__BackingField(
    ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ISerializableCreator_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* Newtonsoft::Json::Serialization::JsonISerializableContract::get_ISerializableCreator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonISerializableContract*>::get(), "get_ISerializableCreator",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonISerializableContract::set_ISerializableCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonISerializableContract*>::get(), "set_ISerializableCreator",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::JsonISerializableContract::_ctor(::System::Type* underlyingType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::JsonISerializableContract*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, underlyingType);
}
inline ::Newtonsoft::Json::Serialization::JsonISerializableContract* Newtonsoft::Json::Serialization::JsonISerializableContract::New_ctor(::System::Type* underlyingType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Serialization::JsonISerializableContract*>(underlyingType));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::JsonISerializableContract::JsonISerializableContract() {}
