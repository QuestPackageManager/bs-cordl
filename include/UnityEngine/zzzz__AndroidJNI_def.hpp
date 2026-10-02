#pragma once
// IWYU pragma private; include "UnityEngine/AndroidJNI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidJNI)
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
template <typename T> struct Span_1;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct AndroidJNI_JStringBinding;
}
namespace UnityEngine {
struct JNINativeMethod;
}
namespace UnityEngine {
struct jvalue;
}
// Forward declare root types
namespace UnityEngine {
class AndroidJNI;
}
namespace UnityEngine {
struct AndroidJNI_JStringBinding;
}
// Write type traits
MARK_REF_T(::UnityEngine::AndroidJNI*);
MARK_VAL_T(::UnityEngine::AndroidJNI_JStringBinding);
DEFINE_IL2CPP_CLASS(::UnityEngine::AndroidJNI*, "UnityEngine", "AndroidJNI");
DEFINE_IL2CPP_CLASS(::UnityEngine::AndroidJNI_JStringBinding, "UnityEngine", "AndroidJNI/JStringBinding");
// Dependencies System.IntPtr
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.AndroidJNI/JStringBinding
struct CORDL_TYPE AndroidJNI_JStringBinding {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x6e7883c, size 0x58, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method ToString, addr 0x6e73714, size 0x2c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidJNI_JStringBinding();

  // Ctor Parameters [CppParam { name: "javaString", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "chars", ty: "::System::IntPtr", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ownsRef", ty: "bool", modifiers: "", def_value:
  // None, comment: None }]
  constexpr AndroidJNI_JStringBinding(::System::IntPtr javaString, ::System::IntPtr chars, int32_t length, bool ownsRef) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20640 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field javaString, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr javaString;

  /// @brief Field chars, offset: 0x8, size: 0x8, def value: None
  ::System::IntPtr chars;

  /// @brief Field length, offset: 0x10, size: 0x4, def value: None
  int32_t length;

  /// @brief Field ownsRef, offset: 0x14, size: 0x1, def value: None
  bool ownsRef;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AndroidJNI_JStringBinding, javaString) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AndroidJNI_JStringBinding, chars) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AndroidJNI_JStringBinding, length) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AndroidJNI_JStringBinding, ownsRef) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AndroidJNI_JStringBinding) == 0x18, "Size mismatch!");

} // namespace UnityEngine
// [NativeHeader("Modules/AndroidJNI/Public/AndroidJNIBindingsHelpers.h")]
// [StaticAccessor("AndroidJNIBindingsHelpers", (UnityEngine.Bindings.StaticAccessorType)2)]
// [NativeConditional("PLATFORM_ANDROID")]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AndroidJNI
class CORDL_TYPE AndroidJNI : public ::System::Object {
public:
  // Declarations
  using JStringBinding = ::UnityEngine::AndroidJNI_JStringBinding;

  /// [ThreadSafe]
  /// @brief Method AllocObject, addr 0x6e72758, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr AllocObject(::System::IntPtr clazz);

  /// [ThreadSafe]
  /// @brief Method AttachCurrentThread, addr 0x6e71cfc, size 0x28, virtual false, abstract: false, final false
  static inline int32_t AttachCurrentThread();

  /// @brief Method CallBooleanMethod, addr 0x6e73eb0, size 0x70, virtual false, abstract: false, final false
  static inline bool CallBooleanMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args);

  /// @brief Method CallBooleanMethod, addr 0x6e73f20, size 0x8c, virtual false, abstract: false, final false
  static inline bool CallBooleanMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// [ThreadSafe]
  /// @brief Method CallBooleanMethodUnsafe, addr 0x6e73fac, size 0x54, virtual false, abstract: false, final false
  static inline bool CallBooleanMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::UnityEngine::jvalue* args);

  /// [Obsolete("AndroidJNI.CallByteMethod is obsolete. Use AndroidJNI.CallSByteMethod method instead")]
  /// @brief Method CallByteMethod, addr 0x6e74150, size 0x4, virtual false, abstract: false, final false
  static inline uint8_t CallByteMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args);

  /// @brief Method CallCharMethod, addr 0x6e742a4, size 0x70, virtual false, abstract: false, final false
  static inline char16_t CallCharMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args);

  /// @brief Method CallCharMethod, addr 0x6e74314, size 0x8c, virtual false, abstract: false, final false
  static inline char16_t CallCharMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// [ThreadSafe]
  /// @brief Method CallCharMethodUnsafe, addr 0x6e743a0, size 0x54, virtual false, abstract: false, final false
  static inline char16_t CallCharMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::UnityEngine::jvalue* args);

  /// @brief Method CallDoubleMethod, addr 0x6e74544, size 0x70, virtual false, abstract: false, final false
  static inline double_t CallDoubleMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args);

  /// @brief Method CallDoubleMethod, addr 0x6e745b4, size 0x8c, virtual false, abstract: false, final false
  static inline double_t CallDoubleMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// [ThreadSafe]
  /// @brief Method CallDoubleMethodUnsafe, addr 0x6e74640, size 0x54, virtual false, abstract: false, final false
  static inline double_t CallDoubleMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::UnityEngine::jvalue* args);

  /// @brief Method CallFloatMethod, addr 0x6e743f4, size 0x70, virtual false, abstract: false, final false
  static inline float_t CallFloatMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args);

  /// @brief Method CallFloatMethod, addr 0x6e74464, size 0x8c, virtual false, abstract: false, final false
  static inline float_t CallFloatMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// [ThreadSafe]
  /// @brief Method CallFloatMethodUnsafe, addr 0x6e744f0, size 0x54, virtual false, abstract: false, final false
  static inline float_t CallFloatMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::UnityEngine::jvalue* args);

  /// @brief Method CallIntMethod, addr 0x6e73d60, size 0x70, virtual false, abstract: false, final false
  static inline int32_t CallIntMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args);

  /// @brief Method CallIntMethod, addr 0x6e73dd0, size 0x8c, virtual false, abstract: false, final false
  static inline int32_t CallIntMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// [ThreadSafe]
  /// @brief Method CallIntMethodUnsafe, addr 0x6e73e5c, size 0x54, virtual false, abstract: false, final false
  static inline int32_t CallIntMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::UnityEngine::jvalue* args);

  /// @brief Method CallLongMethod, addr 0x6e74694, size 0x70, virtual false, abstract: false, final false
  static inline int64_t CallLongMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args);

  /// @brief Method CallLongMethod, addr 0x6e74704, size 0x8c, virtual false, abstract: false, final false
  static inline int64_t CallLongMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// [ThreadSafe]
  /// @brief Method CallLongMethodUnsafe, addr 0x6e74790, size 0x54, virtual false, abstract: false, final false
  static inline int64_t CallLongMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::UnityEngine::jvalue* args);

  /// @brief Method CallObjectMethod, addr 0x6e73c10, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IntPtr CallObjectMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args);

  /// @brief Method CallObjectMethod, addr 0x6e73c80, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::IntPtr CallObjectMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// [ThreadSafe]
  /// @brief Method CallObjectMethodUnsafe, addr 0x6e73d0c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr CallObjectMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::UnityEngine::jvalue* args);

  /// @brief Method CallSByteMethod, addr 0x6e74154, size 0x70, virtual false, abstract: false, final false
  static inline int8_t CallSByteMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args);

  /// @brief Method CallSByteMethod, addr 0x6e741c4, size 0x8c, virtual false, abstract: false, final false
  static inline int8_t CallSByteMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// [ThreadSafe]
  /// @brief Method CallSByteMethodUnsafe, addr 0x6e74250, size 0x54, virtual false, abstract: false, final false
  static inline int8_t CallSByteMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::UnityEngine::jvalue* args);

  /// @brief Method CallShortMethod, addr 0x6e74000, size 0x70, virtual false, abstract: false, final false
  static inline int16_t CallShortMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args);

  /// @brief Method CallShortMethod, addr 0x6e74070, size 0x8c, virtual false, abstract: false, final false
  static inline int16_t CallShortMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// [ThreadSafe]
  /// @brief Method CallShortMethodUnsafe, addr 0x6e740fc, size 0x54, virtual false, abstract: false, final false
  static inline int16_t CallShortMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::UnityEngine::jvalue* args);

  /// @brief Method CallStaticBooleanMethod, addr 0x6e75858, size 0x70, virtual false, abstract: false, final false
  static inline bool CallStaticBooleanMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticBooleanMethod, addr 0x6e758c8, size 0x8c, virtual false, abstract: false, final false
  static inline bool CallStaticBooleanMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// [ThreadSafe]
  /// @brief Method CallStaticBooleanMethodUnsafe, addr 0x6e75954, size 0x54, virtual false, abstract: false, final false
  static inline bool CallStaticBooleanMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::UnityEngine::jvalue* args);

  /// [Obsolete("AndroidJNI.CallStaticByteMethod is obsolete. Use AndroidJNI.CallStaticSByteMethod method instead")]
  /// @brief Method CallStaticByteMethod, addr 0x6e75af8, size 0x4, virtual false, abstract: false, final false
  static inline uint8_t CallStaticByteMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticCharMethod, addr 0x6e75c4c, size 0x70, virtual false, abstract: false, final false
  static inline char16_t CallStaticCharMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticCharMethod, addr 0x6e75cbc, size 0x8c, virtual false, abstract: false, final false
  static inline char16_t CallStaticCharMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// [ThreadSafe]
  /// @brief Method CallStaticCharMethodUnsafe, addr 0x6e75d48, size 0x54, virtual false, abstract: false, final false
  static inline char16_t CallStaticCharMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::UnityEngine::jvalue* args);

  /// @brief Method CallStaticDoubleMethod, addr 0x6e75eec, size 0x70, virtual false, abstract: false, final false
  static inline double_t CallStaticDoubleMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticDoubleMethod, addr 0x6e75f5c, size 0x8c, virtual false, abstract: false, final false
  static inline double_t CallStaticDoubleMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// [ThreadSafe]
  /// @brief Method CallStaticDoubleMethodUnsafe, addr 0x6e75fe8, size 0x54, virtual false, abstract: false, final false
  static inline double_t CallStaticDoubleMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::UnityEngine::jvalue* args);

  /// @brief Method CallStaticFloatMethod, addr 0x6e75d9c, size 0x70, virtual false, abstract: false, final false
  static inline float_t CallStaticFloatMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticFloatMethod, addr 0x6e75e0c, size 0x8c, virtual false, abstract: false, final false
  static inline float_t CallStaticFloatMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// [ThreadSafe]
  /// @brief Method CallStaticFloatMethodUnsafe, addr 0x6e75e98, size 0x54, virtual false, abstract: false, final false
  static inline float_t CallStaticFloatMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::UnityEngine::jvalue* args);

  /// @brief Method CallStaticIntMethod, addr 0x6e75708, size 0x70, virtual false, abstract: false, final false
  static inline int32_t CallStaticIntMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticIntMethod, addr 0x6e75778, size 0x8c, virtual false, abstract: false, final false
  static inline int32_t CallStaticIntMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// [ThreadSafe]
  /// @brief Method CallStaticIntMethodUnsafe, addr 0x6e75804, size 0x54, virtual false, abstract: false, final false
  static inline int32_t CallStaticIntMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::UnityEngine::jvalue* args);

  /// @brief Method CallStaticLongMethod, addr 0x6e7603c, size 0x70, virtual false, abstract: false, final false
  static inline int64_t CallStaticLongMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticLongMethod, addr 0x6e760ac, size 0x8c, virtual false, abstract: false, final false
  static inline int64_t CallStaticLongMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// [ThreadSafe]
  /// @brief Method CallStaticLongMethodUnsafe, addr 0x6e76138, size 0x54, virtual false, abstract: false, final false
  static inline int64_t CallStaticLongMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::UnityEngine::jvalue* args);

  /// @brief Method CallStaticObjectMethod, addr 0x6e755b8, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IntPtr CallStaticObjectMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticObjectMethod, addr 0x6e75628, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::IntPtr CallStaticObjectMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// [ThreadSafe]
  /// @brief Method CallStaticObjectMethodUnsafe, addr 0x6e756b4, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr CallStaticObjectMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::UnityEngine::jvalue* args);

  /// @brief Method CallStaticSByteMethod, addr 0x6e75afc, size 0x70, virtual false, abstract: false, final false
  static inline int8_t CallStaticSByteMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticSByteMethod, addr 0x6e75b6c, size 0x8c, virtual false, abstract: false, final false
  static inline int8_t CallStaticSByteMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// [ThreadSafe]
  /// @brief Method CallStaticSByteMethodUnsafe, addr 0x6e75bf8, size 0x54, virtual false, abstract: false, final false
  static inline int8_t CallStaticSByteMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::UnityEngine::jvalue* args);

  /// @brief Method CallStaticShortMethod, addr 0x6e759a8, size 0x70, virtual false, abstract: false, final false
  static inline int16_t CallStaticShortMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticShortMethod, addr 0x6e75a18, size 0x8c, virtual false, abstract: false, final false
  static inline int16_t CallStaticShortMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// [ThreadSafe]
  /// @brief Method CallStaticShortMethodUnsafe, addr 0x6e75aa4, size 0x54, virtual false, abstract: false, final false
  static inline int16_t CallStaticShortMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::UnityEngine::jvalue* args);

  /// @brief Method CallStaticStringMethod, addr 0x6e752b4, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW CallStaticStringMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticStringMethod, addr 0x6e75324, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW CallStaticStringMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticStringMethodUnsafe, addr 0x6e75390, size 0x14c, virtual false, abstract: false, final false
  static inline ::StringW CallStaticStringMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::UnityEngine::jvalue* args);

  /// [ThreadSafe]
  /// @brief Method CallStaticStringMethodUnsafeInternal, addr 0x6e754dc, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::AndroidJNI_JStringBinding CallStaticStringMethodUnsafeInternal(::System::IntPtr clazz, ::System::IntPtr methodID, ::UnityEngine::jvalue* args);

  /// @brief Method CallStaticStringMethodUnsafeInternal_Injected, addr 0x6e7555c, size 0x5c, virtual false, abstract: false, final false
  static inline void CallStaticStringMethodUnsafeInternal_Injected(::System::IntPtr clazz, ::System::IntPtr methodID, ::UnityEngine::jvalue* args,
                                                                   ::by_ref<::UnityEngine::AndroidJNI_JStringBinding> ret);

  /// @brief Method CallStaticVoidMethod, addr 0x6e7618c, size 0x70, virtual false, abstract: false, final false
  static inline void CallStaticVoidMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticVoidMethod, addr 0x6e761fc, size 0x8c, virtual false, abstract: false, final false
  static inline void CallStaticVoidMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// [ThreadSafe]
  /// @brief Method CallStaticVoidMethodUnsafe, addr 0x6e76288, size 0x54, virtual false, abstract: false, final false
  static inline void CallStaticVoidMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::UnityEngine::jvalue* args);

  /// @brief Method CallStringMethod, addr 0x6e7390c, size 0x70, virtual false, abstract: false, final false
  static inline ::StringW CallStringMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args);

  /// @brief Method CallStringMethod, addr 0x6e7397c, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW CallStringMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStringMethodUnsafe, addr 0x6e739e8, size 0x14c, virtual false, abstract: false, final false
  static inline ::StringW CallStringMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::UnityEngine::jvalue* args);

  /// [ThreadSafe]
  /// @brief Method CallStringMethodUnsafeInternal, addr 0x6e73b34, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::AndroidJNI_JStringBinding CallStringMethodUnsafeInternal(::System::IntPtr obj, ::System::IntPtr methodID, ::UnityEngine::jvalue* args);

  /// @brief Method CallStringMethodUnsafeInternal_Injected, addr 0x6e73bb4, size 0x5c, virtual false, abstract: false, final false
  static inline void CallStringMethodUnsafeInternal_Injected(::System::IntPtr obj, ::System::IntPtr methodID, ::UnityEngine::jvalue* args, ::by_ref<::UnityEngine::AndroidJNI_JStringBinding> ret);

  /// @brief Method CallVoidMethod, addr 0x6e747e4, size 0x70, virtual false, abstract: false, final false
  static inline void CallVoidMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args);

  /// @brief Method CallVoidMethod, addr 0x6e74854, size 0x8c, virtual false, abstract: false, final false
  static inline void CallVoidMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// [ThreadSafe]
  /// @brief Method CallVoidMethodUnsafe, addr 0x6e748e0, size 0x54, virtual false, abstract: false, final false
  static inline void CallVoidMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::UnityEngine::jvalue* args);

  /// [ThreadSafe]
  /// @brief Method CleanQueueGlobalRefs, addr 0x6e725c0, size 0x28, virtual false, abstract: false, final false
  static inline void CleanQueueGlobalRefs();

  /// [ThreadSafe]
  /// @brief Method ConvertToBooleanArray, addr 0x6e76c5c, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToBooleanArray(::ArrayW<bool> array);

  /// @brief Method ConvertToBooleanArray_Injected, addr 0x6e76d20, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToBooleanArray_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> array);

  /// [ThreadSafe]
  /// @brief Method DeleteGlobalRef, addr 0x6e72520, size 0x3c, virtual false, abstract: false, final false
  static inline void DeleteGlobalRef(::System::IntPtr obj);

  /// [ThreadSafe]
  /// @brief Method DeleteLocalRef, addr 0x6e7269c, size 0x3c, virtual false, abstract: false, final false
  static inline void DeleteLocalRef(::System::IntPtr obj);

  /// [ThreadSafe]
  /// @brief Method DeleteWeakGlobalRef, addr 0x6e72624, size 0x3c, virtual false, abstract: false, final false
  static inline void DeleteWeakGlobalRef(::System::IntPtr obj);

  /// [ThreadSafe]
  /// @brief Method DetachCurrentThread, addr 0x6e71d24, size 0x28, virtual false, abstract: false, final false
  static inline int32_t DetachCurrentThread();

  /// [ThreadSafe]
  /// @brief Method EnsureLocalCapacity, addr 0x6e7271c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t EnsureLocalCapacity(int32_t capacity);

  /// [ThreadSafe]
  /// @brief Method ExceptionClear, addr 0x6e722e4, size 0x28, virtual false, abstract: false, final false
  static inline void ExceptionClear();

  /// [ThreadSafe]
  /// @brief Method ExceptionDescribe, addr 0x6e722bc, size 0x28, virtual false, abstract: false, final false
  static inline void ExceptionDescribe();

  /// [ThreadSafe]
  /// @brief Method ExceptionOccurred, addr 0x6e72294, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr ExceptionOccurred();

  /// [ThreadSafe]
  /// @brief Method FatalError, addr 0x6e7230c, size 0x124, virtual false, abstract: false, final false
  static inline void FatalError(::StringW message);

  /// @brief Method FatalError_Injected, addr 0x6e72430, size 0x3c, virtual false, abstract: false, final false
  static inline void FatalError_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> message);

  /// [ThreadSafe]
  /// @brief Method FindClass, addr 0x6e71dd0, size 0x12c, virtual false, abstract: false, final false
  static inline ::System::IntPtr FindClass(::StringW name);

  /// @brief Method FindClass_Injected, addr 0x6e71efc, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr FindClass_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// [ThreadSafe]
  /// @brief Method FromBooleanArray, addr 0x6e77350, size 0x11c, virtual false, abstract: false, final false
  static inline ::ArrayW<bool> FromBooleanArray(::System::IntPtr array);

  /// @brief Method FromBooleanArray_Injected, addr 0x6e7746c, size 0x44, virtual false, abstract: false, final false
  static inline void FromBooleanArray_Injected(::System::IntPtr array, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [ThreadSafe]
  /// [Obsolete("AndroidJNI.FromByteArray is obsolete. Use AndroidJNI.FromSByteArray method instead")]
  /// @brief Method FromByteArray, addr 0x6e774b0, size 0x11c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t> FromByteArray(::System::IntPtr array);

  /// @brief Method FromByteArray_Injected, addr 0x6e775cc, size 0x44, virtual false, abstract: false, final false
  static inline void FromByteArray_Injected(::System::IntPtr array, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [ThreadSafe]
  /// @brief Method FromCharArray, addr 0x6e7764c, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<char16_t> FromCharArray(::System::IntPtr array);

  /// [ThreadSafe]
  /// @brief Method FromDoubleArray, addr 0x6e77778, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<double_t> FromDoubleArray(::System::IntPtr array);

  /// [ThreadSafe]
  /// @brief Method FromFloatArray, addr 0x6e7773c, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<float_t> FromFloatArray(::System::IntPtr array);

  /// [ThreadSafe]
  /// @brief Method FromIntArray, addr 0x6e776c4, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t> FromIntArray(::System::IntPtr array);

  /// [ThreadSafe]
  /// @brief Method FromLongArray, addr 0x6e77700, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<int64_t> FromLongArray(::System::IntPtr array);

  /// [ThreadSafe]
  /// @brief Method FromObjectArray, addr 0x6e777b4, size 0x11c, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::IntPtr> FromObjectArray(::System::IntPtr array);

  /// @brief Method FromObjectArray_Injected, addr 0x6e778d0, size 0x44, virtual false, abstract: false, final false
  static inline void FromObjectArray_Injected(::System::IntPtr array, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [ThreadSafe]
  /// @brief Method FromReflectedField, addr 0x6e71f74, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr FromReflectedField(::System::IntPtr refField);

  /// [ThreadSafe]
  /// @brief Method FromReflectedMethod, addr 0x6e71f38, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr FromReflectedMethod(::System::IntPtr refMethod);

  /// [ThreadSafe]
  /// @brief Method FromSByteArray, addr 0x6e77610, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<int8_t> FromSByteArray(::System::IntPtr array);

  /// [ThreadSafe]
  /// @brief Method FromShortArray, addr 0x6e77688, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<int16_t> FromShortArray(::System::IntPtr array);

  /// [ThreadSafe]
  /// @brief Method GetArrayLength, addr 0x6e77914, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetArrayLength(::System::IntPtr array);

  /// [ThreadSafe]
  /// @brief Method GetBooleanArrayElement, addr 0x6e77bc0, size 0x44, virtual false, abstract: false, final false
  static inline bool GetBooleanArrayElement(::System::IntPtr array, int32_t index);

  /// [ThreadSafe]
  /// @brief Method GetBooleanField, addr 0x6e74b78, size 0x44, virtual false, abstract: false, final false
  static inline bool GetBooleanField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// [Obsolete("AndroidJNI.GetByteArrayElement is obsolete. Use AndroidJNI.GetSByteArrayElement method instead")]
  /// @brief Method GetByteArrayElement, addr 0x6e77c04, size 0x44, virtual false, abstract: false, final false
  static inline uint8_t GetByteArrayElement(::System::IntPtr array, int32_t index);

  /// [Obsolete("AndroidJNI.GetByteField is obsolete. Use AndroidJNI.GetSByteField method instead")]
  /// @brief Method GetByteField, addr 0x6e74bbc, size 0x44, virtual false, abstract: false, final false
  static inline uint8_t GetByteField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// [ThreadSafe]
  /// @brief Method GetCharArrayElement, addr 0x6e77c8c, size 0x44, virtual false, abstract: false, final false
  static inline char16_t GetCharArrayElement(::System::IntPtr array, int32_t index);

  /// [ThreadSafe]
  /// @brief Method GetCharField, addr 0x6e74c44, size 0x44, virtual false, abstract: false, final false
  static inline char16_t GetCharField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method GetDirectBuffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline ::Unity::Collections::NativeArray_1<T> GetDirectBuffer(::System::IntPtr buffer);

  /// [ThreadSafe]
  /// @brief Method GetDirectBufferAddress, addr 0x6e78304, size 0x3c, virtual false, abstract: false, final false
  static inline int8_t* GetDirectBufferAddress(::System::IntPtr buffer);

  /// [ThreadSafe]
  /// @brief Method GetDirectBufferCapacity, addr 0x6e78340, size 0x3c, virtual false, abstract: false, final false
  static inline int64_t GetDirectBufferCapacity(::System::IntPtr buffer);

  /// @brief Method GetDirectByteBuffer, addr 0x6e7837c, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeArray_1<uint8_t> GetDirectByteBuffer(::System::IntPtr buffer);

  /// @brief Method GetDirectSByteBuffer, addr 0x6e783c8, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeArray_1<int8_t> GetDirectSByteBuffer(::System::IntPtr buffer);

  /// [ThreadSafe]
  /// @brief Method GetDoubleArrayElement, addr 0x6e77de0, size 0x44, virtual false, abstract: false, final false
  static inline double_t GetDoubleArrayElement(::System::IntPtr array, int32_t index);

  /// [ThreadSafe]
  /// @brief Method GetDoubleField, addr 0x6e74d98, size 0x44, virtual false, abstract: false, final false
  static inline double_t GetDoubleField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// [ThreadSafe]
  /// @brief Method GetFieldID, addr 0x6e72b74, size 0x1bc, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFieldID(::System::IntPtr clazz, ::StringW name, ::StringW sig);

  /// @brief Method GetFieldID_Injected, addr 0x6e72d30, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFieldID_Injected(::System::IntPtr clazz, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> sig);

  /// [ThreadSafe]
  /// @brief Method GetFloatArrayElement, addr 0x6e77d9c, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetFloatArrayElement(::System::IntPtr array, int32_t index);

  /// [ThreadSafe]
  /// @brief Method GetFloatField, addr 0x6e74d54, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetFloatField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// [ThreadSafe]
  /// @brief Method GetIntArrayElement, addr 0x6e77d14, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetIntArrayElement(::System::IntPtr array, int32_t index);

  /// [ThreadSafe]
  /// @brief Method GetIntField, addr 0x6e74ccc, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetIntField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// [ThreadSafe]
  /// [StaticAccessor("jni", (UnityEngine.Bindings.StaticAccessorType)2)]
  /// @brief Method GetJavaVM, addr 0x6e71cd4, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetJavaVM();

  /// [ThreadSafe]
  /// @brief Method GetLongArrayElement, addr 0x6e77d58, size 0x44, virtual false, abstract: false, final false
  static inline int64_t GetLongArrayElement(::System::IntPtr array, int32_t index);

  /// [ThreadSafe]
  /// @brief Method GetLongField, addr 0x6e74d10, size 0x44, virtual false, abstract: false, final false
  static inline int64_t GetLongField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// [ThreadSafe]
  /// @brief Method GetMethodID, addr 0x6e72964, size 0x1bc, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetMethodID(::System::IntPtr clazz, ::StringW name, ::StringW sig);

  /// @brief Method GetMethodID_Injected, addr 0x6e72b20, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetMethodID_Injected(::System::IntPtr clazz, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> sig);

  /// [ThreadSafe]
  /// @brief Method GetObjectArrayElement, addr 0x6e77e24, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetObjectArrayElement(::System::IntPtr array, int32_t index);

  /// [ThreadSafe]
  /// @brief Method GetObjectClass, addr 0x6e728e4, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetObjectClass(::System::IntPtr obj);

  /// [ThreadSafe]
  /// @brief Method GetObjectField, addr 0x6e74b34, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetObjectField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// [ThreadSafe]
  /// @brief Method GetQueueGlobalRefsCount, addr 0x6e72598, size 0x28, virtual false, abstract: false, final false
  static inline uint32_t GetQueueGlobalRefsCount();

  /// [ThreadSafe]
  /// @brief Method GetSByteArrayElement, addr 0x6e77c48, size 0x44, virtual false, abstract: false, final false
  static inline int8_t GetSByteArrayElement(::System::IntPtr array, int32_t index);

  /// [ThreadSafe]
  /// @brief Method GetSByteField, addr 0x6e74c00, size 0x44, virtual false, abstract: false, final false
  static inline int8_t GetSByteField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// [ThreadSafe]
  /// @brief Method GetShortArrayElement, addr 0x6e77cd0, size 0x44, virtual false, abstract: false, final false
  static inline int16_t GetShortArrayElement(::System::IntPtr array, int32_t index);

  /// [ThreadSafe]
  /// @brief Method GetShortField, addr 0x6e74c88, size 0x44, virtual false, abstract: false, final false
  static inline int16_t GetShortField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// [ThreadSafe]
  /// @brief Method GetStaticBooleanField, addr 0x6e76520, size 0x44, virtual false, abstract: false, final false
  static inline bool GetStaticBooleanField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// [Obsolete("AndroidJNI.GetStaticByteField is obsolete. Use AndroidJNI.GetStaticSByteField method instead")]
  /// @brief Method GetStaticByteField, addr 0x6e76564, size 0x44, virtual false, abstract: false, final false
  static inline uint8_t GetStaticByteField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// [ThreadSafe]
  /// @brief Method GetStaticCharField, addr 0x6e765ec, size 0x44, virtual false, abstract: false, final false
  static inline char16_t GetStaticCharField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// [ThreadSafe]
  /// @brief Method GetStaticDoubleField, addr 0x6e76740, size 0x44, virtual false, abstract: false, final false
  static inline double_t GetStaticDoubleField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// [ThreadSafe]
  /// @brief Method GetStaticFieldID, addr 0x6e72f94, size 0x1bc, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetStaticFieldID(::System::IntPtr clazz, ::StringW name, ::StringW sig);

  /// @brief Method GetStaticFieldID_Injected, addr 0x6e73150, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetStaticFieldID_Injected(::System::IntPtr clazz, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name,
                                                           ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> sig);

  /// [ThreadSafe]
  /// @brief Method GetStaticFloatField, addr 0x6e766fc, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetStaticFloatField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// [ThreadSafe]
  /// @brief Method GetStaticIntField, addr 0x6e76674, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetStaticIntField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// [ThreadSafe]
  /// @brief Method GetStaticLongField, addr 0x6e766b8, size 0x44, virtual false, abstract: false, final false
  static inline int64_t GetStaticLongField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// [ThreadSafe]
  /// @brief Method GetStaticMethodID, addr 0x6e72d84, size 0x1bc, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetStaticMethodID(::System::IntPtr clazz, ::StringW name, ::StringW sig);

  /// @brief Method GetStaticMethodID_Injected, addr 0x6e72f40, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetStaticMethodID_Injected(::System::IntPtr clazz, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name,
                                                            ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> sig);

  /// [ThreadSafe]
  /// @brief Method GetStaticObjectField, addr 0x6e764dc, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetStaticObjectField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// [ThreadSafe]
  /// @brief Method GetStaticSByteField, addr 0x6e765a8, size 0x44, virtual false, abstract: false, final false
  static inline int8_t GetStaticSByteField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// [ThreadSafe]
  /// @brief Method GetStaticShortField, addr 0x6e76630, size 0x44, virtual false, abstract: false, final false
  static inline int16_t GetStaticShortField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStaticStringField, addr 0x6e762dc, size 0x13c, virtual false, abstract: false, final false
  static inline ::StringW GetStaticStringField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// [ThreadSafe]
  /// @brief Method GetStaticStringFieldInternal, addr 0x6e76418, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::AndroidJNI_JStringBinding GetStaticStringFieldInternal(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStaticStringFieldInternal_Injected, addr 0x6e76488, size 0x54, virtual false, abstract: false, final false
  static inline void GetStaticStringFieldInternal_Injected(::System::IntPtr clazz, ::System::IntPtr fieldID, ::by_ref<::UnityEngine::AndroidJNI_JStringBinding> ret);

  /// @brief Method GetStringChars, addr 0x6e73578, size 0x134, virtual false, abstract: false, final false
  static inline ::StringW GetStringChars(::System::IntPtr str);

  /// [ThreadSafe]
  /// @brief Method GetStringCharsInternal, addr 0x6e736ac, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::AndroidJNI_JStringBinding GetStringCharsInternal(::System::IntPtr str);

  /// @brief Method GetStringCharsInternal_Injected, addr 0x6e73740, size 0x44, virtual false, abstract: false, final false
  static inline void GetStringCharsInternal_Injected(::System::IntPtr str, ::by_ref<::UnityEngine::AndroidJNI_JStringBinding> ret);

  /// @brief Method GetStringField, addr 0x6e74934, size 0x13c, virtual false, abstract: false, final false
  static inline ::StringW GetStringField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// [ThreadSafe]
  /// @brief Method GetStringFieldInternal, addr 0x6e74a70, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::AndroidJNI_JStringBinding GetStringFieldInternal(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method GetStringFieldInternal_Injected, addr 0x6e74ae0, size 0x54, virtual false, abstract: false, final false
  static inline void GetStringFieldInternal_Injected(::System::IntPtr obj, ::System::IntPtr fieldID, ::by_ref<::UnityEngine::AndroidJNI_JStringBinding> ret);

  /// [ThreadSafe]
  /// @brief Method GetStringLength, addr 0x6e73784, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetStringLength(::System::IntPtr str);

  /// [ThreadSafe]
  /// @brief Method GetStringUTFChars, addr 0x6e737fc, size 0xcc, virtual false, abstract: false, final false
  static inline ::StringW GetStringUTFChars(::System::IntPtr str);

  /// @brief Method GetStringUTFChars_Injected, addr 0x6e738c8, size 0x44, virtual false, abstract: false, final false
  static inline void GetStringUTFChars_Injected(::System::IntPtr str, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// [ThreadSafe]
  /// @brief Method GetStringUTFLength, addr 0x6e737c0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetStringUTFLength(::System::IntPtr str);

  /// [ThreadSafe]
  /// @brief Method GetSuperclass, addr 0x6e72058, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetSuperclass(::System::IntPtr clazz);

  /// [ThreadSafe]
  /// @brief Method GetVersion, addr 0x6e71da8, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetVersion();

  /// [RequiredByNativeCode]
  /// @brief Method InvokeAction, addr 0x6e71d4c, size 0x20, virtual false, abstract: false, final false
  static inline void InvokeAction(::System::Action* action);

  /// [ThreadSafe]
  /// @brief Method InvokeAttached, addr 0x6e71d6c, size 0x3c, virtual false, abstract: false, final false
  static inline void InvokeAttached(::System::Action* action);

  /// [ThreadSafe]
  /// @brief Method IsAssignableFrom, addr 0x6e72094, size 0x44, virtual false, abstract: false, final false
  static inline bool IsAssignableFrom(::System::IntPtr clazz1, ::System::IntPtr clazz2);

  /// [ThreadSafe]
  /// @brief Method IsInstanceOf, addr 0x6e72920, size 0x44, virtual false, abstract: false, final false
  static inline bool IsInstanceOf(::System::IntPtr obj, ::System::IntPtr clazz);

  /// [ThreadSafe]
  /// @brief Method IsSameObject, addr 0x6e726d8, size 0x44, virtual false, abstract: false, final false
  static inline bool IsSameObject(::System::IntPtr obj1, ::System::IntPtr obj2);

  /// [ThreadSafe]
  /// @brief Method NewBooleanArray, addr 0x6e77950, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewBooleanArray(int32_t size);

  /// [Obsolete("AndroidJNI.NewByteArray is obsolete. Use AndroidJNI.NewSByteArray method instead")]
  /// @brief Method NewByteArray, addr 0x6e7798c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewByteArray(int32_t size);

  /// [ThreadSafe]
  /// @brief Method NewCharArray, addr 0x6e77a04, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewCharArray(int32_t size);

  /// @brief Method NewDirectByteBuffer, addr 0x6e782a8, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewDirectByteBuffer(::Unity::Collections::NativeArray_1<int8_t> buffer);

  /// @brief Method NewDirectByteBuffer, addr 0x6e7824c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewDirectByteBuffer(::Unity::Collections::NativeArray_1<uint8_t> buffer);

  /// [ThreadSafe]
  /// @brief Method NewDirectByteBuffer, addr 0x6e78208, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewDirectByteBuffer(uint8_t* buffer, int64_t capacity);

  /// @brief Method NewDirectByteBufferFromNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  static inline ::System::IntPtr NewDirectByteBufferFromNativeArray(::Unity::Collections::NativeArray_1<T> buffer);

  /// [ThreadSafe]
  /// @brief Method NewDoubleArray, addr 0x6e77b30, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewDoubleArray(int32_t size);

  /// [ThreadSafe]
  /// @brief Method NewFloatArray, addr 0x6e77af4, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewFloatArray(int32_t size);

  /// [ThreadSafe]
  /// @brief Method NewGlobalRef, addr 0x6e724e4, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewGlobalRef(::System::IntPtr obj);

  /// [ThreadSafe]
  /// @brief Method NewIntArray, addr 0x6e77a7c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewIntArray(int32_t size);

  /// [ThreadSafe]
  /// @brief Method NewLocalRef, addr 0x6e72660, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewLocalRef(::System::IntPtr obj);

  /// [ThreadSafe]
  /// @brief Method NewLongArray, addr 0x6e77ab8, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewLongArray(int32_t size);

  /// @brief Method NewObject, addr 0x6e72794, size 0x70, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewObject(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue> args);

  /// @brief Method NewObject, addr 0x6e72804, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewObject(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// [ThreadSafe]
  /// @brief Method NewObjectA, addr 0x6e72890, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewObjectA(::System::IntPtr clazz, ::System::IntPtr methodID, ::UnityEngine::jvalue* args);

  /// [ThreadSafe]
  /// @brief Method NewObjectArray, addr 0x6e77b6c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewObjectArray(int32_t size, ::System::IntPtr clazz, ::System::IntPtr obj);

  /// [ThreadSafe]
  /// @brief Method NewSByteArray, addr 0x6e779c8, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewSByteArray(int32_t size);

  /// [ThreadSafe]
  /// @brief Method NewShortArray, addr 0x6e77a40, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewShortArray(int32_t size);

  /// [ThreadSafe]
  /// @brief Method NewString, addr 0x6e73310, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewString(::ArrayW<char16_t> chars);

  /// @brief Method NewString, addr 0x6e731a4, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewString(::StringW chars);

  /// [ThreadSafe]
  /// @brief Method NewStringFromStr, addr 0x6e731a8, size 0x12c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewStringFromStr(::StringW chars);

  /// @brief Method NewStringFromStr_Injected, addr 0x6e732d4, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewStringFromStr_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> chars);

  /// [ThreadSafe]
  /// @brief Method NewStringUTF, addr 0x6e73410, size 0x12c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewStringUTF(::StringW bytes);

  /// @brief Method NewStringUTF_Injected, addr 0x6e7353c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewStringUTF_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> bytes);

  /// @brief Method NewString_Injected, addr 0x6e733d4, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewString_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> chars);

  /// [ThreadSafe]
  /// @brief Method NewWeakGlobalRef, addr 0x6e725e8, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewWeakGlobalRef(::System::IntPtr obj);

  /// [ThreadSafe]
  /// @brief Method PopLocalFrame, addr 0x6e724a8, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr PopLocalFrame(::System::IntPtr ptr);

  /// [ThreadSafe]
  /// @brief Method PushLocalFrame, addr 0x6e7246c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t PushLocalFrame(int32_t capacity);

  /// [ThreadSafe]
  /// @brief Method QueueDeleteGlobalRef, addr 0x6e7255c, size 0x3c, virtual false, abstract: false, final false
  static inline void QueueDeleteGlobalRef(::System::IntPtr obj);

  /// @brief Method RegisterNatives, addr 0x6e78414, size 0x124, virtual false, abstract: false, final false
  static inline int32_t RegisterNatives(::System::IntPtr clazz, ::ArrayW<::UnityEngine::JNINativeMethod> methods);

  /// [ThreadSafe]
  /// @brief Method RegisterNativesAllocate, addr 0x6e78538, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr RegisterNativesAllocate(int32_t length);

  /// [ThreadSafe]
  /// @brief Method RegisterNativesAndFree, addr 0x6e78740, size 0x54, virtual false, abstract: false, final false
  static inline int32_t RegisterNativesAndFree(::System::IntPtr clazz, ::System::IntPtr natives, int32_t n);

  /// [ThreadSafe]
  /// @brief Method RegisterNativesSet, addr 0x6e78574, size 0x1cc, virtual false, abstract: false, final false
  static inline void RegisterNativesSet(::System::IntPtr natives, int32_t idx, ::StringW name, ::StringW signature, ::System::IntPtr fnPtr);

  /// @brief Method RegisterNativesSet_Injected, addr 0x6e78794, size 0x6c, virtual false, abstract: false, final false
  static inline void RegisterNativesSet_Injected(::System::IntPtr natives, int32_t idx, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name,
                                                 ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> signature, ::System::IntPtr fnPtr);

  /// [ThreadSafe]
  /// @brief Method ReleaseStringChars, addr 0x6e71c5c, size 0x3c, virtual false, abstract: false, final false
  static inline void ReleaseStringChars(::UnityEngine::AndroidJNI_JStringBinding str);

  /// @brief Method ReleaseStringChars_Injected, addr 0x6e71c98, size 0x3c, virtual false, abstract: false, final false
  static inline void ReleaseStringChars_Injected(::by_ref<::UnityEngine::AndroidJNI_JStringBinding> str);

  /// [ThreadSafe]
  /// @brief Method SetBooleanArrayElement, addr 0x6e77ec0, size 0x54, virtual false, abstract: false, final false
  static inline void SetBooleanArrayElement(::System::IntPtr array, int32_t index, bool val);

  /// [Obsolete("AndroidJNI.SetBooleanArrayElement(IntPtr, int, byte) is obsolete. Use AndroidJNI.SetBooleanArrayElement(IntPtr, int, bool) method instead")]
  /// @brief Method SetBooleanArrayElement, addr 0x6e77e68, size 0x58, virtual false, abstract: false, final false
  static inline void SetBooleanArrayElement(::System::IntPtr array, int32_t index, uint8_t val);

  /// [ThreadSafe]
  /// @brief Method SetBooleanField, addr 0x6e74fc0, size 0x54, virtual false, abstract: false, final false
  static inline void SetBooleanField(::System::IntPtr obj, ::System::IntPtr fieldID, bool val);

  /// [Obsolete("AndroidJNI.SetByteArrayElement is obsolete. Use AndroidJNI.SetSByteArrayElement method instead")]
  /// @brief Method SetByteArrayElement, addr 0x6e77f14, size 0x54, virtual false, abstract: false, final false
  static inline void SetByteArrayElement(::System::IntPtr array, int32_t index, int8_t val);

  /// [Obsolete("AndroidJNI.SetByteField is obsolete. Use AndroidJNI.SetSByteField method instead")]
  /// @brief Method SetByteField, addr 0x6e75014, size 0x54, virtual false, abstract: false, final false
  static inline void SetByteField(::System::IntPtr obj, ::System::IntPtr fieldID, uint8_t val);

  /// [ThreadSafe]
  /// @brief Method SetCharArrayElement, addr 0x6e77fbc, size 0x54, virtual false, abstract: false, final false
  static inline void SetCharArrayElement(::System::IntPtr array, int32_t index, char16_t val);

  /// [ThreadSafe]
  /// @brief Method SetCharField, addr 0x6e750bc, size 0x54, virtual false, abstract: false, final false
  static inline void SetCharField(::System::IntPtr obj, ::System::IntPtr fieldID, char16_t val);

  /// [ThreadSafe]
  /// @brief Method SetDoubleArrayElement, addr 0x6e78160, size 0x54, virtual false, abstract: false, final false
  static inline void SetDoubleArrayElement(::System::IntPtr array, int32_t index, double_t val);

  /// [ThreadSafe]
  /// @brief Method SetDoubleField, addr 0x6e75260, size 0x54, virtual false, abstract: false, final false
  static inline void SetDoubleField(::System::IntPtr obj, ::System::IntPtr fieldID, double_t val);

  /// [ThreadSafe]
  /// @brief Method SetFloatArrayElement, addr 0x6e7810c, size 0x54, virtual false, abstract: false, final false
  static inline void SetFloatArrayElement(::System::IntPtr array, int32_t index, float_t val);

  /// [ThreadSafe]
  /// @brief Method SetFloatField, addr 0x6e7520c, size 0x54, virtual false, abstract: false, final false
  static inline void SetFloatField(::System::IntPtr obj, ::System::IntPtr fieldID, float_t val);

  /// [ThreadSafe]
  /// @brief Method SetIntArrayElement, addr 0x6e78064, size 0x54, virtual false, abstract: false, final false
  static inline void SetIntArrayElement(::System::IntPtr array, int32_t index, int32_t val);

  /// [ThreadSafe]
  /// @brief Method SetIntField, addr 0x6e75164, size 0x54, virtual false, abstract: false, final false
  static inline void SetIntField(::System::IntPtr obj, ::System::IntPtr fieldID, int32_t val);

  /// [ThreadSafe]
  /// @brief Method SetLongArrayElement, addr 0x6e780b8, size 0x54, virtual false, abstract: false, final false
  static inline void SetLongArrayElement(::System::IntPtr array, int32_t index, int64_t val);

  /// [ThreadSafe]
  /// @brief Method SetLongField, addr 0x6e751b8, size 0x54, virtual false, abstract: false, final false
  static inline void SetLongField(::System::IntPtr obj, ::System::IntPtr fieldID, int64_t val);

  /// [ThreadSafe]
  /// @brief Method SetObjectArrayElement, addr 0x6e781b4, size 0x54, virtual false, abstract: false, final false
  static inline void SetObjectArrayElement(::System::IntPtr array, int32_t index, ::System::IntPtr obj);

  /// [ThreadSafe]
  /// @brief Method SetObjectField, addr 0x6e74f6c, size 0x54, virtual false, abstract: false, final false
  static inline void SetObjectField(::System::IntPtr obj, ::System::IntPtr fieldID, ::System::IntPtr val);

  /// [ThreadSafe]
  /// @brief Method SetSByteArrayElement, addr 0x6e77f68, size 0x54, virtual false, abstract: false, final false
  static inline void SetSByteArrayElement(::System::IntPtr array, int32_t index, int8_t val);

  /// [ThreadSafe]
  /// @brief Method SetSByteField, addr 0x6e75068, size 0x54, virtual false, abstract: false, final false
  static inline void SetSByteField(::System::IntPtr obj, ::System::IntPtr fieldID, int8_t val);

  /// [ThreadSafe]
  /// @brief Method SetShortArrayElement, addr 0x6e78010, size 0x54, virtual false, abstract: false, final false
  static inline void SetShortArrayElement(::System::IntPtr array, int32_t index, int16_t val);

  /// [ThreadSafe]
  /// @brief Method SetShortField, addr 0x6e75110, size 0x54, virtual false, abstract: false, final false
  static inline void SetShortField(::System::IntPtr obj, ::System::IntPtr fieldID, int16_t val);

  /// [ThreadSafe]
  /// @brief Method SetStaticBooleanField, addr 0x6e76968, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticBooleanField(::System::IntPtr clazz, ::System::IntPtr fieldID, bool val);

  /// [Obsolete("AndroidJNI.SetStaticByteField is obsolete. Use AndroidJNI.SetStaticSByteField method instead")]
  /// @brief Method SetStaticByteField, addr 0x6e769bc, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticByteField(::System::IntPtr clazz, ::System::IntPtr fieldID, uint8_t val);

  /// [ThreadSafe]
  /// @brief Method SetStaticCharField, addr 0x6e76a64, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticCharField(::System::IntPtr clazz, ::System::IntPtr fieldID, char16_t val);

  /// [ThreadSafe]
  /// @brief Method SetStaticDoubleField, addr 0x6e76c08, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticDoubleField(::System::IntPtr clazz, ::System::IntPtr fieldID, double_t val);

  /// [ThreadSafe]
  /// @brief Method SetStaticFloatField, addr 0x6e76bb4, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticFloatField(::System::IntPtr clazz, ::System::IntPtr fieldID, float_t val);

  /// [ThreadSafe]
  /// @brief Method SetStaticIntField, addr 0x6e76b0c, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticIntField(::System::IntPtr clazz, ::System::IntPtr fieldID, int32_t val);

  /// [ThreadSafe]
  /// @brief Method SetStaticLongField, addr 0x6e76b60, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticLongField(::System::IntPtr clazz, ::System::IntPtr fieldID, int64_t val);

  /// [ThreadSafe]
  /// @brief Method SetStaticObjectField, addr 0x6e76914, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticObjectField(::System::IntPtr clazz, ::System::IntPtr fieldID, ::System::IntPtr val);

  /// [ThreadSafe]
  /// @brief Method SetStaticSByteField, addr 0x6e76a10, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticSByteField(::System::IntPtr clazz, ::System::IntPtr fieldID, int8_t val);

  /// [ThreadSafe]
  /// @brief Method SetStaticShortField, addr 0x6e76ab8, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticShortField(::System::IntPtr clazz, ::System::IntPtr fieldID, int16_t val);

  /// [ThreadSafe]
  /// @brief Method SetStaticStringField, addr 0x6e76784, size 0x13c, virtual false, abstract: false, final false
  static inline void SetStaticStringField(::System::IntPtr clazz, ::System::IntPtr fieldID, ::StringW val);

  /// @brief Method SetStaticStringField_Injected, addr 0x6e768c0, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticStringField_Injected(::System::IntPtr clazz, ::System::IntPtr fieldID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> val);

  /// [ThreadSafe]
  /// @brief Method SetStringField, addr 0x6e74ddc, size 0x13c, virtual false, abstract: false, final false
  static inline void SetStringField(::System::IntPtr obj, ::System::IntPtr fieldID, ::StringW val);

  /// @brief Method SetStringField_Injected, addr 0x6e74f18, size 0x54, virtual false, abstract: false, final false
  static inline void SetStringField_Injected(::System::IntPtr obj, ::System::IntPtr fieldID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> val);

  /// [ThreadSafe]
  /// @brief Method Throw, addr 0x6e720d8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t Throw(::System::IntPtr obj);

  /// [ThreadSafe]
  /// @brief Method ThrowNew, addr 0x6e72114, size 0x13c, virtual false, abstract: false, final false
  static inline int32_t ThrowNew(::System::IntPtr clazz, ::StringW message);

  /// @brief Method ThrowNew_Injected, addr 0x6e72250, size 0x44, virtual false, abstract: false, final false
  static inline int32_t ThrowNew_Injected(::System::IntPtr clazz, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> message);

  /// @brief Method ToBooleanArray, addr 0x6e76d5c, size 0xc, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToBooleanArray(::ArrayW<bool> array);

  /// [Obsolete("AndroidJNI.ToByteArray is obsolete. Use AndroidJNI.ToSByteArray method instead")]
  /// [ThreadSafe]
  /// @brief Method ToByteArray, addr 0x6e76d68, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToByteArray(::ArrayW<uint8_t> array);

  /// @brief Method ToByteArray_Injected, addr 0x6e76e2c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToByteArray_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> array);

  /// @brief Method ToCharArray, addr 0x6e76f00, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToCharArray(::ArrayW<char16_t> array);

  /// [ThreadSafe]
  /// @brief Method ToCharArray, addr 0x6e76f54, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToCharArray(char16_t* array, int32_t length);

  /// @brief Method ToDoubleArray, addr 0x6e771f8, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToDoubleArray(::ArrayW<double_t> array);

  /// [ThreadSafe]
  /// @brief Method ToDoubleArray, addr 0x6e7724c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToDoubleArray(double_t* array, int32_t length);

  /// @brief Method ToFloatArray, addr 0x6e77160, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToFloatArray(::ArrayW<float_t> array);

  /// [ThreadSafe]
  /// @brief Method ToFloatArray, addr 0x6e771b4, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToFloatArray(float_t* array, int32_t length);

  /// @brief Method ToIntArray, addr 0x6e77030, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToIntArray(::ArrayW<int32_t> array);

  /// [ThreadSafe]
  /// @brief Method ToIntArray, addr 0x6e77084, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToIntArray(int32_t* array, int32_t length);

  /// @brief Method ToLongArray, addr 0x6e770c8, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToLongArray(::ArrayW<int64_t> array);

  /// [ThreadSafe]
  /// @brief Method ToLongArray, addr 0x6e7711c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToLongArray(int64_t* array, int32_t length);

  /// @brief Method ToObjectArray, addr 0x6e77348, size 0x8, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToObjectArray(::ArrayW<::System::IntPtr> array);

  /// @brief Method ToObjectArray, addr 0x6e772e4, size 0x64, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToObjectArray(::ArrayW<::System::IntPtr> array, ::System::IntPtr arrayClass);

  /// [ThreadSafe]
  /// @brief Method ToObjectArray, addr 0x6e77290, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToObjectArray(::System::IntPtr* array, int32_t length, ::System::IntPtr arrayClass);

  /// [ThreadSafe]
  /// @brief Method ToReflectedField, addr 0x6e72004, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToReflectedField(::System::IntPtr clazz, ::System::IntPtr fieldID, bool isStatic);

  /// [ThreadSafe]
  /// @brief Method ToReflectedMethod, addr 0x6e71fb0, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToReflectedMethod(::System::IntPtr clazz, ::System::IntPtr methodID, bool isStatic);

  /// @brief Method ToSByteArray, addr 0x6e76e68, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToSByteArray(::ArrayW<int8_t> array);

  /// [ThreadSafe]
  /// @brief Method ToSByteArray, addr 0x6e76ebc, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToSByteArray(int8_t* array, int32_t length);

  /// @brief Method ToShortArray, addr 0x6e76f98, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToShortArray(::ArrayW<int16_t> array);

  /// [ThreadSafe]
  /// @brief Method ToShortArray, addr 0x6e76fec, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToShortArray(int16_t* array, int32_t length);

  /// [ThreadSafe]
  /// @brief Method UnregisterNatives, addr 0x6e78800, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t UnregisterNatives(::System::IntPtr clazz);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidJNI();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidJNI", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidJNI(AndroidJNI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidJNI", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidJNI(AndroidJNI const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20641 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AndroidJNI) == 0x10, "Size mismatch!");

} // namespace UnityEngine
