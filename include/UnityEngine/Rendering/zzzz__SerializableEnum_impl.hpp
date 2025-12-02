#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SerializableEnum.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SerializableEnum_def.hpp"
#include "System/zzzz__Enum_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::SerializableEnum.get_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Enum* (::UnityEngine::Rendering::SerializableEnum::*)()>(
    &::UnityEngine::Rendering::SerializableEnum::get_value)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x653a5fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SerializableEnum*>::get(), "get_value",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SerializableEnum.set_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::SerializableEnum::*)(::System::Enum*)>(
    &::UnityEngine::Rendering::SerializableEnum::set_value)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x653a714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SerializableEnum*>::get(), "set_value", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Enum*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SerializableEnum._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::SerializableEnum::*)(::System::Type*)>(
    &::UnityEngine::Rendering::SerializableEnum::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x653a744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SerializableEnum*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Rendering::SerializableEnum::__cordl_internal_get_m_EnumValueAsString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnumValueAsString;
}
constexpr ::StringW const& UnityEngine::Rendering::SerializableEnum::__cordl_internal_get_m_EnumValueAsString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnumValueAsString;
}
constexpr void UnityEngine::Rendering::SerializableEnum::__cordl_internal_set_m_EnumValueAsString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_EnumValueAsString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::Rendering::SerializableEnum::__cordl_internal_get_m_EnumTypeAsString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnumTypeAsString;
}
constexpr ::StringW const& UnityEngine::Rendering::SerializableEnum::__cordl_internal_get_m_EnumTypeAsString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnumTypeAsString;
}
constexpr void UnityEngine::Rendering::SerializableEnum::__cordl_internal_set_m_EnumTypeAsString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_EnumTypeAsString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Enum* UnityEngine::Rendering::SerializableEnum::get_value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SerializableEnum*>::get(), "get_value",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Enum*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::SerializableEnum::set_value(::System::Enum* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SerializableEnum*>::get(), "set_value", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Enum*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::SerializableEnum::_ctor(::System::Type* enumType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SerializableEnum*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enumType);
}
inline ::UnityEngine::Rendering::SerializableEnum* UnityEngine::Rendering::SerializableEnum::New_ctor(::System::Type* enumType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::SerializableEnum*>(enumType));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SerializableEnum::SerializableEnum() {}
