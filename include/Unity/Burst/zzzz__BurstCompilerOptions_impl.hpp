#pragma once
// IWYU pragma private; include "Unity/Burst/BurstCompilerOptions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/zzzz__BurstCompilerOptions_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "Unity/Burst/zzzz__BurstCompileAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.SerialiseCompilationOptionsSafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<::StringW>, ::ArrayW<::StringW>, ::StringW)>(&::Unity::Burst::BurstCompilerOptions::SerialiseCompilationOptionsSafe)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x646c2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                                         { "SerialiseCompilationOptionsSafe", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.DeserialiseCompilationOptionsSafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_3<::ArrayW<::StringW>, ::ArrayW<::StringW>, ::StringW> (*)(::StringW)>(
    &::Unity::Burst::BurstCompilerOptions::DeserialiseCompilationOptionsSafe)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x646c4ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "DeserialiseCompilationOptionsSafe", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstCompilerOptions::*)()>(&::Unity::Burst::BurstCompilerOptions::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x646c820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstCompilerOptions::*)(bool)>(&::Unity::Burst::BurstCompilerOptions::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x646bdbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.get_IsGlobal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Burst::BurstCompilerOptions::*)()>(&::Unity::Burst::BurstCompilerOptions::get_IsGlobal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x646c99c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "get_IsGlobal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.get_IsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Burst::BurstCompilerOptions::*)()>(&::Unity::Burst::BurstCompilerOptions::get_IsEnabled)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x646c9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "get_IsEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.get_EnableBurstCompilation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Burst::BurstCompilerOptions::*)()>(&::Unity::Burst::BurstCompilerOptions::get_EnableBurstCompilation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x646ca1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "get_EnableBurstCompilation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.set_EnableBurstCompilation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstCompilerOptions::*)(bool)>(&::Unity::Burst::BurstCompilerOptions::set_EnableBurstCompilation)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x646c828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "set_EnableBurstCompilation", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.get_EnableBurstCompileSynchronously
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Burst::BurstCompilerOptions::*)()>(&::Unity::Burst::BurstCompilerOptions::get_EnableBurstCompileSynchronously)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x646ca40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "get_EnableBurstCompileSynchronously", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.set_EnableBurstCompileSynchronously
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstCompilerOptions::*)(bool)>(&::Unity::Burst::BurstCompilerOptions::set_EnableBurstCompileSynchronously)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x646ca48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "set_EnableBurstCompileSynchronously", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.get_EnableBurstSafetyChecks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Burst::BurstCompilerOptions::*)()>(&::Unity::Burst::BurstCompilerOptions::get_EnableBurstSafetyChecks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x646ca78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "get_EnableBurstSafetyChecks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.set_EnableBurstSafetyChecks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstCompilerOptions::*)(bool)>(&::Unity::Burst::BurstCompilerOptions::set_EnableBurstSafetyChecks)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x646c96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "set_EnableBurstSafetyChecks", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.get_ForceEnableBurstSafetyChecks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Burst::BurstCompilerOptions::*)()>(&::Unity::Burst::BurstCompilerOptions::get_ForceEnableBurstSafetyChecks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x646ca84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "get_ForceEnableBurstSafetyChecks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.set_ForceEnableBurstSafetyChecks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstCompilerOptions::*)(bool)>(&::Unity::Burst::BurstCompilerOptions::set_ForceEnableBurstSafetyChecks)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x646ca8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "set_ForceEnableBurstSafetyChecks", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.get_EnableBurstDebug
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Burst::BurstCompilerOptions::*)()>(&::Unity::Burst::BurstCompilerOptions::get_EnableBurstDebug)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x646cabc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "get_EnableBurstDebug", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.set_EnableBurstDebug
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstCompilerOptions::*)(bool)>(&::Unity::Burst::BurstCompilerOptions::set_EnableBurstDebug)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x646cac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "set_EnableBurstDebug", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.get_DisableOptimizations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Burst::BurstCompilerOptions::*)()>(&::Unity::Burst::BurstCompilerOptions::get_DisableOptimizations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x646caf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "get_DisableOptimizations", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.set_DisableOptimizations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstCompilerOptions::*)(bool)>(&::Unity::Burst::BurstCompilerOptions::set_DisableOptimizations)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x646cafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "set_DisableOptimizations", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.get_EnableFastMath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Burst::BurstCompilerOptions::*)()>(&::Unity::Burst::BurstCompilerOptions::get_EnableFastMath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x646cb00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "get_EnableFastMath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.set_EnableFastMath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstCompilerOptions::*)(bool)>(&::Unity::Burst::BurstCompilerOptions::set_EnableFastMath)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x646cb08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "set_EnableFastMath", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.get_EnableBurstTimings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Burst::BurstCompilerOptions::*)()>(&::Unity::Burst::BurstCompilerOptions::get_EnableBurstTimings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x646cb0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "get_EnableBurstTimings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.set_EnableBurstTimings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstCompilerOptions::*)(bool)>(&::Unity::Burst::BurstCompilerOptions::set_EnableBurstTimings)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x646cb14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "set_EnableBurstTimings", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.get_RequiresSynchronousCompilation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Burst::BurstCompilerOptions::*)()>(&::Unity::Burst::BurstCompilerOptions::get_RequiresSynchronousCompilation)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x646cb44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "get_RequiresSynchronousCompilation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.get_OptionsChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action* (::Unity::Burst::BurstCompilerOptions::*)()>(&::Unity::Burst::BurstCompilerOptions::get_OptionsChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x646cbbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "get_OptionsChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.set_OptionsChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstCompilerOptions::*)(::System::Action*)>(&::Unity::Burst::BurstCompilerOptions::set_OptionsChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x646cbc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "set_OptionsChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Burst::BurstCompilerOptions* (::Unity::Burst::BurstCompilerOptions::*)()>(&::Unity::Burst::BurstCompilerOptions::Clone)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x646cbcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.TryGetAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MemberInfo*, ::by_ref<::Unity::Burst::BurstCompileAttribute*>)>(
    &::Unity::Burst::BurstCompilerOptions::TryGetAttribute)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x646cd18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                                         { "TryGetAttribute", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::by_ref<::Unity::Burst::BurstCompileAttribute*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.TryGetAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::Assembly*, ::by_ref<::Unity::Burst::BurstCompileAttribute*>)>(
    &::Unity::Burst::BurstCompilerOptions::TryGetAttribute)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x646d1d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                                                { "TryGetAttribute", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::by_ref<::Unity::Burst::BurstCompileAttribute*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.GetBurstCompileAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Burst::BurstCompileAttribute* (*)(::System::Reflection::MemberInfo*)>(
    &::Unity::Burst::BurstCompilerOptions::GetBurstCompileAttribute)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x646cdac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "GetBurstCompileAttribute", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.HasBurstCompileAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MemberInfo*)>(&::Unity::Burst::BurstCompilerOptions::HasBurstCompileAttribute)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x646b11c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "HasBurstCompileAttribute", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.MergeAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Burst::BurstCompileAttribute*>, ::by_ref<::Unity::Burst::BurstCompileAttribute*>)>(
    &::Unity::Burst::BurstCompilerOptions::MergeAttributes)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x646d264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                            { "MergeAttributes", {}, { ::i2c::type_of<::by_ref<::Unity::Burst::BurstCompileAttribute*>>(), ::i2c::type_of<::by_ref<::Unity::Burst::BurstCompileAttribute*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.TryGetOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Burst::BurstCompilerOptions::*)(::System::Reflection::MemberInfo*, ::by_ref<::StringW>, bool, bool)>(
    &::Unity::Burst::BurstCompilerOptions::TryGetOptions)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x646d39c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                            { "TryGetOptions", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.GetOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Burst::BurstCompilerOptions::*)(::Unity::Burst::BurstCompileAttribute*, bool, bool)>(
    &::Unity::Burst::BurstCompilerOptions::GetOptions)> {
  constexpr static std::size_t size = 0x6a0;
  constexpr static std::size_t addrs = 0x646d4bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                                                             { "GetOptions", {}, { ::i2c::type_of<::Unity::Burst::BurstCompileAttribute*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.AddOption
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::StringW)>(&::Unity::Burst::BurstCompilerOptions::AddOption)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x646dc3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                                                                                           { "AddOption", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.GetOption
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Object*)>(&::Unity::Burst::BurstCompilerOptions::GetOption)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x646db5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "GetOption", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.OnOptionsChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstCompilerOptions::*)()>(&::Unity::Burst::BurstCompilerOptions::OnOptionsChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x646ca24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "OnOptionsChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.MaybeTriggerRecompilation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstCompilerOptions::*)()>(&::Unity::Burst::BurstCompilerOptions::MaybeTriggerRecompilation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x646ca80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "MaybeTriggerRecompilation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.CheckIsSecondaryUnityProcess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Unity::Burst::BurstCompilerOptions::CheckIsSecondaryUnityProcess)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x646dde8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "CheckIsSecondaryUnityProcess", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& Unity::Burst::BurstCompilerOptions::__cordl_internal_get__enableBurstCompilation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableBurstCompilation;
}
constexpr bool const& Unity::Burst::BurstCompilerOptions::__cordl_internal_get__enableBurstCompilation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableBurstCompilation;
}
constexpr void Unity::Burst::BurstCompilerOptions::__cordl_internal_set__enableBurstCompilation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enableBurstCompilation = value;
}
constexpr bool& Unity::Burst::BurstCompilerOptions::__cordl_internal_get__enableBurstCompileSynchronously() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableBurstCompileSynchronously;
}
constexpr bool const& Unity::Burst::BurstCompilerOptions::__cordl_internal_get__enableBurstCompileSynchronously() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableBurstCompileSynchronously;
}
constexpr void Unity::Burst::BurstCompilerOptions::__cordl_internal_set__enableBurstCompileSynchronously(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enableBurstCompileSynchronously = value;
}
constexpr bool& Unity::Burst::BurstCompilerOptions::__cordl_internal_get__enableBurstSafetyChecks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableBurstSafetyChecks;
}
constexpr bool const& Unity::Burst::BurstCompilerOptions::__cordl_internal_get__enableBurstSafetyChecks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableBurstSafetyChecks;
}
constexpr void Unity::Burst::BurstCompilerOptions::__cordl_internal_set__enableBurstSafetyChecks(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enableBurstSafetyChecks = value;
}
constexpr bool& Unity::Burst::BurstCompilerOptions::__cordl_internal_get__enableBurstTimings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableBurstTimings;
}
constexpr bool const& Unity::Burst::BurstCompilerOptions::__cordl_internal_get__enableBurstTimings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableBurstTimings;
}
constexpr void Unity::Burst::BurstCompilerOptions::__cordl_internal_set__enableBurstTimings(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enableBurstTimings = value;
}
constexpr bool& Unity::Burst::BurstCompilerOptions::__cordl_internal_get__enableBurstDebug() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableBurstDebug;
}
constexpr bool const& Unity::Burst::BurstCompilerOptions::__cordl_internal_get__enableBurstDebug() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableBurstDebug;
}
constexpr void Unity::Burst::BurstCompilerOptions::__cordl_internal_set__enableBurstDebug(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enableBurstDebug = value;
}
constexpr bool& Unity::Burst::BurstCompilerOptions::__cordl_internal_get__forceEnableBurstSafetyChecks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forceEnableBurstSafetyChecks;
}
constexpr bool const& Unity::Burst::BurstCompilerOptions::__cordl_internal_get__forceEnableBurstSafetyChecks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forceEnableBurstSafetyChecks;
}
constexpr void Unity::Burst::BurstCompilerOptions::__cordl_internal_set__forceEnableBurstSafetyChecks(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____forceEnableBurstSafetyChecks = value;
}
constexpr bool& Unity::Burst::BurstCompilerOptions::__cordl_internal_get__IsGlobal_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsGlobal_k__BackingField;
}
constexpr bool const& Unity::Burst::BurstCompilerOptions::__cordl_internal_get__IsGlobal_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsGlobal_k__BackingField;
}
constexpr void Unity::Burst::BurstCompilerOptions::__cordl_internal_set__IsGlobal_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsGlobal_k__BackingField = value;
}
constexpr ::System::Action*& Unity::Burst::BurstCompilerOptions::__cordl_internal_get__OptionsChanged_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OptionsChanged_k__BackingField;
}
constexpr ::System::Action* const& Unity::Burst::BurstCompilerOptions::__cordl_internal_get__OptionsChanged_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OptionsChanged_k__BackingField;
}
constexpr void Unity::Burst::BurstCompilerOptions::__cordl_internal_set__OptionsChanged_k__BackingField(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____OptionsChanged_k__BackingField = value;
}
inline void Unity::Burst::BurstCompilerOptions::setStaticF_ForceDisableBurstCompilation(bool value) {
  ::cordl_internals::setStaticField<bool, "ForceDisableBurstCompilation", ::Unity::Burst::BurstCompilerOptions*>(std::forward<bool>(value));
}
inline bool Unity::Burst::BurstCompilerOptions::getStaticF_ForceDisableBurstCompilation() {
  return ::cordl_internals::getStaticField<bool, "ForceDisableBurstCompilation", ::Unity::Burst::BurstCompilerOptions*>();
}
inline void Unity::Burst::BurstCompilerOptions::setStaticF_ForceBurstCompilationSynchronously(bool value) {
  ::cordl_internals::setStaticField<bool, "ForceBurstCompilationSynchronously", ::Unity::Burst::BurstCompilerOptions*>(std::forward<bool>(value));
}
inline bool Unity::Burst::BurstCompilerOptions::getStaticF_ForceBurstCompilationSynchronously() {
  return ::cordl_internals::getStaticField<bool, "ForceBurstCompilationSynchronously", ::Unity::Burst::BurstCompilerOptions*>();
}
inline void Unity::Burst::BurstCompilerOptions::setStaticF_IsSecondaryUnityProcess(bool value) {
  ::cordl_internals::setStaticField<bool, "IsSecondaryUnityProcess", ::Unity::Burst::BurstCompilerOptions*>(std::forward<bool>(value));
}
inline bool Unity::Burst::BurstCompilerOptions::getStaticF_IsSecondaryUnityProcess() {
  return ::cordl_internals::getStaticField<bool, "IsSecondaryUnityProcess", ::Unity::Burst::BurstCompilerOptions*>();
}
inline ::StringW Unity::Burst::BurstCompilerOptions::SerialiseCompilationOptionsSafe(::ArrayW<::StringW> roots, ::ArrayW<::StringW> folders, ::StringW options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                                       { "SerialiseCompilationOptionsSafe", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, roots, folders, options);
}
inline ::System::ValueTuple_3<::ArrayW<::StringW>, ::ArrayW<::StringW>, ::StringW> Unity::Burst::BurstCompilerOptions::DeserialiseCompilationOptionsSafe(::StringW from) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "DeserialiseCompilationOptionsSafe", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_3<::ArrayW<::StringW>, ::ArrayW<::StringW>, ::StringW>>(nullptr, ___internal_method, from);
}
inline void Unity::Burst::BurstCompilerOptions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Burst::BurstCompilerOptions::_ctor(bool isGlobal) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isGlobal);
}
inline bool Unity::Burst::BurstCompilerOptions::get_IsGlobal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "get_IsGlobal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Unity::Burst::BurstCompilerOptions::get_IsEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "get_IsEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Unity::Burst::BurstCompilerOptions::get_EnableBurstCompilation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "get_EnableBurstCompilation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Burst::BurstCompilerOptions::set_EnableBurstCompilation(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "set_EnableBurstCompilation", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Unity::Burst::BurstCompilerOptions::get_EnableBurstCompileSynchronously() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "get_EnableBurstCompileSynchronously", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Burst::BurstCompilerOptions::set_EnableBurstCompileSynchronously(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "set_EnableBurstCompileSynchronously", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Unity::Burst::BurstCompilerOptions::get_EnableBurstSafetyChecks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "get_EnableBurstSafetyChecks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Burst::BurstCompilerOptions::set_EnableBurstSafetyChecks(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "set_EnableBurstSafetyChecks", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Unity::Burst::BurstCompilerOptions::get_ForceEnableBurstSafetyChecks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "get_ForceEnableBurstSafetyChecks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Burst::BurstCompilerOptions::set_ForceEnableBurstSafetyChecks(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "set_ForceEnableBurstSafetyChecks", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Unity::Burst::BurstCompilerOptions::get_EnableBurstDebug() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "get_EnableBurstDebug", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Burst::BurstCompilerOptions::set_EnableBurstDebug(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "set_EnableBurstDebug", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Unity::Burst::BurstCompilerOptions::get_DisableOptimizations() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "get_DisableOptimizations", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Burst::BurstCompilerOptions::set_DisableOptimizations(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "set_DisableOptimizations", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Unity::Burst::BurstCompilerOptions::get_EnableFastMath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "get_EnableFastMath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Burst::BurstCompilerOptions::set_EnableFastMath(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "set_EnableFastMath", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Unity::Burst::BurstCompilerOptions::get_EnableBurstTimings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "get_EnableBurstTimings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Burst::BurstCompilerOptions::set_EnableBurstTimings(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "set_EnableBurstTimings", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Unity::Burst::BurstCompilerOptions::get_RequiresSynchronousCompilation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "get_RequiresSynchronousCompilation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Action* Unity::Burst::BurstCompilerOptions::get_OptionsChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "get_OptionsChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Action*>(this, ___internal_method);
}
inline void Unity::Burst::BurstCompilerOptions::set_OptionsChanged(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "set_OptionsChanged", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Unity::Burst::BurstCompilerOptions* Unity::Burst::BurstCompilerOptions::Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Burst::BurstCompilerOptions*>(this, ___internal_method);
}
inline bool Unity::Burst::BurstCompilerOptions::TryGetAttribute(::System::Reflection::MemberInfo* member, ::by_ref<::Unity::Burst::BurstCompileAttribute*> attribute) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                                              { "TryGetAttribute", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::by_ref<::Unity::Burst::BurstCompileAttribute*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, member, attribute);
}
inline bool Unity::Burst::BurstCompilerOptions::TryGetAttribute(::System::Reflection::Assembly* assembly, ::by_ref<::Unity::Burst::BurstCompileAttribute*> attribute) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                                              { "TryGetAttribute", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::by_ref<::Unity::Burst::BurstCompileAttribute*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, assembly, attribute);
}
inline ::Unity::Burst::BurstCompileAttribute* Unity::Burst::BurstCompilerOptions::GetBurstCompileAttribute(::System::Reflection::MemberInfo* memberInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "GetBurstCompileAttribute", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Burst::BurstCompileAttribute*>(nullptr, ___internal_method, memberInfo);
}
inline bool Unity::Burst::BurstCompilerOptions::HasBurstCompileAttribute(::System::Reflection::MemberInfo* member) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "HasBurstCompileAttribute", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, member);
}
inline void Unity::Burst::BurstCompilerOptions::MergeAttributes(::by_ref<::Unity::Burst::BurstCompileAttribute*> memberAttribute, ::by_ref<::Unity::Burst::BurstCompileAttribute*> assemblyAttribute) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                          { "MergeAttributes", {}, { ::i2c::type_of<::by_ref<::Unity::Burst::BurstCompileAttribute*>>(), ::i2c::type_of<::by_ref<::Unity::Burst::BurstCompileAttribute*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, memberAttribute, assemblyAttribute);
}
inline bool Unity::Burst::BurstCompilerOptions::TryGetOptions(::System::Reflection::MemberInfo* member, ::by_ref<::StringW> flagsOut, bool isForILPostProcessing, bool isForCompilerClient) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                          { "TryGetOptions", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, member, flagsOut, isForILPostProcessing, isForCompilerClient);
}
inline ::StringW Unity::Burst::BurstCompilerOptions::GetOptions(::Unity::Burst::BurstCompileAttribute* attr, bool isForILPostProcessing, bool isForCompilerClient) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                                                           { "GetOptions", {}, { ::i2c::type_of<::Unity::Burst::BurstCompileAttribute*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, attr, isForILPostProcessing, isForCompilerClient);
}
inline void Unity::Burst::BurstCompilerOptions::AddOption(::System::Text::StringBuilder* builder, ::StringW option) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(),
                                                                                         { "AddOption", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, option);
}
inline ::StringW Unity::Burst::BurstCompilerOptions::GetOption(::StringW optionName, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "GetOption", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, optionName, value);
}
inline void Unity::Burst::BurstCompilerOptions::OnOptionsChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "OnOptionsChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Burst::BurstCompilerOptions::MaybeTriggerRecompilation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "MaybeTriggerRecompilation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::Burst::BurstCompilerOptions::CheckIsSecondaryUnityProcess() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::BurstCompilerOptions*>(), { "CheckIsSecondaryUnityProcess", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::Unity::Burst::BurstCompilerOptions* Unity::Burst::BurstCompilerOptions::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Burst::BurstCompilerOptions*>());
}
inline ::Unity::Burst::BurstCompilerOptions* Unity::Burst::BurstCompilerOptions::New_ctor(bool isGlobal) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Burst::BurstCompilerOptions*>(isGlobal));
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstCompilerOptions::BurstCompilerOptions() {}
