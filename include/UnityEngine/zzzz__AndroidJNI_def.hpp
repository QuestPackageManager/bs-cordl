#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidJNI)
namespace UnityEngine {
struct jvalue;
}
// Forward declare root types
namespace UnityEngine {
class AndroidJNI;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AndroidJNI);
// Type: UnityEngine::AndroidJNI
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::AndroidJNI*
class CORDL_TYPE AndroidJNI : public ::System::Object {
public:
  // Declarations
  /// @brief Method AllocObject, addr 0x33bfc28, size 0x3c, virtual false, abstract: false, final false
  static inline void* AllocObject(void* clazz);

  /// @brief Method AttachCurrentThread, addr 0x33bf8f0, size 0x28, virtual false, abstract: false, final false
  static inline int32_t AttachCurrentThread();

  /// @brief Method CallBooleanMethod, addr 0x33b6718, size 0x54, virtual false, abstract: false, final false
  static inline bool CallBooleanMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallByteMethod, addr 0x33bfe10, size 0x54, virtual false, abstract: false, final false
  static inline uint8_t CallByteMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallCharMethod, addr 0x33b60b8, size 0x54, virtual false, abstract: false, final false
  static inline char16_t CallCharMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallDoubleMethod, addr 0x33b61d0, size 0x54, virtual false, abstract: false, final false
  static inline double_t CallDoubleMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallFloatMethod, addr 0x33b62e8, size 0x54, virtual false, abstract: false, final false
  static inline float_t CallFloatMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallIntMethod, addr 0x33b6824, size 0x54, virtual false, abstract: false, final false
  static inline int32_t CallIntMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallLongMethod, addr 0x33b63f4, size 0x54, virtual false, abstract: false, final false
  static inline int64_t CallLongMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallObjectMethod, addr 0x33b5ef4, size 0x54, virtual false, abstract: false, final false
  static inline void* CallObjectMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallSByteMethod, addr 0x33b660c, size 0x54, virtual false, abstract: false, final false
  static inline int8_t CallSByteMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallShortMethod, addr 0x33b6500, size 0x54, virtual false, abstract: false, final false
  static inline int16_t CallShortMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticBooleanMethod, addr 0x33b47dc, size 0x54, virtual false, abstract: false, final false
  static inline bool CallStaticBooleanMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticByteMethod, addr 0x33bfefc, size 0x54, virtual false, abstract: false, final false
  static inline uint8_t CallStaticByteMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticCharMethod, addr 0x33b417c, size 0x54, virtual false, abstract: false, final false
  static inline char16_t CallStaticCharMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticDoubleMethod, addr 0x33b4294, size 0x54, virtual false, abstract: false, final false
  static inline double_t CallStaticDoubleMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticFloatMethod, addr 0x33b43ac, size 0x54, virtual false, abstract: false, final false
  static inline float_t CallStaticFloatMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticIntMethod, addr 0x33b48e8, size 0x54, virtual false, abstract: false, final false
  static inline int32_t CallStaticIntMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticLongMethod, addr 0x33b44b8, size 0x54, virtual false, abstract: false, final false
  static inline int64_t CallStaticLongMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticObjectMethod, addr 0x33b3fb8, size 0x54, virtual false, abstract: false, final false
  static inline void* CallStaticObjectMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticSByteMethod, addr 0x33b46d0, size 0x54, virtual false, abstract: false, final false
  static inline int8_t CallStaticSByteMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticShortMethod, addr 0x33b45c4, size 0x54, virtual false, abstract: false, final false
  static inline int16_t CallStaticShortMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticStringMethod, addr 0x33b1e3c, size 0x54, virtual false, abstract: false, final false
  static inline ::StringW CallStaticStringMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticVoidMethod, addr 0x33b3eac, size 0x54, virtual false, abstract: false, final false
  static inline void CallStaticVoidMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStringMethod, addr 0x33b1de8, size 0x54, virtual false, abstract: false, final false
  static inline ::StringW CallStringMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallVoidMethod, addr 0x33b5de8, size 0x54, virtual false, abstract: false, final false
  static inline void CallVoidMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method DeleteGlobalRef, addr 0x33b1f90, size 0x3c, virtual false, abstract: false, final false
  static inline void DeleteGlobalRef(void* obj);

  /// @brief Method DeleteLocalRef, addr 0x33b2120, size 0x3c, virtual false, abstract: false, final false
  static inline void DeleteLocalRef(void* obj);

  /// @brief Method DeleteWeakGlobalRef, addr 0x33b2058, size 0x3c, virtual false, abstract: false, final false
  static inline void DeleteWeakGlobalRef(void* obj);

  /// @brief Method DetachCurrentThread, addr 0x33bf918, size 0x28, virtual false, abstract: false, final false
  static inline int32_t DetachCurrentThread();

  /// @brief Method EnsureLocalCapacity, addr 0x33bfbec, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t EnsureLocalCapacity(int32_t capacity);

  /// @brief Method ExceptionClear, addr 0x33b1cdc, size 0x28, virtual false, abstract: false, final false
  static inline void ExceptionClear();

  /// @brief Method ExceptionDescribe, addr 0x33bfb4c, size 0x28, virtual false, abstract: false, final false
  static inline void ExceptionDescribe();

  /// @brief Method ExceptionOccurred, addr 0x33b1cb4, size 0x28, virtual false, abstract: false, final false
  static inline void* ExceptionOccurred();

  /// @brief Method FatalError, addr 0x33bfb74, size 0x3c, virtual false, abstract: false, final false
  static inline void FatalError(::StringW message);

  /// @brief Method FindClass, addr 0x33b1d04, size 0x3c, virtual false, abstract: false, final false
  static inline void* FindClass(::StringW name);

  /// @brief Method FromBooleanArray, addr 0x33b6f1c, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<bool, ::Array<bool>*> FromBooleanArray(void* array);

  /// @brief Method FromByteArray, addr 0x33b6d64, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FromByteArray(void* array);

  /// @brief Method FromCharArray, addr 0x33b6918, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<char16_t, ::Array<char16_t>*> FromCharArray(void* array);

  /// @brief Method FromDoubleArray, addr 0x33b69f4, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<double_t, ::Array<double_t>*> FromDoubleArray(void* array);

  /// @brief Method FromFloatArray, addr 0x33b6ad0, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<float_t, ::Array<float_t>*> FromFloatArray(void* array);

  /// @brief Method FromIntArray, addr 0x33b6ff8, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> FromIntArray(void* array);

  /// @brief Method FromLongArray, addr 0x33b6bac, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<int64_t, ::Array<int64_t>*> FromLongArray(void* array);

  /// @brief Method FromObjectArray, addr 0x33c005c, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<void*, ::Array<void*>*> FromObjectArray(void* array);

  /// @brief Method FromReflectedField, addr 0x33bf968, size 0x3c, virtual false, abstract: false, final false
  static inline void* FromReflectedField(void* refField);

  /// @brief Method FromReflectedMethod, addr 0x33b2818, size 0x3c, virtual false, abstract: false, final false
  static inline void* FromReflectedMethod(void* refMethod);

  /// @brief Method FromSByteArray, addr 0x33b6e40, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<int8_t, ::Array<int8_t>*> FromSByteArray(void* array);

  /// @brief Method FromShortArray, addr 0x33b6c88, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<int16_t, ::Array<int16_t>*> FromShortArray(void* array);

  /// @brief Method GetArrayLength, addr 0x33b7a68, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetArrayLength(void* array);

  /// @brief Method GetBooleanArrayElement, addr 0x33c02b4, size 0x44, virtual false, abstract: false, final false
  static inline bool GetBooleanArrayElement(void* array, int32_t index);

  /// @brief Method GetBooleanField, addr 0x33b5bfc, size 0x44, virtual false, abstract: false, final false
  static inline bool GetBooleanField(void* obj, void* fieldID);

  /// @brief Method GetByteArrayElement, addr 0x33c02f8, size 0x44, virtual false, abstract: false, final false
  static inline uint8_t GetByteArrayElement(void* array, int32_t index);

  /// @brief Method GetByteField, addr 0x33bfe64, size 0x44, virtual false, abstract: false, final false
  static inline uint8_t GetByteField(void* obj, void* fieldID);

  /// @brief Method GetCharArrayElement, addr 0x33c0380, size 0x44, virtual false, abstract: false, final false
  static inline char16_t GetCharArrayElement(void* array, int32_t index);

  /// @brief Method GetCharField, addr 0x33b565c, size 0x44, virtual false, abstract: false, final false
  static inline char16_t GetCharField(void* obj, void* fieldID);

  /// @brief Method GetDoubleArrayElement, addr 0x33c04d4, size 0x44, virtual false, abstract: false, final false
  static inline double_t GetDoubleArrayElement(void* array, int32_t index);

  /// @brief Method GetDoubleField, addr 0x33b5754, size 0x44, virtual false, abstract: false, final false
  static inline double_t GetDoubleField(void* obj, void* fieldID);

  /// @brief Method GetFieldID, addr 0x33b2618, size 0x54, virtual false, abstract: false, final false
  static inline void* GetFieldID(void* clazz, ::StringW name, ::StringW sig);

  /// @brief Method GetFloatArrayElement, addr 0x33c0490, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetFloatArrayElement(void* array, int32_t index);

  /// @brief Method GetFloatField, addr 0x33b584c, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetFloatField(void* obj, void* fieldID);

  /// @brief Method GetIntArrayElement, addr 0x33c0408, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetIntArrayElement(void* array, int32_t index);

  /// @brief Method GetIntField, addr 0x33b5ce8, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetIntField(void* obj, void* fieldID);

  /// @brief Method GetLongArrayElement, addr 0x33c044c, size 0x44, virtual false, abstract: false, final false
  static inline int64_t GetLongArrayElement(void* array, int32_t index);

  /// @brief Method GetLongField, addr 0x33b5938, size 0x44, virtual false, abstract: false, final false
  static inline int64_t GetLongField(void* obj, void* fieldID);

  /// @brief Method GetMethodID, addr 0x33b1d40, size 0x54, virtual false, abstract: false, final false
  static inline void* GetMethodID(void* clazz, ::StringW name, ::StringW sig);

  /// @brief Method GetObjectArrayElement, addr 0x33b7984, size 0x44, virtual false, abstract: false, final false
  static inline void* GetObjectArrayElement(void* array, int32_t index);

  /// @brief Method GetObjectClass, addr 0x33b23b4, size 0x3c, virtual false, abstract: false, final false
  static inline void* GetObjectClass(void* obj);

  /// @brief Method GetObjectField, addr 0x33b5484, size 0x44, virtual false, abstract: false, final false
  static inline void* GetObjectField(void* obj, void* fieldID);

  /// @brief Method GetSByteArrayElement, addr 0x33c033c, size 0x44, virtual false, abstract: false, final false
  static inline int8_t GetSByteArrayElement(void* array, int32_t index);

  /// @brief Method GetSByteField, addr 0x33b5b10, size 0x44, virtual false, abstract: false, final false
  static inline int8_t GetSByteField(void* obj, void* fieldID);

  /// @brief Method GetShortArrayElement, addr 0x33c03c4, size 0x44, virtual false, abstract: false, final false
  static inline int16_t GetShortArrayElement(void* array, int32_t index);

  /// @brief Method GetShortField, addr 0x33b5a24, size 0x44, virtual false, abstract: false, final false
  static inline int16_t GetShortField(void* obj, void* fieldID);

  /// @brief Method GetStaticBooleanField, addr 0x33b3cc0, size 0x44, virtual false, abstract: false, final false
  static inline bool GetStaticBooleanField(void* clazz, void* fieldID);

  /// @brief Method GetStaticByteField, addr 0x33bff50, size 0x44, virtual false, abstract: false, final false
  static inline uint8_t GetStaticByteField(void* clazz, void* fieldID);

  /// @brief Method GetStaticCharField, addr 0x33b3720, size 0x44, virtual false, abstract: false, final false
  static inline char16_t GetStaticCharField(void* clazz, void* fieldID);

  /// @brief Method GetStaticDoubleField, addr 0x33b3818, size 0x44, virtual false, abstract: false, final false
  static inline double_t GetStaticDoubleField(void* clazz, void* fieldID);

  /// @brief Method GetStaticFieldID, addr 0x33b2724, size 0x54, virtual false, abstract: false, final false
  static inline void* GetStaticFieldID(void* clazz, ::StringW name, ::StringW sig);

  /// @brief Method GetStaticFloatField, addr 0x33b3910, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetStaticFloatField(void* clazz, void* fieldID);

  /// @brief Method GetStaticIntField, addr 0x33b3dac, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetStaticIntField(void* clazz, void* fieldID);

  /// @brief Method GetStaticLongField, addr 0x33b39fc, size 0x44, virtual false, abstract: false, final false
  static inline int64_t GetStaticLongField(void* clazz, void* fieldID);

  /// @brief Method GetStaticMethodID, addr 0x33b1d94, size 0x54, virtual false, abstract: false, final false
  static inline void* GetStaticMethodID(void* clazz, ::StringW name, ::StringW sig);

  /// @brief Method GetStaticObjectField, addr 0x33b3548, size 0x44, virtual false, abstract: false, final false
  static inline void* GetStaticObjectField(void* clazz, void* fieldID);

  /// @brief Method GetStaticSByteField, addr 0x33b3bd4, size 0x44, virtual false, abstract: false, final false
  static inline int8_t GetStaticSByteField(void* clazz, void* fieldID);

  /// @brief Method GetStaticShortField, addr 0x33b3ae8, size 0x44, virtual false, abstract: false, final false
  static inline int16_t GetStaticShortField(void* clazz, void* fieldID);

  /// @brief Method GetStaticStringField, addr 0x33b3634, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW GetStaticStringField(void* clazz, void* fieldID);

  /// @brief Method GetStringChars, addr 0x33b22d8, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW GetStringChars(void* str);

  /// @brief Method GetStringField, addr 0x33b5570, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW GetStringField(void* obj, void* fieldID);

  /// @brief Method GetStringLength, addr 0x33bfd5c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetStringLength(void* str);

  /// @brief Method GetStringUTFChars, addr 0x33bfdd4, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW GetStringUTFChars(void* str);

  /// @brief Method GetStringUTFLength, addr 0x33bfd98, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetStringUTFLength(void* str);

  /// @brief Method GetSuperclass, addr 0x33bfa4c, size 0x3c, virtual false, abstract: false, final false
  static inline void* GetSuperclass(void* clazz);

  /// @brief Method GetVersion, addr 0x33bf940, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetVersion();

  /// @brief Method IsAssignableFrom, addr 0x33bfa88, size 0x44, virtual false, abstract: false, final false
  static inline bool IsAssignableFrom(void* clazz1, void* clazz2);

  /// @brief Method IsInstanceOf, addr 0x33bfc64, size 0x44, virtual false, abstract: false, final false
  static inline bool IsInstanceOf(void* obj, void* clazz);

  /// @brief Method IsSameObject, addr 0x33b9eac, size 0x44, virtual false, abstract: false, final false
  static inline bool IsSameObject(void* obj1, void* obj2);

  /// @brief Method NewBooleanArray, addr 0x33c0098, size 0x3c, virtual false, abstract: false, final false
  static inline void* NewBooleanArray(int32_t size);

  /// @brief Method NewByteArray, addr 0x33c00d4, size 0x3c, virtual false, abstract: false, final false
  static inline void* NewByteArray(int32_t size);

  /// @brief Method NewCharArray, addr 0x33c014c, size 0x3c, virtual false, abstract: false, final false
  static inline void* NewCharArray(int32_t size);

  /// @brief Method NewDoubleArray, addr 0x33c0278, size 0x3c, virtual false, abstract: false, final false
  static inline void* NewDoubleArray(int32_t size);

  /// @brief Method NewFloatArray, addr 0x33c023c, size 0x3c, virtual false, abstract: false, final false
  static inline void* NewFloatArray(int32_t size);

  /// @brief Method NewGlobalRef, addr 0x33b7c4c, size 0x3c, virtual false, abstract: false, final false
  static inline void* NewGlobalRef(void* obj);

  /// @brief Method NewIntArray, addr 0x33c01c4, size 0x3c, virtual false, abstract: false, final false
  static inline void* NewIntArray(int32_t size);

  /// @brief Method NewLocalRef, addr 0x33ba0dc, size 0x3c, virtual false, abstract: false, final false
  static inline void* NewLocalRef(void* obj);

  /// @brief Method NewLongArray, addr 0x33c0200, size 0x3c, virtual false, abstract: false, final false
  static inline void* NewLongArray(int32_t size);

  /// @brief Method NewObject, addr 0x33b29ac, size 0x54, virtual false, abstract: false, final false
  static inline void* NewObject(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method NewObjectArray, addr 0x33bde90, size 0x54, virtual false, abstract: false, final false
  static inline void* NewObjectArray(int32_t size, void* clazz, void* obj);

  /// @brief Method NewSByteArray, addr 0x33c0110, size 0x3c, virtual false, abstract: false, final false
  static inline void* NewSByteArray(int32_t size);

  /// @brief Method NewShortArray, addr 0x33c0188, size 0x3c, virtual false, abstract: false, final false
  static inline void* NewShortArray(int32_t size);

  /// @brief Method NewString, addr 0x33bfce4, size 0x3c, virtual false, abstract: false, final false
  static inline void* NewString(::ArrayW<char16_t, ::Array<char16_t>*> chars);

  /// @brief Method NewString, addr 0x33b21fc, size 0x3c, virtual false, abstract: false, final false
  static inline void* NewString(::StringW chars);

  /// @brief Method NewStringFromStr, addr 0x33bfca8, size 0x3c, virtual false, abstract: false, final false
  static inline void* NewStringFromStr(::StringW chars);

  /// @brief Method NewStringUTF, addr 0x33bfd20, size 0x3c, virtual false, abstract: false, final false
  static inline void* NewStringUTF(::StringW bytes);

  /// @brief Method NewWeakGlobalRef, addr 0x33ba1d4, size 0x3c, virtual false, abstract: false, final false
  static inline void* NewWeakGlobalRef(void* obj);

  /// @brief Method PopLocalFrame, addr 0x33bfbb0, size 0x3c, virtual false, abstract: false, final false
  static inline void* PopLocalFrame(void* ptr);

  /// @brief Method PushLocalFrame, addr 0x33be8ac, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t PushLocalFrame(int32_t capacity);

  /// @brief Method SetBooleanArrayElement, addr 0x33c0570, size 0x54, virtual false, abstract: false, final false
  static inline void SetBooleanArrayElement(void* array, int32_t index, bool val);

  /// @brief Method SetBooleanArrayElement, addr 0x33c0518, size 0x58, virtual false, abstract: false, final false
  static inline void SetBooleanArrayElement(void* array, int32_t index, uint8_t val);

  /// @brief Method SetBooleanField, addr 0x33b5278, size 0x54, virtual false, abstract: false, final false
  static inline void SetBooleanField(void* obj, void* fieldID, bool val);

  /// @brief Method SetByteArrayElement, addr 0x33c05c4, size 0x54, virtual false, abstract: false, final false
  static inline void SetByteArrayElement(void* array, int32_t index, int8_t val);

  /// @brief Method SetByteField, addr 0x33bfea8, size 0x54, virtual false, abstract: false, final false
  static inline void SetByteField(void* obj, void* fieldID, uint8_t val);

  /// @brief Method SetCharArrayElement, addr 0x33c066c, size 0x54, virtual false, abstract: false, final false
  static inline void SetCharArrayElement(void* array, int32_t index, char16_t val);

  /// @brief Method SetCharField, addr 0x33b4c18, size 0x54, virtual false, abstract: false, final false
  static inline void SetCharField(void* obj, void* fieldID, char16_t val);

  /// @brief Method SetDoubleArrayElement, addr 0x33c0810, size 0x54, virtual false, abstract: false, final false
  static inline void SetDoubleArrayElement(void* array, int32_t index, double_t val);

  /// @brief Method SetDoubleField, addr 0x33b4d28, size 0x54, virtual false, abstract: false, final false
  static inline void SetDoubleField(void* obj, void* fieldID, double_t val);

  /// @brief Method SetFloatArrayElement, addr 0x33c07bc, size 0x54, virtual false, abstract: false, final false
  static inline void SetFloatArrayElement(void* array, int32_t index, float_t val);

  /// @brief Method SetFloatField, addr 0x33b4e38, size 0x54, virtual false, abstract: false, final false
  static inline void SetFloatField(void* obj, void* fieldID, float_t val);

  /// @brief Method SetIntArrayElement, addr 0x33c0714, size 0x54, virtual false, abstract: false, final false
  static inline void SetIntArrayElement(void* array, int32_t index, int32_t val);

  /// @brief Method SetIntField, addr 0x33b5388, size 0x54, virtual false, abstract: false, final false
  static inline void SetIntField(void* obj, void* fieldID, int32_t val);

  /// @brief Method SetLongArrayElement, addr 0x33c0768, size 0x54, virtual false, abstract: false, final false
  static inline void SetLongArrayElement(void* array, int32_t index, int64_t val);

  /// @brief Method SetLongField, addr 0x33b4f48, size 0x54, virtual false, abstract: false, final false
  static inline void SetLongField(void* obj, void* fieldID, int64_t val);

  /// @brief Method SetObjectArrayElement, addr 0x33bdee4, size 0x54, virtual false, abstract: false, final false
  static inline void SetObjectArrayElement(void* array, int32_t index, void* obj);

  /// @brief Method SetObjectField, addr 0x33b49f8, size 0x54, virtual false, abstract: false, final false
  static inline void SetObjectField(void* obj, void* fieldID, void* val);

  /// @brief Method SetSByteArrayElement, addr 0x33c0618, size 0x54, virtual false, abstract: false, final false
  static inline void SetSByteArrayElement(void* array, int32_t index, int8_t val);

  /// @brief Method SetSByteField, addr 0x33b5168, size 0x54, virtual false, abstract: false, final false
  static inline void SetSByteField(void* obj, void* fieldID, int8_t val);

  /// @brief Method SetShortArrayElement, addr 0x33c06c0, size 0x54, virtual false, abstract: false, final false
  static inline void SetShortArrayElement(void* array, int32_t index, int16_t val);

  /// @brief Method SetShortField, addr 0x33b5058, size 0x54, virtual false, abstract: false, final false
  static inline void SetShortField(void* obj, void* fieldID, int16_t val);

  /// @brief Method SetStaticBooleanField, addr 0x33b333c, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticBooleanField(void* clazz, void* fieldID, bool val);

  /// @brief Method SetStaticByteField, addr 0x33bff94, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticByteField(void* clazz, void* fieldID, uint8_t val);

  /// @brief Method SetStaticCharField, addr 0x33b2cdc, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticCharField(void* clazz, void* fieldID, char16_t val);

  /// @brief Method SetStaticDoubleField, addr 0x33b2dec, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticDoubleField(void* clazz, void* fieldID, double_t val);

  /// @brief Method SetStaticFloatField, addr 0x33b2efc, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticFloatField(void* clazz, void* fieldID, float_t val);

  /// @brief Method SetStaticIntField, addr 0x33b344c, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticIntField(void* clazz, void* fieldID, int32_t val);

  /// @brief Method SetStaticLongField, addr 0x33b300c, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticLongField(void* clazz, void* fieldID, int64_t val);

  /// @brief Method SetStaticObjectField, addr 0x33b2abc, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticObjectField(void* clazz, void* fieldID, void* val);

  /// @brief Method SetStaticSByteField, addr 0x33b322c, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticSByteField(void* clazz, void* fieldID, int8_t val);

  /// @brief Method SetStaticShortField, addr 0x33b311c, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticShortField(void* clazz, void* fieldID, int16_t val);

  /// @brief Method SetStaticStringField, addr 0x33b2bcc, size 0x54, virtual false, abstract: false, final false
  static inline void SetStaticStringField(void* clazz, void* fieldID, ::StringW val);

  /// @brief Method SetStringField, addr 0x33b4b08, size 0x54, virtual false, abstract: false, final false
  static inline void SetStringField(void* obj, void* fieldID, ::StringW val);

  /// @brief Method Throw, addr 0x33bfacc, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t Throw(void* obj);

  /// @brief Method ThrowNew, addr 0x33bfb08, size 0x44, virtual false, abstract: false, final false
  static inline int32_t ThrowNew(void* clazz, ::StringW message);

  /// @brief Method ToBooleanArray, addr 0x33b77c4, size 0x3c, virtual false, abstract: false, final false
  static inline void* ToBooleanArray(::ArrayW<bool, ::Array<bool>*> array);

  /// @brief Method ToByteArray, addr 0x33b760c, size 0x3c, virtual false, abstract: false, final false
  static inline void* ToByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> array);

  /// @brief Method ToCharArray, addr 0x33b71c0, size 0x3c, virtual false, abstract: false, final false
  static inline void* ToCharArray(::ArrayW<char16_t, ::Array<char16_t>*> array);

  /// @brief Method ToDoubleArray, addr 0x33b729c, size 0x3c, virtual false, abstract: false, final false
  static inline void* ToDoubleArray(::ArrayW<double_t, ::Array<double_t>*> array);

  /// @brief Method ToFloatArray, addr 0x33b7378, size 0x3c, virtual false, abstract: false, final false
  static inline void* ToFloatArray(::ArrayW<float_t, ::Array<float_t>*> array);

  /// @brief Method ToIntArray, addr 0x33b78a0, size 0x3c, virtual false, abstract: false, final false
  static inline void* ToIntArray(::ArrayW<int32_t, ::Array<int32_t>*> array);

  /// @brief Method ToLongArray, addr 0x33b7454, size 0x3c, virtual false, abstract: false, final false
  static inline void* ToLongArray(::ArrayW<int64_t, ::Array<int64_t>*> array);

  /// @brief Method ToObjectArray, addr 0x33bffe8, size 0x74, virtual false, abstract: false, final false
  static inline void* ToObjectArray(::ArrayW<void*, ::Array<void*>*> array);

  /// @brief Method ToObjectArray, addr 0x33b70dc, size 0x44, virtual false, abstract: false, final false
  static inline void* ToObjectArray(::ArrayW<void*, ::Array<void*>*> array, void* arrayClass);

  /// @brief Method ToReflectedField, addr 0x33bf9f8, size 0x54, virtual false, abstract: false, final false
  static inline void* ToReflectedField(void* clazz, void* fieldID, bool isStatic);

  /// @brief Method ToReflectedMethod, addr 0x33bf9a4, size 0x54, virtual false, abstract: false, final false
  static inline void* ToReflectedMethod(void* clazz, void* methodID, bool isStatic);

  /// @brief Method ToSByteArray, addr 0x33b76e8, size 0x3c, virtual false, abstract: false, final false
  static inline void* ToSByteArray(::ArrayW<int8_t, ::Array<int8_t>*> array);

  /// @brief Method ToShortArray, addr 0x33b7530, size 0x3c, virtual false, abstract: false, final false
  static inline void* ToShortArray(::ArrayW<int16_t, ::Array<int16_t>*> array);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AndroidJNI, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AndroidJNI);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidJNI*, "UnityEngine", "AndroidJNI");
