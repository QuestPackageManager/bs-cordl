#pragma once
// IWYU pragma private; include "UnityEngine/AndroidJNI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidJNI)
namespace System {
struct IntPtr;
}
namespace System {
template <typename T> struct Span_1;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
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
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AndroidJNI);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AndroidJNI
class CORDL_TYPE AndroidJNI : public ::System::Object {
public:
  // Declarations
  /// @brief Method AllocObject, addr 0x4838ba4, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr AllocObject(::System::IntPtr clazz);

  /// @brief Method AttachCurrentThread, addr 0x4838558, size 0x28, virtual false, abstract: false, final false
  static inline int32_t AttachCurrentThread();

  /// @brief Method CallBooleanMethod, addr 0x48394e0, size 0x68, virtual false, abstract: false, final false
  static inline bool CallBooleanMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallBooleanMethod, addr 0x4839548, size 0x9c, virtual false, abstract: false, final false
  static inline bool CallBooleanMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallBooleanMethodUnsafe, addr 0x48395e4, size 0x54, virtual false, abstract: false, final false
  static inline bool CallBooleanMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallByteMethod, addr 0x483978c, size 0x4, virtual false, abstract: false, final false
  static inline uint8_t CallByteMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallCharMethod, addr 0x48398e4, size 0x68, virtual false, abstract: false, final false
  static inline char16_t CallCharMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallCharMethod, addr 0x483994c, size 0x98, virtual false, abstract: false, final false
  static inline char16_t CallCharMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallCharMethodUnsafe, addr 0x48399e4, size 0x54, virtual false, abstract: false, final false
  static inline char16_t CallCharMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallDoubleMethod, addr 0x4839b8c, size 0x68, virtual false, abstract: false, final false
  static inline double_t CallDoubleMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallDoubleMethod, addr 0x4839bf4, size 0x98, virtual false, abstract: false, final false
  static inline double_t CallDoubleMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallDoubleMethodUnsafe, addr 0x4839c8c, size 0x54, virtual false, abstract: false, final false
  static inline double_t CallDoubleMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallFloatMethod, addr 0x4839a38, size 0x68, virtual false, abstract: false, final false
  static inline float_t CallFloatMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallFloatMethod, addr 0x4839aa0, size 0x98, virtual false, abstract: false, final false
  static inline float_t CallFloatMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallFloatMethodUnsafe, addr 0x4839b38, size 0x54, virtual false, abstract: false, final false
  static inline float_t CallFloatMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallIntMethod, addr 0x483938c, size 0x68, virtual false, abstract: false, final false
  static inline int32_t CallIntMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallIntMethod, addr 0x48393f4, size 0x98, virtual false, abstract: false, final false
  static inline int32_t CallIntMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallIntMethodUnsafe, addr 0x483948c, size 0x54, virtual false, abstract: false, final false
  static inline int32_t CallIntMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallLongMethod, addr 0x4839ce0, size 0x68, virtual false, abstract: false, final false
  static inline int64_t CallLongMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallLongMethod, addr 0x4839d48, size 0x98, virtual false, abstract: false, final false
  static inline int64_t CallLongMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallLongMethodUnsafe, addr 0x4839de0, size 0x54, virtual false, abstract: false, final false
  static inline int64_t CallLongMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallObjectMethod, addr 0x4839238, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr CallObjectMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallObjectMethod, addr 0x48392a0, size 0x98, virtual false, abstract: false, final false
  static inline ::System::IntPtr CallObjectMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallObjectMethodUnsafe, addr 0x4839338, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr CallObjectMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallSByteMethod, addr 0x4839790, size 0x68, virtual false, abstract: false, final false
  static inline int8_t CallSByteMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallSByteMethod, addr 0x48397f8, size 0x98, virtual false, abstract: false, final false
  static inline int8_t CallSByteMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallSByteMethodUnsafe, addr 0x4839890, size 0x54, virtual false, abstract: false, final false
  static inline int8_t CallSByteMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallShortMethod, addr 0x4839638, size 0x68, virtual false, abstract: false, final false
  static inline int16_t CallShortMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallShortMethod, addr 0x48396a0, size 0x98, virtual false, abstract: false, final false
  static inline int16_t CallShortMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallShortMethodUnsafe, addr 0x4839738, size 0x54, virtual false, abstract: false, final false
  static inline int16_t CallShortMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticBooleanMethod, addr 0x483aa0c, size 0x68, virtual false, abstract: false, final false
  static inline bool CallStaticBooleanMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticBooleanMethod, addr 0x483aa74, size 0x9c, virtual false, abstract: false, final false
  static inline bool CallStaticBooleanMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticBooleanMethodUnsafe, addr 0x483ab10, size 0x54, virtual false, abstract: false, final false
  static inline bool CallStaticBooleanMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticByteMethod, addr 0x483acb8, size 0x4, virtual false, abstract: false, final false
  static inline uint8_t CallStaticByteMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticCharMethod, addr 0x483ae10, size 0x68, virtual false, abstract: false, final false
  static inline char16_t CallStaticCharMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticCharMethod, addr 0x483ae78, size 0x98, virtual false, abstract: false, final false
  static inline char16_t CallStaticCharMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticCharMethodUnsafe, addr 0x483af10, size 0x54, virtual false, abstract: false, final false
  static inline char16_t CallStaticCharMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticDoubleMethod, addr 0x483b0b8, size 0x68, virtual false, abstract: false, final false
  static inline double_t CallStaticDoubleMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticDoubleMethod, addr 0x483b120, size 0x98, virtual false, abstract: false, final false
  static inline double_t CallStaticDoubleMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticDoubleMethodUnsafe, addr 0x483b1b8, size 0x54, virtual false, abstract: false, final false
  static inline double_t CallStaticDoubleMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticFloatMethod, addr 0x483af64, size 0x68, virtual false, abstract: false, final false
  static inline float_t CallStaticFloatMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticFloatMethod, addr 0x483afcc, size 0x98, virtual false, abstract: false, final false
  static inline float_t CallStaticFloatMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticFloatMethodUnsafe, addr 0x483b064, size 0x54, virtual false, abstract: false, final false
  static inline float_t CallStaticFloatMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticIntMethod, addr 0x483a8b8, size 0x68, virtual false, abstract: false, final false
  static inline int32_t CallStaticIntMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticIntMethod, addr 0x483a920, size 0x98, virtual false, abstract: false, final false
  static inline int32_t CallStaticIntMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticIntMethodUnsafe, addr 0x483a9b8, size 0x54, virtual false, abstract: false, final false
  static inline int32_t CallStaticIntMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticLongMethod, addr 0x483b20c, size 0x68, virtual false, abstract: false, final false
  static inline int64_t CallStaticLongMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticLongMethod, addr 0x483b274, size 0x98, virtual false, abstract: false, final false
  static inline int64_t CallStaticLongMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticLongMethodUnsafe, addr 0x483b30c, size 0x54, virtual false, abstract: false, final false
  static inline int64_t CallStaticLongMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticObjectMethod, addr 0x483a764, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr CallStaticObjectMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticObjectMethod, addr 0x483a7cc, size 0x98, virtual false, abstract: false, final false
  static inline ::System::IntPtr CallStaticObjectMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticObjectMethodUnsafe, addr 0x483a864, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr CallStaticObjectMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticSByteMethod, addr 0x483acbc, size 0x68, virtual false, abstract: false, final false
  static inline int8_t CallStaticSByteMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticSByteMethod, addr 0x483ad24, size 0x98, virtual false, abstract: false, final false
  static inline int8_t CallStaticSByteMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticSByteMethodUnsafe, addr 0x483adbc, size 0x54, virtual false, abstract: false, final false
  static inline int8_t CallStaticSByteMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticShortMethod, addr 0x483ab64, size 0x68, virtual false, abstract: false, final false
  static inline int16_t CallStaticShortMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticShortMethod, addr 0x483abcc, size 0x98, virtual false, abstract: false, final false
  static inline int16_t CallStaticShortMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticShortMethodUnsafe, addr 0x483ac64, size 0x54, virtual false, abstract: false, final false
  static inline int16_t CallStaticShortMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticStringMethod, addr 0x483a610, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW CallStaticStringMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticStringMethod, addr 0x483a678, size 0x98, virtual false, abstract: false, final false
  static inline ::StringW CallStaticStringMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticStringMethodUnsafe, addr 0x483a710, size 0x54, virtual false, abstract: false, final false
  static inline ::StringW CallStaticStringMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticVoidMethod, addr 0x483b360, size 0x68, virtual false, abstract: false, final false
  static inline void CallStaticVoidMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticVoidMethod, addr 0x483b3c8, size 0x98, virtual false, abstract: false, final false
  static inline void CallStaticVoidMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticVoidMethodUnsafe, addr 0x483b460, size 0x54, virtual false, abstract: false, final false
  static inline void CallStaticVoidMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallStringMethod, addr 0x48390e4, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW CallStringMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStringMethod, addr 0x483914c, size 0x98, virtual false, abstract: false, final false
  static inline ::StringW CallStringMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStringMethodUnsafe, addr 0x48391e4, size 0x54, virtual false, abstract: false, final false
  static inline ::StringW CallStringMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallVoidMethod, addr 0x4839e34, size 0x68, virtual false, abstract: false, final false
  static inline void CallVoidMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallVoidMethod, addr 0x4839e9c, size 0x98, virtual false, abstract: false, final false
  static inline void CallVoidMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallVoidMethodUnsafe, addr 0x4839f34, size 0x54, virtual false, abstract: false, final false
  static inline void CallVoidMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method DeleteGlobalRef, addr 0x4838994, size 0x3c, virtual false, abstract: false, final false
  static inline void DeleteGlobalRef(::System::IntPtr obj);

  /// @brief Method DeleteLocalRef, addr 0x4838ae8, size 0x3c, virtual false, abstract: false, final false
  static inline void DeleteLocalRef(::System::IntPtr obj);

  /// @brief Method DeleteWeakGlobalRef, addr 0x4838a70, size 0x3c, virtual false, abstract: false, final false
  static inline void DeleteWeakGlobalRef(::System::IntPtr obj);

  /// @brief Method DetachCurrentThread, addr 0x4838580, size 0x28, virtual false, abstract: false, final false
  static inline int32_t DetachCurrentThread();

  /// @brief Method EnsureLocalCapacity, addr 0x4838b68, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t EnsureLocalCapacity(int32_t capacity);

  /// @brief Method ExceptionClear, addr 0x483887c, size 0x28, virtual false, abstract: false, final false
  static inline void ExceptionClear();

  /// @brief Method ExceptionDescribe, addr 0x4838854, size 0x28, virtual false, abstract: false, final false
  static inline void ExceptionDescribe();

  /// @brief Method ExceptionOccurred, addr 0x483882c, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr ExceptionOccurred();

  /// @brief Method FatalError, addr 0x48388a4, size 0x3c, virtual false, abstract: false, final false
  static inline void FatalError(::StringW message);

  /// @brief Method FindClass, addr 0x48385d0, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr FindClass(::StringW name);

  /// @brief Method FromBooleanArray, addr 0x483c09c, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<bool, ::Array<bool>*> FromBooleanArray(::System::IntPtr array);

  /// @brief Method FromByteArray, addr 0x483c0d8, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FromByteArray(::System::IntPtr array);

  /// @brief Method FromCharArray, addr 0x483c150, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<char16_t, ::Array<char16_t>*> FromCharArray(::System::IntPtr array);

  /// @brief Method FromDoubleArray, addr 0x483c27c, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<double_t, ::Array<double_t>*> FromDoubleArray(::System::IntPtr array);

  /// @brief Method FromFloatArray, addr 0x483c240, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<float_t, ::Array<float_t>*> FromFloatArray(::System::IntPtr array);

  /// @brief Method FromIntArray, addr 0x483c1c8, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> FromIntArray(::System::IntPtr array);

  /// @brief Method FromLongArray, addr 0x483c204, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<int64_t, ::Array<int64_t>*> FromLongArray(::System::IntPtr array);

  /// @brief Method FromObjectArray, addr 0x483c2b8, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> FromObjectArray(::System::IntPtr array);

  /// @brief Method FromReflectedField, addr 0x4838648, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr FromReflectedField(::System::IntPtr refField);

  /// @brief Method FromReflectedMethod, addr 0x483860c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr FromReflectedMethod(::System::IntPtr refMethod);

  /// @brief Method FromSByteArray, addr 0x483c114, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<int8_t, ::Array<int8_t>*> FromSByteArray(::System::IntPtr array);

  /// @brief Method FromShortArray, addr 0x483c18c, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<int16_t, ::Array<int16_t>*> FromShortArray(::System::IntPtr array);

  /// @brief Method GetArrayLength, addr 0x483c2f4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetArrayLength(::System::IntPtr array);

  /// @brief Method GetBooleanArrayElement, addr 0x483c5a0, size 0x44, virtual false, abstract: false, final false
  static inline bool GetBooleanArrayElement(::System::IntPtr array, int32_t index);

  /// @brief Method GetBooleanField, addr 0x483a010, size 0x44, virtual false, abstract: false, final false
  static inline bool GetBooleanField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method GetByteArrayElement, addr 0x483c5e4, size 0x44, virtual false, abstract: false, final false
  static inline uint8_t GetByteArrayElement(::System::IntPtr array, int32_t index);

  /// @brief Method GetByteField, addr 0x483a054, size 0x44, virtual false, abstract: false, final false
  static inline uint8_t GetByteField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method GetCharArrayElement, addr 0x483c66c, size 0x44, virtual false, abstract: false, final false
  static inline char16_t GetCharArrayElement(::System::IntPtr array, int32_t index);

  /// @brief Method GetCharField, addr 0x483a0dc, size 0x44, virtual false, abstract: false, final false
  static inline char16_t GetCharField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method GetDirectBuffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::NativeArray_1<T> GetDirectBuffer(::System::IntPtr buffer);

  /// @brief Method GetDirectBufferAddress, addr 0x483ccdc, size 0x3c, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<int8_t> GetDirectBufferAddress(::System::IntPtr buffer);

  /// @brief Method GetDirectBufferCapacity, addr 0x483cd18, size 0x3c, virtual false, abstract: false, final false
  static inline int64_t GetDirectBufferCapacity(::System::IntPtr buffer);

  /// @brief Method GetDirectByteBuffer, addr 0x483cd54, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeArray_1<uint8_t> GetDirectByteBuffer(::System::IntPtr buffer);

  /// @brief Method GetDirectSByteBuffer, addr 0x483cd9c, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeArray_1<int8_t> GetDirectSByteBuffer(::System::IntPtr buffer);

  /// @brief Method GetDoubleArrayElement, addr 0x483c7c0, size 0x44, virtual false, abstract: false, final false
  static inline double_t GetDoubleArrayElement(::System::IntPtr array, int32_t index);

  /// @brief Method GetDoubleField, addr 0x483a230, size 0x44, virtual false, abstract: false, final false
  static inline double_t GetDoubleField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method GetFieldID, addr 0x4838e08, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFieldID(::System::IntPtr clazz, ::StringW name, ::StringW sig);

  /// @brief Method GetFloatArrayElement, addr 0x483c77c, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetFloatArrayElement(::System::IntPtr array, int32_t index);

  /// @brief Method GetFloatField, addr 0x483a1ec, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetFloatField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method GetIntArrayElement, addr 0x483c6f4, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetIntArrayElement(::System::IntPtr array, int32_t index);

  /// @brief Method GetIntField, addr 0x483a164, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetIntField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method GetJavaVM, addr 0x4838530, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetJavaVM();

  /// @brief Method GetLongArrayElement, addr 0x483c738, size 0x44, virtual false, abstract: false, final false
  static inline int64_t GetLongArrayElement(::System::IntPtr array, int32_t index);

  /// @brief Method GetLongField, addr 0x483a1a8, size 0x44, virtual false, abstract: false, final false
  static inline int64_t GetLongField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method GetMethodID, addr 0x4838db4, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetMethodID(::System::IntPtr clazz, ::StringW name, ::StringW sig);

  /// @brief Method GetObjectArrayElement, addr 0x483c804, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetObjectArrayElement(::System::IntPtr array, int32_t index);

  /// @brief Method GetObjectClass, addr 0x4838d34, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetObjectClass(::System::IntPtr obj);

  /// @brief Method GetObjectField, addr 0x4839fcc, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetObjectField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method GetQueueGlobalRefsCount, addr 0x4838a0c, size 0x28, virtual false, abstract: false, final false
  static inline uint32_t GetQueueGlobalRefsCount();

  /// @brief Method GetSByteArrayElement, addr 0x483c628, size 0x44, virtual false, abstract: false, final false
  static inline int8_t GetSByteArrayElement(::System::IntPtr array, int32_t index);

  /// @brief Method GetSByteField, addr 0x483a098, size 0x44, virtual false, abstract: false, final false
  static inline int8_t GetSByteField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method GetShortArrayElement, addr 0x483c6b0, size 0x44, virtual false, abstract: false, final false
  static inline int16_t GetShortArrayElement(::System::IntPtr array, int32_t index);

  /// @brief Method GetShortField, addr 0x483a120, size 0x44, virtual false, abstract: false, final false
  static inline int16_t GetShortField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method GetStaticBooleanField, addr 0x483b53c, size 0x44, virtual false, abstract: false, final false
  static inline bool GetStaticBooleanField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStaticByteField, addr 0x483b580, size 0x44, virtual false, abstract: false, final false
  static inline uint8_t GetStaticByteField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStaticCharField, addr 0x483b608, size 0x44, virtual false, abstract: false, final false
  static inline char16_t GetStaticCharField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStaticDoubleField, addr 0x483b75c, size 0x44, virtual false, abstract: false, final false
  static inline double_t GetStaticDoubleField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStaticFieldID, addr 0x4838eb0, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetStaticFieldID(::System::IntPtr clazz, ::StringW name, ::StringW sig);

  /// @brief Method GetStaticFloatField, addr 0x483b718, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetStaticFloatField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStaticIntField, addr 0x483b690, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetStaticIntField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStaticLongField, addr 0x483b6d4, size 0x44, virtual false, abstract: false, final false
  static inline int64_t GetStaticLongField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStaticMethodID, addr 0x4838e5c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetStaticMethodID(::System::IntPtr clazz, ::StringW name, ::StringW sig);

  /// @brief Method GetStaticObjectField, addr 0x483b4f8, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetStaticObjectField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStaticSByteField, addr 0x483b5c4, size 0x44, virtual false, abstract: false, final false
  static inline int8_t GetStaticSByteField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStaticShortField, addr 0x483b64c, size 0x44, virtual false, abstract: false, final false
  static inline int16_t GetStaticShortField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStaticStringField, addr 0x483b4b4, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW GetStaticStringField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStringChars, addr 0x4838ff4, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW GetStringChars(::System::IntPtr str);

  /// @brief Method GetStringField, addr 0x4839f88, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW GetStringField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method GetStringLength, addr 0x4839030, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetStringLength(::System::IntPtr str);

  /// @brief Method GetStringUTFChars, addr 0x48390a8, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW GetStringUTFChars(::System::IntPtr str);

  /// @brief Method GetStringUTFLength, addr 0x483906c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetStringUTFLength(::System::IntPtr str);

  /// @brief Method GetSuperclass, addr 0x483872c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetSuperclass(::System::IntPtr clazz);

  /// @brief Method GetVersion, addr 0x48385a8, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetVersion();

  /// @brief Method IsAssignableFrom, addr 0x4838768, size 0x44, virtual false, abstract: false, final false
  static inline bool IsAssignableFrom(::System::IntPtr clazz1, ::System::IntPtr clazz2);

  /// @brief Method IsInstanceOf, addr 0x4838d70, size 0x44, virtual false, abstract: false, final false
  static inline bool IsInstanceOf(::System::IntPtr obj, ::System::IntPtr clazz);

  /// @brief Method IsSameObject, addr 0x4838b24, size 0x44, virtual false, abstract: false, final false
  static inline bool IsSameObject(::System::IntPtr obj1, ::System::IntPtr obj2);

  /// @brief Method NewBooleanArray, addr 0x483c330, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewBooleanArray(int32_t size);

  /// @brief Method NewByteArray, addr 0x483c36c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewByteArray(int32_t size);

  /// @brief Method NewCharArray, addr 0x483c3e4, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewCharArray(int32_t size);

  /// @brief Method NewDirectByteBuffer, addr 0x483cc84, size 0x58, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewDirectByteBuffer(::Unity::Collections::NativeArray_1<int8_t> buffer);

  /// @brief Method NewDirectByteBuffer, addr 0x483cc2c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewDirectByteBuffer(::Unity::Collections::NativeArray_1<uint8_t> buffer);

  /// @brief Method NewDirectByteBuffer, addr 0x483cbe8, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewDirectByteBuffer(::cordl_internals::Ptr<uint8_t> buffer, int64_t capacity);

  /// @brief Method NewDirectByteBufferFromNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::IntPtr NewDirectByteBufferFromNativeArray(::Unity::Collections::NativeArray_1<T> buffer);

  /// @brief Method NewDoubleArray, addr 0x483c510, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewDoubleArray(int32_t size);

  /// @brief Method NewFloatArray, addr 0x483c4d4, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewFloatArray(int32_t size);

  /// @brief Method NewGlobalRef, addr 0x4838958, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewGlobalRef(::System::IntPtr obj);

  /// @brief Method NewIntArray, addr 0x483c45c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewIntArray(int32_t size);

  /// @brief Method NewLocalRef, addr 0x4838aac, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewLocalRef(::System::IntPtr obj);

  /// @brief Method NewLongArray, addr 0x483c498, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewLongArray(int32_t size);

  /// @brief Method NewObject, addr 0x4838be0, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewObject(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method NewObject, addr 0x4838c48, size 0x98, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewObject(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method NewObjectA, addr 0x4838ce0, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewObjectA(::System::IntPtr clazz, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method NewObjectArray, addr 0x483c54c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewObjectArray(int32_t size, ::System::IntPtr clazz, ::System::IntPtr obj);

  /// @brief Method NewSByteArray, addr 0x483c3a8, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewSByteArray(int32_t size);

  /// @brief Method NewShortArray, addr 0x483c420, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewShortArray(int32_t size);

  /// @brief Method NewString, addr 0x4838f7c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewString(::ArrayW<char16_t, ::Array<char16_t>*> chars);

  /// @brief Method NewString, addr 0x4838f04, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewString(::StringW chars);

  /// @brief Method NewStringFromStr, addr 0x4838f40, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewStringFromStr(::StringW chars);

  /// @brief Method NewStringUTF, addr 0x4838fb8, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewStringUTF(::StringW bytes);

  /// @brief Method NewWeakGlobalRef, addr 0x4838a34, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewWeakGlobalRef(::System::IntPtr obj);

  /// @brief Method PopLocalFrame, addr 0x483891c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr PopLocalFrame(::System::IntPtr ptr);

  /// @brief Method PushLocalFrame, addr 0x48388e0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t PushLocalFrame(int32_t capacity);

  /// @brief Method QueueDeleteGlobalRef, addr 0x48389d0, size 0x3c, virtual false, abstract: false, final false
  static inline void QueueDeleteGlobalRef(::System::IntPtr obj);

  /// @brief Method RegisterNatives, addr 0x483cde4, size 0x190, virtual false, abstract: false, final false
  static inline int32_t RegisterNatives(::System::IntPtr clazz, ::ArrayW<::UnityEngine::JNINativeMethod, ::Array<::UnityEngine::JNINativeMethod>*> methods);

  /// @brief Method RegisterNativesAllocate, addr 0x483cf74, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr RegisterNativesAllocate(int32_t length);

  /// @brief Method RegisterNativesAndFree, addr 0x483d01c, size 0x54, virtual false, abstract: false, final false
  static inline int32_t RegisterNativesAndFree(::System::IntPtr clazz, ::System::IntPtr natives, int32_t n);

  /// @brief Method RegisterNativesSet, addr 0x483cfb0, size 0x6c, virtual false, abstract: false, final false
  static inline void RegisterNativesSet(::System::IntPtr natives, int32_t idx, ::StringW name, ::StringW signature, ::System::IntPtr fnPtr);

  /// @brief Method SetBooleanArrayElement, addr 0x483c8a0, size 0x54, virtual false, abstract: false, final false
  static inline void SetBooleanArrayElement(::System::IntPtr array, int32_t index, bool val);

  /// @brief Method SetBooleanArrayElement, addr 0x483c848, size 0x58, virtual false, abstract: false, final false
  static inline void SetBooleanArrayElement(::System::IntPtr array, int32_t index, uint8_t val);

  /// @brief Method SetBooleanField, addr 0x483a31c, size 0x54, virtual false, abstract: false, final false
  static inline void SetBooleanField(::System::IntPtr obj, ::System::IntPtr fieldID, bool val);

  /// @brief Method SetByteArrayElement, addr 0x483c8f4, size 0x54, virtual false, abstract: false, final false
  static inline void SetByteArrayElement(::System::IntPtr array, int32_t index, int8_t val);

  /// @brief Method SetByteField, addr 0x483a370, size 0x54, virtual false, abstract: false, final false
  static inline void SetByteField(::System::IntPtr obj, ::System::IntPtr fieldID, uint8_t val);

  /// @brief Method SetCharArrayElement, addr 0x483c99c, size 0x54, virtual false, abstract: false, final false
  static inline void SetCharArrayElement(::System::IntPtr array, int32_t index, char16_t val);

  /// @brief Method SetCharField, addr 0x483a418, size 0x54, virtual false, abstract: false, final false
  static inline void SetCharField(::System::IntPtr obj, ::System::IntPtr fieldID, char16_t val);

  /// @brief Method SetDoubleArrayElement, addr 0x483cb40, size 0x54, virtual false, abstract: false, final false
  static inline void SetDoubleArrayElement(::System::IntPtr array, int32_t index, double_t val);

  /// @brief Method SetDoubleField, addr 0x483a5bc, size 0x54, virtual false, abstract: false, final false
  static inline void SetDoubleField(::System::IntPtr obj, ::System::IntPtr fieldID, double_t val);

  /// @brief Method SetFloatArrayElement, addr 0x483caec, size 0x54, virtual false, abstract: false, final false
  static inline void SetFloatArrayElement(::System::IntPtr array, int32_t index, float_t val);

  /// @brief Method SetFloatField, addr 0x483a568, size 0x54, virtual false, abstract: false, final false
  static inline void SetFloatField(::System::IntPtr obj, ::System::IntPtr fieldID, float_t val);

  /// @brief Method SetIntArrayElement, addr 0x483ca44, size 0x54, virtual false, abstract: false, final false
  static inline void SetIntArrayElement(::System::IntPtr array, int32_t index, int32_t val);

  /// @brief Method SetIntField, addr 0x483a4c0, size 0x54, virtual false, abstract: false, final false
  static inline void SetIntField(::System::IntPtr obj, ::System::IntPtr fieldID, int32_t val);

  /// @brief Method SetLongArrayElement, addr 0x483ca98, size 0x54, virtual false, abstract: false, final false
  static inline void SetLongArrayElement(::System::IntPtr array, int32_t index, int64_t val);

  /// @brief Method SetLongField, addr 0x483a514, size 0x54, virtual false, abstract: false, final false
  static inline void SetLongField(::System::IntPtr obj, ::System::IntPtr fieldID, int64_t val);

  /// @brief Method SetObjectArrayElement, addr 0x483cb94, size 0x54, virtual false, abstract: false, final false
  static inline void SetObjectArrayElement(::System::IntPtr array, int32_t index, ::System::IntPtr obj);

  /// @brief Method SetObjectField, addr 0x483a2c8, size 0x54, virtual false, abstract: false, final false
  static inline void SetObjectField(::System::IntPtr obj, ::System::IntPtr fieldID, ::System::IntPtr val);

  /// @brief Method SetSByteArrayElement, addr 0x483c948, size 0x54, virtual false, abstract: false, final false
  static inline void SetSByteArrayElement(::System::IntPtr array, int32_t index, int8_t val);

  /// @brief Method SetSByteField, addr 0x483a3c4, size 0x54, virtual false, abstract: false, final false
  static inline void SetSByteField(::System::IntPtr obj, ::System::IntPtr fieldID, int8_t val);

  /// @brief Method SetShortArrayElement, addr 0x483c9f0, size 0x54, virtual false, abstract: false, final false
  static inline void SetShortArrayElement(::System::IntPtr array, int32_t index, int16_t val);

  /// @brief Method SetShortField, addr 0x483a46c, size 0x54, virtual false, abstract: false, final false
  static inline void SetShortField(::System::IntPtr obj, ::System::IntPtr fieldID, int16_t val);

  /// @brief Method SetStaticBooleanField, addr 0x483b848, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticBooleanField(::System::IntPtr clazz, ::System::IntPtr fieldID, bool val);

  /// @brief Method SetStaticByteField, addr 0x483b89c, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticByteField(::System::IntPtr clazz, ::System::IntPtr fieldID, uint8_t val);

  /// @brief Method SetStaticCharField, addr 0x483b944, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticCharField(::System::IntPtr clazz, ::System::IntPtr fieldID, char16_t val);

  /// @brief Method SetStaticDoubleField, addr 0x483bae8, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticDoubleField(::System::IntPtr clazz, ::System::IntPtr fieldID, double_t val);

  /// @brief Method SetStaticFloatField, addr 0x483ba94, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticFloatField(::System::IntPtr clazz, ::System::IntPtr fieldID, float_t val);

  /// @brief Method SetStaticIntField, addr 0x483b9ec, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticIntField(::System::IntPtr clazz, ::System::IntPtr fieldID, int32_t val);

  /// @brief Method SetStaticLongField, addr 0x483ba40, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticLongField(::System::IntPtr clazz, ::System::IntPtr fieldID, int64_t val);

  /// @brief Method SetStaticObjectField, addr 0x483b7f4, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticObjectField(::System::IntPtr clazz, ::System::IntPtr fieldID, ::System::IntPtr val);

  /// @brief Method SetStaticSByteField, addr 0x483b8f0, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticSByteField(::System::IntPtr clazz, ::System::IntPtr fieldID, int8_t val);

  /// @brief Method SetStaticShortField, addr 0x483b998, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticShortField(::System::IntPtr clazz, ::System::IntPtr fieldID, int16_t val);

  /// @brief Method SetStaticStringField, addr 0x483b7a0, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticStringField(::System::IntPtr clazz, ::System::IntPtr fieldID, ::StringW val);

  /// @brief Method SetStringField, addr 0x483a274, size 0x54, virtual false, abstract: false, final false
  static inline void SetStringField(::System::IntPtr obj, ::System::IntPtr fieldID, ::StringW val);

  /// @brief Method Throw, addr 0x48387ac, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t Throw(::System::IntPtr obj);

  /// @brief Method ThrowNew, addr 0x48387e8, size 0x44, virtual false, abstract: false, final false
  static inline int32_t ThrowNew(::System::IntPtr clazz, ::StringW message);

  /// @brief Method ToBooleanArray, addr 0x483bb3c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToBooleanArray(::ArrayW<bool, ::Array<bool>*> array);

  /// @brief Method ToByteArray, addr 0x483bb78, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> array);

  /// @brief Method ToCharArray, addr 0x483bc4c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToCharArray(::ArrayW<char16_t, ::Array<char16_t>*> array);

  /// @brief Method ToCharArray, addr 0x483bca0, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToCharArray(::cordl_internals::Ptr<char16_t> array, int32_t length);

  /// @brief Method ToDoubleArray, addr 0x483bf44, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToDoubleArray(::ArrayW<double_t, ::Array<double_t>*> array);

  /// @brief Method ToDoubleArray, addr 0x483bf98, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToDoubleArray(::cordl_internals::Ptr<double_t> array, int32_t length);

  /// @brief Method ToFloatArray, addr 0x483beac, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToFloatArray(::ArrayW<float_t, ::Array<float_t>*> array);

  /// @brief Method ToFloatArray, addr 0x483bf00, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToFloatArray(::cordl_internals::Ptr<float_t> array, int32_t length);

  /// @brief Method ToIntArray, addr 0x483bd7c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToIntArray(::ArrayW<int32_t, ::Array<int32_t>*> array);

  /// @brief Method ToIntArray, addr 0x483bdd0, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToIntArray(::cordl_internals::Ptr<int32_t> array, int32_t length);

  /// @brief Method ToLongArray, addr 0x483be14, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToLongArray(::ArrayW<int64_t, ::Array<int64_t>*> array);

  /// @brief Method ToLongArray, addr 0x483be68, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToLongArray(::cordl_internals::Ptr<int64_t> array, int32_t length);

  /// @brief Method ToObjectArray, addr 0x483c094, size 0x8, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToObjectArray(::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> array);

  /// @brief Method ToObjectArray, addr 0x483c030, size 0x64, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToObjectArray(::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> array, ::System::IntPtr arrayClass);

  /// @brief Method ToObjectArray, addr 0x483bfdc, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToObjectArray(::cordl_internals::Ptr<::System::IntPtr> array, int32_t length, ::System::IntPtr arrayClass);

  /// @brief Method ToReflectedField, addr 0x48386d8, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToReflectedField(::System::IntPtr clazz, ::System::IntPtr fieldID, bool isStatic);

  /// @brief Method ToReflectedMethod, addr 0x4838684, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToReflectedMethod(::System::IntPtr clazz, ::System::IntPtr methodID, bool isStatic);

  /// @brief Method ToSByteArray, addr 0x483bbb4, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToSByteArray(::ArrayW<int8_t, ::Array<int8_t>*> array);

  /// @brief Method ToSByteArray, addr 0x483bc08, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToSByteArray(::cordl_internals::Ptr<int8_t> array, int32_t length);

  /// @brief Method ToShortArray, addr 0x483bce4, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToShortArray(::ArrayW<int16_t, ::Array<int16_t>*> array);

  /// @brief Method ToShortArray, addr 0x483bd38, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToShortArray(::cordl_internals::Ptr<int16_t> array, int32_t length);

  /// @brief Method UnregisterNatives, addr 0x483d070, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t UnregisterNatives(::System::IntPtr clazz);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidJNI();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidJNI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidJNI(AndroidJNI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidJNI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidJNI(AndroidJNI const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16762 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AndroidJNI, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AndroidJNI);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidJNI*, "UnityEngine", "AndroidJNI");
