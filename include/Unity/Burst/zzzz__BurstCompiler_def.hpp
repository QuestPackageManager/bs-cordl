#pragma once
// IWYU pragma private; include "Unity/Burst/BurstCompiler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BurstCompiler)
namespace System::Reflection {
class MethodInfo;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Action;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Attribute;
}
namespace System {
class Delegate;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
struct RuntimeMethodHandle;
}
namespace System {
struct RuntimeTypeHandle;
}
namespace System {
class Type;
}
namespace Unity::Burst {
class BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate;
}
namespace Unity::Burst {
class BurstCompilerOptions;
}
namespace Unity::Burst {
class BurstCompiler_BurstCompilerHelper;
}
namespace Unity::Burst {
class BurstCompiler_CommandBuilder;
}
namespace Unity::Burst {
class BurstCompiler_FakeDelegate;
}
namespace Unity::Burst {
class BurstCompiler_StaticTypeReinitAttribute;
}
namespace Unity::Burst {
class BurstCompiler___c;
}
namespace Unity::Burst {
struct BurstExecutionEnvironment;
}
namespace Unity::Burst {
template <typename T> struct FunctionPointer_1;
}
// Forward declare root types
namespace Unity::Burst {
class BurstCompiler;
}
namespace Unity::Burst {
class BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate;
}
namespace Unity::Burst {
class BurstCompiler_BurstCompilerHelper;
}
namespace Unity::Burst {
class BurstCompiler_CommandBuilder;
}
namespace Unity::Burst {
class BurstCompiler_FakeDelegate;
}
namespace Unity::Burst {
class BurstCompiler_StaticTypeReinitAttribute;
}
namespace Unity::Burst {
class BurstCompiler___c;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Burst::BurstCompiler);
MARK_REF_PTR_T(::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate);
MARK_REF_PTR_T(::Unity::Burst::BurstCompiler_BurstCompilerHelper);
MARK_REF_PTR_T(::Unity::Burst::BurstCompiler_CommandBuilder);
MARK_REF_PTR_T(::Unity::Burst::BurstCompiler_FakeDelegate);
MARK_REF_PTR_T(::Unity::Burst::BurstCompiler_StaticTypeReinitAttribute);
MARK_REF_PTR_T(::Unity::Burst::BurstCompiler___c);
// Dependencies System.Object
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.BurstCompiler/CommandBuilder
class CORDL_TYPE BurstCompiler_CommandBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field _builder, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__builder, put = __cordl_internal_set__builder)) ::System::Text::StringBuilder* _builder;

  /// @brief Field _hasArgs, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__hasArgs, put = __cordl_internal_set__hasArgs)) bool _hasArgs;

  /// @brief Method And, addr 0x62534f8, size 0x28, virtual false, abstract: false, final false
  inline ::Unity::Burst::BurstCompiler_CommandBuilder* And(char16_t sep);

  /// @brief Method Begin, addr 0x6251d4c, size 0x4c, virtual false, abstract: false, final false
  inline ::Unity::Burst::BurstCompiler_CommandBuilder* Begin(::StringW cmd);

  static inline ::Unity::Burst::BurstCompiler_CommandBuilder* New_ctor();

  /// @brief Method SendToCompiler, addr 0x6253260, size 0x78, virtual false, abstract: false, final false
  inline ::StringW SendToCompiler();

  /// @brief Method With, addr 0x6253204, size 0x5c, virtual false, abstract: false, final false
  inline ::Unity::Burst::BurstCompiler_CommandBuilder* With(::StringW arg);

  /// @brief Method With, addr 0x6253420, size 0xd8, virtual false, abstract: false, final false
  inline ::Unity::Burst::BurstCompiler_CommandBuilder* With(::System::IntPtr arg);

  constexpr ::System::Text::StringBuilder* const& __cordl_internal_get__builder() const;

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get__builder();

  constexpr bool const& __cordl_internal_get__hasArgs() const;

  constexpr bool& __cordl_internal_get__hasArgs();

  constexpr void __cordl_internal_set__builder(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set__hasArgs(bool value);

  /// @brief Method .ctor, addr 0x6251cec, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstCompiler_CommandBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BurstCompiler_CommandBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstCompiler_CommandBuilder(BurstCompiler_CommandBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstCompiler_CommandBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstCompiler_CommandBuilder(BurstCompiler_CommandBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17253 };

  /// @brief Field _builder, offset: 0x10, size: 0x8, def value: None
  ::System::Text::StringBuilder* ____builder;

  /// @brief Field _hasArgs, offset: 0x18, size: 0x1, def value: None
  bool ____hasArgs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::BurstCompiler_CommandBuilder, ____builder) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::BurstCompiler_CommandBuilder, ____hasArgs) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Burst::BurstCompiler_CommandBuilder, 0x20>, "Size mismatch!");

} // namespace Unity::Burst
// Dependencies System.Attribute
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.BurstCompiler/StaticTypeReinitAttribute
class CORDL_TYPE BurstCompiler_StaticTypeReinitAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field reinitType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_reinitType, put = __cordl_internal_set_reinitType)) ::System::Type* reinitType;

  static inline ::Unity::Burst::BurstCompiler_StaticTypeReinitAttribute* New_ctor(::System::Type* toReinit);

  constexpr ::System::Type* const& __cordl_internal_get_reinitType() const;

  constexpr ::System::Type*& __cordl_internal_get_reinitType();

  constexpr void __cordl_internal_set_reinitType(::System::Type* value);

  /// @brief Method .ctor, addr 0x6253520, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* toReinit);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstCompiler_StaticTypeReinitAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BurstCompiler_StaticTypeReinitAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstCompiler_StaticTypeReinitAttribute(BurstCompiler_StaticTypeReinitAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstCompiler_StaticTypeReinitAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstCompiler_StaticTypeReinitAttribute(BurstCompiler_StaticTypeReinitAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17254 };

  /// @brief Field reinitType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___reinitType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::BurstCompiler_StaticTypeReinitAttribute, ___reinitType) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Burst::BurstCompiler_StaticTypeReinitAttribute, 0x18>, "Size mismatch!");

} // namespace Unity::Burst
// Dependencies System.MulticastDelegate
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate
class CORDL_TYPE BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6253758, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6253774, size 0x24, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6253744, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x62536dc, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate(BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate(BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17255 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate, 0x80>, "Size mismatch!");

} // namespace Unity::Burst
// Dependencies System.Object
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.BurstCompiler/BurstCompilerHelper
class CORDL_TYPE BurstCompiler_BurstCompilerHelper : public ::System::Object {
public:
  // Declarations
  using IsBurstEnabledDelegate = ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate;

  /// @brief Field IsBurstEnabledImpl, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IsBurstEnabledImpl, put = setStaticF_IsBurstEnabledImpl)) ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate* IsBurstEnabledImpl;

  /// @brief Field IsBurstGenerated, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_IsBurstGenerated, put = setStaticF_IsBurstGenerated)) bool IsBurstGenerated;

  /// @brief Method DiscardedMethod, addr 0x625357c, size 0x8, virtual false, abstract: false, final false
  static inline void DiscardedMethod(::ByRef<bool> value);

  /// @brief Method IsBurstEnabled, addr 0x6253528, size 0x54, virtual false, abstract: false, final false
  static inline bool IsBurstEnabled();

  /// @brief Method IsCompiledByBurst, addr 0x6253584, size 0x60, virtual false, abstract: false, final false
  static inline bool IsCompiledByBurst(::System::Delegate* del);

  static inline ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate* getStaticF_IsBurstEnabledImpl();

  static inline bool getStaticF_IsBurstGenerated();

  static inline void setStaticF_IsBurstEnabledImpl(::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate* value);

  static inline void setStaticF_IsBurstGenerated(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstCompiler_BurstCompilerHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BurstCompiler_BurstCompilerHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstCompiler_BurstCompilerHelper(BurstCompiler_BurstCompilerHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstCompiler_BurstCompilerHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstCompiler_BurstCompilerHelper(BurstCompiler_BurstCompilerHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17256 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::BurstCompiler_BurstCompilerHelper, 0x10>, "Size mismatch!");

} // namespace Unity::Burst
// Dependencies System.Object
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.BurstCompiler/FakeDelegate
class CORDL_TYPE BurstCompiler_FakeDelegate : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Method)) ::System::Reflection::MethodInfo* Method;

  /// @brief Field <Method>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Method_k__BackingField, put = __cordl_internal_set__Method_k__BackingField)) ::System::Reflection::MethodInfo* _Method_k__BackingField;

  static inline ::Unity::Burst::BurstCompiler_FakeDelegate* New_ctor(::System::Reflection::MethodInfo* method);

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get__Method_k__BackingField() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get__Method_k__BackingField();

  constexpr void __cordl_internal_set__Method_k__BackingField(::System::Reflection::MethodInfo* value);

  /// @brief Method .ctor, addr 0x6252044, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MethodInfo* method);

  /// @brief Method get_Method, addr 0x6253798, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* get_Method();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstCompiler_FakeDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BurstCompiler_FakeDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstCompiler_FakeDelegate(BurstCompiler_FakeDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstCompiler_FakeDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstCompiler_FakeDelegate(BurstCompiler_FakeDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17257 };

  /// @brief Field <Method>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ____Method_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::BurstCompiler_FakeDelegate, ____Method_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Burst::BurstCompiler_FakeDelegate, 0x18>, "Size mismatch!");

} // namespace Unity::Burst
// Dependencies System.Object
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.BurstCompiler/<>c
class CORDL_TYPE BurstCompiler___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Unity::Burst::BurstCompiler___c* __9;

  /// @brief Field <>9__22_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__22_0, put = setStaticF___9__22_0)) ::System::Func_2<::System::Attribute*, bool>* __9__22_0;

  /// @brief Field <>9__29_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__29_0, put = setStaticF___9__29_0)) ::System::Func_2<::System::Attribute*, bool>* __9__29_0;

  static inline ::Unity::Burst::BurstCompiler___c* New_ctor();

  /// @brief Method <Compile>b__22_0, addr 0x62537f8, size 0x78, virtual false, abstract: false, final false
  inline bool _Compile_b__22_0(::System::Attribute* s);

  /// @brief Method <TriggerUnsafeStaticMethodRecompilation>b__29_0, addr 0x6253870, size 0x70, virtual false, abstract: false, final false
  inline bool _TriggerUnsafeStaticMethodRecompilation_b__29_0(::System::Attribute* x);

  /// @brief Method .ctor, addr 0x62537f4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Burst::BurstCompiler___c* getStaticF___9();

  static inline ::System::Func_2<::System::Attribute*, bool>* getStaticF___9__22_0();

  static inline ::System::Func_2<::System::Attribute*, bool>* getStaticF___9__29_0();

  static inline void setStaticF___9(::Unity::Burst::BurstCompiler___c* value);

  static inline void setStaticF___9__22_0(::System::Func_2<::System::Attribute*, bool>* value);

  static inline void setStaticF___9__29_0(::System::Func_2<::System::Attribute*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstCompiler___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BurstCompiler___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstCompiler___c(BurstCompiler___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstCompiler___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstCompiler___c(BurstCompiler___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17258 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::BurstCompiler___c, 0x10>, "Size mismatch!");

} // namespace Unity::Burst
// Dependencies System.Object
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.BurstCompiler
class CORDL_TYPE BurstCompiler : public ::System::Object {
public:
  // Declarations
  using BurstCompilerHelper = ::Unity::Burst::BurstCompiler_BurstCompilerHelper;

  using CommandBuilder = ::Unity::Burst::BurstCompiler_CommandBuilder;

  using FakeDelegate = ::Unity::Burst::BurstCompiler_FakeDelegate;

  using StaticTypeReinitAttribute = ::Unity::Burst::BurstCompiler_StaticTypeReinitAttribute;

  using __c = ::Unity::Burst::BurstCompiler___c;

  /// @brief Field DummyMethodInfo, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DummyMethodInfo, put = setStaticF_DummyMethodInfo)) ::System::Reflection::MethodInfo* DummyMethodInfo;

  /// @brief Field OnCompileILPPMethod2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_OnCompileILPPMethod2, put = setStaticF_OnCompileILPPMethod2)) ::System::Action* OnCompileILPPMethod2;

  /// @brief Field Options, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Options, put = setStaticF_Options)) ::Unity::Burst::BurstCompilerOptions* Options;

  /// @brief Field _IsEnabled, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__IsEnabled, put = setStaticF__IsEnabled)) bool _IsEnabled;

  /// @brief Field _cmdBuilder, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__cmdBuilder, put = setStaticF__cmdBuilder)) ::Unity::Burst::BurstCompiler_CommandBuilder* _cmdBuilder;

  /// @brief Method AotCompilation, addr 0x6253104, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW AotCompilation(::ArrayW<::StringW, ::Array<::StringW>*> assemblyFolders, ::ArrayW<::StringW, ::Array<::StringW>*> assemblyRoots, ::StringW options);

  /// @brief Method BeginCompilerCommand, addr 0x6251b9c, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Burst::BurstCompiler_CommandBuilder* BeginCompilerCommand(::StringW cmd);

  /// @brief Method Cancel, addr 0x62527f8, size 0x4, virtual false, abstract: false, final false
  static inline void Cancel();

  /// @brief Method Compile, addr 0x6252604, size 0x128, virtual false, abstract: false, final false
  static inline void* Compile(::System::Object* delegateObj, bool isFunctionPointer);

  /// @brief Method Compile, addr 0x625204c, size 0x4a8, virtual false, abstract: false, final false
  static inline void* Compile(::System::Object* delegateObj, ::System::Reflection::MethodInfo* methodInfo, bool isFunctionPointer, bool isILPostProcessing);

  /// @brief Method CompileDelegate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T CompileDelegate(T delegateMethod);

  /// @brief Method CompileFunctionPointer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Burst::FunctionPointer_1<T> CompileFunctionPointer(T delegateMethod);

  /// @brief Method CompileILPPMethod, addr 0x6251ea0, size 0x38, virtual false, abstract: false, final false
  static inline ::System::IntPtr CompileILPPMethod(::System::RuntimeMethodHandle burstMethodHandle, ::System::RuntimeMethodHandle managedMethodHandle, ::System::RuntimeTypeHandle delegateTypeHandle);

  /// @brief Method CompileILPPMethod2, addr 0x6251ed8, size 0x16c, virtual false, abstract: false, final false
  static inline ::System::IntPtr CompileILPPMethod2(::System::RuntimeMethodHandle burstMethodHandle);

  /// @brief Method CompileUnsafeStaticMethod, addr 0x62525cc, size 0x38, virtual false, abstract: false, final false
  static inline void* CompileUnsafeStaticMethod(::System::RuntimeMethodHandle handle);

  /// @brief Method Disable, addr 0x6252808, size 0x4, virtual false, abstract: false, final false
  static inline void Disable();

  /// @brief Method DummyMethod, addr 0x62532d8, size 0x4, virtual false, abstract: false, final false
  static inline void DummyMethod();

  /// @brief Method Enable, addr 0x6252804, size 0x4, virtual false, abstract: false, final false
  static inline void Enable();

  /// @brief Method GetExecutionMode, addr 0x6251e78, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Burst::BurstExecutionEnvironment GetExecutionMode();

  /// @brief Method GetILPPMethodFunctionPointer, addr 0x62524f4, size 0x38, virtual false, abstract: false, final false
  static inline void* GetILPPMethodFunctionPointer(::System::IntPtr ilppMethod);

  /// @brief Method GetILPPMethodFunctionPointer2, addr 0x625252c, size 0xa0, virtual false, abstract: false, final false
  static inline void* GetILPPMethodFunctionPointer2(::System::IntPtr ilppMethod, ::System::RuntimeMethodHandle managedMethodHandle, ::System::RuntimeTypeHandle delegateTypeHandle);

  /// @brief Method InitialiseDebuggerHooks, addr 0x6252e6c, size 0xe4, virtual false, abstract: false, final false
  static inline void InitialiseDebuggerHooks();

  /// @brief Method Initialize, addr 0x62530f0, size 0x4, virtual false, abstract: false, final false
  static inline void Initialize(::ArrayW<::StringW, ::Array<::StringW>*> assemblyFolders, ::ArrayW<::StringW, ::Array<::StringW>*> ignoreAssemblies);

  /// @brief Method IsApiAvailable, addr 0x6251b08, size 0x94, virtual false, abstract: false, final false
  static inline bool IsApiAvailable(::StringW apiName);

  /// @brief Method IsCurrentCompilationDone, addr 0x62527fc, size 0x8, virtual false, abstract: false, final false
  static inline bool IsCurrentCompilationDone();

  /// @brief Method IsHostEditorArm, addr 0x625280c, size 0x8, virtual false, abstract: false, final false
  static inline bool IsHostEditorArm();

  /// @brief Method IsLoadAdditionalLibrarySupported, addr 0x6251a9c, size 0x6c, virtual false, abstract: false, final false
  static inline bool IsLoadAdditionalLibrarySupported();

  /// @brief Method NotifyAssemblyCompilationFinished, addr 0x62530fc, size 0x4, virtual false, abstract: false, final false
  static inline void NotifyAssemblyCompilationFinished(::StringW assemblyName, ::ArrayW<::StringW, ::Array<::StringW>*> defines);

  /// @brief Method NotifyAssemblyCompilationNotRequired, addr 0x62530f8, size 0x4, virtual false, abstract: false, final false
  static inline void NotifyAssemblyCompilationNotRequired(::StringW assemblyName);

  /// @brief Method NotifyCompilationFinished, addr 0x6253100, size 0x4, virtual false, abstract: false, final false
  static inline void NotifyCompilationFinished();

  /// @brief Method NotifyCompilationStarted, addr 0x62530f4, size 0x4, virtual false, abstract: false, final false
  static inline void NotifyCompilationStarted(::ArrayW<::StringW, ::Array<::StringW>*> assemblyFolders, ::ArrayW<::StringW, ::Array<::StringW>*> ignoreAssemblies);

  /// @brief Method RequestSetProtocolVersion, addr 0x6252f50, size 0x1a0, virtual false, abstract: false, final false
  static inline int32_t RequestSetProtocolVersion(int32_t version);

  /// @brief Method SendCommandToCompiler, addr 0x6252d90, size 0xdc, virtual false, abstract: false, final false
  static inline ::StringW SendCommandToCompiler(::StringW commandName, ::StringW commandArgs);

  /// @brief Method SendRawCommandToCompiler, addr 0x625314c, size 0xb8, virtual false, abstract: false, final false
  static inline ::StringW SendRawCommandToCompiler(::StringW command);

  /// @brief Method SetExecutionMode, addr 0x6251e3c, size 0x3c, virtual false, abstract: false, final false
  static inline void SetExecutionMode(::Unity::Burst::BurstExecutionEnvironment mode);

  /// @brief Method SetProfilerCallbacks, addr 0x6253148, size 0x4, virtual false, abstract: false, final false
  static inline void SetProfilerCallbacks();

  /// @brief Method Shutdown, addr 0x62527f4, size 0x4, virtual false, abstract: false, final false
  static inline void Shutdown();

  /// @brief Method TriggerRecompilation, addr 0x6252d1c, size 0x4, virtual false, abstract: false, final false
  static inline void TriggerRecompilation();

  /// @brief Method TriggerUnsafeStaticMethodRecompilation, addr 0x6252814, size 0x508, virtual false, abstract: false, final false
  static inline void TriggerUnsafeStaticMethodRecompilation();

  /// @brief Method UnloadAdditionalLibraries, addr 0x6252d20, size 0x70, virtual false, abstract: false, final false
  static inline void UnloadAdditionalLibraries();

  /// @brief Method VerifyDelegateHasCorrectUnmanagedFunctionPointerAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void VerifyDelegateHasCorrectUnmanagedFunctionPointerAttribute(T delegateMethod);

  /// @brief Method VerifyDelegateIsNotMulticast, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void VerifyDelegateIsNotMulticast(T delegateMethod);

  static inline ::System::Reflection::MethodInfo* getStaticF_DummyMethodInfo();

  static inline ::System::Action* getStaticF_OnCompileILPPMethod2();

  static inline ::Unity::Burst::BurstCompilerOptions* getStaticF_Options();

  static inline bool getStaticF__IsEnabled();

  static inline ::Unity::Burst::BurstCompiler_CommandBuilder* getStaticF__cmdBuilder();

  /// @brief Method get_IsEnabled, addr 0x6251d98, size 0xa4, virtual false, abstract: false, final false
  static inline bool get_IsEnabled();

  static inline void setStaticF_DummyMethodInfo(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_OnCompileILPPMethod2(::System::Action* value);

  static inline void setStaticF_Options(::Unity::Burst::BurstCompilerOptions* value);

  static inline void setStaticF__IsEnabled(bool value);

  static inline void setStaticF__cmdBuilder(::Unity::Burst::BurstCompiler_CommandBuilder* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstCompiler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BurstCompiler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstCompiler(BurstCompiler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstCompiler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstCompiler(BurstCompiler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17259 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::BurstCompiler, 0x10>, "Size mismatch!");

} // namespace Unity::Burst
NEED_NO_BOX(::Unity::Burst::BurstCompiler);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstCompiler*, "Unity.Burst", "BurstCompiler");
NEED_NO_BOX(::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate*, "Unity.Burst", "BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate");
NEED_NO_BOX(::Unity::Burst::BurstCompiler_BurstCompilerHelper);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstCompiler_BurstCompilerHelper*, "Unity.Burst", "BurstCompiler/BurstCompilerHelper");
NEED_NO_BOX(::Unity::Burst::BurstCompiler_CommandBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstCompiler_CommandBuilder*, "Unity.Burst", "BurstCompiler/CommandBuilder");
NEED_NO_BOX(::Unity::Burst::BurstCompiler_FakeDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstCompiler_FakeDelegate*, "Unity.Burst", "BurstCompiler/FakeDelegate");
NEED_NO_BOX(::Unity::Burst::BurstCompiler_StaticTypeReinitAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstCompiler_StaticTypeReinitAttribute*, "Unity.Burst", "BurstCompiler/StaticTypeReinitAttribute");
NEED_NO_BOX(::Unity::Burst::BurstCompiler___c);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstCompiler___c*, "Unity.Burst", "BurstCompiler/<>c");
