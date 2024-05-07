#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/Marshal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Marshal)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System::Runtime::InteropServices {
class ICustomMarshaler;
}
namespace System::Runtime::InteropServices {
class __Marshal__MarshalerInstanceKeyComparer;
}
namespace System::Runtime::InteropServices {
class __Marshal__SecureStringAllocator;
}
namespace System::Runtime::InteropServices {
class __Marshal____c;
}
namespace System::Security {
class SecureString;
}
namespace System {
class Array;
}
namespace System {
class Delegate;
}
namespace System {
class Exception;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class Marshal;
}
namespace System::Runtime::InteropServices {
class __Marshal__MarshalerInstanceKeyComparer;
}
namespace System::Runtime::InteropServices {
class __Marshal__SecureStringAllocator;
}
namespace System::Runtime::InteropServices {
class __Marshal____c;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::Marshal);
MARK_REF_PTR_T(::System::Runtime::InteropServices::__Marshal__MarshalerInstanceKeyComparer);
MARK_REF_PTR_T(::System::Runtime::InteropServices::__Marshal__SecureStringAllocator);
MARK_REF_PTR_T(::System::Runtime::InteropServices::__Marshal____c);
// Type: ::SecureStringAllocator
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: ::Marshal::SecureStringAllocator*
class CORDL_TYPE __Marshal__SecureStringAllocator : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x285b068, size 0x14, virtual true, abstract: false, final false
  inline void* Invoke(int32_t len);

  static inline ::System::Runtime::InteropServices::__Marshal__SecureStringAllocator* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x285afa4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Marshal__SecureStringAllocator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Marshal__SecureStringAllocator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Marshal__SecureStringAllocator(__Marshal__SecureStringAllocator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Marshal__SecureStringAllocator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Marshal__SecureStringAllocator(__Marshal__SecureStringAllocator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::__Marshal__SecureStringAllocator, 0x80>, "Size mismatch!");

} // namespace System::Runtime::InteropServices
// Type: ::MarshalerInstanceKeyComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: ::Marshal::MarshalerInstanceKeyComparer*
class CORDL_TYPE __Marshal__MarshalerInstanceKeyComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::System::ValueTuple_2<::System::Type*,::StringW>>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<::System::ValueTuple_2<::System::Type*, ::StringW>>*() noexcept;

  /// @brief Method Equals, addr 0x285b07c, size 0x74, virtual true, abstract: false, final true
  inline bool Equals(::System::ValueTuple_2<::System::Type*, ::StringW> lhs, ::System::ValueTuple_2<::System::Type*, ::StringW> rhs);

  /// @brief Method GetHashCode, addr 0x285b0f0, size 0x54, virtual true, abstract: false, final true
  inline int32_t GetHashCode(::System::ValueTuple_2<::System::Type*, ::StringW> key);

  static inline ::System::Runtime::InteropServices::__Marshal__MarshalerInstanceKeyComparer* New_ctor();

  /// @brief Method .ctor, addr 0x285b144, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::System::ValueTuple_2<::System::Type*,::StringW>>"
  constexpr ::System::Collections::Generic::IEqualityComparer_1<::System::ValueTuple_2<::System::Type*, ::StringW>>*
  i___System__Collections__Generic__IEqualityComparer_1___System__ValueTuple_2___System__Type____StringW__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Marshal__MarshalerInstanceKeyComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Marshal__MarshalerInstanceKeyComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Marshal__MarshalerInstanceKeyComparer(__Marshal__MarshalerInstanceKeyComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Marshal__MarshalerInstanceKeyComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Marshal__MarshalerInstanceKeyComparer(__Marshal__MarshalerInstanceKeyComparer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::__Marshal__MarshalerInstanceKeyComparer, 0x10>, "Size mismatch!");

} // namespace System::Runtime::InteropServices
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: ::Marshal::<>c*
class CORDL_TYPE __Marshal____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::Runtime::InteropServices::__Marshal____c* __9;

  /// @brief Field <>9__201_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__201_0, put = setStaticF___9__201_0))::System::Func_1<
      ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, ::StringW>, ::System::Runtime::InteropServices::ICustomMarshaler*>*>* __9__201_0;

  static inline ::System::Runtime::InteropServices::__Marshal____c* New_ctor();

  /// @brief Method <GetCustomMarshalerInstance>b__201_0, addr 0x285b1b8, size 0xa0, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, ::StringW>, ::System::Runtime::InteropServices::ICustomMarshaler*>*
  _GetCustomMarshalerInstance_b__201_0();

  /// @brief Method .ctor, addr 0x285b1b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Runtime::InteropServices::__Marshal____c* getStaticF___9();

  static inline ::System::Func_1<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, ::StringW>, ::System::Runtime::InteropServices::ICustomMarshaler*>*>*
  getStaticF___9__201_0();

  static inline void setStaticF___9(::System::Runtime::InteropServices::__Marshal____c* value);

  static inline void setStaticF___9__201_0(
      ::System::Func_1<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, ::StringW>, ::System::Runtime::InteropServices::ICustomMarshaler*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Marshal____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Marshal____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Marshal____c(__Marshal____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Marshal____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Marshal____c(__Marshal____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::__Marshal____c, 0x10>, "Size mismatch!");

} // namespace System::Runtime::InteropServices
// Type: System.Runtime.InteropServices::Marshal
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: ::System.Runtime.InteropServices::Marshal*
class CORDL_TYPE Marshal : public ::System::Object {
public:
  // Declarations
  using MarshalerInstanceKeyComparer = ::System::Runtime::InteropServices::__Marshal__MarshalerInstanceKeyComparer;

  using SecureStringAllocator = ::System::Runtime::InteropServices::__Marshal__SecureStringAllocator;

  using __c = ::System::Runtime::InteropServices::__Marshal____c;

  /// @brief Field MarshalerInstanceCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MarshalerInstanceCache,
                             put = setStaticF_MarshalerInstanceCache))::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, ::StringW>,
                                                                                                                   ::System::Runtime::InteropServices::ICustomMarshaler*>* MarshalerInstanceCache;

  /// @brief Field MarshalerInstanceCacheLock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MarshalerInstanceCacheLock, put = setStaticF_MarshalerInstanceCacheLock))::System::Object* MarshalerInstanceCacheLock;

  /// @brief Field SystemDefaultCharSize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_SystemDefaultCharSize, put = setStaticF_SystemDefaultCharSize)) int32_t SystemDefaultCharSize;

  /// @brief Field SystemMaxDBCSCharSize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_SystemMaxDBCSCharSize, put = setStaticF_SystemMaxDBCSCharSize)) int32_t SystemMaxDBCSCharSize;

  /// @brief Method AllocCoTaskMem, addr 0x2859300, size 0x4, virtual false, abstract: false, final false
  static inline void* AllocCoTaskMem(int32_t cb);

  /// @brief Method AllocHGlobal, addr 0x2859308, size 0x68, virtual false, abstract: false, final false
  static inline void* AllocHGlobal(int32_t cb);

  /// @brief Method AllocHGlobal, addr 0x2859304, size 0x4, virtual false, abstract: false, final false
  static inline void* AllocHGlobal(void* cb);

  /// @brief Method BufferToBSTR, addr 0x2859fe4, size 0x4, virtual false, abstract: false, final false
  static inline void* BufferToBSTR(::cordl_internals::Ptr<char16_t> ptr, int32_t slen);

  /// @brief Method ClearAnsi, addr 0x2859a68, size 0x9c, virtual false, abstract: false, final false
  static inline void ClearAnsi(void* ptr);

  /// @brief Method ClearBSTR, addr 0x28598f0, size 0xac, virtual false, abstract: false, final false
  static inline void ClearBSTR(void* ptr);

  /// @brief Method ClearUnicode, addr 0x2859b20, size 0x90, virtual false, abstract: false, final false
  static inline void ClearUnicode(void* ptr);

  /// @brief Method Copy, addr 0x2859490, size 0xf4, virtual false, abstract: false, final false
  static inline void Copy(::ArrayW<uint8_t, ::Array<uint8_t>*> source, int32_t startIndex, void* destination, int32_t length);

  /// @brief Method Copy, addr 0x28596fc, size 0xf4, virtual false, abstract: false, final false
  static inline void Copy(void* source, ::ArrayW<char16_t, ::Array<char16_t>*> destination, int32_t startIndex, int32_t length);

  /// @brief Method Copy, addr 0x28597f0, size 0xf4, virtual false, abstract: false, final false
  static inline void Copy(void* source, ::ArrayW<float_t, ::Array<float_t>*> destination, int32_t startIndex, int32_t length);

  /// @brief Method Copy, addr 0x2859608, size 0xf4, virtual false, abstract: false, final false
  static inline void Copy(void* source, ::ArrayW<uint8_t, ::Array<uint8_t>*> destination, int32_t startIndex, int32_t length);

  /// @brief Method FreeBSTR, addr 0x28598e4, size 0x4, virtual false, abstract: false, final false
  static inline void FreeBSTR(void* ptr);

  /// @brief Method FreeCoTaskMem, addr 0x28598e8, size 0x4, virtual false, abstract: false, final false
  static inline void FreeCoTaskMem(void* ptr);

  /// @brief Method FreeHGlobal, addr 0x28598ec, size 0x4, virtual false, abstract: false, final false
  static inline void FreeHGlobal(void* hglobal);

  /// @brief Method GetCustomMarshalerInstance, addr 0x285a6e0, size 0x81c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::ICustomMarshaler* GetCustomMarshalerInstance(::System::Type* type, ::StringW cookie);

  /// @brief Method GetDelegateForFunctionPointer, addr 0x285a3d4, size 0x264, virtual false, abstract: false, final false
  static inline ::System::Delegate* GetDelegateForFunctionPointer(void* ptr, ::System::Type* t);

  /// @brief Method GetDelegateForFunctionPointer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDelegate> static inline TDelegate GetDelegateForFunctionPointer(void* ptr);

  /// @brief Method GetDelegateForFunctionPointerInternal, addr 0x285a3d0, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Delegate* GetDelegateForFunctionPointerInternal(void* ptr, ::System::Type* t);

  /// @brief Method GetFunctionPointerForDelegate, addr 0x285a63c, size 0xa4, virtual false, abstract: false, final false
  static inline void* GetFunctionPointerForDelegate(::System::Delegate* d);

  /// @brief Method GetFunctionPointerForDelegate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDelegate> static inline void* GetFunctionPointerForDelegate(TDelegate d);

  /// @brief Method GetFunctionPointerForDelegateInternal, addr 0x285a638, size 0x4, virtual false, abstract: false, final false
  static inline void* GetFunctionPointerForDelegateInternal(::System::Delegate* d);

  /// @brief Method GetHRForException, addr 0x2859cfc, size 0xc, virtual false, abstract: false, final false
  static inline int32_t GetHRForException(::System::Exception* e);

  /// @brief Method GetLastWin32Error, addr 0x2859d10, size 0x4, virtual false, abstract: false, final false
  static inline int32_t GetLastWin32Error();

  /// @brief Method IsComObject, addr 0x2859d08, size 0x8, virtual false, abstract: false, final false
  static inline bool IsComObject(::System::Object* o);

  /// @brief Method OffsetOf, addr 0x2859d14, size 0x4, virtual false, abstract: false, final false
  static inline void* OffsetOf(::System::Type* t, ::StringW fieldName);

  /// @brief Method PtrToStringAnsi, addr 0x2859d18, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW PtrToStringAnsi(void* ptr);

  /// @brief Method PtrToStringAnsi, addr 0x2859d1c, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW PtrToStringAnsi(void* ptr, int32_t len);

  /// @brief Method PtrToStringUni, addr 0x2859d20, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW PtrToStringUni(void* ptr);

  /// @brief Method PtrToStringUni, addr 0x2859d24, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW PtrToStringUni(void* ptr, int32_t len);

  /// @brief Method PtrToStructure, addr 0x2859d2c, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Object* PtrToStructure(void* ptr, ::System::Type* structureType);

  /// @brief Method PtrToStructure, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T PtrToStructure(void* ptr);

  /// @brief Method PtrToStructure, addr 0x2859d28, size 0x4, virtual false, abstract: false, final false
  static inline void PtrToStructure(void* ptr, ::System::Object* structure);

  /// @brief Method PtrToStructure, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void PtrToStructure(void* ptr, T structure);

  /// @brief Method ReadByte, addr 0x2859b04, size 0x1c, virtual false, abstract: false, final false
  static inline uint8_t ReadByte(void* ptr, int32_t ofs);

  /// @brief Method ReadInt16, addr 0x2859bfc, size 0x48, virtual false, abstract: false, final false
  static inline int16_t ReadInt16(void* ptr, int32_t ofs);

  /// @brief Method ReadInt32, addr 0x2859d30, size 0x40, virtual false, abstract: false, final false
  static inline int32_t ReadInt32(void* ptr);

  /// @brief Method ReadInt32, addr 0x285999c, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t ReadInt32(void* ptr, int32_t ofs);

  /// @brief Method SecureStringGlobalAllocator, addr 0x2859fe8, size 0x54, virtual false, abstract: false, final false
  static inline void* SecureStringGlobalAllocator(int32_t len);

  /// @brief Method SecureStringToBSTR, addr 0x2859e5c, size 0x188, virtual false, abstract: false, final false
  static inline void* SecureStringToBSTR(::System::Security::SecureString* s);

  /// @brief Method SecureStringToGlobalAllocUnicode, addr 0x285a2d0, size 0xf4, virtual false, abstract: false, final false
  static inline void* SecureStringToGlobalAllocUnicode(::System::Security::SecureString* s);

  /// @brief Method SecureStringToUnicode, addr 0x285a03c, size 0x294, virtual false, abstract: false, final false
  static inline void* SecureStringToUnicode(::System::Security::SecureString* s, ::System::Runtime::InteropServices::__Marshal__SecureStringAllocator* allocator);

  /// @brief Method SizeOf, addr 0x2859d70, size 0x70, virtual false, abstract: false, final false
  static inline int32_t SizeOf(::System::Object* structure);

  /// @brief Method SizeOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t SizeOf(T structure);

  /// @brief Method SizeOf, addr 0x2859de0, size 0x4, virtual false, abstract: false, final false
  static inline int32_t SizeOf(::System::Type* t);

  /// @brief Method StringToHGlobalAnsi, addr 0x2859de8, size 0x74, virtual false, abstract: false, final false
  static inline void* StringToHGlobalAnsi(::StringW s);

  /// @brief Method StringToHGlobalAnsi, addr 0x2859de4, size 0x4, virtual false, abstract: false, final false
  static inline void* StringToHGlobalAnsi(::cordl_internals::Ptr<char16_t> s, int32_t length);

  /// @brief Method StructureToPtr, addr 0x285a3c4, size 0x8, virtual false, abstract: false, final false
  static inline void StructureToPtr(::System::Object* structure, void* ptr, bool fDeleteOld);

  /// @brief Method StructureToPtr, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void StructureToPtr(T structure, void* ptr, bool fDeleteOld);

  /// @brief Method UnsafeAddrOfPinnedArrayElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void* UnsafeAddrOfPinnedArrayElement(::ArrayW<T, ::Array<T>*> arr, int32_t index);

  /// @brief Method UnsafeAddrOfPinnedArrayElement, addr 0x285a3cc, size 0x4, virtual false, abstract: false, final false
  static inline void* UnsafeAddrOfPinnedArrayElement(::System::Array* arr, int32_t index);

  /// @brief Method WriteByte, addr 0x28599e8, size 0x24, virtual false, abstract: false, final false
  static inline void WriteByte(void* ptr, int32_t ofs, uint8_t val);

  /// @brief Method WriteInt16, addr 0x2859bb0, size 0x4c, virtual false, abstract: false, final false
  static inline void WriteInt16(void* ptr, int32_t ofs, int16_t val);

  /// @brief Method ZeroFreeBSTR, addr 0x2859a0c, size 0x5c, virtual false, abstract: false, final false
  static inline void ZeroFreeBSTR(void* s);

  /// @brief Method ZeroFreeGlobalAllocAnsi, addr 0x2859c44, size 0x5c, virtual false, abstract: false, final false
  static inline void ZeroFreeGlobalAllocAnsi(void* s);

  /// @brief Method ZeroFreeGlobalAllocUnicode, addr 0x2859ca0, size 0x5c, virtual false, abstract: false, final false
  static inline void ZeroFreeGlobalAllocUnicode(void* s);

  /// @brief Method copy_from_unmanaged, addr 0x2859584, size 0x80, virtual false, abstract: false, final false
  static inline void copy_from_unmanaged(void* source, int32_t startIndex, ::System::Array* destination, int32_t length);

  /// @brief Method copy_from_unmanaged_fixed, addr 0x2859604, size 0x4, virtual false, abstract: false, final false
  static inline void copy_from_unmanaged_fixed(void* source, int32_t startIndex, ::System::Array* destination, int32_t length, ::cordl_internals::Ptr<void> fixed_destination_element);

  /// @brief Method copy_to_unmanaged, addr 0x28593a8, size 0xe8, virtual false, abstract: false, final false
  static inline void copy_to_unmanaged(::ArrayW<uint8_t, ::Array<uint8_t>*> source, int32_t startIndex, void* destination, int32_t length);

  /// @brief Method copy_to_unmanaged_fixed, addr 0x2859370, size 0x4, virtual false, abstract: false, final false
  static inline void copy_to_unmanaged_fixed(::System::Array* source, int32_t startIndex, void* destination, int32_t length, ::cordl_internals::Ptr<void> fixed_source_element);

  static inline ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, ::StringW>, ::System::Runtime::InteropServices::ICustomMarshaler*>*
  getStaticF_MarshalerInstanceCache();

  static inline ::System::Object* getStaticF_MarshalerInstanceCacheLock();

  static inline int32_t getStaticF_SystemDefaultCharSize();

  static inline int32_t getStaticF_SystemMaxDBCSCharSize();

  static inline void
  setStaticF_MarshalerInstanceCache(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, ::StringW>, ::System::Runtime::InteropServices::ICustomMarshaler*>* value);

  static inline void setStaticF_MarshalerInstanceCacheLock(::System::Object* value);

  static inline void setStaticF_SystemDefaultCharSize(int32_t value);

  static inline void setStaticF_SystemMaxDBCSCharSize(int32_t value);

  /// @brief Method skip_fixed, addr 0x2859374, size 0x34, virtual false, abstract: false, final false
  static inline bool skip_fixed(::System::Array* array, int32_t startIndex);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Marshal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Marshal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Marshal(Marshal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Marshal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Marshal(Marshal const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::Marshal, 0x10>, "Size mismatch!");

} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::Marshal);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::Marshal*, "System.Runtime.InteropServices", "Marshal");
NEED_NO_BOX(::System::Runtime::InteropServices::__Marshal__MarshalerInstanceKeyComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::__Marshal__MarshalerInstanceKeyComparer*, "System.Runtime.InteropServices", "Marshal/MarshalerInstanceKeyComparer");
NEED_NO_BOX(::System::Runtime::InteropServices::__Marshal__SecureStringAllocator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::__Marshal__SecureStringAllocator*, "System.Runtime.InteropServices", "Marshal/SecureStringAllocator");
NEED_NO_BOX(::System::Runtime::InteropServices::__Marshal____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::__Marshal____c*, "System.Runtime.InteropServices", "Marshal/<>c");
