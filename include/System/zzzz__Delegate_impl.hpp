#pragma once
// IWYU pragma private; include "System\Delegate.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__DelegateData_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Delegate.get_Method
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Delegate::*)()>(&::System::Delegate::get_Method)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c90720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "get_Method", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.GetVirtualMethod_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Delegate::*)()>(&::System::Delegate::GetVirtualMethod_internal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c9072c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "GetVirtualMethod_internal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.get_Target
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Delegate::*)()>(&::System::Delegate::get_Target)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c90730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "get_Target", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.CreateDelegate_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Delegate* (*)(::System::Type*, ::System::Object*, ::System::Reflection::MethodInfo*, bool)>(
    &::System::Delegate::CreateDelegate_internal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c90738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "CreateDelegate_internal",
                                                                                                       {},
                                                                                                       { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(),
                                                                                                         ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.arg_type_match
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::System::Delegate::arg_type_match)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5c9073c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "arg_type_match", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.arg_type_match_this
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*, bool)>(&::System::Delegate::arg_type_match_this)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5c908b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "arg_type_match_this", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.return_type_match
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::System::Delegate::return_type_match)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5c909c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "return_type_match", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.CreateDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Delegate* (*)(::System::Type*, ::System::Object*, ::System::Reflection::MethodInfo*, bool, bool)>(
    &::System::Delegate::CreateDelegate)> {
  constexpr static std::size_t size = 0x844;
  constexpr static std::size_t addrs = 0x5c90be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "CreateDelegate",
                                                                                          {},
                                                                                          { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(),
                                                                                            ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.CreateDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Delegate* (*)(::System::Type*, ::System::Object*, ::System::Reflection::MethodInfo*)>(&::System::Delegate::CreateDelegate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c9142c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Delegate*>(),
                                         { "CreateDelegate", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.CreateDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Delegate* (*)(::System::Type*, ::System::Reflection::MethodInfo*, bool)>(&::System::Delegate::CreateDelegate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c91438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(),
                                                { "CreateDelegate", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.CreateDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Delegate* (*)(::System::Type*, ::System::Reflection::MethodInfo*)>(&::System::Delegate::CreateDelegate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c9144c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "CreateDelegate", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.CreateDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Delegate* (*)(::System::Type*, ::System::Object*, ::StringW)>(&::System::Delegate::CreateDelegate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c91460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(),
                                                             { "CreateDelegate", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.GetCandidateMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (*)(::System::Type*, ::System::Type*, ::StringW, ::System::Reflection::BindingFlags, bool, bool)>(
    &::System::Delegate::GetCandidateMethod)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x5c91474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "GetCandidateMethod",
                                                                                          {},
                                                                                          { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(),
                                                                                            ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.CreateDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Delegate* (*)(::System::Type*, ::System::Type*, ::StringW, bool, bool)>(&::System::Delegate::CreateDelegate)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5c9187c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Delegate*>(),
            { "CreateDelegate", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.CreateDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Delegate* (*)(::System::Type*, ::System::Type*, ::StringW)>(&::System::Delegate::CreateDelegate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c91950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "CreateDelegate", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.CreateDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Delegate* (*)(::System::Type*, ::System::Object*, ::StringW, bool, bool)>(&::System::Delegate::CreateDelegate)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5c9195c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Delegate*>(),
            { "CreateDelegate", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.CreateDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Delegate* (*)(::System::Type*, ::System::Object*, ::StringW, bool)>(&::System::Delegate::CreateDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9146c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Delegate*>(),
                                         { "CreateDelegate", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.DynamicInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Delegate::*)(::ArrayW<::System::Object*>)>(&::System::Delegate::DynamicInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c91a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "DynamicInvoke", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.InitializeDelegateData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Delegate::*)()>(&::System::Delegate::InitializeDelegateData)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5c91a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "InitializeDelegateData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.DynamicInvokeImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Delegate::*)(::ArrayW<::System::Object*>)>(&::System::Delegate::DynamicInvokeImpl)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x5c91b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { ::i2c::class_of<::System::Delegate*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Delegate::*)()>(&::System::Delegate::Clone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c91e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { ::i2c::class_of<::System::Delegate*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Delegate::*)(::System::Object*)>(&::System::Delegate::Equals)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5c91e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { ::i2c::class_of<::System::Delegate*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Delegate::*)()>(&::System::Delegate::GetHashCode)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c91fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { ::i2c::class_of<::System::Delegate*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.GetMethodImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Delegate::*)()>(&::System::Delegate::GetMethodImpl)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5c9201c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { ::i2c::class_of<::System::Delegate*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Delegate::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Delegate::GetObjectData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c920f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { ::i2c::class_of<::System::Delegate*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.GetInvocationList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Delegate*> (::System::Delegate::*)()>(&::System::Delegate::GetInvocationList)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5c92350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { ::i2c::class_of<::System::Delegate*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.Combine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Delegate* (*)(::System::Delegate*, ::System::Delegate*)>(&::System::Delegate::Combine)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5c8d394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "Combine", {}, { ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<::System::Delegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.Combine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Delegate* (*)(::ArrayW<::System::Delegate*>)>(&::System::Delegate::Combine)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c923e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "Combine", {}, { ::i2c::type_of<::ArrayW<::System::Delegate*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.CombineImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Delegate* (::System::Delegate::*)(::System::Delegate*)>(&::System::Delegate::CombineImpl)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c92448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { ::i2c::class_of<::System::Delegate*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Delegate* (*)(::System::Delegate*, ::System::Delegate*)>(&::System::Delegate::Remove)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5c8d578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "Remove", {}, { ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<::System::Delegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.RemoveImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Delegate* (::System::Delegate::*)(::System::Delegate*)>(&::System::Delegate::RemoveImpl)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c92498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { ::i2c::class_of<::System::Delegate*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Delegate*, ::System::Delegate*)>(&::System::Delegate::op_Equality)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c924bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "op_Equality", {}, { ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<::System::Delegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Delegate*, ::System::Delegate*)>(&::System::Delegate::op_Inequality)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c924e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "op_Inequality", {}, { ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<::System::Delegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Delegate.AllocDelegateLike_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::MulticastDelegate* (*)(::System::Delegate*)>(&::System::Delegate::AllocDelegateLike_internal)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c92520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "AllocDelegateLike_internal", {}, { ::i2c::type_of<::System::Delegate*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& System::Delegate::__cordl_internal_get_method_ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method_ptr;
}
constexpr ::System::IntPtr const& System::Delegate::__cordl_internal_get_method_ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method_ptr;
}
constexpr void System::Delegate::__cordl_internal_set_method_ptr(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___method_ptr = value;
}
constexpr ::System::IntPtr& System::Delegate::__cordl_internal_get_invoke_impl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invoke_impl;
}
constexpr ::System::IntPtr const& System::Delegate::__cordl_internal_get_invoke_impl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invoke_impl;
}
constexpr void System::Delegate::__cordl_internal_set_invoke_impl(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___invoke_impl = value;
}
constexpr ::System::Object*& System::Delegate::__cordl_internal_get_m_target() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_target;
}
constexpr ::System::Object* const& System::Delegate::__cordl_internal_get_m_target() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_target;
}
constexpr void System::Delegate::__cordl_internal_set_m_target(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_target = value;
}
constexpr ::System::IntPtr& System::Delegate::__cordl_internal_get_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
constexpr ::System::IntPtr const& System::Delegate::__cordl_internal_get_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
constexpr void System::Delegate::__cordl_internal_set_method(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___method = value;
}
constexpr ::System::IntPtr& System::Delegate::__cordl_internal_get_delegate_trampoline() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delegate_trampoline;
}
constexpr ::System::IntPtr const& System::Delegate::__cordl_internal_get_delegate_trampoline() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___delegate_trampoline;
}
constexpr void System::Delegate::__cordl_internal_set_delegate_trampoline(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___delegate_trampoline = value;
}
constexpr ::System::IntPtr& System::Delegate::__cordl_internal_get_extra_arg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extra_arg;
}
constexpr ::System::IntPtr const& System::Delegate::__cordl_internal_get_extra_arg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extra_arg;
}
constexpr void System::Delegate::__cordl_internal_set_extra_arg(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extra_arg = value;
}
constexpr ::System::IntPtr& System::Delegate::__cordl_internal_get_method_code() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method_code;
}
constexpr ::System::IntPtr const& System::Delegate::__cordl_internal_get_method_code() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method_code;
}
constexpr void System::Delegate::__cordl_internal_set_method_code(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___method_code = value;
}
constexpr ::System::IntPtr& System::Delegate::__cordl_internal_get_interp_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interp_method;
}
constexpr ::System::IntPtr const& System::Delegate::__cordl_internal_get_interp_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interp_method;
}
constexpr void System::Delegate::__cordl_internal_set_interp_method(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___interp_method = value;
}
constexpr ::System::IntPtr& System::Delegate::__cordl_internal_get_interp_invoke_impl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interp_invoke_impl;
}
constexpr ::System::IntPtr const& System::Delegate::__cordl_internal_get_interp_invoke_impl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interp_invoke_impl;
}
constexpr void System::Delegate::__cordl_internal_set_interp_invoke_impl(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___interp_invoke_impl = value;
}
constexpr ::System::Reflection::MethodInfo*& System::Delegate::__cordl_internal_get_method_info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method_info;
}
constexpr ::System::Reflection::MethodInfo* const& System::Delegate::__cordl_internal_get_method_info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method_info;
}
constexpr void System::Delegate::__cordl_internal_set_method_info(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___method_info = value;
}
constexpr ::System::Reflection::MethodInfo*& System::Delegate::__cordl_internal_get_original_method_info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___original_method_info;
}
constexpr ::System::Reflection::MethodInfo* const& System::Delegate::__cordl_internal_get_original_method_info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___original_method_info;
}
constexpr void System::Delegate::__cordl_internal_set_original_method_info(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___original_method_info = value;
}
constexpr ::System::DelegateData*& System::Delegate::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::System::DelegateData* const& System::Delegate::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void System::Delegate::__cordl_internal_set_data(::System::DelegateData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
constexpr bool& System::Delegate::__cordl_internal_get_method_is_virtual() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method_is_virtual;
}
constexpr bool const& System::Delegate::__cordl_internal_get_method_is_virtual() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method_is_virtual;
}
constexpr void System::Delegate::__cordl_internal_set_method_is_virtual(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___method_is_virtual = value;
}
inline ::System::Reflection::MethodInfo* System::Delegate::get_Method() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "get_Method", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Delegate::GetVirtualMethod_internal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "GetVirtualMethod_internal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Object* System::Delegate::get_Target() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "get_Target", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Delegate* System::Delegate::CreateDelegate_internal(::System::Type* type, ::System::Object* target, ::System::Reflection::MethodInfo* info, bool throwOnBindFailure) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Delegate*>(),
          { "CreateDelegate_internal", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(nullptr, ___internal_method, type, target, info, throwOnBindFailure);
}
inline bool System::Delegate::arg_type_match(::System::Type* delArgType, ::System::Type* argType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "arg_type_match", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, delArgType, argType);
}
inline bool System::Delegate::arg_type_match_this(::System::Type* delArgType, ::System::Type* argType, bool boxedThis) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "arg_type_match_this", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, delArgType, argType, boxedThis);
}
inline bool System::Delegate::return_type_match(::System::Type* delReturnType, ::System::Type* returnType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "return_type_match", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, delReturnType, returnType);
}
inline ::System::Delegate* System::Delegate::CreateDelegate(::System::Type* type, ::System::Object* firstArgument, ::System::Reflection::MethodInfo* method, bool throwOnBindFailure,
                                                            bool allowClosed) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "CreateDelegate",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(),
                                                                                          ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(nullptr, ___internal_method, type, firstArgument, method, throwOnBindFailure, allowClosed);
}
inline ::System::Delegate* System::Delegate::CreateDelegate(::System::Type* type, ::System::Object* firstArgument, ::System::Reflection::MethodInfo* method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Delegate*>(),
                                       { "CreateDelegate", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(nullptr, ___internal_method, type, firstArgument, method);
}
inline ::System::Delegate* System::Delegate::CreateDelegate(::System::Type* type, ::System::Reflection::MethodInfo* method, bool throwOnBindFailure) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(),
                                              { "CreateDelegate", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(nullptr, ___internal_method, type, method, throwOnBindFailure);
}
inline ::System::Delegate* System::Delegate::CreateDelegate(::System::Type* type, ::System::Reflection::MethodInfo* method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "CreateDelegate", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(nullptr, ___internal_method, type, method);
}
inline ::System::Delegate* System::Delegate::CreateDelegate(::System::Type* type, ::System::Object* target, ::StringW method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "CreateDelegate", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(nullptr, ___internal_method, type, target, method);
}
inline ::System::Reflection::MethodInfo* System::Delegate::GetCandidateMethod(::System::Type* type, ::System::Type* target, ::StringW method, ::System::Reflection::BindingFlags bflags,
                                                                              bool ignoreCase, bool throwOnBindFailure) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "GetCandidateMethod",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(),
                                                                                          ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(nullptr, ___internal_method, type, target, method, bflags, ignoreCase, throwOnBindFailure);
}
inline ::System::Delegate* System::Delegate::CreateDelegate(::System::Type* type, ::System::Type* target, ::StringW method, bool ignoreCase, bool throwOnBindFailure) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Delegate*>(),
          { "CreateDelegate", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(nullptr, ___internal_method, type, target, method, ignoreCase, throwOnBindFailure);
}
inline ::System::Delegate* System::Delegate::CreateDelegate(::System::Type* type, ::System::Type* target, ::StringW method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "CreateDelegate", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(nullptr, ___internal_method, type, target, method);
}
inline ::System::Delegate* System::Delegate::CreateDelegate(::System::Type* type, ::System::Object* target, ::StringW method, bool ignoreCase, bool throwOnBindFailure) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Delegate*>(),
          { "CreateDelegate", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(nullptr, ___internal_method, type, target, method, ignoreCase, throwOnBindFailure);
}
inline ::System::Delegate* System::Delegate::CreateDelegate(::System::Type* type, ::System::Object* target, ::StringW method, bool ignoreCase) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Delegate*>(),
                                       { "CreateDelegate", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(nullptr, ___internal_method, type, target, method, ignoreCase);
}
inline ::System::Object* System::Delegate::DynamicInvoke(::ArrayW<::System::Object*> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "DynamicInvoke", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, args);
}
inline void System::Delegate::InitializeDelegateData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "InitializeDelegateData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Delegate::DynamicInvokeImpl(::ArrayW<::System::Object*> args) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Delegate*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, args);
}
inline ::System::Object* System::Delegate::Clone() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Delegate*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Delegate::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Delegate*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::Delegate::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Delegate*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Delegate::GetMethodImpl() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Delegate*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline void System::Delegate::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Delegate*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::ArrayW<::System::Delegate*> System::Delegate::GetInvocationList() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Delegate*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Delegate*>>(this, ___internal_method);
}
inline ::System::Delegate* System::Delegate::Combine(::System::Delegate* a, ::System::Delegate* b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "Combine", {}, { ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<::System::Delegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(nullptr, ___internal_method, a, b);
}
inline ::System::Delegate* System::Delegate::Combine(::ArrayW<::System::Delegate*> delegates) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "Combine", {}, { ::i2c::type_of<::ArrayW<::System::Delegate*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(nullptr, ___internal_method, delegates);
}
inline ::System::Delegate* System::Delegate::CombineImpl(::System::Delegate* d) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Delegate*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(this, ___internal_method, d);
}
inline ::System::Delegate* System::Delegate::Remove(::System::Delegate* source, ::System::Delegate* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "Remove", {}, { ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<::System::Delegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(nullptr, ___internal_method, source, value);
}
inline ::System::Delegate* System::Delegate::RemoveImpl(::System::Delegate* d) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Delegate*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(this, ___internal_method, d);
}
inline bool System::Delegate::op_Equality(::System::Delegate* d1, ::System::Delegate* d2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "op_Equality", {}, { ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<::System::Delegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, d1, d2);
}
inline bool System::Delegate::op_Inequality(::System::Delegate* d1, ::System::Delegate* d2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "op_Inequality", {}, { ::i2c::type_of<::System::Delegate*>(), ::i2c::type_of<::System::Delegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, d1, d2);
}
inline ::System::MulticastDelegate* System::Delegate::AllocDelegateLike_internal(::System::Delegate* d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Delegate*>(), { "AllocDelegateLike_internal", {}, { ::i2c::type_of<::System::Delegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::MulticastDelegate*>(nullptr, ___internal_method, d);
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Delegate::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Delegate::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Delegate::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Delegate::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Delegate::Delegate() {}
