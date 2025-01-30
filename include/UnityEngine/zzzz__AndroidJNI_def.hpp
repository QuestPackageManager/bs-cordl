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
  /// @brief Method AllocObject, addr 0x483f33c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr AllocObject(::System::IntPtr clazz);

  /// @brief Method AttachCurrentThread, addr 0x483ecf0, size 0x28, virtual false, abstract: false, final false
  static inline int32_t AttachCurrentThread();

  /// @brief Method CallBooleanMethod, addr 0x483fc78, size 0x68, virtual false, abstract: false, final false
  static inline bool CallBooleanMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallBooleanMethod, addr 0x483fce0, size 0x9c, virtual false, abstract: false, final false
  static inline bool CallBooleanMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallBooleanMethodUnsafe, addr 0x483fd7c, size 0x54, virtual false, abstract: false, final false
  static inline bool CallBooleanMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallByteMethod, addr 0x483ff24, size 0x4, virtual false, abstract: false, final false
  static inline uint8_t CallByteMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallCharMethod, addr 0x484007c, size 0x68, virtual false, abstract: false, final false
  static inline char16_t CallCharMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallCharMethod, addr 0x48400e4, size 0x98, virtual false, abstract: false, final false
  static inline char16_t CallCharMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallCharMethodUnsafe, addr 0x484017c, size 0x54, virtual false, abstract: false, final false
  static inline char16_t CallCharMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallDoubleMethod, addr 0x4840324, size 0x68, virtual false, abstract: false, final false
  static inline double_t CallDoubleMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallDoubleMethod, addr 0x484038c, size 0x98, virtual false, abstract: false, final false
  static inline double_t CallDoubleMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallDoubleMethodUnsafe, addr 0x4840424, size 0x54, virtual false, abstract: false, final false
  static inline double_t CallDoubleMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallFloatMethod, addr 0x48401d0, size 0x68, virtual false, abstract: false, final false
  static inline float_t CallFloatMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallFloatMethod, addr 0x4840238, size 0x98, virtual false, abstract: false, final false
  static inline float_t CallFloatMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallFloatMethodUnsafe, addr 0x48402d0, size 0x54, virtual false, abstract: false, final false
  static inline float_t CallFloatMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallIntMethod, addr 0x483fb24, size 0x68, virtual false, abstract: false, final false
  static inline int32_t CallIntMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallIntMethod, addr 0x483fb8c, size 0x98, virtual false, abstract: false, final false
  static inline int32_t CallIntMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallIntMethodUnsafe, addr 0x483fc24, size 0x54, virtual false, abstract: false, final false
  static inline int32_t CallIntMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallLongMethod, addr 0x4840478, size 0x68, virtual false, abstract: false, final false
  static inline int64_t CallLongMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallLongMethod, addr 0x48404e0, size 0x98, virtual false, abstract: false, final false
  static inline int64_t CallLongMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallLongMethodUnsafe, addr 0x4840578, size 0x54, virtual false, abstract: false, final false
  static inline int64_t CallLongMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallObjectMethod, addr 0x483f9d0, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr CallObjectMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallObjectMethod, addr 0x483fa38, size 0x98, virtual false, abstract: false, final false
  static inline ::System::IntPtr CallObjectMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallObjectMethodUnsafe, addr 0x483fad0, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr CallObjectMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallSByteMethod, addr 0x483ff28, size 0x68, virtual false, abstract: false, final false
  static inline int8_t CallSByteMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallSByteMethod, addr 0x483ff90, size 0x98, virtual false, abstract: false, final false
  static inline int8_t CallSByteMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallSByteMethodUnsafe, addr 0x4840028, size 0x54, virtual false, abstract: false, final false
  static inline int8_t CallSByteMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallShortMethod, addr 0x483fdd0, size 0x68, virtual false, abstract: false, final false
  static inline int16_t CallShortMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallShortMethod, addr 0x483fe38, size 0x98, virtual false, abstract: false, final false
  static inline int16_t CallShortMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallShortMethodUnsafe, addr 0x483fed0, size 0x54, virtual false, abstract: false, final false
  static inline int16_t CallShortMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticBooleanMethod, addr 0x48411a4, size 0x68, virtual false, abstract: false, final false
  static inline bool CallStaticBooleanMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticBooleanMethod, addr 0x484120c, size 0x9c, virtual false, abstract: false, final false
  static inline bool CallStaticBooleanMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticBooleanMethodUnsafe, addr 0x48412a8, size 0x54, virtual false, abstract: false, final false
  static inline bool CallStaticBooleanMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticByteMethod, addr 0x4841450, size 0x4, virtual false, abstract: false, final false
  static inline uint8_t CallStaticByteMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticCharMethod, addr 0x48415a8, size 0x68, virtual false, abstract: false, final false
  static inline char16_t CallStaticCharMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticCharMethod, addr 0x4841610, size 0x98, virtual false, abstract: false, final false
  static inline char16_t CallStaticCharMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticCharMethodUnsafe, addr 0x48416a8, size 0x54, virtual false, abstract: false, final false
  static inline char16_t CallStaticCharMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticDoubleMethod, addr 0x4841850, size 0x68, virtual false, abstract: false, final false
  static inline double_t CallStaticDoubleMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticDoubleMethod, addr 0x48418b8, size 0x98, virtual false, abstract: false, final false
  static inline double_t CallStaticDoubleMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticDoubleMethodUnsafe, addr 0x4841950, size 0x54, virtual false, abstract: false, final false
  static inline double_t CallStaticDoubleMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticFloatMethod, addr 0x48416fc, size 0x68, virtual false, abstract: false, final false
  static inline float_t CallStaticFloatMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticFloatMethod, addr 0x4841764, size 0x98, virtual false, abstract: false, final false
  static inline float_t CallStaticFloatMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticFloatMethodUnsafe, addr 0x48417fc, size 0x54, virtual false, abstract: false, final false
  static inline float_t CallStaticFloatMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticIntMethod, addr 0x4841050, size 0x68, virtual false, abstract: false, final false
  static inline int32_t CallStaticIntMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticIntMethod, addr 0x48410b8, size 0x98, virtual false, abstract: false, final false
  static inline int32_t CallStaticIntMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticIntMethodUnsafe, addr 0x4841150, size 0x54, virtual false, abstract: false, final false
  static inline int32_t CallStaticIntMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticLongMethod, addr 0x48419a4, size 0x68, virtual false, abstract: false, final false
  static inline int64_t CallStaticLongMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticLongMethod, addr 0x4841a0c, size 0x98, virtual false, abstract: false, final false
  static inline int64_t CallStaticLongMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticLongMethodUnsafe, addr 0x4841aa4, size 0x54, virtual false, abstract: false, final false
  static inline int64_t CallStaticLongMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticObjectMethod, addr 0x4840efc, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr CallStaticObjectMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticObjectMethod, addr 0x4840f64, size 0x98, virtual false, abstract: false, final false
  static inline ::System::IntPtr CallStaticObjectMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticObjectMethodUnsafe, addr 0x4840ffc, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr CallStaticObjectMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticSByteMethod, addr 0x4841454, size 0x68, virtual false, abstract: false, final false
  static inline int8_t CallStaticSByteMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticSByteMethod, addr 0x48414bc, size 0x98, virtual false, abstract: false, final false
  static inline int8_t CallStaticSByteMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticSByteMethodUnsafe, addr 0x4841554, size 0x54, virtual false, abstract: false, final false
  static inline int8_t CallStaticSByteMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticShortMethod, addr 0x48412fc, size 0x68, virtual false, abstract: false, final false
  static inline int16_t CallStaticShortMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticShortMethod, addr 0x4841364, size 0x98, virtual false, abstract: false, final false
  static inline int16_t CallStaticShortMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticShortMethodUnsafe, addr 0x48413fc, size 0x54, virtual false, abstract: false, final false
  static inline int16_t CallStaticShortMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticStringMethod, addr 0x4840da8, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW CallStaticStringMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticStringMethod, addr 0x4840e10, size 0x98, virtual false, abstract: false, final false
  static inline ::StringW CallStaticStringMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticStringMethodUnsafe, addr 0x4840ea8, size 0x54, virtual false, abstract: false, final false
  static inline ::StringW CallStaticStringMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticVoidMethod, addr 0x4841af8, size 0x68, virtual false, abstract: false, final false
  static inline void CallStaticVoidMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticVoidMethod, addr 0x4841b60, size 0x98, virtual false, abstract: false, final false
  static inline void CallStaticVoidMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStaticVoidMethodUnsafe, addr 0x4841bf8, size 0x54, virtual false, abstract: false, final false
  static inline void CallStaticVoidMethodUnsafe(::System::IntPtr clazz, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallStringMethod, addr 0x483f87c, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW CallStringMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStringMethod, addr 0x483f8e4, size 0x98, virtual false, abstract: false, final false
  static inline ::StringW CallStringMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallStringMethodUnsafe, addr 0x483f97c, size 0x54, virtual false, abstract: false, final false
  static inline ::StringW CallStringMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method CallVoidMethod, addr 0x48405cc, size 0x68, virtual false, abstract: false, final false
  static inline void CallVoidMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallVoidMethod, addr 0x4840634, size 0x98, virtual false, abstract: false, final false
  static inline void CallVoidMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method CallVoidMethodUnsafe, addr 0x48406cc, size 0x54, virtual false, abstract: false, final false
  static inline void CallVoidMethodUnsafe(::System::IntPtr obj, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method DeleteGlobalRef, addr 0x483f12c, size 0x3c, virtual false, abstract: false, final false
  static inline void DeleteGlobalRef(::System::IntPtr obj);

  /// @brief Method DeleteLocalRef, addr 0x483f280, size 0x3c, virtual false, abstract: false, final false
  static inline void DeleteLocalRef(::System::IntPtr obj);

  /// @brief Method DeleteWeakGlobalRef, addr 0x483f208, size 0x3c, virtual false, abstract: false, final false
  static inline void DeleteWeakGlobalRef(::System::IntPtr obj);

  /// @brief Method DetachCurrentThread, addr 0x483ed18, size 0x28, virtual false, abstract: false, final false
  static inline int32_t DetachCurrentThread();

  /// @brief Method EnsureLocalCapacity, addr 0x483f300, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t EnsureLocalCapacity(int32_t capacity);

  /// @brief Method ExceptionClear, addr 0x483f014, size 0x28, virtual false, abstract: false, final false
  static inline void ExceptionClear();

  /// @brief Method ExceptionDescribe, addr 0x483efec, size 0x28, virtual false, abstract: false, final false
  static inline void ExceptionDescribe();

  /// @brief Method ExceptionOccurred, addr 0x483efc4, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr ExceptionOccurred();

  /// @brief Method FatalError, addr 0x483f03c, size 0x3c, virtual false, abstract: false, final false
  static inline void FatalError(::StringW message);

  /// @brief Method FindClass, addr 0x483ed68, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr FindClass(::StringW name);

  /// @brief Method FromBooleanArray, addr 0x4842834, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<bool, ::Array<bool>*> FromBooleanArray(::System::IntPtr array);

  /// @brief Method FromByteArray, addr 0x4842870, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FromByteArray(::System::IntPtr array);

  /// @brief Method FromCharArray, addr 0x48428e8, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<char16_t, ::Array<char16_t>*> FromCharArray(::System::IntPtr array);

  /// @brief Method FromDoubleArray, addr 0x4842a14, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<double_t, ::Array<double_t>*> FromDoubleArray(::System::IntPtr array);

  /// @brief Method FromFloatArray, addr 0x48429d8, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<float_t, ::Array<float_t>*> FromFloatArray(::System::IntPtr array);

  /// @brief Method FromIntArray, addr 0x4842960, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> FromIntArray(::System::IntPtr array);

  /// @brief Method FromLongArray, addr 0x484299c, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<int64_t, ::Array<int64_t>*> FromLongArray(::System::IntPtr array);

  /// @brief Method FromObjectArray, addr 0x4842a50, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> FromObjectArray(::System::IntPtr array);

  /// @brief Method FromReflectedField, addr 0x483ede0, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr FromReflectedField(::System::IntPtr refField);

  /// @brief Method FromReflectedMethod, addr 0x483eda4, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr FromReflectedMethod(::System::IntPtr refMethod);

  /// @brief Method FromSByteArray, addr 0x48428ac, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<int8_t, ::Array<int8_t>*> FromSByteArray(::System::IntPtr array);

  /// @brief Method FromShortArray, addr 0x4842924, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<int16_t, ::Array<int16_t>*> FromShortArray(::System::IntPtr array);

  /// @brief Method GetArrayLength, addr 0x4842a8c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetArrayLength(::System::IntPtr array);

  /// @brief Method GetBooleanArrayElement, addr 0x4842d38, size 0x44, virtual false, abstract: false, final false
  static inline bool GetBooleanArrayElement(::System::IntPtr array, int32_t index);

  /// @brief Method GetBooleanField, addr 0x48407a8, size 0x44, virtual false, abstract: false, final false
  static inline bool GetBooleanField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method GetByteArrayElement, addr 0x4842d7c, size 0x44, virtual false, abstract: false, final false
  static inline uint8_t GetByteArrayElement(::System::IntPtr array, int32_t index);

  /// @brief Method GetByteField, addr 0x48407ec, size 0x44, virtual false, abstract: false, final false
  static inline uint8_t GetByteField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method GetCharArrayElement, addr 0x4842e04, size 0x44, virtual false, abstract: false, final false
  static inline char16_t GetCharArrayElement(::System::IntPtr array, int32_t index);

  /// @brief Method GetCharField, addr 0x4840874, size 0x44, virtual false, abstract: false, final false
  static inline char16_t GetCharField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method GetDirectBuffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::NativeArray_1<T> GetDirectBuffer(::System::IntPtr buffer);

  /// @brief Method GetDirectBufferAddress, addr 0x4843474, size 0x3c, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<int8_t> GetDirectBufferAddress(::System::IntPtr buffer);

  /// @brief Method GetDirectBufferCapacity, addr 0x48434b0, size 0x3c, virtual false, abstract: false, final false
  static inline int64_t GetDirectBufferCapacity(::System::IntPtr buffer);

  /// @brief Method GetDirectByteBuffer, addr 0x48434ec, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeArray_1<uint8_t> GetDirectByteBuffer(::System::IntPtr buffer);

  /// @brief Method GetDirectSByteBuffer, addr 0x4843534, size 0x48, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeArray_1<int8_t> GetDirectSByteBuffer(::System::IntPtr buffer);

  /// @brief Method GetDoubleArrayElement, addr 0x4842f58, size 0x44, virtual false, abstract: false, final false
  static inline double_t GetDoubleArrayElement(::System::IntPtr array, int32_t index);

  /// @brief Method GetDoubleField, addr 0x48409c8, size 0x44, virtual false, abstract: false, final false
  static inline double_t GetDoubleField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method GetFieldID, addr 0x483f5a0, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFieldID(::System::IntPtr clazz, ::StringW name, ::StringW sig);

  /// @brief Method GetFloatArrayElement, addr 0x4842f14, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetFloatArrayElement(::System::IntPtr array, int32_t index);

  /// @brief Method GetFloatField, addr 0x4840984, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetFloatField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method GetIntArrayElement, addr 0x4842e8c, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetIntArrayElement(::System::IntPtr array, int32_t index);

  /// @brief Method GetIntField, addr 0x48408fc, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetIntField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method GetJavaVM, addr 0x483ecc8, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetJavaVM();

  /// @brief Method GetLongArrayElement, addr 0x4842ed0, size 0x44, virtual false, abstract: false, final false
  static inline int64_t GetLongArrayElement(::System::IntPtr array, int32_t index);

  /// @brief Method GetLongField, addr 0x4840940, size 0x44, virtual false, abstract: false, final false
  static inline int64_t GetLongField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method GetMethodID, addr 0x483f54c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetMethodID(::System::IntPtr clazz, ::StringW name, ::StringW sig);

  /// @brief Method GetObjectArrayElement, addr 0x4842f9c, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetObjectArrayElement(::System::IntPtr array, int32_t index);

  /// @brief Method GetObjectClass, addr 0x483f4cc, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetObjectClass(::System::IntPtr obj);

  /// @brief Method GetObjectField, addr 0x4840764, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetObjectField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method GetQueueGlobalRefsCount, addr 0x483f1a4, size 0x28, virtual false, abstract: false, final false
  static inline uint32_t GetQueueGlobalRefsCount();

  /// @brief Method GetSByteArrayElement, addr 0x4842dc0, size 0x44, virtual false, abstract: false, final false
  static inline int8_t GetSByteArrayElement(::System::IntPtr array, int32_t index);

  /// @brief Method GetSByteField, addr 0x4840830, size 0x44, virtual false, abstract: false, final false
  static inline int8_t GetSByteField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method GetShortArrayElement, addr 0x4842e48, size 0x44, virtual false, abstract: false, final false
  static inline int16_t GetShortArrayElement(::System::IntPtr array, int32_t index);

  /// @brief Method GetShortField, addr 0x48408b8, size 0x44, virtual false, abstract: false, final false
  static inline int16_t GetShortField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method GetStaticBooleanField, addr 0x4841cd4, size 0x44, virtual false, abstract: false, final false
  static inline bool GetStaticBooleanField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStaticByteField, addr 0x4841d18, size 0x44, virtual false, abstract: false, final false
  static inline uint8_t GetStaticByteField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStaticCharField, addr 0x4841da0, size 0x44, virtual false, abstract: false, final false
  static inline char16_t GetStaticCharField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStaticDoubleField, addr 0x4841ef4, size 0x44, virtual false, abstract: false, final false
  static inline double_t GetStaticDoubleField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStaticFieldID, addr 0x483f648, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetStaticFieldID(::System::IntPtr clazz, ::StringW name, ::StringW sig);

  /// @brief Method GetStaticFloatField, addr 0x4841eb0, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetStaticFloatField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStaticIntField, addr 0x4841e28, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetStaticIntField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStaticLongField, addr 0x4841e6c, size 0x44, virtual false, abstract: false, final false
  static inline int64_t GetStaticLongField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStaticMethodID, addr 0x483f5f4, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetStaticMethodID(::System::IntPtr clazz, ::StringW name, ::StringW sig);

  /// @brief Method GetStaticObjectField, addr 0x4841c90, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetStaticObjectField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStaticSByteField, addr 0x4841d5c, size 0x44, virtual false, abstract: false, final false
  static inline int8_t GetStaticSByteField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStaticShortField, addr 0x4841de4, size 0x44, virtual false, abstract: false, final false
  static inline int16_t GetStaticShortField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStaticStringField, addr 0x4841c4c, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW GetStaticStringField(::System::IntPtr clazz, ::System::IntPtr fieldID);

  /// @brief Method GetStringChars, addr 0x483f78c, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW GetStringChars(::System::IntPtr str);

  /// @brief Method GetStringField, addr 0x4840720, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW GetStringField(::System::IntPtr obj, ::System::IntPtr fieldID);

  /// @brief Method GetStringLength, addr 0x483f7c8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetStringLength(::System::IntPtr str);

  /// @brief Method GetStringUTFChars, addr 0x483f840, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW GetStringUTFChars(::System::IntPtr str);

  /// @brief Method GetStringUTFLength, addr 0x483f804, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetStringUTFLength(::System::IntPtr str);

  /// @brief Method GetSuperclass, addr 0x483eec4, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetSuperclass(::System::IntPtr clazz);

  /// @brief Method GetVersion, addr 0x483ed40, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetVersion();

  /// @brief Method IsAssignableFrom, addr 0x483ef00, size 0x44, virtual false, abstract: false, final false
  static inline bool IsAssignableFrom(::System::IntPtr clazz1, ::System::IntPtr clazz2);

  /// @brief Method IsInstanceOf, addr 0x483f508, size 0x44, virtual false, abstract: false, final false
  static inline bool IsInstanceOf(::System::IntPtr obj, ::System::IntPtr clazz);

  /// @brief Method IsSameObject, addr 0x483f2bc, size 0x44, virtual false, abstract: false, final false
  static inline bool IsSameObject(::System::IntPtr obj1, ::System::IntPtr obj2);

  /// @brief Method NewBooleanArray, addr 0x4842ac8, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewBooleanArray(int32_t size);

  /// @brief Method NewByteArray, addr 0x4842b04, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewByteArray(int32_t size);

  /// @brief Method NewCharArray, addr 0x4842b7c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewCharArray(int32_t size);

  /// @brief Method NewDirectByteBuffer, addr 0x484341c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewDirectByteBuffer(::Unity::Collections::NativeArray_1<int8_t> buffer);

  /// @brief Method NewDirectByteBuffer, addr 0x48433c4, size 0x58, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewDirectByteBuffer(::Unity::Collections::NativeArray_1<uint8_t> buffer);

  /// @brief Method NewDirectByteBuffer, addr 0x4843380, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewDirectByteBuffer(::cordl_internals::Ptr<uint8_t> buffer, int64_t capacity);

  /// @brief Method NewDirectByteBufferFromNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::IntPtr NewDirectByteBufferFromNativeArray(::Unity::Collections::NativeArray_1<T> buffer);

  /// @brief Method NewDoubleArray, addr 0x4842ca8, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewDoubleArray(int32_t size);

  /// @brief Method NewFloatArray, addr 0x4842c6c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewFloatArray(int32_t size);

  /// @brief Method NewGlobalRef, addr 0x483f0f0, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewGlobalRef(::System::IntPtr obj);

  /// @brief Method NewIntArray, addr 0x4842bf4, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewIntArray(int32_t size);

  /// @brief Method NewLocalRef, addr 0x483f244, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewLocalRef(::System::IntPtr obj);

  /// @brief Method NewLongArray, addr 0x4842c30, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewLongArray(int32_t size);

  /// @brief Method NewObject, addr 0x483f378, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewObject(::System::IntPtr clazz, ::System::IntPtr methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method NewObject, addr 0x483f3e0, size 0x98, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewObject(::System::IntPtr clazz, ::System::IntPtr methodID, ::System::Span_1<::UnityEngine::jvalue> args);

  /// @brief Method NewObjectA, addr 0x483f478, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewObjectA(::System::IntPtr clazz, ::System::IntPtr methodID, ::cordl_internals::Ptr<::UnityEngine::jvalue> args);

  /// @brief Method NewObjectArray, addr 0x4842ce4, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewObjectArray(int32_t size, ::System::IntPtr clazz, ::System::IntPtr obj);

  /// @brief Method NewSByteArray, addr 0x4842b40, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewSByteArray(int32_t size);

  /// @brief Method NewShortArray, addr 0x4842bb8, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewShortArray(int32_t size);

  /// @brief Method NewString, addr 0x483f714, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewString(::ArrayW<char16_t, ::Array<char16_t>*> chars);

  /// @brief Method NewString, addr 0x483f69c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewString(::StringW chars);

  /// @brief Method NewStringFromStr, addr 0x483f6d8, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewStringFromStr(::StringW chars);

  /// @brief Method NewStringUTF, addr 0x483f750, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewStringUTF(::StringW bytes);

  /// @brief Method NewWeakGlobalRef, addr 0x483f1cc, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr NewWeakGlobalRef(::System::IntPtr obj);

  /// @brief Method PopLocalFrame, addr 0x483f0b4, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr PopLocalFrame(::System::IntPtr ptr);

  /// @brief Method PushLocalFrame, addr 0x483f078, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t PushLocalFrame(int32_t capacity);

  /// @brief Method QueueDeleteGlobalRef, addr 0x483f168, size 0x3c, virtual false, abstract: false, final false
  static inline void QueueDeleteGlobalRef(::System::IntPtr obj);

  /// @brief Method RegisterNatives, addr 0x484357c, size 0x190, virtual false, abstract: false, final false
  static inline int32_t RegisterNatives(::System::IntPtr clazz, ::ArrayW<::UnityEngine::JNINativeMethod, ::Array<::UnityEngine::JNINativeMethod>*> methods);

  /// @brief Method RegisterNativesAllocate, addr 0x484370c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr RegisterNativesAllocate(int32_t length);

  /// @brief Method RegisterNativesAndFree, addr 0x48437b4, size 0x54, virtual false, abstract: false, final false
  static inline int32_t RegisterNativesAndFree(::System::IntPtr clazz, ::System::IntPtr natives, int32_t n);

  /// @brief Method RegisterNativesSet, addr 0x4843748, size 0x6c, virtual false, abstract: false, final false
  static inline void RegisterNativesSet(::System::IntPtr natives, int32_t idx, ::StringW name, ::StringW signature, ::System::IntPtr fnPtr);

  /// @brief Method SetBooleanArrayElement, addr 0x4843038, size 0x54, virtual false, abstract: false, final false
  static inline void SetBooleanArrayElement(::System::IntPtr array, int32_t index, bool val);

  /// @brief Method SetBooleanArrayElement, addr 0x4842fe0, size 0x58, virtual false, abstract: false, final false
  static inline void SetBooleanArrayElement(::System::IntPtr array, int32_t index, uint8_t val);

  /// @brief Method SetBooleanField, addr 0x4840ab4, size 0x54, virtual false, abstract: false, final false
  static inline void SetBooleanField(::System::IntPtr obj, ::System::IntPtr fieldID, bool val);

  /// @brief Method SetByteArrayElement, addr 0x484308c, size 0x54, virtual false, abstract: false, final false
  static inline void SetByteArrayElement(::System::IntPtr array, int32_t index, int8_t val);

  /// @brief Method SetByteField, addr 0x4840b08, size 0x54, virtual false, abstract: false, final false
  static inline void SetByteField(::System::IntPtr obj, ::System::IntPtr fieldID, uint8_t val);

  /// @brief Method SetCharArrayElement, addr 0x4843134, size 0x54, virtual false, abstract: false, final false
  static inline void SetCharArrayElement(::System::IntPtr array, int32_t index, char16_t val);

  /// @brief Method SetCharField, addr 0x4840bb0, size 0x54, virtual false, abstract: false, final false
  static inline void SetCharField(::System::IntPtr obj, ::System::IntPtr fieldID, char16_t val);

  /// @brief Method SetDoubleArrayElement, addr 0x48432d8, size 0x54, virtual false, abstract: false, final false
  static inline void SetDoubleArrayElement(::System::IntPtr array, int32_t index, double_t val);

  /// @brief Method SetDoubleField, addr 0x4840d54, size 0x54, virtual false, abstract: false, final false
  static inline void SetDoubleField(::System::IntPtr obj, ::System::IntPtr fieldID, double_t val);

  /// @brief Method SetFloatArrayElement, addr 0x4843284, size 0x54, virtual false, abstract: false, final false
  static inline void SetFloatArrayElement(::System::IntPtr array, int32_t index, float_t val);

  /// @brief Method SetFloatField, addr 0x4840d00, size 0x54, virtual false, abstract: false, final false
  static inline void SetFloatField(::System::IntPtr obj, ::System::IntPtr fieldID, float_t val);

  /// @brief Method SetIntArrayElement, addr 0x48431dc, size 0x54, virtual false, abstract: false, final false
  static inline void SetIntArrayElement(::System::IntPtr array, int32_t index, int32_t val);

  /// @brief Method SetIntField, addr 0x4840c58, size 0x54, virtual false, abstract: false, final false
  static inline void SetIntField(::System::IntPtr obj, ::System::IntPtr fieldID, int32_t val);

  /// @brief Method SetLongArrayElement, addr 0x4843230, size 0x54, virtual false, abstract: false, final false
  static inline void SetLongArrayElement(::System::IntPtr array, int32_t index, int64_t val);

  /// @brief Method SetLongField, addr 0x4840cac, size 0x54, virtual false, abstract: false, final false
  static inline void SetLongField(::System::IntPtr obj, ::System::IntPtr fieldID, int64_t val);

  /// @brief Method SetObjectArrayElement, addr 0x484332c, size 0x54, virtual false, abstract: false, final false
  static inline void SetObjectArrayElement(::System::IntPtr array, int32_t index, ::System::IntPtr obj);

  /// @brief Method SetObjectField, addr 0x4840a60, size 0x54, virtual false, abstract: false, final false
  static inline void SetObjectField(::System::IntPtr obj, ::System::IntPtr fieldID, ::System::IntPtr val);

  /// @brief Method SetSByteArrayElement, addr 0x48430e0, size 0x54, virtual false, abstract: false, final false
  static inline void SetSByteArrayElement(::System::IntPtr array, int32_t index, int8_t val);

  /// @brief Method SetSByteField, addr 0x4840b5c, size 0x54, virtual false, abstract: false, final false
  static inline void SetSByteField(::System::IntPtr obj, ::System::IntPtr fieldID, int8_t val);

  /// @brief Method SetShortArrayElement, addr 0x4843188, size 0x54, virtual false, abstract: false, final false
  static inline void SetShortArrayElement(::System::IntPtr array, int32_t index, int16_t val);

  /// @brief Method SetShortField, addr 0x4840c04, size 0x54, virtual false, abstract: false, final false
  static inline void SetShortField(::System::IntPtr obj, ::System::IntPtr fieldID, int16_t val);

  /// @brief Method SetStaticBooleanField, addr 0x4841fe0, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticBooleanField(::System::IntPtr clazz, ::System::IntPtr fieldID, bool val);

  /// @brief Method SetStaticByteField, addr 0x4842034, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticByteField(::System::IntPtr clazz, ::System::IntPtr fieldID, uint8_t val);

  /// @brief Method SetStaticCharField, addr 0x48420dc, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticCharField(::System::IntPtr clazz, ::System::IntPtr fieldID, char16_t val);

  /// @brief Method SetStaticDoubleField, addr 0x4842280, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticDoubleField(::System::IntPtr clazz, ::System::IntPtr fieldID, double_t val);

  /// @brief Method SetStaticFloatField, addr 0x484222c, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticFloatField(::System::IntPtr clazz, ::System::IntPtr fieldID, float_t val);

  /// @brief Method SetStaticIntField, addr 0x4842184, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticIntField(::System::IntPtr clazz, ::System::IntPtr fieldID, int32_t val);

  /// @brief Method SetStaticLongField, addr 0x48421d8, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticLongField(::System::IntPtr clazz, ::System::IntPtr fieldID, int64_t val);

  /// @brief Method SetStaticObjectField, addr 0x4841f8c, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticObjectField(::System::IntPtr clazz, ::System::IntPtr fieldID, ::System::IntPtr val);

  /// @brief Method SetStaticSByteField, addr 0x4842088, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticSByteField(::System::IntPtr clazz, ::System::IntPtr fieldID, int8_t val);

  /// @brief Method SetStaticShortField, addr 0x4842130, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticShortField(::System::IntPtr clazz, ::System::IntPtr fieldID, int16_t val);

  /// @brief Method SetStaticStringField, addr 0x4841f38, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticStringField(::System::IntPtr clazz, ::System::IntPtr fieldID, ::StringW val);

  /// @brief Method SetStringField, addr 0x4840a0c, size 0x54, virtual false, abstract: false, final false
  static inline void SetStringField(::System::IntPtr obj, ::System::IntPtr fieldID, ::StringW val);

  /// @brief Method Throw, addr 0x483ef44, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t Throw(::System::IntPtr obj);

  /// @brief Method ThrowNew, addr 0x483ef80, size 0x44, virtual false, abstract: false, final false
  static inline int32_t ThrowNew(::System::IntPtr clazz, ::StringW message);

  /// @brief Method ToBooleanArray, addr 0x48422d4, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToBooleanArray(::ArrayW<bool, ::Array<bool>*> array);

  /// @brief Method ToByteArray, addr 0x4842310, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> array);

  /// @brief Method ToCharArray, addr 0x48423e4, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToCharArray(::ArrayW<char16_t, ::Array<char16_t>*> array);

  /// @brief Method ToCharArray, addr 0x4842438, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToCharArray(::cordl_internals::Ptr<char16_t> array, int32_t length);

  /// @brief Method ToDoubleArray, addr 0x48426dc, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToDoubleArray(::ArrayW<double_t, ::Array<double_t>*> array);

  /// @brief Method ToDoubleArray, addr 0x4842730, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToDoubleArray(::cordl_internals::Ptr<double_t> array, int32_t length);

  /// @brief Method ToFloatArray, addr 0x4842644, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToFloatArray(::ArrayW<float_t, ::Array<float_t>*> array);

  /// @brief Method ToFloatArray, addr 0x4842698, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToFloatArray(::cordl_internals::Ptr<float_t> array, int32_t length);

  /// @brief Method ToIntArray, addr 0x4842514, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToIntArray(::ArrayW<int32_t, ::Array<int32_t>*> array);

  /// @brief Method ToIntArray, addr 0x4842568, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToIntArray(::cordl_internals::Ptr<int32_t> array, int32_t length);

  /// @brief Method ToLongArray, addr 0x48425ac, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToLongArray(::ArrayW<int64_t, ::Array<int64_t>*> array);

  /// @brief Method ToLongArray, addr 0x4842600, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToLongArray(::cordl_internals::Ptr<int64_t> array, int32_t length);

  /// @brief Method ToObjectArray, addr 0x484282c, size 0x8, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToObjectArray(::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> array);

  /// @brief Method ToObjectArray, addr 0x48427c8, size 0x64, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToObjectArray(::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> array, ::System::IntPtr arrayClass);

  /// @brief Method ToObjectArray, addr 0x4842774, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToObjectArray(::cordl_internals::Ptr<::System::IntPtr> array, int32_t length, ::System::IntPtr arrayClass);

  /// @brief Method ToReflectedField, addr 0x483ee70, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToReflectedField(::System::IntPtr clazz, ::System::IntPtr fieldID, bool isStatic);

  /// @brief Method ToReflectedMethod, addr 0x483ee1c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToReflectedMethod(::System::IntPtr clazz, ::System::IntPtr methodID, bool isStatic);

  /// @brief Method ToSByteArray, addr 0x484234c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToSByteArray(::ArrayW<int8_t, ::Array<int8_t>*> array);

  /// @brief Method ToSByteArray, addr 0x48423a0, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToSByteArray(::cordl_internals::Ptr<int8_t> array, int32_t length);

  /// @brief Method ToShortArray, addr 0x484247c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToShortArray(::ArrayW<int16_t, ::Array<int16_t>*> array);

  /// @brief Method ToShortArray, addr 0x48424d0, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToShortArray(::cordl_internals::Ptr<int16_t> array, int32_t length);

  /// @brief Method UnregisterNatives, addr 0x4843808, size 0x3c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16756 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AndroidJNI, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AndroidJNI);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidJNI*, "UnityEngine", "AndroidJNI");
