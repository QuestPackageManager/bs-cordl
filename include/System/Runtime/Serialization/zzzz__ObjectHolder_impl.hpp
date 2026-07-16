#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ObjectHolder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__ObjectHolder_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__FixupHolderList_def.hpp"
#include "System/Runtime/Serialization/zzzz__FixupHolder_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializationSurrogate_def.hpp"
#include "System/Runtime/Serialization/zzzz__LongList_def.hpp"
#include "System/Runtime/Serialization/zzzz__ObjectManager_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__TypeLoadExceptionHolder_def.hpp"
#include "System/Runtime/Serialization/zzzz__ValueTypeFixupInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(int64_t)>(&::System::Runtime::Serialization::ObjectHolder::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5b4dfdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { ".ctor", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(
    ::System::Object*, int64_t, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::ISerializationSurrogate*, int64_t, ::System::Reflection::FieldInfo*,
    ::ArrayW<int32_t>)>(&::System::Runtime::Serialization::ObjectHolder::_ctor)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5b50354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::ISerializationSurrogate*>(), ::i2c::type_of<int64_t>(),
                                                                 ::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(
    ::StringW, int64_t, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::ISerializationSurrogate*, int64_t, ::System::Reflection::FieldInfo*,
    ::ArrayW<int32_t>)>(&::System::Runtime::Serialization::ObjectHolder::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5b4fcbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::ISerializationSurrogate*>(), ::i2c::type_of<int64_t>(),
                                                                 ::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.IncrementDescendentFixups
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(int32_t)>(&::System::Runtime::Serialization::ObjectHolder::IncrementDescendentFixups)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b515f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "IncrementDescendentFixups", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.DecrementFixupsRemaining
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(::System::Runtime::Serialization::ObjectManager*)>(
    &::System::Runtime::Serialization::ObjectHolder::DecrementFixupsRemaining)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b4f9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(),
                                                             { "DecrementFixupsRemaining", {}, { ::i2c::type_of<::System::Runtime::Serialization::ObjectManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.RemoveDependency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(int64_t)>(&::System::Runtime::Serialization::ObjectHolder::RemoveDependency)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b4fa10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "RemoveDependency", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.AddFixup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(
    ::System::Runtime::Serialization::FixupHolder*, ::System::Runtime::Serialization::ObjectManager*)>(&::System::Runtime::Serialization::ObjectHolder::AddFixup)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5b50cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(),
                            { "AddFixup", {}, { ::i2c::type_of<::System::Runtime::Serialization::FixupHolder*>(), ::i2c::type_of<::System::Runtime::Serialization::ObjectManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.UpdateDescendentDependencyChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(int32_t, ::System::Runtime::Serialization::ObjectManager*)>(
    &::System::Runtime::Serialization::ObjectHolder::UpdateDescendentDependencyChain)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b51600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(),
                                                { "UpdateDescendentDependencyChain", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Runtime::Serialization::ObjectManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.AddDependency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(int64_t)>(&::System::Runtime::Serialization::ObjectHolder::AddDependency)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b50db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "AddDependency", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.UpdateData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(
    ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::ISerializationSurrogate*, int64_t, ::System::Reflection::FieldInfo*, ::ArrayW<int32_t>,
    ::System::Runtime::Serialization::ObjectManager*)>(&::System::Runtime::Serialization::ObjectHolder::UpdateData)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5b50528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(),
                            { "UpdateData",
                              {},
                              { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                ::i2c::type_of<::System::Runtime::Serialization::ISerializationSurrogate*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Reflection::FieldInfo*>(),
                                ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Runtime::Serialization::ObjectManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.MarkForCompletionWhenAvailable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)()>(&::System::Runtime::Serialization::ObjectHolder::MarkForCompletionWhenAvailable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b4fa88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "MarkForCompletionWhenAvailable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.SetFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)()>(&::System::Runtime::Serialization::ObjectHolder::SetFlags)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5b4e78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "SetFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_IsIncompleteObjectReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::ObjectHolder::*)()>(&::System::Runtime::Serialization::ObjectHolder::get_IsIncompleteObjectReference)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b4e3bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_IsIncompleteObjectReference", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.set_IsIncompleteObjectReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(bool)>(
    &::System::Runtime::Serialization::ObjectHolder::set_IsIncompleteObjectReference)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b4f314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "set_IsIncompleteObjectReference", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_RequiresDelayedFixup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::ObjectHolder::*)()>(&::System::Runtime::Serialization::ObjectHolder::get_RequiresDelayedFixup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b50518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_RequiresDelayedFixup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_RequiresValueTypeFixup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::ObjectHolder::*)()>(&::System::Runtime::Serialization::ObjectHolder::get_RequiresValueTypeFixup)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b4eaf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_RequiresValueTypeFixup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_ValueTypeFixupPerformed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::ObjectHolder::*)()>(&::System::Runtime::Serialization::ObjectHolder::get_ValueTypeFixupPerformed)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b4eb00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_ValueTypeFixupPerformed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.set_ValueTypeFixupPerformed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(bool)>(&::System::Runtime::Serialization::ObjectHolder::set_ValueTypeFixupPerformed)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b4fa34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "set_ValueTypeFixupPerformed", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_HasISerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::ObjectHolder::*)()>(&::System::Runtime::Serialization::ObjectHolder::get_HasISerializable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b4f8fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_HasISerializable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_HasSurrogate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::ObjectHolder::*)()>(&::System::Runtime::Serialization::ObjectHolder::get_HasSurrogate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b4e5ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_HasSurrogate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_CanSurrogatedObjectValueChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::ObjectHolder::*)()>(
    &::System::Runtime::Serialization::ObjectHolder::get_CanSurrogatedObjectValueChange)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5b4e5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_CanSurrogatedObjectValueChange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_CanObjectValueChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::ObjectHolder::*)()>(&::System::Runtime::Serialization::ObjectHolder::get_CanObjectValueChange)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b4e39c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_CanObjectValueChange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_DirectlyDependentObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::ObjectHolder::*)()>(&::System::Runtime::Serialization::ObjectHolder::get_DirectlyDependentObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b5179c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_DirectlyDependentObjects", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_TotalDependentObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::ObjectHolder::*)()>(&::System::Runtime::Serialization::ObjectHolder::get_TotalDependentObjects)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b506a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_TotalDependentObjects", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_Reachable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::ObjectHolder::*)()>(&::System::Runtime::Serialization::ObjectHolder::get_Reachable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b517a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_Reachable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.set_Reachable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(bool)>(&::System::Runtime::Serialization::ObjectHolder::set_Reachable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b517ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "set_Reachable", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_TypeLoadExceptionReachable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::ObjectHolder::*)()>(&::System::Runtime::Serialization::ObjectHolder::get_TypeLoadExceptionReachable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b4fa24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_TypeLoadExceptionReachable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_TypeLoadException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::TypeLoadExceptionHolder* (::System::Runtime::Serialization::ObjectHolder::*)()>(
    &::System::Runtime::Serialization::ObjectHolder::get_TypeLoadException)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b517b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_TypeLoadException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.set_TypeLoadException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(::System::Runtime::Serialization::TypeLoadExceptionHolder*)>(
    &::System::Runtime::Serialization::ObjectHolder::set_TypeLoadException)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b517bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(),
                                                             { "set_TypeLoadException", {}, { ::i2c::type_of<::System::Runtime::Serialization::TypeLoadExceptionHolder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_ObjectValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::ObjectHolder::*)()>(&::System::Runtime::Serialization::ObjectHolder::get_ObjectValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b517c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_ObjectValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.SetObjectValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(::System::Object*, ::System::Runtime::Serialization::ObjectManager*)>(
    &::System::Runtime::Serialization::ObjectHolder::SetObjectValue)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5b4e68c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(),
                                                             { "SetObjectValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::ObjectManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_SerializationInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::SerializationInfo* (::System::Runtime::Serialization::ObjectHolder::*)()>(
    &::System::Runtime::Serialization::ObjectHolder::get_SerializationInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b517cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_SerializationInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.set_SerializationInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(::System::Runtime::Serialization::SerializationInfo*)>(
    &::System::Runtime::Serialization::ObjectHolder::set_SerializationInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b517d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(),
                                                             { "set_SerializationInfo", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_Surrogate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::ISerializationSurrogate* (::System::Runtime::Serialization::ObjectHolder::*)()>(
    &::System::Runtime::Serialization::ObjectHolder::get_Surrogate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b517dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_Surrogate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_DependentObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::LongList* (::System::Runtime::Serialization::ObjectHolder::*)()>(
    &::System::Runtime::Serialization::ObjectHolder::get_DependentObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b517e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_DependentObjects", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.set_DependentObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(::System::Runtime::Serialization::LongList*)>(
    &::System::Runtime::Serialization::ObjectHolder::set_DependentObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b517ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(),
                                                                                           { "set_DependentObjects", {}, { ::i2c::type_of<::System::Runtime::Serialization::LongList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_RequiresSerInfoFixup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::ObjectHolder::*)()>(&::System::Runtime::Serialization::ObjectHolder::get_RequiresSerInfoFixup)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b50b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_RequiresSerInfoFixup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.set_RequiresSerInfoFixup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::ObjectHolder::*)(bool)>(&::System::Runtime::Serialization::ObjectHolder::set_RequiresSerInfoFixup)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b4ead4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "set_RequiresSerInfoFixup", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_ValueFixup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::ValueTypeFixupInfo* (::System::Runtime::Serialization::ObjectHolder::*)()>(
    &::System::Runtime::Serialization::ObjectHolder::get_ValueFixup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b517f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_ValueFixup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_CompletelyFixed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::ObjectHolder::*)()>(&::System::Runtime::Serialization::ObjectHolder::get_CompletelyFixed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b4e37c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_CompletelyFixed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ObjectHolder.get_ContainerID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Runtime::Serialization::ObjectHolder::*)()>(&::System::Runtime::Serialization::ObjectHolder::get_ContainerID)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b516f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_ContainerID", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_object() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_object;
}
constexpr ::System::Object* const& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_object() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_object;
}
constexpr void System::Runtime::Serialization::ObjectHolder::__cordl_internal_set_m_object(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_object = value;
}
constexpr int64_t& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_id;
}
constexpr int64_t const& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_id;
}
constexpr void System::Runtime::Serialization::ObjectHolder::__cordl_internal_set_m_id(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_id = value;
}
constexpr int32_t& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_missingElementsRemaining() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_missingElementsRemaining;
}
constexpr int32_t const& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_missingElementsRemaining() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_missingElementsRemaining;
}
constexpr void System::Runtime::Serialization::ObjectHolder::__cordl_internal_set_m_missingElementsRemaining(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_missingElementsRemaining = value;
}
constexpr int32_t& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_missingDecendents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_missingDecendents;
}
constexpr int32_t const& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_missingDecendents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_missingDecendents;
}
constexpr void System::Runtime::Serialization::ObjectHolder::__cordl_internal_set_m_missingDecendents(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_missingDecendents = value;
}
constexpr ::System::Runtime::Serialization::SerializationInfo*& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_serInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_serInfo;
}
constexpr ::System::Runtime::Serialization::SerializationInfo* const& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_serInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_serInfo;
}
constexpr void System::Runtime::Serialization::ObjectHolder::__cordl_internal_set_m_serInfo(::System::Runtime::Serialization::SerializationInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_serInfo = value;
}
constexpr ::System::Runtime::Serialization::ISerializationSurrogate*& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_surrogate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_surrogate;
}
constexpr ::System::Runtime::Serialization::ISerializationSurrogate* const& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_surrogate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_surrogate;
}
constexpr void System::Runtime::Serialization::ObjectHolder::__cordl_internal_set_m_surrogate(::System::Runtime::Serialization::ISerializationSurrogate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_surrogate = value;
}
constexpr ::System::Runtime::Serialization::FixupHolderList*& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_missingElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_missingElements;
}
constexpr ::System::Runtime::Serialization::FixupHolderList* const& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_missingElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_missingElements;
}
constexpr void System::Runtime::Serialization::ObjectHolder::__cordl_internal_set_m_missingElements(::System::Runtime::Serialization::FixupHolderList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_missingElements = value;
}
constexpr ::System::Runtime::Serialization::LongList*& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_dependentObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_dependentObjects;
}
constexpr ::System::Runtime::Serialization::LongList* const& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_dependentObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_dependentObjects;
}
constexpr void System::Runtime::Serialization::ObjectHolder::__cordl_internal_set_m_dependentObjects(::System::Runtime::Serialization::LongList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_dependentObjects = value;
}
constexpr ::System::Runtime::Serialization::ObjectHolder*& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_next;
}
constexpr ::System::Runtime::Serialization::ObjectHolder* const& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_next;
}
constexpr void System::Runtime::Serialization::ObjectHolder::__cordl_internal_set_m_next(::System::Runtime::Serialization::ObjectHolder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_next = value;
}
constexpr int32_t& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_flags;
}
constexpr int32_t const& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_flags;
}
constexpr void System::Runtime::Serialization::ObjectHolder::__cordl_internal_set_m_flags(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_flags = value;
}
constexpr bool& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_markForFixupWhenAvailable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_markForFixupWhenAvailable;
}
constexpr bool const& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_markForFixupWhenAvailable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_markForFixupWhenAvailable;
}
constexpr void System::Runtime::Serialization::ObjectHolder::__cordl_internal_set_m_markForFixupWhenAvailable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_markForFixupWhenAvailable = value;
}
constexpr ::System::Runtime::Serialization::ValueTypeFixupInfo*& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_valueFixup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_valueFixup;
}
constexpr ::System::Runtime::Serialization::ValueTypeFixupInfo* const& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_valueFixup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_valueFixup;
}
constexpr void System::Runtime::Serialization::ObjectHolder::__cordl_internal_set_m_valueFixup(::System::Runtime::Serialization::ValueTypeFixupInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_valueFixup = value;
}
constexpr ::System::Runtime::Serialization::TypeLoadExceptionHolder*& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_typeLoad() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_typeLoad;
}
constexpr ::System::Runtime::Serialization::TypeLoadExceptionHolder* const& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_typeLoad() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_typeLoad;
}
constexpr void System::Runtime::Serialization::ObjectHolder::__cordl_internal_set_m_typeLoad(::System::Runtime::Serialization::TypeLoadExceptionHolder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_typeLoad = value;
}
constexpr bool& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_reachable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_reachable;
}
constexpr bool const& System::Runtime::Serialization::ObjectHolder::__cordl_internal_get_m_reachable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_reachable;
}
constexpr void System::Runtime::Serialization::ObjectHolder::__cordl_internal_set_m_reachable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_reachable = value;
}
inline void System::Runtime::Serialization::ObjectHolder::_ctor(int64_t objID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { ".ctor", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objID);
}
inline void System::Runtime::Serialization::ObjectHolder::_ctor(::System::Object* obj, int64_t objID, ::System::Runtime::Serialization::SerializationInfo* info,
                                                                ::System::Runtime::Serialization::ISerializationSurrogate* surrogate, int64_t idOfContainingObj, ::System::Reflection::FieldInfo* field,
                                                                ::ArrayW<int32_t> arrayIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::ISerializationSurrogate*>(), ::i2c::type_of<int64_t>(),
                                                               ::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, objID, info, surrogate, idOfContainingObj, field, arrayIndex);
}
inline void System::Runtime::Serialization::ObjectHolder::_ctor(::StringW obj, int64_t objID, ::System::Runtime::Serialization::SerializationInfo* info,
                                                                ::System::Runtime::Serialization::ISerializationSurrogate* surrogate, int64_t idOfContainingObj, ::System::Reflection::FieldInfo* field,
                                                                ::ArrayW<int32_t> arrayIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::ISerializationSurrogate*>(), ::i2c::type_of<int64_t>(),
                                                               ::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, objID, info, surrogate, idOfContainingObj, field, arrayIndex);
}
inline void System::Runtime::Serialization::ObjectHolder::IncrementDescendentFixups(int32_t amount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "IncrementDescendentFixups", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, amount);
}
inline void System::Runtime::Serialization::ObjectHolder::DecrementFixupsRemaining(::System::Runtime::Serialization::ObjectManager* manager) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(),
                                                                                         { "DecrementFixupsRemaining", {}, { ::i2c::type_of<::System::Runtime::Serialization::ObjectManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, manager);
}
inline void System::Runtime::Serialization::ObjectHolder::RemoveDependency(int64_t id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "RemoveDependency", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void System::Runtime::Serialization::ObjectHolder::AddFixup(::System::Runtime::Serialization::FixupHolder* fixup, ::System::Runtime::Serialization::ObjectManager* manager) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(),
                                       { "AddFixup", {}, { ::i2c::type_of<::System::Runtime::Serialization::FixupHolder*>(), ::i2c::type_of<::System::Runtime::Serialization::ObjectManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fixup, manager);
}
inline void System::Runtime::Serialization::ObjectHolder::UpdateDescendentDependencyChain(int32_t amount, ::System::Runtime::Serialization::ObjectManager* manager) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(),
                                              { "UpdateDescendentDependencyChain", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Runtime::Serialization::ObjectManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, amount, manager);
}
inline void System::Runtime::Serialization::ObjectHolder::AddDependency(int64_t dependentObject) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "AddDependency", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dependentObject);
}
inline void System::Runtime::Serialization::ObjectHolder::UpdateData(::System::Object* obj, ::System::Runtime::Serialization::SerializationInfo* info,
                                                                     ::System::Runtime::Serialization::ISerializationSurrogate* surrogate, int64_t idOfContainer,
                                                                     ::System::Reflection::FieldInfo* field, ::ArrayW<int32_t> arrayIndex, ::System::Runtime::Serialization::ObjectManager* manager) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(),
                                       { "UpdateData",
                                         {},
                                         { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                           ::i2c::type_of<::System::Runtime::Serialization::ISerializationSurrogate*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Reflection::FieldInfo*>(),
                                           ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Runtime::Serialization::ObjectManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, info, surrogate, idOfContainer, field, arrayIndex, manager);
}
inline void System::Runtime::Serialization::ObjectHolder::MarkForCompletionWhenAvailable() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "MarkForCompletionWhenAvailable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ObjectHolder::SetFlags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "SetFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ObjectHolder::get_IsIncompleteObjectReference() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_IsIncompleteObjectReference", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ObjectHolder::set_IsIncompleteObjectReference(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "set_IsIncompleteObjectReference", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Runtime::Serialization::ObjectHolder::get_RequiresDelayedFixup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_RequiresDelayedFixup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ObjectHolder::get_RequiresValueTypeFixup() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_RequiresValueTypeFixup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ObjectHolder::get_ValueTypeFixupPerformed() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_ValueTypeFixupPerformed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ObjectHolder::set_ValueTypeFixupPerformed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "set_ValueTypeFixupPerformed", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Runtime::Serialization::ObjectHolder::get_HasISerializable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_HasISerializable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ObjectHolder::get_HasSurrogate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_HasSurrogate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ObjectHolder::get_CanSurrogatedObjectValueChange() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_CanSurrogatedObjectValueChange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ObjectHolder::get_CanObjectValueChange() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_CanObjectValueChange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::ObjectHolder::get_DirectlyDependentObjects() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_DirectlyDependentObjects", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::ObjectHolder::get_TotalDependentObjects() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_TotalDependentObjects", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ObjectHolder::get_Reachable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_Reachable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ObjectHolder::set_Reachable(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "set_Reachable", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Runtime::Serialization::ObjectHolder::get_TypeLoadExceptionReachable() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_TypeLoadExceptionReachable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::TypeLoadExceptionHolder* System::Runtime::Serialization::ObjectHolder::get_TypeLoadException() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_TypeLoadException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::TypeLoadExceptionHolder*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ObjectHolder::set_TypeLoadException(::System::Runtime::Serialization::TypeLoadExceptionHolder* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(),
                                                           { "set_TypeLoadException", {}, { ::i2c::type_of<::System::Runtime::Serialization::TypeLoadExceptionHolder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* System::Runtime::Serialization::ObjectHolder::get_ObjectValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_ObjectValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ObjectHolder::SetObjectValue(::System::Object* obj, ::System::Runtime::Serialization::ObjectManager* manager) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(),
                                                           { "SetObjectValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Runtime::Serialization::ObjectManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, manager);
}
inline ::System::Runtime::Serialization::SerializationInfo* System::Runtime::Serialization::ObjectHolder::get_SerializationInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_SerializationInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::SerializationInfo*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ObjectHolder::set_SerializationInfo(::System::Runtime::Serialization::SerializationInfo* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(),
                                                                                         { "set_SerializationInfo", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::Serialization::ISerializationSurrogate* System::Runtime::Serialization::ObjectHolder::get_Surrogate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_Surrogate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ISerializationSurrogate*>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::LongList* System::Runtime::Serialization::ObjectHolder::get_DependentObjects() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_DependentObjects", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::LongList*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ObjectHolder::set_DependentObjects(::System::Runtime::Serialization::LongList* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(),
                                                                                         { "set_DependentObjects", {}, { ::i2c::type_of<::System::Runtime::Serialization::LongList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Runtime::Serialization::ObjectHolder::get_RequiresSerInfoFixup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_RequiresSerInfoFixup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::Serialization::ObjectHolder::set_RequiresSerInfoFixup(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "set_RequiresSerInfoFixup", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::Serialization::ValueTypeFixupInfo* System::Runtime::Serialization::ObjectHolder::get_ValueFixup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_ValueFixup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ValueTypeFixupInfo*>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::ObjectHolder::get_CompletelyFixed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_CompletelyFixed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t System::Runtime::Serialization::ObjectHolder::get_ContainerID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::ObjectHolder*>(), { "get_ContainerID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::ObjectHolder* System::Runtime::Serialization::ObjectHolder::New_ctor(int64_t objID) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::ObjectHolder*>(objID));
}
inline ::System::Runtime::Serialization::ObjectHolder* System::Runtime::Serialization::ObjectHolder::New_ctor(::System::Object* obj, int64_t objID,
                                                                                                              ::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                              ::System::Runtime::Serialization::ISerializationSurrogate* surrogate,
                                                                                                              int64_t idOfContainingObj, ::System::Reflection::FieldInfo* field,
                                                                                                              ::ArrayW<int32_t> arrayIndex) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::ObjectHolder*>(obj, objID, info, surrogate, idOfContainingObj, field, arrayIndex));
}
inline ::System::Runtime::Serialization::ObjectHolder* System::Runtime::Serialization::ObjectHolder::New_ctor(::StringW obj, int64_t objID, ::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                              ::System::Runtime::Serialization::ISerializationSurrogate* surrogate,
                                                                                                              int64_t idOfContainingObj, ::System::Reflection::FieldInfo* field,
                                                                                                              ::ArrayW<int32_t> arrayIndex) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::ObjectHolder*>(obj, objID, info, surrogate, idOfContainingObj, field, arrayIndex));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::ObjectHolder::ObjectHolder() {}
