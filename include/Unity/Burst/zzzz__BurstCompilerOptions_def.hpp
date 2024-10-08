#pragma once
// IWYU pragma private; include "Unity/Burst/BurstCompilerOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BurstCompilerOptions)
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace System {
template <typename T1, typename T2, typename T3> struct ValueTuple_3;
}
namespace Unity::Burst {
class BurstCompileAttribute;
}
// Forward declare root types
namespace Unity::Burst {
class BurstCompilerOptions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Burst::BurstCompilerOptions);
// Type: Unity.Burst::BurstCompilerOptions
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Burst {
// Is value type: false
// CS Name: ::Unity.Burst::BurstCompilerOptions*
class CORDL_TYPE BurstCompilerOptions : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_DisableOptimizations, put = set_DisableOptimizations)) bool DisableOptimizations;

  __declspec(property(get = get_EnableBurstCompilation, put = set_EnableBurstCompilation)) bool EnableBurstCompilation;

  __declspec(property(get = get_EnableBurstCompileSynchronously, put = set_EnableBurstCompileSynchronously)) bool EnableBurstCompileSynchronously;

  __declspec(property(get = get_EnableBurstDebug, put = set_EnableBurstDebug)) bool EnableBurstDebug;

  __declspec(property(get = get_EnableBurstSafetyChecks, put = set_EnableBurstSafetyChecks)) bool EnableBurstSafetyChecks;

  __declspec(property(get = get_EnableBurstTimings, put = set_EnableBurstTimings)) bool EnableBurstTimings;

  __declspec(property(get = get_EnableFastMath, put = set_EnableFastMath)) bool EnableFastMath;

  /// @brief Field ForceBurstCompilationSynchronously, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_ForceBurstCompilationSynchronously, put = setStaticF_ForceBurstCompilationSynchronously)) bool ForceBurstCompilationSynchronously;

  /// @brief Field ForceDisableBurstCompilation, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_ForceDisableBurstCompilation, put = setStaticF_ForceDisableBurstCompilation)) bool ForceDisableBurstCompilation;

  __declspec(property(get = get_ForceEnableBurstSafetyChecks, put = set_ForceEnableBurstSafetyChecks)) bool ForceEnableBurstSafetyChecks;

  __declspec(property(get = get_IsEnabled)) bool IsEnabled;

  __declspec(property(get = get_IsGlobal)) bool IsGlobal;

  /// @brief Field IsSecondaryUnityProcess, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_IsSecondaryUnityProcess, put = setStaticF_IsSecondaryUnityProcess)) bool IsSecondaryUnityProcess;

  __declspec(property(get = get_OptionsChanged, put = set_OptionsChanged)) ::System::Action* OptionsChanged;

  __declspec(property(get = get_RequiresSynchronousCompilation)) bool RequiresSynchronousCompilation;

  /// @brief Field <IsGlobal>k__BackingField, offset 0x16, size 0x1
  __declspec(property(get = __cordl_internal_get__IsGlobal_k__BackingField, put = __cordl_internal_set__IsGlobal_k__BackingField)) bool _IsGlobal_k__BackingField;

  /// @brief Field <OptionsChanged>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__OptionsChanged_k__BackingField, put = __cordl_internal_set__OptionsChanged_k__BackingField)) ::System::Action* _OptionsChanged_k__BackingField;

  /// @brief Field _enableBurstCompilation, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__enableBurstCompilation, put = __cordl_internal_set__enableBurstCompilation)) bool _enableBurstCompilation;

  /// @brief Field _enableBurstCompileSynchronously, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get__enableBurstCompileSynchronously, put = __cordl_internal_set__enableBurstCompileSynchronously)) bool _enableBurstCompileSynchronously;

  /// @brief Field _enableBurstDebug, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get__enableBurstDebug, put = __cordl_internal_set__enableBurstDebug)) bool _enableBurstDebug;

  /// @brief Field _enableBurstSafetyChecks, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get__enableBurstSafetyChecks, put = __cordl_internal_set__enableBurstSafetyChecks)) bool _enableBurstSafetyChecks;

  /// @brief Field _enableBurstTimings, offset 0x13, size 0x1
  __declspec(property(get = __cordl_internal_get__enableBurstTimings, put = __cordl_internal_set__enableBurstTimings)) bool _enableBurstTimings;

  /// @brief Field _forceEnableBurstSafetyChecks, offset 0x15, size 0x1
  __declspec(property(get = __cordl_internal_get__forceEnableBurstSafetyChecks, put = __cordl_internal_set__forceEnableBurstSafetyChecks)) bool _forceEnableBurstSafetyChecks;

  /// @brief Method AddOption, addr 0x448f968, size 0x4c, virtual false, abstract: false, final false
  static inline void AddOption(::System::Text::StringBuilder* builder, ::StringW option);

  /// @brief Method CheckIsSecondaryUnityProcess, addr 0x448fac4, size 0x8, virtual false, abstract: false, final false
  static inline bool CheckIsSecondaryUnityProcess();

  /// @brief Method Clone, addr 0x448e96c, size 0x148, virtual false, abstract: false, final false
  inline ::Unity::Burst::BurstCompilerOptions* Clone();

  /// @brief Method DeserialiseCompilationOptionsSafe, addr 0x448e2ac, size 0xac, virtual false, abstract: false, final false
  static inline ::System::ValueTuple_3<::ArrayW<::StringW, ::Array<::StringW>*>, ::ArrayW<::StringW, ::Array<::StringW>*>, ::StringW> DeserialiseCompilationOptionsSafe(::StringW from);

  /// @brief Method GetBurstCompileAttribute, addr 0x448eb40, size 0x420, virtual false, abstract: false, final false
  static inline ::Unity::Burst::BurstCompileAttribute* GetBurstCompileAttribute(::System::Reflection::MemberInfo* memberInfo);

  /// @brief Method GetOption, addr 0x448f884, size 0xe4, virtual false, abstract: false, final false
  static inline ::StringW GetOption(::StringW optionName, ::System::Object* value);

  /// @brief Method GetOptions, addr 0x448f220, size 0x664, virtual false, abstract: false, final false
  inline ::StringW GetOptions(::Unity::Burst::BurstCompileAttribute* attr, bool isForILPostProcessing, bool isForCompilerClient);

  /// @brief Method HasBurstCompileAttribute, addr 0x448cf60, size 0xc0, virtual false, abstract: false, final false
  static inline bool HasBurstCompileAttribute(::System::Reflection::MemberInfo* member);

  /// @brief Method MaybeTriggerRecompilation, addr 0x448e824, size 0x4, virtual false, abstract: false, final false
  inline void MaybeTriggerRecompilation();

  /// @brief Method MergeAttributes, addr 0x448efdc, size 0x128, virtual false, abstract: false, final false
  static inline void MergeAttributes(ByRef<::Unity::Burst::BurstCompileAttribute*> memberAttribute, ByRef<::Unity::Burst::BurstCompileAttribute*> assemblyAttribute);

  static inline ::Unity::Burst::BurstCompilerOptions* New_ctor();

  static inline ::Unity::Burst::BurstCompilerOptions* New_ctor(bool isGlobal);

  /// @brief Method OnOptionsChanged, addr 0x448e7c8, size 0x1c, virtual false, abstract: false, final false
  inline void OnOptionsChanged();

  /// @brief Method SerialiseCompilationOptionsSafe, addr 0x448e0b4, size 0xa8, virtual false, abstract: false, final false
  static inline ::StringW SerialiseCompilationOptionsSafe(::ArrayW<::StringW, ::Array<::StringW>*> roots, ::ArrayW<::StringW, ::Array<::StringW>*> folders, ::StringW options);

  /// @brief Method TryGetAttribute, addr 0x448ef60, size 0x7c, virtual false, abstract: false, final false
  static inline bool TryGetAttribute(::System::Reflection::Assembly* assembly, ByRef<::Unity::Burst::BurstCompileAttribute*> attribute);

  /// @brief Method TryGetAttribute, addr 0x448eab4, size 0x8c, virtual false, abstract: false, final false
  static inline bool TryGetAttribute(::System::Reflection::MemberInfo* member, ByRef<::Unity::Burst::BurstCompileAttribute*> attribute);

  /// @brief Method TryGetOptions, addr 0x448f104, size 0x11c, virtual false, abstract: false, final false
  inline bool TryGetOptions(::System::Reflection::MemberInfo* member, ByRef<::StringW> flagsOut, bool isForILPostProcessing, bool isForCompilerClient);

  constexpr bool const& __cordl_internal_get__IsGlobal_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsGlobal_k__BackingField();

  constexpr ::System::Action*& __cordl_internal_get__OptionsChanged_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get__OptionsChanged_k__BackingField() const;

  constexpr bool const& __cordl_internal_get__enableBurstCompilation() const;

  constexpr bool& __cordl_internal_get__enableBurstCompilation();

  constexpr bool const& __cordl_internal_get__enableBurstCompileSynchronously() const;

  constexpr bool& __cordl_internal_get__enableBurstCompileSynchronously();

  constexpr bool const& __cordl_internal_get__enableBurstDebug() const;

  constexpr bool& __cordl_internal_get__enableBurstDebug();

  constexpr bool const& __cordl_internal_get__enableBurstSafetyChecks() const;

  constexpr bool& __cordl_internal_get__enableBurstSafetyChecks();

  constexpr bool const& __cordl_internal_get__enableBurstTimings() const;

  constexpr bool& __cordl_internal_get__enableBurstTimings();

  constexpr bool const& __cordl_internal_get__forceEnableBurstSafetyChecks() const;

  constexpr bool& __cordl_internal_get__forceEnableBurstSafetyChecks();

  constexpr void __cordl_internal_set__IsGlobal_k__BackingField(bool value);

  constexpr void __cordl_internal_set__OptionsChanged_k__BackingField(::System::Action* value);

  constexpr void __cordl_internal_set__enableBurstCompilation(bool value);

  constexpr void __cordl_internal_set__enableBurstCompileSynchronously(bool value);

  constexpr void __cordl_internal_set__enableBurstDebug(bool value);

  constexpr void __cordl_internal_set__enableBurstSafetyChecks(bool value);

  constexpr void __cordl_internal_set__enableBurstTimings(bool value);

  constexpr void __cordl_internal_set__forceEnableBurstSafetyChecks(bool value);

  /// @brief Method .ctor, addr 0x448e5e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x448db98, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(bool isGlobal);

  static inline bool getStaticF_ForceBurstCompilationSynchronously();

  static inline bool getStaticF_ForceDisableBurstCompilation();

  static inline bool getStaticF_IsSecondaryUnityProcess();

  /// @brief Method get_DisableOptimizations, addr 0x448e898, size 0x8, virtual false, abstract: false, final false
  inline bool get_DisableOptimizations();

  /// @brief Method get_EnableBurstCompilation, addr 0x448e7c0, size 0x8, virtual false, abstract: false, final false
  inline bool get_EnableBurstCompilation();

  /// @brief Method get_EnableBurstCompileSynchronously, addr 0x448e7e4, size 0x8, virtual false, abstract: false, final false
  inline bool get_EnableBurstCompileSynchronously();

  /// @brief Method get_EnableBurstDebug, addr 0x448e860, size 0x8, virtual false, abstract: false, final false
  inline bool get_EnableBurstDebug();

  /// @brief Method get_EnableBurstSafetyChecks, addr 0x448e81c, size 0x8, virtual false, abstract: false, final false
  inline bool get_EnableBurstSafetyChecks();

  /// @brief Method get_EnableBurstTimings, addr 0x448e8b0, size 0x8, virtual false, abstract: false, final false
  inline bool get_EnableBurstTimings();

  /// @brief Method get_EnableFastMath, addr 0x448e8a4, size 0x8, virtual false, abstract: false, final false
  inline bool get_EnableFastMath();

  /// @brief Method get_ForceEnableBurstSafetyChecks, addr 0x448e828, size 0x8, virtual false, abstract: false, final false
  inline bool get_ForceEnableBurstSafetyChecks();

  /// @brief Method get_IsEnabled, addr 0x448e74c, size 0x74, virtual false, abstract: false, final false
  inline bool get_IsEnabled();

  /// @brief Method get_IsGlobal, addr 0x448e744, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsGlobal();

  /// @brief Method get_OptionsChanged, addr 0x448e95c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action* get_OptionsChanged();

  /// @brief Method get_RequiresSynchronousCompilation, addr 0x448e8e8, size 0x74, virtual false, abstract: false, final false
  inline bool get_RequiresSynchronousCompilation();

  static inline void setStaticF_ForceBurstCompilationSynchronously(bool value);

  static inline void setStaticF_ForceDisableBurstCompilation(bool value);

  static inline void setStaticF_IsSecondaryUnityProcess(bool value);

  /// @brief Method set_DisableOptimizations, addr 0x448e8a0, size 0x4, virtual false, abstract: false, final false
  inline void set_DisableOptimizations(bool value);

  /// @brief Method set_EnableBurstCompilation, addr 0x448e5ec, size 0x128, virtual false, abstract: false, final false
  inline void set_EnableBurstCompilation(bool value);

  /// @brief Method set_EnableBurstCompileSynchronously, addr 0x448e7ec, size 0x30, virtual false, abstract: false, final false
  inline void set_EnableBurstCompileSynchronously(bool value);

  /// @brief Method set_EnableBurstDebug, addr 0x448e868, size 0x30, virtual false, abstract: false, final false
  inline void set_EnableBurstDebug(bool value);

  /// @brief Method set_EnableBurstSafetyChecks, addr 0x448e714, size 0x30, virtual false, abstract: false, final false
  inline void set_EnableBurstSafetyChecks(bool value);

  /// @brief Method set_EnableBurstTimings, addr 0x448e8b8, size 0x30, virtual false, abstract: false, final false
  inline void set_EnableBurstTimings(bool value);

  /// @brief Method set_EnableFastMath, addr 0x448e8ac, size 0x4, virtual false, abstract: false, final false
  inline void set_EnableFastMath(bool value);

  /// @brief Method set_ForceEnableBurstSafetyChecks, addr 0x448e830, size 0x30, virtual false, abstract: false, final false
  inline void set_ForceEnableBurstSafetyChecks(bool value);

  /// @brief Method set_OptionsChanged, addr 0x448e964, size 0x8, virtual false, abstract: false, final false
  inline void set_OptionsChanged(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstCompilerOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BurstCompilerOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstCompilerOptions(BurstCompilerOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstCompilerOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstCompilerOptions(BurstCompilerOptions const&) = delete;

  /// @brief Field _enableBurstCompilation, offset: 0x10, size: 0x1, def value: None
  bool ____enableBurstCompilation;

  /// @brief Field _enableBurstCompileSynchronously, offset: 0x11, size: 0x1, def value: None
  bool ____enableBurstCompileSynchronously;

  /// @brief Field _enableBurstSafetyChecks, offset: 0x12, size: 0x1, def value: None
  bool ____enableBurstSafetyChecks;

  /// @brief Field _enableBurstTimings, offset: 0x13, size: 0x1, def value: None
  bool ____enableBurstTimings;

  /// @brief Field _enableBurstDebug, offset: 0x14, size: 0x1, def value: None
  bool ____enableBurstDebug;

  /// @brief Field _forceEnableBurstSafetyChecks, offset: 0x15, size: 0x1, def value: None
  bool ____forceEnableBurstSafetyChecks;

  /// @brief Field <IsGlobal>k__BackingField, offset: 0x16, size: 0x1, def value: None
  bool ____IsGlobal_k__BackingField;

  /// @brief Field <OptionsChanged>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ____OptionsChanged_k__BackingField;

  /// @brief Field BurstInitializeExternalsName offset 0xffffffff size 0x8
  static constexpr ::ConstString BurstInitializeExternalsName{ u"burst.initialize.externals" };

  /// @brief Field BurstInitializeName offset 0xffffffff size 0x8
  static constexpr ::ConstString BurstInitializeName{ u"burst.initialize" };

  /// @brief Field BurstInitializeStaticsName offset 0xffffffff size 0x8
  static constexpr ::ConstString BurstInitializeStaticsName{ u"burst.initialize.statics" };

  /// @brief Field CompilerCommandAotCompilation offset 0xffffffff size 0x8
  static constexpr ::ConstString CompilerCommandAotCompilation{ u"$aot_compilation" };

  /// @brief Field CompilerCommandCancel offset 0xffffffff size 0x8
  static constexpr ::ConstString CompilerCommandCancel{ u"$cancel" };

  /// @brief Field CompilerCommandDisableCompiler offset 0xffffffff size 0x8
  static constexpr ::ConstString CompilerCommandDisableCompiler{ u"$disable_compiler" };

  /// @brief Field CompilerCommandDomainReload offset 0xffffffff size 0x8
  static constexpr ::ConstString CompilerCommandDomainReload{ u"$domain_reload" };

  /// @brief Field CompilerCommandEnableCompiler offset 0xffffffff size 0x8
  static constexpr ::ConstString CompilerCommandEnableCompiler{ u"$enable_compiler" };

  /// @brief Field CompilerCommandGetTargetCpuFromHost offset 0xffffffff size 0x8
  static constexpr ::ConstString CompilerCommandGetTargetCpuFromHost{ u"$get_target_cpu_from_host" };

  /// @brief Field CompilerCommandILPPCompilation offset 0xffffffff size 0x8
  static constexpr ::ConstString CompilerCommandILPPCompilation{ u"$ilpp_compilation" };

  /// @brief Field CompilerCommandInitialiseDebuggerCommmand offset 0xffffffff size 0x8
  static constexpr ::ConstString CompilerCommandInitialiseDebuggerCommmand{ u"$load_debugger_interface" };

  /// @brief Field CompilerCommandInitialize offset 0xffffffff size 0x8
  static constexpr ::ConstString CompilerCommandInitialize{ u"$initialize" };

  /// @brief Field CompilerCommandIsArmTestEnv offset 0xffffffff size 0x8
  static constexpr ::ConstString CompilerCommandIsArmTestEnv{ u"$is_arm_test_env" };

  /// @brief Field CompilerCommandIsCurrentCompilationDone offset 0xffffffff size 0x8
  static constexpr ::ConstString CompilerCommandIsCurrentCompilationDone{ u"$is_current_compilation_done" };

  /// @brief Field CompilerCommandIsNativeApiAvailable offset 0xffffffff size 0x8
  static constexpr ::ConstString CompilerCommandIsNativeApiAvailable{ u"$is_native_api_available" };

  /// @brief Field CompilerCommandNotifyAssemblyCompilationFinished offset 0xffffffff size 0x8
  static constexpr ::ConstString CompilerCommandNotifyAssemblyCompilationFinished{ u"$notify_assembly_compilation_finished" };

  /// @brief Field CompilerCommandNotifyAssemblyCompilationNotRequired offset 0xffffffff size 0x8
  static constexpr ::ConstString CompilerCommandNotifyAssemblyCompilationNotRequired{ u"$notify_assembly_compilation_not_required" };

  /// @brief Field CompilerCommandNotifyCompilationFinished offset 0xffffffff size 0x8
  static constexpr ::ConstString CompilerCommandNotifyCompilationFinished{ u"$notify_compilation_finished" };

  /// @brief Field CompilerCommandNotifyCompilationStarted offset 0xffffffff size 0x8
  static constexpr ::ConstString CompilerCommandNotifyCompilationStarted{ u"$notify_compilation_started" };

  /// @brief Field CompilerCommandRequestInitialiseDebuggerCommmand offset 0xffffffff size 0x8
  static constexpr ::ConstString CompilerCommandRequestInitialiseDebuggerCommmand{ u"$request_debug_command" };

  /// @brief Field CompilerCommandRequestSetProtocolVersionEditor offset 0xffffffff size 0x8
  static constexpr ::ConstString CompilerCommandRequestSetProtocolVersionEditor{ u"$request_set_protocol_version_editor" };

  /// @brief Field CompilerCommandSetDefaultOptions offset 0xffffffff size 0x8
  static constexpr ::ConstString CompilerCommandSetDefaultOptions{ u"$set_default_options" };

  /// @brief Field CompilerCommandSetProfileCallbacks offset 0xffffffff size 0x8
  static constexpr ::ConstString CompilerCommandSetProfileCallbacks{ u"$set_profile_callbacks" };

  /// @brief Field CompilerCommandSetProtocolVersionBurst offset 0xffffffff size 0x8
  static constexpr ::ConstString CompilerCommandSetProtocolVersionBurst{ u"$set_protocol_version_burst" };

  /// @brief Field CompilerCommandShutdown offset 0xffffffff size 0x8
  static constexpr ::ConstString CompilerCommandShutdown{ u"$shutdown" };

  /// @brief Field CompilerCommandTriggerRecompilation offset 0xffffffff size 0x8
  static constexpr ::ConstString CompilerCommandTriggerRecompilation{ u"$trigger_recompilation" };

  /// @brief Field CompilerCommandTriggerSetupRecompilation offset 0xffffffff size 0x8
  static constexpr ::ConstString CompilerCommandTriggerSetupRecompilation{ u"$trigger_setup_recompilation" };

  /// @brief Field CompilerCommandUnloadBurstNatives offset 0xffffffff size 0x8
  static constexpr ::ConstString CompilerCommandUnloadBurstNatives{ u"$unload_burst_natives" };

  /// @brief Field CompilerCommandVersionNotification offset 0xffffffff size 0x8
  static constexpr ::ConstString CompilerCommandVersionNotification{ u"$version" };

  /// @brief Field DefaultLibraryName offset 0xffffffff size 0x8
  static constexpr ::ConstString DefaultLibraryName{ u"lib_burst_generated" };

  /// @brief Field DisableCompilationArg offset 0xffffffff size 0x8
  static constexpr ::ConstString DisableCompilationArg{ u"--burst-disable-compilation" };

  /// @brief Field ForceSynchronousCompilationArg offset 0xffffffff size 0x8
  static constexpr ::ConstString ForceSynchronousCompilationArg{ u"--burst-force-sync-compilation" };

  /// @brief Field OptionAlwaysCreateOutput offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionAlwaysCreateOutput{ u"always-create-output=" };

  /// @brief Field OptionAotAssembly offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionAotAssembly{ u"assembly=" };

  /// @brief Field OptionAotAssemblyFolder offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionAotAssemblyFolder{ u"assembly-folder=" };

  /// @brief Field OptionAotDecodeFolder offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionAotDecodeFolder{ u"decode-folder=" };

  /// @brief Field OptionAotEmitLlvmObjects offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionAotEmitLlvmObjects{ u"emit-llvm-objects" };

  /// @brief Field OptionAotKeepIntermediateFiles offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionAotKeepIntermediateFiles{ u"keep-intermediate-files" };

  /// @brief Field OptionAotKeyFolder offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionAotKeyFolder{ u"key-folder=" };

  /// @brief Field OptionAotMethod offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionAotMethod{ u"method=" };

  /// @brief Field OptionAotNoLink offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionAotNoLink{ u"nolink" };

  /// @brief Field OptionAotNoNativeToolchain offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionAotNoNativeToolchain{ u"no-native-toolchain" };

  /// @brief Field OptionAotOnlyStaticMethods offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionAotOnlyStaticMethods{ u"only-static-methods" };

  /// @brief Field OptionAotOutputPath offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionAotOutputPath{ u"output=" };

  /// @brief Field OptionAotPdbSearchPaths offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionAotPdbSearchPaths{ u"pdb-search-paths=" };

  /// @brief Field OptionAotType offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionAotType{ u"type=" };

  /// @brief Field OptionAssemblyDefines offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionAssemblyDefines{ u"assembly-defines=" };

  /// @brief Field OptionBackend offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionBackend{ u"backend=" };

  /// @brief Field OptionBranchProtection offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionBranchProtection{ u"branch-protection=" };

  /// @brief Field OptionBurstcSwitch offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionBurstcSwitch{ u"+burstc" };

  /// @brief Field OptionCacheDirectory offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionCacheDirectory{ u"cache-directory=" };

  /// @brief Field OptionChunkSize offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionChunkSize{ u"chunk-size=" };

  /// @brief Field OptionCompilationId offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionCompilationId{ u"compilation-id=" };

  /// @brief Field OptionCompilerThreads offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionCompilerThreads{ u"threads=" };

  /// @brief Field OptionDebug offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionDebug{ u"debug=" };

  /// @brief Field OptionDebugMode offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionDebugMode{ u"debugMode" };

  /// @brief Field OptionDebugTrap offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionDebugTrap{ u"debugtrap" };

  /// @brief Field OptionDisableOpt offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionDisableOpt{ u"disable-opt" };

  /// @brief Field OptionDisableSafetyChecks offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionDisableSafetyChecks{ u"disable-safety-checks" };

  /// @brief Field OptionDisableStringInterpolationInExceptionMessages offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionDisableStringInterpolationInExceptionMessages{ u"disable-string-interpolation-in-exception-messages" };

  /// @brief Field OptionDisableVectors offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionDisableVectors{ u"disable-vectors" };

  /// @brief Field OptionDisableWarnings offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionDisableWarnings{ u"disable-warnings=" };

  /// @brief Field OptionDiscardAssemblies offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionDiscardAssemblies{ u"discard-assemblies=" };

  /// @brief Field OptionDump offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionDump{ u"dump=" };

  /// @brief Field OptionEnableAutoLayoutFallbackCheck offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionEnableAutoLayoutFallbackCheck{ u"enable-autolayout-fallback-check" };

  /// @brief Field OptionEnableDirectExternalLinking offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionEnableDirectExternalLinking{ u"enable-direct-external-linking" };

  /// @brief Field OptionEnableInterpreter offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionEnableInterpreter{ u"enable-interpreter" };

  /// @brief Field OptionFastMath offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionFastMath{ u"fastmath" };

  /// @brief Field OptionFloatMode offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionFloatMode{ u"float-mode=" };

  /// @brief Field OptionFloatPrecision offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionFloatPrecision{ u"float-precision=" };

  /// @brief Field OptionFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionFormat{ u"format=" };

  /// @brief Field OptionGenerateLinkXml offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionGenerateLinkXml{ u"generate-link-xml=" };

  /// @brief Field OptionGlobalSafetyChecksSetting offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionGlobalSafetyChecksSetting{ u"global-safety-checks-setting=" };

  /// @brief Field OptionGroup offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionGroup{ u"group" };

  /// @brief Field OptionIncludeRootAssemblyReferences offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionIncludeRootAssemblyReferences{ u"include-root-assembly-references=" };

  /// @brief Field OptionJitCompilationPriority offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionJitCompilationPriority{ u"compilation-priority=" };

  /// @brief Field OptionJitDisableAssemblyCaching offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionJitDisableAssemblyCaching{ u"disable-assembly-caching" };

  /// @brief Field OptionJitDisableFunctionCaching offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionJitDisableFunctionCaching{ u"disable-function-caching" };

  /// @brief Field OptionJitEnableAssemblyCachingLogs offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionJitEnableAssemblyCachingLogs{ u"enable-assembly-caching-logs" };

  /// @brief Field OptionJitEnableSynchronousCompilation offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionJitEnableSynchronousCompilation{ u"enable-synchronous-compilation" };

  /// @brief Field OptionJitIsForFunctionPointer offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionJitIsForFunctionPointer{ u"is-for-function-pointer" };

  /// @brief Field OptionJitManagedDelegateHandle offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionJitManagedDelegateHandle{ u"managed-delegate-handle=" };

  /// @brief Field OptionJitManagedFunctionPointer offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionJitManagedFunctionPointer{ u"managed-function-pointer=" };

  /// @brief Field OptionJobMarshalling offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionJobMarshalling{ u"generate-job-marshalling-methods" };

  /// @brief Field OptionLibraryOutputMode offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionLibraryOutputMode{ u"library-output-mode=" };

  /// @brief Field OptionLinkerOptions offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionLinkerOptions{ u"linker-options=" };

  /// @brief Field OptionLogTimings offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionLogTimings{ u"log-timings" };

  /// @brief Field OptionMetaDataGeneration offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionMetaDataGeneration{ u"meta-data-generation=" };

  /// @brief Field OptionMethodPrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionMethodPrefix{ u"method-prefix=" };

  /// @brief Field OptionOptForSize offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionOptForSize{ u"opt-for-size" };

  /// @brief Field OptionOptLevel offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionOptLevel{ u"opt-level=" };

  /// @brief Field OptionOutputMode offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionOutputMode{ u"output-mode=" };

  /// @brief Field OptionPlatform offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionPlatform{ u"platform=" };

  /// @brief Field OptionPlatformConfiguration offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionPlatformConfiguration{ u"platform-configuration=" };

  /// @brief Field OptionPrintLogOnMissingPInvokeCallbackAttribute offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionPrintLogOnMissingPInvokeCallbackAttribute{ u"print-monopinvokecallbackmissing-message" };

  /// @brief Field OptionRootAssembly offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionRootAssembly{ u"root-assembly=" };

  /// @brief Field OptionSafetyChecks offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionSafetyChecks{ u"safety-checks" };

  /// @brief Field OptionSaveExtraContext offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionSaveExtraContext{ u"save-extra-context" };

  /// @brief Field OptionStaticLinkage offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionStaticLinkage{ u"generate-static-linkage-methods" };

  /// @brief Field OptionTarget offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionTarget{ u"target=" };

  /// @brief Field OptionTargetFramework offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionTargetFramework{ u"target-framework=" };

  /// @brief Field OptionTempDirectory offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionTempDirectory{ u"temp-folder=" };

  /// @brief Field OptionValidateExternalToolChain offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionValidateExternalToolChain{ u"validate-external-tool-chain" };

  /// @brief Field OptionVerbose offset 0xffffffff size 0x8
  static constexpr ::ConstString OptionVerbose{ u"verbose" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14564 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::BurstCompilerOptions, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Burst::BurstCompilerOptions, ____enableBurstCompilation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::BurstCompilerOptions, ____enableBurstCompileSynchronously) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::BurstCompilerOptions, ____enableBurstSafetyChecks) == 0x12, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::BurstCompilerOptions, ____enableBurstTimings) == 0x13, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::BurstCompilerOptions, ____enableBurstDebug) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::BurstCompilerOptions, ____forceEnableBurstSafetyChecks) == 0x15, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::BurstCompilerOptions, ____IsGlobal_k__BackingField) == 0x16, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::BurstCompilerOptions, ____OptionsChanged_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Unity::Burst
NEED_NO_BOX(::Unity::Burst::BurstCompilerOptions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstCompilerOptions*, "Unity.Burst", "BurstCompilerOptions");
