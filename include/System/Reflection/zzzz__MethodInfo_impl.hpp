#pragma once
// IWYU pragma private; include "System/Reflection/MethodInfo.hpp"
#include "System/Reflection/zzzz__MethodBase_impl.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__MemberTypes_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::MethodInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Reflection::MethodInfo::*)()>(&::System::Reflection::MethodInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b7dc20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MethodInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodInfo.get_MemberType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MemberTypes (::System::Reflection::MethodInfo::*)()>(&::System::Reflection::MethodInfo::get_MemberType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b7dc24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::MethodInfo*>(), { ::i2c::class_of<::System::Reflection::MethodInfo*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodInfo.get_ReturnParameter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::ParameterInfo* (::System::Reflection::MethodInfo::*)()>(&::System::Reflection::MethodInfo::get_ReturnParameter)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b7dc2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::MethodInfo*>(), { ::i2c::class_of<::System::Reflection::MethodInfo*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodInfo.get_ReturnType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::MethodInfo::*)()>(&::System::Reflection::MethodInfo::get_ReturnType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b7dc54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::MethodInfo*>(), { ::i2c::class_of<::System::Reflection::MethodInfo*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodInfo.GetGenericArguments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::System::Reflection::MethodInfo::*)()>(&::System::Reflection::MethodInfo::GetGenericArguments)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5b7dc7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::MethodInfo*>(), { ::i2c::class_of<::System::Reflection::MethodInfo*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodInfo.GetGenericMethodDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::MethodInfo::*)()>(&::System::Reflection::MethodInfo::GetGenericMethodDefinition)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5b7dcc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::MethodInfo*>(), { ::i2c::class_of<::System::Reflection::MethodInfo*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodInfo.MakeGenericMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::MethodInfo::*)(::ArrayW<::System::Type*>)>(
    &::System::Reflection::MethodInfo::MakeGenericMethod)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5b7dd14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::MethodInfo*>(), { ::i2c::class_of<::System::Reflection::MethodInfo*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodInfo.GetBaseDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::MethodInfo::*)()>(&::System::Reflection::MethodInfo::GetBaseDefinition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::MethodInfo*>(), { ::i2c::class_of<::System::Reflection::MethodInfo*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodInfo.CreateDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Delegate* (::System::Reflection::MethodInfo::*)(::System::Type*)>(&::System::Reflection::MethodInfo::CreateDelegate)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5b7dd60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::MethodInfo*>(), { ::i2c::class_of<::System::Reflection::MethodInfo*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodInfo.CreateDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Delegate* (::System::Reflection::MethodInfo::*)(::System::Type*, ::System::Object*)>(
    &::System::Reflection::MethodInfo::CreateDelegate)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5b7ddac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::MethodInfo*>(), { ::i2c::class_of<::System::Reflection::MethodInfo*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodInfo.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::MethodInfo::*)(::System::Object*)>(&::System::Reflection::MethodInfo::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b7ddf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::MethodInfo*>(), { ::i2c::class_of<::System::Reflection::MethodInfo*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodInfo.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Reflection::MethodInfo::*)()>(&::System::Reflection::MethodInfo::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b7de04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::MethodInfo*>(), { ::i2c::class_of<::System::Reflection::MethodInfo*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodInfo.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*)>(&::System::Reflection::MethodInfo::op_Equality)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b7d5b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MethodInfo*>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodInfo.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*)>(&::System::Reflection::MethodInfo::op_Inequality)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5b7d574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MethodInfo*>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::MethodInfo.get_GenericParameterCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Reflection::MethodInfo::*)()>(&::System::Reflection::MethodInfo::get_GenericParameterCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b7de18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Reflection::MethodInfo*>(), { ::i2c::class_of<::System::Reflection::MethodInfo*>(), 48 }));
    return ___internal_method;
  }
};
inline void System::Reflection::MethodInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MethodInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Reflection::MemberTypes System::Reflection::MethodInfo::get_MemberType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::MethodInfo*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberTypes>(this, ___internal_method);
}
inline ::System::Reflection::ParameterInfo* System::Reflection::MethodInfo::get_ReturnParameter() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::MethodInfo*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ParameterInfo*>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::MethodInfo::get_ReturnType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::MethodInfo*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::ArrayW<::System::Type*> System::Reflection::MethodInfo::GetGenericArguments() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::MethodInfo*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Reflection::MethodInfo::GetGenericMethodDefinition() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::MethodInfo*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Reflection::MethodInfo::MakeGenericMethod(::ArrayW<::System::Type*> typeArguments) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::MethodInfo*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method, typeArguments);
}
inline ::System::Reflection::MethodInfo* System::Reflection::MethodInfo::GetBaseDefinition() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::MethodInfo*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Delegate* System::Reflection::MethodInfo::CreateDelegate(::System::Type* delegateType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::MethodInfo*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(this, ___internal_method, delegateType);
}
inline ::System::Delegate* System::Reflection::MethodInfo::CreateDelegate(::System::Type* delegateType, ::System::Object* target) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::MethodInfo*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(this, ___internal_method, delegateType, target);
}
inline bool System::Reflection::MethodInfo::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::MethodInfo*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::Reflection::MethodInfo::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::MethodInfo*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Reflection::MethodInfo::op_Equality(::System::Reflection::MethodInfo* left, ::System::Reflection::MethodInfo* right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MethodInfo*>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool System::Reflection::MethodInfo::op_Inequality(::System::Reflection::MethodInfo* left, ::System::Reflection::MethodInfo* right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Reflection::MethodInfo*>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline int32_t System::Reflection::MethodInfo::get_GenericParameterCount() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Reflection::MethodInfo*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Reflection::MethodInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Reflection::MethodInfo*>());
}
// Ctor Parameters []
constexpr ::System::Reflection::MethodInfo::MethodInfo() {}
