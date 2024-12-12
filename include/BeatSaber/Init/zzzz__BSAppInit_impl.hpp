#pragma once
// IWYU pragma private; include "BeatSaber/Init/BSAppInit.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__ArgumentOption_impl.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__CommandLineParserResult_impl.hpp"
#include "GlobalNamespace/zzzz__AppInit_impl.hpp"
#include "BeatSaber/Init/zzzz__BSAppInit_def.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__ArgumentOption_def.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__CommandLineParserResult_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::BeatSaber::Init::BSAppInit.get_commandLineArguments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGLib::DotnetExtension::CommandLine::CommandLineParserResult (::BeatSaber::Init::BSAppInit::*)()>(
    &::BeatSaber::Init::BSAppInit::get_commandLineArguments)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x226f3d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSAppInit*>::get(), "get_commandLineArguments",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::BSAppInit.set_commandLineArguments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Init::BSAppInit::*)(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult)>(
    &::BeatSaber::Init::BSAppInit::set_commandLineArguments)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x226f3ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSAppInit*>::get(), "set_commandLineArguments", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::DotnetExtension::CommandLine::CommandLineParserResult>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::BSAppInit.PreloadAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::BeatSaber::Init::BSAppInit::*)()>(&::BeatSaber::Init::BSAppInit::PreloadAsync)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x226f400;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSAppInit*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSAppInit*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::BSAppInit.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Init::BSAppInit::*)()>(&::BeatSaber::Init::BSAppInit::InstallBindings)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x226f4a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSAppInit*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSAppInit*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Init::BSAppInit._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Init::BSAppInit::*)()>(&::BeatSaber::Init::BSAppInit::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226f82c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSAppInit*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult& BeatSaber::Init::BSAppInit::__cordl_internal_get__commandLineArguments_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandLineArguments_k__BackingField;
}
constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult const& BeatSaber::Init::BSAppInit::__cordl_internal_get__commandLineArguments_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandLineArguments_k__BackingField;
}
constexpr void BeatSaber::Init::BSAppInit::__cordl_internal_set__commandLineArguments_k__BackingField(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____commandLineArguments_k__BackingField = value;
}
inline void BeatSaber::Init::BSAppInit::setStaticF_kFPFCOption(::BGLib::DotnetExtension::CommandLine::ArgumentOption value) {
  ::cordl_internals::setStaticField<::BGLib::DotnetExtension::CommandLine::ArgumentOption, "kFPFCOption", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSAppInit*>::get>(
      std::forward<::BGLib::DotnetExtension::CommandLine::ArgumentOption>(value));
}
inline ::BGLib::DotnetExtension::CommandLine::ArgumentOption BeatSaber::Init::BSAppInit::getStaticF_kFPFCOption() {
  return ::cordl_internals::getStaticField<::BGLib::DotnetExtension::CommandLine::ArgumentOption, "kFPFCOption",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSAppInit*>::get>();
}
inline void BeatSaber::Init::BSAppInit::setStaticF_kEditorModeOption(::BGLib::DotnetExtension::CommandLine::ArgumentOption value) {
  ::cordl_internals::setStaticField<::BGLib::DotnetExtension::CommandLine::ArgumentOption, "kEditorModeOption",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSAppInit*>::get>(
      std::forward<::BGLib::DotnetExtension::CommandLine::ArgumentOption>(value));
}
inline ::BGLib::DotnetExtension::CommandLine::ArgumentOption BeatSaber::Init::BSAppInit::getStaticF_kEditorModeOption() {
  return ::cordl_internals::getStaticField<::BGLib::DotnetExtension::CommandLine::ArgumentOption, "kEditorModeOption",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSAppInit*>::get>();
}
inline void BeatSaber::Init::BSAppInit::setStaticF_kAutoPlayOption(::BGLib::DotnetExtension::CommandLine::ArgumentOption value) {
  ::cordl_internals::setStaticField<::BGLib::DotnetExtension::CommandLine::ArgumentOption, "kAutoPlayOption",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSAppInit*>::get>(
      std::forward<::BGLib::DotnetExtension::CommandLine::ArgumentOption>(value));
}
inline ::BGLib::DotnetExtension::CommandLine::ArgumentOption BeatSaber::Init::BSAppInit::getStaticF_kAutoPlayOption() {
  return ::cordl_internals::getStaticField<::BGLib::DotnetExtension::CommandLine::ArgumentOption, "kAutoPlayOption",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSAppInit*>::get>();
}
inline void BeatSaber::Init::BSAppInit::setStaticF_kAutoRecOption(::BGLib::DotnetExtension::CommandLine::ArgumentOption value) {
  ::cordl_internals::setStaticField<::BGLib::DotnetExtension::CommandLine::ArgumentOption, "kAutoRecOption",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSAppInit*>::get>(
      std::forward<::BGLib::DotnetExtension::CommandLine::ArgumentOption>(value));
}
inline ::BGLib::DotnetExtension::CommandLine::ArgumentOption BeatSaber::Init::BSAppInit::getStaticF_kAutoRecOption() {
  return ::cordl_internals::getStaticField<::BGLib::DotnetExtension::CommandLine::ArgumentOption, "kAutoRecOption",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSAppInit*>::get>();
}
inline void BeatSaber::Init::BSAppInit::setStaticF_kRecordingToolOption(::BGLib::DotnetExtension::CommandLine::ArgumentOption value) {
  ::cordl_internals::setStaticField<::BGLib::DotnetExtension::CommandLine::ArgumentOption, "kRecordingToolOption",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSAppInit*>::get>(
      std::forward<::BGLib::DotnetExtension::CommandLine::ArgumentOption>(value));
}
inline ::BGLib::DotnetExtension::CommandLine::ArgumentOption BeatSaber::Init::BSAppInit::getStaticF_kRecordingToolOption() {
  return ::cordl_internals::getStaticField<::BGLib::DotnetExtension::CommandLine::ArgumentOption, "kRecordingToolOption",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSAppInit*>::get>();
}
inline void BeatSaber::Init::BSAppInit::setStaticF_kCustomSettings(::BGLib::DotnetExtension::CommandLine::ArgumentOption value) {
  ::cordl_internals::setStaticField<::BGLib::DotnetExtension::CommandLine::ArgumentOption, "kCustomSettings",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSAppInit*>::get>(
      std::forward<::BGLib::DotnetExtension::CommandLine::ArgumentOption>(value));
}
inline ::BGLib::DotnetExtension::CommandLine::ArgumentOption BeatSaber::Init::BSAppInit::getStaticF_kCustomSettings() {
  return ::cordl_internals::getStaticField<::BGLib::DotnetExtension::CommandLine::ArgumentOption, "kCustomSettings",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSAppInit*>::get>();
}
inline void BeatSaber::Init::BSAppInit::setStaticF_kRunCommandOption(::BGLib::DotnetExtension::CommandLine::ArgumentOption value) {
  ::cordl_internals::setStaticField<::BGLib::DotnetExtension::CommandLine::ArgumentOption, "kRunCommandOption",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSAppInit*>::get>(
      std::forward<::BGLib::DotnetExtension::CommandLine::ArgumentOption>(value));
}
inline ::BGLib::DotnetExtension::CommandLine::ArgumentOption BeatSaber::Init::BSAppInit::getStaticF_kRunCommandOption() {
  return ::cordl_internals::getStaticField<::BGLib::DotnetExtension::CommandLine::ArgumentOption, "kRunCommandOption",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSAppInit*>::get>();
}
inline void
BeatSaber::Init::BSAppInit::setStaticF_kProgramArgumentOptions(::ArrayW<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::Array<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::Array<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>, "kProgramArgumentOptions",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSAppInit*>::get>(
      std::forward<::ArrayW<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::Array<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>>(value));
}
inline ::ArrayW<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::Array<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>
BeatSaber::Init::BSAppInit::getStaticF_kProgramArgumentOptions() {
  return ::cordl_internals::getStaticField<::ArrayW<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::Array<::BGLib::DotnetExtension::CommandLine::ArgumentOption>*>, "kProgramArgumentOptions",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSAppInit*>::get>();
}
inline ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult BeatSaber::Init::BSAppInit::get_commandLineArguments() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSAppInit*>::get(), "get_commandLineArguments",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BGLib::DotnetExtension::CommandLine::CommandLineParserResult, false>(this, ___internal_method);
}
inline void BeatSaber::Init::BSAppInit::set_commandLineArguments(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSAppInit*>::get(), "set_commandLineArguments", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::DotnetExtension::CommandLine::CommandLineParserResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task* BeatSaber::Init::BSAppInit::PreloadAsync() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSAppInit*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void BeatSaber::Init::BSAppInit::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSAppInit*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::Init::BSAppInit::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Init::BSAppInit*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeatSaber::Init::BSAppInit* BeatSaber::Init::BSAppInit::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Init::BSAppInit*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Init::BSAppInit::BSAppInit() {}
