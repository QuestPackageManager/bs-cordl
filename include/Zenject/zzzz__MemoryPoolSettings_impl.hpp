#pragma once
// IWYU pragma private; include "Zenject/MemoryPoolSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__PoolExpandMethods_impl.hpp"
#include "Zenject/zzzz__MemoryPoolSettings_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__PoolExpandMethods_def.hpp"
//  Writing Method size for method: ::Zenject::MemoryPoolSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::MemoryPoolSettings::*)()>(&::Zenject::MemoryPoolSettings::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x4b23310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolSettings*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::MemoryPoolSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::MemoryPoolSettings::*)(int32_t, int32_t, ::Zenject::PoolExpandMethods, bool)>(
    &::Zenject::MemoryPoolSettings::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4b23340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolSettings*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::PoolExpandMethods>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::MemoryPoolSettings.__zenCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Zenject::MemoryPoolSettings::__zenCreate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x4b233f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolSettings*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::MemoryPoolSettings.__zenCreateInjectTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::MemoryPoolSettings::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x4b23464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolSettings*>::get(),
                                                                               "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& Zenject::MemoryPoolSettings::__cordl_internal_get_InitialSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InitialSize;
}
constexpr int32_t const& Zenject::MemoryPoolSettings::__cordl_internal_get_InitialSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InitialSize;
}
constexpr void Zenject::MemoryPoolSettings::__cordl_internal_set_InitialSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InitialSize = value;
}
constexpr int32_t& Zenject::MemoryPoolSettings::__cordl_internal_get_MaxSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxSize;
}
constexpr int32_t const& Zenject::MemoryPoolSettings::__cordl_internal_get_MaxSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxSize;
}
constexpr void Zenject::MemoryPoolSettings::__cordl_internal_set_MaxSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MaxSize = value;
}
constexpr ::Zenject::PoolExpandMethods& Zenject::MemoryPoolSettings::__cordl_internal_get_ExpandMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExpandMethod;
}
constexpr ::Zenject::PoolExpandMethods const& Zenject::MemoryPoolSettings::__cordl_internal_get_ExpandMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExpandMethod;
}
constexpr void Zenject::MemoryPoolSettings::__cordl_internal_set_ExpandMethod(::Zenject::PoolExpandMethods value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ExpandMethod = value;
}
constexpr bool& Zenject::MemoryPoolSettings::__cordl_internal_get_ShowExpandWarning() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ShowExpandWarning;
}
constexpr bool const& Zenject::MemoryPoolSettings::__cordl_internal_get_ShowExpandWarning() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ShowExpandWarning;
}
constexpr void Zenject::MemoryPoolSettings::__cordl_internal_set_ShowExpandWarning(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ShowExpandWarning = value;
}
inline void Zenject::MemoryPoolSettings::setStaticF_Default(::Zenject::MemoryPoolSettings* value) {
  ::cordl_internals::setStaticField<::Zenject::MemoryPoolSettings*, "Default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolSettings*>::get>(
      std::forward<::Zenject::MemoryPoolSettings*>(value));
}
inline ::Zenject::MemoryPoolSettings* Zenject::MemoryPoolSettings::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::Zenject::MemoryPoolSettings*, "Default", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolSettings*>::get>();
}
inline void Zenject::MemoryPoolSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolSettings*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Zenject::MemoryPoolSettings::_ctor(int32_t initialSize, int32_t maxSize, ::Zenject::PoolExpandMethods expandMethod, bool showExpandWarning) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolSettings*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::PoolExpandMethods>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialSize, maxSize, expandMethod, showExpandWarning);
}
inline ::System::Object* Zenject::MemoryPoolSettings::__zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolSettings*>::get(), "__zenCreate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::MemoryPoolSettings::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolSettings*>::get(), "__zenCreateInjectTypeInfo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
inline ::Zenject::MemoryPoolSettings* Zenject::MemoryPoolSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::MemoryPoolSettings*>());
}
inline ::Zenject::MemoryPoolSettings* Zenject::MemoryPoolSettings::New_ctor(int32_t initialSize, int32_t maxSize, ::Zenject::PoolExpandMethods expandMethod, bool showExpandWarning) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::MemoryPoolSettings*>(initialSize, maxSize, expandMethod, showExpandWarning));
}
// Ctor Parameters []
constexpr ::Zenject::MemoryPoolSettings::MemoryPoolSettings() {}
