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
// CS Name: ::UnityEngine::AndroidJNISafe*
class CORDL_TYPE AndroidJNISafe : public ::System::Object {
public:
  // Declarations
  /// @brief Method CallBooleanMethod, addr 0x31adbdc, size 0xb8, virtual false, abstract: false, final false
  static inline bool CallBooleanMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallCharMethod, addr 0x31ad57c, size 0xb8, virtual false, abstract: false, final false
  static inline char16_t CallCharMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallDoubleMethod, addr 0x31ad688, size 0xc4, virtual false, abstract: false, final false
  static inline double_t CallDoubleMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallFloatMethod, addr 0x31ad7a0, size 0xc4, virtual false, abstract: false, final false
  static inline float_t CallFloatMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallIntMethod, addr 0x31adce8, size 0xb8, virtual false, abstract: false, final false
  static inline int32_t CallIntMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallLongMethod, addr 0x31ad8b8, size 0xb8, virtual false, abstract: false, final false
  static inline int64_t CallLongMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallObjectMethod, addr 0x31ad3b8, size 0xb8, virtual false, abstract: false, final false
  static inline void* CallObjectMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallSByteMethod, addr 0x31adad0, size 0xb8, virtual false, abstract: false, final false
  static inline int8_t CallSByteMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallShortMethod, addr 0x31ad9c4, size 0xb8, virtual false, abstract: false, final false
  static inline int16_t CallShortMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticBooleanMethod, addr 0x31abca0, size 0xb8, virtual false, abstract: false, final false
  static inline bool CallStaticBooleanMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticCharMethod, addr 0x31ab640, size 0xb8, virtual false, abstract: false, final false
  static inline char16_t CallStaticCharMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticDoubleMethod, addr 0x31ab74c, size 0xc4, virtual false, abstract: false, final false
  static inline double_t CallStaticDoubleMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticFloatMethod, addr 0x31ab864, size 0xc4, virtual false, abstract: false, final false
  static inline float_t CallStaticFloatMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticIntMethod, addr 0x31abdac, size 0xb8, virtual false, abstract: false, final false
  static inline int32_t CallStaticIntMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticLongMethod, addr 0x31ab97c, size 0xb8, virtual false, abstract: false, final false
  static inline int64_t CallStaticLongMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticObjectMethod, addr 0x31ab47c, size 0xb8, virtual false, abstract: false, final false
  static inline void* CallStaticObjectMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticSByteMethod, addr 0x31abb94, size 0xb8, virtual false, abstract: false, final false
  static inline int8_t CallStaticSByteMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticShortMethod, addr 0x31aba88, size 0xb8, virtual false, abstract: false, final false
  static inline int16_t CallStaticShortMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticStringMethod, addr 0x31ab588, size 0xb8, virtual false, abstract: false, final false
  static inline ::StringW CallStaticStringMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStaticVoidMethod, addr 0x31ab36c, size 0xbc, virtual false, abstract: false, final false
  static inline void CallStaticVoidMethod(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallStringMethod, addr 0x31ad4c4, size 0xb8, virtual false, abstract: false, final false
  static inline ::StringW CallStringMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CallVoidMethod, addr 0x31ad2a8, size 0xbc, virtual false, abstract: false, final false
  static inline void CallVoidMethod(void* obj, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method CheckException, addr 0x31a8ed8, size 0x358, virtual false, abstract: false, final false
  static inline void CheckException();

  /// @brief Method DeleteGlobalRef, addr 0x31a9480, size 0x8c, virtual false, abstract: false, final false
  static inline void DeleteGlobalRef(void* globalref);

  /// @brief Method DeleteLocalRef, addr 0x31a9610, size 0x8c, virtual false, abstract: false, final false
  static inline void DeleteLocalRef(void* localref);

  /// @brief Method DeleteWeakGlobalRef, addr 0x31a9548, size 0x8c, virtual false, abstract: false, final false
  static inline void DeleteWeakGlobalRef(void* globalref);

  /// @brief Method FindClass, addr 0x31a9dd0, size 0xa0, virtual false, abstract: false, final false
  static inline void* FindClass(::StringW name);

  /// @brief Method FromBooleanArray, addr 0x31ae3f8, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<bool, ::Array<bool>*> FromBooleanArray(void* array);

  /// @brief Method FromByteArray, addr 0x31ae240, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> FromByteArray(void* array);

  /// @brief Method FromCharArray, addr 0x31addf4, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<char16_t, ::Array<char16_t>*> FromCharArray(void* array);

  /// @brief Method FromDoubleArray, addr 0x31aded0, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<double_t, ::Array<double_t>*> FromDoubleArray(void* array);

  /// @brief Method FromFloatArray, addr 0x31adfac, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<float_t, ::Array<float_t>*> FromFloatArray(void* array);

  /// @brief Method FromIntArray, addr 0x31ae4d4, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> FromIntArray(void* array);

  /// @brief Method FromLongArray, addr 0x31ae088, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<int64_t, ::Array<int64_t>*> FromLongArray(void* array);

  /// @brief Method FromReflectedMethod, addr 0x31a9cf4, size 0xa0, virtual false, abstract: false, final false
  static inline void* FromReflectedMethod(void* refMethod);

  /// @brief Method FromSByteArray, addr 0x31ae31c, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<int8_t, ::Array<int8_t>*> FromSByteArray(void* array);

  /// @brief Method FromShortArray, addr 0x31ae164, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<int16_t, ::Array<int16_t>*> FromShortArray(void* array);

  /// @brief Method GetArrayLength, addr 0x31aef44, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t GetArrayLength(void* array);

  /// @brief Method GetBooleanField, addr 0x31ad0d0, size 0xa8, virtual false, abstract: false, final false
  static inline bool GetBooleanField(void* obj, void* fieldID);

  /// @brief Method GetCharField, addr 0x31acb30, size 0xa8, virtual false, abstract: false, final false
  static inline char16_t GetCharField(void* obj, void* fieldID);

  /// @brief Method GetDoubleField, addr 0x31acc1c, size 0xb4, virtual false, abstract: false, final false
  static inline double_t GetDoubleField(void* obj, void* fieldID);

  /// @brief Method GetFieldID, addr 0x31a9adc, size 0xb8, virtual false, abstract: false, final false
  static inline void* GetFieldID(void* clazz, ::StringW name, ::StringW sig);

  /// @brief Method GetFloatField, addr 0x31acd14, size 0xb4, virtual false, abstract: false, final false
  static inline float_t GetFloatField(void* obj, void* fieldID);

  /// @brief Method GetIntField, addr 0x31ad1bc, size 0xa8, virtual false, abstract: false, final false
  static inline int32_t GetIntField(void* obj, void* fieldID);

  /// @brief Method GetLongField, addr 0x31ace0c, size 0xa8, virtual false, abstract: false, final false
  static inline int64_t GetLongField(void* obj, void* fieldID);

  /// @brief Method GetMethodID, addr 0x31a9a24, size 0xb8, virtual false, abstract: false, final false
  static inline void* GetMethodID(void* obj, ::StringW name, ::StringW sig);

  /// @brief Method GetObjectArrayElement, addr 0x31aee58, size 0xa8, virtual false, abstract: false, final false
  static inline void* GetObjectArrayElement(void* array, int32_t index);

  /// @brief Method GetObjectClass, addr 0x31a9890, size 0xa0, virtual false, abstract: false, final false
  static inline void* GetObjectClass(void* ptr);

  /// @brief Method GetObjectField, addr 0x31ac958, size 0xa8, virtual false, abstract: false, final false
  static inline void* GetObjectField(void* obj, void* fieldID);

  /// @brief Method GetSByteField, addr 0x31acfe4, size 0xa8, virtual false, abstract: false, final false
  static inline int8_t GetSByteField(void* obj, void* fieldID);

  /// @brief Method GetShortField, addr 0x31acef8, size 0xa8, virtual false, abstract: false, final false
  static inline int16_t GetShortField(void* obj, void* fieldID);

  /// @brief Method GetStaticBooleanField, addr 0x31ab194, size 0xa8, virtual false, abstract: false, final false
  static inline bool GetStaticBooleanField(void* clazz, void* fieldID);

  /// @brief Method GetStaticCharField, addr 0x31aabf4, size 0xa8, virtual false, abstract: false, final false
  static inline char16_t GetStaticCharField(void* clazz, void* fieldID);

  /// @brief Method GetStaticDoubleField, addr 0x31aace0, size 0xb4, virtual false, abstract: false, final false
  static inline double_t GetStaticDoubleField(void* clazz, void* fieldID);

  /// @brief Method GetStaticFieldID, addr 0x31a9be8, size 0xb8, virtual false, abstract: false, final false
  static inline void* GetStaticFieldID(void* clazz, ::StringW name, ::StringW sig);

  /// @brief Method GetStaticFloatField, addr 0x31aadd8, size 0xb4, virtual false, abstract: false, final false
  static inline float_t GetStaticFloatField(void* clazz, void* fieldID);

  /// @brief Method GetStaticIntField, addr 0x31ab280, size 0xa8, virtual false, abstract: false, final false
  static inline int32_t GetStaticIntField(void* clazz, void* fieldID);

  /// @brief Method GetStaticLongField, addr 0x31aaed0, size 0xa8, virtual false, abstract: false, final false
  static inline int64_t GetStaticLongField(void* clazz, void* fieldID);

  /// @brief Method GetStaticMethodID, addr 0x31a996c, size 0xb8, virtual false, abstract: false, final false
  static inline void* GetStaticMethodID(void* clazz, ::StringW name, ::StringW sig);

  /// @brief Method GetStaticObjectField, addr 0x31aaa1c, size 0xa8, virtual false, abstract: false, final false
  static inline void* GetStaticObjectField(void* clazz, void* fieldID);

  /// @brief Method GetStaticSByteField, addr 0x31ab0a8, size 0xa8, virtual false, abstract: false, final false
  static inline int8_t GetStaticSByteField(void* clazz, void* fieldID);

  /// @brief Method GetStaticShortField, addr 0x31aafbc, size 0xa8, virtual false, abstract: false, final false
  static inline int16_t GetStaticShortField(void* clazz, void* fieldID);

  /// @brief Method GetStaticStringField, addr 0x31aab08, size 0xa8, virtual false, abstract: false, final false
  static inline ::StringW GetStaticStringField(void* clazz, void* fieldID);

  /// @brief Method GetStringChars, addr 0x31a97b4, size 0xa0, virtual false, abstract: false, final false
  static inline ::StringW GetStringChars(void* str);

  /// @brief Method GetStringField, addr 0x31aca44, size 0xa8, virtual false, abstract: false, final false
  static inline ::StringW GetStringField(void* obj, void* fieldID);

  /// @brief Method NewObject, addr 0x31a9e70, size 0xb8, virtual false, abstract: false, final false
  static inline void* NewObject(void* clazz, void* methodID, ::ArrayW<::UnityEngine::jvalue, ::Array<::UnityEngine::jvalue>*> args);

  /// @brief Method NewString, addr 0x31a96d8, size 0xa0, virtual false, abstract: false, final false
  static inline void* NewString(::StringW chars);

  /// @brief Method SetBooleanField, addr 0x31ac738, size 0xbc, virtual false, abstract: false, final false
  static inline void SetBooleanField(void* obj, void* fieldID, bool val);

  /// @brief Method SetCharField, addr 0x31ac0d8, size 0xbc, virtual false, abstract: false, final false
  static inline void SetCharField(void* obj, void* fieldID, char16_t val);

  /// @brief Method SetDoubleField, addr 0x31ac1e8, size 0xbc, virtual false, abstract: false, final false
  static inline void SetDoubleField(void* obj, void* fieldID, double_t val);

  /// @brief Method SetFloatField, addr 0x31ac2f8, size 0xbc, virtual false, abstract: false, final false
  static inline void SetFloatField(void* obj, void* fieldID, float_t val);

  /// @brief Method SetIntField, addr 0x31ac848, size 0xbc, virtual false, abstract: false, final false
  static inline void SetIntField(void* obj, void* fieldID, int32_t val);

  /// @brief Method SetLongField, addr 0x31ac408, size 0xbc, virtual false, abstract: false, final false
  static inline void SetLongField(void* obj, void* fieldID, int64_t val);

  /// @brief Method SetObjectField, addr 0x31abeb8, size 0xbc, virtual false, abstract: false, final false
  static inline void SetObjectField(void* obj, void* fieldID, void* val);

  /// @brief Method SetSByteField, addr 0x31ac628, size 0xbc, virtual false, abstract: false, final false
  static inline void SetSByteField(void* obj, void* fieldID, int8_t val);

  /// @brief Method SetShortField, addr 0x31ac518, size 0xbc, virtual false, abstract: false, final false
  static inline void SetShortField(void* obj, void* fieldID, int16_t val);

  /// @brief Method SetStaticBooleanField, addr 0x31aa7fc, size 0xbc, virtual false, abstract: false, final false
  static inline void SetStaticBooleanField(void* clazz, void* fieldID, bool val);

  /// @brief Method SetStaticCharField, addr 0x31aa19c, size 0xbc, virtual false, abstract: false, final false
  static inline void SetStaticCharField(void* clazz, void* fieldID, char16_t val);

  /// @brief Method SetStaticDoubleField, addr 0x31aa2ac, size 0xbc, virtual false, abstract: false, final false
  static inline void SetStaticDoubleField(void* clazz, void* fieldID, double_t val);

  /// @brief Method SetStaticFloatField, addr 0x31aa3bc, size 0xbc, virtual false, abstract: false, final false
  static inline void SetStaticFloatField(void* clazz, void* fieldID, float_t val);

  /// @brief Method SetStaticIntField, addr 0x31aa90c, size 0xbc, virtual false, abstract: false, final false
  static inline void SetStaticIntField(void* clazz, void* fieldID, int32_t val);

  /// @brief Method SetStaticLongField, addr 0x31aa4cc, size 0xbc, virtual false, abstract: false, final false
  static inline void SetStaticLongField(void* clazz, void* fieldID, int64_t val);

  /// @brief Method SetStaticObjectField, addr 0x31a9f7c, size 0xbc, virtual false, abstract: false, final false
  static inline void SetStaticObjectField(void* clazz, void* fieldID, void* val);

  /// @brief Method SetStaticSByteField, addr 0x31aa6ec, size 0xbc, virtual false, abstract: false, final false
  static inline void SetStaticSByteField(void* clazz, void* fieldID, int8_t val);

  /// @brief Method SetStaticShortField, addr 0x31aa5dc, size 0xbc, virtual false, abstract: false, final false
  static inline void SetStaticShortField(void* clazz, void* fieldID, int16_t val);

  /// @brief Method SetStaticStringField, addr 0x31aa08c, size 0xbc, virtual false, abstract: false, final false
  static inline void SetStaticStringField(void* clazz, void* fieldID, ::StringW val);

  /// @brief Method SetStringField, addr 0x31abfc8, size 0xbc, virtual false, abstract: false, final false
  static inline void SetStringField(void* obj, void* fieldID, ::StringW val);

  /// @brief Method ToBooleanArray, addr 0x31aeca0, size 0xa0, virtual false, abstract: false, final false
  static inline void* ToBooleanArray(::ArrayW<bool, ::Array<bool>*> array);

  /// @brief Method ToByteArray, addr 0x31aeae8, size 0xa0, virtual false, abstract: false, final false
  static inline void* ToByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> array);

  /// @brief Method ToCharArray, addr 0x31ae69c, size 0xa0, virtual false, abstract: false, final false
  static inline void* ToCharArray(::ArrayW<char16_t, ::Array<char16_t>*> array);

  /// @brief Method ToDoubleArray, addr 0x31ae778, size 0xa0, virtual false, abstract: false, final false
  static inline void* ToDoubleArray(::ArrayW<double_t, ::Array<double_t>*> array);

  /// @brief Method ToFloatArray, addr 0x31ae854, size 0xa0, virtual false, abstract: false, final false
  static inline void* ToFloatArray(::ArrayW<float_t, ::Array<float_t>*> array);

  /// @brief Method ToIntArray, addr 0x31aed7c, size 0xa0, virtual false, abstract: false, final false
  static inline void* ToIntArray(::ArrayW<int32_t, ::Array<int32_t>*> array);

  /// @brief Method ToLongArray, addr 0x31ae930, size 0xa0, virtual false, abstract: false, final false
  static inline void* ToLongArray(::ArrayW<int64_t, ::Array<int64_t>*> array);

  /// @brief Method ToObjectArray, addr 0x31ae5b0, size 0xa8, virtual false, abstract: false, final false
  static inline void* ToObjectArray(::ArrayW<void*, ::Array<void*>*> array, void* type);

  /// @brief Method ToSByteArray, addr 0x31aebc4, size 0xa0, virtual false, abstract: false, final false
  static inline void* ToSByteArray(::ArrayW<int8_t, ::Array<int8_t>*> array);

  /// @brief Method ToShortArray, addr 0x31aea0c, size 0xa0, virtual false, abstract: false, final false
  static inline void* ToShortArray(::ArrayW<int16_t, ::Array<int16_t>*> array);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidJNISafe();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidJNISafe", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidJNISafe(AndroidJNISafe&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidJNISafe", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidJNISafe(AndroidJNISafe const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AndroidJNISafe, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::AndroidJNISafe);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidJNISafe*, "UnityEngine", "AndroidJNISafe");
