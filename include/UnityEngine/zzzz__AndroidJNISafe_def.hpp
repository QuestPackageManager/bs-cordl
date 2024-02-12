#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidJNISafe)
namespace UnityEngine {
struct jvalue;
}
// Forward declare root types
namespace UnityEngine {
class AndroidJNISafe;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AndroidJNISafe);
// Type: UnityEngine::AndroidJNISafe
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14780))
// CS Name: ::UnityEngine::AndroidJNISafe*
class CORDL_TYPE AndroidJNISafe : public ::System::Object {
public:
  // Declarations
  /// @brief Method CheckException, addr 0x2c7a7c8, size 0x358, virtual false, abstract: false, final false
  static inline void CheckException();

  /// @brief Method DeleteGlobalRef, addr 0x2c7ad70, size 0x8c, virtual false, abstract: false, final false
  static inline void DeleteGlobalRef(void* globalref);

  /// @brief Method DeleteWeakGlobalRef, addr 0x2c7ae38, size 0x8c, virtual false, abstract: false, final false
  static inline void DeleteWeakGlobalRef(void* globalref);

  /// @brief Method DeleteLocalRef, addr 0x2c7af00, size 0x8c, virtual false, abstract: false, final false
  static inline void DeleteLocalRef(void* localref);

  /// @brief Method NewString, addr 0x2c7afc8, size 0xa0, virtual false, abstract: false, final false
  static inline void* NewString(::StringW chars);

  /// @brief Method GetStringChars, addr 0x2c7b0a4, size 0xa0, virtual false, abstract: false, final false
  static inline ::StringW GetStringChars(void* str);

  /// @brief Method GetObjectClass, addr 0x2c7b180, size 0xa0, virtual false, abstract: false, final false
  static inline void* GetObjectClass(void* ptr);

  /// @brief Method GetStaticMethodID, addr 0x2c7b25c, size 0xb8, virtual false, abstract: false, final false
  static inline void* GetStaticMethodID(void* clazz, ::StringW name, ::StringW sig);

  /// @brief Method GetMethodID, addr 0x2c7b314, size 0xb8, virtual false, abstract: false, final false
  static inline void* GetMethodID(void* obj, ::StringW name, ::StringW sig);

  /// @brief Method GetFieldID, addr 0x2c7b3cc, size 0xb8, virtual false, abstract: false, final false
  static inline void* GetFieldID(void* clazz, ::StringW name, ::StringW sig);

  /// @brief Method GetStaticFieldID, addr 0x2c7b4d8, size 0xb8, virtual false, abstract: false, final false
  static inline void* GetStaticFieldID(void* clazz, ::StringW name, ::StringW sig);

  /// @brief Method FromReflectedMethod, addr 0x2c7b5e4, size 0xa0, virtual false, abstract: false, final false
  static inline void* FromReflectedMethod(void* refMethod);

  /// @brief Method FindClass, addr 0x2c7b6c0, size 0xa0, virtual false, abstract: false, final false
  static inline void* FindClass(::StringW name);

  /// @brief Method NewObject, addr 0x2c7b760, size 0xb8, virtual false, abstract: false, final false
  static inline void* NewObject(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method SetStaticObjectField, addr 0x2c7b86c, size 0xbc, virtual false, abstract: false, final false
  static inline void SetStaticObjectField(void* clazz, void* fieldID, void* val);

  /// @brief Method SetStaticStringField, addr 0x2c7b97c, size 0xbc, virtual false, abstract: false, final false
  static inline void SetStaticStringField(void* clazz, void* fieldID, ::StringW val);

  /// @brief Method SetStaticCharField, addr 0x2c7ba8c, size 0xbc, virtual false, abstract: false, final false
  static inline void SetStaticCharField(void* clazz, void* fieldID, char16_t val);

  /// @brief Method SetStaticDoubleField, addr 0x2c7bb9c, size 0xbc, virtual false, abstract: false, final false
  static inline void SetStaticDoubleField(void* clazz, void* fieldID, double_t val);

  /// @brief Method SetStaticFloatField, addr 0x2c7bcac, size 0xbc, virtual false, abstract: false, final false
  static inline void SetStaticFloatField(void* clazz, void* fieldID, float_t val);

  /// @brief Method SetStaticLongField, addr 0x2c7bdbc, size 0xbc, virtual false, abstract: false, final false
  static inline void SetStaticLongField(void* clazz, void* fieldID, int64_t val);

  /// @brief Method SetStaticShortField, addr 0x2c7becc, size 0xbc, virtual false, abstract: false, final false
  static inline void SetStaticShortField(void* clazz, void* fieldID, int16_t val);

  /// @brief Method SetStaticSByteField, addr 0x2c7bfdc, size 0xbc, virtual false, abstract: false, final false
  static inline void SetStaticSByteField(void* clazz, void* fieldID, int8_t val);

  /// @brief Method SetStaticBooleanField, addr 0x2c7c0ec, size 0xbc, virtual false, abstract: false, final false
  static inline void SetStaticBooleanField(void* clazz, void* fieldID, bool val);

  /// @brief Method SetStaticIntField, addr 0x2c7c1fc, size 0xbc, virtual false, abstract: false, final false
  static inline void SetStaticIntField(void* clazz, void* fieldID, int32_t val);

  /// @brief Method GetStaticObjectField, addr 0x2c7c30c, size 0xa8, virtual false, abstract: false, final false
  static inline void* GetStaticObjectField(void* clazz, void* fieldID);

  /// @brief Method GetStaticStringField, addr 0x2c7c3f8, size 0xa8, virtual false, abstract: false, final false
  static inline ::StringW GetStaticStringField(void* clazz, void* fieldID);

  /// @brief Method GetStaticCharField, addr 0x2c7c4e4, size 0xa8, virtual false, abstract: false, final false
  static inline char16_t GetStaticCharField(void* clazz, void* fieldID);

  /// @brief Method GetStaticDoubleField, addr 0x2c7c5d0, size 0xb4, virtual false, abstract: false, final false
  static inline double_t GetStaticDoubleField(void* clazz, void* fieldID);

  /// @brief Method GetStaticFloatField, addr 0x2c7c6c8, size 0xb4, virtual false, abstract: false, final false
  static inline float_t GetStaticFloatField(void* clazz, void* fieldID);

  /// @brief Method GetStaticLongField, addr 0x2c7c7c0, size 0xa8, virtual false, abstract: false, final false
  static inline int64_t GetStaticLongField(void* clazz, void* fieldID);

  /// @brief Method GetStaticShortField, addr 0x2c7c8ac, size 0xa8, virtual false, abstract: false, final false
  static inline int16_t GetStaticShortField(void* clazz, void* fieldID);

  /// @brief Method GetStaticSByteField, addr 0x2c7c998, size 0xa8, virtual false, abstract: false, final false
  static inline int8_t GetStaticSByteField(void* clazz, void* fieldID);

  /// @brief Method GetStaticBooleanField, addr 0x2c7ca84, size 0xa8, virtual false, abstract: false, final false
  static inline bool GetStaticBooleanField(void* clazz, void* fieldID);

  /// @brief Method GetStaticIntField, addr 0x2c7cb70, size 0xa8, virtual false, abstract: false, final false
  static inline int32_t GetStaticIntField(void* clazz, void* fieldID);

  /// @brief Method CallStaticVoidMethod, addr 0x2c7cc5c, size 0xbc, virtual false, abstract: false, final false
  static inline void CallStaticVoidMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticObjectMethod, addr 0x2c7cd6c, size 0xb8, virtual false, abstract: false, final false
  static inline void* CallStaticObjectMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticStringMethod, addr 0x2c7ce78, size 0xb8, virtual false, abstract: false, final false
  static inline ::StringW CallStaticStringMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticCharMethod, addr 0x2c7cf30, size 0xb8, virtual false, abstract: false, final false
  static inline char16_t CallStaticCharMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticDoubleMethod, addr 0x2c7d03c, size 0xc4, virtual false, abstract: false, final false
  static inline double_t CallStaticDoubleMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticFloatMethod, addr 0x2c7d154, size 0xc4, virtual false, abstract: false, final false
  static inline float_t CallStaticFloatMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticLongMethod, addr 0x2c7d26c, size 0xb8, virtual false, abstract: false, final false
  static inline int64_t CallStaticLongMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticShortMethod, addr 0x2c7d378, size 0xb8, virtual false, abstract: false, final false
  static inline int16_t CallStaticShortMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticSByteMethod, addr 0x2c7d484, size 0xb8, virtual false, abstract: false, final false
  static inline int8_t CallStaticSByteMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticBooleanMethod, addr 0x2c7d590, size 0xb8, virtual false, abstract: false, final false
  static inline bool CallStaticBooleanMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticIntMethod, addr 0x2c7d69c, size 0xb8, virtual false, abstract: false, final false
  static inline int32_t CallStaticIntMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method SetObjectField, addr 0x2c7d7a8, size 0xbc, virtual false, abstract: false, final false
  static inline void SetObjectField(void* obj, void* fieldID, void* val);

  /// @brief Method SetStringField, addr 0x2c7d8b8, size 0xbc, virtual false, abstract: false, final false
  static inline void SetStringField(void* obj, void* fieldID, ::StringW val);

  /// @brief Method SetCharField, addr 0x2c7d9c8, size 0xbc, virtual false, abstract: false, final false
  static inline void SetCharField(void* obj, void* fieldID, char16_t val);

  /// @brief Method SetDoubleField, addr 0x2c7dad8, size 0xbc, virtual false, abstract: false, final false
  static inline void SetDoubleField(void* obj, void* fieldID, double_t val);

  /// @brief Method SetFloatField, addr 0x2c7dbe8, size 0xbc, virtual false, abstract: false, final false
  static inline void SetFloatField(void* obj, void* fieldID, float_t val);

  /// @brief Method SetLongField, addr 0x2c7dcf8, size 0xbc, virtual false, abstract: false, final false
  static inline void SetLongField(void* obj, void* fieldID, int64_t val);

  /// @brief Method SetShortField, addr 0x2c7de08, size 0xbc, virtual false, abstract: false, final false
  static inline void SetShortField(void* obj, void* fieldID, int16_t val);

  /// @brief Method SetSByteField, addr 0x2c7df18, size 0xbc, virtual false, abstract: false, final false
  static inline void SetSByteField(void* obj, void* fieldID, int8_t val);

  /// @brief Method SetBooleanField, addr 0x2c7e028, size 0xbc, virtual false, abstract: false, final false
  static inline void SetBooleanField(void* obj, void* fieldID, bool val);

  /// @brief Method SetIntField, addr 0x2c7e138, size 0xbc, virtual false, abstract: false, final false
  static inline void SetIntField(void* obj, void* fieldID, int32_t val);

  /// @brief Method GetObjectField, addr 0x2c7e248, size 0xa8, virtual false, abstract: false, final false
  static inline void* GetObjectField(void* obj, void* fieldID);

  /// @brief Method GetStringField, addr 0x2c7e334, size 0xa8, virtual false, abstract: false, final false
  static inline ::StringW GetStringField(void* obj, void* fieldID);

  /// @brief Method GetCharField, addr 0x2c7e420, size 0xa8, virtual false, abstract: false, final false
  static inline char16_t GetCharField(void* obj, void* fieldID);

  /// @brief Method GetDoubleField, addr 0x2c7e50c, size 0xb4, virtual false, abstract: false, final false
  static inline double_t GetDoubleField(void* obj, void* fieldID);

  /// @brief Method GetFloatField, addr 0x2c7e604, size 0xb4, virtual false, abstract: false, final false
  static inline float_t GetFloatField(void* obj, void* fieldID);

  /// @brief Method GetLongField, addr 0x2c7e6fc, size 0xa8, virtual false, abstract: false, final false
  static inline int64_t GetLongField(void* obj, void* fieldID);

  /// @brief Method GetShortField, addr 0x2c7e7e8, size 0xa8, virtual false, abstract: false, final false
  static inline int16_t GetShortField(void* obj, void* fieldID);

  /// @brief Method GetSByteField, addr 0x2c7e8d4, size 0xa8, virtual false, abstract: false, final false
  static inline int8_t GetSByteField(void* obj, void* fieldID);

  /// @brief Method GetBooleanField, addr 0x2c7e9c0, size 0xa8, virtual false, abstract: false, final false
  static inline bool GetBooleanField(void* obj, void* fieldID);

  /// @brief Method GetIntField, addr 0x2c7eaac, size 0xa8, virtual false, abstract: false, final false
  static inline int32_t GetIntField(void* obj, void* fieldID);

  /// @brief Method CallVoidMethod, addr 0x2c7eb98, size 0xbc, virtual false, abstract: false, final false
  static inline void CallVoidMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallObjectMethod, addr 0x2c7eca8, size 0xb8, virtual false, abstract: false, final false
  static inline void* CallObjectMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStringMethod, addr 0x2c7edb4, size 0xb8, virtual false, abstract: false, final false
  static inline ::StringW CallStringMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallCharMethod, addr 0x2c7ee6c, size 0xb8, virtual false, abstract: false, final false
  static inline char16_t CallCharMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallDoubleMethod, addr 0x2c7ef78, size 0xc4, virtual false, abstract: false, final false
  static inline double_t CallDoubleMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallFloatMethod, addr 0x2c7f090, size 0xc4, virtual false, abstract: false, final false
  static inline float_t CallFloatMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallLongMethod, addr 0x2c7f1a8, size 0xb8, virtual false, abstract: false, final false
  static inline int64_t CallLongMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallShortMethod, addr 0x2c7f2b4, size 0xb8, virtual false, abstract: false, final false
  static inline int16_t CallShortMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallSByteMethod, addr 0x2c7f3c0, size 0xb8, virtual false, abstract: false, final false
  static inline int8_t CallSByteMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallBooleanMethod, addr 0x2c7f4cc, size 0xb8, virtual false, abstract: false, final false
  static inline bool CallBooleanMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallIntMethod, addr 0x2c7f5d8, size 0xb8, virtual false, abstract: false, final false
  static inline int32_t CallIntMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method FromCharArray, addr 0x2c7f6e4, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<char16_t, ::Array<char16_t>*> FromCharArray(void* array);

  /// @brief Method FromDoubleArray, addr 0x2c7f7c0, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<double_t, ::Array<double_t>*> FromDoubleArray(void* array);

  /// @brief Method FromFloatArray, addr 0x2c7f89c, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<float_t, ::Array<float_t>*> FromFloatArray(void* array);

  /// @brief Method FromLongArray, addr 0x2c7f978, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<int64_t, ::Array<int64_t>*> FromLongArray(void* array);

  /// @brief Method FromShortArray, addr 0x2c7fa54, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<int16_t, ::Array<int16_t>*> FromShortArray(void* array);

  /// @brief Method FromByteArray, addr 0x2c7fb30, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FromByteArray(void* array);

  /// @brief Method FromSByteArray, addr 0x2c7fc0c, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<int8_t, ::Array<int8_t>*> FromSByteArray(void* array);

  /// @brief Method FromBooleanArray, addr 0x2c7fce8, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<bool, ::Array<bool>*> FromBooleanArray(void* array);

  /// @brief Method FromIntArray, addr 0x2c7fdc4, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> FromIntArray(void* array);

  /// @brief Method ToObjectArray, addr 0x2c7fea0, size 0xa8, virtual false, abstract: false, final false
  static inline void* ToObjectArray(::ArrayW<void*, ::Array<void*>*> array, void* type);

  /// @brief Method ToCharArray, addr 0x2c7ff8c, size 0xa0, virtual false, abstract: false, final false
  static inline void* ToCharArray(::ArrayW<char16_t, ::Array<char16_t>*> array);

  /// @brief Method ToDoubleArray, addr 0x2c80068, size 0xa0, virtual false, abstract: false, final false
  static inline void* ToDoubleArray(::ArrayW<double_t, ::Array<double_t>*> array);

  /// @brief Method ToFloatArray, addr 0x2c80144, size 0xa0, virtual false, abstract: false, final false
  static inline void* ToFloatArray(::ArrayW<float_t, ::Array<float_t>*> array);

  /// @brief Method ToLongArray, addr 0x2c80220, size 0xa0, virtual false, abstract: false, final false
  static inline void* ToLongArray(::ArrayW<int64_t, ::Array<int64_t>*> array);

  /// @brief Method ToShortArray, addr 0x2c802fc, size 0xa0, virtual false, abstract: false, final false
  static inline void* ToShortArray(::ArrayW<int16_t, ::Array<int16_t>*> array);

  /// @brief Method ToByteArray, addr 0x2c803d8, size 0xa0, virtual false, abstract: false, final false
  static inline void* ToByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> array);

  /// @brief Method ToSByteArray, addr 0x2c804b4, size 0xa0, virtual false, abstract: false, final false
  static inline void* ToSByteArray(::ArrayW<int8_t, ::Array<int8_t>*> array);

  /// @brief Method ToBooleanArray, addr 0x2c80590, size 0xa0, virtual false, abstract: false, final false
  static inline void* ToBooleanArray(::ArrayW<bool, ::Array<bool>*> array);

  /// @brief Method ToIntArray, addr 0x2c8066c, size 0xa0, virtual false, abstract: false, final false
  static inline void* ToIntArray(::ArrayW<int32_t, ::Array<int32_t>*> array);

  /// @brief Method GetObjectArrayElement, addr 0x2c80748, size 0xa8, virtual false, abstract: false, final false
  static inline void* GetObjectArrayElement(void* array, int32_t index);

  /// @brief Method GetArrayLength, addr 0x2c80834, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t GetArrayLength(void* array);

  // Ctor Parameters [CppParam { name: "", ty: "AndroidJNISafe", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidJNISafe(AndroidJNISafe&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidJNISafe", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidJNISafe(AndroidJNISafe const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidJNISafe();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AndroidJNISafe, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AndroidJNISafe);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidJNISafe*, "UnityEngine", "AndroidJNISafe");
