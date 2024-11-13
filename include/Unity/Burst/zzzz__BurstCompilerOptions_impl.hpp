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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<::StringW, ::Array<::StringW>*>, ::ArrayW<::StringW, ::Array<::StringW>*>, ::StringW)>(
    &::Unity::Burst::BurstCompilerOptions::SerialiseCompilationOptionsSafe)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x44a27cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "SerialiseCompilationOptionsSafe", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.DeserialiseCompilationOptionsSafe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ValueTuple_3<::ArrayW<::StringW, ::Array<::StringW>*>, ::ArrayW<::StringW, ::Array<::StringW>*>, ::StringW> (*)(::StringW)>(
        &::Unity::Burst::BurstCompilerOptions::DeserialiseCompilationOptionsSafe)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x44a29c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "DeserialiseCompilationOptionsSafe",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Burst::BurstCompilerOptions::*)()>(&::Unity::Burst::BurstCompilerOptions::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44a2cfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Burst::BurstCompilerOptions::*)(bool)>(&::Unity::Burst::BurstCompilerOptions::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x44a22b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.get_IsGlobal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Burst::BurstCompilerOptions::*)()>(&::Unity::Burst::BurstCompilerOptions::get_IsGlobal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44a2e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "get_IsGlobal",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.get_IsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Burst::BurstCompilerOptions::*)()>(&::Unity::Burst::BurstCompilerOptions::get_IsEnabled)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x44a2e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "get_IsEnabled",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.get_EnableBurstCompilation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Burst::BurstCompilerOptions::*)()>(
    &::Unity::Burst::BurstCompilerOptions::get_EnableBurstCompilation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44a2ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(),
                                                                               "get_EnableBurstCompilation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.set_EnableBurstCompilation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Burst::BurstCompilerOptions::*)(bool)>(
    &::Unity::Burst::BurstCompilerOptions::set_EnableBurstCompilation)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x44a2d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "set_EnableBurstCompilation",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.get_EnableBurstCompileSynchronously
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Burst::BurstCompilerOptions::*)()>(
    &::Unity::Burst::BurstCompilerOptions::get_EnableBurstCompileSynchronously)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44a2efc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "get_EnableBurstCompileSynchronously",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.set_EnableBurstCompileSynchronously
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Burst::BurstCompilerOptions::*)(bool)>(
    &::Unity::Burst::BurstCompilerOptions::set_EnableBurstCompileSynchronously)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x44a2f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "set_EnableBurstCompileSynchronously",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.get_EnableBurstSafetyChecks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Burst::BurstCompilerOptions::*)()>(
    &::Unity::Burst::BurstCompilerOptions::get_EnableBurstSafetyChecks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44a2f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(),
                                                                               "get_EnableBurstSafetyChecks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.set_EnableBurstSafetyChecks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Burst::BurstCompilerOptions::*)(bool)>(
    &::Unity::Burst::BurstCompilerOptions::set_EnableBurstSafetyChecks)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x44a2e2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "set_EnableBurstSafetyChecks",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.get_ForceEnableBurstSafetyChecks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Burst::BurstCompilerOptions::*)()>(
    &::Unity::Burst::BurstCompilerOptions::get_ForceEnableBurstSafetyChecks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44a2f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "get_ForceEnableBurstSafetyChecks",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.set_ForceEnableBurstSafetyChecks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Burst::BurstCompilerOptions::*)(bool)>(
    &::Unity::Burst::BurstCompilerOptions::set_ForceEnableBurstSafetyChecks)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x44a2f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "set_ForceEnableBurstSafetyChecks",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.get_EnableBurstDebug
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Burst::BurstCompilerOptions::*)()>(&::Unity::Burst::BurstCompilerOptions::get_EnableBurstDebug)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44a2f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(),
                                                                               "get_EnableBurstDebug", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.set_EnableBurstDebug
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Burst::BurstCompilerOptions::*)(bool)>(&::Unity::Burst::BurstCompilerOptions::set_EnableBurstDebug)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x44a2f80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "set_EnableBurstDebug",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.get_DisableOptimizations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Burst::BurstCompilerOptions::*)()>(&::Unity::Burst::BurstCompilerOptions::get_DisableOptimizations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44a2fb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(),
                                                                               "get_DisableOptimizations", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.set_DisableOptimizations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Burst::BurstCompilerOptions::*)(bool)>(
    &::Unity::Burst::BurstCompilerOptions::set_DisableOptimizations)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x44a2fb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "set_DisableOptimizations",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.get_EnableFastMath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Burst::BurstCompilerOptions::*)()>(&::Unity::Burst::BurstCompilerOptions::get_EnableFastMath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44a2fbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(),
                                                                               "get_EnableFastMath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.set_EnableFastMath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Burst::BurstCompilerOptions::*)(bool)>(&::Unity::Burst::BurstCompilerOptions::set_EnableFastMath)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x44a2fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "set_EnableFastMath",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.get_EnableBurstTimings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Burst::BurstCompilerOptions::*)()>(&::Unity::Burst::BurstCompilerOptions::get_EnableBurstTimings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44a2fc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(),
                                                                               "get_EnableBurstTimings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.set_EnableBurstTimings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Burst::BurstCompilerOptions::*)(bool)>(
    &::Unity::Burst::BurstCompilerOptions::set_EnableBurstTimings)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x44a2fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "set_EnableBurstTimings",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.get_RequiresSynchronousCompilation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Burst::BurstCompilerOptions::*)()>(
    &::Unity::Burst::BurstCompilerOptions::get_RequiresSynchronousCompilation)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x44a3000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "get_RequiresSynchronousCompilation",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.get_OptionsChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action* (::Unity::Burst::BurstCompilerOptions::*)()>(
    &::Unity::Burst::BurstCompilerOptions::get_OptionsChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44a3074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(),
                                                                               "get_OptionsChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.set_OptionsChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Burst::BurstCompilerOptions::*)(::System::Action*)>(
    &::Unity::Burst::BurstCompilerOptions::set_OptionsChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44a307c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "set_OptionsChanged",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Burst::BurstCompilerOptions* (::Unity::Burst::BurstCompilerOptions::*)()>(
    &::Unity::Burst::BurstCompilerOptions::Clone)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x44a3084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "Clone",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.TryGetAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::MemberInfo*, ByRef<::Unity::Burst::BurstCompileAttribute*>)>(
    &::Unity::Burst::BurstCompilerOptions::TryGetAttribute)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x44a31cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "TryGetAttribute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::BurstCompileAttribute*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.TryGetAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::Assembly*, ByRef<::Unity::Burst::BurstCompileAttribute*>)>(
    &::Unity::Burst::BurstCompilerOptions::TryGetAttribute)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x44a3678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "TryGetAttribute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::BurstCompileAttribute*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.GetBurstCompileAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Burst::BurstCompileAttribute* (*)(::System::Reflection::MemberInfo*)>(
    &::Unity::Burst::BurstCompilerOptions::GetBurstCompileAttribute)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x44a3258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "GetBurstCompileAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.HasBurstCompileAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::MemberInfo*)>(&::Unity::Burst::BurstCompilerOptions::HasBurstCompileAttribute)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x44a1678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "HasBurstCompileAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.MergeAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Unity::Burst::BurstCompileAttribute*>, ByRef<::Unity::Burst::BurstCompileAttribute*>)>(
    &::Unity::Burst::BurstCompilerOptions::MergeAttributes)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x44a36f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "MergeAttributes", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::BurstCompileAttribute*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::BurstCompileAttribute*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.TryGetOptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Burst::BurstCompilerOptions::*)(::System::Reflection::MemberInfo*, ByRef<::StringW>, bool, bool)>(
    &::Unity::Burst::BurstCompilerOptions::TryGetOptions)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x44a381c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "TryGetOptions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.GetOptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Burst::BurstCompilerOptions::*)(::Unity::Burst::BurstCompileAttribute*, bool, bool)>(
    &::Unity::Burst::BurstCompilerOptions::GetOptions)> {
  constexpr static std::size_t size = 0x664;
  constexpr static std::size_t addrs = 0x44a3938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "GetOptions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Burst::BurstCompileAttribute*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.AddOption
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Text::StringBuilder*, ::StringW)>(&::Unity::Burst::BurstCompilerOptions::AddOption)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x44a4080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "AddOption", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.GetOption
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::System::Object*)>(&::Unity::Burst::BurstCompilerOptions::GetOption)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x44a3f9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "GetOption", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.OnOptionsChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Burst::BurstCompilerOptions::*)()>(&::Unity::Burst::BurstCompilerOptions::OnOptionsChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x44a2ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "OnOptionsChanged",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.MaybeTriggerRecompilation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Burst::BurstCompilerOptions::*)()>(&::Unity::Burst::BurstCompilerOptions::MaybeTriggerRecompilation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x44a2f3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(),
                                                                               "MaybeTriggerRecompilation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstCompilerOptions.CheckIsSecondaryUnityProcess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Unity::Burst::BurstCompilerOptions::CheckIsSecondaryUnityProcess)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44a41dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(),
                                                                               "CheckIsSecondaryUnityProcess", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& Unity::Burst::BurstCompilerOptions::__cordl_internal_get__OptionsChanged_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OptionsChanged_k__BackingField;
}
constexpr void Unity::Burst::BurstCompilerOptions::__cordl_internal_set__OptionsChanged_k__BackingField(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____OptionsChanged_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Burst::BurstCompilerOptions::setStaticF_ForceDisableBurstCompilation(bool value) {
  ::cordl_internals::setStaticField<bool, "ForceDisableBurstCompilation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get>(
      std::forward<bool>(value));
}
inline bool Unity::Burst::BurstCompilerOptions::getStaticF_ForceDisableBurstCompilation() {
  return ::cordl_internals::getStaticField<bool, "ForceDisableBurstCompilation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get>();
}
inline void Unity::Burst::BurstCompilerOptions::setStaticF_ForceBurstCompilationSynchronously(bool value) {
  ::cordl_internals::setStaticField<bool, "ForceBurstCompilationSynchronously", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get>(
      std::forward<bool>(value));
}
inline bool Unity::Burst::BurstCompilerOptions::getStaticF_ForceBurstCompilationSynchronously() {
  return ::cordl_internals::getStaticField<bool, "ForceBurstCompilationSynchronously", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get>();
}
inline void Unity::Burst::BurstCompilerOptions::setStaticF_IsSecondaryUnityProcess(bool value) {
  ::cordl_internals::setStaticField<bool, "IsSecondaryUnityProcess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get>(std::forward<bool>(value));
}
inline bool Unity::Burst::BurstCompilerOptions::getStaticF_IsSecondaryUnityProcess() {
  return ::cordl_internals::getStaticField<bool, "IsSecondaryUnityProcess", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get>();
}
inline ::StringW Unity::Burst::BurstCompilerOptions::SerialiseCompilationOptionsSafe(::ArrayW<::StringW, ::Array<::StringW>*> roots, ::ArrayW<::StringW, ::Array<::StringW>*> folders,
                                                                                     ::StringW options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "SerialiseCompilationOptionsSafe", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, roots, folders, options);
}
inline ::System::ValueTuple_3<::ArrayW<::StringW, ::Array<::StringW>*>, ::ArrayW<::StringW, ::Array<::StringW>*>, ::StringW>
Unity::Burst::BurstCompilerOptions::DeserialiseCompilationOptionsSafe(::StringW from) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "DeserialiseCompilationOptionsSafe",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_3<::ArrayW<::StringW, ::Array<::StringW>*>, ::ArrayW<::StringW, ::Array<::StringW>*>, ::StringW>, false>(nullptr, ___internal_method,
                                                                                                                                                                           from);
}
inline ::Unity::Burst::BurstCompilerOptions* Unity::Burst::BurstCompilerOptions::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Burst::BurstCompilerOptions*>());
}
inline void Unity::Burst::BurstCompilerOptions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Burst::BurstCompilerOptions* Unity::Burst::BurstCompilerOptions::New_ctor(bool isGlobal) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Burst::BurstCompilerOptions*>(isGlobal));
}
inline void Unity::Burst::BurstCompilerOptions::_ctor(bool isGlobal) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isGlobal);
}
inline bool Unity::Burst::BurstCompilerOptions::get_IsGlobal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "get_IsGlobal",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Unity::Burst::BurstCompilerOptions::get_IsEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "get_IsEnabled",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Unity::Burst::BurstCompilerOptions::get_EnableBurstCompilation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(),
                                                                             "get_EnableBurstCompilation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Burst::BurstCompilerOptions::set_EnableBurstCompilation(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "set_EnableBurstCompilation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Unity::Burst::BurstCompilerOptions::get_EnableBurstCompileSynchronously() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "get_EnableBurstCompileSynchronously",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Burst::BurstCompilerOptions::set_EnableBurstCompileSynchronously(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "set_EnableBurstCompileSynchronously",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Unity::Burst::BurstCompilerOptions::get_EnableBurstSafetyChecks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(),
                                                                             "get_EnableBurstSafetyChecks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Burst::BurstCompilerOptions::set_EnableBurstSafetyChecks(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "set_EnableBurstSafetyChecks",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Unity::Burst::BurstCompilerOptions::get_ForceEnableBurstSafetyChecks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(),
                                                                             "get_ForceEnableBurstSafetyChecks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Burst::BurstCompilerOptions::set_ForceEnableBurstSafetyChecks(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "set_ForceEnableBurstSafetyChecks",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Unity::Burst::BurstCompilerOptions::get_EnableBurstDebug() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(),
                                                                             "get_EnableBurstDebug", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Burst::BurstCompilerOptions::set_EnableBurstDebug(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "set_EnableBurstDebug",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Unity::Burst::BurstCompilerOptions::get_DisableOptimizations() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(),
                                                                             "get_DisableOptimizations", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Burst::BurstCompilerOptions::set_DisableOptimizations(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "set_DisableOptimizations",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Unity::Burst::BurstCompilerOptions::get_EnableFastMath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "get_EnableFastMath",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Burst::BurstCompilerOptions::set_EnableFastMath(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "set_EnableFastMath",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Unity::Burst::BurstCompilerOptions::get_EnableBurstTimings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(),
                                                                             "get_EnableBurstTimings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Burst::BurstCompilerOptions::set_EnableBurstTimings(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "set_EnableBurstTimings",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Unity::Burst::BurstCompilerOptions::get_RequiresSynchronousCompilation() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "get_RequiresSynchronousCompilation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Action* Unity::Burst::BurstCompilerOptions::get_OptionsChanged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "get_OptionsChanged",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action*, false>(this, ___internal_method);
}
inline void Unity::Burst::BurstCompilerOptions::set_OptionsChanged(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "set_OptionsChanged", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Burst::BurstCompilerOptions* Unity::Burst::BurstCompilerOptions::Clone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "Clone",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Burst::BurstCompilerOptions*, false>(this, ___internal_method);
}
inline bool Unity::Burst::BurstCompilerOptions::TryGetAttribute(::System::Reflection::MemberInfo* member, ByRef<::Unity::Burst::BurstCompileAttribute*> attribute) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "TryGetAttribute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::BurstCompileAttribute*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, member, attribute);
}
inline bool Unity::Burst::BurstCompilerOptions::TryGetAttribute(::System::Reflection::Assembly* assembly, ByRef<::Unity::Burst::BurstCompileAttribute*> attribute) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "TryGetAttribute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::BurstCompileAttribute*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, assembly, attribute);
}
inline ::Unity::Burst::BurstCompileAttribute* Unity::Burst::BurstCompilerOptions::GetBurstCompileAttribute(::System::Reflection::MemberInfo* memberInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "GetBurstCompileAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Burst::BurstCompileAttribute*, false>(nullptr, ___internal_method, memberInfo);
}
inline bool Unity::Burst::BurstCompilerOptions::HasBurstCompileAttribute(::System::Reflection::MemberInfo* member) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "HasBurstCompileAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, member);
}
inline void Unity::Burst::BurstCompilerOptions::MergeAttributes(ByRef<::Unity::Burst::BurstCompileAttribute*> memberAttribute, ByRef<::Unity::Burst::BurstCompileAttribute*> assemblyAttribute) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "MergeAttributes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::BurstCompileAttribute*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Burst::BurstCompileAttribute*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, memberAttribute, assemblyAttribute);
}
/// @param isForILPostProcessing: bool (default: false)
/// @param isForCompilerClient: bool (default: false)
inline bool Unity::Burst::BurstCompilerOptions::TryGetOptions(::System::Reflection::MemberInfo* member, ByRef<::StringW> flagsOut, bool isForILPostProcessing, bool isForCompilerClient) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "TryGetOptions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, member, flagsOut, isForILPostProcessing, isForCompilerClient);
}
/// @param attr: ::Unity::Burst::BurstCompileAttribute* (default: nullptr)
/// @param isForILPostProcessing: bool (default: false)
/// @param isForCompilerClient: bool (default: false)
inline ::StringW Unity::Burst::BurstCompilerOptions::GetOptions(::Unity::Burst::BurstCompileAttribute* attr, bool isForILPostProcessing, bool isForCompilerClient) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "GetOptions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Burst::BurstCompileAttribute*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, attr, isForILPostProcessing, isForCompilerClient);
}
inline void Unity::Burst::BurstCompilerOptions::AddOption(::System::Text::StringBuilder* builder, ::StringW option) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "AddOption", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, option);
}
/// @param value: ::System::Object* (default: nullptr)
inline ::StringW Unity::Burst::BurstCompilerOptions::GetOption(::StringW optionName, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "GetOption", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, optionName, value);
}
inline void Unity::Burst::BurstCompilerOptions::OnOptionsChanged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(), "OnOptionsChanged",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Burst::BurstCompilerOptions::MaybeTriggerRecompilation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(),
                                                                             "MaybeTriggerRecompilation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Unity::Burst::BurstCompilerOptions::CheckIsSecondaryUnityProcess() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Burst::BurstCompilerOptions*>::get(),
                                                                             "CheckIsSecondaryUnityProcess", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstCompilerOptions::BurstCompilerOptions() {}
