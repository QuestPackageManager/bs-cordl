#pragma once
// IWYU pragma private; include "System/Reflection/ConstructorInfo.hpp"
#include "System/Reflection/zzzz__MethodBase_impl.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__MemberTypes_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Reflection::ConstructorInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::ConstructorInfo::*)()>(&::System::Reflection::ConstructorInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b7b6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::ConstructorInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ConstructorInfo.get_MemberType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MemberTypes (::System::Reflection::ConstructorInfo::*)()>(&::System::Reflection::ConstructorInfo::get_MemberType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b7b6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::ConstructorInfo*>(), { ::i2c::class_of<::System::Reflection::ConstructorInfo*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ConstructorInfo.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Reflection::ConstructorInfo::*)(::ArrayW<::System::Object*>)>(&::System::Reflection::ConstructorInfo::Invoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b7b6c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::ConstructorInfo*>(), { "Invoke", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ConstructorInfo.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Reflection::ConstructorInfo::*)(::System::Reflection::BindingFlags, ::System::Reflection::Binder*,
                                                                                                                    ::ArrayW<::System::Object*>, ::System::Globalization::CultureInfo*)>(
    &::System::Reflection::ConstructorInfo::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::ConstructorInfo*>(), { ::i2c::class_of<::System::Reflection::ConstructorInfo*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ConstructorInfo.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::ConstructorInfo::*)(::System::Object*)>(&::System::Reflection::ConstructorInfo::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b7b6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::ConstructorInfo*>(), { ::i2c::class_of<::System::Reflection::ConstructorInfo*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ConstructorInfo.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Reflection::ConstructorInfo::*)()>(&::System::Reflection::ConstructorInfo::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b7b700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::ConstructorInfo*>(), { ::i2c::class_of<::System::Reflection::ConstructorInfo*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ConstructorInfo.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::ConstructorInfo*, ::System::Reflection::ConstructorInfo*)>(&::System::Reflection::ConstructorInfo::op_Equality)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b7b728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::ConstructorInfo*>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::System::Reflection::ConstructorInfo*>(), ::i2c::type_of<::System::Reflection::ConstructorInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ConstructorInfo.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::ConstructorInfo*, ::System::Reflection::ConstructorInfo*)>(
    &::System::Reflection::ConstructorInfo::op_Inequality)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b7b754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::ConstructorInfo*>(),
                                                { "op_Inequality", {}, { ::i2c::type_of<::System::Reflection::ConstructorInfo*>(), ::i2c::type_of<::System::Reflection::ConstructorInfo*>() } })));
    return ___internal_method;
  }
};
inline void System::Reflection::ConstructorInfo::setStaticF_ConstructorName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ConstructorName", ::System::Reflection::ConstructorInfo*>(std::forward<::StringW>(value));
}
inline ::StringW System::Reflection::ConstructorInfo::getStaticF_ConstructorName() {
  return ::cordl_internals::getStaticField<::StringW, "ConstructorName", ::System::Reflection::ConstructorInfo*>();
}
inline void System::Reflection::ConstructorInfo::setStaticF_TypeConstructorName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "TypeConstructorName", ::System::Reflection::ConstructorInfo*>(std::forward<::StringW>(value));
}
inline ::StringW System::Reflection::ConstructorInfo::getStaticF_TypeConstructorName() {
  return ::cordl_internals::getStaticField<::StringW, "TypeConstructorName", ::System::Reflection::ConstructorInfo*>();
}
inline void System::Reflection::ConstructorInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::ConstructorInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Reflection::MemberTypes System::Reflection::ConstructorInfo::get_MemberType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::ConstructorInfo*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberTypes>(this, ___internal_method);
}
inline ::System::Object* System::Reflection::ConstructorInfo::Invoke(::ArrayW<::System::Object*> parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::ConstructorInfo*>(), { "Invoke", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, parameters);
}
inline ::System::Object* System::Reflection::ConstructorInfo::Invoke(::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::ArrayW<::System::Object*> parameters,
                                                                     ::System::Globalization::CultureInfo* culture) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::ConstructorInfo*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, invokeAttr, binder, parameters, culture);
}
inline bool System::Reflection::ConstructorInfo::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::ConstructorInfo*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::Reflection::ConstructorInfo::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::ConstructorInfo*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Reflection::ConstructorInfo::op_Equality(::System::Reflection::ConstructorInfo* left, ::System::Reflection::ConstructorInfo* right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::ConstructorInfo*>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::System::Reflection::ConstructorInfo*>(), ::i2c::type_of<::System::Reflection::ConstructorInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool System::Reflection::ConstructorInfo::op_Inequality(::System::Reflection::ConstructorInfo* left, ::System::Reflection::ConstructorInfo* right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::ConstructorInfo*>(),
                                              { "op_Inequality", {}, { ::i2c::type_of<::System::Reflection::ConstructorInfo*>(), ::i2c::type_of<::System::Reflection::ConstructorInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline ::System::Reflection::ConstructorInfo* System::Reflection::ConstructorInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::ConstructorInfo*>());
}
// Ctor Parameters []
constexpr ::System::Reflection::ConstructorInfo::ConstructorInfo() {}
