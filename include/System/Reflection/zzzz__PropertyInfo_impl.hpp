#pragma once
// IWYU pragma private; include "System\Reflection\PropertyInfo.hpp"
#include "System/Reflection/zzzz__MemberInfo_impl.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__MemberTypes_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::PropertyInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::PropertyInfo::*)()>(&::System::Reflection::PropertyInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b81010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::PropertyInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::PropertyInfo.get_MemberType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MemberTypes (::System::Reflection::PropertyInfo::*)()>(&::System::Reflection::PropertyInfo::get_MemberType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b81014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::PropertyInfo*>(), { ::i2c::class_of<::System::Reflection::PropertyInfo*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::PropertyInfo.get_PropertyType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::PropertyInfo::*)()>(&::System::Reflection::PropertyInfo::get_PropertyType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::PropertyInfo*>(), { ::i2c::class_of<::System::Reflection::PropertyInfo*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::PropertyInfo.GetIndexParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::ParameterInfo*> (::System::Reflection::PropertyInfo::*)()>(
    &::System::Reflection::PropertyInfo::GetIndexParameters)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::PropertyInfo*>(), { ::i2c::class_of<::System::Reflection::PropertyInfo*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::PropertyInfo.get_CanRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::PropertyInfo::*)()>(&::System::Reflection::PropertyInfo::get_CanRead)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::PropertyInfo*>(), { ::i2c::class_of<::System::Reflection::PropertyInfo*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::PropertyInfo.get_CanWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::PropertyInfo::*)()>(&::System::Reflection::PropertyInfo::get_CanWrite)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::PropertyInfo*>(), { ::i2c::class_of<::System::Reflection::PropertyInfo*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::PropertyInfo.get_GetMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::PropertyInfo::*)()>(&::System::Reflection::PropertyInfo::get_GetMethod)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b8101c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::PropertyInfo*>(), { ::i2c::class_of<::System::Reflection::PropertyInfo*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::PropertyInfo.GetGetMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::PropertyInfo::*)()>(&::System::Reflection::PropertyInfo::GetGetMethod)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b81030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::PropertyInfo*>(), { "GetGetMethod", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::PropertyInfo.GetGetMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::PropertyInfo::*)(bool)>(&::System::Reflection::PropertyInfo::GetGetMethod)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::PropertyInfo*>(), { ::i2c::class_of<::System::Reflection::PropertyInfo*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::PropertyInfo.get_SetMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::PropertyInfo::*)()>(&::System::Reflection::PropertyInfo::get_SetMethod)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b81044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::PropertyInfo*>(), { ::i2c::class_of<::System::Reflection::PropertyInfo*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::PropertyInfo.GetSetMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::PropertyInfo::*)()>(&::System::Reflection::PropertyInfo::GetSetMethod)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b81058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::PropertyInfo*>(), { "GetSetMethod", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::PropertyInfo.GetSetMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::PropertyInfo::*)(bool)>(&::System::Reflection::PropertyInfo::GetSetMethod)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::PropertyInfo*>(), { ::i2c::class_of<::System::Reflection::PropertyInfo*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::PropertyInfo.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Reflection::PropertyInfo::*)(::System::Object*)>(&::System::Reflection::PropertyInfo::GetValue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b8106c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::PropertyInfo*>(), { "GetValue", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::PropertyInfo.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Reflection::PropertyInfo::*)(::System::Object*, ::ArrayW<::System::Object*>)>(
    &::System::Reflection::PropertyInfo::GetValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b81080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::PropertyInfo*>(), { ::i2c::class_of<::System::Reflection::PropertyInfo*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::PropertyInfo.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Reflection::PropertyInfo::*)(::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*,
                                                                                                                 ::ArrayW<::System::Object*>, ::System::Globalization::CultureInfo*)>(
    &::System::Reflection::PropertyInfo::GetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::PropertyInfo*>(), { ::i2c::class_of<::System::Reflection::PropertyInfo*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::PropertyInfo.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::PropertyInfo::*)(::System::Object*, ::System::Object*)>(&::System::Reflection::PropertyInfo::SetValue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b810a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Reflection::PropertyInfo*>(), { "SetValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::PropertyInfo.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::PropertyInfo::*)(::System::Object*, ::System::Object*, ::ArrayW<::System::Object*>)>(
    &::System::Reflection::PropertyInfo::SetValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b810b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::PropertyInfo*>(), { ::i2c::class_of<::System::Reflection::PropertyInfo*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::PropertyInfo.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::PropertyInfo::*)(::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags,
                                                                                                    ::System::Reflection::Binder*, ::ArrayW<::System::Object*>, ::System::Globalization::CultureInfo*)>(
    &::System::Reflection::PropertyInfo::SetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::PropertyInfo*>(), { ::i2c::class_of<::System::Reflection::PropertyInfo*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::PropertyInfo.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::PropertyInfo::*)(::System::Object*)>(&::System::Reflection::PropertyInfo::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b810d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::PropertyInfo*>(), { ::i2c::class_of<::System::Reflection::PropertyInfo*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::PropertyInfo.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Reflection::PropertyInfo::*)()>(&::System::Reflection::PropertyInfo::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b810e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::PropertyInfo*>(), { ::i2c::class_of<::System::Reflection::PropertyInfo*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::PropertyInfo.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::PropertyInfo*, ::System::Reflection::PropertyInfo*)>(&::System::Reflection::PropertyInfo::op_Equality)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b7f5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::PropertyInfo*>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::System::Reflection::PropertyInfo*>(), ::i2c::type_of<::System::Reflection::PropertyInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::PropertyInfo.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::PropertyInfo*, ::System::Reflection::PropertyInfo*)>(&::System::Reflection::PropertyInfo::op_Inequality)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5b7f5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::PropertyInfo*>(),
                                                { "op_Inequality", {}, { ::i2c::type_of<::System::Reflection::PropertyInfo*>(), ::i2c::type_of<::System::Reflection::PropertyInfo*>() } })));
    return ___internal_method;
  }
};
inline void System::Reflection::PropertyInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::PropertyInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Reflection::MemberTypes System::Reflection::PropertyInfo::get_MemberType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::PropertyInfo*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberTypes>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::PropertyInfo::get_PropertyType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::PropertyInfo*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::ParameterInfo*> System::Reflection::PropertyInfo::GetIndexParameters() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::PropertyInfo*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::ParameterInfo*>>(this, ___internal_method);
}
inline bool System::Reflection::PropertyInfo::get_CanRead() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::PropertyInfo*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::PropertyInfo::get_CanWrite() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::PropertyInfo*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Reflection::PropertyInfo::get_GetMethod() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::PropertyInfo*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Reflection::PropertyInfo::GetGetMethod() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::PropertyInfo*>(), { "GetGetMethod", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Reflection::PropertyInfo::GetGetMethod(bool nonPublic) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::PropertyInfo*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method, nonPublic);
}
inline ::System::Reflection::MethodInfo* System::Reflection::PropertyInfo::get_SetMethod() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::PropertyInfo*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Reflection::PropertyInfo::GetSetMethod() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::PropertyInfo*>(), { "GetSetMethod", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Reflection::PropertyInfo::GetSetMethod(bool nonPublic) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::PropertyInfo*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method, nonPublic);
}
inline ::System::Object* System::Reflection::PropertyInfo::GetValue(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::PropertyInfo*>(), { "GetValue", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj);
}
inline ::System::Object* System::Reflection::PropertyInfo::GetValue(::System::Object* obj, ::ArrayW<::System::Object*> index) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::PropertyInfo*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj, index);
}
inline ::System::Object* System::Reflection::PropertyInfo::GetValue(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                                                    ::ArrayW<::System::Object*> index, ::System::Globalization::CultureInfo* culture) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::PropertyInfo*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj, invokeAttr, binder, index, culture);
}
inline void System::Reflection::PropertyInfo::SetValue(::System::Object* obj, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Reflection::PropertyInfo*>(), { "SetValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, value);
}
inline void System::Reflection::PropertyInfo::SetValue(::System::Object* obj, ::System::Object* value, ::ArrayW<::System::Object*> index) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::PropertyInfo*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, value, index);
}
inline void System::Reflection::PropertyInfo::SetValue(::System::Object* obj, ::System::Object* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                                       ::ArrayW<::System::Object*> index, ::System::Globalization::CultureInfo* culture) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::PropertyInfo*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, value, invokeAttr, binder, index, culture);
}
inline bool System::Reflection::PropertyInfo::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::PropertyInfo*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::Reflection::PropertyInfo::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::PropertyInfo*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Reflection::PropertyInfo::op_Equality(::System::Reflection::PropertyInfo* left, ::System::Reflection::PropertyInfo* right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::PropertyInfo*>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::System::Reflection::PropertyInfo*>(), ::i2c::type_of<::System::Reflection::PropertyInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool System::Reflection::PropertyInfo::op_Inequality(::System::Reflection::PropertyInfo* left, ::System::Reflection::PropertyInfo* right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::PropertyInfo*>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::System::Reflection::PropertyInfo*>(), ::i2c::type_of<::System::Reflection::PropertyInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline ::System::Reflection::PropertyInfo* System::Reflection::PropertyInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::PropertyInfo*>());
}
// Ctor Parameters []
constexpr ::System::Reflection::PropertyInfo::PropertyInfo() {}
