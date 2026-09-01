#pragma once
// IWYU pragma private; include "System\Reflection\TypeInfo.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "System/Reflection/zzzz__TypeInfo_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Reflection/zzzz__IReflectableType_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::TypeInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::TypeInfo::*)()>(&::System::Reflection::TypeInfo::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b83f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::TypeInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeInfo.System_Reflection_IReflectableType_GetTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::TypeInfo* (::System::Reflection::TypeInfo::*)()>(
    &::System::Reflection::TypeInfo::System_Reflection_IReflectableType_GetTypeInfo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b8457c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::TypeInfo*>(), { "System.Reflection.IReflectableType.GetTypeInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::TypeInfo.get_ImplementedInterfaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (::System::Reflection::TypeInfo::*)()>(
    &::System::Reflection::TypeInfo::get_ImplementedInterfaces)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b84580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::TypeInfo*>(), { ::i2c::class_of<::System::Reflection::TypeInfo*>(), 137 }));
    return ___internal_method;
  }
};
inline void System::Reflection::TypeInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::TypeInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Reflection::TypeInfo* System::Reflection::TypeInfo::System_Reflection_IReflectableType_GetTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::TypeInfo*>(), { "System.Reflection.IReflectableType.GetTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::TypeInfo*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* System::Reflection::TypeInfo::get_ImplementedInterfaces() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::TypeInfo*>(), 137 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(this, ___internal_method);
}
inline ::System::Reflection::TypeInfo* System::Reflection::TypeInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::TypeInfo*>());
}
/// @brief Convert operator to "::System::Reflection::IReflectableType"
constexpr System::Reflection::TypeInfo::operator ::System::Reflection::IReflectableType*() noexcept {
  return static_cast<::System::Reflection::IReflectableType*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Reflection::IReflectableType"
constexpr ::System::Reflection::IReflectableType* System::Reflection::TypeInfo::i___System__Reflection__IReflectableType() noexcept {
  return static_cast<::System::Reflection::IReflectableType*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Reflection::TypeInfo::TypeInfo() {}
