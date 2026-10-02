#pragma once
// IWYU pragma private; include "Unity/Burst/BurstCompiler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeMethodHandle_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BurstCompiler)
namespace System::Reflection {
class MethodInfo;
}
namespace System::Runtime::InteropServices {
struct GCHandle;
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
class BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall;
}
namespace Unity::Burst {
class BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate;
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
struct BurstCompiler___c__DisplayClass17_0;
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
class BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall;
}
namespace Unity::Burst {
class BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate;
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
struct BurstCompiler___c__DisplayClass17_0;
}
// Write type traits
MARK_REF_T(::Unity::Burst::BurstCompiler*);
MARK_REF_T(::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate*);
MARK_REF_T(::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall*);
MARK_REF_T(::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate*);
MARK_REF_T(::Unity::Burst::BurstCompiler_BurstCompilerHelper*);
MARK_REF_T(::Unity::Burst::BurstCompiler_CommandBuilder*);
MARK_REF_T(::Unity::Burst::BurstCompiler_FakeDelegate*);
MARK_REF_T(::Unity::Burst::BurstCompiler_StaticTypeReinitAttribute*);
MARK_REF_T(::Unity::Burst::BurstCompiler___c*);
MARK_VAL_T(::Unity::Burst::BurstCompiler___c__DisplayClass17_0);
DEFINE_IL2CPP_CLASS(::Unity::Burst::BurstCompiler*, "Unity.Burst", "BurstCompiler");
DEFINE_IL2CPP_CLASS(::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate*, "Unity.Burst", "BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate");
DEFINE_IL2CPP_CLASS(::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall*, "Unity.Burst",
                    "BurstCompiler/BurstCompilerHelper/IsBurstEnabled_00000145$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate*, "Unity.Burst",
                    "BurstCompiler/BurstCompilerHelper/IsBurstEnabled_00000145$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::Unity::Burst::BurstCompiler_BurstCompilerHelper*, "Unity.Burst", "BurstCompiler/BurstCompilerHelper");
DEFINE_IL2CPP_CLASS(::Unity::Burst::BurstCompiler_CommandBuilder*, "Unity.Burst", "BurstCompiler/CommandBuilder");
DEFINE_IL2CPP_CLASS(::Unity::Burst::BurstCompiler_FakeDelegate*, "Unity.Burst", "BurstCompiler/FakeDelegate");
DEFINE_IL2CPP_CLASS(::Unity::Burst::BurstCompiler_StaticTypeReinitAttribute*, "Unity.Burst", "BurstCompiler/StaticTypeReinitAttribute");
DEFINE_IL2CPP_CLASS(::Unity::Burst::BurstCompiler___c*, "Unity.Burst", "BurstCompiler/<>c");
DEFINE_IL2CPP_CLASS(::Unity::Burst::BurstCompiler___c__DisplayClass17_0, "Unity.Burst", "BurstCompiler/<>c__DisplayClass17_0");
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

  /// @brief Method And, addr 0x6899438, size 0x28, virtual false, abstract: false, final false
  inline ::Unity::Burst::BurstCompiler_CommandBuilder* And(char16_t sep);

  /// @brief Method Begin, addr 0x6897ae0, size 0x4c, virtual false, abstract: false, final false
  inline ::Unity::Burst::BurstCompiler_CommandBuilder* Begin(::StringW cmd);

  static inline ::Unity::Burst::BurstCompiler_CommandBuilder* New_ctor();

  /// @brief Method SendToCompiler, addr 0x68991a0, size 0x78, virtual false, abstract: false, final false
  inline ::StringW SendToCompiler();

  /// @brief Method With, addr 0x6899144, size 0x5c, virtual false, abstract: false, final false
  inline ::Unity::Burst::BurstCompiler_CommandBuilder* With(::StringW arg);

  /// @brief Method With, addr 0x6899360, size 0xd8, virtual false, abstract: false, final false
  inline ::Unity::Burst::BurstCompiler_CommandBuilder* With(::System::IntPtr arg);

  constexpr ::System::Text::StringBuilder* const& __cordl_internal_get__builder() const;

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get__builder();

  constexpr bool const& __cordl_internal_get__hasArgs() const;

  constexpr bool& __cordl_internal_get__hasArgs();

  constexpr void __cordl_internal_set__builder(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set__hasArgs(bool value);

  /// @brief Method .ctor, addr 0x6897a80, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstCompiler_CommandBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BurstCompiler_CommandBuilder", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstCompiler_CommandBuilder(BurstCompiler_CommandBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstCompiler_CommandBuilder", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstCompiler_CommandBuilder(BurstCompiler_CommandBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17681 };

  /// @brief Field _builder, offset: 0x10, size: 0x8, def value: None
  ::System::Text::StringBuilder* ____builder;

  /// @brief Field _hasArgs, offset: 0x18, size: 0x1, def value: None
  bool ____hasArgs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::BurstCompiler_CommandBuilder, ____builder) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::BurstCompiler_CommandBuilder, ____hasArgs) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Unity::Burst::BurstCompiler_CommandBuilder) == 0x20, "Size mismatch!");

} // namespace Unity::Burst
// [AttributeUsage((System.AttributeTargets)1, AllowMultiple = true)]
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

  /// @brief Method .ctor, addr 0x6899460, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* toReinit);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstCompiler_StaticTypeReinitAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BurstCompiler_StaticTypeReinitAttribute", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstCompiler_StaticTypeReinitAttribute(BurstCompiler_StaticTypeReinitAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstCompiler_StaticTypeReinitAttribute", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstCompiler_StaticTypeReinitAttribute(BurstCompiler_StaticTypeReinitAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17682 };

  /// @brief Field reinitType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___reinitType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::BurstCompiler_StaticTypeReinitAttribute, ___reinitType) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Unity::Burst::BurstCompiler_StaticTypeReinitAttribute) == 0x18, "Size mismatch!");

} // namespace Unity::Burst
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate
class CORDL_TYPE BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6899784, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x68997a0, size 0x24, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6899770, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x68996b4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate(BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate(BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17683 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate) == 0x80, "Size mismatch!");

} // namespace Unity::Burst
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabled_00000145$PostfixBurstDelegate
class CORDL_TYPE BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6899840, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* _cordl_fixed_empty_name_whitespace, ::System::Object* _cordl_fixed_empty_name_whitespace_param_1);

  /// @brief Method EndInvoke, addr 0x689985c, size 0x24, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x689982c, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate* New_ctor(::System::Object* _cordl_fixed_empty_name_whitespace,
                                                                                                                         ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

  /// @brief Method .ctor, addr 0x68997c4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* _cordl_fixed_empty_name_whitespace, ::System::IntPtr _cordl_fixed_empty_name_whitespace_param_1);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate(BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate(BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17684 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace Unity::Burst
// Dependencies System.IntPtr, System.Object
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabled_00000145$BurstDirectCall
class CORDL_TYPE BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall : public ::System::Object {
public:
  // Declarations
  /// @brief Field Pointer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Pointer, put = setStaticF_Pointer)) ::System::IntPtr Pointer;

  /// @brief Method GetFunctionPointer, addr 0x689998c, size 0x18, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFunctionPointer();

  /// [BurstDiscard]
  /// @brief Method GetFunctionPointerDiscard, addr 0x6899880, size 0x10c, virtual false, abstract: false, final false
  static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr> _cordl_fixed_empty_name_whitespace);

  /// @brief Method Invoke, addr 0x689946c, size 0xe8, virtual false, abstract: false, final false
  static inline bool Invoke();

  static inline ::System::IntPtr getStaticF_Pointer();

  static inline void setStaticF_Pointer(::System::IntPtr value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall(BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall(BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17685 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace Unity::Burst
// [BurstCompile]
// Dependencies System.Object
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.BurstCompiler/BurstCompilerHelper
class CORDL_TYPE BurstCompiler_BurstCompilerHelper : public ::System::Object {
public:
  // Declarations
  using IsBurstEnabledDelegate = ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate;

  using IsBurstEnabled_00000145$BurstDirectCall = ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$BurstDirectCall;

  using IsBurstEnabled_00000145$PostfixBurstDelegate = ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabled_00000145$PostfixBurstDelegate;

  /// @brief Field IsBurstEnabledImpl, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IsBurstEnabledImpl, put = setStaticF_IsBurstEnabledImpl)) ::Unity::Burst::BurstCompilerHelper_BurstCompiler_IsBurstEnabledDelegate* IsBurstEnabledImpl;

  /// @brief Field IsBurstGenerated, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_IsBurstGenerated, put = setStaticF_IsBurstGenerated)) bool IsBurstGenerated;

  /// [BurstDiscard]
  /// @brief Method DiscardedMethod, addr 0x6899554, size 0x8, virtual false, abstract: false, final false
  static inline void DiscardedMethod(::by_ref<bool> value);

  /// [BurstCompile]
  /// [MonoPInvokeCallback(typeof(Unity.Burst.BurstCompiler::BurstCompilerHelper::IsBurstEnabledDelegate))]
  /// @brief Method IsBurstEnabled, addr 0x6899468, size 0x4, virtual false, abstract: false, final false
  static inline bool IsBurstEnabled();

  /// [BurstCompile]
  /// [MonoPInvokeCallback(typeof(Unity.Burst.BurstCompiler::BurstCompilerHelper::IsBurstEnabledDelegate))]
  /// @brief Method IsBurstEnabled$BurstManaged, addr 0x689971c, size 0x54, virtual false, abstract: false, final false
  static inline bool IsBurstEnabled$BurstManaged();

  /// @brief Method IsCompiledByBurst, addr 0x689955c, size 0x60, virtual false, abstract: false, final false
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
  // Ctor Parameters [CppParam { name: "", ty: "BurstCompiler_BurstCompilerHelper", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstCompiler_BurstCompilerHelper(BurstCompiler_BurstCompilerHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstCompiler_BurstCompilerHelper", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstCompiler_BurstCompilerHelper(BurstCompiler_BurstCompilerHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17686 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::BurstCompiler_BurstCompilerHelper) == 0x10, "Size mismatch!");

} // namespace Unity::Burst
// Dependencies System.Object
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.BurstCompiler/FakeDelegate
class CORDL_TYPE BurstCompiler_FakeDelegate : public ::System::Object {
public:
  // Declarations
  /// @brief [Preserve]
  __declspec(property(get = get_Method)) ::System::Reflection::MethodInfo* Method;

  /// @brief Field <Method>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Method_k__BackingField, put = __cordl_internal_set__Method_k__BackingField)) ::System::Reflection::MethodInfo* _Method_k__BackingField;

  static inline ::Unity::Burst::BurstCompiler_FakeDelegate* New_ctor(::System::Reflection::MethodInfo* method);

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get__Method_k__BackingField() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get__Method_k__BackingField();

  constexpr void __cordl_internal_set__Method_k__BackingField(::System::Reflection::MethodInfo* value);

  /// @brief Method .ctor, addr 0x6897ddc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MethodInfo* method);

  /// [CompilerGenerated]
  /// @brief Method get_Method, addr 0x68999a4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::MethodInfo* get_Method();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstCompiler_FakeDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BurstCompiler_FakeDelegate", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstCompiler_FakeDelegate(BurstCompiler_FakeDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstCompiler_FakeDelegate", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstCompiler_FakeDelegate(BurstCompiler_FakeDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17687 };

  /// [CompilerGenerated]
  /// @brief Field <Method>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ____Method_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::BurstCompiler_FakeDelegate, ____Method_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Unity::Burst::BurstCompiler_FakeDelegate) == 0x18, "Size mismatch!");

} // namespace Unity::Burst
// [CompilerGenerated]
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

  /// @brief Method <Compile>b__22_0, addr 0x6899a04, size 0x78, virtual false, abstract: false, final false
  inline bool _Compile_b__22_0(::System::Attribute* s);

  /// @brief Method <TriggerUnsafeStaticMethodRecompilation>b__29_0, addr 0x6899a7c, size 0x70, virtual false, abstract: false, final false
  inline bool _TriggerUnsafeStaticMethodRecompilation_b__29_0(::System::Attribute* x);

  /// @brief Method .ctor, addr 0x6899a00, size 0x4, virtual false, abstract: false, final false
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
  // Ctor Parameters [CppParam { name: "", ty: "BurstCompiler___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstCompiler___c(BurstCompiler___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstCompiler___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstCompiler___c(BurstCompiler___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17688 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::BurstCompiler___c) == 0x10, "Size mismatch!");

} // namespace Unity::Burst
// [CompilerGenerated]
// Dependencies System.RuntimeMethodHandle, System.RuntimeTypeHandle
namespace Unity::Burst {
// Is value type: true
// CS Name: Unity.Burst.BurstCompiler/<>c__DisplayClass17_0
struct CORDL_TYPE BurstCompiler___c__DisplayClass17_0 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstCompiler___c__DisplayClass17_0();

  // Ctor Parameters [CppParam { name: "managedMethodHandle", ty: "::System::RuntimeMethodHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "delegateTypeHandle", ty:
  // "::System::RuntimeTypeHandle", modifiers: "", def_value: None, comment: None }]
  constexpr BurstCompiler___c__DisplayClass17_0(::System::RuntimeMethodHandle managedMethodHandle, ::System::RuntimeTypeHandle delegateTypeHandle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17689 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field managedMethodHandle, offset: 0x0, size: 0x8, def value: None
  ::System::RuntimeMethodHandle managedMethodHandle;

  /// @brief Field delegateTypeHandle, offset: 0x8, size: 0x8, def value: None
  ::System::RuntimeTypeHandle delegateTypeHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::BurstCompiler___c__DisplayClass17_0, managedMethodHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::BurstCompiler___c__DisplayClass17_0, delegateTypeHandle) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Unity::Burst::BurstCompiler___c__DisplayClass17_0) == 0x10, "Size mismatch!");

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

  using __c__DisplayClass17_0 = ::Unity::Burst::BurstCompiler___c__DisplayClass17_0;

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

  /// @brief Method AotCompilation, addr 0x6899044, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW AotCompilation(::ArrayW<::StringW> assemblyFolders, ::ArrayW<::StringW> assemblyRoots, ::StringW options);

  /// @brief Method BeginCompilerCommand, addr 0x6897930, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Burst::BurstCompiler_CommandBuilder* BeginCompilerCommand(::StringW cmd);

  /// @brief Method Cancel, addr 0x689881c, size 0x4, virtual false, abstract: false, final false
  static inline void Cancel();

  /// @brief Method Compile, addr 0x6898624, size 0x12c, virtual false, abstract: false, final false
  static inline void* Compile(::System::Object* delegateObj, bool isFunctionPointer, bool deterministicCompilation);

  /// @brief Method Compile, addr 0x6897de4, size 0x5b0, virtual false, abstract: false, final false
  static inline void* Compile(::System::Object* delegateObj, ::System::Reflection::MethodInfo* methodInfo, bool isFunctionPointer, bool isILPostProcessing, bool deterministicCompilation);

  /// @brief Method CompileDelegate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::reference_type_constraint<T>)
  static inline T CompileDelegate(T delegateMethod, bool deterministicCompilation);

  /// @brief Method CompileFunctionPointer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::reference_type_constraint<T>)
  static inline ::Unity::Burst::FunctionPointer_1<T> CompileFunctionPointer(T delegateMethod);

  /// [Obsolete("This method will be removed in a future version of Burst")]
  /// @brief Method CompileILPPMethod, addr 0x6897c34, size 0x38, virtual false, abstract: false, final false
  static inline ::System::IntPtr CompileILPPMethod(::System::RuntimeMethodHandle burstMethodHandle, ::System::RuntimeMethodHandle managedMethodHandle, ::System::RuntimeTypeHandle delegateTypeHandle);

  /// @brief Method CompileILPPMethod2, addr 0x6897c6c, size 0x170, virtual false, abstract: false, final false
  static inline ::System::IntPtr CompileILPPMethod2(::System::RuntimeMethodHandle burstMethodHandle);

  /// [Obsolete("This method will be removed in a future version of Burst")]
  /// @brief Method CompileUnsafeStaticMethod, addr 0x68985ec, size 0x38, virtual false, abstract: false, final false
  static inline void* CompileUnsafeStaticMethod(::System::RuntimeMethodHandle handle);

  /// @brief Method Disable, addr 0x689882c, size 0x4, virtual false, abstract: false, final false
  static inline void Disable();

  /// @brief Method DummyMethod, addr 0x6899218, size 0x4, virtual false, abstract: false, final false
  static inline void DummyMethod();

  /// @brief Method Enable, addr 0x6898828, size 0x4, virtual false, abstract: false, final false
  static inline void Enable();

  /// @brief Method GetExecutionMode, addr 0x6897c0c, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Burst::BurstExecutionEnvironment GetExecutionMode();

  /// [Obsolete("This method will be removed in a future version of Burst")]
  /// @brief Method GetILPPMethodFunctionPointer, addr 0x6898394, size 0x38, virtual false, abstract: false, final false
  static inline void* GetILPPMethodFunctionPointer(::System::IntPtr ilppMethod);

  /// @brief Method GetILPPMethodFunctionPointer2, addr 0x68983cc, size 0x138, virtual false, abstract: false, final false
  static inline void* GetILPPMethodFunctionPointer2(::System::IntPtr ilppMethod, ::System::RuntimeMethodHandle managedMethodHandle, ::System::RuntimeTypeHandle delegateTypeHandle);

  /// @brief Method Initialize, addr 0x6899030, size 0x4, virtual false, abstract: false, final false
  static inline void Initialize(::ArrayW<::StringW> assemblyFolders, ::ArrayW<::StringW> ignoreAssemblies);

  /// @brief Method IsApiAvailable, addr 0x689789c, size 0x94, virtual false, abstract: false, final false
  static inline bool IsApiAvailable(::StringW apiName);

  /// @brief Method IsCurrentCompilationDone, addr 0x6898820, size 0x8, virtual false, abstract: false, final false
  static inline bool IsCurrentCompilationDone();

  /// @brief Method IsHostEditorArm, addr 0x6898830, size 0x8, virtual false, abstract: false, final false
  static inline bool IsHostEditorArm();

  /// @brief Method IsLoadAdditionalLibrarySupported, addr 0x6897830, size 0x6c, virtual false, abstract: false, final false
  static inline bool IsLoadAdditionalLibrarySupported();

  /// @brief Method NotifyAssemblyCompilationFinished, addr 0x689903c, size 0x4, virtual false, abstract: false, final false
  static inline void NotifyAssemblyCompilationFinished(::StringW assemblyName, ::ArrayW<::StringW> defines);

  /// @brief Method NotifyAssemblyCompilationNotRequired, addr 0x6899038, size 0x4, virtual false, abstract: false, final false
  static inline void NotifyAssemblyCompilationNotRequired(::StringW assemblyName);

  /// @brief Method NotifyCompilationFinished, addr 0x6899040, size 0x4, virtual false, abstract: false, final false
  static inline void NotifyCompilationFinished();

  /// @brief Method NotifyCompilationStarted, addr 0x6899034, size 0x4, virtual false, abstract: false, final false
  static inline void NotifyCompilationStarted(::ArrayW<::StringW> assemblyFolders, ::ArrayW<::StringW> ignoreAssemblies);

  /// @brief Method RequestSetProtocolVersion, addr 0x6898e90, size 0x1a0, virtual false, abstract: false, final false
  static inline int32_t RequestSetProtocolVersion(int32_t version);

  /// @brief Method SendCommandToCompiler, addr 0x6898db4, size 0xdc, virtual false, abstract: false, final false
  static inline ::StringW SendCommandToCompiler(::StringW commandName, ::StringW commandArgs);

  /// @brief Method SendRawCommandToCompiler, addr 0x689908c, size 0xb8, virtual false, abstract: false, final false
  static inline ::StringW SendRawCommandToCompiler(::StringW command);

  /// @brief Method SetExecutionMode, addr 0x6897bd0, size 0x3c, virtual false, abstract: false, final false
  static inline void SetExecutionMode(::Unity::Burst::BurstExecutionEnvironment mode);

  /// @brief Method SetProfilerCallbacks, addr 0x6899088, size 0x4, virtual false, abstract: false, final false
  static inline void SetProfilerCallbacks();

  /// @brief Method Shutdown, addr 0x6898818, size 0x4, virtual false, abstract: false, final false
  static inline void Shutdown();

  /// @brief Method TriggerRecompilation, addr 0x6898d40, size 0x4, virtual false, abstract: false, final false
  static inline void TriggerRecompilation();

  /// @brief Method TriggerUnsafeStaticMethodRecompilation, addr 0x6898838, size 0x508, virtual false, abstract: false, final false
  static inline void TriggerUnsafeStaticMethodRecompilation();

  /// @brief Method UnloadAdditionalLibraries, addr 0x6898d44, size 0x70, virtual false, abstract: false, final false
  static inline void UnloadAdditionalLibraries();

  /// [Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
  /// @brief Method VerifyDelegateHasCorrectUnmanagedFunctionPointerAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::reference_type_constraint<T>)
  static inline void VerifyDelegateHasCorrectUnmanagedFunctionPointerAttribute(T delegateMethod);

  /// [Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
  /// @brief Method VerifyDelegateIsNotMulticast, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::reference_type_constraint<T>)
  static inline void VerifyDelegateIsNotMulticast(T delegateMethod);

  /// [CompilerGenerated]
  /// @brief Method <GetILPPMethodFunctionPointer2>g__GetManagedFallbackDelegate|17_0, addr 0x6898504, size 0xe8, virtual false, abstract: false, final false
  static inline void _GetILPPMethodFunctionPointer2_g__GetManagedFallbackDelegate_17_0(::by_ref<::System::Delegate*> managedFallbackDelegate,
                                                                                       ::by_ref<::System::Runtime::InteropServices::GCHandle> gcHandle,
                                                                                       ::by_ref<::Unity::Burst::BurstCompiler___c__DisplayClass17_0> _cordl_fixed_empty_name_whitespace);

  static inline ::System::Reflection::MethodInfo* getStaticF_DummyMethodInfo();

  static inline ::System::Action* getStaticF_OnCompileILPPMethod2();

  static inline ::Unity::Burst::BurstCompilerOptions* getStaticF_Options();

  static inline bool getStaticF__IsEnabled();

  static inline ::Unity::Burst::BurstCompiler_CommandBuilder* getStaticF__cmdBuilder();

  /// @brief Method get_IsEnabled, addr 0x6897b2c, size 0xa4, virtual false, abstract: false, final false
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
  // Ctor Parameters [CppParam { name: "", ty: "BurstCompiler", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstCompiler(BurstCompiler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstCompiler", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstCompiler(BurstCompiler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17690 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::BurstCompiler) == 0x10, "Size mismatch!");

} // namespace Unity::Burst
