#pragma once
// IWYU pragma private; include "Unity/Burst/BurstCompiler.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/zzzz__BurstCompiler_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeMethodHandle_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Burst/zzzz__BurstCompilerOptions_def.hpp"
#include "Unity/Burst/zzzz__BurstCompiler_def.hpp"
#include "Unity/Burst/zzzz__BurstExecutionEnvironment_def.hpp"
#include "Unity/Burst/zzzz__FunctionPointer_1_def.hpp"
//  Writing Method size for method: ::Unity::Burst::BurstCompiler_CommandBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstCompiler_CommandBuilder::*)()>(&::Unity::Burst::BurstCompiler_CommandBuilder::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x646a6dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler_CommandBuilder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler_CommandBuilder.Begin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Burst::BurstCompiler_CommandBuilder* (::Unity::Burst::BurstCompiler_CommandBuilder::*)(::StringW)>(
    &::Unity::Burst::BurstCompiler_CommandBuilder::Begin)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x646a73c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler_CommandBuilder*>(), { "Begin", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler_CommandBuilder.With
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Burst::BurstCompiler_CommandBuilder* (::Unity::Burst::BurstCompiler_CommandBuilder::*)(::StringW)>(
    &::Unity::Burst::BurstCompiler_CommandBuilder::With)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x646bbf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler_CommandBuilder*>(), { "With", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler_CommandBuilder.With
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Burst::BurstCompiler_CommandBuilder* (::Unity::Burst::BurstCompiler_CommandBuilder::*)(::System::IntPtr)>(
    &::Unity::Burst::BurstCompiler_CommandBuilder::With)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x646be10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler_CommandBuilder*>(), { "With", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler_CommandBuilder.And
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Burst::BurstCompiler_CommandBuilder* (::Unity::Burst::BurstCompiler_CommandBuilder::*)(char16_t)>(
    &::Unity::Burst::BurstCompiler_CommandBuilder::And)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x646bee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler_CommandBuilder*>(), { "And", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler_CommandBuilder.SendToCompiler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Burst::BurstCompiler_CommandBuilder::*)()>(&::Unity::Burst::BurstCompiler_CommandBuilder::SendToCompiler)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x646bc50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler_CommandBuilder*>(), { "SendToCompiler", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Text::StringBuilder*& Unity::Burst::BurstCompiler_CommandBuilder::__cordl_internal_get__builder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____builder;
}
constexpr ::System::Text::StringBuilder* const& Unity::Burst::BurstCompiler_CommandBuilder::__cordl_internal_get__builder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____builder;
}
constexpr void Unity::Burst::BurstCompiler_CommandBuilder::__cordl_internal_set__builder(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____builder = value;
}
constexpr bool& Unity::Burst::BurstCompiler_CommandBuilder::__cordl_internal_get__hasArgs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasArgs;
}
constexpr bool const& Unity::Burst::BurstCompiler_CommandBuilder::__cordl_internal_get__hasArgs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasArgs;
}
constexpr void Unity::Burst::BurstCompiler_CommandBuilder::__cordl_internal_set__hasArgs(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasArgs = value;
}
inline void Unity::Burst::BurstCompiler_CommandBuilder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler_CommandBuilder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Burst::BurstCompiler_CommandBuilder* Unity::Burst::BurstCompiler_CommandBuilder::Begin(::StringW cmd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler_CommandBuilder*>(), { "Begin", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Burst::BurstCompiler_CommandBuilder*>(this, ___internal_method, cmd);
}
inline ::Unity::Burst::BurstCompiler_CommandBuilder* Unity::Burst::BurstCompiler_CommandBuilder::With(::StringW arg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler_CommandBuilder*>(), { "With", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Burst::BurstCompiler_CommandBuilder*>(this, ___internal_method, arg);
}
inline ::Unity::Burst::BurstCompiler_CommandBuilder* Unity::Burst::BurstCompiler_CommandBuilder::With(::System::IntPtr arg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler_CommandBuilder*>(), { "With", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Burst::BurstCompiler_CommandBuilder*>(this, ___internal_method, arg);
}
inline ::Unity::Burst::BurstCompiler_CommandBuilder* Unity::Burst::BurstCompiler_CommandBuilder::And(char16_t sep) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler_CommandBuilder*>(), { "And", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Burst::BurstCompiler_CommandBuilder*>(this, ___internal_method, sep);
}
inline ::StringW Unity::Burst::BurstCompiler_CommandBuilder::SendToCompiler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler_CommandBuilder*>(), { "SendToCompiler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Unity::Burst::BurstCompiler_CommandBuilder* Unity::Burst::BurstCompiler_CommandBuilder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Burst::BurstCompiler_CommandBuilder*>());
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstCompiler_CommandBuilder::BurstCompiler_CommandBuilder() {}
//  Writing Method size for method: ::Unity::Burst::BurstCompiler_StaticTypeReinitAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstCompiler_StaticTypeReinitAttribute::*)(::System::Type*)>(
    &::Unity::Burst::BurstCompiler_StaticTypeReinitAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x646bf10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler_StaticTypeReinitAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Unity::Burst::BurstCompiler_StaticTypeReinitAttribute::__cordl_internal_get_reinitType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reinitType;
}
constexpr ::System::Type* const& Unity::Burst::BurstCompiler_StaticTypeReinitAttribute::__cordl_internal_get_reinitType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reinitType;
}
constexpr void Unity::Burst::BurstCompiler_StaticTypeReinitAttribute::__cordl_internal_set_reinitType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reinitType = value;
}
inline void Unity::Burst::BurstCompiler_StaticTypeReinitAttribute::_ctor(::System::Type* toReinit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler_StaticTypeReinitAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toReinit);
}
inline ::Unity::Burst::BurstCompiler_StaticTypeReinitAttribute* Unity::Burst::BurstCompiler_StaticTypeReinitAttribute::New_ctor(::System::Type* toReinit) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Burst::BurstCompiler_StaticTypeReinitAttribute*>(toReinit));
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstCompiler_StaticTypeReinitAttribute::BurstCompiler_StaticTypeReinitAttribute() {}
//  Writing Method size for method: ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x646c0cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate::*)()>(
    &::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x646c134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate*>(),
                                                                                          { ::i2c::class_of<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate::*)(::System::AsyncCallback*, ::System::Object*)>(
        &::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x646c148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate*>(),
                                                                                          { ::i2c::class_of<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate::*)(::System::IAsyncResult*)>(
    &::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x646c164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate*>(),
                                                                                          { ::i2c::class_of<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate*>(), 15 }));
    return ___internal_method;
  }
};
inline void Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate::Invoke() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IAsyncResult* Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline bool Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate* Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate::New_ctor(::System::Object* object,
                                                                                                                                                                  ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate() {}
//  Writing Method size for method: ::Unity::Burst::BurstCompiler_BurstCompilerHelper.IsBurstEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Unity::Burst::BurstCompiler_BurstCompilerHelper::IsBurstEnabled)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x646bf18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler_BurstCompilerHelper*>(), { "IsBurstEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler_BurstCompilerHelper.DiscardedMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<bool>)>(&::Unity::Burst::BurstCompiler_BurstCompilerHelper::DiscardedMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x646bf6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler_BurstCompilerHelper*>(), { "DiscardedMethod", {}, { ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler_BurstCompilerHelper.IsCompiledByBurst
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Delegate*)>(&::Unity::Burst::BurstCompiler_BurstCompilerHelper::IsCompiledByBurst)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x646bf74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler_BurstCompilerHelper*>(), { "IsCompiledByBurst", {}, { ::i2c::type_of<::System::Delegate*>() } })));
    return ___internal_method;
  }
};
inline void Unity::Burst::BurstCompiler_BurstCompilerHelper::setStaticF_IsBurstEnabledImpl(::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate* value) {
  ::cordl_internals::setStaticField<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate*, "IsBurstEnabledImpl", ::Unity::Burst::BurstCompiler_BurstCompilerHelper*>(
      std::forward<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate*>(value));
}
inline ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate* Unity::Burst::BurstCompiler_BurstCompilerHelper::getStaticF_IsBurstEnabledImpl() {
  return ::cordl_internals::getStaticField<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate*, "IsBurstEnabledImpl", ::Unity::Burst::BurstCompiler_BurstCompilerHelper*>();
}
inline void Unity::Burst::BurstCompiler_BurstCompilerHelper::setStaticF_IsBurstGenerated(bool value) {
  ::cordl_internals::setStaticField<bool, "IsBurstGenerated", ::Unity::Burst::BurstCompiler_BurstCompilerHelper*>(std::forward<bool>(value));
}
inline bool Unity::Burst::BurstCompiler_BurstCompilerHelper::getStaticF_IsBurstGenerated() {
  return ::cordl_internals::getStaticField<bool, "IsBurstGenerated", ::Unity::Burst::BurstCompiler_BurstCompilerHelper*>();
}
inline bool Unity::Burst::BurstCompiler_BurstCompilerHelper::IsBurstEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler_BurstCompilerHelper*>(), { "IsBurstEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Unity::Burst::BurstCompiler_BurstCompilerHelper::DiscardedMethod(::by_ref<bool> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler_BurstCompilerHelper*>(), { "DiscardedMethod", {}, { ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool Unity::Burst::BurstCompiler_BurstCompilerHelper::IsCompiledByBurst(::System::Delegate* del) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler_BurstCompilerHelper*>(), { "IsCompiledByBurst", {}, { ::i2c::type_of<::System::Delegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, del);
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstCompiler_BurstCompilerHelper::BurstCompiler_BurstCompilerHelper() {}
//  Writing Method size for method: ::Unity::Burst::BurstCompiler_FakeDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstCompiler_FakeDelegate::*)(::System::Reflection::MethodInfo*)>(&::Unity::Burst::BurstCompiler_FakeDelegate::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x646aa34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler_FakeDelegate*>(), { ".ctor", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler_FakeDelegate.get_Method
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::Unity::Burst::BurstCompiler_FakeDelegate::*)()>(&::Unity::Burst::BurstCompiler_FakeDelegate::get_Method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x646c188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler_FakeDelegate*>(), { "get_Method", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::MethodInfo*& Unity::Burst::BurstCompiler_FakeDelegate::__cordl_internal_get__Method_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Method_k__BackingField;
}
constexpr ::System::Reflection::MethodInfo* const& Unity::Burst::BurstCompiler_FakeDelegate::__cordl_internal_get__Method_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Method_k__BackingField;
}
constexpr void Unity::Burst::BurstCompiler_FakeDelegate::__cordl_internal_set__Method_k__BackingField(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Method_k__BackingField = value;
}
inline void Unity::Burst::BurstCompiler_FakeDelegate::_ctor(::System::Reflection::MethodInfo* method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler_FakeDelegate*>(), { ".ctor", {}, { ::i2c::type_of<::System::Reflection::MethodInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method);
}
inline ::System::Reflection::MethodInfo* Unity::Burst::BurstCompiler_FakeDelegate::get_Method() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler_FakeDelegate*>(), { "get_Method", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::Unity::Burst::BurstCompiler_FakeDelegate* Unity::Burst::BurstCompiler_FakeDelegate::New_ctor(::System::Reflection::MethodInfo* method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Burst::BurstCompiler_FakeDelegate*>(method));
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstCompiler_FakeDelegate::BurstCompiler_FakeDelegate() {}
//  Writing Method size for method: ::Unity::Burst::BurstCompiler___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstCompiler___c::*)()>(&::Unity::Burst::BurstCompiler___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x646c1e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler___c._Compile_b__22_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Burst::BurstCompiler___c::*)(::System::Attribute*)>(&::Unity::Burst::BurstCompiler___c::_Compile_b__22_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x646c1e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler___c*>(), { "<Compile>b__22_0", {}, { ::i2c::type_of<::System::Attribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler___c._TriggerUnsafeStaticMethodRecompilation_b__29_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Burst::BurstCompiler___c::*)(::System::Attribute*)>(
    &::Unity::Burst::BurstCompiler___c::_TriggerUnsafeStaticMethodRecompilation_b__29_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x646c260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler___c*>(),
                                                                                           { "<TriggerUnsafeStaticMethodRecompilation>b__29_0", {}, { ::i2c::type_of<::System::Attribute*>() } })));
    return ___internal_method;
  }
};
inline void Unity::Burst::BurstCompiler___c::setStaticF___9(::Unity::Burst::BurstCompiler___c* value) {
  ::cordl_internals::setStaticField<::Unity::Burst::BurstCompiler___c*, "<>9", ::Unity::Burst::BurstCompiler___c*>(std::forward<::Unity::Burst::BurstCompiler___c*>(value));
}
inline ::Unity::Burst::BurstCompiler___c* Unity::Burst::BurstCompiler___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Unity::Burst::BurstCompiler___c*, "<>9", ::Unity::Burst::BurstCompiler___c*>();
}
inline void Unity::Burst::BurstCompiler___c::setStaticF___9__22_0(::System::Func_2<::System::Attribute*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Attribute*, bool>*, "<>9__22_0", ::Unity::Burst::BurstCompiler___c*>(std::forward<::System::Func_2<::System::Attribute*, bool>*>(value));
}
inline ::System::Func_2<::System::Attribute*, bool>* Unity::Burst::BurstCompiler___c::getStaticF___9__22_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Attribute*, bool>*, "<>9__22_0", ::Unity::Burst::BurstCompiler___c*>();
}
inline void Unity::Burst::BurstCompiler___c::setStaticF___9__29_0(::System::Func_2<::System::Attribute*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Attribute*, bool>*, "<>9__29_0", ::Unity::Burst::BurstCompiler___c*>(std::forward<::System::Func_2<::System::Attribute*, bool>*>(value));
}
inline ::System::Func_2<::System::Attribute*, bool>* Unity::Burst::BurstCompiler___c::getStaticF___9__29_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Attribute*, bool>*, "<>9__29_0", ::Unity::Burst::BurstCompiler___c*>();
}
inline void Unity::Burst::BurstCompiler___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::Burst::BurstCompiler___c::_Compile_b__22_0(::System::Attribute* s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler___c*>(), { "<Compile>b__22_0", {}, { ::i2c::type_of<::System::Attribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s);
}
inline bool Unity::Burst::BurstCompiler___c::_TriggerUnsafeStaticMethodRecompilation_b__29_0(::System::Attribute* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler___c*>(), { "<TriggerUnsafeStaticMethodRecompilation>b__29_0", {}, { ::i2c::type_of<::System::Attribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::Unity::Burst::BurstCompiler___c* Unity::Burst::BurstCompiler___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Burst::BurstCompiler___c*>());
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstCompiler___c::BurstCompiler___c() {}
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.IsLoadAdditionalLibrarySupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Unity::Burst::BurstCompiler::IsLoadAdditionalLibrarySupported)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x646a48c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "IsLoadAdditionalLibrarySupported", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.BeginCompilerCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Burst::BurstCompiler_CommandBuilder* (*)(::StringW)>(&::Unity::Burst::BurstCompiler::BeginCompilerCommand)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x646a58c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "BeginCompilerCommand", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.get_IsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Unity::Burst::BurstCompiler::get_IsEnabled)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x646a788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "get_IsEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.SetExecutionMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Burst::BurstExecutionEnvironment)>(&::Unity::Burst::BurstCompiler::SetExecutionMode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x646a82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "SetExecutionMode", {}, { ::i2c::type_of<::Unity::Burst::BurstExecutionEnvironment>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.GetExecutionMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Burst::BurstExecutionEnvironment (*)()>(&::Unity::Burst::BurstCompiler::GetExecutionMode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x646a868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "GetExecutionMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.CompileILPPMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::RuntimeMethodHandle, ::System::RuntimeMethodHandle, ::System::RuntimeTypeHandle)>(
    &::Unity::Burst::BurstCompiler::CompileILPPMethod)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x646a890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Burst::BurstCompiler*>(),
            { "CompileILPPMethod", {}, { ::i2c::type_of<::System::RuntimeMethodHandle>(), ::i2c::type_of<::System::RuntimeMethodHandle>(), ::i2c::type_of<::System::RuntimeTypeHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.CompileILPPMethod2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::RuntimeMethodHandle)>(&::Unity::Burst::BurstCompiler::CompileILPPMethod2)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x646a8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "CompileILPPMethod2", {}, { ::i2c::type_of<::System::RuntimeMethodHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.GetILPPMethodFunctionPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(::System::IntPtr)>(&::Unity::Burst::BurstCompiler::GetILPPMethodFunctionPointer)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x646aee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "GetILPPMethodFunctionPointer", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.GetILPPMethodFunctionPointer2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(::System::IntPtr, ::System::RuntimeMethodHandle, ::System::RuntimeTypeHandle)>(
    &::Unity::Burst::BurstCompiler::GetILPPMethodFunctionPointer2)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x646af1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Burst::BurstCompiler*>(),
            { "GetILPPMethodFunctionPointer2", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::RuntimeMethodHandle>(), ::i2c::type_of<::System::RuntimeTypeHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.CompileUnsafeStaticMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(::System::RuntimeMethodHandle)>(&::Unity::Burst::BurstCompiler::CompileUnsafeStaticMethod)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x646afbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "CompileUnsafeStaticMethod", {}, { ::i2c::type_of<::System::RuntimeMethodHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.Compile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(::System::Object*, bool)>(&::Unity::Burst::BurstCompiler::Compile)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x646aff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "Compile", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.Compile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(::System::Object*, ::System::Reflection::MethodInfo*, bool, bool)>(&::Unity::Burst::BurstCompiler::Compile)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x646aa3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(),
                            { "Compile", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.Shutdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Burst::BurstCompiler::Shutdown)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x646b1e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "Shutdown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.Cancel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Burst::BurstCompiler::Cancel)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x646b1e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "Cancel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.IsCurrentCompilationDone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Unity::Burst::BurstCompiler::IsCurrentCompilationDone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x646b1ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "IsCurrentCompilationDone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.Enable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Burst::BurstCompiler::Enable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x646b1f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "Enable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.Disable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Burst::BurstCompiler::Disable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x646b1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "Disable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.IsHostEditorArm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Unity::Burst::BurstCompiler::IsHostEditorArm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x646b1fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "IsHostEditorArm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.TriggerUnsafeStaticMethodRecompilation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Burst::BurstCompiler::TriggerUnsafeStaticMethodRecompilation)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0x646b204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "TriggerUnsafeStaticMethodRecompilation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.TriggerRecompilation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Burst::BurstCompiler::TriggerRecompilation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x646b70c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "TriggerRecompilation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.UnloadAdditionalLibraries
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Burst::BurstCompiler::UnloadAdditionalLibraries)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x646b710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "UnloadAdditionalLibraries", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.InitialiseDebuggerHooks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Burst::BurstCompiler::InitialiseDebuggerHooks)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x646b85c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "InitialiseDebuggerHooks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.IsApiAvailable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Unity::Burst::BurstCompiler::IsApiAvailable)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x646a4f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "IsApiAvailable", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.RequestSetProtocolVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Unity::Burst::BurstCompiler::RequestSetProtocolVersion)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x646b940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "RequestSetProtocolVersion", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::StringW>, ::ArrayW<::StringW>)>(&::Unity::Burst::BurstCompiler::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x646bae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "Initialize", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.NotifyCompilationStarted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::StringW>, ::ArrayW<::StringW>)>(&::Unity::Burst::BurstCompiler::NotifyCompilationStarted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x646bae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "NotifyCompilationStarted", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.NotifyAssemblyCompilationNotRequired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Unity::Burst::BurstCompiler::NotifyAssemblyCompilationNotRequired)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x646bae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "NotifyAssemblyCompilationNotRequired", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.NotifyAssemblyCompilationFinished
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::StringW>)>(&::Unity::Burst::BurstCompiler::NotifyAssemblyCompilationFinished)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x646baec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "NotifyAssemblyCompilationFinished", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.NotifyCompilationFinished
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Burst::BurstCompiler::NotifyCompilationFinished)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x646baf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "NotifyCompilationFinished", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.AotCompilation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<::StringW>, ::ArrayW<::StringW>, ::StringW)>(&::Unity::Burst::BurstCompiler::AotCompilation)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x646baf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(),
                                                             { "AotCompilation", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.SetProfilerCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Burst::BurstCompiler::SetProfilerCallbacks)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x646bb38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "SetProfilerCallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.SendRawCommandToCompiler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Unity::Burst::BurstCompiler::SendRawCommandToCompiler)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x646bb3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "SendRawCommandToCompiler", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.SendCommandToCompiler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::Unity::Burst::BurstCompiler::SendCommandToCompiler)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x646b780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "SendCommandToCompiler", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompiler.DummyMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Burst::BurstCompiler::DummyMethod)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x646bcc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "DummyMethod", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Burst::BurstCompiler::setStaticF__cmdBuilder(::Unity::Burst::BurstCompiler_CommandBuilder* value) {
  ::cordl_internals::setStaticField<::Unity::Burst::BurstCompiler_CommandBuilder*, "_cmdBuilder", ::Unity::Burst::BurstCompiler*>(std::forward<::Unity::Burst::BurstCompiler_CommandBuilder*>(value));
}
inline ::Unity::Burst::BurstCompiler_CommandBuilder* Unity::Burst::BurstCompiler::getStaticF__cmdBuilder() {
  return ::cordl_internals::getStaticField<::Unity::Burst::BurstCompiler_CommandBuilder*, "_cmdBuilder", ::Unity::Burst::BurstCompiler*>();
}
inline void Unity::Burst::BurstCompiler::setStaticF__IsEnabled(bool value) {
  ::cordl_internals::setStaticField<bool, "_IsEnabled", ::Unity::Burst::BurstCompiler*>(std::forward<bool>(value));
}
inline bool Unity::Burst::BurstCompiler::getStaticF__IsEnabled() {
  return ::cordl_internals::getStaticField<bool, "_IsEnabled", ::Unity::Burst::BurstCompiler*>();
}
inline void Unity::Burst::BurstCompiler::setStaticF_Options(::Unity::Burst::BurstCompilerOptions* value) {
  ::cordl_internals::setStaticField<::Unity::Burst::BurstCompilerOptions*, "Options", ::Unity::Burst::BurstCompiler*>(std::forward<::Unity::Burst::BurstCompilerOptions*>(value));
}
inline ::Unity::Burst::BurstCompilerOptions* Unity::Burst::BurstCompiler::getStaticF_Options() {
  return ::cordl_internals::getStaticField<::Unity::Burst::BurstCompilerOptions*, "Options", ::Unity::Burst::BurstCompiler*>();
}
inline void Unity::Burst::BurstCompiler::setStaticF_OnCompileILPPMethod2(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "OnCompileILPPMethod2", ::Unity::Burst::BurstCompiler*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Unity::Burst::BurstCompiler::getStaticF_OnCompileILPPMethod2() {
  return ::cordl_internals::getStaticField<::System::Action*, "OnCompileILPPMethod2", ::Unity::Burst::BurstCompiler*>();
}
inline void Unity::Burst::BurstCompiler::setStaticF_DummyMethodInfo(::System::Reflection::MethodInfo* value) {
  ::cordl_internals::setStaticField<::System::Reflection::MethodInfo*, "DummyMethodInfo", ::Unity::Burst::BurstCompiler*>(std::forward<::System::Reflection::MethodInfo*>(value));
}
inline ::System::Reflection::MethodInfo* Unity::Burst::BurstCompiler::getStaticF_DummyMethodInfo() {
  return ::cordl_internals::getStaticField<::System::Reflection::MethodInfo*, "DummyMethodInfo", ::Unity::Burst::BurstCompiler*>();
}
inline bool Unity::Burst::BurstCompiler::IsLoadAdditionalLibrarySupported() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "IsLoadAdditionalLibrarySupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::Unity::Burst::BurstCompiler_CommandBuilder* Unity::Burst::BurstCompiler::BeginCompilerCommand(::StringW cmd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "BeginCompilerCommand", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Burst::BurstCompiler_CommandBuilder*>(nullptr, ___internal_method, cmd);
}
inline bool Unity::Burst::BurstCompiler::get_IsEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "get_IsEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Unity::Burst::BurstCompiler::SetExecutionMode(::Unity::Burst::BurstExecutionEnvironment mode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "SetExecutionMode", {}, { ::i2c::type_of<::Unity::Burst::BurstExecutionEnvironment>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mode);
}
inline ::Unity::Burst::BurstExecutionEnvironment Unity::Burst::BurstCompiler::GetExecutionMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "GetExecutionMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Burst::BurstExecutionEnvironment>(nullptr, ___internal_method);
}
template <typename T> inline T Unity::Burst::BurstCompiler::CompileDelegate(T delegateMethod) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "CompileDelegate", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, delegateMethod);
}
template <typename T> inline void Unity::Burst::BurstCompiler::VerifyDelegateIsNotMulticast(T delegateMethod) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "VerifyDelegateIsNotMulticast", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, delegateMethod);
}
template <typename T> inline void Unity::Burst::BurstCompiler::VerifyDelegateHasCorrectUnmanagedFunctionPointerAttribute(T delegateMethod) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "VerifyDelegateHasCorrectUnmanagedFunctionPointerAttribute", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, delegateMethod);
}
inline ::System::IntPtr Unity::Burst::BurstCompiler::CompileILPPMethod(::System::RuntimeMethodHandle burstMethodHandle, ::System::RuntimeMethodHandle managedMethodHandle,
                                                                       ::System::RuntimeTypeHandle delegateTypeHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Burst::BurstCompiler*>(),
          { "CompileILPPMethod", {}, { ::i2c::type_of<::System::RuntimeMethodHandle>(), ::i2c::type_of<::System::RuntimeMethodHandle>(), ::i2c::type_of<::System::RuntimeTypeHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, burstMethodHandle, managedMethodHandle, delegateTypeHandle);
}
inline ::System::IntPtr Unity::Burst::BurstCompiler::CompileILPPMethod2(::System::RuntimeMethodHandle burstMethodHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "CompileILPPMethod2", {}, { ::i2c::type_of<::System::RuntimeMethodHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, burstMethodHandle);
}
inline void* Unity::Burst::BurstCompiler::GetILPPMethodFunctionPointer(::System::IntPtr ilppMethod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "GetILPPMethodFunctionPointer", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, ilppMethod);
}
inline void* Unity::Burst::BurstCompiler::GetILPPMethodFunctionPointer2(::System::IntPtr ilppMethod, ::System::RuntimeMethodHandle managedMethodHandle,
                                                                        ::System::RuntimeTypeHandle delegateTypeHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Burst::BurstCompiler*>(),
          { "GetILPPMethodFunctionPointer2", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::RuntimeMethodHandle>(), ::i2c::type_of<::System::RuntimeTypeHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, ilppMethod, managedMethodHandle, delegateTypeHandle);
}
inline void* Unity::Burst::BurstCompiler::CompileUnsafeStaticMethod(::System::RuntimeMethodHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "CompileUnsafeStaticMethod", {}, { ::i2c::type_of<::System::RuntimeMethodHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, handle);
}
template <typename T> inline ::Unity::Burst::FunctionPointer_1<T> Unity::Burst::BurstCompiler::CompileFunctionPointer(T delegateMethod) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "CompileFunctionPointer", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Burst::FunctionPointer_1<T>>(nullptr, ___internal_method, delegateMethod);
}
inline void* Unity::Burst::BurstCompiler::Compile(::System::Object* delegateObj, bool isFunctionPointer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "Compile", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, delegateObj, isFunctionPointer);
}
inline void* Unity::Burst::BurstCompiler::Compile(::System::Object* delegateObj, ::System::Reflection::MethodInfo* methodInfo, bool isFunctionPointer, bool isILPostProcessing) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(),
                          { "Compile", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, delegateObj, methodInfo, isFunctionPointer, isILPostProcessing);
}
inline void Unity::Burst::BurstCompiler::Shutdown() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "Shutdown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Unity::Burst::BurstCompiler::Cancel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "Cancel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Unity::Burst::BurstCompiler::IsCurrentCompilationDone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "IsCurrentCompilationDone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Unity::Burst::BurstCompiler::Enable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "Enable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Unity::Burst::BurstCompiler::Disable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "Disable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Unity::Burst::BurstCompiler::IsHostEditorArm() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "IsHostEditorArm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Unity::Burst::BurstCompiler::TriggerUnsafeStaticMethodRecompilation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "TriggerUnsafeStaticMethodRecompilation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Unity::Burst::BurstCompiler::TriggerRecompilation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "TriggerRecompilation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Unity::Burst::BurstCompiler::UnloadAdditionalLibraries() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "UnloadAdditionalLibraries", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Unity::Burst::BurstCompiler::InitialiseDebuggerHooks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "InitialiseDebuggerHooks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool Unity::Burst::BurstCompiler::IsApiAvailable(::StringW apiName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "IsApiAvailable", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, apiName);
}
inline int32_t Unity::Burst::BurstCompiler::RequestSetProtocolVersion(int32_t version) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "RequestSetProtocolVersion", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, version);
}
inline void Unity::Burst::BurstCompiler::Initialize(::ArrayW<::StringW> assemblyFolders, ::ArrayW<::StringW> ignoreAssemblies) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "Initialize", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, assemblyFolders, ignoreAssemblies);
}
inline void Unity::Burst::BurstCompiler::NotifyCompilationStarted(::ArrayW<::StringW> assemblyFolders, ::ArrayW<::StringW> ignoreAssemblies) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "NotifyCompilationStarted", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, assemblyFolders, ignoreAssemblies);
}
inline void Unity::Burst::BurstCompiler::NotifyAssemblyCompilationNotRequired(::StringW assemblyName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "NotifyAssemblyCompilationNotRequired", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, assemblyName);
}
inline void Unity::Burst::BurstCompiler::NotifyAssemblyCompilationFinished(::StringW assemblyName, ::ArrayW<::StringW> defines) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "NotifyAssemblyCompilationFinished", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, assemblyName, defines);
}
inline void Unity::Burst::BurstCompiler::NotifyCompilationFinished() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "NotifyCompilationFinished", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::StringW Unity::Burst::BurstCompiler::AotCompilation(::ArrayW<::StringW> assemblyFolders, ::ArrayW<::StringW> assemblyRoots, ::StringW options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(),
                                                           { "AotCompilation", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, assemblyFolders, assemblyRoots, options);
}
inline void Unity::Burst::BurstCompiler::SetProfilerCallbacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "SetProfilerCallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::StringW Unity::Burst::BurstCompiler::SendRawCommandToCompiler(::StringW command) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "SendRawCommandToCompiler", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, command);
}
inline ::StringW Unity::Burst::BurstCompiler::SendCommandToCompiler(::StringW commandName, ::StringW commandArgs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "SendCommandToCompiler", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, commandName, commandArgs);
}
inline void Unity::Burst::BurstCompiler::DummyMethod() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompiler*>(), { "DummyMethod", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstCompiler::BurstCompiler() {}
