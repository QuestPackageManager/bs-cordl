#pragma once
// IWYU pragma private; include "UnityEngine/AndroidJNI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
template<typename T>
struct Span_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
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
MARK_REF_PTR_T(::UnityEngine::AndroidJNI);
MARK_VAL_T(::UnityEngine::AndroidJNI_JStringBinding);
// Dependencies System.IntPtr
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.AndroidJNI/JStringBinding
struct CORDL_TYPE AndroidJNI_JStringBinding {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x6859d94, size 0x58, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method ToString, addr 0x6854c78, size 0x2c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr AndroidJNI_JStringBinding() ;

// Ctor Parameters [CppParam { name: "javaString", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "chars", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ownsRef", ty: "bool", modifiers: "", def_value: None }]
constexpr AndroidJNI_JStringBinding(::System::IntPtr  javaString, ::System::IntPtr  chars, int32_t  length, bool  ownsRef) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19925};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field javaString, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  javaString;

/// @brief Field chars, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  chars;

/// @brief Field length, offset: 0x10, size: 0x4, def value: None
 int32_t  length;

/// @brief Field ownsRef, offset: 0x14, size: 0x1, def value: None
 bool  ownsRef;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AndroidJNI_JStringBinding, javaString) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AndroidJNI_JStringBinding, chars) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AndroidJNI_JStringBinding, length) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AndroidJNI_JStringBinding, ownsRef) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AndroidJNI_JStringBinding, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AndroidJNI
class CORDL_TYPE AndroidJNI : public ::System::Object {
public:
// Declarations
using JStringBinding = ::UnityEngine::AndroidJNI_JStringBinding;

/// @brief Method AllocObject, addr 0x6853cbc, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr AllocObject(::System::IntPtr  clazz) ;

/// @brief Method AttachCurrentThread, addr 0x6853288, size 0x28, virtual false, abstract: false, final false
static inline int32_t AttachCurrentThread() ;

/// @brief Method CallBooleanMethod, addr 0x6855414, size 0x70, virtual false, abstract: false, final false
static inline bool CallBooleanMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallBooleanMethod, addr 0x6855484, size 0x8c, virtual false, abstract: false, final false
static inline bool CallBooleanMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallBooleanMethodUnsafe, addr 0x6855510, size 0x54, virtual false, abstract: false, final false
static inline bool CallBooleanMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallByteMethod, addr 0x68556b4, size 0x4, virtual false, abstract: false, final false
static inline uint8_t CallByteMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallCharMethod, addr 0x6855808, size 0x70, virtual false, abstract: false, final false
static inline char16_t CallCharMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallCharMethod, addr 0x6855878, size 0x8c, virtual false, abstract: false, final false
static inline char16_t CallCharMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallCharMethodUnsafe, addr 0x6855904, size 0x54, virtual false, abstract: false, final false
static inline char16_t CallCharMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallDoubleMethod, addr 0x6855aa8, size 0x70, virtual false, abstract: false, final false
static inline double_t CallDoubleMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallDoubleMethod, addr 0x6855b18, size 0x8c, virtual false, abstract: false, final false
static inline double_t CallDoubleMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallDoubleMethodUnsafe, addr 0x6855ba4, size 0x54, virtual false, abstract: false, final false
static inline double_t CallDoubleMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallFloatMethod, addr 0x6855958, size 0x70, virtual false, abstract: false, final false
static inline float_t CallFloatMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallFloatMethod, addr 0x68559c8, size 0x8c, virtual false, abstract: false, final false
static inline float_t CallFloatMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallFloatMethodUnsafe, addr 0x6855a54, size 0x54, virtual false, abstract: false, final false
static inline float_t CallFloatMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallIntMethod, addr 0x68552c4, size 0x70, virtual false, abstract: false, final false
static inline int32_t CallIntMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallIntMethod, addr 0x6855334, size 0x8c, virtual false, abstract: false, final false
static inline int32_t CallIntMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallIntMethodUnsafe, addr 0x68553c0, size 0x54, virtual false, abstract: false, final false
static inline int32_t CallIntMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallLongMethod, addr 0x6855bf8, size 0x70, virtual false, abstract: false, final false
static inline int64_t CallLongMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallLongMethod, addr 0x6855c68, size 0x8c, virtual false, abstract: false, final false
static inline int64_t CallLongMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallLongMethodUnsafe, addr 0x6855cf4, size 0x54, virtual false, abstract: false, final false
static inline int64_t CallLongMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallObjectMethod, addr 0x6855174, size 0x70, virtual false, abstract: false, final false
static inline ::System::IntPtr CallObjectMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallObjectMethod, addr 0x68551e4, size 0x8c, virtual false, abstract: false, final false
static inline ::System::IntPtr CallObjectMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallObjectMethodUnsafe, addr 0x6855270, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr CallObjectMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallSByteMethod, addr 0x68556b8, size 0x70, virtual false, abstract: false, final false
static inline int8_t CallSByteMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallSByteMethod, addr 0x6855728, size 0x8c, virtual false, abstract: false, final false
static inline int8_t CallSByteMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallSByteMethodUnsafe, addr 0x68557b4, size 0x54, virtual false, abstract: false, final false
static inline int8_t CallSByteMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallShortMethod, addr 0x6855564, size 0x70, virtual false, abstract: false, final false
static inline int16_t CallShortMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallShortMethod, addr 0x68555d4, size 0x8c, virtual false, abstract: false, final false
static inline int16_t CallShortMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallShortMethodUnsafe, addr 0x6855660, size 0x54, virtual false, abstract: false, final false
static inline int16_t CallShortMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticBooleanMethod, addr 0x6856dbc, size 0x70, virtual false, abstract: false, final false
static inline bool CallStaticBooleanMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallStaticBooleanMethod, addr 0x6856e2c, size 0x8c, virtual false, abstract: false, final false
static inline bool CallStaticBooleanMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticBooleanMethodUnsafe, addr 0x6856eb8, size 0x54, virtual false, abstract: false, final false
static inline bool CallStaticBooleanMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticByteMethod, addr 0x685705c, size 0x4, virtual false, abstract: false, final false
static inline uint8_t CallStaticByteMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallStaticCharMethod, addr 0x68571b0, size 0x70, virtual false, abstract: false, final false
static inline char16_t CallStaticCharMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallStaticCharMethod, addr 0x6857220, size 0x8c, virtual false, abstract: false, final false
static inline char16_t CallStaticCharMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticCharMethodUnsafe, addr 0x68572ac, size 0x54, virtual false, abstract: false, final false
static inline char16_t CallStaticCharMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticDoubleMethod, addr 0x6857450, size 0x70, virtual false, abstract: false, final false
static inline double_t CallStaticDoubleMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallStaticDoubleMethod, addr 0x68574c0, size 0x8c, virtual false, abstract: false, final false
static inline double_t CallStaticDoubleMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticDoubleMethodUnsafe, addr 0x685754c, size 0x54, virtual false, abstract: false, final false
static inline double_t CallStaticDoubleMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticFloatMethod, addr 0x6857300, size 0x70, virtual false, abstract: false, final false
static inline float_t CallStaticFloatMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallStaticFloatMethod, addr 0x6857370, size 0x8c, virtual false, abstract: false, final false
static inline float_t CallStaticFloatMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticFloatMethodUnsafe, addr 0x68573fc, size 0x54, virtual false, abstract: false, final false
static inline float_t CallStaticFloatMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticIntMethod, addr 0x6856c6c, size 0x70, virtual false, abstract: false, final false
static inline int32_t CallStaticIntMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallStaticIntMethod, addr 0x6856cdc, size 0x8c, virtual false, abstract: false, final false
static inline int32_t CallStaticIntMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticIntMethodUnsafe, addr 0x6856d68, size 0x54, virtual false, abstract: false, final false
static inline int32_t CallStaticIntMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticLongMethod, addr 0x68575a0, size 0x70, virtual false, abstract: false, final false
static inline int64_t CallStaticLongMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallStaticLongMethod, addr 0x6857610, size 0x8c, virtual false, abstract: false, final false
static inline int64_t CallStaticLongMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticLongMethodUnsafe, addr 0x685769c, size 0x54, virtual false, abstract: false, final false
static inline int64_t CallStaticLongMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticObjectMethod, addr 0x6856b1c, size 0x70, virtual false, abstract: false, final false
static inline ::System::IntPtr CallStaticObjectMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallStaticObjectMethod, addr 0x6856b8c, size 0x8c, virtual false, abstract: false, final false
static inline ::System::IntPtr CallStaticObjectMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticObjectMethodUnsafe, addr 0x6856c18, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr CallStaticObjectMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticSByteMethod, addr 0x6857060, size 0x70, virtual false, abstract: false, final false
static inline int8_t CallStaticSByteMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallStaticSByteMethod, addr 0x68570d0, size 0x8c, virtual false, abstract: false, final false
static inline int8_t CallStaticSByteMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticSByteMethodUnsafe, addr 0x685715c, size 0x54, virtual false, abstract: false, final false
static inline int8_t CallStaticSByteMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticShortMethod, addr 0x6856f0c, size 0x70, virtual false, abstract: false, final false
static inline int16_t CallStaticShortMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallStaticShortMethod, addr 0x6856f7c, size 0x8c, virtual false, abstract: false, final false
static inline int16_t CallStaticShortMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticShortMethodUnsafe, addr 0x6857008, size 0x54, virtual false, abstract: false, final false
static inline int16_t CallStaticShortMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticStringMethod, addr 0x6856818, size 0x70, virtual false, abstract: false, final false
static inline ::StringW CallStaticStringMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallStaticStringMethod, addr 0x6856888, size 0x6c, virtual false, abstract: false, final false
static inline ::StringW CallStaticStringMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticStringMethodUnsafe, addr 0x68568f4, size 0x14c, virtual false, abstract: false, final false
static inline ::StringW CallStaticStringMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticStringMethodUnsafeInternal, addr 0x6856a40, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::AndroidJNI_JStringBinding CallStaticStringMethodUnsafeInternal(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStaticStringMethodUnsafeInternal_Injected, addr 0x6856ac0, size 0x5c, virtual false, abstract: false, final false
static inline void CallStaticStringMethodUnsafeInternal_Injected(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args, ::ByRef<::UnityEngine::AndroidJNI_JStringBinding>  ret) ;

/// @brief Method CallStaticVoidMethod, addr 0x68576f0, size 0x70, virtual false, abstract: false, final false
static inline void CallStaticVoidMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallStaticVoidMethod, addr 0x6857760, size 0x8c, virtual false, abstract: false, final false
static inline void CallStaticVoidMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStaticVoidMethodUnsafe, addr 0x68577ec, size 0x54, virtual false, abstract: false, final false
static inline void CallStaticVoidMethodUnsafe(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStringMethod, addr 0x6854e70, size 0x70, virtual false, abstract: false, final false
static inline ::StringW CallStringMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallStringMethod, addr 0x6854ee0, size 0x6c, virtual false, abstract: false, final false
static inline ::StringW CallStringMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallStringMethodUnsafe, addr 0x6854f4c, size 0x14c, virtual false, abstract: false, final false
static inline ::StringW CallStringMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStringMethodUnsafeInternal, addr 0x6855098, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::AndroidJNI_JStringBinding CallStringMethodUnsafeInternal(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method CallStringMethodUnsafeInternal_Injected, addr 0x6855118, size 0x5c, virtual false, abstract: false, final false
static inline void CallStringMethodUnsafeInternal_Injected(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args, ::ByRef<::UnityEngine::AndroidJNI_JStringBinding>  ret) ;

/// @brief Method CallVoidMethod, addr 0x6855d48, size 0x70, virtual false, abstract: false, final false
static inline void CallVoidMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method CallVoidMethod, addr 0x6855db8, size 0x8c, virtual false, abstract: false, final false
static inline void CallVoidMethod(::System::IntPtr  obj, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method CallVoidMethodUnsafe, addr 0x6855e44, size 0x54, virtual false, abstract: false, final false
static inline void CallVoidMethodUnsafe(::System::IntPtr  obj, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method DeleteGlobalRef, addr 0x6853aac, size 0x3c, virtual false, abstract: false, final false
static inline void DeleteGlobalRef(::System::IntPtr  obj) ;

/// @brief Method DeleteLocalRef, addr 0x6853c00, size 0x3c, virtual false, abstract: false, final false
static inline void DeleteLocalRef(::System::IntPtr  obj) ;

/// @brief Method DeleteWeakGlobalRef, addr 0x6853b88, size 0x3c, virtual false, abstract: false, final false
static inline void DeleteWeakGlobalRef(::System::IntPtr  obj) ;

/// @brief Method DetachCurrentThread, addr 0x68532b0, size 0x28, virtual false, abstract: false, final false
static inline int32_t DetachCurrentThread() ;

/// @brief Method EnsureLocalCapacity, addr 0x6853c80, size 0x3c, virtual false, abstract: false, final false
static inline int32_t EnsureLocalCapacity(int32_t  capacity) ;

/// @brief Method ExceptionClear, addr 0x6853870, size 0x28, virtual false, abstract: false, final false
static inline void ExceptionClear() ;

/// @brief Method ExceptionDescribe, addr 0x6853848, size 0x28, virtual false, abstract: false, final false
static inline void ExceptionDescribe() ;

/// @brief Method ExceptionOccurred, addr 0x6853820, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr ExceptionOccurred() ;

/// @brief Method FatalError, addr 0x6853898, size 0x124, virtual false, abstract: false, final false
static inline void FatalError(::StringW  message) ;

/// @brief Method FatalError_Injected, addr 0x68539bc, size 0x3c, virtual false, abstract: false, final false
static inline void FatalError_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  message) ;

/// @brief Method FindClass, addr 0x685335c, size 0x12c, virtual false, abstract: false, final false
static inline ::System::IntPtr FindClass(::StringW  name) ;

/// @brief Method FindClass_Injected, addr 0x6853488, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr FindClass_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method FromBooleanArray, addr 0x68588a8, size 0x11c, virtual false, abstract: false, final false
static inline ::ArrayW<bool,::Array<bool>*> FromBooleanArray(::System::IntPtr  array) ;

/// @brief Method FromBooleanArray_Injected, addr 0x68589c4, size 0x44, virtual false, abstract: false, final false
static inline void FromBooleanArray_Injected(::System::IntPtr  array, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// @brief Method FromByteArray, addr 0x6858a08, size 0x11c, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> FromByteArray(::System::IntPtr  array) ;

/// @brief Method FromByteArray_Injected, addr 0x6858b24, size 0x44, virtual false, abstract: false, final false
static inline void FromByteArray_Injected(::System::IntPtr  array, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// @brief Method FromCharArray, addr 0x6858ba4, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<char16_t,::Array<char16_t>*> FromCharArray(::System::IntPtr  array) ;

/// @brief Method FromDoubleArray, addr 0x6858cd0, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<double_t,::Array<double_t>*> FromDoubleArray(::System::IntPtr  array) ;

/// @brief Method FromFloatArray, addr 0x6858c94, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<float_t,::Array<float_t>*> FromFloatArray(::System::IntPtr  array) ;

/// @brief Method FromIntArray, addr 0x6858c1c, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<int32_t,::Array<int32_t>*> FromIntArray(::System::IntPtr  array) ;

/// @brief Method FromLongArray, addr 0x6858c58, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<int64_t,::Array<int64_t>*> FromLongArray(::System::IntPtr  array) ;

/// @brief Method FromObjectArray, addr 0x6858d0c, size 0x11c, virtual false, abstract: false, final false
static inline ::ArrayW<::System::IntPtr,::Array<::System::IntPtr>*> FromObjectArray(::System::IntPtr  array) ;

/// @brief Method FromObjectArray_Injected, addr 0x6858e28, size 0x44, virtual false, abstract: false, final false
static inline void FromObjectArray_Injected(::System::IntPtr  array, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// @brief Method FromReflectedField, addr 0x6853500, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr FromReflectedField(::System::IntPtr  refField) ;

/// @brief Method FromReflectedMethod, addr 0x68534c4, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr FromReflectedMethod(::System::IntPtr  refMethod) ;

/// @brief Method FromSByteArray, addr 0x6858b68, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<int8_t,::Array<int8_t>*> FromSByteArray(::System::IntPtr  array) ;

/// @brief Method FromShortArray, addr 0x6858be0, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<int16_t,::Array<int16_t>*> FromShortArray(::System::IntPtr  array) ;

/// @brief Method GetArrayLength, addr 0x6858e6c, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetArrayLength(::System::IntPtr  array) ;

/// @brief Method GetBooleanArrayElement, addr 0x6859118, size 0x44, virtual false, abstract: false, final false
static inline bool GetBooleanArrayElement(::System::IntPtr  array, int32_t  index) ;

/// @brief Method GetBooleanField, addr 0x68560dc, size 0x44, virtual false, abstract: false, final false
static inline bool GetBooleanField(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// @brief Method GetByteArrayElement, addr 0x685915c, size 0x44, virtual false, abstract: false, final false
static inline uint8_t GetByteArrayElement(::System::IntPtr  array, int32_t  index) ;

/// @brief Method GetByteField, addr 0x6856120, size 0x44, virtual false, abstract: false, final false
static inline uint8_t GetByteField(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// @brief Method GetCharArrayElement, addr 0x68591e4, size 0x44, virtual false, abstract: false, final false
static inline char16_t GetCharArrayElement(::System::IntPtr  array, int32_t  index) ;

/// @brief Method GetCharField, addr 0x68561a8, size 0x44, virtual false, abstract: false, final false
static inline char16_t GetCharField(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// @brief Method GetDirectBuffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Unity::Collections::NativeArray_1<T> GetDirectBuffer(::System::IntPtr  buffer) ;

/// @brief Method GetDirectBufferAddress, addr 0x685985c, size 0x3c, virtual false, abstract: false, final false
static inline int8_t* GetDirectBufferAddress(::System::IntPtr  buffer) ;

/// @brief Method GetDirectBufferCapacity, addr 0x6859898, size 0x3c, virtual false, abstract: false, final false
static inline int64_t GetDirectBufferCapacity(::System::IntPtr  buffer) ;

/// @brief Method GetDirectByteBuffer, addr 0x68598d4, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Collections::NativeArray_1<uint8_t> GetDirectByteBuffer(::System::IntPtr  buffer) ;

/// @brief Method GetDirectSByteBuffer, addr 0x6859920, size 0x4c, virtual false, abstract: false, final false
static inline ::Unity::Collections::NativeArray_1<int8_t> GetDirectSByteBuffer(::System::IntPtr  buffer) ;

/// @brief Method GetDoubleArrayElement, addr 0x6859338, size 0x44, virtual false, abstract: false, final false
static inline double_t GetDoubleArrayElement(::System::IntPtr  array, int32_t  index) ;

/// @brief Method GetDoubleField, addr 0x68562fc, size 0x44, virtual false, abstract: false, final false
static inline double_t GetDoubleField(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// @brief Method GetFieldID, addr 0x68540d8, size 0x1bc, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFieldID(::System::IntPtr  clazz, ::StringW  name, ::StringW  sig) ;

/// @brief Method GetFieldID_Injected, addr 0x6854294, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFieldID_Injected(::System::IntPtr  clazz, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  sig) ;

/// @brief Method GetFloatArrayElement, addr 0x68592f4, size 0x44, virtual false, abstract: false, final false
static inline float_t GetFloatArrayElement(::System::IntPtr  array, int32_t  index) ;

/// @brief Method GetFloatField, addr 0x68562b8, size 0x44, virtual false, abstract: false, final false
static inline float_t GetFloatField(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// @brief Method GetIntArrayElement, addr 0x685926c, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetIntArrayElement(::System::IntPtr  array, int32_t  index) ;

/// @brief Method GetIntField, addr 0x6856230, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetIntField(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// @brief Method GetJavaVM, addr 0x6853260, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr GetJavaVM() ;

/// @brief Method GetLongArrayElement, addr 0x68592b0, size 0x44, virtual false, abstract: false, final false
static inline int64_t GetLongArrayElement(::System::IntPtr  array, int32_t  index) ;

/// @brief Method GetLongField, addr 0x6856274, size 0x44, virtual false, abstract: false, final false
static inline int64_t GetLongField(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// @brief Method GetMethodID, addr 0x6853ec8, size 0x1bc, virtual false, abstract: false, final false
static inline ::System::IntPtr GetMethodID(::System::IntPtr  clazz, ::StringW  name, ::StringW  sig) ;

/// @brief Method GetMethodID_Injected, addr 0x6854084, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr GetMethodID_Injected(::System::IntPtr  clazz, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  sig) ;

/// @brief Method GetObjectArrayElement, addr 0x685937c, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr GetObjectArrayElement(::System::IntPtr  array, int32_t  index) ;

/// @brief Method GetObjectClass, addr 0x6853e48, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetObjectClass(::System::IntPtr  obj) ;

/// @brief Method GetObjectField, addr 0x6856098, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr GetObjectField(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// @brief Method GetQueueGlobalRefsCount, addr 0x6853b24, size 0x28, virtual false, abstract: false, final false
static inline uint32_t GetQueueGlobalRefsCount() ;

/// @brief Method GetSByteArrayElement, addr 0x68591a0, size 0x44, virtual false, abstract: false, final false
static inline int8_t GetSByteArrayElement(::System::IntPtr  array, int32_t  index) ;

/// @brief Method GetSByteField, addr 0x6856164, size 0x44, virtual false, abstract: false, final false
static inline int8_t GetSByteField(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// @brief Method GetShortArrayElement, addr 0x6859228, size 0x44, virtual false, abstract: false, final false
static inline int16_t GetShortArrayElement(::System::IntPtr  array, int32_t  index) ;

/// @brief Method GetShortField, addr 0x68561ec, size 0x44, virtual false, abstract: false, final false
static inline int16_t GetShortField(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticBooleanField, addr 0x6857a84, size 0x44, virtual false, abstract: false, final false
static inline bool GetStaticBooleanField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticByteField, addr 0x6857ac8, size 0x44, virtual false, abstract: false, final false
static inline uint8_t GetStaticByteField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticCharField, addr 0x6857b50, size 0x44, virtual false, abstract: false, final false
static inline char16_t GetStaticCharField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticDoubleField, addr 0x6857ca4, size 0x44, virtual false, abstract: false, final false
static inline double_t GetStaticDoubleField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticFieldID, addr 0x68544f8, size 0x1bc, virtual false, abstract: false, final false
static inline ::System::IntPtr GetStaticFieldID(::System::IntPtr  clazz, ::StringW  name, ::StringW  sig) ;

/// @brief Method GetStaticFieldID_Injected, addr 0x68546b4, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr GetStaticFieldID_Injected(::System::IntPtr  clazz, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  sig) ;

/// @brief Method GetStaticFloatField, addr 0x6857c60, size 0x44, virtual false, abstract: false, final false
static inline float_t GetStaticFloatField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticIntField, addr 0x6857bd8, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetStaticIntField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticLongField, addr 0x6857c1c, size 0x44, virtual false, abstract: false, final false
static inline int64_t GetStaticLongField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticMethodID, addr 0x68542e8, size 0x1bc, virtual false, abstract: false, final false
static inline ::System::IntPtr GetStaticMethodID(::System::IntPtr  clazz, ::StringW  name, ::StringW  sig) ;

/// @brief Method GetStaticMethodID_Injected, addr 0x68544a4, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr GetStaticMethodID_Injected(::System::IntPtr  clazz, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  sig) ;

/// @brief Method GetStaticObjectField, addr 0x6857a40, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr GetStaticObjectField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticSByteField, addr 0x6857b0c, size 0x44, virtual false, abstract: false, final false
static inline int8_t GetStaticSByteField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticShortField, addr 0x6857b94, size 0x44, virtual false, abstract: false, final false
static inline int16_t GetStaticShortField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticStringField, addr 0x6857840, size 0x13c, virtual false, abstract: false, final false
static inline ::StringW GetStaticStringField(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticStringFieldInternal, addr 0x685797c, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::AndroidJNI_JStringBinding GetStaticStringFieldInternal(::System::IntPtr  clazz, ::System::IntPtr  fieldID) ;

/// @brief Method GetStaticStringFieldInternal_Injected, addr 0x68579ec, size 0x54, virtual false, abstract: false, final false
static inline void GetStaticStringFieldInternal_Injected(::System::IntPtr  clazz, ::System::IntPtr  fieldID, ::ByRef<::UnityEngine::AndroidJNI_JStringBinding>  ret) ;

/// @brief Method GetStringChars, addr 0x6854adc, size 0x134, virtual false, abstract: false, final false
static inline ::StringW GetStringChars(::System::IntPtr  str) ;

/// @brief Method GetStringCharsInternal, addr 0x6854c10, size 0x68, virtual false, abstract: false, final false
static inline ::UnityEngine::AndroidJNI_JStringBinding GetStringCharsInternal(::System::IntPtr  str) ;

/// @brief Method GetStringCharsInternal_Injected, addr 0x6854ca4, size 0x44, virtual false, abstract: false, final false
static inline void GetStringCharsInternal_Injected(::System::IntPtr  str, ::ByRef<::UnityEngine::AndroidJNI_JStringBinding>  ret) ;

/// @brief Method GetStringField, addr 0x6855e98, size 0x13c, virtual false, abstract: false, final false
static inline ::StringW GetStringField(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// @brief Method GetStringFieldInternal, addr 0x6855fd4, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::AndroidJNI_JStringBinding GetStringFieldInternal(::System::IntPtr  obj, ::System::IntPtr  fieldID) ;

/// @brief Method GetStringFieldInternal_Injected, addr 0x6856044, size 0x54, virtual false, abstract: false, final false
static inline void GetStringFieldInternal_Injected(::System::IntPtr  obj, ::System::IntPtr  fieldID, ::ByRef<::UnityEngine::AndroidJNI_JStringBinding>  ret) ;

/// @brief Method GetStringLength, addr 0x6854ce8, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetStringLength(::System::IntPtr  str) ;

/// @brief Method GetStringUTFChars, addr 0x6854d60, size 0xcc, virtual false, abstract: false, final false
static inline ::StringW GetStringUTFChars(::System::IntPtr  str) ;

/// @brief Method GetStringUTFChars_Injected, addr 0x6854e2c, size 0x44, virtual false, abstract: false, final false
static inline void GetStringUTFChars_Injected(::System::IntPtr  str, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method GetStringUTFLength, addr 0x6854d24, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetStringUTFLength(::System::IntPtr  str) ;

/// @brief Method GetSuperclass, addr 0x68535e4, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSuperclass(::System::IntPtr  clazz) ;

/// @brief Method GetVersion, addr 0x6853334, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetVersion() ;

/// @brief Method InvokeAction, addr 0x68532d8, size 0x20, virtual false, abstract: false, final false
static inline void InvokeAction(::System::Action*  action) ;

/// @brief Method InvokeAttached, addr 0x68532f8, size 0x3c, virtual false, abstract: false, final false
static inline void InvokeAttached(::System::Action*  action) ;

/// @brief Method IsAssignableFrom, addr 0x6853620, size 0x44, virtual false, abstract: false, final false
static inline bool IsAssignableFrom(::System::IntPtr  clazz1, ::System::IntPtr  clazz2) ;

/// @brief Method IsInstanceOf, addr 0x6853e84, size 0x44, virtual false, abstract: false, final false
static inline bool IsInstanceOf(::System::IntPtr  obj, ::System::IntPtr  clazz) ;

/// @brief Method IsSameObject, addr 0x6853c3c, size 0x44, virtual false, abstract: false, final false
static inline bool IsSameObject(::System::IntPtr  obj1, ::System::IntPtr  obj2) ;

/// @brief Method NewBooleanArray, addr 0x6858ea8, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewBooleanArray(int32_t  size) ;

/// @brief Method NewByteArray, addr 0x6858ee4, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewByteArray(int32_t  size) ;

/// @brief Method NewCharArray, addr 0x6858f5c, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewCharArray(int32_t  size) ;

/// @brief Method NewDirectByteBuffer, addr 0x6859800, size 0x5c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewDirectByteBuffer(::Unity::Collections::NativeArray_1<int8_t>  buffer) ;

/// @brief Method NewDirectByteBuffer, addr 0x68597a4, size 0x5c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewDirectByteBuffer(::Unity::Collections::NativeArray_1<uint8_t>  buffer) ;

/// @brief Method NewDirectByteBuffer, addr 0x6859760, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr NewDirectByteBuffer(uint8_t*  buffer, int64_t  capacity) ;

/// @brief Method NewDirectByteBufferFromNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::IntPtr NewDirectByteBufferFromNativeArray(::Unity::Collections::NativeArray_1<T>  buffer) ;

/// @brief Method NewDoubleArray, addr 0x6859088, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewDoubleArray(int32_t  size) ;

/// @brief Method NewFloatArray, addr 0x685904c, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewFloatArray(int32_t  size) ;

/// @brief Method NewGlobalRef, addr 0x6853a70, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewGlobalRef(::System::IntPtr  obj) ;

/// @brief Method NewIntArray, addr 0x6858fd4, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewIntArray(int32_t  size) ;

/// @brief Method NewLocalRef, addr 0x6853bc4, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewLocalRef(::System::IntPtr  obj) ;

/// @brief Method NewLongArray, addr 0x6859010, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewLongArray(int32_t  size) ;

/// @brief Method NewObject, addr 0x6853cf8, size 0x70, virtual false, abstract: false, final false
static inline ::System::IntPtr NewObject(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::ArrayW<::UnityEngine::jvalue,::Array<::UnityEngine::jvalue>*>  args) ;

/// @brief Method NewObject, addr 0x6853d68, size 0x8c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewObject(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::System::Span_1<::UnityEngine::jvalue>  args) ;

/// @brief Method NewObjectA, addr 0x6853df4, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr NewObjectA(::System::IntPtr  clazz, ::System::IntPtr  methodID, ::UnityEngine::jvalue*  args) ;

/// @brief Method NewObjectArray, addr 0x68590c4, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr NewObjectArray(int32_t  size, ::System::IntPtr  clazz, ::System::IntPtr  obj) ;

/// @brief Method NewSByteArray, addr 0x6858f20, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewSByteArray(int32_t  size) ;

/// @brief Method NewShortArray, addr 0x6858f98, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewShortArray(int32_t  size) ;

/// @brief Method NewString, addr 0x6854874, size 0xc4, virtual false, abstract: false, final false
static inline ::System::IntPtr NewString(::ArrayW<char16_t,::Array<char16_t>*>  chars) ;

/// @brief Method NewString, addr 0x6854708, size 0x4, virtual false, abstract: false, final false
static inline ::System::IntPtr NewString(::StringW  chars) ;

/// @brief Method NewStringFromStr, addr 0x685470c, size 0x12c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewStringFromStr(::StringW  chars) ;

/// @brief Method NewStringFromStr_Injected, addr 0x6854838, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewStringFromStr_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  chars) ;

/// @brief Method NewStringUTF, addr 0x6854974, size 0x12c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewStringUTF(::StringW  bytes) ;

/// @brief Method NewStringUTF_Injected, addr 0x6854aa0, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewStringUTF_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  bytes) ;

/// @brief Method NewString_Injected, addr 0x6854938, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewString_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  chars) ;

/// @brief Method NewWeakGlobalRef, addr 0x6853b4c, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr NewWeakGlobalRef(::System::IntPtr  obj) ;

/// @brief Method PopLocalFrame, addr 0x6853a34, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr PopLocalFrame(::System::IntPtr  ptr) ;

/// @brief Method PushLocalFrame, addr 0x68539f8, size 0x3c, virtual false, abstract: false, final false
static inline int32_t PushLocalFrame(int32_t  capacity) ;

/// @brief Method QueueDeleteGlobalRef, addr 0x6853ae8, size 0x3c, virtual false, abstract: false, final false
static inline void QueueDeleteGlobalRef(::System::IntPtr  obj) ;

/// @brief Method RegisterNatives, addr 0x685996c, size 0x124, virtual false, abstract: false, final false
static inline int32_t RegisterNatives(::System::IntPtr  clazz, ::ArrayW<::UnityEngine::JNINativeMethod,::Array<::UnityEngine::JNINativeMethod>*>  methods) ;

/// @brief Method RegisterNativesAllocate, addr 0x6859a90, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr RegisterNativesAllocate(int32_t  length) ;

/// @brief Method RegisterNativesAndFree, addr 0x6859c98, size 0x54, virtual false, abstract: false, final false
static inline int32_t RegisterNativesAndFree(::System::IntPtr  clazz, ::System::IntPtr  natives, int32_t  n) ;

/// @brief Method RegisterNativesSet, addr 0x6859acc, size 0x1cc, virtual false, abstract: false, final false
static inline void RegisterNativesSet(::System::IntPtr  natives, int32_t  idx, ::StringW  name, ::StringW  signature, ::System::IntPtr  fnPtr) ;

/// @brief Method RegisterNativesSet_Injected, addr 0x6859cec, size 0x6c, virtual false, abstract: false, final false
static inline void RegisterNativesSet_Injected(::System::IntPtr  natives, int32_t  idx, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  signature, ::System::IntPtr  fnPtr) ;

/// @brief Method ReleaseStringChars, addr 0x68531e8, size 0x3c, virtual false, abstract: false, final false
static inline void ReleaseStringChars(::UnityEngine::AndroidJNI_JStringBinding  str) ;

/// @brief Method ReleaseStringChars_Injected, addr 0x6853224, size 0x3c, virtual false, abstract: false, final false
static inline void ReleaseStringChars_Injected(::ByRef<::UnityEngine::AndroidJNI_JStringBinding>  str) ;

/// @brief Method SetBooleanArrayElement, addr 0x6859418, size 0x54, virtual false, abstract: false, final false
static inline void SetBooleanArrayElement(::System::IntPtr  array, int32_t  index, bool  val) ;

/// @brief Method SetBooleanArrayElement, addr 0x68593c0, size 0x58, virtual false, abstract: false, final false
static inline void SetBooleanArrayElement(::System::IntPtr  array, int32_t  index, uint8_t  val) ;

/// @brief Method SetBooleanField, addr 0x6856524, size 0x54, virtual false, abstract: false, final false
static inline void SetBooleanField(::System::IntPtr  obj, ::System::IntPtr  fieldID, bool  val) ;

/// @brief Method SetByteArrayElement, addr 0x685946c, size 0x54, virtual false, abstract: false, final false
static inline void SetByteArrayElement(::System::IntPtr  array, int32_t  index, int8_t  val) ;

/// @brief Method SetByteField, addr 0x6856578, size 0x54, virtual false, abstract: false, final false
static inline void SetByteField(::System::IntPtr  obj, ::System::IntPtr  fieldID, uint8_t  val) ;

/// @brief Method SetCharArrayElement, addr 0x6859514, size 0x54, virtual false, abstract: false, final false
static inline void SetCharArrayElement(::System::IntPtr  array, int32_t  index, char16_t  val) ;

/// @brief Method SetCharField, addr 0x6856620, size 0x54, virtual false, abstract: false, final false
static inline void SetCharField(::System::IntPtr  obj, ::System::IntPtr  fieldID, char16_t  val) ;

/// @brief Method SetDoubleArrayElement, addr 0x68596b8, size 0x54, virtual false, abstract: false, final false
static inline void SetDoubleArrayElement(::System::IntPtr  array, int32_t  index, double_t  val) ;

/// @brief Method SetDoubleField, addr 0x68567c4, size 0x54, virtual false, abstract: false, final false
static inline void SetDoubleField(::System::IntPtr  obj, ::System::IntPtr  fieldID, double_t  val) ;

/// @brief Method SetFloatArrayElement, addr 0x6859664, size 0x54, virtual false, abstract: false, final false
static inline void SetFloatArrayElement(::System::IntPtr  array, int32_t  index, float_t  val) ;

/// @brief Method SetFloatField, addr 0x6856770, size 0x54, virtual false, abstract: false, final false
static inline void SetFloatField(::System::IntPtr  obj, ::System::IntPtr  fieldID, float_t  val) ;

/// @brief Method SetIntArrayElement, addr 0x68595bc, size 0x54, virtual false, abstract: false, final false
static inline void SetIntArrayElement(::System::IntPtr  array, int32_t  index, int32_t  val) ;

/// @brief Method SetIntField, addr 0x68566c8, size 0x54, virtual false, abstract: false, final false
static inline void SetIntField(::System::IntPtr  obj, ::System::IntPtr  fieldID, int32_t  val) ;

/// @brief Method SetLongArrayElement, addr 0x6859610, size 0x54, virtual false, abstract: false, final false
static inline void SetLongArrayElement(::System::IntPtr  array, int32_t  index, int64_t  val) ;

/// @brief Method SetLongField, addr 0x685671c, size 0x54, virtual false, abstract: false, final false
static inline void SetLongField(::System::IntPtr  obj, ::System::IntPtr  fieldID, int64_t  val) ;

/// @brief Method SetObjectArrayElement, addr 0x685970c, size 0x54, virtual false, abstract: false, final false
static inline void SetObjectArrayElement(::System::IntPtr  array, int32_t  index, ::System::IntPtr  obj) ;

/// @brief Method SetObjectField, addr 0x68564d0, size 0x54, virtual false, abstract: false, final false
static inline void SetObjectField(::System::IntPtr  obj, ::System::IntPtr  fieldID, ::System::IntPtr  val) ;

/// @brief Method SetSByteArrayElement, addr 0x68594c0, size 0x54, virtual false, abstract: false, final false
static inline void SetSByteArrayElement(::System::IntPtr  array, int32_t  index, int8_t  val) ;

/// @brief Method SetSByteField, addr 0x68565cc, size 0x54, virtual false, abstract: false, final false
static inline void SetSByteField(::System::IntPtr  obj, ::System::IntPtr  fieldID, int8_t  val) ;

/// @brief Method SetShortArrayElement, addr 0x6859568, size 0x54, virtual false, abstract: false, final false
static inline void SetShortArrayElement(::System::IntPtr  array, int32_t  index, int16_t  val) ;

/// @brief Method SetShortField, addr 0x6856674, size 0x54, virtual false, abstract: false, final false
static inline void SetShortField(::System::IntPtr  obj, ::System::IntPtr  fieldID, int16_t  val) ;

/// @brief Method SetStaticBooleanField, addr 0x6857ecc, size 0x54, virtual false, abstract: false, final false
static inline void SetStaticBooleanField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, bool  val) ;

/// @brief Method SetStaticByteField, addr 0x6857f20, size 0x54, virtual false, abstract: false, final false
static inline void SetStaticByteField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, uint8_t  val) ;

/// @brief Method SetStaticCharField, addr 0x6857fc8, size 0x54, virtual false, abstract: false, final false
static inline void SetStaticCharField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, char16_t  val) ;

/// @brief Method SetStaticDoubleField, addr 0x685816c, size 0x54, virtual false, abstract: false, final false
static inline void SetStaticDoubleField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, double_t  val) ;

/// @brief Method SetStaticFloatField, addr 0x6858118, size 0x54, virtual false, abstract: false, final false
static inline void SetStaticFloatField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, float_t  val) ;

/// @brief Method SetStaticIntField, addr 0x6858070, size 0x54, virtual false, abstract: false, final false
static inline void SetStaticIntField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, int32_t  val) ;

/// @brief Method SetStaticLongField, addr 0x68580c4, size 0x54, virtual false, abstract: false, final false
static inline void SetStaticLongField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, int64_t  val) ;

/// @brief Method SetStaticObjectField, addr 0x6857e78, size 0x54, virtual false, abstract: false, final false
static inline void SetStaticObjectField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, ::System::IntPtr  val) ;

/// @brief Method SetStaticSByteField, addr 0x6857f74, size 0x54, virtual false, abstract: false, final false
static inline void SetStaticSByteField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, int8_t  val) ;

/// @brief Method SetStaticShortField, addr 0x685801c, size 0x54, virtual false, abstract: false, final false
static inline void SetStaticShortField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, int16_t  val) ;

/// @brief Method SetStaticStringField, addr 0x6857ce8, size 0x13c, virtual false, abstract: false, final false
static inline void SetStaticStringField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, ::StringW  val) ;

/// @brief Method SetStaticStringField_Injected, addr 0x6857e24, size 0x54, virtual false, abstract: false, final false
static inline void SetStaticStringField_Injected(::System::IntPtr  clazz, ::System::IntPtr  fieldID, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  val) ;

/// @brief Method SetStringField, addr 0x6856340, size 0x13c, virtual false, abstract: false, final false
static inline void SetStringField(::System::IntPtr  obj, ::System::IntPtr  fieldID, ::StringW  val) ;

/// @brief Method SetStringField_Injected, addr 0x685647c, size 0x54, virtual false, abstract: false, final false
static inline void SetStringField_Injected(::System::IntPtr  obj, ::System::IntPtr  fieldID, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  val) ;

/// @brief Method Throw, addr 0x6853664, size 0x3c, virtual false, abstract: false, final false
static inline int32_t Throw(::System::IntPtr  obj) ;

/// @brief Method ThrowNew, addr 0x68536a0, size 0x13c, virtual false, abstract: false, final false
static inline int32_t ThrowNew(::System::IntPtr  clazz, ::StringW  message) ;

/// @brief Method ThrowNew_Injected, addr 0x68537dc, size 0x44, virtual false, abstract: false, final false
static inline int32_t ThrowNew_Injected(::System::IntPtr  clazz, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  message) ;

/// @brief Method ToBooleanArray, addr 0x68581c0, size 0xc4, virtual false, abstract: false, final false
static inline ::System::IntPtr ToBooleanArray(::ArrayW<bool,::Array<bool>*>  array) ;

/// @brief Method ToBooleanArray_Injected, addr 0x6858284, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr ToBooleanArray_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  array) ;

/// @brief Method ToByteArray, addr 0x68582c0, size 0xc4, virtual false, abstract: false, final false
static inline ::System::IntPtr ToByteArray(::ArrayW<uint8_t,::Array<uint8_t>*>  array) ;

/// @brief Method ToByteArray_Injected, addr 0x6858384, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr ToByteArray_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  array) ;

/// @brief Method ToCharArray, addr 0x6858458, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr ToCharArray(::ArrayW<char16_t,::Array<char16_t>*>  array) ;

/// @brief Method ToCharArray, addr 0x68584ac, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr ToCharArray(char16_t*  array, int32_t  length) ;

/// @brief Method ToDoubleArray, addr 0x6858750, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr ToDoubleArray(::ArrayW<double_t,::Array<double_t>*>  array) ;

/// @brief Method ToDoubleArray, addr 0x68587a4, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr ToDoubleArray(double_t*  array, int32_t  length) ;

/// @brief Method ToFloatArray, addr 0x68586b8, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr ToFloatArray(::ArrayW<float_t,::Array<float_t>*>  array) ;

/// @brief Method ToFloatArray, addr 0x685870c, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr ToFloatArray(float_t*  array, int32_t  length) ;

/// @brief Method ToIntArray, addr 0x6858588, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr ToIntArray(::ArrayW<int32_t,::Array<int32_t>*>  array) ;

/// @brief Method ToIntArray, addr 0x68585dc, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr ToIntArray(int32_t*  array, int32_t  length) ;

/// @brief Method ToLongArray, addr 0x6858620, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr ToLongArray(::ArrayW<int64_t,::Array<int64_t>*>  array) ;

/// @brief Method ToLongArray, addr 0x6858674, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr ToLongArray(int64_t*  array, int32_t  length) ;

/// @brief Method ToObjectArray, addr 0x68588a0, size 0x8, virtual false, abstract: false, final false
static inline ::System::IntPtr ToObjectArray(::ArrayW<::System::IntPtr,::Array<::System::IntPtr>*>  array) ;

/// @brief Method ToObjectArray, addr 0x685883c, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ToObjectArray(::ArrayW<::System::IntPtr,::Array<::System::IntPtr>*>  array, ::System::IntPtr  arrayClass) ;

/// @brief Method ToObjectArray, addr 0x68587e8, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr ToObjectArray(::System::IntPtr*  array, int32_t  length, ::System::IntPtr  arrayClass) ;

/// @brief Method ToReflectedField, addr 0x6853590, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr ToReflectedField(::System::IntPtr  clazz, ::System::IntPtr  fieldID, bool  isStatic) ;

/// @brief Method ToReflectedMethod, addr 0x685353c, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr ToReflectedMethod(::System::IntPtr  clazz, ::System::IntPtr  methodID, bool  isStatic) ;

/// @brief Method ToSByteArray, addr 0x68583c0, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr ToSByteArray(::ArrayW<int8_t,::Array<int8_t>*>  array) ;

/// @brief Method ToSByteArray, addr 0x6858414, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr ToSByteArray(int8_t*  array, int32_t  length) ;

/// @brief Method ToShortArray, addr 0x68584f0, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr ToShortArray(::ArrayW<int16_t,::Array<int16_t>*>  array) ;

/// @brief Method ToShortArray, addr 0x6858544, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr ToShortArray(int16_t*  array, int32_t  length) ;

/// @brief Method UnregisterNatives, addr 0x6859d58, size 0x3c, virtual false, abstract: false, final false
static inline int32_t UnregisterNatives(::System::IntPtr  clazz) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidJNI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidJNI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidJNI(AndroidJNI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJNI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidJNI(AndroidJNI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19926};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AndroidJNI, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::AndroidJNI);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidJNI*, "UnityEngine", "AndroidJNI");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidJNI_JStringBinding, "UnityEngine", "AndroidJNI/JStringBinding");
