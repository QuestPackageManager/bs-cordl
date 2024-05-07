#pragma once
// IWYU pragma private; include "Unity/Burst/BurstCompiler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BurstCompiler)
namespace GlobalNamespace {
class __BurstCompiler__BurstCompilerHelper__IsBurstEnabledDelegate;
}
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
class BurstCompilerOptions;
}
namespace Unity::Burst {
struct BurstExecutionEnvironment;
}
namespace Unity::Burst {
template <typename T> struct FunctionPointer_1;
}
namespace Unity::Burst {
class __BurstCompiler__BurstCompilerHelper;
}
namespace Unity::Burst {
class __BurstCompiler__CommandBuilder;
}
namespace Unity::Burst {
class __BurstCompiler__FakeDelegate;
}
namespace Unity::Burst {
class __BurstCompiler__StaticTypeReinitAttribute;
}
namespace Unity::Burst {
class __BurstCompiler____c;
}
// Forward declare root types
namespace GlobalNamespace {
class __BurstCompiler__BurstCompilerHelper__IsBurstEnabledDelegate;
}
namespace Unity::Burst {
class BurstCompiler;
}
namespace Unity::Burst {
class __BurstCompiler__BurstCompilerHelper;
}
namespace Unity::Burst {
class __BurstCompiler__CommandBuilder;
}
namespace Unity::Burst {
class __BurstCompiler__FakeDelegate;
}
namespace Unity::Burst {
class __BurstCompiler__StaticTypeReinitAttribute;
}
namespace Unity::Burst {
class __BurstCompiler____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__BurstCompiler__BurstCompilerHelper__IsBurstEnabledDelegate);
MARK_REF_PTR_T(::Unity::Burst::BurstCompiler);
MARK_REF_PTR_T(::Unity::Burst::__BurstCompiler__BurstCompilerHelper);
MARK_REF_PTR_T(::Unity::Burst::__BurstCompiler__CommandBuilder);
MARK_REF_PTR_T(::Unity::Burst::__BurstCompiler__FakeDelegate);
MARK_REF_PTR_T(::Unity::Burst::__BurstCompiler__StaticTypeReinitAttribute);
MARK_REF_PTR_T(::Unity::Burst::__BurstCompiler____c);
// Type: ::CommandBuilder
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Burst {
// Is value type: false
// CS Name: ::BurstCompiler::CommandBuilder*
class CORDL_TYPE __BurstCompiler__CommandBuilder : public ::System::Object {
public:
  // Declarations
  /// @brief Field _builder, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__builder, put = __cordl_internal_set__builder))::System::Text::StringBuilder* _builder;

  /// @brief Field _hasArgs, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__hasArgs, put = __cordl_internal_set__hasArgs)) bool _hasArgs;

  /// @brief Method And, addr 0x306acf8, size 0x28, virtual false, abstract: false, final false
  inline ::Unity::Burst::__BurstCompiler__CommandBuilder* And(char16_t sep);

  /// @brief Method Begin, addr 0x3069578, size 0x4c, virtual false, abstract: false, final false
  inline ::Unity::Burst::__BurstCompiler__CommandBuilder* Begin(::StringW cmd);

  static inline ::Unity::Burst::__BurstCompiler__CommandBuilder* New_ctor();

  /// @brief Method SendToCompiler, addr 0x306aa58, size 0x74, virtual false, abstract: false, final false
  inline ::StringW SendToCompiler();

  /// @brief Method With, addr 0x306a9fc, size 0x5c, virtual false, abstract: false, final false
  inline ::Unity::Burst::__BurstCompiler__CommandBuilder* With(::StringW arg);

  /// @brief Method With, addr 0x306ac30, size 0xc8, virtual false, abstract: false, final false
  inline ::Unity::Burst::__BurstCompiler__CommandBuilder* With(void* arg);

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get__builder();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __cordl_internal_get__builder() const;

  constexpr bool const& __cordl_internal_get__hasArgs() const;

  constexpr bool& __cordl_internal_get__hasArgs();

  constexpr void __cordl_internal_set__builder(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set__hasArgs(bool value);

  /// @brief Method .ctor, addr 0x3069508, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BurstCompiler__CommandBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BurstCompiler__CommandBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BurstCompiler__CommandBuilder(__BurstCompiler__CommandBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BurstCompiler__CommandBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BurstCompiler__CommandBuilder(__BurstCompiler__CommandBuilder const&) = delete;

  /// @brief Field _builder, offset: 0x10, size: 0x8, def value: None
  ::System::Text::StringBuilder* ____builder;

  /// @brief Field _hasArgs, offset: 0x18, size: 0x1, def value: None
  bool ____hasArgs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::__BurstCompiler__CommandBuilder, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Burst::__BurstCompiler__CommandBuilder, ____builder) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::__BurstCompiler__CommandBuilder, ____hasArgs) == 0x18, "Offset mismatch!");

} // namespace Unity::Burst
// Type: ::StaticTypeReinitAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Burst {
// Is value type: false
// CS Name: ::BurstCompiler::StaticTypeReinitAttribute*
class CORDL_TYPE __BurstCompiler__StaticTypeReinitAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field reinitType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_reinitType, put = __cordl_internal_set_reinitType))::System::Type* reinitType;

  static inline ::Unity::Burst::__BurstCompiler__StaticTypeReinitAttribute* New_ctor(::System::Type* toReinit);

  constexpr ::System::Type*& __cordl_internal_get_reinitType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_reinitType() const;

  constexpr void __cordl_internal_set_reinitType(::System::Type* value);

  /// @brief Method .ctor, addr 0x306ad20, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* toReinit);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BurstCompiler__StaticTypeReinitAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BurstCompiler__StaticTypeReinitAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BurstCompiler__StaticTypeReinitAttribute(__BurstCompiler__StaticTypeReinitAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BurstCompiler__StaticTypeReinitAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BurstCompiler__StaticTypeReinitAttribute(__BurstCompiler__StaticTypeReinitAttribute const&) = delete;

  /// @brief Field reinitType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___reinitType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::__BurstCompiler__StaticTypeReinitAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Burst::__BurstCompiler__StaticTypeReinitAttribute, ___reinitType) == 0x10, "Offset mismatch!");

} // namespace Unity::Burst
// Type: ::IsBurstEnabledDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BurstCompiler::BurstCompilerHelper::IsBurstEnabledDelegate*
class CORDL_TYPE __BurstCompiler__BurstCompilerHelper__IsBurstEnabledDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x306af88, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x306afa8, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x306af74, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::GlobalNamespace::__BurstCompiler__BurstCompilerHelper__IsBurstEnabledDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x306aeb8, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BurstCompiler__BurstCompilerHelper__IsBurstEnabledDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BurstCompiler__BurstCompilerHelper__IsBurstEnabledDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BurstCompiler__BurstCompilerHelper__IsBurstEnabledDelegate(__BurstCompiler__BurstCompilerHelper__IsBurstEnabledDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BurstCompiler__BurstCompilerHelper__IsBurstEnabledDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BurstCompiler__BurstCompilerHelper__IsBurstEnabledDelegate(__BurstCompiler__BurstCompilerHelper__IsBurstEnabledDelegate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BurstCompiler__BurstCompilerHelper__IsBurstEnabledDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BurstCompilerHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Burst {
// Is value type: false
// CS Name: ::BurstCompiler::BurstCompilerHelper*
class CORDL_TYPE __BurstCompiler__BurstCompilerHelper : public ::System::Object {
public:
  // Declarations
  using IsBurstEnabledDelegate = ::GlobalNamespace::__BurstCompiler__BurstCompilerHelper__IsBurstEnabledDelegate;

  /// @brief Field IsBurstEnabledImpl, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IsBurstEnabledImpl,
                             put = setStaticF_IsBurstEnabledImpl))::GlobalNamespace::__BurstCompiler__BurstCompilerHelper__IsBurstEnabledDelegate* IsBurstEnabledImpl;

  /// @brief Field IsBurstGenerated, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_IsBurstGenerated, put = setStaticF_IsBurstGenerated)) bool IsBurstGenerated;

  /// @brief Method DiscardedMethod, addr 0x306ad98, size 0x8, virtual false, abstract: false, final false
  static inline void DiscardedMethod(ByRef<bool> value);

  /// @brief Method IsBurstEnabled, addr 0x306ad48, size 0x50, virtual false, abstract: false, final false
  static inline bool IsBurstEnabled();

  /// @brief Method IsCompiledByBurst, addr 0x306ada0, size 0x68, virtual false, abstract: false, final false
  static inline bool IsCompiledByBurst(::System::Delegate* del);

  static inline ::GlobalNamespace::__BurstCompiler__BurstCompilerHelper__IsBurstEnabledDelegate* getStaticF_IsBurstEnabledImpl();

  static inline bool getStaticF_IsBurstGenerated();

  static inline void setStaticF_IsBurstEnabledImpl(::GlobalNamespace::__BurstCompiler__BurstCompilerHelper__IsBurstEnabledDelegate* value);

  static inline void setStaticF_IsBurstGenerated(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BurstCompiler__BurstCompilerHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BurstCompiler__BurstCompilerHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BurstCompiler__BurstCompilerHelper(__BurstCompiler__BurstCompilerHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BurstCompiler__BurstCompilerHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BurstCompiler__BurstCompilerHelper(__BurstCompiler__BurstCompilerHelper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::__BurstCompiler__BurstCompilerHelper, 0x10>, "Size mismatch!");

} // namespace Unity::Burst
// Type: ::FakeDelegate
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Burst {
// Is value type: false
// CS Name: ::BurstCompiler::FakeDelegate*
class CORDL_TYPE __BurstCompiler__FakeDelegate : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Method))::System::Reflection::MethodInfo* Method;

  /// @brief Field <Method>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Method_k__BackingField, put = __cordl_internal_set__Method_k__BackingField))::System::Reflection::MethodInfo* _Method_k__BackingField;

  static inline ::Unity::Burst::__BurstCompiler__FakeDelegate* New_ctor(::System::Reflection::MethodInfo* method);

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get__Method_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> const& __cordl_internal_get__Method_k__BackingField() const;

  constexpr void __cordl_internal_set__Method_k__BackingField(::System::Reflection::MethodInfo* value);

  /// @brief Method .ctor, addr 0x3069854, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MethodInfo* method);

  /// @brief Method get_Method, addr 0x306afd0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* get_Method();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BurstCompiler__FakeDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BurstCompiler__FakeDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BurstCompiler__FakeDelegate(__BurstCompiler__FakeDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BurstCompiler__FakeDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BurstCompiler__FakeDelegate(__BurstCompiler__FakeDelegate const&) = delete;

  /// @brief Field <Method>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ____Method_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::__BurstCompiler__FakeDelegate, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Burst::__BurstCompiler__FakeDelegate, ____Method_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Unity::Burst
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Burst {
// Is value type: false
// CS Name: ::BurstCompiler::<>c*
class CORDL_TYPE __BurstCompiler____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Unity::Burst::__BurstCompiler____c* __9;

  /// @brief Field <>9__22_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__22_0, put = setStaticF___9__22_0))::System::Func_2<::System::Attribute*, bool>* __9__22_0;

  /// @brief Field <>9__29_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__29_0, put = setStaticF___9__29_0))::System::Func_2<::System::Attribute*, bool>* __9__29_0;

  static inline ::Unity::Burst::__BurstCompiler____c* New_ctor();

  /// @brief Method <Compile>b__22_0, addr 0x306b044, size 0x6c, virtual false, abstract: false, final false
  inline bool _Compile_b__22_0(::System::Attribute* s);

  /// @brief Method <TriggerUnsafeStaticMethodRecompilation>b__29_0, addr 0x306b0b0, size 0x70, virtual false, abstract: false, final false
  inline bool _TriggerUnsafeStaticMethodRecompilation_b__29_0(::System::Attribute* x);

  /// @brief Method .ctor, addr 0x306b03c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Burst::__BurstCompiler____c* getStaticF___9();

  static inline ::System::Func_2<::System::Attribute*, bool>* getStaticF___9__22_0();

  static inline ::System::Func_2<::System::Attribute*, bool>* getStaticF___9__29_0();

  static inline void setStaticF___9(::Unity::Burst::__BurstCompiler____c* value);

  static inline void setStaticF___9__22_0(::System::Func_2<::System::Attribute*, bool>* value);

  static inline void setStaticF___9__29_0(::System::Func_2<::System::Attribute*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BurstCompiler____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BurstCompiler____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BurstCompiler____c(__BurstCompiler____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BurstCompiler____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BurstCompiler____c(__BurstCompiler____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::__BurstCompiler____c, 0x10>, "Size mismatch!");

} // namespace Unity::Burst
// Type: Unity.Burst::BurstCompiler
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Burst {
// Is value type: false
// CS Name: ::Unity.Burst::BurstCompiler*
class CORDL_TYPE BurstCompiler : public ::System::Object {
public:
  // Declarations
  using BurstCompilerHelper = ::Unity::Burst::__BurstCompiler__BurstCompilerHelper;

  using CommandBuilder = ::Unity::Burst::__BurstCompiler__CommandBuilder;

  using FakeDelegate = ::Unity::Burst::__BurstCompiler__FakeDelegate;

  using StaticTypeReinitAttribute = ::Unity::Burst::__BurstCompiler__StaticTypeReinitAttribute;

  using __c = ::Unity::Burst::__BurstCompiler____c;

  /// @brief Field DummyMethodInfo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DummyMethodInfo, put = setStaticF_DummyMethodInfo))::System::Reflection::MethodInfo* DummyMethodInfo;

  /// @brief Field OnCompileILPPMethod2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_OnCompileILPPMethod2, put = setStaticF_OnCompileILPPMethod2))::System::Action* OnCompileILPPMethod2;

  /// @brief Field Options, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Options, put = setStaticF_Options))::Unity::Burst::BurstCompilerOptions* Options;

  /// @brief Field _IsEnabled, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__IsEnabled, put = setStaticF__IsEnabled)) bool _IsEnabled;

  /// @brief Field _cmdBuilder, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__cmdBuilder, put = setStaticF__cmdBuilder))::Unity::Burst::__BurstCompiler__CommandBuilder* _cmdBuilder;

  /// @brief Method AotCompilation, addr 0x306a908, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW AotCompilation(::ArrayW<::StringW, ::Array<::StringW>*> assemblyFolders, ::ArrayW<::StringW, ::Array<::StringW>*> assemblyRoots, ::StringW options);

  /// @brief Method BeginCompilerCommand, addr 0x3069434, size 0xd4, virtual false, abstract: false, final false
  static inline ::Unity::Burst::__BurstCompiler__CommandBuilder* BeginCompilerCommand(::StringW cmd);

  /// @brief Method Cancel, addr 0x306a06c, size 0x4, virtual false, abstract: false, final false
  static inline void Cancel();

  /// @brief Method Compile, addr 0x3069e88, size 0x11c, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<void> Compile(::System::Object* delegateObj, bool isFunctionPointer);

  /// @brief Method Compile, addr 0x306987c, size 0x450, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<void> Compile(::System::Object* delegateObj, ::System::Reflection::MethodInfo* methodInfo, bool isFunctionPointer, bool isILPostProcessing);

  /// @brief Method CompileDelegate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T CompileDelegate(T delegateMethod);

  /// @brief Method CompileFunctionPointer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Burst::FunctionPointer_1<T> CompileFunctionPointer(T delegateMethod);

  /// @brief Method CompileILPPMethod, addr 0x3069670, size 0x40, virtual false, abstract: false, final false
  static inline void* CompileILPPMethod(::System::RuntimeMethodHandle burstMethodHandle, ::System::RuntimeMethodHandle managedMethodHandle, ::System::RuntimeTypeHandle delegateTypeHandle);

  /// @brief Method CompileILPPMethod2, addr 0x30696b0, size 0x1a4, virtual false, abstract: false, final false
  static inline void* CompileILPPMethod2(::System::RuntimeMethodHandle burstMethodHandle);

  /// @brief Method CompileUnsafeStaticMethod, addr 0x3069e48, size 0x40, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<void> CompileUnsafeStaticMethod(::System::RuntimeMethodHandle handle);

  /// @brief Method Disable, addr 0x306a07c, size 0x4, virtual false, abstract: false, final false
  static inline void Disable();

  /// @brief Method DummyMethod, addr 0x306aacc, size 0x4, virtual false, abstract: false, final false
  static inline void DummyMethod();

  /// @brief Method Enable, addr 0x306a078, size 0x4, virtual false, abstract: false, final false
  static inline void Enable();

  /// @brief Method GetExecutionMode, addr 0x3069668, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Burst::BurstExecutionEnvironment GetExecutionMode();

  /// @brief Method GetILPPMethodFunctionPointer, addr 0x3069ccc, size 0x40, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<void> GetILPPMethodFunctionPointer(void* ilppMethod);

  /// @brief Method GetILPPMethodFunctionPointer2, addr 0x3069d0c, size 0x13c, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<void> GetILPPMethodFunctionPointer2(void* ilppMethod, ::System::RuntimeMethodHandle managedMethodHandle, ::System::RuntimeTypeHandle delegateTypeHandle);

  /// @brief Method InitialiseDebuggerHooks, addr 0x306a6e0, size 0xac, virtual false, abstract: false, final false
  static inline void InitialiseDebuggerHooks();

  /// @brief Method Initialize, addr 0x306a8f4, size 0x4, virtual false, abstract: false, final false
  static inline void Initialize(::ArrayW<::StringW, ::Array<::StringW>*> assemblyFolders);

  /// @brief Method IsApiAvailable, addr 0x30693a8, size 0x8c, virtual false, abstract: false, final false
  static inline bool IsApiAvailable(::StringW apiName);

  /// @brief Method IsCurrentCompilationDone, addr 0x306a070, size 0x8, virtual false, abstract: false, final false
  static inline bool IsCurrentCompilationDone();

  /// @brief Method IsHostEditorArm, addr 0x306a080, size 0x8, virtual false, abstract: false, final false
  static inline bool IsHostEditorArm();

  /// @brief Method IsLoadAdditionalLibrarySupported, addr 0x3069344, size 0x64, virtual false, abstract: false, final false
  static inline bool IsLoadAdditionalLibrarySupported();

  /// @brief Method NotifyAssemblyCompilationFinished, addr 0x306a900, size 0x4, virtual false, abstract: false, final false
  static inline void NotifyAssemblyCompilationFinished(::StringW assemblyName, ::ArrayW<::StringW, ::Array<::StringW>*> defines);

  /// @brief Method NotifyAssemblyCompilationNotRequired, addr 0x306a8fc, size 0x4, virtual false, abstract: false, final false
  static inline void NotifyAssemblyCompilationNotRequired(::StringW assemblyName);

  /// @brief Method NotifyCompilationFinished, addr 0x306a904, size 0x4, virtual false, abstract: false, final false
  static inline void NotifyCompilationFinished();

  /// @brief Method NotifyCompilationStarted, addr 0x306a8f8, size 0x4, virtual false, abstract: false, final false
  static inline void NotifyCompilationStarted(::ArrayW<::StringW, ::Array<::StringW>*> assemblyFolders);

  /// @brief Method RequestSetProtocolVersion, addr 0x306a78c, size 0x168, virtual false, abstract: false, final false
  static inline int32_t RequestSetProtocolVersion(int32_t version);

  /// @brief Method SendCommandToCompiler, addr 0x306a614, size 0xcc, virtual false, abstract: false, final false
  static inline ::StringW SendCommandToCompiler(::StringW commandName, ::StringW commandArgs);

  /// @brief Method SendRawCommandToCompiler, addr 0x306a94c, size 0xb0, virtual false, abstract: false, final false
  static inline ::StringW SendRawCommandToCompiler(::StringW command);

  /// @brief Method SetExecutionMode, addr 0x3069660, size 0x8, virtual false, abstract: false, final false
  static inline void SetExecutionMode(::Unity::Burst::BurstExecutionEnvironment mode);

  /// @brief Method SetProfilerCallbacks, addr 0x306a948, size 0x4, virtual false, abstract: false, final false
  static inline void SetProfilerCallbacks();

  /// @brief Method Shutdown, addr 0x306a068, size 0x4, virtual false, abstract: false, final false
  static inline void Shutdown();

  /// @brief Method TriggerRecompilation, addr 0x306a5a8, size 0x4, virtual false, abstract: false, final false
  static inline void TriggerRecompilation();

  /// @brief Method TriggerUnsafeStaticMethodRecompilation, addr 0x306a088, size 0x520, virtual false, abstract: false, final false
  static inline void TriggerUnsafeStaticMethodRecompilation();

  /// @brief Method UnloadAdditionalLibraries, addr 0x306a5ac, size 0x68, virtual false, abstract: false, final false
  static inline void UnloadAdditionalLibraries();

  /// @brief Method VerifyDelegateHasCorrectUnmanagedFunctionPointerAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void VerifyDelegateHasCorrectUnmanagedFunctionPointerAttribute(T delegateMethod);

  /// @brief Method VerifyDelegateIsNotMulticast, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void VerifyDelegateIsNotMulticast(T delegateMethod);

  static inline ::System::Reflection::MethodInfo* getStaticF_DummyMethodInfo();

  static inline ::System::Action* getStaticF_OnCompileILPPMethod2();

  static inline ::Unity::Burst::BurstCompilerOptions* getStaticF_Options();

  static inline bool getStaticF__IsEnabled();

  static inline ::Unity::Burst::__BurstCompiler__CommandBuilder* getStaticF__cmdBuilder();

  /// @brief Method get_IsEnabled, addr 0x30695c4, size 0x9c, virtual false, abstract: false, final false
  static inline bool get_IsEnabled();

  static inline void setStaticF_DummyMethodInfo(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_OnCompileILPPMethod2(::System::Action* value);

  static inline void setStaticF_Options(::Unity::Burst::BurstCompilerOptions* value);

  static inline void setStaticF__IsEnabled(bool value);

  static inline void setStaticF__cmdBuilder(::Unity::Burst::__BurstCompiler__CommandBuilder* value);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::BurstCompiler, 0x10>, "Size mismatch!");

} // namespace Unity::Burst
NEED_NO_BOX(::GlobalNamespace::__BurstCompiler__BurstCompilerHelper__IsBurstEnabledDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BurstCompiler__BurstCompilerHelper__IsBurstEnabledDelegate*, "Unity.Burst", "BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate");
NEED_NO_BOX(::Unity::Burst::BurstCompiler);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstCompiler*, "Unity.Burst", "BurstCompiler");
NEED_NO_BOX(::Unity::Burst::__BurstCompiler__BurstCompilerHelper);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::__BurstCompiler__BurstCompilerHelper*, "Unity.Burst", "BurstCompiler/BurstCompilerHelper");
NEED_NO_BOX(::Unity::Burst::__BurstCompiler__CommandBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::__BurstCompiler__CommandBuilder*, "Unity.Burst", "BurstCompiler/CommandBuilder");
NEED_NO_BOX(::Unity::Burst::__BurstCompiler__FakeDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::__BurstCompiler__FakeDelegate*, "Unity.Burst", "BurstCompiler/FakeDelegate");
NEED_NO_BOX(::Unity::Burst::__BurstCompiler__StaticTypeReinitAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::__BurstCompiler__StaticTypeReinitAttribute*, "Unity.Burst", "BurstCompiler/StaticTypeReinitAttribute");
NEED_NO_BOX(::Unity::Burst::__BurstCompiler____c);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::__BurstCompiler____c*, "Unity.Burst", "BurstCompiler/<>c");
